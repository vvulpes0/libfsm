/* Generated by libfsm */

#include LF_HEADER

#include <assert.h>
#include <stddef.h>

#include <fsm/fsm.h>

int
utf8_N_fsm(struct fsm *fsm, struct fsm_state *x, struct fsm_state *y)
{
	struct fsm_state *s[81];
	size_t i;

	assert(x != NULL);
	assert(y != NULL);

	for (i = 0; i < 81; i++) {
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

	for (i = 0x30; i <= 0x39; i++) { /* '0' .. '9' */
		if (!fsm_addedge_literal(fsm, s[0], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[0], s[2], 0xc2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[3], 0xd9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[4], 0xdb)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[5], 0xdf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[6], 0xe0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[7], 0xe1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[8], 0xe2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[9], 0xe3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[10], 0xea)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[11], 0xef)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[12], 0xf0)) { return 0; }
	for (i = 0xb2; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[2], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[2], s[1], 0xb9)) { return 0; }
	for (i = 0xbc; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[2], s[1], i)) { return 0; }
	}
	for (i = 0xa0; i <= 0xa9; i++) {
		if (!fsm_addedge_literal(fsm, s[3], s[1], i)) { return 0; }
	}
	for (i = 0xb0; i <= 0xb9; i++) {
		if (!fsm_addedge_literal(fsm, s[4], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x89; i++) {
		if (!fsm_addedge_literal(fsm, s[5], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[6], s[13], 0xb9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[13], 0xbb)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[18], 0xa5)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[18], 0xa9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[18], 0xab)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[18], 0xb3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[18], 0xb7)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[19], 0xa7)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[20], 0xad)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[21], 0xaf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[22], 0xb1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[23], 0xb5)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[6], s[24], 0xbc)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[4], 0xae)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[5], 0x81)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[13], 0x82)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[13], 0xa0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[13], 0xad)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[43], 0x8d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[44], 0x9b)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[45], 0x9f)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[46], 0xa5)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[47], 0xa7)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[48], 0xaa)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[48], 0xb1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[5], 0x82)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[35], 0x9d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[72], 0x81)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[73], 0x85)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[74], 0x86)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[75], 0x91)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[76], 0x92)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[77], 0x93)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[78], 0x9e)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[8], s[79], 0xb3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[9], s[3], 0x88)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[9], s[14], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[9], s[15], 0x86)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[9], s[16], 0x89)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[9], s[17], 0x8a)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[3], 0x98)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[4], 0xaf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[5], 0xa4)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[13], 0xa3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[13], 0xa9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[18], 0x9b)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[25], 0xa0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[10], s[26], 0xa7)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[11], s[13], 0xbc)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[12], s[27], 0x90)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[12], s[28], 0x91)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[12], s[29], 0x92)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[12], s[30], 0x96)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[12], s[31], 0x9d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[12], s[32], 0x9e)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[12], s[33], 0x9f)) { return 0; }
	for (i = 0x90; i <= 0x99; i++) {
		if (!fsm_addedge_literal(fsm, s[13], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[14], s[1], 0x87)) { return 0; }
	for (i = 0xa1; i <= 0xa9; i++) {
		if (!fsm_addedge_literal(fsm, s[14], s[1], i)) { return 0; }
	}
	for (i = 0xb8; i <= 0xba; i++) {
		if (!fsm_addedge_literal(fsm, s[14], s[1], i)) { return 0; }
	}
	for (i = 0x92; i <= 0x95; i++) {
		if (!fsm_addedge_literal(fsm, s[15], s[1], i)) { return 0; }
	}
	for (i = 0x88; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[16], s[1], i)) { return 0; }
	}
	for (i = 0x91; i <= 0x9f; i++) {
		if (!fsm_addedge_literal(fsm, s[16], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x89; i++) {
		if (!fsm_addedge_literal(fsm, s[17], s[1], i)) { return 0; }
	}
	for (i = 0xb1; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[17], s[1], i)) { return 0; }
	}
	for (i = 0xa6; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[18], s[1], i)) { return 0; }
	}
	for (i = 0xa6; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[19], s[1], i)) { return 0; }
	}
	for (i = 0xb4; i <= 0xb9; i++) {
		if (!fsm_addedge_literal(fsm, s[19], s[1], i)) { return 0; }
	}
	for (i = 0xa6; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[20], s[1], i)) { return 0; }
	}
	for (i = 0xb2; i <= 0xb7; i++) {
		if (!fsm_addedge_literal(fsm, s[20], s[1], i)) { return 0; }
	}
	for (i = 0xa6; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[21], s[1], i)) { return 0; }
	}
	for (i = 0xa6; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[22], s[1], i)) { return 0; }
	}
	for (i = 0xb8; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[22], s[1], i)) { return 0; }
	}
	for (i = 0x98; i <= 0x9e; i++) {
		if (!fsm_addedge_literal(fsm, s[23], s[1], i)) { return 0; }
	}
	for (i = 0xa6; i <= 0xb8; i++) {
		if (!fsm_addedge_literal(fsm, s[23], s[1], i)) { return 0; }
	}
	for (i = 0xa0; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[24], s[1], i)) { return 0; }
	}
	for (i = 0xb0; i <= 0xb5; i++) {
		if (!fsm_addedge_literal(fsm, s[25], s[1], i)) { return 0; }
	}
	for (i = 0x90; i <= 0x99; i++) {
		if (!fsm_addedge_literal(fsm, s[26], s[1], i)) { return 0; }
	}
	for (i = 0xb0; i <= 0xb9; i++) {
		if (!fsm_addedge_literal(fsm, s[26], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[27], s[3], 0x92)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[52], 0x84)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[53], 0x85)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[54], 0x86)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[55], 0x8b)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[56], 0x8c)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[57], 0x8d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[58], 0x8f)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[59], 0xa1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[60], 0xa2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[61], 0xa3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[62], 0xa4)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[63], 0xa6)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[64], 0xa7)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[65], 0xa9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[66], 0xaa)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[67], 0xab)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[68], 0xad)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[69], 0xae)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[70], 0xb3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[71], 0xb9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[4], 0x83)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[4], 0x8b)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[5], 0x9b)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[13], 0x91)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[13], 0x93)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[13], 0x99)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[13], 0xb5)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[34], 0x81)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[35], 0x84)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[36], 0x87)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[37], 0x9c)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[38], 0xa3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[28], s[39], 0xb1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[29], s[40], 0x90)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[29], s[41], 0x91)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[30], s[3], 0xa9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[30], s[80], 0xad)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[31], s[49], 0x8d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[31], s[50], 0x9f)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[32], s[13], 0xa5)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[32], s[42], 0xa3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[33], s[51], 0x84)) { return 0; }
	for (i = 0x92; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[34], s[1], i)) { return 0; }
	}
	for (i = 0xb6; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[35], s[1], i)) { return 0; }
	}
	for (i = 0x90; i <= 0x99; i++) {
		if (!fsm_addedge_literal(fsm, s[36], s[1], i)) { return 0; }
	}
	for (i = 0xa1; i <= 0xb4; i++) {
		if (!fsm_addedge_literal(fsm, s[36], s[1], i)) { return 0; }
	}
	for (i = 0xb0; i <= 0xbb; i++) {
		if (!fsm_addedge_literal(fsm, s[37], s[1], i)) { return 0; }
	}
	for (i = 0xa0; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[38], s[1], i)) { return 0; }
	}
	for (i = 0x90; i <= 0xac; i++) {
		if (!fsm_addedge_literal(fsm, s[39], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[40], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0xae; i++) {
		if (!fsm_addedge_literal(fsm, s[41], s[1], i)) { return 0; }
	}
	for (i = 0x87; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[42], s[1], i)) { return 0; }
	}
	for (i = 0xa9; i <= 0xbc; i++) {
		if (!fsm_addedge_literal(fsm, s[43], s[1], i)) { return 0; }
	}
	for (i = 0xae; i <= 0xb0; i++) {
		if (!fsm_addedge_literal(fsm, s[44], s[1], i)) { return 0; }
	}
	for (i = 0xa0; i <= 0xa9; i++) {
		if (!fsm_addedge_literal(fsm, s[45], s[1], i)) { return 0; }
	}
	for (i = 0xb0; i <= 0xb9; i++) {
		if (!fsm_addedge_literal(fsm, s[45], s[1], i)) { return 0; }
	}
	for (i = 0x86; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[46], s[1], i)) { return 0; }
	}
	for (i = 0x90; i <= 0x9a; i++) {
		if (!fsm_addedge_literal(fsm, s[47], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x89; i++) {
		if (!fsm_addedge_literal(fsm, s[48], s[1], i)) { return 0; }
	}
	for (i = 0x90; i <= 0x99; i++) {
		if (!fsm_addedge_literal(fsm, s[48], s[1], i)) { return 0; }
	}
	for (i = 0xa0; i <= 0xb1; i++) {
		if (!fsm_addedge_literal(fsm, s[49], s[1], i)) { return 0; }
	}
	for (i = 0x8e; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[50], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[51], s[1], i)) { return 0; }
	}
	for (i = 0x87; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[52], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0xb8; i++) {
		if (!fsm_addedge_literal(fsm, s[53], s[1], i)) { return 0; }
	}
	for (i = 0x8a; i <= 0x8b; i++) {
		if (!fsm_addedge_literal(fsm, s[54], s[1], i)) { return 0; }
	}
	for (i = 0xa1; i <= 0xbb; i++) {
		if (!fsm_addedge_literal(fsm, s[55], s[1], i)) { return 0; }
	}
	for (i = 0xa0; i <= 0xa3; i++) {
		if (!fsm_addedge_literal(fsm, s[56], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[57], s[1], 0x81)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[57], s[1], 0x8a)) { return 0; }
	for (i = 0x91; i <= 0x95; i++) {
		if (!fsm_addedge_literal(fsm, s[58], s[1], i)) { return 0; }
	}
	for (i = 0x98; i <= 0x9f; i++) {
		if (!fsm_addedge_literal(fsm, s[59], s[1], i)) { return 0; }
	}
	for (i = 0xb9; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[59], s[1], i)) { return 0; }
	}
	for (i = 0xa7; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[60], s[1], i)) { return 0; }
	}
	for (i = 0xbb; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[61], s[1], i)) { return 0; }
	}
	for (i = 0x96; i <= 0x9b; i++) {
		if (!fsm_addedge_literal(fsm, s[62], s[1], i)) { return 0; }
	}
	for (i = 0xbc; i <= 0xbd; i++) {
		if (!fsm_addedge_literal(fsm, s[63], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[64], s[1], i)) { return 0; }
	}
	for (i = 0x92; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[64], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x87; i++) {
		if (!fsm_addedge_literal(fsm, s[65], s[1], i)) { return 0; }
	}
	for (i = 0xbd; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[65], s[1], i)) { return 0; }
	}
	for (i = 0x9d; i <= 0x9f; i++) {
		if (!fsm_addedge_literal(fsm, s[66], s[1], i)) { return 0; }
	}
	for (i = 0xab; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[67], s[1], i)) { return 0; }
	}
	for (i = 0x98; i <= 0x9f; i++) {
		if (!fsm_addedge_literal(fsm, s[68], s[1], i)) { return 0; }
	}
	for (i = 0xb8; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[68], s[1], i)) { return 0; }
	}
	for (i = 0xa9; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[69], s[1], i)) { return 0; }
	}
	for (i = 0xba; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[70], s[1], i)) { return 0; }
	}
	for (i = 0xa0; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[71], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[72], s[1], 0xb0)) { return 0; }
	for (i = 0xb4; i <= 0xb9; i++) {
		if (!fsm_addedge_literal(fsm, s[72], s[1], i)) { return 0; }
	}
	for (i = 0x90; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[73], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x82; i++) {
		if (!fsm_addedge_literal(fsm, s[74], s[1], i)) { return 0; }
	}
	for (i = 0x85; i <= 0x89; i++) {
		if (!fsm_addedge_literal(fsm, s[74], s[1], i)) { return 0; }
	}
	for (i = 0xa0; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[75], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x9b; i++) {
		if (!fsm_addedge_literal(fsm, s[76], s[1], i)) { return 0; }
	}
	for (i = 0xaa; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[77], s[1], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x93; i++) {
		if (!fsm_addedge_literal(fsm, s[78], s[1], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[79], s[1], 0xbd)) { return 0; }
	for (i = 0x90; i <= 0x99; i++) {
		if (!fsm_addedge_literal(fsm, s[80], s[1], i)) { return 0; }
	}
	for (i = 0x9b; i <= 0xa1; i++) {
		if (!fsm_addedge_literal(fsm, s[80], s[1], i)) { return 0; }
	}


	return 1;
}

