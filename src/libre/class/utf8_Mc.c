/* Generated by libfsm */

#include LF_HEADER

#include <assert.h>
#include <stddef.h>

#include <fsm/fsm.h>

int
utf8_Mc_fsm(struct fsm *fsm, struct fsm_state *x, struct fsm_state *y)
{
	struct fsm_state *s[73];
	size_t i;

	assert(x != NULL);
	assert(y != NULL);

	for (i = 0; i < 73; i++) {
		if (i == 0) {
			s[0] = x;
			continue;
		}

		if (i == 24) {
			s[24] = y;
			continue;
		}

		s[i] = fsm_addstate(fsm);
		if (s[i] == NULL) {
			return 0;
		}
	}

	if (!fsm_addedge_literal(fsm, s[0], s[1], 0xe0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[2], 0xe1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[3], 0xe3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[4], 0xea)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[0], s[5], 0xf0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[7], 0xa4)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[8], 0xa5)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[9], 0xa6)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[9], 0xb4)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[10], 0xa7)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[10], 0xad)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[11], 0xa8)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[11], 0xaa)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[12], 0xa9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[13], 0xab)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[14], 0xac)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[14], 0xb2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[15], 0xae)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[15], 0xbc)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[16], 0xaf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[17], 0xb0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[18], 0xb1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[19], 0xb3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[20], 0xb5)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[21], 0xb6)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[22], 0xb7)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[1], s[23], 0xbd)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[59], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[60], 0x81)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[61], 0x82)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[62], 0x9e)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[63], 0x9f)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[64], 0xa4)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[65], 0xa8)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[66], 0xa9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[67], 0xac)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[68], 0xad)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[69], 0xae)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[70], 0xaf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[71], 0xb0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[2], s[72], 0xb3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[3], s[6], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[12], 0xa7)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[50], 0xa0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[51], 0xa2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[52], 0xa3)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[53], 0xa5)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[54], 0xa6)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[55], 0xa8)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[56], 0xa9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[57], 0xab)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[4], s[58], 0xaf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[5], s[25], 0x91)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[5], s[26], 0x96)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[5], s[27], 0x9d)) { return 0; }
	for (i = 0xae; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[6], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[7], s[24], 0x83)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[7], s[24], 0xbb)) { return 0; }
	for (i = 0xbe; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[7], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[8], s[24], 0x80)) { return 0; }
	for (i = 0x89; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[8], s[24], i)) { return 0; }
	}
	for (i = 0x8e; i <= 0x8f; i++) {
		if (!fsm_addedge_literal(fsm, s[8], s[24], i)) { return 0; }
	}
	for (i = 0x82; i <= 0x83; i++) {
		if (!fsm_addedge_literal(fsm, s[9], s[24], i)) { return 0; }
	}
	for (i = 0xbe; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[9], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[10], s[24], 0x80)) { return 0; }
	for (i = 0x87; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[10], s[24], i)) { return 0; }
	}
	for (i = 0x8b; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[10], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[10], s[24], 0x97)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[11], s[24], 0x83)) { return 0; }
	for (i = 0xbe; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[11], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[12], s[24], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[13], s[24], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[13], s[24], 0x89)) { return 0; }
	for (i = 0x8b; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[13], s[24], i)) { return 0; }
	}
	for (i = 0x82; i <= 0x83; i++) {
		if (!fsm_addedge_literal(fsm, s[14], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[14], s[24], 0xbe)) { return 0; }
	for (i = 0xbe; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[15], s[24], i)) { return 0; }
	}
	for (i = 0x81; i <= 0x82; i++) {
		if (!fsm_addedge_literal(fsm, s[16], s[24], i)) { return 0; }
	}
	for (i = 0x86; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[16], s[24], i)) { return 0; }
	}
	for (i = 0x8a; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[16], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[16], s[24], 0x97)) { return 0; }
	for (i = 0x81; i <= 0x83; i++) {
		if (!fsm_addedge_literal(fsm, s[17], s[24], i)) { return 0; }
	}
	for (i = 0x81; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[18], s[24], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[19], s[24], i)) { return 0; }
	}
	for (i = 0x87; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[19], s[24], i)) { return 0; }
	}
	for (i = 0x8a; i <= 0x8b; i++) {
		if (!fsm_addedge_literal(fsm, s[19], s[24], i)) { return 0; }
	}
	for (i = 0x95; i <= 0x96; i++) {
		if (!fsm_addedge_literal(fsm, s[19], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[20], s[24], 0x80)) { return 0; }
	for (i = 0x86; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[20], s[24], i)) { return 0; }
	}
	for (i = 0x8a; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[20], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[20], s[24], 0x97)) { return 0; }
	for (i = 0x82; i <= 0x83; i++) {
		if (!fsm_addedge_literal(fsm, s[21], s[24], i)) { return 0; }
	}
	for (i = 0x8f; i <= 0x91; i++) {
		if (!fsm_addedge_literal(fsm, s[22], s[24], i)) { return 0; }
	}
	for (i = 0x98; i <= 0x9f; i++) {
		if (!fsm_addedge_literal(fsm, s[22], s[24], i)) { return 0; }
	}
	for (i = 0xb2; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[22], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[23], s[24], 0xbf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[9], 0x8c)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[12], 0x87)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[29], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[30], 0x82)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[31], 0x84)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[32], 0x86)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[33], 0x88)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[34], 0x8b)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[35], 0x8d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[36], 0x90)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[37], 0x91)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[38], 0x92)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[39], 0x93)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[40], 0x96)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[41], 0x98)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[42], 0x9a)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[43], 0x9c)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[44], 0xa8)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[45], 0xa9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[46], 0xaa)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[47], 0xb0)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[25], s[48], 0xb2)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[26], s[28], 0xbd)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[27], s[49], 0x85)) { return 0; }
	for (i = 0x91; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[28], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[29], s[24], 0x80)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[29], s[24], 0x82)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[30], s[24], 0x82)) { return 0; }
	for (i = 0xb0; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[30], s[24], i)) { return 0; }
	}
	for (i = 0xb7; i <= 0xb8; i++) {
		if (!fsm_addedge_literal(fsm, s[30], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[31], s[24], 0xac)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[32], s[24], 0x82)) { return 0; }
	for (i = 0xb3; i <= 0xb5; i++) {
		if (!fsm_addedge_literal(fsm, s[32], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[32], s[24], 0xbf)) { return 0; }
	for (i = 0xac; i <= 0xae; i++) {
		if (!fsm_addedge_literal(fsm, s[33], s[24], i)) { return 0; }
	}
	for (i = 0xb2; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[33], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[33], s[24], 0xb5)) { return 0; }
	for (i = 0xa0; i <= 0xa2; i++) {
		if (!fsm_addedge_literal(fsm, s[34], s[24], i)) { return 0; }
	}
	for (i = 0x81; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[35], s[24], i)) { return 0; }
	}
	for (i = 0x87; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[35], s[24], i)) { return 0; }
	}
	for (i = 0x8b; i <= 0x8d; i++) {
		if (!fsm_addedge_literal(fsm, s[35], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[35], s[24], 0x97)) { return 0; }
	for (i = 0xa2; i <= 0xa3; i++) {
		if (!fsm_addedge_literal(fsm, s[35], s[24], i)) { return 0; }
	}
	for (i = 0xb5; i <= 0xb7; i++) {
		if (!fsm_addedge_literal(fsm, s[36], s[24], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x81; i++) {
		if (!fsm_addedge_literal(fsm, s[37], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[37], s[24], 0x85)) { return 0; }
	for (i = 0xb0; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[38], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[38], s[24], 0xb9)) { return 0; }
	for (i = 0xbb; i <= 0xbe; i++) {
		if (!fsm_addedge_literal(fsm, s[38], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[39], s[24], 0x81)) { return 0; }
	for (i = 0xaf; i <= 0xb1; i++) {
		if (!fsm_addedge_literal(fsm, s[40], s[24], i)) { return 0; }
	}
	for (i = 0xb8; i <= 0xbb; i++) {
		if (!fsm_addedge_literal(fsm, s[40], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[40], s[24], 0xbe)) { return 0; }
	for (i = 0xb0; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[41], s[24], i)) { return 0; }
	}
	for (i = 0xbb; i <= 0xbc; i++) {
		if (!fsm_addedge_literal(fsm, s[41], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[41], s[24], 0xbe)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[42], s[24], 0xac)) { return 0; }
	for (i = 0xae; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[42], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[42], s[24], 0xb6)) { return 0; }
	for (i = 0xa0; i <= 0xa1; i++) {
		if (!fsm_addedge_literal(fsm, s[43], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[43], s[24], 0xa6)) { return 0; }
	for (i = 0x87; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[44], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[44], s[24], 0xb9)) { return 0; }
	for (i = 0x97; i <= 0x98; i++) {
		if (!fsm_addedge_literal(fsm, s[45], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[46], s[24], 0x97)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[47], s[24], 0xaf)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[47], s[24], 0xbe)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[48], s[24], 0xa9)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[48], s[24], 0xb1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[48], s[24], 0xb4)) { return 0; }
	for (i = 0xa5; i <= 0xa6; i++) {
		if (!fsm_addedge_literal(fsm, s[49], s[24], i)) { return 0; }
	}
	for (i = 0xad; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[49], s[24], i)) { return 0; }
	}
	for (i = 0xa3; i <= 0xa4; i++) {
		if (!fsm_addedge_literal(fsm, s[50], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[50], s[24], 0xa7)) { return 0; }
	for (i = 0x80; i <= 0x81; i++) {
		if (!fsm_addedge_literal(fsm, s[51], s[24], i)) { return 0; }
	}
	for (i = 0xb4; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[51], s[24], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x83; i++) {
		if (!fsm_addedge_literal(fsm, s[52], s[24], i)) { return 0; }
	}
	for (i = 0x92; i <= 0x93; i++) {
		if (!fsm_addedge_literal(fsm, s[53], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[54], s[24], 0x83)) { return 0; }
	for (i = 0xb4; i <= 0xb5; i++) {
		if (!fsm_addedge_literal(fsm, s[54], s[24], i)) { return 0; }
	}
	for (i = 0xba; i <= 0xbb; i++) {
		if (!fsm_addedge_literal(fsm, s[54], s[24], i)) { return 0; }
	}
	for (i = 0xbd; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[54], s[24], i)) { return 0; }
	}
	for (i = 0xaf; i <= 0xb0; i++) {
		if (!fsm_addedge_literal(fsm, s[55], s[24], i)) { return 0; }
	}
	for (i = 0xb3; i <= 0xb4; i++) {
		if (!fsm_addedge_literal(fsm, s[55], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[56], s[24], 0x8d)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[56], s[24], 0xbb)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[56], s[24], 0xbd)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[57], s[24], 0xab)) { return 0; }
	for (i = 0xae; i <= 0xaf; i++) {
		if (!fsm_addedge_literal(fsm, s[57], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[57], s[24], 0xb5)) { return 0; }
	for (i = 0xa3; i <= 0xa4; i++) {
		if (!fsm_addedge_literal(fsm, s[58], s[24], i)) { return 0; }
	}
	for (i = 0xa6; i <= 0xa7; i++) {
		if (!fsm_addedge_literal(fsm, s[58], s[24], i)) { return 0; }
	}
	for (i = 0xa9; i <= 0xaa; i++) {
		if (!fsm_addedge_literal(fsm, s[58], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[58], s[24], 0xac)) { return 0; }
	for (i = 0xab; i <= 0xac; i++) {
		if (!fsm_addedge_literal(fsm, s[59], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[59], s[24], 0xb1)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[59], s[24], 0xb8)) { return 0; }
	for (i = 0xbb; i <= 0xbc; i++) {
		if (!fsm_addedge_literal(fsm, s[59], s[24], i)) { return 0; }
	}
	for (i = 0x96; i <= 0x97; i++) {
		if (!fsm_addedge_literal(fsm, s[60], s[24], i)) { return 0; }
	}
	for (i = 0xa2; i <= 0xa4; i++) {
		if (!fsm_addedge_literal(fsm, s[60], s[24], i)) { return 0; }
	}
	for (i = 0xa7; i <= 0xad; i++) {
		if (!fsm_addedge_literal(fsm, s[60], s[24], i)) { return 0; }
	}
	for (i = 0x83; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[61], s[24], i)) { return 0; }
	}
	for (i = 0x87; i <= 0x8c; i++) {
		if (!fsm_addedge_literal(fsm, s[61], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[61], s[24], 0x8f)) { return 0; }
	for (i = 0x9a; i <= 0x9c; i++) {
		if (!fsm_addedge_literal(fsm, s[61], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[62], s[24], 0xb6)) { return 0; }
	for (i = 0xbe; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[62], s[24], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x85; i++) {
		if (!fsm_addedge_literal(fsm, s[63], s[24], i)) { return 0; }
	}
	for (i = 0x87; i <= 0x88; i++) {
		if (!fsm_addedge_literal(fsm, s[63], s[24], i)) { return 0; }
	}
	for (i = 0xa3; i <= 0xa6; i++) {
		if (!fsm_addedge_literal(fsm, s[64], s[24], i)) { return 0; }
	}
	for (i = 0xa9; i <= 0xab; i++) {
		if (!fsm_addedge_literal(fsm, s[64], s[24], i)) { return 0; }
	}
	for (i = 0xb0; i <= 0xb1; i++) {
		if (!fsm_addedge_literal(fsm, s[64], s[24], i)) { return 0; }
	}
	for (i = 0xb3; i <= 0xb8; i++) {
		if (!fsm_addedge_literal(fsm, s[64], s[24], i)) { return 0; }
	}
	for (i = 0x99; i <= 0x9a; i++) {
		if (!fsm_addedge_literal(fsm, s[65], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[66], s[24], 0x95)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[66], s[24], 0x97)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[66], s[24], 0xa1)) { return 0; }
	for (i = 0xa3; i <= 0xa4; i++) {
		if (!fsm_addedge_literal(fsm, s[66], s[24], i)) { return 0; }
	}
	for (i = 0xad; i <= 0xb2; i++) {
		if (!fsm_addedge_literal(fsm, s[66], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[67], s[24], 0x84)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[67], s[24], 0xb5)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[67], s[24], 0xbb)) { return 0; }
	for (i = 0xbd; i <= 0xbf; i++) {
		if (!fsm_addedge_literal(fsm, s[67], s[24], i)) { return 0; }
	}
	for (i = 0x80; i <= 0x81; i++) {
		if (!fsm_addedge_literal(fsm, s[68], s[24], i)) { return 0; }
	}
	for (i = 0x83; i <= 0x84; i++) {
		if (!fsm_addedge_literal(fsm, s[68], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[69], s[24], 0x82)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[69], s[24], 0xa1)) { return 0; }
	for (i = 0xa6; i <= 0xa7; i++) {
		if (!fsm_addedge_literal(fsm, s[69], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[69], s[24], 0xaa)) { return 0; }
	if (!fsm_addedge_literal(fsm, s[70], s[24], 0xa7)) { return 0; }
	for (i = 0xaa; i <= 0xac; i++) {
		if (!fsm_addedge_literal(fsm, s[70], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[70], s[24], 0xae)) { return 0; }
	for (i = 0xb2; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[70], s[24], i)) { return 0; }
	}
	for (i = 0xa4; i <= 0xab; i++) {
		if (!fsm_addedge_literal(fsm, s[71], s[24], i)) { return 0; }
	}
	for (i = 0xb4; i <= 0xb5; i++) {
		if (!fsm_addedge_literal(fsm, s[71], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[72], s[24], 0xa1)) { return 0; }
	for (i = 0xb2; i <= 0xb3; i++) {
		if (!fsm_addedge_literal(fsm, s[72], s[24], i)) { return 0; }
	}
	if (!fsm_addedge_literal(fsm, s[72], s[24], 0xb7)) { return 0; }


	return 1;
}

