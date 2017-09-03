/*
 * Copyright 2017 Scott Vokes
 *
 * See LICENCE for the full copyright terms.
 */

#include "fuzz_libfsm.h"

#include "type_info_nfa.h"
#include "type_info_fsm_literal.h"

/* In test_nfa_slow.c */
bool test_nfa_regress_slow_determinise(void);

static struct fsm *
nfa_of_spec(struct nfa_spec *spec, bool shuffle);

static bool apply_ops(struct test_env *env,
	struct nfa_spec *spec, struct fsm *fsm);

static enum theft_trial_res
prop_nfa_operations_should_not_impact_matching(struct theft *t,
	void *arg1, void *arg2);
static enum theft_trial_res
prop_nfa_edge_order_should_not_matter(struct theft *t,
	void *arg1);
static enum theft_trial_res
prop_slow_determinise(struct theft *t, void *arg1);
static enum theft_trial_res
prop_nfa_minimise_should_not_add_states(struct theft *t,
	void *arg1);

static enum theft_hook_shrink_pre_res
shrink_pre(const struct theft_hook_shrink_pre_info *info,
	void *hook_env)
{
	struct test_env *env = hook_env;
	struct timeval tv;
	size_t elapsed;

	assert(env->tag == 'E');

	(void) info;

	if (-1 == gettimeofday(&tv, NULL)) {
		return THEFT_HOOK_SHRINK_PRE_ERROR;
	}

	elapsed = tv.tv_sec - env->started_second;

	if ((tv.tv_sec % 10) == 0) {
		if (env->last_trace_second != (size_t) tv.tv_sec) {
			env->last_trace_second = tv.tv_sec;
 			fprintf(stdout, "Shrinking...successful %zd, failed %zd, %zd / %zd elapsed\n",
 				info->successful_shrinks, info->failed_shrinks,
 				elapsed, env->shrink_timeout);
		}
	}

	if (env->started_second == 0) {
		env->started_second = tv.tv_sec;
	} else if (env->shrink_timeout != 0 &&
		tv.tv_sec - env->started_second > env->shrink_timeout) {
		fprintf(stdout, "%s: Bailing after %zd seconds of shrinking\n",
			__func__, tv.tv_sec - env->started_second);
		return THEFT_HOOK_SHRINK_PRE_HALT;
	}

	return THEFT_HOOK_SHRINK_PRE_CONTINUE;
}

static bool
nfa_operations_should_not_impact_matching(void)
{
	enum theft_run_res res;

	//seed = 0xc1492b3691c1e1caLLU;
	//seed = 0xd0a0a7e4d10a3e96LLU;

	struct test_env env = {
		.tag = 'E',
		.verbosity = 0,
		.shrink_timeout = 60 * 10 /* 10 minutes */
	};

	struct theft_run_config cfg = {
		.name = __func__,
		.prop2 = prop_nfa_operations_should_not_impact_matching,
		.type_info = {
			&type_info_nfa,
			&type_info_fsm_literal
		},
		.trials = 100000,
		.hooks = {
			//.trial_pre = trial_pre_fail_once,
			.trial_post = trial_post_inc_verbosity,
			.shrink_pre = shrink_pre,
			.env = &env,
		},

		.seed = theft_seed_of_time(),
		.fork = {
			.enable = true,
			//.timeout = 1000,
		},
	};

	res = theft_run(&cfg);

	return res == THEFT_RUN_PASS;
}

#define PRINT_FSM(BANNER)						\
	do {								\
		if (verbosity > 0) {					\
			fprintf(stdout, "==== %s ====\n", BANNER);	\
			fsm_print(nfa, stdout, FSM_OUT_DOT);		\
		}							\
	} while(0)

static enum theft_trial_res
prop_nfa_operations_should_not_impact_matching(struct theft *t,
	void *arg1, void *arg2)
{
	struct nfa_spec *nfa_spec = arg1;
	struct fsm_literal_scen *literals = arg2;
	struct test_env *env;
	uint8_t verbosity;
	struct fsm *nfa;
	bool match[FSM_MAX_LITERALS] = { false };

	env = theft_hook_get_env(t);

	assert(nfa_spec->tag == 'N');
	assert(literals->tag == 'L');
	assert(env->tag == 'E');

	verbosity = env->verbosity;

	if (nfa_spec->state_count == 0) {
		return THEFT_TRIAL_SKIP;
	}
	if (literals->count == 0) {
		return THEFT_TRIAL_SKIP;
	}

	nfa = nfa_of_spec(nfa_spec, false);
	if (nfa == NULL) {
		return THEFT_TRIAL_ERROR;
	}

	/* Determinise, if not already a DFA -- it's part of `fsm_exec`'s
	 * API contract that it's only called on DFAs. */
	if (!fsm_all(nfa, fsm_isdfa)) {
		if (!fsm_determinise(nfa)) {
			fprintf(stdout, "FAIL: determinise before\n");
			return THEFT_TRIAL_FAIL;
		}
		PRINT_FSM("determinising before initial exec");
	}

	/* First pass -- note what, if anything, matches */
	for (size_t i = 0; i < literals->count; i++) {
		struct fsm_state *st;

		if (verbosity > 0) {
			fprintf(stderr, "%zd / %zd...\n", i, literals->count);
		}

		if (literals->pairs[i].string == NULL) {
			continue;
		}

		st = fsm_exec(nfa, scanner_next, & (struct scanner) {
				.tag  = 'S',
				.str  = literals->pairs[i].string,
				.size = literals->pairs[i].size,
			});

		match[i] = (st != NULL);
	}

	if (!apply_ops(env, nfa_spec, nfa)) {
		return THEFT_TRIAL_FAIL;
	}

	/*
	 * Determinise, if not already a DFA -- it's part of `fsm_exec`'s
	 * API contract that it's only called on DFAs.
	 */
	if (!fsm_all(nfa, fsm_isdfa)) {
		if (!fsm_determinise(nfa)) {
			fprintf(stdout, "FAIL: determinise after\n");
			return THEFT_TRIAL_FAIL;
		}
		PRINT_FSM("determinising before exec");
	}

	/* Second pass -- note if anything's match status changed */
	for (size_t i = 0; i < literals->count; i++) {
		struct scanner s = {
			.tag = 'S',
			.str = literals->pairs[i].string,
			.size = literals->pairs[i].size,
		};
		struct fsm_state *st = fsm_exec(nfa, scanner_next, &s);
		bool nmatch = (st != NULL);
		if (match[i] != nmatch) {
			if (verbosity > 0) {
				fprintf(stdout, "FAIL string %zd: match was %d, now %d\n",
					i, match[i], nmatch);
			}
			return THEFT_TRIAL_FAIL;
		}
	}

	fsm_free(nfa);

	return THEFT_TRIAL_PASS;
}

static bool
apply_ops(struct test_env *env, struct nfa_spec *nfa_spec,
	struct fsm *nfa)
{
	const uint8_t verbosity = env->verbosity;
	PRINT_FSM("BEFORE");

	for (size_t i = 0; i < MAX_NFA_OPS; i++) {
		struct timeval pre, post;
		enum nfa_op op;
		size_t delta;

		if (-1 == gettimeofday(&pre, NULL)) {
			return THEFT_TRIAL_ERROR;
		}

		op = nfa_spec->ops[i];
		switch (op) {
		case NFA_OP_NOP: continue;
		case NFA_OP_MINIMISE:
			if (!fsm_minimise(nfa)) {
				if (verbosity > 0) {
					fprintf(stdout, "FAIL: minimise\n");
				}
				return false;
			}
			break;

		case NFA_OP_DETERMINISE:
			if (!fsm_determinise(nfa)) {
				if (verbosity > 0) {
					fprintf(stdout, "FAIL: determinise\n");
				}
				return false;
			}
			break;

		case NFA_OP_TRIM:
			if (!fsm_trim(nfa)) {
				if (verbosity > 0) {
					fprintf(stdout, "FAIL: trim\n");
				}
				return false;
			}
			break;

		case NFA_OP_DOUBLE_REVERSE:
			if (!fsm_trim(nfa)) {
				if (verbosity > 0) {
					fprintf(stdout, "FAIL: first reverse's trim\n");
				}
				return false;
			}
			if (!fsm_reverse(nfa)) {
				if (verbosity > 0) {
					fprintf(stdout, "FAIL: first reverse\n");
				}
				return false;
			}
			PRINT_FSM("REVERSE");

			if (!fsm_trim(nfa)) {
				if (verbosity > 0) {
					fprintf(stdout, "FAIL: second reverse's trim\n");
				}
				return false;
			}
			if (!fsm_reverse(nfa)) {
				if (verbosity > 0) {
					fprintf(stdout, "FAIL: second reverse\n");
				}
				return false;
			}
			break;

		case NFA_OP_DOUBLE_COMPLEMENT:
			/* TODO: is complement an operation that should cancel out? */
			if (!fsm_complement(nfa)) {
				if (verbosity > 0) {
					fprintf(stdout, "FAIL: first complement\n");
				}
				return false;
			}
			PRINT_FSM("REVERSE");

			if (!fsm_complement(nfa)) {
				if (verbosity > 0) {
					fprintf(stdout, "FAIL: second complement\n");
				}
				return false;
			}
			break;

		default:
			assert(false);
			return false;
		}

		if (-1 == gettimeofday(&post, NULL)) {
			assert(false);
			return false;
		}

		delta = delta_msec(&pre, &post);
		if ((verbosity > 0 && delta > 1000) || (delta > 10000)) {
			fprintf(stderr, "Slow op: %s\n", nfa_op_name(op));
		}

		PRINT_FSM(nfa_op_name(op));
	}

	PRINT_FSM("AFTER");

	return true;
}

const struct fsm_options test_nfa_fsm_options = {
	.anonymous_states = 1,
	.consolidate_edges = 1,
	.always_hex = 1,
};

static struct fsm *
nfa_of_spec(struct nfa_spec *spec, bool shuffle)
{
	struct fsm_state *states[spec->state_count];
	struct fsm *nfa;

	nfa = fsm_new(&test_nfa_fsm_options);
	if (nfa == NULL) {
		return NULL;
	}

	/* First pass, create states */
	for (size_t i = 0; i < spec->state_count; i++) {
		states[i] = fsm_addstate(nfa);
		if (states[i] == NULL) {
			return NULL;
		}

		if (spec->states[i]->is_end) {
			fsm_setend(nfa, states[i], 1);
		}
	}

	fsm_setstart(nfa, states[0]);

	/* Second pass, add edges */
	for (size_t si = 0; si < spec->state_count; si++) {
		struct nfa_state *s = spec->states[si];

		size_t *pv = NULL;
		if (shuffle) {
			pv = gen_permutation_vector(s->edge_count, s->shuffle_seed);
			if (pv == NULL) {
				return NULL;
			}
		}

		for (size_t ei = 0; ei < s->edge_count; ei++) {
			struct nfa_edge *e = &s->edges[pv ? pv[ei] : ei];
			struct fsm_state *to = states[e->to % spec->state_count];
			switch (e->t) {
			case NFA_EDGE_EPSILON:
				if (!fsm_addedge_epsilon(nfa,
					states[s->id], to)) { return NULL; }
				break;
			case NFA_EDGE_ANY:
				if (!fsm_addedge_any(nfa,
					states[s->id], to)) { return NULL; }
				break;
			case NFA_EDGE_LITERAL:
				if (!fsm_addedge_literal(nfa,
					states[s->id], to,
					(char) e->u.literal.byte)) { return NULL; }
				break;
			}
		}

		if (shuffle) {
			free(pv);
		}
	}

	return nfa;
}

static bool nfa_edge_order_should_not_matter(void)
{
	enum theft_run_res res;

	//seed = 0xc72ea37eb48d9971LLU;

	struct test_env env = {
		.tag = 'E',
		.verbosity = 0,
		.shrink_timeout = 60 * 10 /* 10 minutes */,
	};

	struct theft_run_config cfg = {
		.name = __func__,
		.prop1 = prop_nfa_edge_order_should_not_matter,
		.type_info = { &type_info_nfa },
		.trials = 100000,
		.hooks = {
			.trial_pre = trial_pre_fail_once,
			.trial_post = trial_post_inc_verbosity,
			.shrink_pre = shrink_pre,
			.env = &env,
		},

		.seed = theft_seed_of_time(),
		.fork = {
			.enable = true,
		},
	};

	res = theft_run(&cfg);

	return res == THEFT_RUN_PASS;
}

static enum theft_trial_res
prop_nfa_edge_order_should_not_matter(struct theft *t,
	void *arg1)
{
	struct nfa_spec *nfa_spec = arg1;
	enum theft_trial_res res;
	struct test_env *env;
	struct fsm *nfa, *fan;
	int eq;

	env = theft_hook_get_env(t);

	assert(env->tag == 'E');

	assert(nfa_spec->tag == 'N');
	if (nfa_spec->state_count == 0) {
		return THEFT_TRIAL_SKIP;
	}

	nfa = nfa_of_spec(nfa_spec, false);
	if (nfa == NULL) {
		return THEFT_TRIAL_ERROR;
	}

	fan = nfa_of_spec(nfa_spec, true);
	if (fan == NULL) {
		return THEFT_TRIAL_ERROR;
	}

	if (!apply_ops(env, nfa_spec, nfa)) {
		fprintf(stdout, "FAILURE: apply_ops: fail on first NFA\n");
		return THEFT_TRIAL_FAIL;
	}
	if (!apply_ops(env, nfa_spec, fan)) {
		fprintf(stdout, "FAILURE: apply_ops: fail on second NFA\n");
		return THEFT_TRIAL_FAIL;
	}

	eq = fsm_equal(nfa, fan);
	if (env->verbosity > 0) {
		fprintf(stdout, "fsm_equal: %d\n", eq);
	}
	switch (eq) {
	default:
	case -1: res = THEFT_TRIAL_ERROR; break;
	case  0: res = THEFT_TRIAL_FAIL;  break;
	case  1: res = THEFT_TRIAL_PASS;  break;
	}

	fsm_free(nfa);
	fsm_free(fan);

	return res;
}

static bool
nfa_regress_minimise_false_positive(void)
{
	struct fsm *nfa;
	struct fsm_state *st;
	bool match;
#define STATE_COUNT 2
	struct fsm_state *states[STATE_COUNT];
	uint8_t str[] = { 0x00 };

	nfa = fsm_new(&test_nfa_fsm_options);
	assert(nfa); /* XXX */

	for (size_t i = 0; i < STATE_COUNT; i++) {
		states[i] = fsm_addstate(nfa);
		assert(states[i]); /* XXX */
	}

	fsm_setstart(nfa, states[0]);

	if (!fsm_addedge_any(nfa, states[1], states[1])) {
		assert(false);
	}

	fsm_setend(nfa, states[STATE_COUNT - 1], 1);
#undef STATE_COUNT

	printf("BEFORE fsm_minimise\n");
	fsm_print(nfa, stdout, FSM_OUT_DOT);

	if (!fsm_minimise(nfa)) {
		assert(false);
	}

	printf("AFTER fsm_minimise\n");
	fsm_print(nfa, stdout, FSM_OUT_DOT);

	st = fsm_exec(nfa, scanner_next, & (struct scanner) {
			.tag  = 'S',
			.str  = str,
			.size = sizeof str
		});

	match = (st != NULL);

	fsm_free(nfa);

	return !match;
}

static bool
nfa_slow_determinise(void)
{
	enum theft_run_res res;

	//seed = 0xe0083991257118b0LLU;

	struct test_env env = {
		.tag = 'E',
		.verbosity = 0,
		.shrink_timeout = 60,
	};

	struct theft_run_config cfg = {
		.name = __func__,
		.prop1 = prop_slow_determinise,
		.type_info = { &type_info_nfa, },
		.hooks = {
			.trial_pre = trial_pre_fail_once,
			.trial_post = trial_post_inc_verbosity,
			.shrink_pre = shrink_pre,
			.env = &env,
		},
		.seed = theft_seed_of_time(),
		.fork = {
			.enable = true,
		},
	};

	res = theft_run(&cfg);

	return res == THEFT_RUN_PASS;
}

static enum theft_trial_res
prop_slow_determinise(struct theft *t, void *arg1)
{
	struct nfa_spec *nfa_spec = arg1;
	enum theft_trial_res res;
	struct timeval pre, post;
	struct test_env *env;
	struct fsm *nfa;
	uint8_t verbosity;
	size_t elapsed_msec;

	env = theft_hook_get_env(t);
	assert(env->tag == 'E');
	verbosity = env->verbosity;

	assert(nfa_spec->tag == 'N');

	if (nfa_spec->state_count == 0) {
		return THEFT_TRIAL_SKIP;
	}

	nfa = nfa_of_spec(nfa_spec, false);
	if (nfa == NULL) {
		return THEFT_TRIAL_ERROR;
	}

	if (-1 == gettimeofday(&pre, NULL)) {
		assert(false);
		return false;
	}
	if (!fsm_determinise(nfa)) {
		fprintf(stdout, "FAIL: determinise\n");
		return THEFT_TRIAL_ERROR;
	}
	if (-1 == gettimeofday(&post, NULL)) {
		assert(false);
		return false;
	}
	elapsed_msec = 1000 * (post.tv_sec - pre.tv_sec)
		+ (post.tv_usec / 1000 - pre.tv_usec / 1000);

	if (verbosity > 0) {
		fprintf(stdout, "%s: fsm_determinise took %zd msec\n",
			__func__, elapsed_msec);
	}

	res = elapsed_msec < 2000
		? THEFT_TRIAL_PASS
		: THEFT_TRIAL_FAIL;

	fsm_free(nfa);

	return res;
}

static bool
nfa_minimise_should_not_add_states(void)
{
	enum theft_run_res res;

	struct test_env env = {
		.tag = 'E',
		.verbosity = 0,
		.shrink_timeout = 10 * 60,
	};

	struct theft_run_config cfg = {
		.name = __func__,
		.prop1 = prop_nfa_minimise_should_not_add_states,
		.type_info = { &type_info_nfa, },
		.hooks = {
			.trial_pre = trial_pre_fail_once,
			.trial_post = trial_post_inc_verbosity,
			.shrink_pre = shrink_pre,
			.env = &env,
		},
		.seed = theft_seed_of_time(),
		.fork = {
			.enable = true,
		},
	};

	res = theft_run(&cfg);

	return res == THEFT_RUN_PASS;
}

static enum theft_trial_res
prop_nfa_minimise_should_not_add_states(struct theft *t,
	void *arg1)
{
	struct nfa_spec *nfa_spec = arg1;
	struct test_env *env;
	uint8_t verbosity;
	struct fsm *nfa;
	size_t count_before, count_after;

	env = theft_hook_get_env(t);
	assert(env->tag == 'E');

	verbosity = env->verbosity;

	assert(nfa_spec->tag == 'N');
	if (nfa_spec->state_count == 0) {
		return THEFT_TRIAL_SKIP;
	}

	nfa = nfa_of_spec(nfa_spec, false);
	if (nfa == NULL) {
		return THEFT_TRIAL_ERROR;
	}

	count_before = fsm_count(nfa, fsm_isany);
	if (!fsm_minimise(nfa)) {
		if (verbosity > 0) {
			fprintf(stdout, "%s: fsm_minimise failure\n", __func__);
		}
		return THEFT_TRIAL_ERROR;
	}
	count_after = fsm_count(nfa, fsm_isany);

	if (verbosity > 0) {
		fprintf(stdout, "%s: before %zd => after %zd\n",
			__func__, count_before, count_after);
	}

	fsm_free(nfa);

	return count_after <= count_before
		? THEFT_TRIAL_PASS
		: THEFT_TRIAL_FAIL;
}

void
register_test_nfa(void)
{
	reg_test("nfa_operations_should_not_impact_matching",
		nfa_operations_should_not_impact_matching);
	reg_test("nfa_edge_order_should_not_matter",
		nfa_edge_order_should_not_matter);
	reg_test("nfa_regress_minimise_false_positive",
		nfa_regress_minimise_false_positive);
	reg_test("nfa_slow_determinise",
		nfa_slow_determinise);
	reg_test("nfa_regress_slow_determinise",
		test_nfa_regress_slow_determinise);

	reg_test("nfa_minimise_should_not_add_states", nfa_minimise_should_not_add_states);
}

