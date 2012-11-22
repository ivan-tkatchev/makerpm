
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

    rpmprops_t::deps_t deps;

    
#line 194 "propsparser.rl"

/*

*/

    
#line 75 "propsparser.h"
static const int PropsParser_start = 1;
static const int PropsParser_first_final = 262;
static const int PropsParser_error = 0;

static const int PropsParser_en_strchar_escape = 261;
static const int PropsParser_en_main = 1;


#line 200 "propsparser.rl"
    
#line 86 "propsparser.h"
	{
	 state.cs = PropsParser_start;
	 state.top = 0;
	}

#line 201 "propsparser.rl"

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

        
#line 115 "propsparser.h"
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
		case 262: goto st262;
		case 263: goto st263;
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
		case 264: goto st264;
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
		case 265: goto st265;
		case 32: goto st32;
		case 33: goto st33;
		case 34: goto st34;
		case 35: goto st35;
		case 36: goto st36;
		case 37: goto st37;
		case 38: goto st38;
		case 266: goto st266;
		case 39: goto st39;
		case 40: goto st40;
		case 41: goto st41;
		case 42: goto st42;
		case 43: goto st43;
		case 44: goto st44;
		case 45: goto st45;
		case 46: goto st46;
		case 47: goto st47;
		case 267: goto st267;
		case 48: goto st48;
		case 49: goto st49;
		case 50: goto st50;
		case 51: goto st51;
		case 52: goto st52;
		case 53: goto st53;
		case 268: goto st268;
		case 54: goto st54;
		case 55: goto st55;
		case 56: goto st56;
		case 57: goto st57;
		case 269: goto st269;
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
		case 270: goto st270;
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
		case 271: goto st271;
		case 80: goto st80;
		case 81: goto st81;
		case 82: goto st82;
		case 83: goto st83;
		case 84: goto st84;
		case 85: goto st85;
		case 86: goto st86;
		case 87: goto st87;
		case 88: goto st88;
		case 272: goto st272;
		case 89: goto st89;
		case 90: goto st90;
		case 91: goto st91;
		case 92: goto st92;
		case 93: goto st93;
		case 273: goto st273;
		case 94: goto st94;
		case 95: goto st95;
		case 96: goto st96;
		case 97: goto st97;
		case 98: goto st98;
		case 99: goto st99;
		case 100: goto st100;
		case 101: goto st101;
		case 102: goto st102;
		case 274: goto st274;
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
		case 275: goto st275;
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
		case 276: goto st276;
		case 125: goto st125;
		case 126: goto st126;
		case 127: goto st127;
		case 277: goto st277;
		case 128: goto st128;
		case 129: goto st129;
		case 130: goto st130;
		case 131: goto st131;
		case 132: goto st132;
		case 133: goto st133;
		case 278: goto st278;
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
		case 148: goto st148;
		case 149: goto st149;
		case 150: goto st150;
		case 151: goto st151;
		case 152: goto st152;
		case 153: goto st153;
		case 279: goto st279;
		case 154: goto st154;
		case 155: goto st155;
		case 156: goto st156;
		case 157: goto st157;
		case 158: goto st158;
		case 159: goto st159;
		case 160: goto st160;
		case 161: goto st161;
		case 280: goto st280;
		case 162: goto st162;
		case 163: goto st163;
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
		case 281: goto st281;
		case 176: goto st176;
		case 177: goto st177;
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
		case 282: goto st282;
		case 192: goto st192;
		case 193: goto st193;
		case 194: goto st194;
		case 195: goto st195;
		case 196: goto st196;
		case 197: goto st197;
		case 198: goto st198;
		case 199: goto st199;
		case 200: goto st200;
		case 201: goto st201;
		case 202: goto st202;
		case 203: goto st203;
		case 204: goto st204;
		case 205: goto st205;
		case 283: goto st283;
		case 206: goto st206;
		case 207: goto st207;
		case 208: goto st208;
		case 209: goto st209;
		case 210: goto st210;
		case 211: goto st211;
		case 212: goto st212;
		case 213: goto st213;
		case 214: goto st214;
		case 215: goto st215;
		case 216: goto st216;
		case 217: goto st217;
		case 218: goto st218;
		case 219: goto st219;
		case 220: goto st220;
		case 221: goto st221;
		case 222: goto st222;
		case 223: goto st223;
		case 224: goto st224;
		case 284: goto st284;
		case 225: goto st225;
		case 226: goto st226;
		case 227: goto st227;
		case 285: goto st285;
		case 228: goto st228;
		case 229: goto st229;
		case 230: goto st230;
		case 231: goto st231;
		case 232: goto st232;
		case 233: goto st233;
		case 286: goto st286;
		case 234: goto st234;
		case 235: goto st235;
		case 236: goto st236;
		case 237: goto st237;
		case 238: goto st238;
		case 239: goto st239;
		case 240: goto st240;
		case 241: goto st241;
		case 242: goto st242;
		case 243: goto st243;
		case 244: goto st244;
		case 245: goto st245;
		case 246: goto st246;
		case 247: goto st247;
		case 248: goto st248;
		case 249: goto st249;
		case 250: goto st250;
		case 251: goto st251;
		case 252: goto st252;
		case 253: goto st253;
		case 287: goto st287;
		case 254: goto st254;
		case 255: goto st255;
		case 256: goto st256;
		case 257: goto st257;
		case 258: goto st258;
		case 259: goto st259;
		case 260: goto st260;
		case 261: goto st261;
		case 288: goto st288;
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
tr382:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st2;
tr396:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st2;
tr409:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st2;
tr422:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st2;
tr435:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st2;
tr448:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st2;
tr461:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st2;
tr474:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st2;
tr487:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st2;
tr500:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st2;
tr513:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st2;
tr526:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st2;
tr539:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st2;
tr555:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st2;
tr568:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st2;
tr581:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st2;
tr594:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st2;
tr607:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st2;
tr620:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st2;
tr633:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st2;
tr649:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st2;
tr662:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st2;
tr675:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st2;
st2:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof2;
case 2:
#line 558 "propsparser.h"
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
		case 58: goto st260;
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
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st7;
tr20:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st7;
tr22:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 7; goto st261;}}
	goto st7;
st7:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof7;
case 7:
#line 620 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st262;
		case 92: goto tr22;
	}
	goto tr20;
st262:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof262;
case 262:
	switch( (*( state.p)) ) {
		case 13: goto tr381;
		case 32: goto tr381;
		case 65: goto tr382;
		case 66: goto tr383;
		case 68: goto tr384;
		case 71: goto tr385;
		case 76: goto tr386;
		case 78: goto tr387;
		case 79: goto tr388;
		case 80: goto tr389;
		case 82: goto tr390;
		case 83: goto tr391;
		case 85: goto tr392;
		case 86: goto tr393;
		case 97: goto tr382;
		case 98: goto tr383;
		case 100: goto tr384;
		case 103: goto tr385;
		case 108: goto tr386;
		case 110: goto tr387;
		case 111: goto tr388;
		case 112: goto tr389;
		case 114: goto tr390;
		case 115: goto tr391;
		case 117: goto tr392;
		case 118: goto tr393;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr381;
	goto st0;
tr381:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st263;
tr395:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st263;
tr408:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st263;
tr421:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st263;
tr434:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st263;
tr447:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st263;
tr460:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st263;
tr473:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st263;
tr486:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st263;
tr499:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st263;
tr512:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st263;
tr525:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st263;
tr538:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st263;
tr551:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st263;
tr567:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st263;
tr580:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st263;
tr593:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st263;
tr606:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st263;
tr619:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st263;
tr632:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st263;
tr645:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st263;
tr661:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st263;
tr674:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st263;
st263:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof263;
case 263:
#line 761 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st263;
		case 32: goto st263;
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
		goto st263;
	goto st0;
tr383:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st8;
tr397:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st8;
tr410:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st8;
tr423:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st8;
tr436:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st8;
tr449:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st8;
tr462:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st8;
tr475:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st8;
tr488:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st8;
tr501:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st8;
tr514:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st8;
tr527:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st8;
tr540:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st8;
tr556:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st8;
tr569:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st8;
tr582:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st8;
tr595:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st8;
tr608:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st8;
tr621:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st8;
tr634:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st8;
tr650:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st8;
tr663:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st8;
tr676:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st8;
st8:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof8;
case 8:
#line 893 "propsparser.h"
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
		case 58: goto st259;
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
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st18;
tr34:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st18;
tr36:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 18; goto st261;}}
	goto st18;
st18:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof18;
case 18:
#line 992 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st264;
		case 92: goto tr36;
	}
	goto tr34;
st264:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof264;
case 264:
	switch( (*( state.p)) ) {
		case 13: goto tr395;
		case 32: goto tr395;
		case 65: goto tr396;
		case 66: goto tr397;
		case 68: goto tr398;
		case 71: goto tr399;
		case 76: goto tr400;
		case 78: goto tr401;
		case 79: goto tr402;
		case 80: goto tr403;
		case 82: goto tr404;
		case 83: goto tr405;
		case 85: goto tr406;
		case 86: goto tr407;
		case 97: goto tr396;
		case 98: goto tr397;
		case 100: goto tr398;
		case 103: goto tr399;
		case 108: goto tr400;
		case 110: goto tr401;
		case 111: goto tr402;
		case 112: goto tr403;
		case 114: goto tr404;
		case 115: goto tr405;
		case 117: goto tr406;
		case 118: goto tr407;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr395;
	goto st0;
tr384:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st19;
tr398:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st19;
tr411:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st19;
tr424:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st19;
tr437:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st19;
tr450:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st19;
tr463:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st19;
tr476:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st19;
tr489:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st19;
tr502:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st19;
tr515:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st19;
tr528:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st19;
tr541:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st19;
tr557:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st19;
tr570:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st19;
tr583:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st19;
tr596:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st19;
tr609:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st19;
tr622:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st19;
tr635:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st19;
tr651:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st19;
tr664:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st19;
tr677:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st19;
st19:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof19;
case 19:
#line 1133 "propsparser.h"
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
		case 58: goto st258;
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
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st31;
tr50:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st31;
tr52:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 31; goto st261;}}
	goto st31;
st31:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof31;
case 31:
#line 1244 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st265;
		case 92: goto tr52;
	}
	goto tr50;
st265:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof265;
case 265:
	switch( (*( state.p)) ) {
		case 13: goto tr408;
		case 32: goto tr408;
		case 65: goto tr409;
		case 66: goto tr410;
		case 68: goto tr411;
		case 71: goto tr412;
		case 76: goto tr413;
		case 78: goto tr414;
		case 79: goto tr415;
		case 80: goto tr416;
		case 82: goto tr417;
		case 83: goto tr418;
		case 85: goto tr419;
		case 86: goto tr420;
		case 97: goto tr409;
		case 98: goto tr410;
		case 100: goto tr411;
		case 103: goto tr412;
		case 108: goto tr413;
		case 110: goto tr414;
		case 111: goto tr415;
		case 112: goto tr416;
		case 114: goto tr417;
		case 115: goto tr418;
		case 117: goto tr419;
		case 118: goto tr420;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr408;
	goto st0;
tr385:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st32;
tr399:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st32;
tr412:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st32;
tr425:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st32;
tr438:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st32;
tr451:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st32;
tr464:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st32;
tr477:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st32;
tr490:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st32;
tr503:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st32;
tr516:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st32;
tr529:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st32;
tr542:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st32;
tr558:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st32;
tr571:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st32;
tr584:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st32;
tr597:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st32;
tr610:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st32;
tr623:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st32;
tr636:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st32;
tr652:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st32;
tr665:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st32;
tr678:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st32;
st32:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof32;
case 32:
#line 1385 "propsparser.h"
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
		case 58: goto st257;
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
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st38;
tr60:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st38;
tr62:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 38; goto st261;}}
	goto st38;
st38:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof38;
case 38:
#line 1454 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st266;
		case 92: goto tr62;
	}
	goto tr60;
st266:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof266;
case 266:
	switch( (*( state.p)) ) {
		case 13: goto tr421;
		case 32: goto tr421;
		case 65: goto tr422;
		case 66: goto tr423;
		case 68: goto tr424;
		case 71: goto tr425;
		case 76: goto tr426;
		case 78: goto tr427;
		case 79: goto tr428;
		case 80: goto tr429;
		case 82: goto tr430;
		case 83: goto tr431;
		case 85: goto tr432;
		case 86: goto tr433;
		case 97: goto tr422;
		case 98: goto tr423;
		case 100: goto tr424;
		case 103: goto tr425;
		case 108: goto tr426;
		case 110: goto tr427;
		case 111: goto tr428;
		case 112: goto tr429;
		case 114: goto tr430;
		case 115: goto tr431;
		case 117: goto tr432;
		case 118: goto tr433;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr421;
	goto st0;
tr386:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st39;
tr400:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st39;
tr413:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st39;
tr426:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st39;
tr439:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st39;
tr452:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st39;
tr465:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st39;
tr478:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st39;
tr491:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st39;
tr504:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st39;
tr517:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st39;
tr530:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st39;
tr543:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st39;
tr559:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st39;
tr572:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st39;
tr585:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st39;
tr598:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st39;
tr611:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st39;
tr624:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st39;
tr637:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st39;
tr653:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st39;
tr666:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st39;
tr679:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st39;
st39:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof39;
case 39:
#line 1595 "propsparser.h"
	if ( (*( state.p)) == 105 )
		goto st40;
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
		case 58: goto st256;
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
		case 34: goto tr71;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st46;
	goto st0;
tr71:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st47;
tr72:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st47;
tr74:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 47; goto st261;}}
	goto st47;
st47:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof47;
case 47:
#line 1678 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st267;
		case 92: goto tr74;
	}
	goto tr72;
st267:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof267;
case 267:
	switch( (*( state.p)) ) {
		case 13: goto tr434;
		case 32: goto tr434;
		case 65: goto tr435;
		case 66: goto tr436;
		case 68: goto tr437;
		case 71: goto tr438;
		case 76: goto tr439;
		case 78: goto tr440;
		case 79: goto tr441;
		case 80: goto tr442;
		case 82: goto tr443;
		case 83: goto tr444;
		case 85: goto tr445;
		case 86: goto tr446;
		case 97: goto tr435;
		case 98: goto tr436;
		case 100: goto tr437;
		case 103: goto tr438;
		case 108: goto tr439;
		case 110: goto tr440;
		case 111: goto tr441;
		case 112: goto tr442;
		case 114: goto tr443;
		case 115: goto tr444;
		case 117: goto tr445;
		case 118: goto tr446;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr434;
	goto st0;
tr387:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st48;
tr401:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st48;
tr414:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st48;
tr427:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st48;
tr440:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st48;
tr453:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st48;
tr466:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st48;
tr479:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st48;
tr492:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st48;
tr505:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st48;
tr518:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st48;
tr531:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st48;
tr544:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st48;
tr560:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st48;
tr573:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st48;
tr586:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st48;
tr599:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st48;
tr612:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st48;
tr625:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st48;
tr638:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st48;
tr654:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st48;
tr667:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st48;
tr680:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st48;
st48:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof48;
case 48:
#line 1819 "propsparser.h"
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
		case 58: goto st255;
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
		case 34: goto tr80;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st52;
	goto st0;
tr80:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st53;
tr81:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st53;
tr83:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 53; goto st261;}}
	goto st53;
st53:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof53;
case 53:
#line 1881 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st268;
		case 92: goto tr83;
	}
	goto tr81;
st268:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof268;
case 268:
	switch( (*( state.p)) ) {
		case 13: goto tr447;
		case 32: goto tr447;
		case 65: goto tr448;
		case 66: goto tr449;
		case 68: goto tr450;
		case 71: goto tr451;
		case 76: goto tr452;
		case 78: goto tr453;
		case 79: goto tr454;
		case 80: goto tr455;
		case 82: goto tr456;
		case 83: goto tr457;
		case 85: goto tr458;
		case 86: goto tr459;
		case 97: goto tr448;
		case 98: goto tr449;
		case 100: goto tr450;
		case 103: goto tr451;
		case 108: goto tr452;
		case 110: goto tr453;
		case 111: goto tr454;
		case 112: goto tr455;
		case 114: goto tr456;
		case 115: goto tr457;
		case 117: goto tr458;
		case 118: goto tr459;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr447;
	goto st0;
tr388:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st54;
tr402:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st54;
tr415:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st54;
tr428:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st54;
tr441:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st54;
tr454:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st54;
tr467:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st54;
tr480:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st54;
tr493:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st54;
tr506:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st54;
tr519:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st54;
tr532:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st54;
tr545:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st54;
tr561:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st54;
tr574:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st54;
tr587:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st54;
tr600:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st54;
tr613:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st54;
tr626:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st54;
tr639:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st54;
tr655:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st54;
tr668:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st54;
tr681:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st54;
st54:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof54;
case 54:
#line 2022 "propsparser.h"
	switch( (*( state.p)) ) {
		case 83: goto st55;
		case 112: goto st245;
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
		case 58: goto st244;
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
		case 34: goto tr88;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st56;
	goto st0;
tr88:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st57;
tr89:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st57;
tr91:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 57; goto st261;}}
	goto st57;
st57:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof57;
case 57:
#line 2073 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st269;
		case 92: goto tr91;
	}
	goto tr89;
st269:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof269;
case 269:
	switch( (*( state.p)) ) {
		case 13: goto tr460;
		case 32: goto tr460;
		case 65: goto tr461;
		case 66: goto tr462;
		case 68: goto tr463;
		case 71: goto tr464;
		case 76: goto tr465;
		case 78: goto tr466;
		case 79: goto tr467;
		case 80: goto tr468;
		case 82: goto tr469;
		case 83: goto tr470;
		case 85: goto tr471;
		case 86: goto tr472;
		case 97: goto tr461;
		case 98: goto tr462;
		case 100: goto tr463;
		case 103: goto tr464;
		case 108: goto tr465;
		case 110: goto tr466;
		case 111: goto tr467;
		case 112: goto tr468;
		case 114: goto tr469;
		case 115: goto tr470;
		case 117: goto tr471;
		case 118: goto tr472;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr460;
	goto st0;
tr389:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st58;
tr403:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st58;
tr416:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st58;
tr429:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st58;
tr442:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st58;
tr455:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st58;
tr468:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st58;
tr481:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st58;
tr494:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st58;
tr507:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st58;
tr520:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st58;
tr533:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st58;
tr546:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st58;
tr562:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st58;
tr575:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st58;
tr588:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st58;
tr601:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st58;
tr614:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st58;
tr627:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st58;
tr640:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st58;
tr656:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st58;
tr669:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st58;
tr682:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st58;
st58:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof58;
case 58:
#line 2214 "propsparser.h"
	switch( (*( state.p)) ) {
		case 97: goto st59;
		case 108: goto st145;
		case 111: goto st155;
		case 114: goto st186;
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
		case 58: goto st144;
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
		case 34: goto tr104;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st66;
	goto st0;
tr104:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st67;
tr105:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st67;
tr107:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 67; goto st261;}}
	goto st67;
st67:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof67;
case 67:
#line 2308 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st270;
		case 92: goto tr107;
	}
	goto tr105;
st270:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof270;
case 270:
	switch( (*( state.p)) ) {
		case 13: goto tr473;
		case 32: goto tr473;
		case 65: goto tr474;
		case 66: goto tr475;
		case 68: goto tr476;
		case 71: goto tr477;
		case 76: goto tr478;
		case 78: goto tr479;
		case 79: goto tr480;
		case 80: goto tr481;
		case 82: goto tr482;
		case 83: goto tr483;
		case 85: goto tr484;
		case 86: goto tr485;
		case 97: goto tr474;
		case 98: goto tr475;
		case 100: goto tr476;
		case 103: goto tr477;
		case 108: goto tr478;
		case 110: goto tr479;
		case 111: goto tr480;
		case 112: goto tr481;
		case 114: goto tr482;
		case 115: goto tr483;
		case 117: goto tr484;
		case 118: goto tr485;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr473;
	goto st0;
tr390:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st68;
tr404:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st68;
tr417:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st68;
tr430:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st68;
tr443:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st68;
tr456:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st68;
tr469:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st68;
tr482:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st68;
tr495:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st68;
tr508:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st68;
tr521:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st68;
tr534:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st68;
tr547:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st68;
tr563:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st68;
tr576:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st68;
tr589:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st68;
tr602:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st68;
tr615:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st68;
tr628:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st68;
tr641:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st68;
tr657:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st68;
tr670:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st68;
tr683:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st68;
st68:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof68;
case 68:
#line 2449 "propsparser.h"
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
		case 34: goto tr120;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st78;
	goto st0;
tr120:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st79;
tr121:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st79;
tr123:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 79; goto st261;}}
	goto st79;
st79:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof79;
case 79:
#line 2560 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st271;
		case 92: goto tr123;
	}
	goto tr121;
st271:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof271;
case 271:
	switch( (*( state.p)) ) {
		case 13: goto tr486;
		case 32: goto tr486;
		case 65: goto tr487;
		case 66: goto tr488;
		case 68: goto tr489;
		case 71: goto tr490;
		case 76: goto tr491;
		case 78: goto tr492;
		case 79: goto tr493;
		case 80: goto tr494;
		case 82: goto tr495;
		case 83: goto tr496;
		case 85: goto tr497;
		case 86: goto tr498;
		case 97: goto tr487;
		case 98: goto tr488;
		case 100: goto tr489;
		case 103: goto tr490;
		case 108: goto tr491;
		case 110: goto tr492;
		case 111: goto tr493;
		case 112: goto tr494;
		case 114: goto tr495;
		case 115: goto tr496;
		case 117: goto tr497;
		case 118: goto tr498;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr486;
	goto st0;
tr391:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st80;
tr405:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st80;
tr418:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st80;
tr431:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st80;
tr444:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st80;
tr457:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st80;
tr470:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st80;
tr483:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st80;
tr496:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st80;
tr509:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st80;
tr522:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st80;
tr535:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st80;
tr548:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st80;
tr564:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st80;
tr577:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st80;
tr590:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st80;
tr603:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st80;
tr616:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st80;
tr629:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st80;
tr642:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st80;
tr658:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st80;
tr671:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st80;
tr684:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st80;
st80:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof80;
case 80:
#line 2701 "propsparser.h"
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
		case 34: goto tr132;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st87;
	goto st0;
tr132:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st88;
tr133:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st88;
tr135:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 88; goto st261;}}
	goto st88;
st88:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof88;
case 88:
#line 2784 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st272;
		case 92: goto tr135;
	}
	goto tr133;
st272:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof272;
case 272:
	switch( (*( state.p)) ) {
		case 13: goto tr499;
		case 32: goto tr499;
		case 65: goto tr500;
		case 66: goto tr501;
		case 68: goto tr502;
		case 71: goto tr503;
		case 76: goto tr504;
		case 78: goto tr505;
		case 79: goto tr506;
		case 80: goto tr507;
		case 82: goto tr508;
		case 83: goto tr509;
		case 85: goto tr510;
		case 86: goto tr511;
		case 97: goto tr500;
		case 98: goto tr501;
		case 100: goto tr502;
		case 103: goto tr503;
		case 108: goto tr504;
		case 110: goto tr505;
		case 111: goto tr506;
		case 112: goto tr507;
		case 114: goto tr508;
		case 115: goto tr509;
		case 117: goto tr510;
		case 118: goto tr511;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr499;
	goto st0;
tr392:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st89;
tr406:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st89;
tr419:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st89;
tr432:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st89;
tr445:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st89;
tr458:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st89;
tr471:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st89;
tr484:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st89;
tr497:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st89;
tr510:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st89;
tr523:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st89;
tr536:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st89;
tr549:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st89;
tr565:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st89;
tr578:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st89;
tr591:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st89;
tr604:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st89;
tr617:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st89;
tr630:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st89;
tr643:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st89;
tr659:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st89;
tr672:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st89;
tr685:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st89;
st89:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof89;
case 89:
#line 2925 "propsparser.h"
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
		case 34: goto tr140;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st92;
	goto st0;
tr140:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st93;
tr141:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st93;
tr143:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 93; goto st261;}}
	goto st93;
st93:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof93;
case 93:
#line 2984 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st273;
		case 92: goto tr143;
	}
	goto tr141;
st273:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof273;
case 273:
	switch( (*( state.p)) ) {
		case 13: goto tr512;
		case 32: goto tr512;
		case 65: goto tr513;
		case 66: goto tr514;
		case 68: goto tr515;
		case 71: goto tr516;
		case 76: goto tr517;
		case 78: goto tr518;
		case 79: goto tr519;
		case 80: goto tr520;
		case 82: goto tr521;
		case 83: goto tr522;
		case 85: goto tr523;
		case 86: goto tr524;
		case 97: goto tr513;
		case 98: goto tr514;
		case 100: goto tr515;
		case 103: goto tr516;
		case 108: goto tr517;
		case 110: goto tr518;
		case 111: goto tr519;
		case 112: goto tr520;
		case 114: goto tr521;
		case 115: goto tr522;
		case 117: goto tr523;
		case 118: goto tr524;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr512;
	goto st0;
tr393:
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	goto st94;
tr407:
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st94;
tr420:
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	goto st94;
tr433:
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	goto st94;
tr446:
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	goto st94;
tr459:
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	goto st94;
tr472:
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	goto st94;
tr485:
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	goto st94;
tr498:
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st94;
tr511:
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	goto st94;
tr524:
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	goto st94;
tr537:
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	goto st94;
tr550:
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	goto st94;
tr566:
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st94;
tr579:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	goto st94;
tr592:
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	goto st94;
tr605:
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st94;
tr618:
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st94;
tr631:
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st94;
tr644:
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st94;
tr660:
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st94;
tr673:
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	goto st94;
tr686:
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st94;
st94:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof94;
case 94:
#line 3125 "propsparser.h"
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
		case 34: goto tr152;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st101;
	goto st0;
tr152:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st102;
tr153:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st102;
tr155:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 102; goto st261;}}
	goto st102;
st102:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof102;
case 102:
#line 3208 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st274;
		case 92: goto tr155;
	}
	goto tr153;
st274:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof274;
case 274:
	switch( (*( state.p)) ) {
		case 13: goto tr525;
		case 32: goto tr525;
		case 65: goto tr526;
		case 66: goto tr527;
		case 68: goto tr528;
		case 71: goto tr529;
		case 76: goto tr530;
		case 78: goto tr531;
		case 79: goto tr532;
		case 80: goto tr533;
		case 82: goto tr534;
		case 83: goto tr535;
		case 85: goto tr536;
		case 86: goto tr537;
		case 97: goto tr526;
		case 98: goto tr527;
		case 100: goto tr528;
		case 103: goto tr529;
		case 108: goto tr530;
		case 110: goto tr531;
		case 111: goto tr532;
		case 112: goto tr533;
		case 114: goto tr534;
		case 115: goto tr535;
		case 117: goto tr536;
		case 118: goto tr537;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr525;
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
	switch( (*( state.p)) ) {
		case 108: goto st108;
		case 113: goto st116;
	}
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
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st114;
tr165:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st114;
tr167:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 114; goto st261;}}
	goto st114;
st114:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof114;
case 114:
#line 3374 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st275;
		case 92: goto tr167;
	}
	goto tr165;
st275:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof275;
case 275:
	switch( (*( state.p)) ) {
		case 13: goto tr538;
		case 32: goto tr538;
		case 65: goto tr539;
		case 66: goto tr540;
		case 68: goto tr541;
		case 71: goto tr542;
		case 76: goto tr543;
		case 78: goto tr544;
		case 79: goto tr545;
		case 80: goto tr546;
		case 82: goto tr547;
		case 83: goto tr548;
		case 85: goto tr549;
		case 86: goto tr550;
		case 97: goto tr539;
		case 98: goto tr540;
		case 100: goto tr541;
		case 103: goto tr542;
		case 108: goto tr543;
		case 110: goto tr544;
		case 111: goto tr545;
		case 112: goto tr546;
		case 114: goto tr547;
		case 115: goto tr548;
		case 117: goto tr549;
		case 118: goto tr550;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr538;
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
	if ( (*( state.p)) == 117 )
		goto st117;
	goto st0;
st117:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof117;
case 117:
	if ( (*( state.p)) == 105 )
		goto st118;
	goto st0;
st118:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof118;
case 118:
	if ( (*( state.p)) == 114 )
		goto st119;
	goto st0;
st119:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof119;
case 119:
	if ( (*( state.p)) == 101 )
		goto st120;
	goto st0;
st120:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof120;
case 120:
	if ( (*( state.p)) == 115 )
		goto st121;
	goto st0;
st121:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof121;
case 121:
	switch( (*( state.p)) ) {
		case 13: goto tr173;
		case 32: goto tr173;
		case 58: goto st143;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr173;
	goto st0;
tr173:
#line 180 "propsparser.rl"
	{ deps = rpmprops_t::deps_t(); }
	goto st122;
st122:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof122;
case 122:
#line 3481 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr173;
		case 32: goto tr173;
		case 34: goto tr175;
		case 99: goto st134;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr173;
	goto st0;
tr175:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st123;
tr177:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st123;
tr179:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 123; goto st261;}}
	goto st123;
st123:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof123;
case 123:
#line 3511 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st124;
		case 92: goto tr179;
	}
	goto tr177;
st124:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof124;
case 124:
	switch( (*( state.p)) ) {
		case 13: goto tr180;
		case 32: goto tr180;
		case 60: goto tr181;
		case 61: goto tr182;
		case 62: goto tr183;
		case 97: goto tr184;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr180;
	goto st0;
tr180:
#line 157 "propsparser.rl"
	{ deps.name = state.match; }
	goto st276;
tr214:
#line 154 "propsparser.rl"
	{ deps.name = "config(" + state.match + ")";
                                    deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st276;
st276:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof276;
case 276:
#line 3545 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr551;
		case 32: goto tr551;
		case 60: goto st125;
		case 61: goto st129;
		case 62: goto st130;
		case 65: goto tr555;
		case 66: goto tr556;
		case 68: goto tr557;
		case 71: goto tr558;
		case 76: goto tr559;
		case 78: goto tr560;
		case 79: goto tr561;
		case 80: goto tr562;
		case 82: goto tr563;
		case 83: goto tr564;
		case 85: goto tr565;
		case 86: goto tr566;
		case 97: goto tr555;
		case 98: goto tr556;
		case 100: goto tr557;
		case 103: goto tr558;
		case 108: goto tr559;
		case 110: goto tr560;
		case 111: goto tr561;
		case 112: goto tr562;
		case 114: goto tr563;
		case 115: goto tr564;
		case 117: goto tr565;
		case 118: goto tr566;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr551;
	goto st0;
tr181:
#line 157 "propsparser.rl"
	{ deps.name = state.match; }
	goto st125;
tr215:
#line 154 "propsparser.rl"
	{ deps.name = "config(" + state.match + ")";
                                    deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st125;
st125:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof125;
case 125:
#line 3593 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr185;
		case 32: goto tr185;
		case 34: goto tr186;
		case 61: goto st128;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr185;
	goto st0;
tr185:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
	goto st126;
tr193:
#line 164 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
	goto st126;
tr195:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
	goto st126;
tr197:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
	goto st126;
tr200:
#line 165 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
	goto st126;
st126:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof126;
case 126:
#line 3627 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st126;
		case 32: goto st126;
		case 34: goto tr189;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st126;
	goto st0;
tr189:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st127;
tr190:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st127;
tr192:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 127; goto st261;}}
	goto st127;
tr186:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st127;
tr194:
#line 164 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st127;
tr196:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st127;
tr198:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st127;
tr201:
#line 165 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st127;
st127:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof127;
case 127:
#line 3696 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st277;
		case 92: goto tr192;
	}
	goto tr190;
st277:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof277;
case 277:
	switch( (*( state.p)) ) {
		case 13: goto tr567;
		case 32: goto tr567;
		case 65: goto tr568;
		case 66: goto tr569;
		case 68: goto tr570;
		case 71: goto tr571;
		case 76: goto tr572;
		case 78: goto tr573;
		case 79: goto tr574;
		case 80: goto tr575;
		case 82: goto tr576;
		case 83: goto tr577;
		case 85: goto tr578;
		case 86: goto tr579;
		case 97: goto tr568;
		case 98: goto tr569;
		case 100: goto tr570;
		case 103: goto tr571;
		case 108: goto tr572;
		case 110: goto tr573;
		case 111: goto tr574;
		case 112: goto tr575;
		case 114: goto tr576;
		case 115: goto tr577;
		case 117: goto tr578;
		case 118: goto tr579;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr567;
	goto st0;
st128:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof128;
case 128:
	switch( (*( state.p)) ) {
		case 13: goto tr193;
		case 32: goto tr193;
		case 34: goto tr194;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr193;
	goto st0;
tr182:
#line 157 "propsparser.rl"
	{ deps.name = state.match; }
	goto st129;
tr216:
#line 154 "propsparser.rl"
	{ deps.name = "config(" + state.match + ")";
                                    deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st129;
st129:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof129;
case 129:
#line 3762 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr195;
		case 32: goto tr195;
		case 34: goto tr196;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr195;
	goto st0;
tr183:
#line 157 "propsparser.rl"
	{ deps.name = state.match; }
	goto st130;
tr217:
#line 154 "propsparser.rl"
	{ deps.name = "config(" + state.match + ")";
                                    deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st130;
st130:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof130;
case 130:
#line 3784 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr197;
		case 32: goto tr197;
		case 34: goto tr198;
		case 61: goto st131;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr197;
	goto st0;
st131:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof131;
case 131:
	switch( (*( state.p)) ) {
		case 13: goto tr200;
		case 32: goto tr200;
		case 34: goto tr201;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr200;
	goto st0;
tr184:
#line 157 "propsparser.rl"
	{ deps.name = state.match; }
	goto st132;
tr218:
#line 154 "propsparser.rl"
	{ deps.name = "config(" + state.match + ")";
                                    deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st132;
st132:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof132;
case 132:
#line 3819 "propsparser.h"
	if ( (*( state.p)) == 110 )
		goto st133;
	goto st0;
st133:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof133;
case 133:
	if ( (*( state.p)) == 121 )
		goto st278;
	goto st0;
st278:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof278;
case 278:
	switch( (*( state.p)) ) {
		case 13: goto tr551;
		case 32: goto tr551;
		case 65: goto tr555;
		case 66: goto tr556;
		case 68: goto tr557;
		case 71: goto tr558;
		case 76: goto tr559;
		case 78: goto tr560;
		case 79: goto tr561;
		case 80: goto tr562;
		case 82: goto tr563;
		case 83: goto tr564;
		case 85: goto tr565;
		case 86: goto tr566;
		case 97: goto tr555;
		case 98: goto tr556;
		case 100: goto tr557;
		case 103: goto tr558;
		case 108: goto tr559;
		case 110: goto tr560;
		case 111: goto tr561;
		case 112: goto tr562;
		case 114: goto tr563;
		case 115: goto tr564;
		case 117: goto tr565;
		case 118: goto tr566;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr551;
	goto st0;
st134:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof134;
case 134:
	if ( (*( state.p)) == 111 )
		goto st135;
	goto st0;
st135:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof135;
case 135:
	if ( (*( state.p)) == 110 )
		goto st136;
	goto st0;
st136:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof136;
case 136:
	if ( (*( state.p)) == 102 )
		goto st137;
	goto st0;
st137:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof137;
case 137:
	if ( (*( state.p)) == 105 )
		goto st138;
	goto st0;
st138:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof138;
case 138:
	if ( (*( state.p)) == 103 )
		goto st139;
	goto st0;
st139:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof139;
case 139:
	switch( (*( state.p)) ) {
		case 13: goto st140;
		case 32: goto st140;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st140;
	goto st0;
st140:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof140;
case 140:
	switch( (*( state.p)) ) {
		case 13: goto st140;
		case 32: goto st140;
		case 34: goto tr210;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st140;
	goto st0;
tr210:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st141;
tr211:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st141;
tr213:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 141; goto st261;}}
	goto st141;
st141:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof141;
case 141:
#line 3943 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st142;
		case 92: goto tr213;
	}
	goto tr211;
st142:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof142;
case 142:
	switch( (*( state.p)) ) {
		case 13: goto tr214;
		case 32: goto tr214;
		case 60: goto tr215;
		case 61: goto tr216;
		case 62: goto tr217;
		case 97: goto tr218;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr214;
	goto st0;
st143:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof143;
case 143:
	switch( (*( state.p)) ) {
		case 13: goto tr173;
		case 32: goto tr173;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr173;
	goto st0;
st144:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof144;
case 144:
	switch( (*( state.p)) ) {
		case 13: goto st66;
		case 32: goto st66;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st66;
	goto st0;
st145:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof145;
case 145:
	if ( (*( state.p)) == 97 )
		goto st146;
	goto st0;
st146:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof146;
case 146:
	if ( (*( state.p)) == 116 )
		goto st147;
	goto st0;
st147:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof147;
case 147:
	if ( (*( state.p)) == 102 )
		goto st148;
	goto st0;
st148:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof148;
case 148:
	if ( (*( state.p)) == 111 )
		goto st149;
	goto st0;
st149:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof149;
case 149:
	if ( (*( state.p)) == 114 )
		goto st150;
	goto st0;
st150:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof150;
case 150:
	if ( (*( state.p)) == 109 )
		goto st151;
	goto st0;
st151:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof151;
case 151:
	switch( (*( state.p)) ) {
		case 13: goto st152;
		case 32: goto st152;
		case 58: goto st154;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st152;
	goto st0;
st152:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof152;
case 152:
	switch( (*( state.p)) ) {
		case 13: goto st152;
		case 32: goto st152;
		case 34: goto tr227;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st152;
	goto st0;
tr227:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st153;
tr228:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st153;
tr230:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 153; goto st261;}}
	goto st153;
st153:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof153;
case 153:
#line 4072 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st279;
		case 92: goto tr230;
	}
	goto tr228;
st279:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof279;
case 279:
	switch( (*( state.p)) ) {
		case 13: goto tr580;
		case 32: goto tr580;
		case 65: goto tr581;
		case 66: goto tr582;
		case 68: goto tr583;
		case 71: goto tr584;
		case 76: goto tr585;
		case 78: goto tr586;
		case 79: goto tr587;
		case 80: goto tr588;
		case 82: goto tr589;
		case 83: goto tr590;
		case 85: goto tr591;
		case 86: goto tr592;
		case 97: goto tr581;
		case 98: goto tr582;
		case 100: goto tr583;
		case 103: goto tr584;
		case 108: goto tr585;
		case 110: goto tr586;
		case 111: goto tr587;
		case 112: goto tr588;
		case 114: goto tr589;
		case 115: goto tr590;
		case 117: goto tr591;
		case 118: goto tr592;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr580;
	goto st0;
st154:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof154;
case 154:
	switch( (*( state.p)) ) {
		case 13: goto st152;
		case 32: goto st152;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st152;
	goto st0;
st155:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof155;
case 155:
	if ( (*( state.p)) == 115 )
		goto st156;
	goto st0;
st156:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof156;
case 156:
	if ( (*( state.p)) == 116 )
		goto st157;
	goto st0;
st157:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof157;
case 157:
	switch( (*( state.p)) ) {
		case 73: goto st158;
		case 85: goto st172;
		case 105: goto st158;
		case 117: goto st172;
	}
	goto st0;
st158:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof158;
case 158:
	if ( (*( state.p)) == 110 )
		goto st159;
	goto st0;
st159:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof159;
case 159:
	switch( (*( state.p)) ) {
		case 13: goto st160;
		case 32: goto st160;
		case 58: goto st171;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st160;
	goto st0;
st160:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof160;
case 160:
	switch( (*( state.p)) ) {
		case 13: goto st160;
		case 32: goto st160;
		case 34: goto tr238;
		case 115: goto st162;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st160;
	goto st0;
tr238:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st161;
tr240:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st161;
tr242:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 161; goto st261;}}
	goto st161;
st161:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof161;
case 161:
#line 4201 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st280;
		case 92: goto tr242;
	}
	goto tr240;
st280:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof280;
case 280:
	switch( (*( state.p)) ) {
		case 13: goto tr593;
		case 32: goto tr593;
		case 65: goto tr594;
		case 66: goto tr595;
		case 68: goto tr596;
		case 71: goto tr597;
		case 76: goto tr598;
		case 78: goto tr599;
		case 79: goto tr600;
		case 80: goto tr601;
		case 82: goto tr602;
		case 83: goto tr603;
		case 85: goto tr604;
		case 86: goto tr605;
		case 97: goto tr594;
		case 98: goto tr595;
		case 100: goto tr596;
		case 103: goto tr597;
		case 108: goto tr598;
		case 110: goto tr599;
		case 111: goto tr600;
		case 112: goto tr601;
		case 114: goto tr602;
		case 115: goto tr603;
		case 117: goto tr604;
		case 118: goto tr605;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr593;
	goto st0;
st162:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof162;
case 162:
	if ( (*( state.p)) == 104 )
		goto st163;
	goto st0;
st163:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof163;
case 163:
	if ( (*( state.p)) == 101 )
		goto st164;
	goto st0;
st164:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof164;
case 164:
	if ( (*( state.p)) == 108 )
		goto st165;
	goto st0;
st165:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof165;
case 165:
	if ( (*( state.p)) == 108 )
		goto st166;
	goto st0;
st166:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof166;
case 166:
	switch( (*( state.p)) ) {
		case 13: goto st167;
		case 32: goto st167;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st167;
	goto st0;
st167:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof167;
case 167:
	switch( (*( state.p)) ) {
		case 13: goto st167;
		case 32: goto st167;
		case 34: goto tr248;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st167;
	goto st0;
tr248:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st168;
tr249:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st168;
tr251:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 168; goto st261;}}
	goto st168;
st168:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof168;
case 168:
#line 4313 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st169;
		case 92: goto tr251;
	}
	goto tr249;
st169:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof169;
case 169:
	switch( (*( state.p)) ) {
		case 13: goto tr252;
		case 32: goto tr252;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr252;
	goto st0;
tr252:
#line 140 "propsparser.rl"
	{ props.postin.prog = state.match; }
	goto st170;
st170:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof170;
case 170:
#line 4338 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st170;
		case 32: goto st170;
		case 34: goto tr238;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st170;
	goto st0;
st171:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof171;
case 171:
	switch( (*( state.p)) ) {
		case 13: goto st160;
		case 32: goto st160;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st160;
	goto st0;
st172:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof172;
case 172:
	if ( (*( state.p)) == 110 )
		goto st173;
	goto st0;
st173:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof173;
case 173:
	switch( (*( state.p)) ) {
		case 13: goto st174;
		case 32: goto st174;
		case 58: goto st185;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st174;
	goto st0;
st174:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof174;
case 174:
	switch( (*( state.p)) ) {
		case 13: goto st174;
		case 32: goto st174;
		case 34: goto tr257;
		case 115: goto st176;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st174;
	goto st0;
tr257:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st175;
tr259:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st175;
tr261:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 175; goto st261;}}
	goto st175;
st175:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof175;
case 175:
#line 4410 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st281;
		case 92: goto tr261;
	}
	goto tr259;
st281:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof281;
case 281:
	switch( (*( state.p)) ) {
		case 13: goto tr606;
		case 32: goto tr606;
		case 65: goto tr607;
		case 66: goto tr608;
		case 68: goto tr609;
		case 71: goto tr610;
		case 76: goto tr611;
		case 78: goto tr612;
		case 79: goto tr613;
		case 80: goto tr614;
		case 82: goto tr615;
		case 83: goto tr616;
		case 85: goto tr617;
		case 86: goto tr618;
		case 97: goto tr607;
		case 98: goto tr608;
		case 100: goto tr609;
		case 103: goto tr610;
		case 108: goto tr611;
		case 110: goto tr612;
		case 111: goto tr613;
		case 112: goto tr614;
		case 114: goto tr615;
		case 115: goto tr616;
		case 117: goto tr617;
		case 118: goto tr618;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr606;
	goto st0;
st176:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof176;
case 176:
	if ( (*( state.p)) == 104 )
		goto st177;
	goto st0;
st177:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof177;
case 177:
	if ( (*( state.p)) == 101 )
		goto st178;
	goto st0;
st178:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof178;
case 178:
	if ( (*( state.p)) == 108 )
		goto st179;
	goto st0;
st179:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof179;
case 179:
	if ( (*( state.p)) == 108 )
		goto st180;
	goto st0;
st180:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof180;
case 180:
	switch( (*( state.p)) ) {
		case 13: goto st181;
		case 32: goto st181;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st181;
	goto st0;
st181:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof181;
case 181:
	switch( (*( state.p)) ) {
		case 13: goto st181;
		case 32: goto st181;
		case 34: goto tr267;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st181;
	goto st0;
tr267:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st182;
tr268:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st182;
tr270:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 182; goto st261;}}
	goto st182;
st182:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof182;
case 182:
#line 4522 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st183;
		case 92: goto tr270;
	}
	goto tr268;
st183:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof183;
case 183:
	switch( (*( state.p)) ) {
		case 13: goto tr271;
		case 32: goto tr271;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr271;
	goto st0;
tr271:
#line 148 "propsparser.rl"
	{ props.postun.prog = state.match; }
	goto st184;
st184:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof184;
case 184:
#line 4547 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st184;
		case 32: goto st184;
		case 34: goto tr257;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st184;
	goto st0;
st185:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof185;
case 185:
	switch( (*( state.p)) ) {
		case 13: goto st174;
		case 32: goto st174;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st174;
	goto st0;
st186:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof186;
case 186:
	switch( (*( state.p)) ) {
		case 101: goto st187;
		case 111: goto st216;
	}
	goto st0;
st187:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof187;
case 187:
	switch( (*( state.p)) ) {
		case 73: goto st188;
		case 85: goto st202;
		case 105: goto st188;
		case 117: goto st202;
	}
	goto st0;
st188:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof188;
case 188:
	if ( (*( state.p)) == 110 )
		goto st189;
	goto st0;
st189:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof189;
case 189:
	switch( (*( state.p)) ) {
		case 13: goto st190;
		case 32: goto st190;
		case 58: goto st201;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st190;
	goto st0;
st190:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof190;
case 190:
	switch( (*( state.p)) ) {
		case 13: goto st190;
		case 32: goto st190;
		case 34: goto tr280;
		case 115: goto st192;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st190;
	goto st0;
tr280:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st191;
tr282:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st191;
tr284:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 191; goto st261;}}
	goto st191;
st191:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof191;
case 191:
#line 4639 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st282;
		case 92: goto tr284;
	}
	goto tr282;
st282:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof282;
case 282:
	switch( (*( state.p)) ) {
		case 13: goto tr619;
		case 32: goto tr619;
		case 65: goto tr620;
		case 66: goto tr621;
		case 68: goto tr622;
		case 71: goto tr623;
		case 76: goto tr624;
		case 78: goto tr625;
		case 79: goto tr626;
		case 80: goto tr627;
		case 82: goto tr628;
		case 83: goto tr629;
		case 85: goto tr630;
		case 86: goto tr631;
		case 97: goto tr620;
		case 98: goto tr621;
		case 100: goto tr622;
		case 103: goto tr623;
		case 108: goto tr624;
		case 110: goto tr625;
		case 111: goto tr626;
		case 112: goto tr627;
		case 114: goto tr628;
		case 115: goto tr629;
		case 117: goto tr630;
		case 118: goto tr631;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr619;
	goto st0;
st192:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof192;
case 192:
	if ( (*( state.p)) == 104 )
		goto st193;
	goto st0;
st193:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof193;
case 193:
	if ( (*( state.p)) == 101 )
		goto st194;
	goto st0;
st194:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof194;
case 194:
	if ( (*( state.p)) == 108 )
		goto st195;
	goto st0;
st195:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof195;
case 195:
	if ( (*( state.p)) == 108 )
		goto st196;
	goto st0;
st196:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof196;
case 196:
	switch( (*( state.p)) ) {
		case 13: goto st197;
		case 32: goto st197;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st197;
	goto st0;
st197:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof197;
case 197:
	switch( (*( state.p)) ) {
		case 13: goto st197;
		case 32: goto st197;
		case 34: goto tr290;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st197;
	goto st0;
tr290:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st198;
tr291:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st198;
tr293:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 198; goto st261;}}
	goto st198;
st198:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof198;
case 198:
#line 4751 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st199;
		case 92: goto tr293;
	}
	goto tr291;
st199:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof199;
case 199:
	switch( (*( state.p)) ) {
		case 13: goto tr294;
		case 32: goto tr294;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr294;
	goto st0;
tr294:
#line 136 "propsparser.rl"
	{ props.prein.prog = state.match; }
	goto st200;
st200:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof200;
case 200:
#line 4776 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st200;
		case 32: goto st200;
		case 34: goto tr280;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st200;
	goto st0;
st201:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof201;
case 201:
	switch( (*( state.p)) ) {
		case 13: goto st190;
		case 32: goto st190;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st190;
	goto st0;
st202:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof202;
case 202:
	if ( (*( state.p)) == 110 )
		goto st203;
	goto st0;
st203:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof203;
case 203:
	switch( (*( state.p)) ) {
		case 13: goto st204;
		case 32: goto st204;
		case 58: goto st215;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st204;
	goto st0;
st204:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof204;
case 204:
	switch( (*( state.p)) ) {
		case 13: goto st204;
		case 32: goto st204;
		case 34: goto tr299;
		case 115: goto st206;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st204;
	goto st0;
tr299:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st205;
tr301:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st205;
tr303:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 205; goto st261;}}
	goto st205;
st205:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof205;
case 205:
#line 4848 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st283;
		case 92: goto tr303;
	}
	goto tr301;
st283:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof283;
case 283:
	switch( (*( state.p)) ) {
		case 13: goto tr632;
		case 32: goto tr632;
		case 65: goto tr633;
		case 66: goto tr634;
		case 68: goto tr635;
		case 71: goto tr636;
		case 76: goto tr637;
		case 78: goto tr638;
		case 79: goto tr639;
		case 80: goto tr640;
		case 82: goto tr641;
		case 83: goto tr642;
		case 85: goto tr643;
		case 86: goto tr644;
		case 97: goto tr633;
		case 98: goto tr634;
		case 100: goto tr635;
		case 103: goto tr636;
		case 108: goto tr637;
		case 110: goto tr638;
		case 111: goto tr639;
		case 112: goto tr640;
		case 114: goto tr641;
		case 115: goto tr642;
		case 117: goto tr643;
		case 118: goto tr644;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr632;
	goto st0;
st206:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof206;
case 206:
	if ( (*( state.p)) == 104 )
		goto st207;
	goto st0;
st207:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof207;
case 207:
	if ( (*( state.p)) == 101 )
		goto st208;
	goto st0;
st208:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof208;
case 208:
	if ( (*( state.p)) == 108 )
		goto st209;
	goto st0;
st209:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof209;
case 209:
	if ( (*( state.p)) == 108 )
		goto st210;
	goto st0;
st210:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof210;
case 210:
	switch( (*( state.p)) ) {
		case 13: goto st211;
		case 32: goto st211;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st211;
	goto st0;
st211:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof211;
case 211:
	switch( (*( state.p)) ) {
		case 13: goto st211;
		case 32: goto st211;
		case 34: goto tr309;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st211;
	goto st0;
tr309:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st212;
tr310:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st212;
tr312:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 212; goto st261;}}
	goto st212;
st212:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof212;
case 212:
#line 4960 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st213;
		case 92: goto tr312;
	}
	goto tr310;
st213:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof213;
case 213:
	switch( (*( state.p)) ) {
		case 13: goto tr313;
		case 32: goto tr313;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr313;
	goto st0;
tr313:
#line 144 "propsparser.rl"
	{ props.preun.prog = state.match; }
	goto st214;
st214:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof214;
case 214:
#line 4985 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st214;
		case 32: goto st214;
		case 34: goto tr299;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st214;
	goto st0;
st215:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof215;
case 215:
	switch( (*( state.p)) ) {
		case 13: goto st204;
		case 32: goto st204;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st204;
	goto st0;
st216:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof216;
case 216:
	if ( (*( state.p)) == 118 )
		goto st217;
	goto st0;
st217:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof217;
case 217:
	if ( (*( state.p)) == 105 )
		goto st218;
	goto st0;
st218:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof218;
case 218:
	if ( (*( state.p)) == 100 )
		goto st219;
	goto st0;
st219:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof219;
case 219:
	if ( (*( state.p)) == 101 )
		goto st220;
	goto st0;
st220:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof220;
case 220:
	if ( (*( state.p)) == 115 )
		goto st221;
	goto st0;
st221:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof221;
case 221:
	switch( (*( state.p)) ) {
		case 13: goto tr320;
		case 32: goto tr320;
		case 58: goto st243;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr320;
	goto st0;
tr320:
#line 176 "propsparser.rl"
	{ deps = rpmprops_t::deps_t(); }
	goto st222;
st222:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof222;
case 222:
#line 5060 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr320;
		case 32: goto tr320;
		case 34: goto tr322;
		case 99: goto st234;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr320;
	goto st0;
tr322:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st223;
tr324:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st223;
tr326:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 223; goto st261;}}
	goto st223;
st223:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof223;
case 223:
#line 5090 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st224;
		case 92: goto tr326;
	}
	goto tr324;
st224:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof224;
case 224:
	switch( (*( state.p)) ) {
		case 13: goto tr327;
		case 32: goto tr327;
		case 60: goto tr328;
		case 61: goto tr329;
		case 62: goto tr330;
		case 97: goto tr331;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr327;
	goto st0;
tr327:
#line 157 "propsparser.rl"
	{ deps.name = state.match; }
	goto st284;
tr361:
#line 154 "propsparser.rl"
	{ deps.name = "config(" + state.match + ")";
                                    deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st284;
st284:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof284;
case 284:
#line 5124 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr645;
		case 32: goto tr645;
		case 60: goto st225;
		case 61: goto st229;
		case 62: goto st230;
		case 65: goto tr649;
		case 66: goto tr650;
		case 68: goto tr651;
		case 71: goto tr652;
		case 76: goto tr653;
		case 78: goto tr654;
		case 79: goto tr655;
		case 80: goto tr656;
		case 82: goto tr657;
		case 83: goto tr658;
		case 85: goto tr659;
		case 86: goto tr660;
		case 97: goto tr649;
		case 98: goto tr650;
		case 100: goto tr651;
		case 103: goto tr652;
		case 108: goto tr653;
		case 110: goto tr654;
		case 111: goto tr655;
		case 112: goto tr656;
		case 114: goto tr657;
		case 115: goto tr658;
		case 117: goto tr659;
		case 118: goto tr660;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr645;
	goto st0;
tr328:
#line 157 "propsparser.rl"
	{ deps.name = state.match; }
	goto st225;
tr362:
#line 154 "propsparser.rl"
	{ deps.name = "config(" + state.match + ")";
                                    deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st225;
st225:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof225;
case 225:
#line 5172 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr332;
		case 32: goto tr332;
		case 34: goto tr333;
		case 61: goto st228;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr332;
	goto st0;
tr332:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
	goto st226;
tr340:
#line 164 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
	goto st226;
tr342:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
	goto st226;
tr344:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
	goto st226;
tr347:
#line 165 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
	goto st226;
st226:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof226;
case 226:
#line 5206 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st226;
		case 32: goto st226;
		case 34: goto tr336;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st226;
	goto st0;
tr336:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st227;
tr337:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st227;
tr339:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 227; goto st261;}}
	goto st227;
tr333:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st227;
tr341:
#line 164 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st227;
tr343:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st227;
tr345:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st227;
tr348:
#line 165 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st227;
st227:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof227;
case 227:
#line 5275 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st285;
		case 92: goto tr339;
	}
	goto tr337;
st285:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof285;
case 285:
	switch( (*( state.p)) ) {
		case 13: goto tr661;
		case 32: goto tr661;
		case 65: goto tr662;
		case 66: goto tr663;
		case 68: goto tr664;
		case 71: goto tr665;
		case 76: goto tr666;
		case 78: goto tr667;
		case 79: goto tr668;
		case 80: goto tr669;
		case 82: goto tr670;
		case 83: goto tr671;
		case 85: goto tr672;
		case 86: goto tr673;
		case 97: goto tr662;
		case 98: goto tr663;
		case 100: goto tr664;
		case 103: goto tr665;
		case 108: goto tr666;
		case 110: goto tr667;
		case 111: goto tr668;
		case 112: goto tr669;
		case 114: goto tr670;
		case 115: goto tr671;
		case 117: goto tr672;
		case 118: goto tr673;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr661;
	goto st0;
st228:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof228;
case 228:
	switch( (*( state.p)) ) {
		case 13: goto tr340;
		case 32: goto tr340;
		case 34: goto tr341;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr340;
	goto st0;
tr329:
#line 157 "propsparser.rl"
	{ deps.name = state.match; }
	goto st229;
tr363:
#line 154 "propsparser.rl"
	{ deps.name = "config(" + state.match + ")";
                                    deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st229;
st229:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof229;
case 229:
#line 5341 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr342;
		case 32: goto tr342;
		case 34: goto tr343;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr342;
	goto st0;
tr330:
#line 157 "propsparser.rl"
	{ deps.name = state.match; }
	goto st230;
tr364:
#line 154 "propsparser.rl"
	{ deps.name = "config(" + state.match + ")";
                                    deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st230;
st230:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof230;
case 230:
#line 5363 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr344;
		case 32: goto tr344;
		case 34: goto tr345;
		case 61: goto st231;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr344;
	goto st0;
st231:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof231;
case 231:
	switch( (*( state.p)) ) {
		case 13: goto tr347;
		case 32: goto tr347;
		case 34: goto tr348;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr347;
	goto st0;
tr331:
#line 157 "propsparser.rl"
	{ deps.name = state.match; }
	goto st232;
tr365:
#line 154 "propsparser.rl"
	{ deps.name = "config(" + state.match + ")";
                                    deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st232;
st232:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof232;
case 232:
#line 5398 "propsparser.h"
	if ( (*( state.p)) == 110 )
		goto st233;
	goto st0;
st233:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof233;
case 233:
	if ( (*( state.p)) == 121 )
		goto st286;
	goto st0;
st286:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof286;
case 286:
	switch( (*( state.p)) ) {
		case 13: goto tr645;
		case 32: goto tr645;
		case 65: goto tr649;
		case 66: goto tr650;
		case 68: goto tr651;
		case 71: goto tr652;
		case 76: goto tr653;
		case 78: goto tr654;
		case 79: goto tr655;
		case 80: goto tr656;
		case 82: goto tr657;
		case 83: goto tr658;
		case 85: goto tr659;
		case 86: goto tr660;
		case 97: goto tr649;
		case 98: goto tr650;
		case 100: goto tr651;
		case 103: goto tr652;
		case 108: goto tr653;
		case 110: goto tr654;
		case 111: goto tr655;
		case 112: goto tr656;
		case 114: goto tr657;
		case 115: goto tr658;
		case 117: goto tr659;
		case 118: goto tr660;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr645;
	goto st0;
st234:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof234;
case 234:
	if ( (*( state.p)) == 111 )
		goto st235;
	goto st0;
st235:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof235;
case 235:
	if ( (*( state.p)) == 110 )
		goto st236;
	goto st0;
st236:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof236;
case 236:
	if ( (*( state.p)) == 102 )
		goto st237;
	goto st0;
st237:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof237;
case 237:
	if ( (*( state.p)) == 105 )
		goto st238;
	goto st0;
st238:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof238;
case 238:
	if ( (*( state.p)) == 103 )
		goto st239;
	goto st0;
st239:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof239;
case 239:
	switch( (*( state.p)) ) {
		case 13: goto st240;
		case 32: goto st240;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st240;
	goto st0;
st240:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof240;
case 240:
	switch( (*( state.p)) ) {
		case 13: goto st240;
		case 32: goto st240;
		case 34: goto tr357;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st240;
	goto st0;
tr357:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st241;
tr358:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st241;
tr360:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 241; goto st261;}}
	goto st241;
st241:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof241;
case 241:
#line 5522 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st242;
		case 92: goto tr360;
	}
	goto tr358;
st242:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof242;
case 242:
	switch( (*( state.p)) ) {
		case 13: goto tr361;
		case 32: goto tr361;
		case 60: goto tr362;
		case 61: goto tr363;
		case 62: goto tr364;
		case 97: goto tr365;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr361;
	goto st0;
st243:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof243;
case 243:
	switch( (*( state.p)) ) {
		case 13: goto tr320;
		case 32: goto tr320;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr320;
	goto st0;
st244:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof244;
case 244:
	switch( (*( state.p)) ) {
		case 13: goto st56;
		case 32: goto st56;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st56;
	goto st0;
st245:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof245;
case 245:
	if ( (*( state.p)) == 116 )
		goto st246;
	goto st0;
st246:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof246;
case 246:
	switch( (*( state.p)) ) {
		case 70: goto st247;
		case 102: goto st247;
	}
	goto st0;
st247:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof247;
case 247:
	if ( (*( state.p)) == 108 )
		goto st248;
	goto st0;
st248:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof248;
case 248:
	if ( (*( state.p)) == 97 )
		goto st249;
	goto st0;
st249:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof249;
case 249:
	if ( (*( state.p)) == 103 )
		goto st250;
	goto st0;
st250:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof250;
case 250:
	if ( (*( state.p)) == 115 )
		goto st251;
	goto st0;
st251:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof251;
case 251:
	switch( (*( state.p)) ) {
		case 13: goto st252;
		case 32: goto st252;
		case 58: goto st254;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st252;
	goto st0;
st252:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof252;
case 252:
	switch( (*( state.p)) ) {
		case 13: goto st252;
		case 32: goto st252;
		case 34: goto tr374;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st252;
	goto st0;
tr374:
#line 73 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st253;
tr375:
#line 77 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st253;
tr377:
#line 108 "propsparser.rl"
	{{ state.stack[ state.top++] = 253; goto st261;}}
	goto st253;
st253:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof253;
case 253:
#line 5653 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st287;
		case 92: goto tr377;
	}
	goto tr375;
st287:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof287;
case 287:
	switch( (*( state.p)) ) {
		case 13: goto tr674;
		case 32: goto tr674;
		case 65: goto tr675;
		case 66: goto tr676;
		case 68: goto tr677;
		case 71: goto tr678;
		case 76: goto tr679;
		case 78: goto tr680;
		case 79: goto tr681;
		case 80: goto tr682;
		case 82: goto tr683;
		case 83: goto tr684;
		case 85: goto tr685;
		case 86: goto tr686;
		case 97: goto tr675;
		case 98: goto tr676;
		case 100: goto tr677;
		case 103: goto tr678;
		case 108: goto tr679;
		case 110: goto tr680;
		case 111: goto tr681;
		case 112: goto tr682;
		case 114: goto tr683;
		case 115: goto tr684;
		case 117: goto tr685;
		case 118: goto tr686;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr674;
	goto st0;
st254:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof254;
case 254:
	switch( (*( state.p)) ) {
		case 13: goto st252;
		case 32: goto st252;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st252;
	goto st0;
st255:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof255;
case 255:
	switch( (*( state.p)) ) {
		case 13: goto st52;
		case 32: goto st52;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st52;
	goto st0;
st256:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof256;
case 256:
	switch( (*( state.p)) ) {
		case 13: goto st46;
		case 32: goto st46;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st46;
	goto st0;
st257:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof257;
case 257:
	switch( (*( state.p)) ) {
		case 13: goto st37;
		case 32: goto st37;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st37;
	goto st0;
st258:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof258;
case 258:
	switch( (*( state.p)) ) {
		case 13: goto st30;
		case 32: goto st30;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st30;
	goto st0;
st259:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof259;
case 259:
	switch( (*( state.p)) ) {
		case 13: goto st17;
		case 32: goto st17;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st17;
	goto st0;
st260:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof260;
case 260:
	switch( (*( state.p)) ) {
		case 13: goto st6;
		case 32: goto st6;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st6;
	goto st0;
st261:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof261;
case 261:
	switch( (*( state.p)) ) {
		case 34: goto tr378;
		case 92: goto tr379;
		case 110: goto tr380;
	}
	goto st0;
tr378:
#line 102 "propsparser.rl"
	{ state.match += '"';  { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st288;
tr379:
#line 104 "propsparser.rl"
	{ state.match += '\\'; { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st288;
tr380:
#line 103 "propsparser.rl"
	{ state.match += '\n'; { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st288;
st288:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof288;
case 288:
#line 5797 "propsparser.h"
	goto st0;
	}
	_test_eof1:  state.cs = 1; goto _test_eof; 
	_test_eof2:  state.cs = 2; goto _test_eof; 
	_test_eof3:  state.cs = 3; goto _test_eof; 
	_test_eof4:  state.cs = 4; goto _test_eof; 
	_test_eof5:  state.cs = 5; goto _test_eof; 
	_test_eof6:  state.cs = 6; goto _test_eof; 
	_test_eof7:  state.cs = 7; goto _test_eof; 
	_test_eof262:  state.cs = 262; goto _test_eof; 
	_test_eof263:  state.cs = 263; goto _test_eof; 
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
	_test_eof264:  state.cs = 264; goto _test_eof; 
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
	_test_eof265:  state.cs = 265; goto _test_eof; 
	_test_eof32:  state.cs = 32; goto _test_eof; 
	_test_eof33:  state.cs = 33; goto _test_eof; 
	_test_eof34:  state.cs = 34; goto _test_eof; 
	_test_eof35:  state.cs = 35; goto _test_eof; 
	_test_eof36:  state.cs = 36; goto _test_eof; 
	_test_eof37:  state.cs = 37; goto _test_eof; 
	_test_eof38:  state.cs = 38; goto _test_eof; 
	_test_eof266:  state.cs = 266; goto _test_eof; 
	_test_eof39:  state.cs = 39; goto _test_eof; 
	_test_eof40:  state.cs = 40; goto _test_eof; 
	_test_eof41:  state.cs = 41; goto _test_eof; 
	_test_eof42:  state.cs = 42; goto _test_eof; 
	_test_eof43:  state.cs = 43; goto _test_eof; 
	_test_eof44:  state.cs = 44; goto _test_eof; 
	_test_eof45:  state.cs = 45; goto _test_eof; 
	_test_eof46:  state.cs = 46; goto _test_eof; 
	_test_eof47:  state.cs = 47; goto _test_eof; 
	_test_eof267:  state.cs = 267; goto _test_eof; 
	_test_eof48:  state.cs = 48; goto _test_eof; 
	_test_eof49:  state.cs = 49; goto _test_eof; 
	_test_eof50:  state.cs = 50; goto _test_eof; 
	_test_eof51:  state.cs = 51; goto _test_eof; 
	_test_eof52:  state.cs = 52; goto _test_eof; 
	_test_eof53:  state.cs = 53; goto _test_eof; 
	_test_eof268:  state.cs = 268; goto _test_eof; 
	_test_eof54:  state.cs = 54; goto _test_eof; 
	_test_eof55:  state.cs = 55; goto _test_eof; 
	_test_eof56:  state.cs = 56; goto _test_eof; 
	_test_eof57:  state.cs = 57; goto _test_eof; 
	_test_eof269:  state.cs = 269; goto _test_eof; 
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
	_test_eof270:  state.cs = 270; goto _test_eof; 
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
	_test_eof271:  state.cs = 271; goto _test_eof; 
	_test_eof80:  state.cs = 80; goto _test_eof; 
	_test_eof81:  state.cs = 81; goto _test_eof; 
	_test_eof82:  state.cs = 82; goto _test_eof; 
	_test_eof83:  state.cs = 83; goto _test_eof; 
	_test_eof84:  state.cs = 84; goto _test_eof; 
	_test_eof85:  state.cs = 85; goto _test_eof; 
	_test_eof86:  state.cs = 86; goto _test_eof; 
	_test_eof87:  state.cs = 87; goto _test_eof; 
	_test_eof88:  state.cs = 88; goto _test_eof; 
	_test_eof272:  state.cs = 272; goto _test_eof; 
	_test_eof89:  state.cs = 89; goto _test_eof; 
	_test_eof90:  state.cs = 90; goto _test_eof; 
	_test_eof91:  state.cs = 91; goto _test_eof; 
	_test_eof92:  state.cs = 92; goto _test_eof; 
	_test_eof93:  state.cs = 93; goto _test_eof; 
	_test_eof273:  state.cs = 273; goto _test_eof; 
	_test_eof94:  state.cs = 94; goto _test_eof; 
	_test_eof95:  state.cs = 95; goto _test_eof; 
	_test_eof96:  state.cs = 96; goto _test_eof; 
	_test_eof97:  state.cs = 97; goto _test_eof; 
	_test_eof98:  state.cs = 98; goto _test_eof; 
	_test_eof99:  state.cs = 99; goto _test_eof; 
	_test_eof100:  state.cs = 100; goto _test_eof; 
	_test_eof101:  state.cs = 101; goto _test_eof; 
	_test_eof102:  state.cs = 102; goto _test_eof; 
	_test_eof274:  state.cs = 274; goto _test_eof; 
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
	_test_eof275:  state.cs = 275; goto _test_eof; 
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
	_test_eof276:  state.cs = 276; goto _test_eof; 
	_test_eof125:  state.cs = 125; goto _test_eof; 
	_test_eof126:  state.cs = 126; goto _test_eof; 
	_test_eof127:  state.cs = 127; goto _test_eof; 
	_test_eof277:  state.cs = 277; goto _test_eof; 
	_test_eof128:  state.cs = 128; goto _test_eof; 
	_test_eof129:  state.cs = 129; goto _test_eof; 
	_test_eof130:  state.cs = 130; goto _test_eof; 
	_test_eof131:  state.cs = 131; goto _test_eof; 
	_test_eof132:  state.cs = 132; goto _test_eof; 
	_test_eof133:  state.cs = 133; goto _test_eof; 
	_test_eof278:  state.cs = 278; goto _test_eof; 
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
	_test_eof148:  state.cs = 148; goto _test_eof; 
	_test_eof149:  state.cs = 149; goto _test_eof; 
	_test_eof150:  state.cs = 150; goto _test_eof; 
	_test_eof151:  state.cs = 151; goto _test_eof; 
	_test_eof152:  state.cs = 152; goto _test_eof; 
	_test_eof153:  state.cs = 153; goto _test_eof; 
	_test_eof279:  state.cs = 279; goto _test_eof; 
	_test_eof154:  state.cs = 154; goto _test_eof; 
	_test_eof155:  state.cs = 155; goto _test_eof; 
	_test_eof156:  state.cs = 156; goto _test_eof; 
	_test_eof157:  state.cs = 157; goto _test_eof; 
	_test_eof158:  state.cs = 158; goto _test_eof; 
	_test_eof159:  state.cs = 159; goto _test_eof; 
	_test_eof160:  state.cs = 160; goto _test_eof; 
	_test_eof161:  state.cs = 161; goto _test_eof; 
	_test_eof280:  state.cs = 280; goto _test_eof; 
	_test_eof162:  state.cs = 162; goto _test_eof; 
	_test_eof163:  state.cs = 163; goto _test_eof; 
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
	_test_eof281:  state.cs = 281; goto _test_eof; 
	_test_eof176:  state.cs = 176; goto _test_eof; 
	_test_eof177:  state.cs = 177; goto _test_eof; 
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
	_test_eof282:  state.cs = 282; goto _test_eof; 
	_test_eof192:  state.cs = 192; goto _test_eof; 
	_test_eof193:  state.cs = 193; goto _test_eof; 
	_test_eof194:  state.cs = 194; goto _test_eof; 
	_test_eof195:  state.cs = 195; goto _test_eof; 
	_test_eof196:  state.cs = 196; goto _test_eof; 
	_test_eof197:  state.cs = 197; goto _test_eof; 
	_test_eof198:  state.cs = 198; goto _test_eof; 
	_test_eof199:  state.cs = 199; goto _test_eof; 
	_test_eof200:  state.cs = 200; goto _test_eof; 
	_test_eof201:  state.cs = 201; goto _test_eof; 
	_test_eof202:  state.cs = 202; goto _test_eof; 
	_test_eof203:  state.cs = 203; goto _test_eof; 
	_test_eof204:  state.cs = 204; goto _test_eof; 
	_test_eof205:  state.cs = 205; goto _test_eof; 
	_test_eof283:  state.cs = 283; goto _test_eof; 
	_test_eof206:  state.cs = 206; goto _test_eof; 
	_test_eof207:  state.cs = 207; goto _test_eof; 
	_test_eof208:  state.cs = 208; goto _test_eof; 
	_test_eof209:  state.cs = 209; goto _test_eof; 
	_test_eof210:  state.cs = 210; goto _test_eof; 
	_test_eof211:  state.cs = 211; goto _test_eof; 
	_test_eof212:  state.cs = 212; goto _test_eof; 
	_test_eof213:  state.cs = 213; goto _test_eof; 
	_test_eof214:  state.cs = 214; goto _test_eof; 
	_test_eof215:  state.cs = 215; goto _test_eof; 
	_test_eof216:  state.cs = 216; goto _test_eof; 
	_test_eof217:  state.cs = 217; goto _test_eof; 
	_test_eof218:  state.cs = 218; goto _test_eof; 
	_test_eof219:  state.cs = 219; goto _test_eof; 
	_test_eof220:  state.cs = 220; goto _test_eof; 
	_test_eof221:  state.cs = 221; goto _test_eof; 
	_test_eof222:  state.cs = 222; goto _test_eof; 
	_test_eof223:  state.cs = 223; goto _test_eof; 
	_test_eof224:  state.cs = 224; goto _test_eof; 
	_test_eof284:  state.cs = 284; goto _test_eof; 
	_test_eof225:  state.cs = 225; goto _test_eof; 
	_test_eof226:  state.cs = 226; goto _test_eof; 
	_test_eof227:  state.cs = 227; goto _test_eof; 
	_test_eof285:  state.cs = 285; goto _test_eof; 
	_test_eof228:  state.cs = 228; goto _test_eof; 
	_test_eof229:  state.cs = 229; goto _test_eof; 
	_test_eof230:  state.cs = 230; goto _test_eof; 
	_test_eof231:  state.cs = 231; goto _test_eof; 
	_test_eof232:  state.cs = 232; goto _test_eof; 
	_test_eof233:  state.cs = 233; goto _test_eof; 
	_test_eof286:  state.cs = 286; goto _test_eof; 
	_test_eof234:  state.cs = 234; goto _test_eof; 
	_test_eof235:  state.cs = 235; goto _test_eof; 
	_test_eof236:  state.cs = 236; goto _test_eof; 
	_test_eof237:  state.cs = 237; goto _test_eof; 
	_test_eof238:  state.cs = 238; goto _test_eof; 
	_test_eof239:  state.cs = 239; goto _test_eof; 
	_test_eof240:  state.cs = 240; goto _test_eof; 
	_test_eof241:  state.cs = 241; goto _test_eof; 
	_test_eof242:  state.cs = 242; goto _test_eof; 
	_test_eof243:  state.cs = 243; goto _test_eof; 
	_test_eof244:  state.cs = 244; goto _test_eof; 
	_test_eof245:  state.cs = 245; goto _test_eof; 
	_test_eof246:  state.cs = 246; goto _test_eof; 
	_test_eof247:  state.cs = 247; goto _test_eof; 
	_test_eof248:  state.cs = 248; goto _test_eof; 
	_test_eof249:  state.cs = 249; goto _test_eof; 
	_test_eof250:  state.cs = 250; goto _test_eof; 
	_test_eof251:  state.cs = 251; goto _test_eof; 
	_test_eof252:  state.cs = 252; goto _test_eof; 
	_test_eof253:  state.cs = 253; goto _test_eof; 
	_test_eof287:  state.cs = 287; goto _test_eof; 
	_test_eof254:  state.cs = 254; goto _test_eof; 
	_test_eof255:  state.cs = 255; goto _test_eof; 
	_test_eof256:  state.cs = 256; goto _test_eof; 
	_test_eof257:  state.cs = 257; goto _test_eof; 
	_test_eof258:  state.cs = 258; goto _test_eof; 
	_test_eof259:  state.cs = 259; goto _test_eof; 
	_test_eof260:  state.cs = 260; goto _test_eof; 
	_test_eof261:  state.cs = 261; goto _test_eof; 
	_test_eof288:  state.cs = 288; goto _test_eof; 

	_test_eof: {}
	if ( ( state.p) == ( state.eof) )
	{
	switch (  state.cs ) {
	case 268: 
#line 118 "propsparser.rl"
	{ props.name = state.match; }
	break;
	case 274: 
#line 119 "propsparser.rl"
	{ props.version = state.match; }
	break;
	case 275: 
#line 120 "propsparser.rl"
	{ props.release = state.match; }
	break;
	case 272: 
#line 121 "propsparser.rl"
	{ props.summary = state.match; }
	break;
	case 265: 
#line 122 "propsparser.rl"
	{ props.description = state.match; }
	break;
	case 264: 
#line 123 "propsparser.rl"
	{ props.buildhost = state.match; }
	break;
	case 267: 
#line 124 "propsparser.rl"
	{ props.license = state.match; }
	break;
	case 270: 
#line 125 "propsparser.rl"
	{ props.packager = state.match; }
	break;
	case 266: 
#line 126 "propsparser.rl"
	{ props.group = state.match; }
	break;
	case 273: 
#line 127 "propsparser.rl"
	{ props.url = state.match; }
	break;
	case 269: 
#line 128 "propsparser.rl"
	{ props.os = state.match; }
	break;
	case 262: 
#line 129 "propsparser.rl"
	{ props.arch = state.match; }
	break;
	case 279: 
#line 130 "propsparser.rl"
	{ props.platform = state.match; }
	break;
	case 287: 
#line 131 "propsparser.rl"
	{ props.optflags = state.match; }
	break;
	case 271: 
#line 133 "propsparser.rl"
	{ props.rpmversion = state.match; }
	break;
	case 282: 
#line 137 "propsparser.rl"
	{ props.prein.code = state.match; }
	break;
	case 280: 
#line 141 "propsparser.rl"
	{ props.postin.code = state.match; }
	break;
	case 283: 
#line 145 "propsparser.rl"
	{ props.preun.code = state.match; }
	break;
	case 281: 
#line 149 "propsparser.rl"
	{ props.postun.code = state.match; }
	break;
	case 284: 
	case 286: 
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	break;
	case 276: 
	case 278: 
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	break;
	case 285: 
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 177 "propsparser.rl"
	{ props.provide.push_back(deps); }
	break;
	case 277: 
#line 169 "propsparser.rl"
	{ deps.version = state.match; }
#line 181 "propsparser.rl"
	{ props.require.push_back(deps); }
	break;
#line 6191 "propsparser.h"
	}
	}

	_out: {}
	}

#line 223 "propsparser.rl"

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
