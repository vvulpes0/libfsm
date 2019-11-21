/* Generated by libfsm */

#include LF_HEADER

#include <assert.h>
#include <stddef.h>

#include <fsm/fsm.h>

int
utf8_Glagolitic_fsm(struct fsm *fsm, struct fsm_state *x, struct fsm_state *y)
{
	struct fsm_state *s[8];
	size_t i;

	assert(x != NULL);
	assert(y != NULL);

	for (i = 0; i < 8; i++) {
		if (i == 0) {
			s[0] = x;
			continue;
		}

		if (i == 5) {
			s[5] = y;
			continue;
		}

		s[i] = fsm_addstate(fsm);
		if (s[i] == NULL) {
			return 0;
		}
	}

	if (!fsm_addedge_literal(fsm, s[0], s[1], 0xe2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[2], 0xf0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[3], 0xb0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[4], 0xb1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[6], 0x9e)) { return 0; }
	for (i = 0x80; i <= 0xae; i++) {
		if (!fsm_addedge_literal(fsm, s[3], s[5], i)) { return 0; }
	}
	for (i = 0xb0; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[3], s[5], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x9e; i++) {
		if (!fsm_addedge_literal(fsm, s[4], s[5], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[6], s[7], 0x80)) { return 0; }
	for (i = 0x80; i <= 0x86; i++) {
		if (!fsm_addedge_literal(fsm, s[7], s[5], i)) { return 0; }
	}
	for (i = 0x88; i <= 0x98; i++) {
		if (!fsm_addedge_literal(fsm, s[7], s[5], i)) { return 0; }
	}
	for (i = 0x9b; i <= 0xa1; i++) {
		if (!fsm_addedge_literal(fsm, s[7], s[5], i)) { return 0; }
	}
	for (i = 0xa3; i <= 0xa4; i++) {
		if (!fsm_addedge_literal(fsm, s[7], s[5], i)) { return 0; }
	}
	for (i = 0xa6; i <= 0xaa; i++) {
		if (!fsm_addedge_literal(fsm, s[7], s[5], i)) { return 0; }
	}


	return 1;
}

