#ifndef TEST_LIBFSM_H
#define TEST_LIBFSM_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>
#include <inttypes.h>
#include <ctype.h>
#include <sys/time.h>

#include <theft.h>

#include <fsm/bool.h>
#include <fsm/cost.h>
#include <fsm/fsm.h>
#include <fsm/out.h>
#include <fsm/options.h>
#include <fsm/pred.h>
#include <fsm/walk.h>
#include <re/re.h>

struct test_env {
	char tag;
	enum re_dialect dialect;
	uint8_t verbosity;
	struct theft_print_trial_result_env print_env;
	size_t shrink_timeout;  // in seconds
	size_t started_second;
	size_t last_trace_second;
};

struct string_pair {
	size_t size;
	uint8_t *string;
};

struct scanner {
	char tag;
	void *magic;
	const uint8_t *str;
	size_t size;
	size_t offset;
};

void print_or_hexdump(FILE *f, const uint8_t *buf, size_t size);
void hexdump(FILE *f, const uint8_t *buf, size_t size);
int scanner_next(void *opaque);

typedef bool test_fun(void);
typedef bool test_fun1(uintptr_t arg);

void reg_test(const char *name, test_fun *test);
void reg_test1(const char *name, test_fun1 *test, uintptr_t arg);

void register_test_literals(void);
void register_test_re(void);
void register_test_adt_priq(void);
void register_test_adt_set(void);
void register_test_nfa(void);

int test_get_verbosity(void);

/* Halt after one failure. */
enum theft_hook_trial_pre_res
trial_pre_fail_once(const struct theft_hook_trial_pre_info *info,
    void *penv);

/* On failure, increase verbosity and repeat once. */
enum theft_hook_trial_post_res
trial_post_inc_verbosity(const struct theft_hook_trial_post_info *info,
    void *penv);

bool test_re_parser_literal(uint8_t verbosity,
    const uint8_t *re, size_t re_size,
    size_t count, const struct string_pair *pairs);

bool test_re_parser_pcre(uint8_t verbosity,
    const uint8_t *re_string, size_t re_size,
    size_t pos_count, const struct string_pair *pos_pairs,
    size_t neg_count, const struct string_pair *neg_pairs);

size_t delta_msec(const struct timeval *pre, const struct timeval *post);

size_t *gen_permutation_vector(size_t length, uint32_t seed);


#define LOG_OUT stdout

#define VERBOSITY_LOW (test_get_verbosity())
#define VERBOSITY_HIGH (test_get_verbosity() + 1)

#if 1
#define LOG(...) fprintf(LOG_OUT, __VA_ARGS__)
#else
#define LOG(...)
#endif

#define ASSERT(COND, ...)					       \
	do {							       \
		if (!(COND)) {					       \
			if (m->env->verbosity > 0) {		       \
				fprintf(stderr, __VA_ARGS__);	       \
			}					       \
			return false;				       \
		}						       \
	} while(0)


#define LOG_FAIL(VERBOSITY, ...)				       \
	do {							       \
		if (VERBOSITY > 0) {				       \
			fprintf(LOG_OUT, __VA_ARGS__);		       \
		}						       \
	} while(0)

#endif
