/* Generated by libfsm */

#include LF_HEADER

#include <assert.h>
#include <stddef.h>

#include <fsm/fsm.h>

int
utf8_C_fsm(struct fsm *fsm, struct fsm_state *x, struct fsm_state *y)
{
	struct fsm_state *s[31];
	size_t i;

	assert(x != NULL);
	assert(y != NULL);

	for (i = 0; i < 31; i++) {
		if (i == 0) {
			s[0] = x;
			continue;
		}

		if (i == 1) {
			s[1] = y;
			continue;
		}

		s[i] = fsm_addstate(fsm);
		if (s[i] == NULL) {
			return 0;
		}
	}

	for (i = 0x00; i <= 0x1f; i++) {
		if (!fsm_addedge_literal(fsm, s[0], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[0], s[1], '\x7f')) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[2], 0xc2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[3], 0xd8)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[4], 0xdb)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[5], 0xdc)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[6], 0xe0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[7], 0xe1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[8], 0xe2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[9], 0xee)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[10], 0xef)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[11], 0xf0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[12], 0xf3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[13], 0xf4)) { return 0; }
	for (i = 0x80; i <= 0x9f; i++) {
		if (!fsm_addedge_literal(fsm, s[2], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[2], s[1], 0xad)) { return 0; }
	for (i = 0x80; i <= 0x85; i++) {
		if (!fsm_addedge_literal(fsm, s[3], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[3], s[1], 0x9c)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[1], 0x9d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[5], s[1], 0x8f)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[22], 0xa3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[19], 0xa0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[14], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[15], 0x81)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[9], s[18], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[20], 0xa3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[20], 0xbb)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[21], 0xbf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[11], s[23], 0x91)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[11], s[24], 0x9b)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[11], s[25], 0x9d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[12], s[9], 0xb0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[12], s[16], 0xa0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[12], s[17], 0xbf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[13], s[9], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[13], s[17], 0x8f)) { return 0; }
	for (i = 0x8b; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[14], s[1], i)) { return 0; }
	}
	for (i = 0xaa; i <= 0xae; i++) {
		if (!fsm_addedge_literal(fsm, s[14], s[1], i)) { return 0; }
	}
	for (i = 0xa0; i <= 0xa4; i++) {
		if (!fsm_addedge_literal(fsm, s[15], s[1], i)) { return 0; }
	}
	for (i = 0xa6; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[15], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[16], s[28], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[16], s[29], 0x81)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[17], s[27], 0xbf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[18], s[1], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[19], s[1], 0x8e)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[20], s[1], 0xbf)) { return 0; }
	for (i = 0xb9; i <= 0xbb; i++) {
		if (!fsm_addedge_literal(fsm, s[21], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[22], s[1], 0xa2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[23], s[27], 0x82)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[24], s[26], 0xb2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[30], 0x85)) { return 0; }
	for (i = 0xa0; i <= 0xa3; i++) {
		if (!fsm_addedge_literal(fsm, s[26], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[27], s[1], 0xbd)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[1], 0x81)) { return 0; }
	for (i = 0xa0; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[28], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[29], s[1], i)) { return 0; }
	}
	for (i = 0xb3; i <= 0xba; i++) {
		if (!fsm_addedge_literal(fsm, s[30], s[1], i)) { return 0; }
	}


	return 1;
}

