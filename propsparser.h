
#line 1 "propsparser.rl"
#ifndef __PROPSPARSER_H
#define __PROPSPARSER_H

// This file needs to be preprocessed with the 'ragel' tool.
// Run it like this:
//
//   ragel -G2 configparser.rl -o configparser.h
//

#include <string>
#include <stdexcept>
#include <iostream>

#include <string.h>
#include <stdio.h>

#include "rpmprops.h"

namespace propsparser {

struct ragel_state {

    /** Ragel scanner cruft. **/

    // Iterators for start and end of buffer data.
    char* p;
    char* pe;

    // Iterator for 'end of file'.
    char* eof;

    // Iterator for start and end of token.
    char* ts;
    char* te;

    // Internal state and rollback variables.
    int cs, act;

    // Stack for ragel machine states.
    int stack[32];
    int top;

    // Not part of ragel's variables; this is a buffer to hold the current match.
    std::string match;
};


void parse_props(const std::string& filename, rpmprops_t& props) {

    /** File reading cruft. **/

    char buf[4096];

    FILE* fn = ::fopen(filename.c_str(), "r");

    if (fn == NULL) {
        throw std::runtime_error("Could not open: \"" + filename + "\"");
    }

    ragel_state state;

    
#line 157 "propsparser.rl"

/*

*/

    
#line 73 "propsparser.h"
static const int PropsParser_start = 1;
static const int PropsParser_first_final = 214;
static const int PropsParser_error = 0;

static const int PropsParser_en_strchar_escape = 213;
static const int PropsParser_en_main = 1;


#line 163 "propsparser.rl"
    
#line 84 "propsparser.h"
	{
	 state.cs = PropsParser_start;
	 state.top = 0;
	}

#line 164 "propsparser.rl"

    bool done = false;
    int have = 0;

    while (!done) {
        int space = sizeof(buf) - have;
        if (space == 0) {
            throw std::runtime_error("Token too big!");
        }

        state.p = buf + have;
        int len = ::fread(state.p, 1, space, fn);
        
        state.pe = state.p + len;
        state.eof = 0;
        
        if (len == 0) {
            state.eof = state.pe;
            done = true;
        }

        
#line 113 "propsparser.h"
	{
	if ( ( state.p) == ( state.pe) )
		goto _test_eof;
	goto _resume;

_again:
	switch (  state.cs ) {
		case 1: goto st1;
		case 0: goto st0;
		case 2: goto st2;
		case 3: goto st3;
		case 4: goto st4;
		case 5: goto st5;
		case 6: goto st6;
		case 7: goto st7;
		case 214: goto st214;
		case 215: goto st215;
		case 8: goto st8;
		case 9: goto st9;
		case 10: goto st10;
		case 11: goto st11;
		case 12: goto st12;
		case 13: goto st13;
		case 14: goto st14;
		case 15: goto st15;
		case 16: goto st16;
		case 17: goto st17;
		case 18: goto st18;
		case 216: goto st216;
		case 19: goto st19;
		case 20: goto st20;
		case 21: goto st21;
		case 22: goto st22;
		case 23: goto st23;
		case 24: goto st24;
		case 25: goto st25;
		case 26: goto st26;
		case 27: goto st27;
		case 28: goto st28;
		case 29: goto st29;
		case 30: goto st30;
		case 31: goto st31;
		case 217: goto st217;
		case 32: goto st32;
		case 33: goto st33;
		case 34: goto st34;
		case 35: goto st35;
		case 36: goto st36;
		case 37: goto st37;
		case 38: goto st38;
		case 218: goto st218;
		case 39: goto st39;
		case 40: goto st40;
		case 41: goto st41;
		case 42: goto st42;
		case 43: goto st43;
		case 44: goto st44;
		case 45: goto st45;
		case 46: goto st46;
		case 47: goto st47;
		case 219: goto st219;
		case 48: goto st48;
		case 49: goto st49;
		case 50: goto st50;
		case 51: goto st51;
		case 52: goto st52;
		case 53: goto st53;
		case 220: goto st220;
		case 54: goto st54;
		case 55: goto st55;
		case 56: goto st56;
		case 57: goto st57;
		case 221: goto st221;
		case 58: goto st58;
		case 59: goto st59;
		case 60: goto st60;
		case 61: goto st61;
		case 62: goto st62;
		case 63: goto st63;
		case 64: goto st64;
		case 65: goto st65;
		case 66: goto st66;
		case 67: goto st67;
		case 222: goto st222;
		case 68: goto st68;
		case 69: goto st69;
		case 70: goto st70;
		case 71: goto st71;
		case 72: goto st72;
		case 73: goto st73;
		case 74: goto st74;
		case 75: goto st75;
		case 76: goto st76;
		case 77: goto st77;
		case 78: goto st78;
		case 79: goto st79;
		case 223: goto st223;
		case 80: goto st80;
		case 81: goto st81;
		case 82: goto st82;
		case 83: goto st83;
		case 84: goto st84;
		case 85: goto st85;
		case 86: goto st86;
		case 87: goto st87;
		case 88: goto st88;
		case 224: goto st224;
		case 89: goto st89;
		case 90: goto st90;
		case 91: goto st91;
		case 92: goto st92;
		case 93: goto st93;
		case 225: goto st225;
		case 94: goto st94;
		case 95: goto st95;
		case 96: goto st96;
		case 97: goto st97;
		case 98: goto st98;
		case 99: goto st99;
		case 100: goto st100;
		case 101: goto st101;
		case 102: goto st102;
		case 226: goto st226;
		case 103: goto st103;
		case 104: goto st104;
		case 105: goto st105;
		case 106: goto st106;
		case 107: goto st107;
		case 108: goto st108;
		case 109: goto st109;
		case 110: goto st110;
		case 111: goto st111;
		case 112: goto st112;
		case 113: goto st113;
		case 114: goto st114;
		case 227: goto st227;
		case 115: goto st115;
		case 116: goto st116;
		case 117: goto st117;
		case 118: goto st118;
		case 119: goto st119;
		case 120: goto st120;
		case 121: goto st121;
		case 122: goto st122;
		case 123: goto st123;
		case 124: goto st124;
		case 125: goto st125;
		case 228: goto st228;
		case 126: goto st126;
		case 127: goto st127;
		case 128: goto st128;
		case 129: goto st129;
		case 130: goto st130;
		case 131: goto st131;
		case 132: goto st132;
		case 133: goto st133;
		case 229: goto st229;
		case 134: goto st134;
		case 135: goto st135;
		case 136: goto st136;
		case 137: goto st137;
		case 138: goto st138;
		case 139: goto st139;
		case 140: goto st140;
		case 141: goto st141;
		case 142: goto st142;
		case 143: goto st143;
		case 144: goto st144;
		case 145: goto st145;
		case 146: goto st146;
		case 147: goto st147;
		case 230: goto st230;
		case 148: goto st148;
		case 149: goto st149;
		case 150: goto st150;
		case 151: goto st151;
		case 152: goto st152;
		case 153: goto st153;
		case 154: goto st154;
		case 155: goto st155;
		case 156: goto st156;
		case 157: goto st157;
		case 158: goto st158;
		case 159: goto st159;
		case 160: goto st160;
		case 161: goto st161;
		case 162: goto st162;
		case 163: goto st163;
		case 231: goto st231;
		case 164: goto st164;
		case 165: goto st165;
		case 166: goto st166;
		case 167: goto st167;
		case 168: goto st168;
		case 169: goto st169;
		case 170: goto st170;
		case 171: goto st171;
		case 172: goto st172;
		case 173: goto st173;
		case 174: goto st174;
		case 175: goto st175;
		case 176: goto st176;
		case 177: goto st177;
		case 232: goto st232;
		case 178: goto st178;
		case 179: goto st179;
		case 180: goto st180;
		case 181: goto st181;
		case 182: goto st182;
		case 183: goto st183;
		case 184: goto st184;
		case 185: goto st185;
		case 186: goto st186;
		case 187: goto st187;
		case 188: goto st188;
		case 189: goto st189;
		case 190: goto st190;
		case 191: goto st191;
		case 192: goto st192;
		case 193: goto st193;
		case 194: goto st194;
		case 195: goto st195;
		case 196: goto st196;
		case 197: goto st197;
		case 233: goto st233;
		case 198: goto st198;
		case 199: goto st199;
		case 200: goto st200;
		case 201: goto st201;
		case 202: goto st202;
		case 203: goto st203;
		case 204: goto st204;
		case 205: goto st205;
		case 206: goto st206;
		case 207: goto st207;
		case 234: goto st234;
		case 235: goto st235;
		case 208: goto st208;
		case 209: goto st209;
		case 210: goto st210;
		case 211: goto st211;
		case 212: goto st212;
		case 213: goto st213;
		case 236: goto st236;
	default: break;
	}

	if ( ++( state.p) == ( state.pe) )
		goto _test_eof;
_resume:
	switch (  state.cs )
	{
st1:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof1;
case 1:
	switch( (*( state.p)) ) {
		case 13: goto st1;
		case 32: goto st1;
		case 65: goto st2;
		case 66: goto st8;
		case 68: goto st19;
		case 71: goto st32;
		case 76: goto st39;
		case 78: goto st48;
		case 79: goto st54;
		case 80: goto st58;
		case 82: goto st68;
		case 83: goto st80;
		case 85: goto st89;
		case 86: goto st94;
		case 97: goto st2;
		case 98: goto st8;
		case 100: goto st19;
		case 103: goto st32;
		case 108: goto st39;
		case 110: goto st48;
		case 111: goto st54;
		case 112: goto st58;
		case 114: goto st68;
		case 115: goto st80;
		case 117: goto st89;
		case 118: goto st94;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st1;
	goto st0;
st0:
 state.cs = 0;
	goto _out;
tr289:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st2;
tr303:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st2;
tr316:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st2;
tr329:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st2;
tr342:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st2;
tr355:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st2;
tr368:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st2;
tr381:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st2;
tr394:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st2;
tr407:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st2;
tr420:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st2;
tr433:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st2;
tr446:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st2;
tr459:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st2;
tr472:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st2;
tr485:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st2;
tr498:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st2;
tr511:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st2;
tr524:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st2;
tr537:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st2;
st2:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof2;
case 2:
#line 488 "propsparser.h"
	if ( (*( state.p)) == 114 )
		goto st3;
	goto st0;
st3:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof3;
case 3:
	if ( (*( state.p)) == 99 )
		goto st4;
	goto st0;
st4:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof4;
case 4:
	if ( (*( state.p)) == 104 )
		goto st5;
	goto st0;
st5:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof5;
case 5:
	switch( (*( state.p)) ) {
		case 13: goto st6;
		case 32: goto st6;
		case 58: goto st212;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st6;
	goto st0;
st6:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof6;
case 6:
	switch( (*( state.p)) ) {
		case 13: goto st6;
		case 32: goto st6;
		case 34: goto tr19;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st6;
	goto st0;
tr19:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st7;
tr20:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st7;
tr22:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 7; goto st213;}}
	goto st7;
st7:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof7;
case 7:
#line 550 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st214;
		case 92: goto tr22;
	}
	goto tr20;
st214:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof214;
case 214:
	switch( (*( state.p)) ) {
		case 13: goto tr288;
		case 32: goto tr288;
		case 65: goto tr289;
		case 66: goto tr290;
		case 68: goto tr291;
		case 71: goto tr292;
		case 76: goto tr293;
		case 78: goto tr294;
		case 79: goto tr295;
		case 80: goto tr296;
		case 82: goto tr297;
		case 83: goto tr298;
		case 85: goto tr299;
		case 86: goto tr300;
		case 97: goto tr289;
		case 98: goto tr290;
		case 100: goto tr291;
		case 103: goto tr292;
		case 108: goto tr293;
		case 110: goto tr294;
		case 111: goto tr295;
		case 112: goto tr296;
		case 114: goto tr297;
		case 115: goto tr298;
		case 117: goto tr299;
		case 118: goto tr300;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr288;
	goto st0;
tr288:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st215;
tr302:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st215;
tr315:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st215;
tr328:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st215;
tr341:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st215;
tr354:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st215;
tr367:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st215;
tr380:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st215;
tr393:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st215;
tr406:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st215;
tr419:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st215;
tr432:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st215;
tr445:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st215;
tr458:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st215;
tr471:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st215;
tr484:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st215;
tr497:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st215;
tr510:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st215;
tr523:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st215;
st215:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof215;
case 215:
#line 671 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st215;
		case 32: goto st215;
		case 65: goto st2;
		case 66: goto st8;
		case 68: goto st19;
		case 71: goto st32;
		case 76: goto st39;
		case 78: goto st48;
		case 79: goto st54;
		case 80: goto st58;
		case 82: goto st68;
		case 83: goto st80;
		case 85: goto st89;
		case 86: goto st94;
		case 97: goto st2;
		case 98: goto st8;
		case 100: goto st19;
		case 103: goto st32;
		case 108: goto st39;
		case 110: goto st48;
		case 111: goto st54;
		case 112: goto st58;
		case 114: goto st68;
		case 115: goto st80;
		case 117: goto st89;
		case 118: goto st94;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st215;
	goto st0;
tr290:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st8;
tr304:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st8;
tr317:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st8;
tr330:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st8;
tr343:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st8;
tr356:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st8;
tr369:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st8;
tr382:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st8;
tr395:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st8;
tr408:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st8;
tr421:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st8;
tr434:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st8;
tr447:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st8;
tr460:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st8;
tr473:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st8;
tr486:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st8;
tr499:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st8;
tr512:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st8;
tr525:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st8;
tr538:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st8;
st8:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof8;
case 8:
#line 787 "propsparser.h"
	if ( (*( state.p)) == 117 )
		goto st9;
	goto st0;
st9:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof9;
case 9:
	if ( (*( state.p)) == 105 )
		goto st10;
	goto st0;
st10:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof10;
case 10:
	if ( (*( state.p)) == 108 )
		goto st11;
	goto st0;
st11:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof11;
case 11:
	if ( (*( state.p)) == 100 )
		goto st12;
	goto st0;
st12:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof12;
case 12:
	switch( (*( state.p)) ) {
		case 72: goto st13;
		case 104: goto st13;
	}
	goto st0;
st13:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof13;
case 13:
	if ( (*( state.p)) == 111 )
		goto st14;
	goto st0;
st14:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof14;
case 14:
	if ( (*( state.p)) == 115 )
		goto st15;
	goto st0;
st15:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof15;
case 15:
	if ( (*( state.p)) == 116 )
		goto st16;
	goto st0;
st16:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof16;
case 16:
	switch( (*( state.p)) ) {
		case 13: goto st17;
		case 32: goto st17;
		case 58: goto st211;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st17;
	goto st0;
st17:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof17;
case 17:
	switch( (*( state.p)) ) {
		case 13: goto st17;
		case 32: goto st17;
		case 34: goto tr33;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st17;
	goto st0;
tr33:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st18;
tr34:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st18;
tr36:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 18; goto st213;}}
	goto st18;
st18:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof18;
case 18:
#line 886 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st216;
		case 92: goto tr36;
	}
	goto tr34;
st216:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof216;
case 216:
	switch( (*( state.p)) ) {
		case 13: goto tr302;
		case 32: goto tr302;
		case 65: goto tr303;
		case 66: goto tr304;
		case 68: goto tr305;
		case 71: goto tr306;
		case 76: goto tr307;
		case 78: goto tr308;
		case 79: goto tr309;
		case 80: goto tr310;
		case 82: goto tr311;
		case 83: goto tr312;
		case 85: goto tr313;
		case 86: goto tr314;
		case 97: goto tr303;
		case 98: goto tr304;
		case 100: goto tr305;
		case 103: goto tr306;
		case 108: goto tr307;
		case 110: goto tr308;
		case 111: goto tr309;
		case 112: goto tr310;
		case 114: goto tr311;
		case 115: goto tr312;
		case 117: goto tr313;
		case 118: goto tr314;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr302;
	goto st0;
tr291:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st19;
tr305:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st19;
tr318:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st19;
tr331:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st19;
tr344:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st19;
tr357:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st19;
tr370:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st19;
tr383:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st19;
tr396:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st19;
tr409:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st19;
tr422:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st19;
tr435:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st19;
tr448:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st19;
tr461:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st19;
tr474:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st19;
tr487:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st19;
tr500:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st19;
tr513:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st19;
tr526:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st19;
tr539:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st19;
st19:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof19;
case 19:
#line 1011 "propsparser.h"
	if ( (*( state.p)) == 101 )
		goto st20;
	goto st0;
st20:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof20;
case 20:
	if ( (*( state.p)) == 115 )
		goto st21;
	goto st0;
st21:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof21;
case 21:
	if ( (*( state.p)) == 99 )
		goto st22;
	goto st0;
st22:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof22;
case 22:
	if ( (*( state.p)) == 114 )
		goto st23;
	goto st0;
st23:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof23;
case 23:
	if ( (*( state.p)) == 105 )
		goto st24;
	goto st0;
st24:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof24;
case 24:
	if ( (*( state.p)) == 112 )
		goto st25;
	goto st0;
st25:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof25;
case 25:
	if ( (*( state.p)) == 116 )
		goto st26;
	goto st0;
st26:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof26;
case 26:
	if ( (*( state.p)) == 105 )
		goto st27;
	goto st0;
st27:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof27;
case 27:
	if ( (*( state.p)) == 111 )
		goto st28;
	goto st0;
st28:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof28;
case 28:
	if ( (*( state.p)) == 110 )
		goto st29;
	goto st0;
st29:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof29;
case 29:
	switch( (*( state.p)) ) {
		case 13: goto st30;
		case 32: goto st30;
		case 58: goto st210;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st30;
	goto st0;
st30:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof30;
case 30:
	switch( (*( state.p)) ) {
		case 13: goto st30;
		case 32: goto st30;
		case 34: goto tr49;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st30;
	goto st0;
tr49:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st31;
tr50:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st31;
tr52:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 31; goto st213;}}
	goto st31;
st31:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof31;
case 31:
#line 1122 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st217;
		case 92: goto tr52;
	}
	goto tr50;
st217:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof217;
case 217:
	switch( (*( state.p)) ) {
		case 13: goto tr315;
		case 32: goto tr315;
		case 65: goto tr316;
		case 66: goto tr317;
		case 68: goto tr318;
		case 71: goto tr319;
		case 76: goto tr320;
		case 78: goto tr321;
		case 79: goto tr322;
		case 80: goto tr323;
		case 82: goto tr324;
		case 83: goto tr325;
		case 85: goto tr326;
		case 86: goto tr327;
		case 97: goto tr316;
		case 98: goto tr317;
		case 100: goto tr318;
		case 103: goto tr319;
		case 108: goto tr320;
		case 110: goto tr321;
		case 111: goto tr322;
		case 112: goto tr323;
		case 114: goto tr324;
		case 115: goto tr325;
		case 117: goto tr326;
		case 118: goto tr327;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr315;
	goto st0;
tr292:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st32;
tr306:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st32;
tr319:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st32;
tr332:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st32;
tr345:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st32;
tr358:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st32;
tr371:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st32;
tr384:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st32;
tr397:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st32;
tr410:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st32;
tr423:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st32;
tr436:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st32;
tr449:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st32;
tr462:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st32;
tr475:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st32;
tr488:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st32;
tr501:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st32;
tr514:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st32;
tr527:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st32;
tr540:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st32;
st32:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof32;
case 32:
#line 1247 "propsparser.h"
	if ( (*( state.p)) == 114 )
		goto st33;
	goto st0;
st33:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof33;
case 33:
	if ( (*( state.p)) == 111 )
		goto st34;
	goto st0;
st34:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof34;
case 34:
	if ( (*( state.p)) == 117 )
		goto st35;
	goto st0;
st35:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof35;
case 35:
	if ( (*( state.p)) == 112 )
		goto st36;
	goto st0;
st36:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof36;
case 36:
	switch( (*( state.p)) ) {
		case 13: goto st37;
		case 32: goto st37;
		case 58: goto st209;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st37;
	goto st0;
st37:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof37;
case 37:
	switch( (*( state.p)) ) {
		case 13: goto st37;
		case 32: goto st37;
		case 34: goto tr59;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st37;
	goto st0;
tr59:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st38;
tr60:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st38;
tr62:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 38; goto st213;}}
	goto st38;
st38:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof38;
case 38:
#line 1316 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st218;
		case 92: goto tr62;
	}
	goto tr60;
st218:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof218;
case 218:
	switch( (*( state.p)) ) {
		case 13: goto tr328;
		case 32: goto tr328;
		case 65: goto tr329;
		case 66: goto tr330;
		case 68: goto tr331;
		case 71: goto tr332;
		case 76: goto tr333;
		case 78: goto tr334;
		case 79: goto tr335;
		case 80: goto tr336;
		case 82: goto tr337;
		case 83: goto tr338;
		case 85: goto tr339;
		case 86: goto tr340;
		case 97: goto tr329;
		case 98: goto tr330;
		case 100: goto tr331;
		case 103: goto tr332;
		case 108: goto tr333;
		case 110: goto tr334;
		case 111: goto tr335;
		case 112: goto tr336;
		case 114: goto tr337;
		case 115: goto tr338;
		case 117: goto tr339;
		case 118: goto tr340;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr328;
	goto st0;
tr293:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st39;
tr307:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st39;
tr320:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st39;
tr333:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st39;
tr346:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st39;
tr359:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st39;
tr372:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st39;
tr385:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st39;
tr398:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st39;
tr411:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st39;
tr424:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st39;
tr437:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st39;
tr450:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st39;
tr463:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st39;
tr476:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st39;
tr489:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st39;
tr502:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st39;
tr515:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st39;
tr528:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st39;
tr541:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st39;
st39:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof39;
case 39:
#line 1441 "propsparser.h"
	switch( (*( state.p)) ) {
		case 105: goto st40;
		case 111: goto st201;
	}
	goto st0;
st40:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof40;
case 40:
	if ( (*( state.p)) == 99 )
		goto st41;
	goto st0;
st41:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof41;
case 41:
	if ( (*( state.p)) == 101 )
		goto st42;
	goto st0;
st42:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof42;
case 42:
	if ( (*( state.p)) == 110 )
		goto st43;
	goto st0;
st43:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof43;
case 43:
	if ( (*( state.p)) == 115 )
		goto st44;
	goto st0;
st44:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof44;
case 44:
	if ( (*( state.p)) == 101 )
		goto st45;
	goto st0;
st45:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof45;
case 45:
	switch( (*( state.p)) ) {
		case 13: goto st46;
		case 32: goto st46;
		case 58: goto st200;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st46;
	goto st0;
st46:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof46;
case 46:
	switch( (*( state.p)) ) {
		case 13: goto st46;
		case 32: goto st46;
		case 34: goto tr72;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st46;
	goto st0;
tr72:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st47;
tr73:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st47;
tr75:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 47; goto st213;}}
	goto st47;
st47:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof47;
case 47:
#line 1526 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st219;
		case 92: goto tr75;
	}
	goto tr73;
st219:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof219;
case 219:
	switch( (*( state.p)) ) {
		case 13: goto tr341;
		case 32: goto tr341;
		case 65: goto tr342;
		case 66: goto tr343;
		case 68: goto tr344;
		case 71: goto tr345;
		case 76: goto tr346;
		case 78: goto tr347;
		case 79: goto tr348;
		case 80: goto tr349;
		case 82: goto tr350;
		case 83: goto tr351;
		case 85: goto tr352;
		case 86: goto tr353;
		case 97: goto tr342;
		case 98: goto tr343;
		case 100: goto tr344;
		case 103: goto tr345;
		case 108: goto tr346;
		case 110: goto tr347;
		case 111: goto tr348;
		case 112: goto tr349;
		case 114: goto tr350;
		case 115: goto tr351;
		case 117: goto tr352;
		case 118: goto tr353;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr341;
	goto st0;
tr294:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st48;
tr308:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st48;
tr321:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st48;
tr334:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st48;
tr347:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st48;
tr360:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st48;
tr373:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st48;
tr386:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st48;
tr399:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st48;
tr412:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st48;
tr425:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st48;
tr438:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st48;
tr451:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st48;
tr464:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st48;
tr477:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st48;
tr490:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st48;
tr503:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st48;
tr516:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st48;
tr529:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st48;
tr542:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st48;
st48:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof48;
case 48:
#line 1651 "propsparser.h"
	if ( (*( state.p)) == 97 )
		goto st49;
	goto st0;
st49:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof49;
case 49:
	if ( (*( state.p)) == 109 )
		goto st50;
	goto st0;
st50:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof50;
case 50:
	if ( (*( state.p)) == 101 )
		goto st51;
	goto st0;
st51:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof51;
case 51:
	switch( (*( state.p)) ) {
		case 13: goto st52;
		case 32: goto st52;
		case 58: goto st199;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st52;
	goto st0;
st52:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof52;
case 52:
	switch( (*( state.p)) ) {
		case 13: goto st52;
		case 32: goto st52;
		case 34: goto tr81;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st52;
	goto st0;
tr81:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st53;
tr82:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st53;
tr84:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 53; goto st213;}}
	goto st53;
st53:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof53;
case 53:
#line 1713 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st220;
		case 92: goto tr84;
	}
	goto tr82;
st220:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof220;
case 220:
	switch( (*( state.p)) ) {
		case 13: goto tr354;
		case 32: goto tr354;
		case 65: goto tr355;
		case 66: goto tr356;
		case 68: goto tr357;
		case 71: goto tr358;
		case 76: goto tr359;
		case 78: goto tr360;
		case 79: goto tr361;
		case 80: goto tr362;
		case 82: goto tr363;
		case 83: goto tr364;
		case 85: goto tr365;
		case 86: goto tr366;
		case 97: goto tr355;
		case 98: goto tr356;
		case 100: goto tr357;
		case 103: goto tr358;
		case 108: goto tr359;
		case 110: goto tr360;
		case 111: goto tr361;
		case 112: goto tr362;
		case 114: goto tr363;
		case 115: goto tr364;
		case 117: goto tr365;
		case 118: goto tr366;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr354;
	goto st0;
tr295:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st54;
tr309:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st54;
tr322:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st54;
tr335:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st54;
tr348:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st54;
tr361:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st54;
tr374:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st54;
tr387:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st54;
tr400:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st54;
tr413:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st54;
tr426:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st54;
tr439:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st54;
tr452:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st54;
tr465:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st54;
tr478:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st54;
tr491:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st54;
tr504:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st54;
tr517:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st54;
tr530:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st54;
tr543:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st54;
st54:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof54;
case 54:
#line 1838 "propsparser.h"
	switch( (*( state.p)) ) {
		case 83: goto st55;
		case 112: goto st189;
		case 115: goto st55;
	}
	goto st0;
st55:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof55;
case 55:
	switch( (*( state.p)) ) {
		case 13: goto st56;
		case 32: goto st56;
		case 58: goto st188;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st56;
	goto st0;
st56:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof56;
case 56:
	switch( (*( state.p)) ) {
		case 13: goto st56;
		case 32: goto st56;
		case 34: goto tr89;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st56;
	goto st0;
tr89:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st57;
tr90:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st57;
tr92:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 57; goto st213;}}
	goto st57;
st57:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof57;
case 57:
#line 1889 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st221;
		case 92: goto tr92;
	}
	goto tr90;
st221:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof221;
case 221:
	switch( (*( state.p)) ) {
		case 13: goto tr367;
		case 32: goto tr367;
		case 65: goto tr368;
		case 66: goto tr369;
		case 68: goto tr370;
		case 71: goto tr371;
		case 76: goto tr372;
		case 78: goto tr373;
		case 79: goto tr374;
		case 80: goto tr375;
		case 82: goto tr376;
		case 83: goto tr377;
		case 85: goto tr378;
		case 86: goto tr379;
		case 97: goto tr368;
		case 98: goto tr369;
		case 100: goto tr370;
		case 103: goto tr371;
		case 108: goto tr372;
		case 110: goto tr373;
		case 111: goto tr374;
		case 112: goto tr375;
		case 114: goto tr376;
		case 115: goto tr377;
		case 117: goto tr378;
		case 118: goto tr379;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr367;
	goto st0;
tr296:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st58;
tr310:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st58;
tr323:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st58;
tr336:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st58;
tr349:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st58;
tr362:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st58;
tr375:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st58;
tr388:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st58;
tr401:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st58;
tr414:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st58;
tr427:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st58;
tr440:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st58;
tr453:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st58;
tr466:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st58;
tr479:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st58;
tr492:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st58;
tr505:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st58;
tr518:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st58;
tr531:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st58;
tr544:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st58;
st58:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof58;
case 58:
#line 2014 "propsparser.h"
	switch( (*( state.p)) ) {
		case 97: goto st59;
		case 108: goto st117;
		case 111: goto st127;
		case 114: goto st158;
	}
	goto st0;
st59:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof59;
case 59:
	if ( (*( state.p)) == 99 )
		goto st60;
	goto st0;
st60:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof60;
case 60:
	if ( (*( state.p)) == 107 )
		goto st61;
	goto st0;
st61:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof61;
case 61:
	if ( (*( state.p)) == 97 )
		goto st62;
	goto st0;
st62:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof62;
case 62:
	if ( (*( state.p)) == 103 )
		goto st63;
	goto st0;
st63:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof63;
case 63:
	if ( (*( state.p)) == 101 )
		goto st64;
	goto st0;
st64:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof64;
case 64:
	if ( (*( state.p)) == 114 )
		goto st65;
	goto st0;
st65:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof65;
case 65:
	switch( (*( state.p)) ) {
		case 13: goto st66;
		case 32: goto st66;
		case 58: goto st116;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st66;
	goto st0;
st66:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof66;
case 66:
	switch( (*( state.p)) ) {
		case 13: goto st66;
		case 32: goto st66;
		case 34: goto tr105;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st66;
	goto st0;
tr105:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st67;
tr106:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st67;
tr108:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 67; goto st213;}}
	goto st67;
st67:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof67;
case 67:
#line 2108 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st222;
		case 92: goto tr108;
	}
	goto tr106;
st222:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof222;
case 222:
	switch( (*( state.p)) ) {
		case 13: goto tr380;
		case 32: goto tr380;
		case 65: goto tr381;
		case 66: goto tr382;
		case 68: goto tr383;
		case 71: goto tr384;
		case 76: goto tr385;
		case 78: goto tr386;
		case 79: goto tr387;
		case 80: goto tr388;
		case 82: goto tr389;
		case 83: goto tr390;
		case 85: goto tr391;
		case 86: goto tr392;
		case 97: goto tr381;
		case 98: goto tr382;
		case 100: goto tr383;
		case 103: goto tr384;
		case 108: goto tr385;
		case 110: goto tr386;
		case 111: goto tr387;
		case 112: goto tr388;
		case 114: goto tr389;
		case 115: goto tr390;
		case 117: goto tr391;
		case 118: goto tr392;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr380;
	goto st0;
tr297:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st68;
tr311:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st68;
tr324:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st68;
tr337:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st68;
tr350:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st68;
tr363:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st68;
tr376:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st68;
tr389:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st68;
tr402:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st68;
tr415:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st68;
tr428:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st68;
tr441:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st68;
tr454:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st68;
tr467:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st68;
tr480:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st68;
tr493:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st68;
tr506:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st68;
tr519:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st68;
tr532:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st68;
tr545:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st68;
st68:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof68;
case 68:
#line 2233 "propsparser.h"
	switch( (*( state.p)) ) {
		case 80: goto st69;
		case 101: goto st107;
		case 112: goto st69;
	}
	goto st0;
st69:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof69;
case 69:
	switch( (*( state.p)) ) {
		case 77: goto st70;
		case 109: goto st70;
	}
	goto st0;
st70:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof70;
case 70:
	switch( (*( state.p)) ) {
		case 86: goto st71;
		case 118: goto st71;
	}
	goto st0;
st71:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof71;
case 71:
	if ( (*( state.p)) == 101 )
		goto st72;
	goto st0;
st72:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof72;
case 72:
	if ( (*( state.p)) == 114 )
		goto st73;
	goto st0;
st73:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof73;
case 73:
	if ( (*( state.p)) == 115 )
		goto st74;
	goto st0;
st74:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof74;
case 74:
	if ( (*( state.p)) == 105 )
		goto st75;
	goto st0;
st75:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof75;
case 75:
	if ( (*( state.p)) == 111 )
		goto st76;
	goto st0;
st76:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof76;
case 76:
	if ( (*( state.p)) == 110 )
		goto st77;
	goto st0;
st77:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof77;
case 77:
	switch( (*( state.p)) ) {
		case 13: goto st78;
		case 32: goto st78;
		case 58: goto st106;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st78;
	goto st0;
st78:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof78;
case 78:
	switch( (*( state.p)) ) {
		case 13: goto st78;
		case 32: goto st78;
		case 34: goto tr121;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st78;
	goto st0;
tr121:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st79;
tr122:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st79;
tr124:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 79; goto st213;}}
	goto st79;
st79:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof79;
case 79:
#line 2344 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st223;
		case 92: goto tr124;
	}
	goto tr122;
st223:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof223;
case 223:
	switch( (*( state.p)) ) {
		case 13: goto tr393;
		case 32: goto tr393;
		case 65: goto tr394;
		case 66: goto tr395;
		case 68: goto tr396;
		case 71: goto tr397;
		case 76: goto tr398;
		case 78: goto tr399;
		case 79: goto tr400;
		case 80: goto tr401;
		case 82: goto tr402;
		case 83: goto tr403;
		case 85: goto tr404;
		case 86: goto tr405;
		case 97: goto tr394;
		case 98: goto tr395;
		case 100: goto tr396;
		case 103: goto tr397;
		case 108: goto tr398;
		case 110: goto tr399;
		case 111: goto tr400;
		case 112: goto tr401;
		case 114: goto tr402;
		case 115: goto tr403;
		case 117: goto tr404;
		case 118: goto tr405;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr393;
	goto st0;
tr298:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st80;
tr312:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st80;
tr325:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st80;
tr338:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st80;
tr351:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st80;
tr364:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st80;
tr377:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st80;
tr390:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st80;
tr403:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st80;
tr416:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st80;
tr429:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st80;
tr442:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st80;
tr455:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st80;
tr468:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st80;
tr481:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st80;
tr494:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st80;
tr507:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st80;
tr520:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st80;
tr533:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st80;
tr546:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st80;
st80:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof80;
case 80:
#line 2469 "propsparser.h"
	if ( (*( state.p)) == 117 )
		goto st81;
	goto st0;
st81:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof81;
case 81:
	if ( (*( state.p)) == 109 )
		goto st82;
	goto st0;
st82:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof82;
case 82:
	if ( (*( state.p)) == 109 )
		goto st83;
	goto st0;
st83:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof83;
case 83:
	if ( (*( state.p)) == 97 )
		goto st84;
	goto st0;
st84:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof84;
case 84:
	if ( (*( state.p)) == 114 )
		goto st85;
	goto st0;
st85:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof85;
case 85:
	if ( (*( state.p)) == 121 )
		goto st86;
	goto st0;
st86:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof86;
case 86:
	switch( (*( state.p)) ) {
		case 13: goto st87;
		case 32: goto st87;
		case 58: goto st105;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st87;
	goto st0;
st87:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof87;
case 87:
	switch( (*( state.p)) ) {
		case 13: goto st87;
		case 32: goto st87;
		case 34: goto tr133;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st87;
	goto st0;
tr133:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st88;
tr134:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st88;
tr136:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 88; goto st213;}}
	goto st88;
st88:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof88;
case 88:
#line 2552 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st224;
		case 92: goto tr136;
	}
	goto tr134;
st224:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof224;
case 224:
	switch( (*( state.p)) ) {
		case 13: goto tr406;
		case 32: goto tr406;
		case 65: goto tr407;
		case 66: goto tr408;
		case 68: goto tr409;
		case 71: goto tr410;
		case 76: goto tr411;
		case 78: goto tr412;
		case 79: goto tr413;
		case 80: goto tr414;
		case 82: goto tr415;
		case 83: goto tr416;
		case 85: goto tr417;
		case 86: goto tr418;
		case 97: goto tr407;
		case 98: goto tr408;
		case 100: goto tr409;
		case 103: goto tr410;
		case 108: goto tr411;
		case 110: goto tr412;
		case 111: goto tr413;
		case 112: goto tr414;
		case 114: goto tr415;
		case 115: goto tr416;
		case 117: goto tr417;
		case 118: goto tr418;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr406;
	goto st0;
tr299:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st89;
tr313:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st89;
tr326:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st89;
tr339:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st89;
tr352:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st89;
tr365:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st89;
tr378:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st89;
tr391:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st89;
tr404:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st89;
tr417:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st89;
tr430:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st89;
tr443:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st89;
tr456:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st89;
tr469:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st89;
tr482:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st89;
tr495:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st89;
tr508:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st89;
tr521:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st89;
tr534:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st89;
tr547:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st89;
st89:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof89;
case 89:
#line 2677 "propsparser.h"
	switch( (*( state.p)) ) {
		case 82: goto st90;
		case 114: goto st90;
	}
	goto st0;
st90:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof90;
case 90:
	switch( (*( state.p)) ) {
		case 76: goto st91;
		case 108: goto st91;
	}
	goto st0;
st91:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof91;
case 91:
	switch( (*( state.p)) ) {
		case 13: goto st92;
		case 32: goto st92;
		case 58: goto st104;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st92;
	goto st0;
st92:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof92;
case 92:
	switch( (*( state.p)) ) {
		case 13: goto st92;
		case 32: goto st92;
		case 34: goto tr141;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st92;
	goto st0;
tr141:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st93;
tr142:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st93;
tr144:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 93; goto st213;}}
	goto st93;
st93:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof93;
case 93:
#line 2736 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st225;
		case 92: goto tr144;
	}
	goto tr142;
st225:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof225;
case 225:
	switch( (*( state.p)) ) {
		case 13: goto tr419;
		case 32: goto tr419;
		case 65: goto tr420;
		case 66: goto tr421;
		case 68: goto tr422;
		case 71: goto tr423;
		case 76: goto tr424;
		case 78: goto tr425;
		case 79: goto tr426;
		case 80: goto tr427;
		case 82: goto tr428;
		case 83: goto tr429;
		case 85: goto tr430;
		case 86: goto tr431;
		case 97: goto tr420;
		case 98: goto tr421;
		case 100: goto tr422;
		case 103: goto tr423;
		case 108: goto tr424;
		case 110: goto tr425;
		case 111: goto tr426;
		case 112: goto tr427;
		case 114: goto tr428;
		case 115: goto tr429;
		case 117: goto tr430;
		case 118: goto tr431;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr419;
	goto st0;
tr300:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st94;
tr314:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st94;
tr327:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st94;
tr340:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st94;
tr353:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st94;
tr366:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st94;
tr379:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st94;
tr392:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st94;
tr405:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st94;
tr418:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st94;
tr431:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st94;
tr444:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st94;
tr457:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st94;
tr470:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st94;
tr483:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st94;
tr496:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st94;
tr509:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st94;
tr522:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st94;
tr535:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st94;
tr548:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st94;
st94:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof94;
case 94:
#line 2861 "propsparser.h"
	if ( (*( state.p)) == 101 )
		goto st95;
	goto st0;
st95:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof95;
case 95:
	if ( (*( state.p)) == 114 )
		goto st96;
	goto st0;
st96:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof96;
case 96:
	if ( (*( state.p)) == 115 )
		goto st97;
	goto st0;
st97:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof97;
case 97:
	if ( (*( state.p)) == 105 )
		goto st98;
	goto st0;
st98:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof98;
case 98:
	if ( (*( state.p)) == 111 )
		goto st99;
	goto st0;
st99:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof99;
case 99:
	if ( (*( state.p)) == 110 )
		goto st100;
	goto st0;
st100:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof100;
case 100:
	switch( (*( state.p)) ) {
		case 13: goto st101;
		case 32: goto st101;
		case 58: goto st103;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st101;
	goto st0;
st101:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof101;
case 101:
	switch( (*( state.p)) ) {
		case 13: goto st101;
		case 32: goto st101;
		case 34: goto tr153;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st101;
	goto st0;
tr153:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st102;
tr154:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st102;
tr156:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 102; goto st213;}}
	goto st102;
st102:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof102;
case 102:
#line 2944 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st226;
		case 92: goto tr156;
	}
	goto tr154;
st226:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof226;
case 226:
	switch( (*( state.p)) ) {
		case 13: goto tr432;
		case 32: goto tr432;
		case 65: goto tr433;
		case 66: goto tr434;
		case 68: goto tr435;
		case 71: goto tr436;
		case 76: goto tr437;
		case 78: goto tr438;
		case 79: goto tr439;
		case 80: goto tr440;
		case 82: goto tr441;
		case 83: goto tr442;
		case 85: goto tr443;
		case 86: goto tr444;
		case 97: goto tr433;
		case 98: goto tr434;
		case 100: goto tr435;
		case 103: goto tr436;
		case 108: goto tr437;
		case 110: goto tr438;
		case 111: goto tr439;
		case 112: goto tr440;
		case 114: goto tr441;
		case 115: goto tr442;
		case 117: goto tr443;
		case 118: goto tr444;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr432;
	goto st0;
st103:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof103;
case 103:
	switch( (*( state.p)) ) {
		case 13: goto st101;
		case 32: goto st101;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st101;
	goto st0;
st104:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof104;
case 104:
	switch( (*( state.p)) ) {
		case 13: goto st92;
		case 32: goto st92;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st92;
	goto st0;
st105:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof105;
case 105:
	switch( (*( state.p)) ) {
		case 13: goto st87;
		case 32: goto st87;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st87;
	goto st0;
st106:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof106;
case 106:
	switch( (*( state.p)) ) {
		case 13: goto st78;
		case 32: goto st78;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st78;
	goto st0;
st107:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof107;
case 107:
	if ( (*( state.p)) == 108 )
		goto st108;
	goto st0;
st108:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof108;
case 108:
	if ( (*( state.p)) == 101 )
		goto st109;
	goto st0;
st109:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof109;
case 109:
	if ( (*( state.p)) == 97 )
		goto st110;
	goto st0;
st110:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof110;
case 110:
	if ( (*( state.p)) == 115 )
		goto st111;
	goto st0;
st111:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof111;
case 111:
	if ( (*( state.p)) == 101 )
		goto st112;
	goto st0;
st112:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof112;
case 112:
	switch( (*( state.p)) ) {
		case 13: goto st113;
		case 32: goto st113;
		case 58: goto st115;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st113;
	goto st0;
st113:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof113;
case 113:
	switch( (*( state.p)) ) {
		case 13: goto st113;
		case 32: goto st113;
		case 34: goto tr164;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st113;
	goto st0;
tr164:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st114;
tr165:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st114;
tr167:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 114; goto st213;}}
	goto st114;
st114:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof114;
case 114:
#line 3108 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st227;
		case 92: goto tr167;
	}
	goto tr165;
st227:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof227;
case 227:
	switch( (*( state.p)) ) {
		case 13: goto tr445;
		case 32: goto tr445;
		case 65: goto tr446;
		case 66: goto tr447;
		case 68: goto tr448;
		case 71: goto tr449;
		case 76: goto tr450;
		case 78: goto tr451;
		case 79: goto tr452;
		case 80: goto tr453;
		case 82: goto tr454;
		case 83: goto tr455;
		case 85: goto tr456;
		case 86: goto tr457;
		case 97: goto tr446;
		case 98: goto tr447;
		case 100: goto tr448;
		case 103: goto tr449;
		case 108: goto tr450;
		case 110: goto tr451;
		case 111: goto tr452;
		case 112: goto tr453;
		case 114: goto tr454;
		case 115: goto tr455;
		case 117: goto tr456;
		case 118: goto tr457;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr445;
	goto st0;
st115:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof115;
case 115:
	switch( (*( state.p)) ) {
		case 13: goto st113;
		case 32: goto st113;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st113;
	goto st0;
st116:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof116;
case 116:
	switch( (*( state.p)) ) {
		case 13: goto st66;
		case 32: goto st66;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st66;
	goto st0;
st117:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof117;
case 117:
	if ( (*( state.p)) == 97 )
		goto st118;
	goto st0;
st118:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof118;
case 118:
	if ( (*( state.p)) == 116 )
		goto st119;
	goto st0;
st119:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof119;
case 119:
	if ( (*( state.p)) == 102 )
		goto st120;
	goto st0;
st120:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof120;
case 120:
	if ( (*( state.p)) == 111 )
		goto st121;
	goto st0;
st121:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof121;
case 121:
	if ( (*( state.p)) == 114 )
		goto st122;
	goto st0;
st122:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof122;
case 122:
	if ( (*( state.p)) == 109 )
		goto st123;
	goto st0;
st123:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof123;
case 123:
	switch( (*( state.p)) ) {
		case 13: goto st124;
		case 32: goto st124;
		case 58: goto st126;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st124;
	goto st0;
st124:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof124;
case 124:
	switch( (*( state.p)) ) {
		case 13: goto st124;
		case 32: goto st124;
		case 34: goto tr176;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st124;
	goto st0;
tr176:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st125;
tr177:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st125;
tr179:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 125; goto st213;}}
	goto st125;
st125:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof125;
case 125:
#line 3257 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st228;
		case 92: goto tr179;
	}
	goto tr177;
st228:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof228;
case 228:
	switch( (*( state.p)) ) {
		case 13: goto tr458;
		case 32: goto tr458;
		case 65: goto tr459;
		case 66: goto tr460;
		case 68: goto tr461;
		case 71: goto tr462;
		case 76: goto tr463;
		case 78: goto tr464;
		case 79: goto tr465;
		case 80: goto tr466;
		case 82: goto tr467;
		case 83: goto tr468;
		case 85: goto tr469;
		case 86: goto tr470;
		case 97: goto tr459;
		case 98: goto tr460;
		case 100: goto tr461;
		case 103: goto tr462;
		case 108: goto tr463;
		case 110: goto tr464;
		case 111: goto tr465;
		case 112: goto tr466;
		case 114: goto tr467;
		case 115: goto tr468;
		case 117: goto tr469;
		case 118: goto tr470;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr458;
	goto st0;
st126:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof126;
case 126:
	switch( (*( state.p)) ) {
		case 13: goto st124;
		case 32: goto st124;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st124;
	goto st0;
st127:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof127;
case 127:
	if ( (*( state.p)) == 115 )
		goto st128;
	goto st0;
st128:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof128;
case 128:
	if ( (*( state.p)) == 116 )
		goto st129;
	goto st0;
st129:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof129;
case 129:
	switch( (*( state.p)) ) {
		case 73: goto st130;
		case 85: goto st144;
		case 105: goto st130;
		case 117: goto st144;
	}
	goto st0;
st130:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof130;
case 130:
	if ( (*( state.p)) == 110 )
		goto st131;
	goto st0;
st131:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof131;
case 131:
	switch( (*( state.p)) ) {
		case 13: goto st132;
		case 32: goto st132;
		case 58: goto st143;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st132;
	goto st0;
st132:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof132;
case 132:
	switch( (*( state.p)) ) {
		case 13: goto st132;
		case 32: goto st132;
		case 34: goto tr187;
		case 115: goto st134;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st132;
	goto st0;
tr187:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st133;
tr189:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st133;
tr191:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 133; goto st213;}}
	goto st133;
st133:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof133;
case 133:
#line 3386 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st229;
		case 92: goto tr191;
	}
	goto tr189;
st229:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof229;
case 229:
	switch( (*( state.p)) ) {
		case 13: goto tr471;
		case 32: goto tr471;
		case 65: goto tr472;
		case 66: goto tr473;
		case 68: goto tr474;
		case 71: goto tr475;
		case 76: goto tr476;
		case 78: goto tr477;
		case 79: goto tr478;
		case 80: goto tr479;
		case 82: goto tr480;
		case 83: goto tr481;
		case 85: goto tr482;
		case 86: goto tr483;
		case 97: goto tr472;
		case 98: goto tr473;
		case 100: goto tr474;
		case 103: goto tr475;
		case 108: goto tr476;
		case 110: goto tr477;
		case 111: goto tr478;
		case 112: goto tr479;
		case 114: goto tr480;
		case 115: goto tr481;
		case 117: goto tr482;
		case 118: goto tr483;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr471;
	goto st0;
st134:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof134;
case 134:
	if ( (*( state.p)) == 104 )
		goto st135;
	goto st0;
st135:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof135;
case 135:
	if ( (*( state.p)) == 101 )
		goto st136;
	goto st0;
st136:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof136;
case 136:
	if ( (*( state.p)) == 108 )
		goto st137;
	goto st0;
st137:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof137;
case 137:
	if ( (*( state.p)) == 108 )
		goto st138;
	goto st0;
st138:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof138;
case 138:
	switch( (*( state.p)) ) {
		case 13: goto st139;
		case 32: goto st139;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st139;
	goto st0;
st139:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof139;
case 139:
	switch( (*( state.p)) ) {
		case 13: goto st139;
		case 32: goto st139;
		case 34: goto tr197;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st139;
	goto st0;
tr197:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st140;
tr198:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st140;
tr200:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 140; goto st213;}}
	goto st140;
st140:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof140;
case 140:
#line 3498 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st141;
		case 92: goto tr200;
	}
	goto tr198;
st141:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof141;
case 141:
	switch( (*( state.p)) ) {
		case 13: goto tr201;
		case 32: goto tr201;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr201;
	goto st0;
tr201:
#line 138 "propsparser.rl"
	{ props.postin.prog = state.match; }
	goto st142;
st142:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof142;
case 142:
#line 3523 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st142;
		case 32: goto st142;
		case 34: goto tr187;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st142;
	goto st0;
st143:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof143;
case 143:
	switch( (*( state.p)) ) {
		case 13: goto st132;
		case 32: goto st132;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st132;
	goto st0;
st144:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof144;
case 144:
	if ( (*( state.p)) == 110 )
		goto st145;
	goto st0;
st145:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof145;
case 145:
	switch( (*( state.p)) ) {
		case 13: goto st146;
		case 32: goto st146;
		case 58: goto st157;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st146;
	goto st0;
st146:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof146;
case 146:
	switch( (*( state.p)) ) {
		case 13: goto st146;
		case 32: goto st146;
		case 34: goto tr206;
		case 115: goto st148;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st146;
	goto st0;
tr206:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st147;
tr208:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st147;
tr210:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 147; goto st213;}}
	goto st147;
st147:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof147;
case 147:
#line 3595 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st230;
		case 92: goto tr210;
	}
	goto tr208;
st230:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof230;
case 230:
	switch( (*( state.p)) ) {
		case 13: goto tr484;
		case 32: goto tr484;
		case 65: goto tr485;
		case 66: goto tr486;
		case 68: goto tr487;
		case 71: goto tr488;
		case 76: goto tr489;
		case 78: goto tr490;
		case 79: goto tr491;
		case 80: goto tr492;
		case 82: goto tr493;
		case 83: goto tr494;
		case 85: goto tr495;
		case 86: goto tr496;
		case 97: goto tr485;
		case 98: goto tr486;
		case 100: goto tr487;
		case 103: goto tr488;
		case 108: goto tr489;
		case 110: goto tr490;
		case 111: goto tr491;
		case 112: goto tr492;
		case 114: goto tr493;
		case 115: goto tr494;
		case 117: goto tr495;
		case 118: goto tr496;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr484;
	goto st0;
st148:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof148;
case 148:
	if ( (*( state.p)) == 104 )
		goto st149;
	goto st0;
st149:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof149;
case 149:
	if ( (*( state.p)) == 101 )
		goto st150;
	goto st0;
st150:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof150;
case 150:
	if ( (*( state.p)) == 108 )
		goto st151;
	goto st0;
st151:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof151;
case 151:
	if ( (*( state.p)) == 108 )
		goto st152;
	goto st0;
st152:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof152;
case 152:
	switch( (*( state.p)) ) {
		case 13: goto st153;
		case 32: goto st153;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st153;
	goto st0;
st153:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof153;
case 153:
	switch( (*( state.p)) ) {
		case 13: goto st153;
		case 32: goto st153;
		case 34: goto tr216;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st153;
	goto st0;
tr216:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st154;
tr217:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st154;
tr219:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 154; goto st213;}}
	goto st154;
st154:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof154;
case 154:
#line 3707 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st155;
		case 92: goto tr219;
	}
	goto tr217;
st155:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof155;
case 155:
	switch( (*( state.p)) ) {
		case 13: goto tr220;
		case 32: goto tr220;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr220;
	goto st0;
tr220:
#line 146 "propsparser.rl"
	{ props.postun.prog = state.match; }
	goto st156;
st156:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof156;
case 156:
#line 3732 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st156;
		case 32: goto st156;
		case 34: goto tr206;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st156;
	goto st0;
st157:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof157;
case 157:
	switch( (*( state.p)) ) {
		case 13: goto st146;
		case 32: goto st146;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st146;
	goto st0;
st158:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof158;
case 158:
	if ( (*( state.p)) == 101 )
		goto st159;
	goto st0;
st159:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof159;
case 159:
	switch( (*( state.p)) ) {
		case 73: goto st160;
		case 85: goto st174;
		case 105: goto st160;
		case 117: goto st174;
	}
	goto st0;
st160:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof160;
case 160:
	if ( (*( state.p)) == 110 )
		goto st161;
	goto st0;
st161:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof161;
case 161:
	switch( (*( state.p)) ) {
		case 13: goto st162;
		case 32: goto st162;
		case 58: goto st173;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st162;
	goto st0;
st162:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof162;
case 162:
	switch( (*( state.p)) ) {
		case 13: goto st162;
		case 32: goto st162;
		case 34: goto tr228;
		case 115: goto st164;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st162;
	goto st0;
tr228:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st163;
tr230:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st163;
tr232:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 163; goto st213;}}
	goto st163;
st163:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof163;
case 163:
#line 3822 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st231;
		case 92: goto tr232;
	}
	goto tr230;
st231:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof231;
case 231:
	switch( (*( state.p)) ) {
		case 13: goto tr497;
		case 32: goto tr497;
		case 65: goto tr498;
		case 66: goto tr499;
		case 68: goto tr500;
		case 71: goto tr501;
		case 76: goto tr502;
		case 78: goto tr503;
		case 79: goto tr504;
		case 80: goto tr505;
		case 82: goto tr506;
		case 83: goto tr507;
		case 85: goto tr508;
		case 86: goto tr509;
		case 97: goto tr498;
		case 98: goto tr499;
		case 100: goto tr500;
		case 103: goto tr501;
		case 108: goto tr502;
		case 110: goto tr503;
		case 111: goto tr504;
		case 112: goto tr505;
		case 114: goto tr506;
		case 115: goto tr507;
		case 117: goto tr508;
		case 118: goto tr509;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr497;
	goto st0;
st164:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof164;
case 164:
	if ( (*( state.p)) == 104 )
		goto st165;
	goto st0;
st165:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof165;
case 165:
	if ( (*( state.p)) == 101 )
		goto st166;
	goto st0;
st166:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof166;
case 166:
	if ( (*( state.p)) == 108 )
		goto st167;
	goto st0;
st167:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof167;
case 167:
	if ( (*( state.p)) == 108 )
		goto st168;
	goto st0;
st168:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof168;
case 168:
	switch( (*( state.p)) ) {
		case 13: goto st169;
		case 32: goto st169;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st169;
	goto st0;
st169:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof169;
case 169:
	switch( (*( state.p)) ) {
		case 13: goto st169;
		case 32: goto st169;
		case 34: goto tr238;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st169;
	goto st0;
tr238:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st170;
tr239:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st170;
tr241:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 170; goto st213;}}
	goto st170;
st170:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof170;
case 170:
#line 3934 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st171;
		case 92: goto tr241;
	}
	goto tr239;
st171:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof171;
case 171:
	switch( (*( state.p)) ) {
		case 13: goto tr242;
		case 32: goto tr242;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr242;
	goto st0;
tr242:
#line 134 "propsparser.rl"
	{ props.prein.prog = state.match; }
	goto st172;
st172:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof172;
case 172:
#line 3959 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st172;
		case 32: goto st172;
		case 34: goto tr228;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st172;
	goto st0;
st173:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof173;
case 173:
	switch( (*( state.p)) ) {
		case 13: goto st162;
		case 32: goto st162;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st162;
	goto st0;
st174:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof174;
case 174:
	if ( (*( state.p)) == 110 )
		goto st175;
	goto st0;
st175:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof175;
case 175:
	switch( (*( state.p)) ) {
		case 13: goto st176;
		case 32: goto st176;
		case 58: goto st187;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st176;
	goto st0;
st176:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof176;
case 176:
	switch( (*( state.p)) ) {
		case 13: goto st176;
		case 32: goto st176;
		case 34: goto tr247;
		case 115: goto st178;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st176;
	goto st0;
tr247:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st177;
tr249:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st177;
tr251:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 177; goto st213;}}
	goto st177;
st177:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof177;
case 177:
#line 4031 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st232;
		case 92: goto tr251;
	}
	goto tr249;
st232:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof232;
case 232:
	switch( (*( state.p)) ) {
		case 13: goto tr510;
		case 32: goto tr510;
		case 65: goto tr511;
		case 66: goto tr512;
		case 68: goto tr513;
		case 71: goto tr514;
		case 76: goto tr515;
		case 78: goto tr516;
		case 79: goto tr517;
		case 80: goto tr518;
		case 82: goto tr519;
		case 83: goto tr520;
		case 85: goto tr521;
		case 86: goto tr522;
		case 97: goto tr511;
		case 98: goto tr512;
		case 100: goto tr513;
		case 103: goto tr514;
		case 108: goto tr515;
		case 110: goto tr516;
		case 111: goto tr517;
		case 112: goto tr518;
		case 114: goto tr519;
		case 115: goto tr520;
		case 117: goto tr521;
		case 118: goto tr522;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr510;
	goto st0;
st178:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof178;
case 178:
	if ( (*( state.p)) == 104 )
		goto st179;
	goto st0;
st179:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof179;
case 179:
	if ( (*( state.p)) == 101 )
		goto st180;
	goto st0;
st180:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof180;
case 180:
	if ( (*( state.p)) == 108 )
		goto st181;
	goto st0;
st181:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof181;
case 181:
	if ( (*( state.p)) == 108 )
		goto st182;
	goto st0;
st182:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof182;
case 182:
	switch( (*( state.p)) ) {
		case 13: goto st183;
		case 32: goto st183;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st183;
	goto st0;
st183:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof183;
case 183:
	switch( (*( state.p)) ) {
		case 13: goto st183;
		case 32: goto st183;
		case 34: goto tr257;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st183;
	goto st0;
tr257:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st184;
tr258:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st184;
tr260:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 184; goto st213;}}
	goto st184;
st184:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof184;
case 184:
#line 4143 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st185;
		case 92: goto tr260;
	}
	goto tr258;
st185:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof185;
case 185:
	switch( (*( state.p)) ) {
		case 13: goto tr261;
		case 32: goto tr261;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr261;
	goto st0;
tr261:
#line 142 "propsparser.rl"
	{ props.preun.prog = state.match; }
	goto st186;
st186:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof186;
case 186:
#line 4168 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st186;
		case 32: goto st186;
		case 34: goto tr247;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st186;
	goto st0;
st187:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof187;
case 187:
	switch( (*( state.p)) ) {
		case 13: goto st176;
		case 32: goto st176;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st176;
	goto st0;
st188:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof188;
case 188:
	switch( (*( state.p)) ) {
		case 13: goto st56;
		case 32: goto st56;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st56;
	goto st0;
st189:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof189;
case 189:
	if ( (*( state.p)) == 116 )
		goto st190;
	goto st0;
st190:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof190;
case 190:
	switch( (*( state.p)) ) {
		case 70: goto st191;
		case 102: goto st191;
	}
	goto st0;
st191:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof191;
case 191:
	if ( (*( state.p)) == 108 )
		goto st192;
	goto st0;
st192:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof192;
case 192:
	if ( (*( state.p)) == 97 )
		goto st193;
	goto st0;
st193:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof193;
case 193:
	if ( (*( state.p)) == 103 )
		goto st194;
	goto st0;
st194:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof194;
case 194:
	if ( (*( state.p)) == 115 )
		goto st195;
	goto st0;
st195:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof195;
case 195:
	switch( (*( state.p)) ) {
		case 13: goto st196;
		case 32: goto st196;
		case 58: goto st198;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st196;
	goto st0;
st196:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof196;
case 196:
	switch( (*( state.p)) ) {
		case 13: goto st196;
		case 32: goto st196;
		case 34: goto tr271;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st196;
	goto st0;
tr271:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st197;
tr272:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st197;
tr274:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 197; goto st213;}}
	goto st197;
st197:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof197;
case 197:
#line 4287 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st233;
		case 92: goto tr274;
	}
	goto tr272;
st233:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof233;
case 233:
	switch( (*( state.p)) ) {
		case 13: goto tr523;
		case 32: goto tr523;
		case 65: goto tr524;
		case 66: goto tr525;
		case 68: goto tr526;
		case 71: goto tr527;
		case 76: goto tr528;
		case 78: goto tr529;
		case 79: goto tr530;
		case 80: goto tr531;
		case 82: goto tr532;
		case 83: goto tr533;
		case 85: goto tr534;
		case 86: goto tr535;
		case 97: goto tr524;
		case 98: goto tr525;
		case 100: goto tr526;
		case 103: goto tr527;
		case 108: goto tr528;
		case 110: goto tr529;
		case 111: goto tr530;
		case 112: goto tr531;
		case 114: goto tr532;
		case 115: goto tr533;
		case 117: goto tr534;
		case 118: goto tr535;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr523;
	goto st0;
st198:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof198;
case 198:
	switch( (*( state.p)) ) {
		case 13: goto st196;
		case 32: goto st196;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st196;
	goto st0;
st199:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof199;
case 199:
	switch( (*( state.p)) ) {
		case 13: goto st52;
		case 32: goto st52;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st52;
	goto st0;
st200:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof200;
case 200:
	switch( (*( state.p)) ) {
		case 13: goto st46;
		case 32: goto st46;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st46;
	goto st0;
st201:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof201;
case 201:
	if ( (*( state.p)) == 99 )
		goto st202;
	goto st0;
st202:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof202;
case 202:
	if ( (*( state.p)) == 97 )
		goto st203;
	goto st0;
st203:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof203;
case 203:
	if ( (*( state.p)) == 108 )
		goto st204;
	goto st0;
st204:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof204;
case 204:
	if ( (*( state.p)) == 101 )
		goto st205;
	goto st0;
st205:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof205;
case 205:
	switch( (*( state.p)) ) {
		case 13: goto st206;
		case 32: goto st206;
		case 58: goto st208;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st206;
	goto st0;
st206:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof206;
case 206:
	switch( (*( state.p)) ) {
		case 13: goto st206;
		case 32: goto st206;
		case 34: goto tr281;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st206;
	goto st0;
tr281:
#line 71 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st207;
tr282:
#line 75 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st207;
tr284:
#line 106 "propsparser.rl"
	{{ state.stack[ state.top++] = 207; goto st213;}}
	goto st207;
st207:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof207;
case 207:
#line 4433 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st234;
		case 92: goto tr284;
	}
	goto tr282;
st234:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof234;
case 234:
	switch( (*( state.p)) ) {
		case 13: goto tr536;
		case 32: goto tr536;
		case 65: goto tr537;
		case 66: goto tr538;
		case 68: goto tr539;
		case 71: goto tr540;
		case 76: goto tr541;
		case 78: goto tr542;
		case 79: goto tr543;
		case 80: goto tr544;
		case 82: goto tr545;
		case 83: goto tr546;
		case 85: goto tr547;
		case 86: goto tr548;
		case 97: goto tr537;
		case 98: goto tr538;
		case 100: goto tr539;
		case 103: goto tr540;
		case 108: goto tr541;
		case 110: goto tr542;
		case 111: goto tr543;
		case 112: goto tr544;
		case 114: goto tr545;
		case 115: goto tr546;
		case 117: goto tr547;
		case 118: goto tr548;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr536;
	goto st0;
tr536:
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	goto st235;
st235:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof235;
case 235:
#line 4482 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st235;
		case 32: goto st235;
		case 34: goto tr281;
		case 65: goto st2;
		case 66: goto st8;
		case 68: goto st19;
		case 71: goto st32;
		case 76: goto st39;
		case 78: goto st48;
		case 79: goto st54;
		case 80: goto st58;
		case 82: goto st68;
		case 83: goto st80;
		case 85: goto st89;
		case 86: goto st94;
		case 97: goto st2;
		case 98: goto st8;
		case 100: goto st19;
		case 103: goto st32;
		case 108: goto st39;
		case 110: goto st48;
		case 111: goto st54;
		case 112: goto st58;
		case 114: goto st68;
		case 115: goto st80;
		case 117: goto st89;
		case 118: goto st94;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st235;
	goto st0;
st208:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof208;
case 208:
	switch( (*( state.p)) ) {
		case 13: goto st206;
		case 32: goto st206;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st206;
	goto st0;
st209:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof209;
case 209:
	switch( (*( state.p)) ) {
		case 13: goto st37;
		case 32: goto st37;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st37;
	goto st0;
st210:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof210;
case 210:
	switch( (*( state.p)) ) {
		case 13: goto st30;
		case 32: goto st30;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st30;
	goto st0;
st211:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof211;
case 211:
	switch( (*( state.p)) ) {
		case 13: goto st17;
		case 32: goto st17;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st17;
	goto st0;
st212:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof212;
case 212:
	switch( (*( state.p)) ) {
		case 13: goto st6;
		case 32: goto st6;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st6;
	goto st0;
st213:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof213;
case 213:
	switch( (*( state.p)) ) {
		case 34: goto tr285;
		case 92: goto tr286;
		case 110: goto tr287;
	}
	goto st0;
tr285:
#line 100 "propsparser.rl"
	{ state.match += '"';  { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st236;
tr286:
#line 102 "propsparser.rl"
	{ state.match += '\\'; { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st236;
tr287:
#line 101 "propsparser.rl"
	{ state.match += '\n'; { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st236;
st236:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof236;
case 236:
#line 4596 "propsparser.h"
	goto st0;
	}
	_test_eof1:  state.cs = 1; goto _test_eof; 
	_test_eof2:  state.cs = 2; goto _test_eof; 
	_test_eof3:  state.cs = 3; goto _test_eof; 
	_test_eof4:  state.cs = 4; goto _test_eof; 
	_test_eof5:  state.cs = 5; goto _test_eof; 
	_test_eof6:  state.cs = 6; goto _test_eof; 
	_test_eof7:  state.cs = 7; goto _test_eof; 
	_test_eof214:  state.cs = 214; goto _test_eof; 
	_test_eof215:  state.cs = 215; goto _test_eof; 
	_test_eof8:  state.cs = 8; goto _test_eof; 
	_test_eof9:  state.cs = 9; goto _test_eof; 
	_test_eof10:  state.cs = 10; goto _test_eof; 
	_test_eof11:  state.cs = 11; goto _test_eof; 
	_test_eof12:  state.cs = 12; goto _test_eof; 
	_test_eof13:  state.cs = 13; goto _test_eof; 
	_test_eof14:  state.cs = 14; goto _test_eof; 
	_test_eof15:  state.cs = 15; goto _test_eof; 
	_test_eof16:  state.cs = 16; goto _test_eof; 
	_test_eof17:  state.cs = 17; goto _test_eof; 
	_test_eof18:  state.cs = 18; goto _test_eof; 
	_test_eof216:  state.cs = 216; goto _test_eof; 
	_test_eof19:  state.cs = 19; goto _test_eof; 
	_test_eof20:  state.cs = 20; goto _test_eof; 
	_test_eof21:  state.cs = 21; goto _test_eof; 
	_test_eof22:  state.cs = 22; goto _test_eof; 
	_test_eof23:  state.cs = 23; goto _test_eof; 
	_test_eof24:  state.cs = 24; goto _test_eof; 
	_test_eof25:  state.cs = 25; goto _test_eof; 
	_test_eof26:  state.cs = 26; goto _test_eof; 
	_test_eof27:  state.cs = 27; goto _test_eof; 
	_test_eof28:  state.cs = 28; goto _test_eof; 
	_test_eof29:  state.cs = 29; goto _test_eof; 
	_test_eof30:  state.cs = 30; goto _test_eof; 
	_test_eof31:  state.cs = 31; goto _test_eof; 
	_test_eof217:  state.cs = 217; goto _test_eof; 
	_test_eof32:  state.cs = 32; goto _test_eof; 
	_test_eof33:  state.cs = 33; goto _test_eof; 
	_test_eof34:  state.cs = 34; goto _test_eof; 
	_test_eof35:  state.cs = 35; goto _test_eof; 
	_test_eof36:  state.cs = 36; goto _test_eof; 
	_test_eof37:  state.cs = 37; goto _test_eof; 
	_test_eof38:  state.cs = 38; goto _test_eof; 
	_test_eof218:  state.cs = 218; goto _test_eof; 
	_test_eof39:  state.cs = 39; goto _test_eof; 
	_test_eof40:  state.cs = 40; goto _test_eof; 
	_test_eof41:  state.cs = 41; goto _test_eof; 
	_test_eof42:  state.cs = 42; goto _test_eof; 
	_test_eof43:  state.cs = 43; goto _test_eof; 
	_test_eof44:  state.cs = 44; goto _test_eof; 
	_test_eof45:  state.cs = 45; goto _test_eof; 
	_test_eof46:  state.cs = 46; goto _test_eof; 
	_test_eof47:  state.cs = 47; goto _test_eof; 
	_test_eof219:  state.cs = 219; goto _test_eof; 
	_test_eof48:  state.cs = 48; goto _test_eof; 
	_test_eof49:  state.cs = 49; goto _test_eof; 
	_test_eof50:  state.cs = 50; goto _test_eof; 
	_test_eof51:  state.cs = 51; goto _test_eof; 
	_test_eof52:  state.cs = 52; goto _test_eof; 
	_test_eof53:  state.cs = 53; goto _test_eof; 
	_test_eof220:  state.cs = 220; goto _test_eof; 
	_test_eof54:  state.cs = 54; goto _test_eof; 
	_test_eof55:  state.cs = 55; goto _test_eof; 
	_test_eof56:  state.cs = 56; goto _test_eof; 
	_test_eof57:  state.cs = 57; goto _test_eof; 
	_test_eof221:  state.cs = 221; goto _test_eof; 
	_test_eof58:  state.cs = 58; goto _test_eof; 
	_test_eof59:  state.cs = 59; goto _test_eof; 
	_test_eof60:  state.cs = 60; goto _test_eof; 
	_test_eof61:  state.cs = 61; goto _test_eof; 
	_test_eof62:  state.cs = 62; goto _test_eof; 
	_test_eof63:  state.cs = 63; goto _test_eof; 
	_test_eof64:  state.cs = 64; goto _test_eof; 
	_test_eof65:  state.cs = 65; goto _test_eof; 
	_test_eof66:  state.cs = 66; goto _test_eof; 
	_test_eof67:  state.cs = 67; goto _test_eof; 
	_test_eof222:  state.cs = 222; goto _test_eof; 
	_test_eof68:  state.cs = 68; goto _test_eof; 
	_test_eof69:  state.cs = 69; goto _test_eof; 
	_test_eof70:  state.cs = 70; goto _test_eof; 
	_test_eof71:  state.cs = 71; goto _test_eof; 
	_test_eof72:  state.cs = 72; goto _test_eof; 
	_test_eof73:  state.cs = 73; goto _test_eof; 
	_test_eof74:  state.cs = 74; goto _test_eof; 
	_test_eof75:  state.cs = 75; goto _test_eof; 
	_test_eof76:  state.cs = 76; goto _test_eof; 
	_test_eof77:  state.cs = 77; goto _test_eof; 
	_test_eof78:  state.cs = 78; goto _test_eof; 
	_test_eof79:  state.cs = 79; goto _test_eof; 
	_test_eof223:  state.cs = 223; goto _test_eof; 
	_test_eof80:  state.cs = 80; goto _test_eof; 
	_test_eof81:  state.cs = 81; goto _test_eof; 
	_test_eof82:  state.cs = 82; goto _test_eof; 
	_test_eof83:  state.cs = 83; goto _test_eof; 
	_test_eof84:  state.cs = 84; goto _test_eof; 
	_test_eof85:  state.cs = 85; goto _test_eof; 
	_test_eof86:  state.cs = 86; goto _test_eof; 
	_test_eof87:  state.cs = 87; goto _test_eof; 
	_test_eof88:  state.cs = 88; goto _test_eof; 
	_test_eof224:  state.cs = 224; goto _test_eof; 
	_test_eof89:  state.cs = 89; goto _test_eof; 
	_test_eof90:  state.cs = 90; goto _test_eof; 
	_test_eof91:  state.cs = 91; goto _test_eof; 
	_test_eof92:  state.cs = 92; goto _test_eof; 
	_test_eof93:  state.cs = 93; goto _test_eof; 
	_test_eof225:  state.cs = 225; goto _test_eof; 
	_test_eof94:  state.cs = 94; goto _test_eof; 
	_test_eof95:  state.cs = 95; goto _test_eof; 
	_test_eof96:  state.cs = 96; goto _test_eof; 
	_test_eof97:  state.cs = 97; goto _test_eof; 
	_test_eof98:  state.cs = 98; goto _test_eof; 
	_test_eof99:  state.cs = 99; goto _test_eof; 
	_test_eof100:  state.cs = 100; goto _test_eof; 
	_test_eof101:  state.cs = 101; goto _test_eof; 
	_test_eof102:  state.cs = 102; goto _test_eof; 
	_test_eof226:  state.cs = 226; goto _test_eof; 
	_test_eof103:  state.cs = 103; goto _test_eof; 
	_test_eof104:  state.cs = 104; goto _test_eof; 
	_test_eof105:  state.cs = 105; goto _test_eof; 
	_test_eof106:  state.cs = 106; goto _test_eof; 
	_test_eof107:  state.cs = 107; goto _test_eof; 
	_test_eof108:  state.cs = 108; goto _test_eof; 
	_test_eof109:  state.cs = 109; goto _test_eof; 
	_test_eof110:  state.cs = 110; goto _test_eof; 
	_test_eof111:  state.cs = 111; goto _test_eof; 
	_test_eof112:  state.cs = 112; goto _test_eof; 
	_test_eof113:  state.cs = 113; goto _test_eof; 
	_test_eof114:  state.cs = 114; goto _test_eof; 
	_test_eof227:  state.cs = 227; goto _test_eof; 
	_test_eof115:  state.cs = 115; goto _test_eof; 
	_test_eof116:  state.cs = 116; goto _test_eof; 
	_test_eof117:  state.cs = 117; goto _test_eof; 
	_test_eof118:  state.cs = 118; goto _test_eof; 
	_test_eof119:  state.cs = 119; goto _test_eof; 
	_test_eof120:  state.cs = 120; goto _test_eof; 
	_test_eof121:  state.cs = 121; goto _test_eof; 
	_test_eof122:  state.cs = 122; goto _test_eof; 
	_test_eof123:  state.cs = 123; goto _test_eof; 
	_test_eof124:  state.cs = 124; goto _test_eof; 
	_test_eof125:  state.cs = 125; goto _test_eof; 
	_test_eof228:  state.cs = 228; goto _test_eof; 
	_test_eof126:  state.cs = 126; goto _test_eof; 
	_test_eof127:  state.cs = 127; goto _test_eof; 
	_test_eof128:  state.cs = 128; goto _test_eof; 
	_test_eof129:  state.cs = 129; goto _test_eof; 
	_test_eof130:  state.cs = 130; goto _test_eof; 
	_test_eof131:  state.cs = 131; goto _test_eof; 
	_test_eof132:  state.cs = 132; goto _test_eof; 
	_test_eof133:  state.cs = 133; goto _test_eof; 
	_test_eof229:  state.cs = 229; goto _test_eof; 
	_test_eof134:  state.cs = 134; goto _test_eof; 
	_test_eof135:  state.cs = 135; goto _test_eof; 
	_test_eof136:  state.cs = 136; goto _test_eof; 
	_test_eof137:  state.cs = 137; goto _test_eof; 
	_test_eof138:  state.cs = 138; goto _test_eof; 
	_test_eof139:  state.cs = 139; goto _test_eof; 
	_test_eof140:  state.cs = 140; goto _test_eof; 
	_test_eof141:  state.cs = 141; goto _test_eof; 
	_test_eof142:  state.cs = 142; goto _test_eof; 
	_test_eof143:  state.cs = 143; goto _test_eof; 
	_test_eof144:  state.cs = 144; goto _test_eof; 
	_test_eof145:  state.cs = 145; goto _test_eof; 
	_test_eof146:  state.cs = 146; goto _test_eof; 
	_test_eof147:  state.cs = 147; goto _test_eof; 
	_test_eof230:  state.cs = 230; goto _test_eof; 
	_test_eof148:  state.cs = 148; goto _test_eof; 
	_test_eof149:  state.cs = 149; goto _test_eof; 
	_test_eof150:  state.cs = 150; goto _test_eof; 
	_test_eof151:  state.cs = 151; goto _test_eof; 
	_test_eof152:  state.cs = 152; goto _test_eof; 
	_test_eof153:  state.cs = 153; goto _test_eof; 
	_test_eof154:  state.cs = 154; goto _test_eof; 
	_test_eof155:  state.cs = 155; goto _test_eof; 
	_test_eof156:  state.cs = 156; goto _test_eof; 
	_test_eof157:  state.cs = 157; goto _test_eof; 
	_test_eof158:  state.cs = 158; goto _test_eof; 
	_test_eof159:  state.cs = 159; goto _test_eof; 
	_test_eof160:  state.cs = 160; goto _test_eof; 
	_test_eof161:  state.cs = 161; goto _test_eof; 
	_test_eof162:  state.cs = 162; goto _test_eof; 
	_test_eof163:  state.cs = 163; goto _test_eof; 
	_test_eof231:  state.cs = 231; goto _test_eof; 
	_test_eof164:  state.cs = 164; goto _test_eof; 
	_test_eof165:  state.cs = 165; goto _test_eof; 
	_test_eof166:  state.cs = 166; goto _test_eof; 
	_test_eof167:  state.cs = 167; goto _test_eof; 
	_test_eof168:  state.cs = 168; goto _test_eof; 
	_test_eof169:  state.cs = 169; goto _test_eof; 
	_test_eof170:  state.cs = 170; goto _test_eof; 
	_test_eof171:  state.cs = 171; goto _test_eof; 
	_test_eof172:  state.cs = 172; goto _test_eof; 
	_test_eof173:  state.cs = 173; goto _test_eof; 
	_test_eof174:  state.cs = 174; goto _test_eof; 
	_test_eof175:  state.cs = 175; goto _test_eof; 
	_test_eof176:  state.cs = 176; goto _test_eof; 
	_test_eof177:  state.cs = 177; goto _test_eof; 
	_test_eof232:  state.cs = 232; goto _test_eof; 
	_test_eof178:  state.cs = 178; goto _test_eof; 
	_test_eof179:  state.cs = 179; goto _test_eof; 
	_test_eof180:  state.cs = 180; goto _test_eof; 
	_test_eof181:  state.cs = 181; goto _test_eof; 
	_test_eof182:  state.cs = 182; goto _test_eof; 
	_test_eof183:  state.cs = 183; goto _test_eof; 
	_test_eof184:  state.cs = 184; goto _test_eof; 
	_test_eof185:  state.cs = 185; goto _test_eof; 
	_test_eof186:  state.cs = 186; goto _test_eof; 
	_test_eof187:  state.cs = 187; goto _test_eof; 
	_test_eof188:  state.cs = 188; goto _test_eof; 
	_test_eof189:  state.cs = 189; goto _test_eof; 
	_test_eof190:  state.cs = 190; goto _test_eof; 
	_test_eof191:  state.cs = 191; goto _test_eof; 
	_test_eof192:  state.cs = 192; goto _test_eof; 
	_test_eof193:  state.cs = 193; goto _test_eof; 
	_test_eof194:  state.cs = 194; goto _test_eof; 
	_test_eof195:  state.cs = 195; goto _test_eof; 
	_test_eof196:  state.cs = 196; goto _test_eof; 
	_test_eof197:  state.cs = 197; goto _test_eof; 
	_test_eof233:  state.cs = 233; goto _test_eof; 
	_test_eof198:  state.cs = 198; goto _test_eof; 
	_test_eof199:  state.cs = 199; goto _test_eof; 
	_test_eof200:  state.cs = 200; goto _test_eof; 
	_test_eof201:  state.cs = 201; goto _test_eof; 
	_test_eof202:  state.cs = 202; goto _test_eof; 
	_test_eof203:  state.cs = 203; goto _test_eof; 
	_test_eof204:  state.cs = 204; goto _test_eof; 
	_test_eof205:  state.cs = 205; goto _test_eof; 
	_test_eof206:  state.cs = 206; goto _test_eof; 
	_test_eof207:  state.cs = 207; goto _test_eof; 
	_test_eof234:  state.cs = 234; goto _test_eof; 
	_test_eof235:  state.cs = 235; goto _test_eof; 
	_test_eof208:  state.cs = 208; goto _test_eof; 
	_test_eof209:  state.cs = 209; goto _test_eof; 
	_test_eof210:  state.cs = 210; goto _test_eof; 
	_test_eof211:  state.cs = 211; goto _test_eof; 
	_test_eof212:  state.cs = 212; goto _test_eof; 
	_test_eof213:  state.cs = 213; goto _test_eof; 
	_test_eof236:  state.cs = 236; goto _test_eof; 

	_test_eof: {}
	if ( ( state.p) == ( state.eof) )
	{
	switch (  state.cs ) {
	case 234: 
#line 114 "propsparser.rl"
	{ props.locale.push_back(state.match); }
	break;
	case 220: 
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	break;
	case 226: 
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	break;
	case 227: 
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	break;
	case 224: 
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	break;
	case 217: 
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	break;
	case 216: 
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	break;
	case 219: 
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	break;
	case 222: 
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	break;
	case 218: 
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	break;
	case 225: 
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	break;
	case 221: 
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	break;
	case 214: 
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	break;
	case 228: 
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	break;
	case 233: 
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	break;
	case 223: 
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	break;
	case 231: 
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	break;
	case 229: 
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	break;
	case 232: 
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	break;
	case 230: 
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	break;
#line 4920 "propsparser.h"
	}
	}

	_out: {}
	}

#line 186 "propsparser.rl"

        // Avoid spurious gcc warnings.

        if (state.cs == PropsParser_error) {
            throw std::runtime_error("Parse error. Unconsumed input: " + std::string(state.p, state.pe));
        }

        if (state.ts == 0) {
            have = 0;

        } else {
            have = state.pe - state.ts;
            ::memmove(buf, state.ts, have);
            state.te = buf + (state.te - state.ts);
            state.ts = buf;
        }
    }
}

}

#endif
