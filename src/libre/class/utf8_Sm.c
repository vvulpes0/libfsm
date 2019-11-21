/* Generated by libfsm */

#include LF_HEADER

#include <assert.h>
#include <stddef.h>

#include <fsm/fsm.h>

int
utf8_Sm_fsm(struct fsm *fsm, struct fsm_state *x, struct fsm_state *y)
{
	struct fsm_state *s[41];
	size_t i;

	assert(x != NULL);
	assert(y != NULL);

	for (i = 0; i < 41; i++) {
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

	if (!fsm_addedge_literal(fsm, s[0], s[1], '+')) { return 0; }
	for (i = 0x3c; i <= 0x3e; i++) {
		if (!fsm_addedge_literal(fsm, s[0], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[0], s[1], '|')) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[1], '~')) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[2], 0xc2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[3], 0xc3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[4], 0xcf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[5], 0xd8)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[6], 0xe2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[7], 0xef)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[8], 0xf0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[1], 0xac)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[1], 0xb1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[3], s[1], 0x97)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[3], s[1], 0xb7)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[1], 0xb6)) { return 0; }
	for (i = 0x86; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[5], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[6], s[16], 0x81)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[17], 0x82)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[18], 0x84)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[19], 0x85)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[20], 0x86)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[21], 0x87)) { return 0; }
	for (i = 0x88; i <= 0x8b; i++) {
		if (!fsm_addedge_literal(fsm, s[6], s[22], i)) { return 0; }
	}
	for (i = 0xa4; i <= 0xa5; i++) {
		if (!fsm_addedge_literal(fsm, s[6], s[22], i)) { return 0; }
	}
	for (i = 0xa8; i <= 0xab; i++) {
		if (!fsm_addedge_literal(fsm, s[6], s[22], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[6], s[23], 0x8c)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[24], 0x8d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[25], 0x8e)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[26], 0x8f)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[27], 0x96)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[28], 0x97)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[29], 0x99)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[30], 0x9f)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[31], 0xa6)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[32], 0xa7)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[33], 0xac)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[34], 0xad)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[9], 0xac)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[10], 0xb9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[11], 0xbc)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[12], 0xbd)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[13], 0xbf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[14], 0x9d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[15], 0x9e)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[9], s[1], 0xa9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[1], 0xa2)) { return 0; }
	for (i = 0xa4; i <= 0xa6; i++) {
		if (!fsm_addedge_literal(fsm, s[10], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[11], s[1], 0x8b)) { return 0; }
	for (i = 0x9c; i <= 0x9e; i++) {
		if (!fsm_addedge_literal(fsm, s[11], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[12], s[1], 0x9c)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[12], s[1], 0x9e)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[13], s[1], 0xa2)) { return 0; }
	for (i = 0xa9; i <= 0xac; i++) {
		if (!fsm_addedge_literal(fsm, s[13], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[14], s[36], 0x9b)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[14], s[37], 0x9c)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[14], s[38], 0x9d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[14], s[39], 0x9e)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[14], s[40], 0x9f)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[15], s[35], 0xbb)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[16], s[1], 0x84)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[16], s[1], 0x92)) { return 0; }
	for (i = 0xba; i <= 0xbc; i++) {
		if (!fsm_addedge_literal(fsm, s[16], s[1], i)) { return 0; }
	}
	for (i = 0x8a; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[17], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[18], s[1], 0x98)) { return 0; }
	for (i = 0x80; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[19], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[19], s[1], 0x8b)) { return 0; }
	for (i = 0x90; i <= 0x94; i++) {
		if (!fsm_addedge_literal(fsm, s[20], s[1], i)) { return 0; }
	}
	for (i = 0x9a; i <= 0x9b; i++) {
		if (!fsm_addedge_literal(fsm, s[20], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[20], s[1], 0xa0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[20], s[1], 0xa3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[20], s[1], 0xa6)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[20], s[1], 0xae)) { return 0; }
	for (i = 0x8e; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[21], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[21], s[1], 0x92)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[21], s[1], 0x94)) { return 0; }
	for (i = 0xb4; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[21], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[22], s[1], i)) { return 0; }
	}
	for (i = 0xa0; i <= 0xa1; i++) {
		if (!fsm_addedge_literal(fsm, s[23], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[24], s[1], 0xbc)) { return 0; }
	for (i = 0x9b; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[25], s[1], i)) { return 0; }
	}
	for (i = 0x9c; i <= 0xa1; i++) {
		if (!fsm_addedge_literal(fsm, s[26], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[27], s[1], 0xb7)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[1], 0x81)) { return 0; }
	for (i = 0xb8; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[28], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[29], s[1], 0xaf)) { return 0; }
	for (i = 0x80; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[30], s[1], i)) { return 0; }
	}
	for (i = 0x87; i <= 0xa5; i++) {
		if (!fsm_addedge_literal(fsm, s[30], s[1], i)) { return 0; }
	}
	for (i = 0xb0; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[30], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x82; i++) {
		if (!fsm_addedge_literal(fsm, s[31], s[1], i)) { return 0; }
	}
	for (i = 0x99; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[31], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x97; i++) {
		if (!fsm_addedge_literal(fsm, s[32], s[1], i)) { return 0; }
	}
	for (i = 0x9c; i <= 0xbb; i++) {
		if (!fsm_addedge_literal(fsm, s[32], s[1], i)) { return 0; }
	}
	for (i = 0xbe; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[32], s[1], i)) { return 0; }
	}
	for (i = 0xb0; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[33], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[34], s[1], i)) { return 0; }
	}
	for (i = 0x87; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[34], s[1], i)) { return 0; }
	}
	for (i = 0xb0; i <= 0xb1; i++) {
		if (!fsm_addedge_literal(fsm, s[35], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[36], s[1], 0x81)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[36], s[1], 0x9b)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[36], s[1], 0xbb)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[37], s[1], 0x95)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[37], s[1], 0xb5)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[38], s[1], 0x8f)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[38], s[1], 0xaf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[39], s[1], 0x89)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[39], s[1], 0xa9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[40], s[1], 0x83)) { return 0; }


	return 1;
}

