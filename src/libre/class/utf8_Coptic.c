/* Generated by libfsm */

#include LF_HEADER

#include <assert.h>
#include <stddef.h>

#include <fsm/fsm.h>

int
utf8_Coptic_fsm(struct fsm *fsm, struct fsm_state *x, struct fsm_state *y)
{
	struct fsm_state *s[6];
	size_t i;

	assert(x != NULL);
	assert(y != NULL);

	for (i = 0; i < 6; i++) {
		if (i == 0) {
			s[0] = x;
			continue;
		}

		if (i == 3) {
			s[3] = y;
			continue;
		}

		s[i] = fsm_addstate(fsm);
		if (s[i] == NULL) {
			return 0;
		}
	}

	if (!fsm_addedge_literal(fsm, s[0], s[1], 0xcf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[2], 0xe2)) { return 0; }
	for (i = 0xa2; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[1], s[3], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[2], s[4], 0xb2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[5], 0xb3)) { return 0; }
	for (i = 0x80; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[4], s[3], i)) { return 0; }
	}
	for (i = 0x80; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[5], s[3], i)) { return 0; }
	}
	for (i = 0xb9; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[5], s[3], i)) { return 0; }
	}


	return 1;
}

