
#line 1 "propsparser.rl"
#ifndef __PROPSPARSER_H
#define __PROPSPARSER_H

// This file needs to be preprocessed with the 'ragel' tool.
// Run it like this:
//
//   ragel -G2 propsparser.rl -o propsparser.h
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


void parse_props(mfile& input, rpmprops_t& props) {

    ragel_state state;

    rpmprops_t::deps_t deps;

    
#line 226 "propsparser.rl"

/*

*/

    
#line 65 "propsparser.h"
static const int PropsParser_start = 1;
static const int PropsParser_first_final = 535;
static const int PropsParser_error = 0;

static const int PropsParser_en_strchar_escape = 534;
static const int PropsParser_en_consume_line = 570;
static const int PropsParser_en_main = 1;


#line 232 "propsparser.rl"
    
#line 77 "propsparser.h"
	{
	 state.cs = PropsParser_start;
	 state.top = 0;
	}

#line 233 "propsparser.rl"

    state.p = (char*)input.addr;
    state.pe = (char*)input.addr + input.size;
    state.eof = state.pe;

    
#line 90 "propsparser.h"
	{
	if ( ( state.p) == ( state.pe) )
		goto _test_eof;
	goto _resume;

_again:
	switch (  state.cs ) {
		case 1: goto st1;
		case 0: goto st0;
		case 535: goto st535;
		case 2: goto st2;
		case 3: goto st3;
		case 4: goto st4;
		case 5: goto st5;
		case 6: goto st6;
		case 7: goto st7;
		case 536: goto st536;
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
		case 537: goto st537;
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
		case 538: goto st538;
		case 31: goto st31;
		case 32: goto st32;
		case 33: goto st33;
		case 539: goto st539;
		case 34: goto st34;
		case 35: goto st35;
		case 36: goto st36;
		case 37: goto st37;
		case 38: goto st38;
		case 39: goto st39;
		case 40: goto st40;
		case 41: goto st41;
		case 42: goto st42;
		case 43: goto st43;
		case 44: goto st44;
		case 45: goto st45;
		case 46: goto st46;
		case 540: goto st540;
		case 47: goto st47;
		case 48: goto st48;
		case 49: goto st49;
		case 50: goto st50;
		case 51: goto st51;
		case 52: goto st52;
		case 53: goto st53;
		case 54: goto st54;
		case 55: goto st55;
		case 56: goto st56;
		case 57: goto st57;
		case 58: goto st58;
		case 59: goto st59;
		case 60: goto st60;
		case 61: goto st61;
		case 62: goto st62;
		case 541: goto st541;
		case 63: goto st63;
		case 64: goto st64;
		case 65: goto st65;
		case 66: goto st66;
		case 67: goto st67;
		case 68: goto st68;
		case 69: goto st69;
		case 542: goto st542;
		case 70: goto st70;
		case 71: goto st71;
		case 72: goto st72;
		case 73: goto st73;
		case 74: goto st74;
		case 75: goto st75;
		case 76: goto st76;
		case 77: goto st77;
		case 78: goto st78;
		case 543: goto st543;
		case 79: goto st79;
		case 80: goto st80;
		case 81: goto st81;
		case 82: goto st82;
		case 83: goto st83;
		case 84: goto st84;
		case 544: goto st544;
		case 85: goto st85;
		case 86: goto st86;
		case 87: goto st87;
		case 88: goto st88;
		case 545: goto st545;
		case 89: goto st89;
		case 90: goto st90;
		case 91: goto st91;
		case 92: goto st92;
		case 93: goto st93;
		case 94: goto st94;
		case 95: goto st95;
		case 96: goto st96;
		case 97: goto st97;
		case 98: goto st98;
		case 546: goto st546;
		case 99: goto st99;
		case 100: goto st100;
		case 101: goto st101;
		case 102: goto st102;
		case 103: goto st103;
		case 104: goto st104;
		case 105: goto st105;
		case 106: goto st106;
		case 107: goto st107;
		case 108: goto st108;
		case 109: goto st109;
		case 110: goto st110;
		case 547: goto st547;
		case 111: goto st111;
		case 112: goto st112;
		case 113: goto st113;
		case 114: goto st114;
		case 115: goto st115;
		case 116: goto st116;
		case 117: goto st117;
		case 118: goto st118;
		case 119: goto st119;
		case 548: goto st548;
		case 120: goto st120;
		case 121: goto st121;
		case 122: goto st122;
		case 123: goto st123;
		case 124: goto st124;
		case 549: goto st549;
		case 125: goto st125;
		case 126: goto st126;
		case 127: goto st127;
		case 128: goto st128;
		case 129: goto st129;
		case 130: goto st130;
		case 131: goto st131;
		case 132: goto st132;
		case 133: goto st133;
		case 550: goto st550;
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
		case 551: goto st551;
		case 146: goto st146;
		case 147: goto st147;
		case 148: goto st148;
		case 149: goto st149;
		case 150: goto st150;
		case 151: goto st151;
		case 152: goto st152;
		case 153: goto st153;
		case 154: goto st154;
		case 155: goto st155;
		case 552: goto st552;
		case 156: goto st156;
		case 157: goto st157;
		case 158: goto st158;
		case 553: goto st553;
		case 159: goto st159;
		case 160: goto st160;
		case 161: goto st161;
		case 162: goto st162;
		case 163: goto st163;
		case 164: goto st164;
		case 554: goto st554;
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
		case 225: goto st225;
		case 226: goto st226;
		case 227: goto st227;
		case 228: goto st228;
		case 229: goto st229;
		case 230: goto st230;
		case 555: goto st555;
		case 231: goto st231;
		case 232: goto st232;
		case 233: goto st233;
		case 234: goto st234;
		case 235: goto st235;
		case 236: goto st236;
		case 237: goto st237;
		case 238: goto st238;
		case 556: goto st556;
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
		case 557: goto st557;
		case 253: goto st253;
		case 254: goto st254;
		case 255: goto st255;
		case 256: goto st256;
		case 257: goto st257;
		case 258: goto st258;
		case 259: goto st259;
		case 260: goto st260;
		case 261: goto st261;
		case 262: goto st262;
		case 263: goto st263;
		case 264: goto st264;
		case 265: goto st265;
		case 266: goto st266;
		case 267: goto st267;
		case 268: goto st268;
		case 558: goto st558;
		case 269: goto st269;
		case 270: goto st270;
		case 271: goto st271;
		case 272: goto st272;
		case 273: goto st273;
		case 274: goto st274;
		case 275: goto st275;
		case 276: goto st276;
		case 277: goto st277;
		case 278: goto st278;
		case 279: goto st279;
		case 280: goto st280;
		case 281: goto st281;
		case 282: goto st282;
		case 559: goto st559;
		case 283: goto st283;
		case 284: goto st284;
		case 285: goto st285;
		case 286: goto st286;
		case 287: goto st287;
		case 288: goto st288;
		case 289: goto st289;
		case 290: goto st290;
		case 291: goto st291;
		case 292: goto st292;
		case 293: goto st293;
		case 294: goto st294;
		case 295: goto st295;
		case 296: goto st296;
		case 297: goto st297;
		case 298: goto st298;
		case 299: goto st299;
		case 300: goto st300;
		case 301: goto st301;
		case 560: goto st560;
		case 302: goto st302;
		case 303: goto st303;
		case 304: goto st304;
		case 561: goto st561;
		case 305: goto st305;
		case 306: goto st306;
		case 307: goto st307;
		case 308: goto st308;
		case 309: goto st309;
		case 310: goto st310;
		case 562: goto st562;
		case 311: goto st311;
		case 312: goto st312;
		case 313: goto st313;
		case 314: goto st314;
		case 315: goto st315;
		case 316: goto st316;
		case 317: goto st317;
		case 318: goto st318;
		case 319: goto st319;
		case 320: goto st320;
		case 321: goto st321;
		case 322: goto st322;
		case 323: goto st323;
		case 324: goto st324;
		case 325: goto st325;
		case 326: goto st326;
		case 327: goto st327;
		case 328: goto st328;
		case 329: goto st329;
		case 330: goto st330;
		case 331: goto st331;
		case 332: goto st332;
		case 333: goto st333;
		case 334: goto st334;
		case 335: goto st335;
		case 336: goto st336;
		case 337: goto st337;
		case 338: goto st338;
		case 339: goto st339;
		case 340: goto st340;
		case 341: goto st341;
		case 342: goto st342;
		case 343: goto st343;
		case 344: goto st344;
		case 345: goto st345;
		case 346: goto st346;
		case 347: goto st347;
		case 348: goto st348;
		case 349: goto st349;
		case 350: goto st350;
		case 351: goto st351;
		case 352: goto st352;
		case 353: goto st353;
		case 354: goto st354;
		case 355: goto st355;
		case 356: goto st356;
		case 357: goto st357;
		case 358: goto st358;
		case 359: goto st359;
		case 360: goto st360;
		case 361: goto st361;
		case 362: goto st362;
		case 363: goto st363;
		case 364: goto st364;
		case 365: goto st365;
		case 366: goto st366;
		case 367: goto st367;
		case 368: goto st368;
		case 369: goto st369;
		case 370: goto st370;
		case 371: goto st371;
		case 372: goto st372;
		case 373: goto st373;
		case 374: goto st374;
		case 375: goto st375;
		case 376: goto st376;
		case 377: goto st377;
		case 378: goto st378;
		case 563: goto st563;
		case 379: goto st379;
		case 380: goto st380;
		case 381: goto st381;
		case 564: goto st564;
		case 382: goto st382;
		case 383: goto st383;
		case 384: goto st384;
		case 385: goto st385;
		case 386: goto st386;
		case 387: goto st387;
		case 565: goto st565;
		case 388: goto st388;
		case 389: goto st389;
		case 390: goto st390;
		case 391: goto st391;
		case 392: goto st392;
		case 393: goto st393;
		case 394: goto st394;
		case 395: goto st395;
		case 396: goto st396;
		case 397: goto st397;
		case 398: goto st398;
		case 399: goto st399;
		case 400: goto st400;
		case 401: goto st401;
		case 402: goto st402;
		case 403: goto st403;
		case 404: goto st404;
		case 405: goto st405;
		case 406: goto st406;
		case 407: goto st407;
		case 408: goto st408;
		case 409: goto st409;
		case 410: goto st410;
		case 411: goto st411;
		case 412: goto st412;
		case 413: goto st413;
		case 414: goto st414;
		case 415: goto st415;
		case 416: goto st416;
		case 417: goto st417;
		case 418: goto st418;
		case 419: goto st419;
		case 420: goto st420;
		case 421: goto st421;
		case 422: goto st422;
		case 423: goto st423;
		case 424: goto st424;
		case 425: goto st425;
		case 426: goto st426;
		case 427: goto st427;
		case 428: goto st428;
		case 429: goto st429;
		case 430: goto st430;
		case 431: goto st431;
		case 432: goto st432;
		case 433: goto st433;
		case 434: goto st434;
		case 435: goto st435;
		case 436: goto st436;
		case 437: goto st437;
		case 438: goto st438;
		case 439: goto st439;
		case 440: goto st440;
		case 441: goto st441;
		case 442: goto st442;
		case 443: goto st443;
		case 444: goto st444;
		case 445: goto st445;
		case 446: goto st446;
		case 447: goto st447;
		case 448: goto st448;
		case 449: goto st449;
		case 450: goto st450;
		case 451: goto st451;
		case 452: goto st452;
		case 566: goto st566;
		case 453: goto st453;
		case 454: goto st454;
		case 455: goto st455;
		case 456: goto st456;
		case 457: goto st457;
		case 458: goto st458;
		case 459: goto st459;
		case 460: goto st460;
		case 461: goto st461;
		case 462: goto st462;
		case 463: goto st463;
		case 464: goto st464;
		case 465: goto st465;
		case 466: goto st466;
		case 467: goto st467;
		case 567: goto st567;
		case 468: goto st468;
		case 469: goto st469;
		case 470: goto st470;
		case 471: goto st471;
		case 472: goto st472;
		case 473: goto st473;
		case 474: goto st474;
		case 475: goto st475;
		case 568: goto st568;
		case 476: goto st476;
		case 477: goto st477;
		case 478: goto st478;
		case 479: goto st479;
		case 480: goto st480;
		case 481: goto st481;
		case 482: goto st482;
		case 483: goto st483;
		case 484: goto st484;
		case 485: goto st485;
		case 486: goto st486;
		case 487: goto st487;
		case 488: goto st488;
		case 489: goto st489;
		case 490: goto st490;
		case 491: goto st491;
		case 492: goto st492;
		case 493: goto st493;
		case 494: goto st494;
		case 495: goto st495;
		case 496: goto st496;
		case 497: goto st497;
		case 498: goto st498;
		case 499: goto st499;
		case 500: goto st500;
		case 501: goto st501;
		case 502: goto st502;
		case 503: goto st503;
		case 504: goto st504;
		case 505: goto st505;
		case 506: goto st506;
		case 507: goto st507;
		case 508: goto st508;
		case 509: goto st509;
		case 510: goto st510;
		case 511: goto st511;
		case 512: goto st512;
		case 513: goto st513;
		case 514: goto st514;
		case 515: goto st515;
		case 516: goto st516;
		case 517: goto st517;
		case 518: goto st518;
		case 519: goto st519;
		case 520: goto st520;
		case 521: goto st521;
		case 522: goto st522;
		case 523: goto st523;
		case 524: goto st524;
		case 525: goto st525;
		case 526: goto st526;
		case 527: goto st527;
		case 528: goto st528;
		case 529: goto st529;
		case 530: goto st530;
		case 531: goto st531;
		case 532: goto st532;
		case 533: goto st533;
		case 534: goto st534;
		case 569: goto st569;
		case 570: goto st570;
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
		case 35: goto tr2;
		case 65: goto st2;
		case 66: goto st8;
		case 67: goto st19;
		case 68: goto st34;
		case 70: goto st47;
		case 71: goto st63;
		case 76: goto st70;
		case 78: goto st79;
		case 79: goto st85;
		case 80: goto st89;
		case 82: goto st99;
		case 83: goto st111;
		case 85: goto st120;
		case 86: goto st125;
		case 97: goto st2;
		case 98: goto st8;
		case 99: goto st19;
		case 100: goto st34;
		case 102: goto st47;
		case 103: goto st63;
		case 108: goto st70;
		case 110: goto st79;
		case 111: goto st85;
		case 112: goto st89;
		case 114: goto st99;
		case 115: goto st111;
		case 117: goto st120;
		case 118: goto st125;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st1;
	goto st0;
st0:
 state.cs = 0;
	goto _out;
tr2:
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr806:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st535;
tr807:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr822:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st535;
tr823:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr838:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st535;
tr839:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr857:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st535;
tr858:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr873:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st535;
tr874:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr889:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st535;
tr890:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr905:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st535;
tr906:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr921:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st535;
tr922:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr937:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st535;
tr938:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr953:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st535;
tr954:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr969:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st535;
tr970:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr985:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st535;
tr986:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1001:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st535;
tr1002:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1017:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st535;
tr1018:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1033:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st535;
tr1034:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1049:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st535;
tr1050:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1065:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st535;
tr1066:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1084:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st535;
tr1085:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1100:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st535;
tr1101:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1116:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st535;
tr1117:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1132:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st535;
tr1133:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1148:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st535;
tr1149:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1164:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st535;
tr1165:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1180:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st535;
tr1181:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1199:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st535;
tr1200:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1215:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st535;
tr1216:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1234:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st535;
tr1235:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1250:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st535;
tr1251:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
tr1266:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st535;
tr1267:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 535; goto st570;}}
	goto st535;
st535:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof535;
case 535:
#line 1034 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st535;
		case 32: goto st535;
		case 35: goto tr2;
		case 65: goto st2;
		case 66: goto st8;
		case 67: goto st19;
		case 68: goto st34;
		case 70: goto st47;
		case 71: goto st63;
		case 76: goto st70;
		case 78: goto st79;
		case 79: goto st85;
		case 80: goto st89;
		case 82: goto st99;
		case 83: goto st111;
		case 85: goto st120;
		case 86: goto st125;
		case 97: goto st2;
		case 98: goto st8;
		case 99: goto st19;
		case 100: goto st34;
		case 102: goto st47;
		case 103: goto st63;
		case 108: goto st70;
		case 110: goto st79;
		case 111: goto st85;
		case 112: goto st89;
		case 114: goto st99;
		case 115: goto st111;
		case 117: goto st120;
		case 118: goto st125;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st535;
	goto st0;
tr808:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st2;
tr824:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st2;
tr843:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st2;
tr859:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st2;
tr875:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st2;
tr891:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st2;
tr907:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st2;
tr923:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st2;
tr939:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st2;
tr955:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st2;
tr971:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st2;
tr987:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st2;
tr1003:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st2;
tr1019:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st2;
tr1035:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st2;
tr1051:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st2;
tr1070:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st2;
tr1086:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st2;
tr1102:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st2;
tr1118:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st2;
tr1134:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st2;
tr1150:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st2;
tr1166:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st2;
tr1185:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st2;
tr1201:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st2;
tr1220:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st2;
tr1236:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st2;
tr1252:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st2;
tr1268:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st2;
st2:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof2;
case 2:
#line 1199 "propsparser.h"
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
		case 58: goto st533;
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
		case 34: goto tr22;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st6;
	goto st0;
tr22:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st7;
tr23:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st7;
tr25:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 7; goto st534;}}
	goto st7;
st7:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof7;
case 7:
#line 1261 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st536;
		case 92: goto tr25;
	}
	goto tr23;
st536:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof536;
case 536:
	switch( (*( state.p)) ) {
		case 13: goto tr806;
		case 32: goto tr806;
		case 35: goto tr807;
		case 65: goto tr808;
		case 66: goto tr809;
		case 67: goto tr810;
		case 68: goto tr811;
		case 70: goto tr812;
		case 71: goto tr813;
		case 76: goto tr814;
		case 78: goto tr815;
		case 79: goto tr816;
		case 80: goto tr817;
		case 82: goto tr818;
		case 83: goto tr819;
		case 85: goto tr820;
		case 86: goto tr821;
		case 97: goto tr808;
		case 98: goto tr809;
		case 99: goto tr810;
		case 100: goto tr811;
		case 102: goto tr812;
		case 103: goto tr813;
		case 108: goto tr814;
		case 110: goto tr815;
		case 111: goto tr816;
		case 112: goto tr817;
		case 114: goto tr818;
		case 115: goto tr819;
		case 117: goto tr820;
		case 118: goto tr821;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr806;
	goto st0;
tr809:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st8;
tr825:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st8;
tr844:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st8;
tr860:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st8;
tr876:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st8;
tr892:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st8;
tr908:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st8;
tr924:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st8;
tr940:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st8;
tr956:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st8;
tr972:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st8;
tr988:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st8;
tr1004:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st8;
tr1020:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st8;
tr1036:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st8;
tr1052:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st8;
tr1071:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st8;
tr1087:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st8;
tr1103:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st8;
tr1119:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st8;
tr1135:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st8;
tr1151:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st8;
tr1167:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st8;
tr1186:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st8;
tr1202:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st8;
tr1221:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st8;
tr1237:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st8;
tr1253:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st8;
tr1269:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st8;
st8:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof8;
case 8:
#line 1435 "propsparser.h"
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
		case 58: goto st532;
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
		case 34: goto tr36;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st17;
	goto st0;
tr36:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st18;
tr37:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st18;
tr39:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 18; goto st534;}}
	goto st18;
st18:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof18;
case 18:
#line 1534 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st537;
		case 92: goto tr39;
	}
	goto tr37;
st537:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof537;
case 537:
	switch( (*( state.p)) ) {
		case 13: goto tr822;
		case 32: goto tr822;
		case 35: goto tr823;
		case 65: goto tr824;
		case 66: goto tr825;
		case 67: goto tr826;
		case 68: goto tr827;
		case 70: goto tr828;
		case 71: goto tr829;
		case 76: goto tr830;
		case 78: goto tr831;
		case 79: goto tr832;
		case 80: goto tr833;
		case 82: goto tr834;
		case 83: goto tr835;
		case 85: goto tr836;
		case 86: goto tr837;
		case 97: goto tr824;
		case 98: goto tr825;
		case 99: goto tr826;
		case 100: goto tr827;
		case 102: goto tr828;
		case 103: goto tr829;
		case 108: goto tr830;
		case 110: goto tr831;
		case 111: goto tr832;
		case 112: goto tr833;
		case 114: goto tr834;
		case 115: goto tr835;
		case 117: goto tr836;
		case 118: goto tr837;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr822;
	goto st0;
tr810:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st19;
tr826:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st19;
tr845:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st19;
tr861:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st19;
tr877:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st19;
tr893:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st19;
tr909:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st19;
tr925:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st19;
tr941:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st19;
tr957:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st19;
tr973:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st19;
tr989:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st19;
tr1005:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st19;
tr1021:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st19;
tr1037:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st19;
tr1053:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st19;
tr1072:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st19;
tr1088:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st19;
tr1104:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st19;
tr1120:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st19;
tr1136:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st19;
tr1152:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st19;
tr1168:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st19;
tr1187:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st19;
tr1203:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st19;
tr1222:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st19;
tr1238:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st19;
tr1254:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st19;
tr1270:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st19;
st19:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof19;
case 19:
#line 1708 "propsparser.h"
	if ( (*( state.p)) == 111 )
		goto st20;
	goto st0;
st20:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof20;
case 20:
	if ( (*( state.p)) == 110 )
		goto st21;
	goto st0;
st21:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof21;
case 21:
	if ( (*( state.p)) == 102 )
		goto st22;
	goto st0;
st22:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof22;
case 22:
	if ( (*( state.p)) == 108 )
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
	if ( (*( state.p)) == 99 )
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
	if ( (*( state.p)) == 115 )
		goto st27;
	goto st0;
st27:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof27;
case 27:
	switch( (*( state.p)) ) {
		case 13: goto tr48;
		case 32: goto tr48;
		case 58: goto st531;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr48;
	goto st0;
tr48:
#line 206 "propsparser.rl"
	{ deps = rpmprops_t::deps_t(); }
	goto st28;
st28:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof28;
case 28:
#line 1781 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr48;
		case 32: goto tr48;
		case 34: goto tr50;
		case 97: goto st476;
		case 99: goto st484;
		case 105: goto st490;
		case 112: goto st496;
		case 114: goto st519;
		case 118: goto st525;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr48;
	goto st0;
tr50:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st29;
tr57:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st29;
tr59:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 29; goto st534;}}
	goto st29;
st29:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof29;
case 29:
#line 1816 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st30;
		case 92: goto tr59;
	}
	goto tr57;
st30:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof30;
case 30:
	switch( (*( state.p)) ) {
		case 13: goto tr60;
		case 32: goto tr60;
		case 60: goto tr61;
		case 61: goto tr62;
		case 62: goto tr63;
		case 97: goto tr64;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr60;
	goto st0;
tr60:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st538;
tr733:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st538;
st538:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof538;
case 538:
#line 1849 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr838;
		case 32: goto tr838;
		case 35: goto tr839;
		case 60: goto st31;
		case 61: goto st471;
		case 62: goto st472;
		case 65: goto tr843;
		case 66: goto tr844;
		case 67: goto tr845;
		case 68: goto tr846;
		case 70: goto tr847;
		case 71: goto tr848;
		case 76: goto tr849;
		case 78: goto tr850;
		case 79: goto tr851;
		case 80: goto tr852;
		case 82: goto tr853;
		case 83: goto tr854;
		case 85: goto tr855;
		case 86: goto tr856;
		case 97: goto tr843;
		case 98: goto tr844;
		case 99: goto tr845;
		case 100: goto tr846;
		case 102: goto tr847;
		case 103: goto tr848;
		case 108: goto tr849;
		case 110: goto tr850;
		case 111: goto tr851;
		case 112: goto tr852;
		case 114: goto tr853;
		case 115: goto tr854;
		case 117: goto tr855;
		case 118: goto tr856;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr838;
	goto st0;
tr61:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st31;
tr734:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st31;
st31:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof31;
case 31:
#line 1901 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr65;
		case 32: goto tr65;
		case 34: goto tr66;
		case 61: goto st470;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr65;
	goto st0;
tr65:
#line 182 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
	goto st32;
tr711:
#line 184 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
	goto st32;
tr713:
#line 181 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
	goto st32;
tr715:
#line 183 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
	goto st32;
tr718:
#line 185 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
	goto st32;
st32:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof32;
case 32:
#line 1935 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st32;
		case 32: goto st32;
		case 34: goto tr69;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st32;
	goto st0;
tr69:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st33;
tr70:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st33;
tr72:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 33; goto st534;}}
	goto st33;
tr66:
#line 182 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st33;
tr712:
#line 184 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st33;
tr714:
#line 181 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st33;
tr716:
#line 183 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st33;
tr719:
#line 185 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st33;
st33:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof33;
case 33:
#line 2004 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st539;
		case 92: goto tr72;
	}
	goto tr70;
st539:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof539;
case 539:
	switch( (*( state.p)) ) {
		case 13: goto tr857;
		case 32: goto tr857;
		case 35: goto tr858;
		case 65: goto tr859;
		case 66: goto tr860;
		case 67: goto tr861;
		case 68: goto tr862;
		case 70: goto tr863;
		case 71: goto tr864;
		case 76: goto tr865;
		case 78: goto tr866;
		case 79: goto tr867;
		case 80: goto tr868;
		case 82: goto tr869;
		case 83: goto tr870;
		case 85: goto tr871;
		case 86: goto tr872;
		case 97: goto tr859;
		case 98: goto tr860;
		case 99: goto tr861;
		case 100: goto tr862;
		case 102: goto tr863;
		case 103: goto tr864;
		case 108: goto tr865;
		case 110: goto tr866;
		case 111: goto tr867;
		case 112: goto tr868;
		case 114: goto tr869;
		case 115: goto tr870;
		case 117: goto tr871;
		case 118: goto tr872;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr857;
	goto st0;
tr811:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st34;
tr827:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st34;
tr846:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st34;
tr862:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st34;
tr878:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st34;
tr894:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st34;
tr910:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st34;
tr926:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st34;
tr942:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st34;
tr958:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st34;
tr974:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st34;
tr990:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st34;
tr1006:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st34;
tr1022:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st34;
tr1038:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st34;
tr1054:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st34;
tr1073:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st34;
tr1089:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st34;
tr1105:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st34;
tr1121:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st34;
tr1137:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st34;
tr1153:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st34;
tr1169:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st34;
tr1188:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st34;
tr1204:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st34;
tr1223:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st34;
tr1239:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st34;
tr1255:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st34;
tr1271:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st34;
st34:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof34;
case 34:
#line 2178 "propsparser.h"
	if ( (*( state.p)) == 101 )
		goto st35;
	goto st0;
st35:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof35;
case 35:
	if ( (*( state.p)) == 115 )
		goto st36;
	goto st0;
st36:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof36;
case 36:
	if ( (*( state.p)) == 99 )
		goto st37;
	goto st0;
st37:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof37;
case 37:
	if ( (*( state.p)) == 114 )
		goto st38;
	goto st0;
st38:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof38;
case 38:
	if ( (*( state.p)) == 105 )
		goto st39;
	goto st0;
st39:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof39;
case 39:
	if ( (*( state.p)) == 112 )
		goto st40;
	goto st0;
st40:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof40;
case 40:
	if ( (*( state.p)) == 116 )
		goto st41;
	goto st0;
st41:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof41;
case 41:
	if ( (*( state.p)) == 105 )
		goto st42;
	goto st0;
st42:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof42;
case 42:
	if ( (*( state.p)) == 111 )
		goto st43;
	goto st0;
st43:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof43;
case 43:
	if ( (*( state.p)) == 110 )
		goto st44;
	goto st0;
st44:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof44;
case 44:
	switch( (*( state.p)) ) {
		case 13: goto st45;
		case 32: goto st45;
		case 58: goto st469;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st45;
	goto st0;
st45:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof45;
case 45:
	switch( (*( state.p)) ) {
		case 13: goto st45;
		case 32: goto st45;
		case 34: goto tr85;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st45;
	goto st0;
tr85:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st46;
tr86:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st46;
tr88:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 46; goto st534;}}
	goto st46;
st46:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof46;
case 46:
#line 2289 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st540;
		case 92: goto tr88;
	}
	goto tr86;
st540:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof540;
case 540:
	switch( (*( state.p)) ) {
		case 13: goto tr873;
		case 32: goto tr873;
		case 35: goto tr874;
		case 65: goto tr875;
		case 66: goto tr876;
		case 67: goto tr877;
		case 68: goto tr878;
		case 70: goto tr879;
		case 71: goto tr880;
		case 76: goto tr881;
		case 78: goto tr882;
		case 79: goto tr883;
		case 80: goto tr884;
		case 82: goto tr885;
		case 83: goto tr886;
		case 85: goto tr887;
		case 86: goto tr888;
		case 97: goto tr875;
		case 98: goto tr876;
		case 99: goto tr877;
		case 100: goto tr878;
		case 102: goto tr879;
		case 103: goto tr880;
		case 108: goto tr881;
		case 110: goto tr882;
		case 111: goto tr883;
		case 112: goto tr884;
		case 114: goto tr885;
		case 115: goto tr886;
		case 117: goto tr887;
		case 118: goto tr888;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr873;
	goto st0;
tr812:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st47;
tr828:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st47;
tr847:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st47;
tr863:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st47;
tr879:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st47;
tr895:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st47;
tr911:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st47;
tr927:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st47;
tr943:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st47;
tr959:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st47;
tr975:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st47;
tr991:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st47;
tr1007:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st47;
tr1023:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st47;
tr1039:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st47;
tr1055:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st47;
tr1074:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st47;
tr1090:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st47;
tr1106:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st47;
tr1122:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st47;
tr1138:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st47;
tr1154:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st47;
tr1170:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st47;
tr1189:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st47;
tr1205:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st47;
tr1224:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st47;
tr1240:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st47;
tr1256:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st47;
tr1272:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st47;
st47:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof47;
case 47:
#line 2463 "propsparser.h"
	if ( (*( state.p)) == 111 )
		goto st48;
	goto st0;
st48:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof48;
case 48:
	if ( (*( state.p)) == 114 )
		goto st49;
	goto st0;
st49:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof49;
case 49:
	if ( (*( state.p)) == 99 )
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
		case 71: goto st52;
		case 85: goto st458;
		case 103: goto st52;
		case 117: goto st458;
	}
	goto st0;
st52:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof52;
case 52:
	if ( (*( state.p)) == 114 )
		goto st53;
	goto st0;
st53:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof53;
case 53:
	if ( (*( state.p)) == 111 )
		goto st54;
	goto st0;
st54:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof54;
case 54:
	if ( (*( state.p)) == 117 )
		goto st55;
	goto st0;
st55:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof55;
case 55:
	if ( (*( state.p)) == 112 )
		goto st56;
	goto st0;
st56:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof56;
case 56:
	switch( (*( state.p)) ) {
		case 78: goto st57;
		case 110: goto st57;
	}
	goto st0;
st57:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof57;
case 57:
	if ( (*( state.p)) == 97 )
		goto st58;
	goto st0;
st58:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof58;
case 58:
	if ( (*( state.p)) == 109 )
		goto st59;
	goto st0;
st59:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof59;
case 59:
	if ( (*( state.p)) == 101 )
		goto st60;
	goto st0;
st60:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof60;
case 60:
	switch( (*( state.p)) ) {
		case 13: goto st61;
		case 32: goto st61;
		case 58: goto st457;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st61;
	goto st0;
st61:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof61;
case 61:
	switch( (*( state.p)) ) {
		case 13: goto st61;
		case 32: goto st61;
		case 34: goto tr105;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st61;
	goto st0;
tr105:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st62;
tr106:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st62;
tr108:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 62; goto st534;}}
	goto st62;
st62:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof62;
case 62:
#line 2601 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st541;
		case 92: goto tr108;
	}
	goto tr106;
st541:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof541;
case 541:
	switch( (*( state.p)) ) {
		case 13: goto tr889;
		case 32: goto tr889;
		case 35: goto tr890;
		case 65: goto tr891;
		case 66: goto tr892;
		case 67: goto tr893;
		case 68: goto tr894;
		case 70: goto tr895;
		case 71: goto tr896;
		case 76: goto tr897;
		case 78: goto tr898;
		case 79: goto tr899;
		case 80: goto tr900;
		case 82: goto tr901;
		case 83: goto tr902;
		case 85: goto tr903;
		case 86: goto tr904;
		case 97: goto tr891;
		case 98: goto tr892;
		case 99: goto tr893;
		case 100: goto tr894;
		case 102: goto tr895;
		case 103: goto tr896;
		case 108: goto tr897;
		case 110: goto tr898;
		case 111: goto tr899;
		case 112: goto tr900;
		case 114: goto tr901;
		case 115: goto tr902;
		case 117: goto tr903;
		case 118: goto tr904;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr889;
	goto st0;
tr813:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st63;
tr829:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st63;
tr848:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st63;
tr864:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st63;
tr880:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st63;
tr896:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st63;
tr912:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st63;
tr928:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st63;
tr944:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st63;
tr960:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st63;
tr976:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st63;
tr992:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st63;
tr1008:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st63;
tr1024:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st63;
tr1040:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st63;
tr1056:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st63;
tr1075:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st63;
tr1091:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st63;
tr1107:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st63;
tr1123:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st63;
tr1139:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st63;
tr1155:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st63;
tr1171:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st63;
tr1190:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st63;
tr1206:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st63;
tr1225:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st63;
tr1241:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st63;
tr1257:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st63;
tr1273:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st63;
st63:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof63;
case 63:
#line 2775 "propsparser.h"
	if ( (*( state.p)) == 114 )
		goto st64;
	goto st0;
st64:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof64;
case 64:
	if ( (*( state.p)) == 111 )
		goto st65;
	goto st0;
st65:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof65;
case 65:
	if ( (*( state.p)) == 117 )
		goto st66;
	goto st0;
st66:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof66;
case 66:
	if ( (*( state.p)) == 112 )
		goto st67;
	goto st0;
st67:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof67;
case 67:
	switch( (*( state.p)) ) {
		case 13: goto st68;
		case 32: goto st68;
		case 58: goto st456;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st68;
	goto st0;
st68:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof68;
case 68:
	switch( (*( state.p)) ) {
		case 13: goto st68;
		case 32: goto st68;
		case 34: goto tr115;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st68;
	goto st0;
tr115:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st69;
tr116:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st69;
tr118:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 69; goto st534;}}
	goto st69;
st69:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof69;
case 69:
#line 2844 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st542;
		case 92: goto tr118;
	}
	goto tr116;
st542:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof542;
case 542:
	switch( (*( state.p)) ) {
		case 13: goto tr905;
		case 32: goto tr905;
		case 35: goto tr906;
		case 65: goto tr907;
		case 66: goto tr908;
		case 67: goto tr909;
		case 68: goto tr910;
		case 70: goto tr911;
		case 71: goto tr912;
		case 76: goto tr913;
		case 78: goto tr914;
		case 79: goto tr915;
		case 80: goto tr916;
		case 82: goto tr917;
		case 83: goto tr918;
		case 85: goto tr919;
		case 86: goto tr920;
		case 97: goto tr907;
		case 98: goto tr908;
		case 99: goto tr909;
		case 100: goto tr910;
		case 102: goto tr911;
		case 103: goto tr912;
		case 108: goto tr913;
		case 110: goto tr914;
		case 111: goto tr915;
		case 112: goto tr916;
		case 114: goto tr917;
		case 115: goto tr918;
		case 117: goto tr919;
		case 118: goto tr920;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr905;
	goto st0;
tr814:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st70;
tr830:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st70;
tr849:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st70;
tr865:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st70;
tr881:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st70;
tr897:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st70;
tr913:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st70;
tr929:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st70;
tr945:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st70;
tr961:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st70;
tr977:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st70;
tr993:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st70;
tr1009:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st70;
tr1025:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st70;
tr1041:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st70;
tr1057:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st70;
tr1076:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st70;
tr1092:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st70;
tr1108:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st70;
tr1124:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st70;
tr1140:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st70;
tr1156:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st70;
tr1172:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st70;
tr1191:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st70;
tr1207:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st70;
tr1226:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st70;
tr1242:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st70;
tr1258:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st70;
tr1274:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st70;
st70:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof70;
case 70:
#line 3018 "propsparser.h"
	if ( (*( state.p)) == 105 )
		goto st71;
	goto st0;
st71:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof71;
case 71:
	if ( (*( state.p)) == 99 )
		goto st72;
	goto st0;
st72:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof72;
case 72:
	if ( (*( state.p)) == 101 )
		goto st73;
	goto st0;
st73:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof73;
case 73:
	if ( (*( state.p)) == 110 )
		goto st74;
	goto st0;
st74:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof74;
case 74:
	if ( (*( state.p)) == 115 )
		goto st75;
	goto st0;
st75:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof75;
case 75:
	if ( (*( state.p)) == 101 )
		goto st76;
	goto st0;
st76:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof76;
case 76:
	switch( (*( state.p)) ) {
		case 13: goto st77;
		case 32: goto st77;
		case 58: goto st455;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st77;
	goto st0;
st77:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof77;
case 77:
	switch( (*( state.p)) ) {
		case 13: goto st77;
		case 32: goto st77;
		case 34: goto tr127;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st77;
	goto st0;
tr127:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st78;
tr128:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st78;
tr130:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 78; goto st534;}}
	goto st78;
st78:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof78;
case 78:
#line 3101 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st543;
		case 92: goto tr130;
	}
	goto tr128;
st543:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof543;
case 543:
	switch( (*( state.p)) ) {
		case 13: goto tr921;
		case 32: goto tr921;
		case 35: goto tr922;
		case 65: goto tr923;
		case 66: goto tr924;
		case 67: goto tr925;
		case 68: goto tr926;
		case 70: goto tr927;
		case 71: goto tr928;
		case 76: goto tr929;
		case 78: goto tr930;
		case 79: goto tr931;
		case 80: goto tr932;
		case 82: goto tr933;
		case 83: goto tr934;
		case 85: goto tr935;
		case 86: goto tr936;
		case 97: goto tr923;
		case 98: goto tr924;
		case 99: goto tr925;
		case 100: goto tr926;
		case 102: goto tr927;
		case 103: goto tr928;
		case 108: goto tr929;
		case 110: goto tr930;
		case 111: goto tr931;
		case 112: goto tr932;
		case 114: goto tr933;
		case 115: goto tr934;
		case 117: goto tr935;
		case 118: goto tr936;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr921;
	goto st0;
tr815:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st79;
tr831:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st79;
tr850:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st79;
tr866:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st79;
tr882:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st79;
tr898:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st79;
tr914:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st79;
tr930:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st79;
tr946:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st79;
tr962:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st79;
tr978:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st79;
tr994:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st79;
tr1010:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st79;
tr1026:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st79;
tr1042:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st79;
tr1058:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st79;
tr1077:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st79;
tr1093:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st79;
tr1109:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st79;
tr1125:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st79;
tr1141:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st79;
tr1157:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st79;
tr1173:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st79;
tr1192:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st79;
tr1208:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st79;
tr1227:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st79;
tr1243:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st79;
tr1259:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st79;
tr1275:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st79;
st79:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof79;
case 79:
#line 3275 "propsparser.h"
	if ( (*( state.p)) == 97 )
		goto st80;
	goto st0;
st80:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof80;
case 80:
	if ( (*( state.p)) == 109 )
		goto st81;
	goto st0;
st81:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof81;
case 81:
	if ( (*( state.p)) == 101 )
		goto st82;
	goto st0;
st82:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof82;
case 82:
	switch( (*( state.p)) ) {
		case 13: goto st83;
		case 32: goto st83;
		case 58: goto st454;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st83;
	goto st0;
st83:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof83;
case 83:
	switch( (*( state.p)) ) {
		case 13: goto st83;
		case 32: goto st83;
		case 34: goto tr136;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st83;
	goto st0;
tr136:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st84;
tr137:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st84;
tr139:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 84; goto st534;}}
	goto st84;
st84:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof84;
case 84:
#line 3337 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st544;
		case 92: goto tr139;
	}
	goto tr137;
st544:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof544;
case 544:
	switch( (*( state.p)) ) {
		case 13: goto tr937;
		case 32: goto tr937;
		case 35: goto tr938;
		case 65: goto tr939;
		case 66: goto tr940;
		case 67: goto tr941;
		case 68: goto tr942;
		case 70: goto tr943;
		case 71: goto tr944;
		case 76: goto tr945;
		case 78: goto tr946;
		case 79: goto tr947;
		case 80: goto tr948;
		case 82: goto tr949;
		case 83: goto tr950;
		case 85: goto tr951;
		case 86: goto tr952;
		case 97: goto tr939;
		case 98: goto tr940;
		case 99: goto tr941;
		case 100: goto tr942;
		case 102: goto tr943;
		case 103: goto tr944;
		case 108: goto tr945;
		case 110: goto tr946;
		case 111: goto tr947;
		case 112: goto tr948;
		case 114: goto tr949;
		case 115: goto tr950;
		case 117: goto tr951;
		case 118: goto tr952;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr937;
	goto st0;
tr816:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st85;
tr832:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st85;
tr851:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st85;
tr867:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st85;
tr883:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st85;
tr899:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st85;
tr915:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st85;
tr931:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st85;
tr947:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st85;
tr963:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st85;
tr979:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st85;
tr995:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st85;
tr1011:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st85;
tr1027:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st85;
tr1043:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st85;
tr1059:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st85;
tr1078:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st85;
tr1094:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st85;
tr1110:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st85;
tr1126:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st85;
tr1142:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st85;
tr1158:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st85;
tr1174:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st85;
tr1193:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st85;
tr1209:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st85;
tr1228:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st85;
tr1244:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st85;
tr1260:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st85;
tr1276:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st85;
st85:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof85;
case 85:
#line 3511 "propsparser.h"
	switch( (*( state.p)) ) {
		case 83: goto st86;
		case 98: goto st368;
		case 112: goto st444;
		case 115: goto st86;
	}
	goto st0;
st86:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof86;
case 86:
	switch( (*( state.p)) ) {
		case 13: goto st87;
		case 32: goto st87;
		case 58: goto st367;
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
		case 34: goto tr145;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st87;
	goto st0;
tr145:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st88;
tr146:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st88;
tr148:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 88; goto st534;}}
	goto st88;
st88:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof88;
case 88:
#line 3563 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st545;
		case 92: goto tr148;
	}
	goto tr146;
st545:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof545;
case 545:
	switch( (*( state.p)) ) {
		case 13: goto tr953;
		case 32: goto tr953;
		case 35: goto tr954;
		case 65: goto tr955;
		case 66: goto tr956;
		case 67: goto tr957;
		case 68: goto tr958;
		case 70: goto tr959;
		case 71: goto tr960;
		case 76: goto tr961;
		case 78: goto tr962;
		case 79: goto tr963;
		case 80: goto tr964;
		case 82: goto tr965;
		case 83: goto tr966;
		case 85: goto tr967;
		case 86: goto tr968;
		case 97: goto tr955;
		case 98: goto tr956;
		case 99: goto tr957;
		case 100: goto tr958;
		case 102: goto tr959;
		case 103: goto tr960;
		case 108: goto tr961;
		case 110: goto tr962;
		case 111: goto tr963;
		case 112: goto tr964;
		case 114: goto tr965;
		case 115: goto tr966;
		case 117: goto tr967;
		case 118: goto tr968;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr953;
	goto st0;
tr817:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st89;
tr833:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st89;
tr852:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st89;
tr868:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st89;
tr884:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st89;
tr900:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st89;
tr916:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st89;
tr932:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st89;
tr948:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st89;
tr964:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st89;
tr980:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st89;
tr996:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st89;
tr1012:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st89;
tr1028:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st89;
tr1044:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st89;
tr1060:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st89;
tr1079:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st89;
tr1095:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st89;
tr1111:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st89;
tr1127:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st89;
tr1143:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st89;
tr1159:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st89;
tr1175:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st89;
tr1194:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st89;
tr1210:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st89;
tr1229:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st89;
tr1245:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st89;
tr1261:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st89;
tr1277:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st89;
st89:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof89;
case 89:
#line 3737 "propsparser.h"
	switch( (*( state.p)) ) {
		case 97: goto st90;
		case 108: goto st222;
		case 111: goto st232;
		case 114: goto st263;
	}
	goto st0;
st90:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof90;
case 90:
	if ( (*( state.p)) == 99 )
		goto st91;
	goto st0;
st91:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof91;
case 91:
	if ( (*( state.p)) == 107 )
		goto st92;
	goto st0;
st92:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof92;
case 92:
	if ( (*( state.p)) == 97 )
		goto st93;
	goto st0;
st93:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof93;
case 93:
	if ( (*( state.p)) == 103 )
		goto st94;
	goto st0;
st94:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof94;
case 94:
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
	switch( (*( state.p)) ) {
		case 13: goto st97;
		case 32: goto st97;
		case 58: goto st221;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st97;
	goto st0;
st97:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof97;
case 97:
	switch( (*( state.p)) ) {
		case 13: goto st97;
		case 32: goto st97;
		case 34: goto tr161;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st97;
	goto st0;
tr161:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st98;
tr162:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st98;
tr164:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 98; goto st534;}}
	goto st98;
st98:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof98;
case 98:
#line 3831 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st546;
		case 92: goto tr164;
	}
	goto tr162;
st546:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof546;
case 546:
	switch( (*( state.p)) ) {
		case 13: goto tr969;
		case 32: goto tr969;
		case 35: goto tr970;
		case 65: goto tr971;
		case 66: goto tr972;
		case 67: goto tr973;
		case 68: goto tr974;
		case 70: goto tr975;
		case 71: goto tr976;
		case 76: goto tr977;
		case 78: goto tr978;
		case 79: goto tr979;
		case 80: goto tr980;
		case 82: goto tr981;
		case 83: goto tr982;
		case 85: goto tr983;
		case 86: goto tr984;
		case 97: goto tr971;
		case 98: goto tr972;
		case 99: goto tr973;
		case 100: goto tr974;
		case 102: goto tr975;
		case 103: goto tr976;
		case 108: goto tr977;
		case 110: goto tr978;
		case 111: goto tr979;
		case 112: goto tr980;
		case 114: goto tr981;
		case 115: goto tr982;
		case 117: goto tr983;
		case 118: goto tr984;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr969;
	goto st0;
tr818:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st99;
tr834:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st99;
tr853:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st99;
tr869:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st99;
tr885:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st99;
tr901:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st99;
tr917:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st99;
tr933:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st99;
tr949:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st99;
tr965:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st99;
tr981:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st99;
tr997:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st99;
tr1013:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st99;
tr1029:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st99;
tr1045:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st99;
tr1061:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st99;
tr1080:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st99;
tr1096:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st99;
tr1112:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st99;
tr1128:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st99;
tr1144:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st99;
tr1160:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st99;
tr1176:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st99;
tr1195:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st99;
tr1211:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st99;
tr1230:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st99;
tr1246:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st99;
tr1262:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st99;
tr1278:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st99;
st99:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof99;
case 99:
#line 4005 "propsparser.h"
	switch( (*( state.p)) ) {
		case 80: goto st100;
		case 101: goto st138;
		case 112: goto st100;
	}
	goto st0;
st100:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof100;
case 100:
	switch( (*( state.p)) ) {
		case 77: goto st101;
		case 109: goto st101;
	}
	goto st0;
st101:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof101;
case 101:
	switch( (*( state.p)) ) {
		case 86: goto st102;
		case 118: goto st102;
	}
	goto st0;
st102:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof102;
case 102:
	if ( (*( state.p)) == 101 )
		goto st103;
	goto st0;
st103:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof103;
case 103:
	if ( (*( state.p)) == 114 )
		goto st104;
	goto st0;
st104:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof104;
case 104:
	if ( (*( state.p)) == 115 )
		goto st105;
	goto st0;
st105:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof105;
case 105:
	if ( (*( state.p)) == 105 )
		goto st106;
	goto st0;
st106:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof106;
case 106:
	if ( (*( state.p)) == 111 )
		goto st107;
	goto st0;
st107:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof107;
case 107:
	if ( (*( state.p)) == 110 )
		goto st108;
	goto st0;
st108:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof108;
case 108:
	switch( (*( state.p)) ) {
		case 13: goto st109;
		case 32: goto st109;
		case 58: goto st137;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st109;
	goto st0;
st109:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof109;
case 109:
	switch( (*( state.p)) ) {
		case 13: goto st109;
		case 32: goto st109;
		case 34: goto tr177;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st109;
	goto st0;
tr177:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st110;
tr178:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st110;
tr180:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 110; goto st534;}}
	goto st110;
st110:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof110;
case 110:
#line 4116 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st547;
		case 92: goto tr180;
	}
	goto tr178;
st547:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof547;
case 547:
	switch( (*( state.p)) ) {
		case 13: goto tr985;
		case 32: goto tr985;
		case 35: goto tr986;
		case 65: goto tr987;
		case 66: goto tr988;
		case 67: goto tr989;
		case 68: goto tr990;
		case 70: goto tr991;
		case 71: goto tr992;
		case 76: goto tr993;
		case 78: goto tr994;
		case 79: goto tr995;
		case 80: goto tr996;
		case 82: goto tr997;
		case 83: goto tr998;
		case 85: goto tr999;
		case 86: goto tr1000;
		case 97: goto tr987;
		case 98: goto tr988;
		case 99: goto tr989;
		case 100: goto tr990;
		case 102: goto tr991;
		case 103: goto tr992;
		case 108: goto tr993;
		case 110: goto tr994;
		case 111: goto tr995;
		case 112: goto tr996;
		case 114: goto tr997;
		case 115: goto tr998;
		case 117: goto tr999;
		case 118: goto tr1000;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr985;
	goto st0;
tr819:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st111;
tr835:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st111;
tr854:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st111;
tr870:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st111;
tr886:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st111;
tr902:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st111;
tr918:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st111;
tr934:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st111;
tr950:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st111;
tr966:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st111;
tr982:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st111;
tr998:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st111;
tr1014:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st111;
tr1030:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st111;
tr1046:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st111;
tr1062:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st111;
tr1081:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st111;
tr1097:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st111;
tr1113:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st111;
tr1129:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st111;
tr1145:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st111;
tr1161:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st111;
tr1177:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st111;
tr1196:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st111;
tr1212:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st111;
tr1231:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st111;
tr1247:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st111;
tr1263:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st111;
tr1279:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st111;
st111:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof111;
case 111:
#line 4290 "propsparser.h"
	if ( (*( state.p)) == 117 )
		goto st112;
	goto st0;
st112:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof112;
case 112:
	if ( (*( state.p)) == 109 )
		goto st113;
	goto st0;
st113:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof113;
case 113:
	if ( (*( state.p)) == 109 )
		goto st114;
	goto st0;
st114:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof114;
case 114:
	if ( (*( state.p)) == 97 )
		goto st115;
	goto st0;
st115:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof115;
case 115:
	if ( (*( state.p)) == 114 )
		goto st116;
	goto st0;
st116:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof116;
case 116:
	if ( (*( state.p)) == 121 )
		goto st117;
	goto st0;
st117:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof117;
case 117:
	switch( (*( state.p)) ) {
		case 13: goto st118;
		case 32: goto st118;
		case 58: goto st136;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st118;
	goto st0;
st118:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof118;
case 118:
	switch( (*( state.p)) ) {
		case 13: goto st118;
		case 32: goto st118;
		case 34: goto tr189;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st118;
	goto st0;
tr189:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st119;
tr190:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st119;
tr192:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 119; goto st534;}}
	goto st119;
st119:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof119;
case 119:
#line 4373 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st548;
		case 92: goto tr192;
	}
	goto tr190;
st548:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof548;
case 548:
	switch( (*( state.p)) ) {
		case 13: goto tr1001;
		case 32: goto tr1001;
		case 35: goto tr1002;
		case 65: goto tr1003;
		case 66: goto tr1004;
		case 67: goto tr1005;
		case 68: goto tr1006;
		case 70: goto tr1007;
		case 71: goto tr1008;
		case 76: goto tr1009;
		case 78: goto tr1010;
		case 79: goto tr1011;
		case 80: goto tr1012;
		case 82: goto tr1013;
		case 83: goto tr1014;
		case 85: goto tr1015;
		case 86: goto tr1016;
		case 97: goto tr1003;
		case 98: goto tr1004;
		case 99: goto tr1005;
		case 100: goto tr1006;
		case 102: goto tr1007;
		case 103: goto tr1008;
		case 108: goto tr1009;
		case 110: goto tr1010;
		case 111: goto tr1011;
		case 112: goto tr1012;
		case 114: goto tr1013;
		case 115: goto tr1014;
		case 117: goto tr1015;
		case 118: goto tr1016;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1001;
	goto st0;
tr820:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st120;
tr836:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st120;
tr855:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st120;
tr871:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st120;
tr887:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st120;
tr903:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st120;
tr919:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st120;
tr935:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st120;
tr951:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st120;
tr967:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st120;
tr983:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st120;
tr999:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st120;
tr1015:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st120;
tr1031:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st120;
tr1047:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st120;
tr1063:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st120;
tr1082:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st120;
tr1098:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st120;
tr1114:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st120;
tr1130:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st120;
tr1146:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st120;
tr1162:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st120;
tr1178:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st120;
tr1197:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st120;
tr1213:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st120;
tr1232:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st120;
tr1248:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st120;
tr1264:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st120;
tr1280:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st120;
st120:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof120;
case 120:
#line 4547 "propsparser.h"
	switch( (*( state.p)) ) {
		case 82: goto st121;
		case 114: goto st121;
	}
	goto st0;
st121:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof121;
case 121:
	switch( (*( state.p)) ) {
		case 76: goto st122;
		case 108: goto st122;
	}
	goto st0;
st122:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof122;
case 122:
	switch( (*( state.p)) ) {
		case 13: goto st123;
		case 32: goto st123;
		case 58: goto st135;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st123;
	goto st0;
st123:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof123;
case 123:
	switch( (*( state.p)) ) {
		case 13: goto st123;
		case 32: goto st123;
		case 34: goto tr197;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st123;
	goto st0;
tr197:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st124;
tr198:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st124;
tr200:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 124; goto st534;}}
	goto st124;
st124:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof124;
case 124:
#line 4606 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st549;
		case 92: goto tr200;
	}
	goto tr198;
st549:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof549;
case 549:
	switch( (*( state.p)) ) {
		case 13: goto tr1017;
		case 32: goto tr1017;
		case 35: goto tr1018;
		case 65: goto tr1019;
		case 66: goto tr1020;
		case 67: goto tr1021;
		case 68: goto tr1022;
		case 70: goto tr1023;
		case 71: goto tr1024;
		case 76: goto tr1025;
		case 78: goto tr1026;
		case 79: goto tr1027;
		case 80: goto tr1028;
		case 82: goto tr1029;
		case 83: goto tr1030;
		case 85: goto tr1031;
		case 86: goto tr1032;
		case 97: goto tr1019;
		case 98: goto tr1020;
		case 99: goto tr1021;
		case 100: goto tr1022;
		case 102: goto tr1023;
		case 103: goto tr1024;
		case 108: goto tr1025;
		case 110: goto tr1026;
		case 111: goto tr1027;
		case 112: goto tr1028;
		case 114: goto tr1029;
		case 115: goto tr1030;
		case 117: goto tr1031;
		case 118: goto tr1032;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1017;
	goto st0;
tr821:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st125;
tr837:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st125;
tr856:
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st125;
tr872:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st125;
tr888:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st125;
tr904:
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	goto st125;
tr920:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st125;
tr936:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st125;
tr952:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st125;
tr968:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st125;
tr984:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st125;
tr1000:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st125;
tr1016:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st125;
tr1032:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st125;
tr1048:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st125;
tr1064:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st125;
tr1083:
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st125;
tr1099:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st125;
tr1115:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st125;
tr1131:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st125;
tr1147:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st125;
tr1163:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st125;
tr1179:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st125;
tr1198:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st125;
tr1214:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st125;
tr1233:
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st125;
tr1249:
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st125;
tr1265:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st125;
tr1281:
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	goto st125;
st125:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof125;
case 125:
#line 4780 "propsparser.h"
	if ( (*( state.p)) == 101 )
		goto st126;
	goto st0;
st126:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof126;
case 126:
	if ( (*( state.p)) == 114 )
		goto st127;
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
	if ( (*( state.p)) == 105 )
		goto st129;
	goto st0;
st129:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof129;
case 129:
	if ( (*( state.p)) == 111 )
		goto st130;
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
		case 58: goto st134;
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
		case 34: goto tr209;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st132;
	goto st0;
tr209:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st133;
tr210:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st133;
tr212:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 133; goto st534;}}
	goto st133;
st133:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof133;
case 133:
#line 4863 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st550;
		case 92: goto tr212;
	}
	goto tr210;
st550:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof550;
case 550:
	switch( (*( state.p)) ) {
		case 13: goto tr1033;
		case 32: goto tr1033;
		case 35: goto tr1034;
		case 65: goto tr1035;
		case 66: goto tr1036;
		case 67: goto tr1037;
		case 68: goto tr1038;
		case 70: goto tr1039;
		case 71: goto tr1040;
		case 76: goto tr1041;
		case 78: goto tr1042;
		case 79: goto tr1043;
		case 80: goto tr1044;
		case 82: goto tr1045;
		case 83: goto tr1046;
		case 85: goto tr1047;
		case 86: goto tr1048;
		case 97: goto tr1035;
		case 98: goto tr1036;
		case 99: goto tr1037;
		case 100: goto tr1038;
		case 102: goto tr1039;
		case 103: goto tr1040;
		case 108: goto tr1041;
		case 110: goto tr1042;
		case 111: goto tr1043;
		case 112: goto tr1044;
		case 114: goto tr1045;
		case 115: goto tr1046;
		case 117: goto tr1047;
		case 118: goto tr1048;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1033;
	goto st0;
st134:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof134;
case 134:
	switch( (*( state.p)) ) {
		case 13: goto st132;
		case 32: goto st132;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st132;
	goto st0;
st135:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof135;
case 135:
	switch( (*( state.p)) ) {
		case 13: goto st123;
		case 32: goto st123;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st123;
	goto st0;
st136:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof136;
case 136:
	switch( (*( state.p)) ) {
		case 13: goto st118;
		case 32: goto st118;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st118;
	goto st0;
st137:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof137;
case 137:
	switch( (*( state.p)) ) {
		case 13: goto st109;
		case 32: goto st109;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st109;
	goto st0;
st138:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof138;
case 138:
	switch( (*( state.p)) ) {
		case 108: goto st139;
		case 113: goto st147;
	}
	goto st0;
st139:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof139;
case 139:
	if ( (*( state.p)) == 101 )
		goto st140;
	goto st0;
st140:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof140;
case 140:
	if ( (*( state.p)) == 97 )
		goto st141;
	goto st0;
st141:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof141;
case 141:
	if ( (*( state.p)) == 115 )
		goto st142;
	goto st0;
st142:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof142;
case 142:
	if ( (*( state.p)) == 101 )
		goto st143;
	goto st0;
st143:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof143;
case 143:
	switch( (*( state.p)) ) {
		case 13: goto st144;
		case 32: goto st144;
		case 58: goto st146;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st144;
	goto st0;
st144:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof144;
case 144:
	switch( (*( state.p)) ) {
		case 13: goto st144;
		case 32: goto st144;
		case 34: goto tr221;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st144;
	goto st0;
tr221:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st145;
tr222:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st145;
tr224:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 145; goto st534;}}
	goto st145;
st145:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof145;
case 145:
#line 5034 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st551;
		case 92: goto tr224;
	}
	goto tr222;
st551:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof551;
case 551:
	switch( (*( state.p)) ) {
		case 13: goto tr1049;
		case 32: goto tr1049;
		case 35: goto tr1050;
		case 65: goto tr1051;
		case 66: goto tr1052;
		case 67: goto tr1053;
		case 68: goto tr1054;
		case 70: goto tr1055;
		case 71: goto tr1056;
		case 76: goto tr1057;
		case 78: goto tr1058;
		case 79: goto tr1059;
		case 80: goto tr1060;
		case 82: goto tr1061;
		case 83: goto tr1062;
		case 85: goto tr1063;
		case 86: goto tr1064;
		case 97: goto tr1051;
		case 98: goto tr1052;
		case 99: goto tr1053;
		case 100: goto tr1054;
		case 102: goto tr1055;
		case 103: goto tr1056;
		case 108: goto tr1057;
		case 110: goto tr1058;
		case 111: goto tr1059;
		case 112: goto tr1060;
		case 114: goto tr1061;
		case 115: goto tr1062;
		case 117: goto tr1063;
		case 118: goto tr1064;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1049;
	goto st0;
st146:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof146;
case 146:
	switch( (*( state.p)) ) {
		case 13: goto st144;
		case 32: goto st144;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st144;
	goto st0;
st147:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof147;
case 147:
	if ( (*( state.p)) == 117 )
		goto st148;
	goto st0;
st148:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof148;
case 148:
	if ( (*( state.p)) == 105 )
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
	if ( (*( state.p)) == 101 )
		goto st151;
	goto st0;
st151:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof151;
case 151:
	if ( (*( state.p)) == 115 )
		goto st152;
	goto st0;
st152:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof152;
case 152:
	switch( (*( state.p)) ) {
		case 13: goto tr230;
		case 32: goto tr230;
		case 58: goto st220;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr230;
	goto st0;
tr230:
#line 201 "propsparser.rl"
	{ deps = rpmprops_t::deps_t(); }
	goto st153;
st153:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof153;
case 153:
#line 5146 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr230;
		case 32: goto tr230;
		case 34: goto tr232;
		case 97: goto st165;
		case 99: goto st173;
		case 105: goto st179;
		case 112: goto st185;
		case 114: goto st208;
		case 118: goto st214;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr230;
	goto st0;
tr232:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st154;
tr239:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st154;
tr241:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 154; goto st534;}}
	goto st154;
st154:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof154;
case 154:
#line 5181 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st155;
		case 92: goto tr241;
	}
	goto tr239;
st155:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof155;
case 155:
	switch( (*( state.p)) ) {
		case 13: goto tr242;
		case 32: goto tr242;
		case 60: goto tr243;
		case 61: goto tr244;
		case 62: goto tr245;
		case 97: goto tr246;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr242;
	goto st0;
tr242:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st552;
tr277:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st552;
st552:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof552;
case 552:
#line 5214 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr1065;
		case 32: goto tr1065;
		case 35: goto tr1066;
		case 60: goto st156;
		case 61: goto st160;
		case 62: goto st161;
		case 65: goto tr1070;
		case 66: goto tr1071;
		case 67: goto tr1072;
		case 68: goto tr1073;
		case 70: goto tr1074;
		case 71: goto tr1075;
		case 76: goto tr1076;
		case 78: goto tr1077;
		case 79: goto tr1078;
		case 80: goto tr1079;
		case 82: goto tr1080;
		case 83: goto tr1081;
		case 85: goto tr1082;
		case 86: goto tr1083;
		case 97: goto tr1070;
		case 98: goto tr1071;
		case 99: goto tr1072;
		case 100: goto tr1073;
		case 102: goto tr1074;
		case 103: goto tr1075;
		case 108: goto tr1076;
		case 110: goto tr1077;
		case 111: goto tr1078;
		case 112: goto tr1079;
		case 114: goto tr1080;
		case 115: goto tr1081;
		case 117: goto tr1082;
		case 118: goto tr1083;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1065;
	goto st0;
tr243:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st156;
tr278:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st156;
st156:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof156;
case 156:
#line 5266 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr247;
		case 32: goto tr247;
		case 34: goto tr248;
		case 61: goto st159;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr247;
	goto st0;
tr247:
#line 182 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
	goto st157;
tr255:
#line 184 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
	goto st157;
tr257:
#line 181 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
	goto st157;
tr259:
#line 183 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
	goto st157;
tr262:
#line 185 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
	goto st157;
st157:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof157;
case 157:
#line 5300 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st157;
		case 32: goto st157;
		case 34: goto tr251;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st157;
	goto st0;
tr251:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st158;
tr252:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st158;
tr254:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 158; goto st534;}}
	goto st158;
tr248:
#line 182 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st158;
tr256:
#line 184 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st158;
tr258:
#line 181 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st158;
tr260:
#line 183 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st158;
tr263:
#line 185 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st158;
st158:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof158;
case 158:
#line 5369 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st553;
		case 92: goto tr254;
	}
	goto tr252;
st553:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof553;
case 553:
	switch( (*( state.p)) ) {
		case 13: goto tr1084;
		case 32: goto tr1084;
		case 35: goto tr1085;
		case 65: goto tr1086;
		case 66: goto tr1087;
		case 67: goto tr1088;
		case 68: goto tr1089;
		case 70: goto tr1090;
		case 71: goto tr1091;
		case 76: goto tr1092;
		case 78: goto tr1093;
		case 79: goto tr1094;
		case 80: goto tr1095;
		case 82: goto tr1096;
		case 83: goto tr1097;
		case 85: goto tr1098;
		case 86: goto tr1099;
		case 97: goto tr1086;
		case 98: goto tr1087;
		case 99: goto tr1088;
		case 100: goto tr1089;
		case 102: goto tr1090;
		case 103: goto tr1091;
		case 108: goto tr1092;
		case 110: goto tr1093;
		case 111: goto tr1094;
		case 112: goto tr1095;
		case 114: goto tr1096;
		case 115: goto tr1097;
		case 117: goto tr1098;
		case 118: goto tr1099;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1084;
	goto st0;
st159:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof159;
case 159:
	switch( (*( state.p)) ) {
		case 13: goto tr255;
		case 32: goto tr255;
		case 34: goto tr256;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr255;
	goto st0;
tr244:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st160;
tr279:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st160;
st160:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof160;
case 160:
#line 5439 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr257;
		case 32: goto tr257;
		case 34: goto tr258;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr257;
	goto st0;
tr245:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st161;
tr280:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st161;
st161:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof161;
case 161:
#line 5460 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr259;
		case 32: goto tr259;
		case 34: goto tr260;
		case 61: goto st162;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr259;
	goto st0;
st162:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof162;
case 162:
	switch( (*( state.p)) ) {
		case 13: goto tr262;
		case 32: goto tr262;
		case 34: goto tr263;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr262;
	goto st0;
tr246:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st163;
tr281:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st163;
st163:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof163;
case 163:
#line 5494 "propsparser.h"
	if ( (*( state.p)) == 110 )
		goto st164;
	goto st0;
st164:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof164;
case 164:
	if ( (*( state.p)) == 121 )
		goto st554;
	goto st0;
st554:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof554;
case 554:
	switch( (*( state.p)) ) {
		case 13: goto tr1065;
		case 32: goto tr1065;
		case 35: goto tr1066;
		case 65: goto tr1070;
		case 66: goto tr1071;
		case 67: goto tr1072;
		case 68: goto tr1073;
		case 70: goto tr1074;
		case 71: goto tr1075;
		case 76: goto tr1076;
		case 78: goto tr1077;
		case 79: goto tr1078;
		case 80: goto tr1079;
		case 82: goto tr1080;
		case 83: goto tr1081;
		case 85: goto tr1082;
		case 86: goto tr1083;
		case 97: goto tr1070;
		case 98: goto tr1071;
		case 99: goto tr1072;
		case 100: goto tr1073;
		case 102: goto tr1074;
		case 103: goto tr1075;
		case 108: goto tr1076;
		case 110: goto tr1077;
		case 111: goto tr1078;
		case 112: goto tr1079;
		case 114: goto tr1080;
		case 115: goto tr1081;
		case 117: goto tr1082;
		case 118: goto tr1083;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1065;
	goto st0;
st165:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof165;
case 165:
	if ( (*( state.p)) == 117 )
		goto st166;
	goto st0;
st166:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof166;
case 166:
	if ( (*( state.p)) == 116 )
		goto st167;
	goto st0;
st167:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof167;
case 167:
	if ( (*( state.p)) == 111 )
		goto st168;
	goto st0;
st168:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof168;
case 168:
	switch( (*( state.p)) ) {
		case 13: goto tr269;
		case 32: goto tr269;
		case 44: goto tr270;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr269;
	goto st0;
tr269:
#line 168 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st169;
tr287:
#line 167 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st169;
tr294:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st169;
tr300:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st169;
tr308:
#line 166 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st169;
tr311:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st169;
tr314:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st169;
tr321:
#line 164 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st169;
tr327:
#line 165 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st169;
tr330:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st169;
tr337:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st169;
tr344:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st169;
st169:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof169;
case 169:
#line 5631 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st169;
		case 32: goto st169;
		case 34: goto tr272;
		case 44: goto st172;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st169;
	goto st0;
tr272:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st170;
tr274:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st170;
tr276:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 170; goto st534;}}
	goto st170;
st170:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof170;
case 170:
#line 5661 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st171;
		case 92: goto tr276;
	}
	goto tr274;
st171:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof171;
case 171:
	switch( (*( state.p)) ) {
		case 13: goto tr277;
		case 32: goto tr277;
		case 60: goto tr278;
		case 61: goto tr279;
		case 62: goto tr280;
		case 97: goto tr281;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr277;
	goto st0;
tr270:
#line 168 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st172;
tr288:
#line 167 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st172;
tr295:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st172;
tr301:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st172;
tr309:
#line 166 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st172;
tr312:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st172;
tr315:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st172;
tr322:
#line 164 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st172;
tr328:
#line 165 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st172;
tr331:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st172;
tr338:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st172;
tr345:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st172;
st172:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof172;
case 172:
#line 5735 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st172;
		case 32: goto st172;
		case 97: goto st165;
		case 99: goto st173;
		case 105: goto st179;
		case 112: goto st185;
		case 114: goto st208;
		case 118: goto st214;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st172;
	goto st0;
st173:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof173;
case 173:
	if ( (*( state.p)) == 111 )
		goto st174;
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
	if ( (*( state.p)) == 102 )
		goto st176;
	goto st0;
st176:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof176;
case 176:
	if ( (*( state.p)) == 105 )
		goto st177;
	goto st0;
st177:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof177;
case 177:
	if ( (*( state.p)) == 103 )
		goto st178;
	goto st0;
st178:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof178;
case 178:
	switch( (*( state.p)) ) {
		case 13: goto tr287;
		case 32: goto tr287;
		case 44: goto tr288;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr287;
	goto st0;
st179:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof179;
case 179:
	if ( (*( state.p)) == 110 )
		goto st180;
	goto st0;
st180:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof180;
case 180:
	if ( (*( state.p)) == 116 )
		goto st181;
	goto st0;
st181:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof181;
case 181:
	if ( (*( state.p)) == 101 )
		goto st182;
	goto st0;
st182:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof182;
case 182:
	if ( (*( state.p)) == 114 )
		goto st183;
	goto st0;
st183:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof183;
case 183:
	if ( (*( state.p)) == 112 )
		goto st184;
	goto st0;
st184:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof184;
case 184:
	switch( (*( state.p)) ) {
		case 13: goto tr294;
		case 32: goto tr294;
		case 44: goto tr295;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr294;
	goto st0;
st185:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof185;
case 185:
	switch( (*( state.p)) ) {
		case 111: goto st186;
		case 114: goto st196;
	}
	goto st0;
st186:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof186;
case 186:
	if ( (*( state.p)) == 115 )
		goto st187;
	goto st0;
st187:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof187;
case 187:
	if ( (*( state.p)) == 116 )
		goto st188;
	goto st0;
st188:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof188;
case 188:
	switch( (*( state.p)) ) {
		case 13: goto tr300;
		case 32: goto tr300;
		case 44: goto tr301;
		case 116: goto st189;
		case 117: goto st194;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr300;
	goto st0;
st189:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof189;
case 189:
	if ( (*( state.p)) == 114 )
		goto st190;
	goto st0;
st190:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof190;
case 190:
	if ( (*( state.p)) == 97 )
		goto st191;
	goto st0;
st191:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof191;
case 191:
	if ( (*( state.p)) == 110 )
		goto st192;
	goto st0;
st192:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof192;
case 192:
	if ( (*( state.p)) == 115 )
		goto st193;
	goto st0;
st193:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof193;
case 193:
	switch( (*( state.p)) ) {
		case 13: goto tr308;
		case 32: goto tr308;
		case 44: goto tr309;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr308;
	goto st0;
st194:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof194;
case 194:
	if ( (*( state.p)) == 110 )
		goto st195;
	goto st0;
st195:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof195;
case 195:
	switch( (*( state.p)) ) {
		case 13: goto tr311;
		case 32: goto tr311;
		case 44: goto tr312;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr311;
	goto st0;
st196:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof196;
case 196:
	if ( (*( state.p)) == 101 )
		goto st197;
	goto st0;
st197:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof197;
case 197:
	switch( (*( state.p)) ) {
		case 13: goto tr314;
		case 32: goto tr314;
		case 44: goto tr315;
		case 114: goto st198;
		case 116: goto st201;
		case 117: goto st206;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr314;
	goto st0;
st198:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof198;
case 198:
	if ( (*( state.p)) == 101 )
		goto st199;
	goto st0;
st199:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof199;
case 199:
	if ( (*( state.p)) == 113 )
		goto st200;
	goto st0;
st200:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof200;
case 200:
	switch( (*( state.p)) ) {
		case 13: goto tr321;
		case 32: goto tr321;
		case 44: goto tr322;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr321;
	goto st0;
st201:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof201;
case 201:
	if ( (*( state.p)) == 114 )
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
	if ( (*( state.p)) == 110 )
		goto st204;
	goto st0;
st204:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof204;
case 204:
	if ( (*( state.p)) == 115 )
		goto st205;
	goto st0;
st205:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof205;
case 205:
	switch( (*( state.p)) ) {
		case 13: goto tr327;
		case 32: goto tr327;
		case 44: goto tr328;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr327;
	goto st0;
st206:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof206;
case 206:
	if ( (*( state.p)) == 110 )
		goto st207;
	goto st0;
st207:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof207;
case 207:
	switch( (*( state.p)) ) {
		case 13: goto tr330;
		case 32: goto tr330;
		case 44: goto tr331;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr330;
	goto st0;
st208:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof208;
case 208:
	if ( (*( state.p)) == 112 )
		goto st209;
	goto st0;
st209:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof209;
case 209:
	if ( (*( state.p)) == 109 )
		goto st210;
	goto st0;
st210:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof210;
case 210:
	if ( (*( state.p)) == 108 )
		goto st211;
	goto st0;
st211:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof211;
case 211:
	if ( (*( state.p)) == 105 )
		goto st212;
	goto st0;
st212:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof212;
case 212:
	if ( (*( state.p)) == 98 )
		goto st213;
	goto st0;
st213:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof213;
case 213:
	switch( (*( state.p)) ) {
		case 13: goto tr337;
		case 32: goto tr337;
		case 44: goto tr338;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr337;
	goto st0;
st214:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof214;
case 214:
	if ( (*( state.p)) == 101 )
		goto st215;
	goto st0;
st215:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof215;
case 215:
	if ( (*( state.p)) == 114 )
		goto st216;
	goto st0;
st216:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof216;
case 216:
	if ( (*( state.p)) == 105 )
		goto st217;
	goto st0;
st217:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof217;
case 217:
	if ( (*( state.p)) == 102 )
		goto st218;
	goto st0;
st218:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof218;
case 218:
	if ( (*( state.p)) == 121 )
		goto st219;
	goto st0;
st219:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof219;
case 219:
	switch( (*( state.p)) ) {
		case 13: goto tr344;
		case 32: goto tr344;
		case 44: goto tr345;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr344;
	goto st0;
st220:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof220;
case 220:
	switch( (*( state.p)) ) {
		case 13: goto tr230;
		case 32: goto tr230;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr230;
	goto st0;
st221:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof221;
case 221:
	switch( (*( state.p)) ) {
		case 13: goto st97;
		case 32: goto st97;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st97;
	goto st0;
st222:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof222;
case 222:
	if ( (*( state.p)) == 97 )
		goto st223;
	goto st0;
st223:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof223;
case 223:
	if ( (*( state.p)) == 116 )
		goto st224;
	goto st0;
st224:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof224;
case 224:
	if ( (*( state.p)) == 102 )
		goto st225;
	goto st0;
st225:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof225;
case 225:
	if ( (*( state.p)) == 111 )
		goto st226;
	goto st0;
st226:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof226;
case 226:
	if ( (*( state.p)) == 114 )
		goto st227;
	goto st0;
st227:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof227;
case 227:
	if ( (*( state.p)) == 109 )
		goto st228;
	goto st0;
st228:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof228;
case 228:
	switch( (*( state.p)) ) {
		case 13: goto st229;
		case 32: goto st229;
		case 58: goto st231;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st229;
	goto st0;
st229:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof229;
case 229:
	switch( (*( state.p)) ) {
		case 13: goto st229;
		case 32: goto st229;
		case 34: goto tr354;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st229;
	goto st0;
tr354:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st230;
tr355:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st230;
tr357:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 230; goto st534;}}
	goto st230;
st230:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof230;
case 230:
#line 6248 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st555;
		case 92: goto tr357;
	}
	goto tr355;
st555:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof555;
case 555:
	switch( (*( state.p)) ) {
		case 13: goto tr1100;
		case 32: goto tr1100;
		case 35: goto tr1101;
		case 65: goto tr1102;
		case 66: goto tr1103;
		case 67: goto tr1104;
		case 68: goto tr1105;
		case 70: goto tr1106;
		case 71: goto tr1107;
		case 76: goto tr1108;
		case 78: goto tr1109;
		case 79: goto tr1110;
		case 80: goto tr1111;
		case 82: goto tr1112;
		case 83: goto tr1113;
		case 85: goto tr1114;
		case 86: goto tr1115;
		case 97: goto tr1102;
		case 98: goto tr1103;
		case 99: goto tr1104;
		case 100: goto tr1105;
		case 102: goto tr1106;
		case 103: goto tr1107;
		case 108: goto tr1108;
		case 110: goto tr1109;
		case 111: goto tr1110;
		case 112: goto tr1111;
		case 114: goto tr1112;
		case 115: goto tr1113;
		case 117: goto tr1114;
		case 118: goto tr1115;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1100;
	goto st0;
st231:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof231;
case 231:
	switch( (*( state.p)) ) {
		case 13: goto st229;
		case 32: goto st229;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st229;
	goto st0;
st232:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof232;
case 232:
	if ( (*( state.p)) == 115 )
		goto st233;
	goto st0;
st233:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof233;
case 233:
	if ( (*( state.p)) == 116 )
		goto st234;
	goto st0;
st234:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof234;
case 234:
	switch( (*( state.p)) ) {
		case 73: goto st235;
		case 85: goto st249;
		case 105: goto st235;
		case 117: goto st249;
	}
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
	switch( (*( state.p)) ) {
		case 13: goto st237;
		case 32: goto st237;
		case 58: goto st248;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st237;
	goto st0;
st237:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof237;
case 237:
	switch( (*( state.p)) ) {
		case 13: goto st237;
		case 32: goto st237;
		case 34: goto tr365;
		case 115: goto st239;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st237;
	goto st0;
tr365:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st238;
tr367:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st238;
tr369:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 238; goto st534;}}
	goto st238;
st238:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof238;
case 238:
#line 6382 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st556;
		case 92: goto tr369;
	}
	goto tr367;
st556:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof556;
case 556:
	switch( (*( state.p)) ) {
		case 13: goto tr1116;
		case 32: goto tr1116;
		case 35: goto tr1117;
		case 65: goto tr1118;
		case 66: goto tr1119;
		case 67: goto tr1120;
		case 68: goto tr1121;
		case 70: goto tr1122;
		case 71: goto tr1123;
		case 76: goto tr1124;
		case 78: goto tr1125;
		case 79: goto tr1126;
		case 80: goto tr1127;
		case 82: goto tr1128;
		case 83: goto tr1129;
		case 85: goto tr1130;
		case 86: goto tr1131;
		case 97: goto tr1118;
		case 98: goto tr1119;
		case 99: goto tr1120;
		case 100: goto tr1121;
		case 102: goto tr1122;
		case 103: goto tr1123;
		case 108: goto tr1124;
		case 110: goto tr1125;
		case 111: goto tr1126;
		case 112: goto tr1127;
		case 114: goto tr1128;
		case 115: goto tr1129;
		case 117: goto tr1130;
		case 118: goto tr1131;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1116;
	goto st0;
st239:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof239;
case 239:
	if ( (*( state.p)) == 104 )
		goto st240;
	goto st0;
st240:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof240;
case 240:
	if ( (*( state.p)) == 101 )
		goto st241;
	goto st0;
st241:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof241;
case 241:
	if ( (*( state.p)) == 108 )
		goto st242;
	goto st0;
st242:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof242;
case 242:
	if ( (*( state.p)) == 108 )
		goto st243;
	goto st0;
st243:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof243;
case 243:
	switch( (*( state.p)) ) {
		case 13: goto st244;
		case 32: goto st244;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st244;
	goto st0;
st244:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof244;
case 244:
	switch( (*( state.p)) ) {
		case 13: goto st244;
		case 32: goto st244;
		case 34: goto tr375;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st244;
	goto st0;
tr375:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st245;
tr376:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st245;
tr378:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 245; goto st534;}}
	goto st245;
st245:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof245;
case 245:
#line 6499 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st246;
		case 92: goto tr378;
	}
	goto tr376;
st246:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof246;
case 246:
	switch( (*( state.p)) ) {
		case 13: goto tr379;
		case 32: goto tr379;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr379;
	goto st0;
tr379:
#line 138 "propsparser.rl"
	{ props.postin.prog = state.match; }
	goto st247;
st247:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof247;
case 247:
#line 6524 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st247;
		case 32: goto st247;
		case 34: goto tr365;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st247;
	goto st0;
st248:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof248;
case 248:
	switch( (*( state.p)) ) {
		case 13: goto st237;
		case 32: goto st237;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st237;
	goto st0;
st249:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof249;
case 249:
	if ( (*( state.p)) == 110 )
		goto st250;
	goto st0;
st250:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof250;
case 250:
	switch( (*( state.p)) ) {
		case 13: goto st251;
		case 32: goto st251;
		case 58: goto st262;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st251;
	goto st0;
st251:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof251;
case 251:
	switch( (*( state.p)) ) {
		case 13: goto st251;
		case 32: goto st251;
		case 34: goto tr384;
		case 115: goto st253;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st251;
	goto st0;
tr384:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st252;
tr386:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st252;
tr388:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 252; goto st534;}}
	goto st252;
st252:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof252;
case 252:
#line 6596 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st557;
		case 92: goto tr388;
	}
	goto tr386;
st557:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof557;
case 557:
	switch( (*( state.p)) ) {
		case 13: goto tr1132;
		case 32: goto tr1132;
		case 35: goto tr1133;
		case 65: goto tr1134;
		case 66: goto tr1135;
		case 67: goto tr1136;
		case 68: goto tr1137;
		case 70: goto tr1138;
		case 71: goto tr1139;
		case 76: goto tr1140;
		case 78: goto tr1141;
		case 79: goto tr1142;
		case 80: goto tr1143;
		case 82: goto tr1144;
		case 83: goto tr1145;
		case 85: goto tr1146;
		case 86: goto tr1147;
		case 97: goto tr1134;
		case 98: goto tr1135;
		case 99: goto tr1136;
		case 100: goto tr1137;
		case 102: goto tr1138;
		case 103: goto tr1139;
		case 108: goto tr1140;
		case 110: goto tr1141;
		case 111: goto tr1142;
		case 112: goto tr1143;
		case 114: goto tr1144;
		case 115: goto tr1145;
		case 117: goto tr1146;
		case 118: goto tr1147;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1132;
	goto st0;
st253:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof253;
case 253:
	if ( (*( state.p)) == 104 )
		goto st254;
	goto st0;
st254:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof254;
case 254:
	if ( (*( state.p)) == 101 )
		goto st255;
	goto st0;
st255:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof255;
case 255:
	if ( (*( state.p)) == 108 )
		goto st256;
	goto st0;
st256:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof256;
case 256:
	if ( (*( state.p)) == 108 )
		goto st257;
	goto st0;
st257:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof257;
case 257:
	switch( (*( state.p)) ) {
		case 13: goto st258;
		case 32: goto st258;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st258;
	goto st0;
st258:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof258;
case 258:
	switch( (*( state.p)) ) {
		case 13: goto st258;
		case 32: goto st258;
		case 34: goto tr394;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st258;
	goto st0;
tr394:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st259;
tr395:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st259;
tr397:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 259; goto st534;}}
	goto st259;
st259:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof259;
case 259:
#line 6713 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st260;
		case 92: goto tr397;
	}
	goto tr395;
st260:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof260;
case 260:
	switch( (*( state.p)) ) {
		case 13: goto tr398;
		case 32: goto tr398;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr398;
	goto st0;
tr398:
#line 146 "propsparser.rl"
	{ props.postun.prog = state.match; }
	goto st261;
st261:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof261;
case 261:
#line 6738 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st261;
		case 32: goto st261;
		case 34: goto tr384;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st261;
	goto st0;
st262:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof262;
case 262:
	switch( (*( state.p)) ) {
		case 13: goto st251;
		case 32: goto st251;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st251;
	goto st0;
st263:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof263;
case 263:
	switch( (*( state.p)) ) {
		case 101: goto st264;
		case 111: goto st293;
	}
	goto st0;
st264:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof264;
case 264:
	switch( (*( state.p)) ) {
		case 73: goto st265;
		case 85: goto st279;
		case 105: goto st265;
		case 117: goto st279;
	}
	goto st0;
st265:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof265;
case 265:
	if ( (*( state.p)) == 110 )
		goto st266;
	goto st0;
st266:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof266;
case 266:
	switch( (*( state.p)) ) {
		case 13: goto st267;
		case 32: goto st267;
		case 58: goto st278;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st267;
	goto st0;
st267:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof267;
case 267:
	switch( (*( state.p)) ) {
		case 13: goto st267;
		case 32: goto st267;
		case 34: goto tr407;
		case 115: goto st269;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st267;
	goto st0;
tr407:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st268;
tr409:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st268;
tr411:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 268; goto st534;}}
	goto st268;
st268:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof268;
case 268:
#line 6830 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st558;
		case 92: goto tr411;
	}
	goto tr409;
st558:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof558;
case 558:
	switch( (*( state.p)) ) {
		case 13: goto tr1148;
		case 32: goto tr1148;
		case 35: goto tr1149;
		case 65: goto tr1150;
		case 66: goto tr1151;
		case 67: goto tr1152;
		case 68: goto tr1153;
		case 70: goto tr1154;
		case 71: goto tr1155;
		case 76: goto tr1156;
		case 78: goto tr1157;
		case 79: goto tr1158;
		case 80: goto tr1159;
		case 82: goto tr1160;
		case 83: goto tr1161;
		case 85: goto tr1162;
		case 86: goto tr1163;
		case 97: goto tr1150;
		case 98: goto tr1151;
		case 99: goto tr1152;
		case 100: goto tr1153;
		case 102: goto tr1154;
		case 103: goto tr1155;
		case 108: goto tr1156;
		case 110: goto tr1157;
		case 111: goto tr1158;
		case 112: goto tr1159;
		case 114: goto tr1160;
		case 115: goto tr1161;
		case 117: goto tr1162;
		case 118: goto tr1163;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1148;
	goto st0;
st269:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof269;
case 269:
	if ( (*( state.p)) == 104 )
		goto st270;
	goto st0;
st270:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof270;
case 270:
	if ( (*( state.p)) == 101 )
		goto st271;
	goto st0;
st271:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof271;
case 271:
	if ( (*( state.p)) == 108 )
		goto st272;
	goto st0;
st272:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof272;
case 272:
	if ( (*( state.p)) == 108 )
		goto st273;
	goto st0;
st273:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof273;
case 273:
	switch( (*( state.p)) ) {
		case 13: goto st274;
		case 32: goto st274;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st274;
	goto st0;
st274:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof274;
case 274:
	switch( (*( state.p)) ) {
		case 13: goto st274;
		case 32: goto st274;
		case 34: goto tr417;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st274;
	goto st0;
tr417:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st275;
tr418:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st275;
tr420:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 275; goto st534;}}
	goto st275;
st275:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof275;
case 275:
#line 6947 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st276;
		case 92: goto tr420;
	}
	goto tr418;
st276:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof276;
case 276:
	switch( (*( state.p)) ) {
		case 13: goto tr421;
		case 32: goto tr421;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr421;
	goto st0;
tr421:
#line 134 "propsparser.rl"
	{ props.prein.prog = state.match; }
	goto st277;
st277:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof277;
case 277:
#line 6972 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st277;
		case 32: goto st277;
		case 34: goto tr407;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st277;
	goto st0;
st278:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof278;
case 278:
	switch( (*( state.p)) ) {
		case 13: goto st267;
		case 32: goto st267;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st267;
	goto st0;
st279:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof279;
case 279:
	if ( (*( state.p)) == 110 )
		goto st280;
	goto st0;
st280:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof280;
case 280:
	switch( (*( state.p)) ) {
		case 13: goto st281;
		case 32: goto st281;
		case 58: goto st292;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st281;
	goto st0;
st281:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof281;
case 281:
	switch( (*( state.p)) ) {
		case 13: goto st281;
		case 32: goto st281;
		case 34: goto tr426;
		case 115: goto st283;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st281;
	goto st0;
tr426:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st282;
tr428:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st282;
tr430:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 282; goto st534;}}
	goto st282;
st282:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof282;
case 282:
#line 7044 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st559;
		case 92: goto tr430;
	}
	goto tr428;
st559:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof559;
case 559:
	switch( (*( state.p)) ) {
		case 13: goto tr1164;
		case 32: goto tr1164;
		case 35: goto tr1165;
		case 65: goto tr1166;
		case 66: goto tr1167;
		case 67: goto tr1168;
		case 68: goto tr1169;
		case 70: goto tr1170;
		case 71: goto tr1171;
		case 76: goto tr1172;
		case 78: goto tr1173;
		case 79: goto tr1174;
		case 80: goto tr1175;
		case 82: goto tr1176;
		case 83: goto tr1177;
		case 85: goto tr1178;
		case 86: goto tr1179;
		case 97: goto tr1166;
		case 98: goto tr1167;
		case 99: goto tr1168;
		case 100: goto tr1169;
		case 102: goto tr1170;
		case 103: goto tr1171;
		case 108: goto tr1172;
		case 110: goto tr1173;
		case 111: goto tr1174;
		case 112: goto tr1175;
		case 114: goto tr1176;
		case 115: goto tr1177;
		case 117: goto tr1178;
		case 118: goto tr1179;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1164;
	goto st0;
st283:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof283;
case 283:
	if ( (*( state.p)) == 104 )
		goto st284;
	goto st0;
st284:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof284;
case 284:
	if ( (*( state.p)) == 101 )
		goto st285;
	goto st0;
st285:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof285;
case 285:
	if ( (*( state.p)) == 108 )
		goto st286;
	goto st0;
st286:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof286;
case 286:
	if ( (*( state.p)) == 108 )
		goto st287;
	goto st0;
st287:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof287;
case 287:
	switch( (*( state.p)) ) {
		case 13: goto st288;
		case 32: goto st288;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st288;
	goto st0;
st288:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof288;
case 288:
	switch( (*( state.p)) ) {
		case 13: goto st288;
		case 32: goto st288;
		case 34: goto tr436;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st288;
	goto st0;
tr436:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st289;
tr437:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st289;
tr439:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 289; goto st534;}}
	goto st289;
st289:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof289;
case 289:
#line 7161 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st290;
		case 92: goto tr439;
	}
	goto tr437;
st290:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof290;
case 290:
	switch( (*( state.p)) ) {
		case 13: goto tr440;
		case 32: goto tr440;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr440;
	goto st0;
tr440:
#line 142 "propsparser.rl"
	{ props.preun.prog = state.match; }
	goto st291;
st291:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof291;
case 291:
#line 7186 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st291;
		case 32: goto st291;
		case 34: goto tr426;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st291;
	goto st0;
st292:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof292;
case 292:
	switch( (*( state.p)) ) {
		case 13: goto st281;
		case 32: goto st281;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st281;
	goto st0;
st293:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof293;
case 293:
	if ( (*( state.p)) == 118 )
		goto st294;
	goto st0;
st294:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof294;
case 294:
	if ( (*( state.p)) == 105 )
		goto st295;
	goto st0;
st295:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof295;
case 295:
	if ( (*( state.p)) == 100 )
		goto st296;
	goto st0;
st296:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof296;
case 296:
	if ( (*( state.p)) == 101 )
		goto st297;
	goto st0;
st297:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof297;
case 297:
	if ( (*( state.p)) == 115 )
		goto st298;
	goto st0;
st298:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof298;
case 298:
	switch( (*( state.p)) ) {
		case 13: goto tr447;
		case 32: goto tr447;
		case 58: goto st366;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr447;
	goto st0;
tr447:
#line 196 "propsparser.rl"
	{ deps = rpmprops_t::deps_t(); }
	goto st299;
st299:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof299;
case 299:
#line 7261 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr447;
		case 32: goto tr447;
		case 34: goto tr449;
		case 97: goto st311;
		case 99: goto st319;
		case 105: goto st325;
		case 112: goto st331;
		case 114: goto st354;
		case 118: goto st360;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr447;
	goto st0;
tr449:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st300;
tr456:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st300;
tr458:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 300; goto st534;}}
	goto st300;
st300:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof300;
case 300:
#line 7296 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st301;
		case 92: goto tr458;
	}
	goto tr456;
st301:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof301;
case 301:
	switch( (*( state.p)) ) {
		case 13: goto tr459;
		case 32: goto tr459;
		case 60: goto tr460;
		case 61: goto tr461;
		case 62: goto tr462;
		case 97: goto tr463;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr459;
	goto st0;
tr459:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st560;
tr494:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st560;
st560:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof560;
case 560:
#line 7329 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr1180;
		case 32: goto tr1180;
		case 35: goto tr1181;
		case 60: goto st302;
		case 61: goto st306;
		case 62: goto st307;
		case 65: goto tr1185;
		case 66: goto tr1186;
		case 67: goto tr1187;
		case 68: goto tr1188;
		case 70: goto tr1189;
		case 71: goto tr1190;
		case 76: goto tr1191;
		case 78: goto tr1192;
		case 79: goto tr1193;
		case 80: goto tr1194;
		case 82: goto tr1195;
		case 83: goto tr1196;
		case 85: goto tr1197;
		case 86: goto tr1198;
		case 97: goto tr1185;
		case 98: goto tr1186;
		case 99: goto tr1187;
		case 100: goto tr1188;
		case 102: goto tr1189;
		case 103: goto tr1190;
		case 108: goto tr1191;
		case 110: goto tr1192;
		case 111: goto tr1193;
		case 112: goto tr1194;
		case 114: goto tr1195;
		case 115: goto tr1196;
		case 117: goto tr1197;
		case 118: goto tr1198;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1180;
	goto st0;
tr460:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st302;
tr495:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st302;
st302:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof302;
case 302:
#line 7381 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr464;
		case 32: goto tr464;
		case 34: goto tr465;
		case 61: goto st305;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr464;
	goto st0;
tr464:
#line 182 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
	goto st303;
tr472:
#line 184 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
	goto st303;
tr474:
#line 181 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
	goto st303;
tr476:
#line 183 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
	goto st303;
tr479:
#line 185 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
	goto st303;
st303:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof303;
case 303:
#line 7415 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st303;
		case 32: goto st303;
		case 34: goto tr468;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st303;
	goto st0;
tr468:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st304;
tr469:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st304;
tr471:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 304; goto st534;}}
	goto st304;
tr465:
#line 182 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st304;
tr473:
#line 184 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st304;
tr475:
#line 181 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st304;
tr477:
#line 183 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st304;
tr480:
#line 185 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st304;
st304:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof304;
case 304:
#line 7484 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st561;
		case 92: goto tr471;
	}
	goto tr469;
st561:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof561;
case 561:
	switch( (*( state.p)) ) {
		case 13: goto tr1199;
		case 32: goto tr1199;
		case 35: goto tr1200;
		case 65: goto tr1201;
		case 66: goto tr1202;
		case 67: goto tr1203;
		case 68: goto tr1204;
		case 70: goto tr1205;
		case 71: goto tr1206;
		case 76: goto tr1207;
		case 78: goto tr1208;
		case 79: goto tr1209;
		case 80: goto tr1210;
		case 82: goto tr1211;
		case 83: goto tr1212;
		case 85: goto tr1213;
		case 86: goto tr1214;
		case 97: goto tr1201;
		case 98: goto tr1202;
		case 99: goto tr1203;
		case 100: goto tr1204;
		case 102: goto tr1205;
		case 103: goto tr1206;
		case 108: goto tr1207;
		case 110: goto tr1208;
		case 111: goto tr1209;
		case 112: goto tr1210;
		case 114: goto tr1211;
		case 115: goto tr1212;
		case 117: goto tr1213;
		case 118: goto tr1214;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1199;
	goto st0;
st305:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof305;
case 305:
	switch( (*( state.p)) ) {
		case 13: goto tr472;
		case 32: goto tr472;
		case 34: goto tr473;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr472;
	goto st0;
tr461:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st306;
tr496:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st306;
st306:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof306;
case 306:
#line 7554 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr474;
		case 32: goto tr474;
		case 34: goto tr475;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr474;
	goto st0;
tr462:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st307;
tr497:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st307;
st307:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof307;
case 307:
#line 7575 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr476;
		case 32: goto tr476;
		case 34: goto tr477;
		case 61: goto st308;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr476;
	goto st0;
st308:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof308;
case 308:
	switch( (*( state.p)) ) {
		case 13: goto tr479;
		case 32: goto tr479;
		case 34: goto tr480;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr479;
	goto st0;
tr463:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st309;
tr498:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st309;
st309:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof309;
case 309:
#line 7609 "propsparser.h"
	if ( (*( state.p)) == 110 )
		goto st310;
	goto st0;
st310:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof310;
case 310:
	if ( (*( state.p)) == 121 )
		goto st562;
	goto st0;
st562:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof562;
case 562:
	switch( (*( state.p)) ) {
		case 13: goto tr1180;
		case 32: goto tr1180;
		case 35: goto tr1181;
		case 65: goto tr1185;
		case 66: goto tr1186;
		case 67: goto tr1187;
		case 68: goto tr1188;
		case 70: goto tr1189;
		case 71: goto tr1190;
		case 76: goto tr1191;
		case 78: goto tr1192;
		case 79: goto tr1193;
		case 80: goto tr1194;
		case 82: goto tr1195;
		case 83: goto tr1196;
		case 85: goto tr1197;
		case 86: goto tr1198;
		case 97: goto tr1185;
		case 98: goto tr1186;
		case 99: goto tr1187;
		case 100: goto tr1188;
		case 102: goto tr1189;
		case 103: goto tr1190;
		case 108: goto tr1191;
		case 110: goto tr1192;
		case 111: goto tr1193;
		case 112: goto tr1194;
		case 114: goto tr1195;
		case 115: goto tr1196;
		case 117: goto tr1197;
		case 118: goto tr1198;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1180;
	goto st0;
st311:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof311;
case 311:
	if ( (*( state.p)) == 117 )
		goto st312;
	goto st0;
st312:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof312;
case 312:
	if ( (*( state.p)) == 116 )
		goto st313;
	goto st0;
st313:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof313;
case 313:
	if ( (*( state.p)) == 111 )
		goto st314;
	goto st0;
st314:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof314;
case 314:
	switch( (*( state.p)) ) {
		case 13: goto tr486;
		case 32: goto tr486;
		case 44: goto tr487;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr486;
	goto st0;
tr486:
#line 168 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st315;
tr504:
#line 167 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st315;
tr511:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st315;
tr517:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st315;
tr525:
#line 166 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st315;
tr528:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st315;
tr531:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st315;
tr538:
#line 164 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st315;
tr544:
#line 165 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st315;
tr547:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st315;
tr554:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st315;
tr561:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st315;
st315:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof315;
case 315:
#line 7746 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st315;
		case 32: goto st315;
		case 34: goto tr489;
		case 44: goto st318;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st315;
	goto st0;
tr489:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st316;
tr491:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st316;
tr493:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 316; goto st534;}}
	goto st316;
st316:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof316;
case 316:
#line 7776 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st317;
		case 92: goto tr493;
	}
	goto tr491;
st317:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof317;
case 317:
	switch( (*( state.p)) ) {
		case 13: goto tr494;
		case 32: goto tr494;
		case 60: goto tr495;
		case 61: goto tr496;
		case 62: goto tr497;
		case 97: goto tr498;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr494;
	goto st0;
tr487:
#line 168 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st318;
tr505:
#line 167 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st318;
tr512:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st318;
tr518:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st318;
tr526:
#line 166 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st318;
tr529:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st318;
tr532:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st318;
tr539:
#line 164 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st318;
tr545:
#line 165 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st318;
tr548:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st318;
tr555:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st318;
tr562:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st318;
st318:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof318;
case 318:
#line 7850 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st318;
		case 32: goto st318;
		case 97: goto st311;
		case 99: goto st319;
		case 105: goto st325;
		case 112: goto st331;
		case 114: goto st354;
		case 118: goto st360;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st318;
	goto st0;
st319:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof319;
case 319:
	if ( (*( state.p)) == 111 )
		goto st320;
	goto st0;
st320:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof320;
case 320:
	if ( (*( state.p)) == 110 )
		goto st321;
	goto st0;
st321:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof321;
case 321:
	if ( (*( state.p)) == 102 )
		goto st322;
	goto st0;
st322:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof322;
case 322:
	if ( (*( state.p)) == 105 )
		goto st323;
	goto st0;
st323:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof323;
case 323:
	if ( (*( state.p)) == 103 )
		goto st324;
	goto st0;
st324:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof324;
case 324:
	switch( (*( state.p)) ) {
		case 13: goto tr504;
		case 32: goto tr504;
		case 44: goto tr505;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr504;
	goto st0;
st325:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof325;
case 325:
	if ( (*( state.p)) == 110 )
		goto st326;
	goto st0;
st326:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof326;
case 326:
	if ( (*( state.p)) == 116 )
		goto st327;
	goto st0;
st327:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof327;
case 327:
	if ( (*( state.p)) == 101 )
		goto st328;
	goto st0;
st328:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof328;
case 328:
	if ( (*( state.p)) == 114 )
		goto st329;
	goto st0;
st329:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof329;
case 329:
	if ( (*( state.p)) == 112 )
		goto st330;
	goto st0;
st330:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof330;
case 330:
	switch( (*( state.p)) ) {
		case 13: goto tr511;
		case 32: goto tr511;
		case 44: goto tr512;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr511;
	goto st0;
st331:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof331;
case 331:
	switch( (*( state.p)) ) {
		case 111: goto st332;
		case 114: goto st342;
	}
	goto st0;
st332:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof332;
case 332:
	if ( (*( state.p)) == 115 )
		goto st333;
	goto st0;
st333:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof333;
case 333:
	if ( (*( state.p)) == 116 )
		goto st334;
	goto st0;
st334:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof334;
case 334:
	switch( (*( state.p)) ) {
		case 13: goto tr517;
		case 32: goto tr517;
		case 44: goto tr518;
		case 116: goto st335;
		case 117: goto st340;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr517;
	goto st0;
st335:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof335;
case 335:
	if ( (*( state.p)) == 114 )
		goto st336;
	goto st0;
st336:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof336;
case 336:
	if ( (*( state.p)) == 97 )
		goto st337;
	goto st0;
st337:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof337;
case 337:
	if ( (*( state.p)) == 110 )
		goto st338;
	goto st0;
st338:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof338;
case 338:
	if ( (*( state.p)) == 115 )
		goto st339;
	goto st0;
st339:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof339;
case 339:
	switch( (*( state.p)) ) {
		case 13: goto tr525;
		case 32: goto tr525;
		case 44: goto tr526;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr525;
	goto st0;
st340:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof340;
case 340:
	if ( (*( state.p)) == 110 )
		goto st341;
	goto st0;
st341:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof341;
case 341:
	switch( (*( state.p)) ) {
		case 13: goto tr528;
		case 32: goto tr528;
		case 44: goto tr529;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr528;
	goto st0;
st342:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof342;
case 342:
	if ( (*( state.p)) == 101 )
		goto st343;
	goto st0;
st343:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof343;
case 343:
	switch( (*( state.p)) ) {
		case 13: goto tr531;
		case 32: goto tr531;
		case 44: goto tr532;
		case 114: goto st344;
		case 116: goto st347;
		case 117: goto st352;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr531;
	goto st0;
st344:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof344;
case 344:
	if ( (*( state.p)) == 101 )
		goto st345;
	goto st0;
st345:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof345;
case 345:
	if ( (*( state.p)) == 113 )
		goto st346;
	goto st0;
st346:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof346;
case 346:
	switch( (*( state.p)) ) {
		case 13: goto tr538;
		case 32: goto tr538;
		case 44: goto tr539;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr538;
	goto st0;
st347:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof347;
case 347:
	if ( (*( state.p)) == 114 )
		goto st348;
	goto st0;
st348:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof348;
case 348:
	if ( (*( state.p)) == 97 )
		goto st349;
	goto st0;
st349:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof349;
case 349:
	if ( (*( state.p)) == 110 )
		goto st350;
	goto st0;
st350:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof350;
case 350:
	if ( (*( state.p)) == 115 )
		goto st351;
	goto st0;
st351:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof351;
case 351:
	switch( (*( state.p)) ) {
		case 13: goto tr544;
		case 32: goto tr544;
		case 44: goto tr545;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr544;
	goto st0;
st352:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof352;
case 352:
	if ( (*( state.p)) == 110 )
		goto st353;
	goto st0;
st353:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof353;
case 353:
	switch( (*( state.p)) ) {
		case 13: goto tr547;
		case 32: goto tr547;
		case 44: goto tr548;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr547;
	goto st0;
st354:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof354;
case 354:
	if ( (*( state.p)) == 112 )
		goto st355;
	goto st0;
st355:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof355;
case 355:
	if ( (*( state.p)) == 109 )
		goto st356;
	goto st0;
st356:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof356;
case 356:
	if ( (*( state.p)) == 108 )
		goto st357;
	goto st0;
st357:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof357;
case 357:
	if ( (*( state.p)) == 105 )
		goto st358;
	goto st0;
st358:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof358;
case 358:
	if ( (*( state.p)) == 98 )
		goto st359;
	goto st0;
st359:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof359;
case 359:
	switch( (*( state.p)) ) {
		case 13: goto tr554;
		case 32: goto tr554;
		case 44: goto tr555;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr554;
	goto st0;
st360:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof360;
case 360:
	if ( (*( state.p)) == 101 )
		goto st361;
	goto st0;
st361:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof361;
case 361:
	if ( (*( state.p)) == 114 )
		goto st362;
	goto st0;
st362:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof362;
case 362:
	if ( (*( state.p)) == 105 )
		goto st363;
	goto st0;
st363:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof363;
case 363:
	if ( (*( state.p)) == 102 )
		goto st364;
	goto st0;
st364:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof364;
case 364:
	if ( (*( state.p)) == 121 )
		goto st365;
	goto st0;
st365:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof365;
case 365:
	switch( (*( state.p)) ) {
		case 13: goto tr561;
		case 32: goto tr561;
		case 44: goto tr562;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr561;
	goto st0;
st366:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof366;
case 366:
	switch( (*( state.p)) ) {
		case 13: goto tr447;
		case 32: goto tr447;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr447;
	goto st0;
st367:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof367;
case 367:
	switch( (*( state.p)) ) {
		case 13: goto st87;
		case 32: goto st87;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st87;
	goto st0;
st368:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof368;
case 368:
	if ( (*( state.p)) == 115 )
		goto st369;
	goto st0;
st369:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof369;
case 369:
	if ( (*( state.p)) == 111 )
		goto st370;
	goto st0;
st370:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof370;
case 370:
	if ( (*( state.p)) == 108 )
		goto st371;
	goto st0;
st371:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof371;
case 371:
	if ( (*( state.p)) == 101 )
		goto st372;
	goto st0;
st372:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof372;
case 372:
	if ( (*( state.p)) == 116 )
		goto st373;
	goto st0;
st373:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof373;
case 373:
	if ( (*( state.p)) == 101 )
		goto st374;
	goto st0;
st374:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof374;
case 374:
	if ( (*( state.p)) == 115 )
		goto st375;
	goto st0;
st375:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof375;
case 375:
	switch( (*( state.p)) ) {
		case 13: goto tr570;
		case 32: goto tr570;
		case 58: goto st443;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr570;
	goto st0;
tr570:
#line 211 "propsparser.rl"
	{ deps = rpmprops_t::deps_t(); }
	goto st376;
st376:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof376;
case 376:
#line 8346 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr570;
		case 32: goto tr570;
		case 34: goto tr572;
		case 97: goto st388;
		case 99: goto st396;
		case 105: goto st402;
		case 112: goto st408;
		case 114: goto st431;
		case 118: goto st437;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr570;
	goto st0;
tr572:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st377;
tr579:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st377;
tr581:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 377; goto st534;}}
	goto st377;
st377:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof377;
case 377:
#line 8381 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st378;
		case 92: goto tr581;
	}
	goto tr579;
st378:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof378;
case 378:
	switch( (*( state.p)) ) {
		case 13: goto tr582;
		case 32: goto tr582;
		case 60: goto tr583;
		case 61: goto tr584;
		case 62: goto tr585;
		case 97: goto tr586;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr582;
	goto st0;
tr582:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st563;
tr617:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st563;
st563:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof563;
case 563:
#line 8414 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr1215;
		case 32: goto tr1215;
		case 35: goto tr1216;
		case 60: goto st379;
		case 61: goto st383;
		case 62: goto st384;
		case 65: goto tr1220;
		case 66: goto tr1221;
		case 67: goto tr1222;
		case 68: goto tr1223;
		case 70: goto tr1224;
		case 71: goto tr1225;
		case 76: goto tr1226;
		case 78: goto tr1227;
		case 79: goto tr1228;
		case 80: goto tr1229;
		case 82: goto tr1230;
		case 83: goto tr1231;
		case 85: goto tr1232;
		case 86: goto tr1233;
		case 97: goto tr1220;
		case 98: goto tr1221;
		case 99: goto tr1222;
		case 100: goto tr1223;
		case 102: goto tr1224;
		case 103: goto tr1225;
		case 108: goto tr1226;
		case 110: goto tr1227;
		case 111: goto tr1228;
		case 112: goto tr1229;
		case 114: goto tr1230;
		case 115: goto tr1231;
		case 117: goto tr1232;
		case 118: goto tr1233;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1215;
	goto st0;
tr583:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st379;
tr618:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st379;
st379:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof379;
case 379:
#line 8466 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr587;
		case 32: goto tr587;
		case 34: goto tr588;
		case 61: goto st382;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr587;
	goto st0;
tr587:
#line 182 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
	goto st380;
tr595:
#line 184 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
	goto st380;
tr597:
#line 181 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
	goto st380;
tr599:
#line 183 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
	goto st380;
tr602:
#line 185 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
	goto st380;
st380:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof380;
case 380:
#line 8500 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st380;
		case 32: goto st380;
		case 34: goto tr591;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st380;
	goto st0;
tr591:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st381;
tr592:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st381;
tr594:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 381; goto st534;}}
	goto st381;
tr588:
#line 182 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st381;
tr596:
#line 184 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st381;
tr598:
#line 181 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st381;
tr600:
#line 183 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st381;
tr603:
#line 185 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st381;
st381:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof381;
case 381:
#line 8569 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st564;
		case 92: goto tr594;
	}
	goto tr592;
st564:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof564;
case 564:
	switch( (*( state.p)) ) {
		case 13: goto tr1234;
		case 32: goto tr1234;
		case 35: goto tr1235;
		case 65: goto tr1236;
		case 66: goto tr1237;
		case 67: goto tr1238;
		case 68: goto tr1239;
		case 70: goto tr1240;
		case 71: goto tr1241;
		case 76: goto tr1242;
		case 78: goto tr1243;
		case 79: goto tr1244;
		case 80: goto tr1245;
		case 82: goto tr1246;
		case 83: goto tr1247;
		case 85: goto tr1248;
		case 86: goto tr1249;
		case 97: goto tr1236;
		case 98: goto tr1237;
		case 99: goto tr1238;
		case 100: goto tr1239;
		case 102: goto tr1240;
		case 103: goto tr1241;
		case 108: goto tr1242;
		case 110: goto tr1243;
		case 111: goto tr1244;
		case 112: goto tr1245;
		case 114: goto tr1246;
		case 115: goto tr1247;
		case 117: goto tr1248;
		case 118: goto tr1249;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1234;
	goto st0;
st382:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof382;
case 382:
	switch( (*( state.p)) ) {
		case 13: goto tr595;
		case 32: goto tr595;
		case 34: goto tr596;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr595;
	goto st0;
tr584:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st383;
tr619:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st383;
st383:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof383;
case 383:
#line 8639 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr597;
		case 32: goto tr597;
		case 34: goto tr598;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr597;
	goto st0;
tr585:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st384;
tr620:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st384;
st384:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof384;
case 384:
#line 8660 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr599;
		case 32: goto tr599;
		case 34: goto tr600;
		case 61: goto st385;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr599;
	goto st0;
st385:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof385;
case 385:
	switch( (*( state.p)) ) {
		case 13: goto tr602;
		case 32: goto tr602;
		case 34: goto tr603;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr602;
	goto st0;
tr586:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st386;
tr621:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st386;
st386:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof386;
case 386:
#line 8694 "propsparser.h"
	if ( (*( state.p)) == 110 )
		goto st387;
	goto st0;
st387:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof387;
case 387:
	if ( (*( state.p)) == 121 )
		goto st565;
	goto st0;
st565:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof565;
case 565:
	switch( (*( state.p)) ) {
		case 13: goto tr1215;
		case 32: goto tr1215;
		case 35: goto tr1216;
		case 65: goto tr1220;
		case 66: goto tr1221;
		case 67: goto tr1222;
		case 68: goto tr1223;
		case 70: goto tr1224;
		case 71: goto tr1225;
		case 76: goto tr1226;
		case 78: goto tr1227;
		case 79: goto tr1228;
		case 80: goto tr1229;
		case 82: goto tr1230;
		case 83: goto tr1231;
		case 85: goto tr1232;
		case 86: goto tr1233;
		case 97: goto tr1220;
		case 98: goto tr1221;
		case 99: goto tr1222;
		case 100: goto tr1223;
		case 102: goto tr1224;
		case 103: goto tr1225;
		case 108: goto tr1226;
		case 110: goto tr1227;
		case 111: goto tr1228;
		case 112: goto tr1229;
		case 114: goto tr1230;
		case 115: goto tr1231;
		case 117: goto tr1232;
		case 118: goto tr1233;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1215;
	goto st0;
st388:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof388;
case 388:
	if ( (*( state.p)) == 117 )
		goto st389;
	goto st0;
st389:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof389;
case 389:
	if ( (*( state.p)) == 116 )
		goto st390;
	goto st0;
st390:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof390;
case 390:
	if ( (*( state.p)) == 111 )
		goto st391;
	goto st0;
st391:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof391;
case 391:
	switch( (*( state.p)) ) {
		case 13: goto tr609;
		case 32: goto tr609;
		case 44: goto tr610;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr609;
	goto st0;
tr609:
#line 168 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st392;
tr627:
#line 167 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st392;
tr634:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st392;
tr640:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st392;
tr648:
#line 166 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st392;
tr651:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st392;
tr654:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st392;
tr661:
#line 164 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st392;
tr667:
#line 165 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st392;
tr670:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st392;
tr677:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st392;
tr684:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st392;
st392:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof392;
case 392:
#line 8831 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st392;
		case 32: goto st392;
		case 34: goto tr612;
		case 44: goto st395;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st392;
	goto st0;
tr612:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st393;
tr614:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st393;
tr616:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 393; goto st534;}}
	goto st393;
st393:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof393;
case 393:
#line 8861 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st394;
		case 92: goto tr616;
	}
	goto tr614;
st394:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof394;
case 394:
	switch( (*( state.p)) ) {
		case 13: goto tr617;
		case 32: goto tr617;
		case 60: goto tr618;
		case 61: goto tr619;
		case 62: goto tr620;
		case 97: goto tr621;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr617;
	goto st0;
tr610:
#line 168 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st395;
tr628:
#line 167 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st395;
tr635:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st395;
tr641:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st395;
tr649:
#line 166 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st395;
tr652:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st395;
tr655:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st395;
tr662:
#line 164 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st395;
tr668:
#line 165 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st395;
tr671:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st395;
tr678:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st395;
tr685:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st395;
st395:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof395;
case 395:
#line 8935 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st395;
		case 32: goto st395;
		case 97: goto st388;
		case 99: goto st396;
		case 105: goto st402;
		case 112: goto st408;
		case 114: goto st431;
		case 118: goto st437;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st395;
	goto st0;
st396:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof396;
case 396:
	if ( (*( state.p)) == 111 )
		goto st397;
	goto st0;
st397:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof397;
case 397:
	if ( (*( state.p)) == 110 )
		goto st398;
	goto st0;
st398:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof398;
case 398:
	if ( (*( state.p)) == 102 )
		goto st399;
	goto st0;
st399:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof399;
case 399:
	if ( (*( state.p)) == 105 )
		goto st400;
	goto st0;
st400:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof400;
case 400:
	if ( (*( state.p)) == 103 )
		goto st401;
	goto st0;
st401:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof401;
case 401:
	switch( (*( state.p)) ) {
		case 13: goto tr627;
		case 32: goto tr627;
		case 44: goto tr628;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr627;
	goto st0;
st402:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof402;
case 402:
	if ( (*( state.p)) == 110 )
		goto st403;
	goto st0;
st403:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof403;
case 403:
	if ( (*( state.p)) == 116 )
		goto st404;
	goto st0;
st404:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof404;
case 404:
	if ( (*( state.p)) == 101 )
		goto st405;
	goto st0;
st405:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof405;
case 405:
	if ( (*( state.p)) == 114 )
		goto st406;
	goto st0;
st406:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof406;
case 406:
	if ( (*( state.p)) == 112 )
		goto st407;
	goto st0;
st407:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof407;
case 407:
	switch( (*( state.p)) ) {
		case 13: goto tr634;
		case 32: goto tr634;
		case 44: goto tr635;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr634;
	goto st0;
st408:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof408;
case 408:
	switch( (*( state.p)) ) {
		case 111: goto st409;
		case 114: goto st419;
	}
	goto st0;
st409:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof409;
case 409:
	if ( (*( state.p)) == 115 )
		goto st410;
	goto st0;
st410:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof410;
case 410:
	if ( (*( state.p)) == 116 )
		goto st411;
	goto st0;
st411:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof411;
case 411:
	switch( (*( state.p)) ) {
		case 13: goto tr640;
		case 32: goto tr640;
		case 44: goto tr641;
		case 116: goto st412;
		case 117: goto st417;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr640;
	goto st0;
st412:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof412;
case 412:
	if ( (*( state.p)) == 114 )
		goto st413;
	goto st0;
st413:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof413;
case 413:
	if ( (*( state.p)) == 97 )
		goto st414;
	goto st0;
st414:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof414;
case 414:
	if ( (*( state.p)) == 110 )
		goto st415;
	goto st0;
st415:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof415;
case 415:
	if ( (*( state.p)) == 115 )
		goto st416;
	goto st0;
st416:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof416;
case 416:
	switch( (*( state.p)) ) {
		case 13: goto tr648;
		case 32: goto tr648;
		case 44: goto tr649;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr648;
	goto st0;
st417:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof417;
case 417:
	if ( (*( state.p)) == 110 )
		goto st418;
	goto st0;
st418:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof418;
case 418:
	switch( (*( state.p)) ) {
		case 13: goto tr651;
		case 32: goto tr651;
		case 44: goto tr652;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr651;
	goto st0;
st419:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof419;
case 419:
	if ( (*( state.p)) == 101 )
		goto st420;
	goto st0;
st420:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof420;
case 420:
	switch( (*( state.p)) ) {
		case 13: goto tr654;
		case 32: goto tr654;
		case 44: goto tr655;
		case 114: goto st421;
		case 116: goto st424;
		case 117: goto st429;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr654;
	goto st0;
st421:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof421;
case 421:
	if ( (*( state.p)) == 101 )
		goto st422;
	goto st0;
st422:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof422;
case 422:
	if ( (*( state.p)) == 113 )
		goto st423;
	goto st0;
st423:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof423;
case 423:
	switch( (*( state.p)) ) {
		case 13: goto tr661;
		case 32: goto tr661;
		case 44: goto tr662;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr661;
	goto st0;
st424:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof424;
case 424:
	if ( (*( state.p)) == 114 )
		goto st425;
	goto st0;
st425:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof425;
case 425:
	if ( (*( state.p)) == 97 )
		goto st426;
	goto st0;
st426:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof426;
case 426:
	if ( (*( state.p)) == 110 )
		goto st427;
	goto st0;
st427:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof427;
case 427:
	if ( (*( state.p)) == 115 )
		goto st428;
	goto st0;
st428:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof428;
case 428:
	switch( (*( state.p)) ) {
		case 13: goto tr667;
		case 32: goto tr667;
		case 44: goto tr668;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr667;
	goto st0;
st429:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof429;
case 429:
	if ( (*( state.p)) == 110 )
		goto st430;
	goto st0;
st430:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof430;
case 430:
	switch( (*( state.p)) ) {
		case 13: goto tr670;
		case 32: goto tr670;
		case 44: goto tr671;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr670;
	goto st0;
st431:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof431;
case 431:
	if ( (*( state.p)) == 112 )
		goto st432;
	goto st0;
st432:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof432;
case 432:
	if ( (*( state.p)) == 109 )
		goto st433;
	goto st0;
st433:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof433;
case 433:
	if ( (*( state.p)) == 108 )
		goto st434;
	goto st0;
st434:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof434;
case 434:
	if ( (*( state.p)) == 105 )
		goto st435;
	goto st0;
st435:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof435;
case 435:
	if ( (*( state.p)) == 98 )
		goto st436;
	goto st0;
st436:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof436;
case 436:
	switch( (*( state.p)) ) {
		case 13: goto tr677;
		case 32: goto tr677;
		case 44: goto tr678;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr677;
	goto st0;
st437:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof437;
case 437:
	if ( (*( state.p)) == 101 )
		goto st438;
	goto st0;
st438:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof438;
case 438:
	if ( (*( state.p)) == 114 )
		goto st439;
	goto st0;
st439:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof439;
case 439:
	if ( (*( state.p)) == 105 )
		goto st440;
	goto st0;
st440:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof440;
case 440:
	if ( (*( state.p)) == 102 )
		goto st441;
	goto st0;
st441:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof441;
case 441:
	if ( (*( state.p)) == 121 )
		goto st442;
	goto st0;
st442:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof442;
case 442:
	switch( (*( state.p)) ) {
		case 13: goto tr684;
		case 32: goto tr684;
		case 44: goto tr685;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr684;
	goto st0;
st443:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof443;
case 443:
	switch( (*( state.p)) ) {
		case 13: goto tr570;
		case 32: goto tr570;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr570;
	goto st0;
st444:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof444;
case 444:
	if ( (*( state.p)) == 116 )
		goto st445;
	goto st0;
st445:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof445;
case 445:
	switch( (*( state.p)) ) {
		case 70: goto st446;
		case 102: goto st446;
	}
	goto st0;
st446:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof446;
case 446:
	if ( (*( state.p)) == 108 )
		goto st447;
	goto st0;
st447:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof447;
case 447:
	if ( (*( state.p)) == 97 )
		goto st448;
	goto st0;
st448:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof448;
case 448:
	if ( (*( state.p)) == 103 )
		goto st449;
	goto st0;
st449:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof449;
case 449:
	if ( (*( state.p)) == 115 )
		goto st450;
	goto st0;
st450:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof450;
case 450:
	switch( (*( state.p)) ) {
		case 13: goto st451;
		case 32: goto st451;
		case 58: goto st453;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st451;
	goto st0;
st451:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof451;
case 451:
	switch( (*( state.p)) ) {
		case 13: goto st451;
		case 32: goto st451;
		case 34: goto tr694;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st451;
	goto st0;
tr694:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st452;
tr695:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st452;
tr697:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 452; goto st534;}}
	goto st452;
st452:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof452;
case 452:
#line 9439 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st566;
		case 92: goto tr697;
	}
	goto tr695;
st566:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof566;
case 566:
	switch( (*( state.p)) ) {
		case 13: goto tr1250;
		case 32: goto tr1250;
		case 35: goto tr1251;
		case 65: goto tr1252;
		case 66: goto tr1253;
		case 67: goto tr1254;
		case 68: goto tr1255;
		case 70: goto tr1256;
		case 71: goto tr1257;
		case 76: goto tr1258;
		case 78: goto tr1259;
		case 79: goto tr1260;
		case 80: goto tr1261;
		case 82: goto tr1262;
		case 83: goto tr1263;
		case 85: goto tr1264;
		case 86: goto tr1265;
		case 97: goto tr1252;
		case 98: goto tr1253;
		case 99: goto tr1254;
		case 100: goto tr1255;
		case 102: goto tr1256;
		case 103: goto tr1257;
		case 108: goto tr1258;
		case 110: goto tr1259;
		case 111: goto tr1260;
		case 112: goto tr1261;
		case 114: goto tr1262;
		case 115: goto tr1263;
		case 117: goto tr1264;
		case 118: goto tr1265;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1250;
	goto st0;
st453:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof453;
case 453:
	switch( (*( state.p)) ) {
		case 13: goto st451;
		case 32: goto st451;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st451;
	goto st0;
st454:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof454;
case 454:
	switch( (*( state.p)) ) {
		case 13: goto st83;
		case 32: goto st83;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st83;
	goto st0;
st455:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof455;
case 455:
	switch( (*( state.p)) ) {
		case 13: goto st77;
		case 32: goto st77;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st77;
	goto st0;
st456:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof456;
case 456:
	switch( (*( state.p)) ) {
		case 13: goto st68;
		case 32: goto st68;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st68;
	goto st0;
st457:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof457;
case 457:
	switch( (*( state.p)) ) {
		case 13: goto st61;
		case 32: goto st61;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st61;
	goto st0;
st458:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof458;
case 458:
	if ( (*( state.p)) == 115 )
		goto st459;
	goto st0;
st459:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof459;
case 459:
	if ( (*( state.p)) == 101 )
		goto st460;
	goto st0;
st460:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof460;
case 460:
	if ( (*( state.p)) == 114 )
		goto st461;
	goto st0;
st461:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof461;
case 461:
	switch( (*( state.p)) ) {
		case 78: goto st462;
		case 110: goto st462;
	}
	goto st0;
st462:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof462;
case 462:
	if ( (*( state.p)) == 97 )
		goto st463;
	goto st0;
st463:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof463;
case 463:
	if ( (*( state.p)) == 109 )
		goto st464;
	goto st0;
st464:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof464;
case 464:
	if ( (*( state.p)) == 101 )
		goto st465;
	goto st0;
st465:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof465;
case 465:
	switch( (*( state.p)) ) {
		case 13: goto st466;
		case 32: goto st466;
		case 58: goto st468;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st466;
	goto st0;
st466:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof466;
case 466:
	switch( (*( state.p)) ) {
		case 13: goto st466;
		case 32: goto st466;
		case 34: goto tr707;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st466;
	goto st0;
tr707:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st467;
tr708:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st467;
tr710:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 467; goto st534;}}
	goto st467;
st467:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof467;
case 467:
#line 9635 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st567;
		case 92: goto tr710;
	}
	goto tr708;
st567:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof567;
case 567:
	switch( (*( state.p)) ) {
		case 13: goto tr1266;
		case 32: goto tr1266;
		case 35: goto tr1267;
		case 65: goto tr1268;
		case 66: goto tr1269;
		case 67: goto tr1270;
		case 68: goto tr1271;
		case 70: goto tr1272;
		case 71: goto tr1273;
		case 76: goto tr1274;
		case 78: goto tr1275;
		case 79: goto tr1276;
		case 80: goto tr1277;
		case 82: goto tr1278;
		case 83: goto tr1279;
		case 85: goto tr1280;
		case 86: goto tr1281;
		case 97: goto tr1268;
		case 98: goto tr1269;
		case 99: goto tr1270;
		case 100: goto tr1271;
		case 102: goto tr1272;
		case 103: goto tr1273;
		case 108: goto tr1274;
		case 110: goto tr1275;
		case 111: goto tr1276;
		case 112: goto tr1277;
		case 114: goto tr1278;
		case 115: goto tr1279;
		case 117: goto tr1280;
		case 118: goto tr1281;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1266;
	goto st0;
st468:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof468;
case 468:
	switch( (*( state.p)) ) {
		case 13: goto st466;
		case 32: goto st466;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st466;
	goto st0;
st469:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof469;
case 469:
	switch( (*( state.p)) ) {
		case 13: goto st45;
		case 32: goto st45;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st45;
	goto st0;
st470:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof470;
case 470:
	switch( (*( state.p)) ) {
		case 13: goto tr711;
		case 32: goto tr711;
		case 34: goto tr712;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr711;
	goto st0;
tr62:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st471;
tr735:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st471;
st471:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof471;
case 471:
#line 9727 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr713;
		case 32: goto tr713;
		case 34: goto tr714;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr713;
	goto st0;
tr63:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st472;
tr736:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st472;
st472:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof472;
case 472:
#line 9748 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr715;
		case 32: goto tr715;
		case 34: goto tr716;
		case 61: goto st473;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr715;
	goto st0;
st473:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof473;
case 473:
	switch( (*( state.p)) ) {
		case 13: goto tr718;
		case 32: goto tr718;
		case 34: goto tr719;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr718;
	goto st0;
tr64:
#line 177 "propsparser.rl"
	{ deps.name = state.match; }
	goto st474;
tr737:
#line 175 "propsparser.rl"
	{ deps.name = state.match; }
	goto st474;
st474:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof474;
case 474:
#line 9782 "propsparser.h"
	if ( (*( state.p)) == 110 )
		goto st475;
	goto st0;
st475:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof475;
case 475:
	if ( (*( state.p)) == 121 )
		goto st568;
	goto st0;
st568:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof568;
case 568:
	switch( (*( state.p)) ) {
		case 13: goto tr838;
		case 32: goto tr838;
		case 35: goto tr839;
		case 65: goto tr843;
		case 66: goto tr844;
		case 67: goto tr845;
		case 68: goto tr846;
		case 70: goto tr847;
		case 71: goto tr848;
		case 76: goto tr849;
		case 78: goto tr850;
		case 79: goto tr851;
		case 80: goto tr852;
		case 82: goto tr853;
		case 83: goto tr854;
		case 85: goto tr855;
		case 86: goto tr856;
		case 97: goto tr843;
		case 98: goto tr844;
		case 99: goto tr845;
		case 100: goto tr846;
		case 102: goto tr847;
		case 103: goto tr848;
		case 108: goto tr849;
		case 110: goto tr850;
		case 111: goto tr851;
		case 112: goto tr852;
		case 114: goto tr853;
		case 115: goto tr854;
		case 117: goto tr855;
		case 118: goto tr856;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr838;
	goto st0;
st476:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof476;
case 476:
	if ( (*( state.p)) == 117 )
		goto st477;
	goto st0;
st477:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof477;
case 477:
	if ( (*( state.p)) == 116 )
		goto st478;
	goto st0;
st478:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof478;
case 478:
	if ( (*( state.p)) == 111 )
		goto st479;
	goto st0;
st479:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof479;
case 479:
	switch( (*( state.p)) ) {
		case 13: goto tr725;
		case 32: goto tr725;
		case 44: goto tr726;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr725;
	goto st0;
tr725:
#line 168 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st480;
tr743:
#line 167 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st480;
tr750:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st480;
tr756:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st480;
tr764:
#line 166 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st480;
tr767:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st480;
tr770:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st480;
tr777:
#line 164 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st480;
tr783:
#line 165 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st480;
tr786:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st480;
tr793:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st480;
tr800:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st480;
st480:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof480;
case 480:
#line 9919 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st480;
		case 32: goto st480;
		case 34: goto tr728;
		case 44: goto st483;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st480;
	goto st0;
tr728:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st481;
tr730:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st481;
tr732:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 481; goto st534;}}
	goto st481;
st481:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof481;
case 481:
#line 9949 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st482;
		case 92: goto tr732;
	}
	goto tr730;
st482:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof482;
case 482:
	switch( (*( state.p)) ) {
		case 13: goto tr733;
		case 32: goto tr733;
		case 60: goto tr734;
		case 61: goto tr735;
		case 62: goto tr736;
		case 97: goto tr737;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr733;
	goto st0;
tr726:
#line 168 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st483;
tr744:
#line 167 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st483;
tr751:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st483;
tr757:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st483;
tr765:
#line 166 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st483;
tr768:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st483;
tr771:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st483;
tr778:
#line 164 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st483;
tr784:
#line 165 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st483;
tr787:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st483;
tr794:
#line 163 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st483;
tr801:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st483;
st483:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof483;
case 483:
#line 10023 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st483;
		case 32: goto st483;
		case 97: goto st476;
		case 99: goto st484;
		case 105: goto st490;
		case 112: goto st496;
		case 114: goto st519;
		case 118: goto st525;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st483;
	goto st0;
st484:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof484;
case 484:
	if ( (*( state.p)) == 111 )
		goto st485;
	goto st0;
st485:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof485;
case 485:
	if ( (*( state.p)) == 110 )
		goto st486;
	goto st0;
st486:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof486;
case 486:
	if ( (*( state.p)) == 102 )
		goto st487;
	goto st0;
st487:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof487;
case 487:
	if ( (*( state.p)) == 105 )
		goto st488;
	goto st0;
st488:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof488;
case 488:
	if ( (*( state.p)) == 103 )
		goto st489;
	goto st0;
st489:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof489;
case 489:
	switch( (*( state.p)) ) {
		case 13: goto tr743;
		case 32: goto tr743;
		case 44: goto tr744;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr743;
	goto st0;
st490:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof490;
case 490:
	if ( (*( state.p)) == 110 )
		goto st491;
	goto st0;
st491:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof491;
case 491:
	if ( (*( state.p)) == 116 )
		goto st492;
	goto st0;
st492:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof492;
case 492:
	if ( (*( state.p)) == 101 )
		goto st493;
	goto st0;
st493:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof493;
case 493:
	if ( (*( state.p)) == 114 )
		goto st494;
	goto st0;
st494:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof494;
case 494:
	if ( (*( state.p)) == 112 )
		goto st495;
	goto st0;
st495:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof495;
case 495:
	switch( (*( state.p)) ) {
		case 13: goto tr750;
		case 32: goto tr750;
		case 44: goto tr751;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr750;
	goto st0;
st496:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof496;
case 496:
	switch( (*( state.p)) ) {
		case 111: goto st497;
		case 114: goto st507;
	}
	goto st0;
st497:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof497;
case 497:
	if ( (*( state.p)) == 115 )
		goto st498;
	goto st0;
st498:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof498;
case 498:
	if ( (*( state.p)) == 116 )
		goto st499;
	goto st0;
st499:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof499;
case 499:
	switch( (*( state.p)) ) {
		case 13: goto tr756;
		case 32: goto tr756;
		case 44: goto tr757;
		case 116: goto st500;
		case 117: goto st505;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr756;
	goto st0;
st500:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof500;
case 500:
	if ( (*( state.p)) == 114 )
		goto st501;
	goto st0;
st501:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof501;
case 501:
	if ( (*( state.p)) == 97 )
		goto st502;
	goto st0;
st502:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof502;
case 502:
	if ( (*( state.p)) == 110 )
		goto st503;
	goto st0;
st503:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof503;
case 503:
	if ( (*( state.p)) == 115 )
		goto st504;
	goto st0;
st504:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof504;
case 504:
	switch( (*( state.p)) ) {
		case 13: goto tr764;
		case 32: goto tr764;
		case 44: goto tr765;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr764;
	goto st0;
st505:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof505;
case 505:
	if ( (*( state.p)) == 110 )
		goto st506;
	goto st0;
st506:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof506;
case 506:
	switch( (*( state.p)) ) {
		case 13: goto tr767;
		case 32: goto tr767;
		case 44: goto tr768;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr767;
	goto st0;
st507:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof507;
case 507:
	if ( (*( state.p)) == 101 )
		goto st508;
	goto st0;
st508:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof508;
case 508:
	switch( (*( state.p)) ) {
		case 13: goto tr770;
		case 32: goto tr770;
		case 44: goto tr771;
		case 114: goto st509;
		case 116: goto st512;
		case 117: goto st517;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr770;
	goto st0;
st509:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof509;
case 509:
	if ( (*( state.p)) == 101 )
		goto st510;
	goto st0;
st510:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof510;
case 510:
	if ( (*( state.p)) == 113 )
		goto st511;
	goto st0;
st511:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof511;
case 511:
	switch( (*( state.p)) ) {
		case 13: goto tr777;
		case 32: goto tr777;
		case 44: goto tr778;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr777;
	goto st0;
st512:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof512;
case 512:
	if ( (*( state.p)) == 114 )
		goto st513;
	goto st0;
st513:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof513;
case 513:
	if ( (*( state.p)) == 97 )
		goto st514;
	goto st0;
st514:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof514;
case 514:
	if ( (*( state.p)) == 110 )
		goto st515;
	goto st0;
st515:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof515;
case 515:
	if ( (*( state.p)) == 115 )
		goto st516;
	goto st0;
st516:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof516;
case 516:
	switch( (*( state.p)) ) {
		case 13: goto tr783;
		case 32: goto tr783;
		case 44: goto tr784;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr783;
	goto st0;
st517:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof517;
case 517:
	if ( (*( state.p)) == 110 )
		goto st518;
	goto st0;
st518:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof518;
case 518:
	switch( (*( state.p)) ) {
		case 13: goto tr786;
		case 32: goto tr786;
		case 44: goto tr787;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr786;
	goto st0;
st519:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof519;
case 519:
	if ( (*( state.p)) == 112 )
		goto st520;
	goto st0;
st520:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof520;
case 520:
	if ( (*( state.p)) == 109 )
		goto st521;
	goto st0;
st521:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof521;
case 521:
	if ( (*( state.p)) == 108 )
		goto st522;
	goto st0;
st522:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof522;
case 522:
	if ( (*( state.p)) == 105 )
		goto st523;
	goto st0;
st523:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof523;
case 523:
	if ( (*( state.p)) == 98 )
		goto st524;
	goto st0;
st524:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof524;
case 524:
	switch( (*( state.p)) ) {
		case 13: goto tr793;
		case 32: goto tr793;
		case 44: goto tr794;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr793;
	goto st0;
st525:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof525;
case 525:
	if ( (*( state.p)) == 101 )
		goto st526;
	goto st0;
st526:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof526;
case 526:
	if ( (*( state.p)) == 114 )
		goto st527;
	goto st0;
st527:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof527;
case 527:
	if ( (*( state.p)) == 105 )
		goto st528;
	goto st0;
st528:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof528;
case 528:
	if ( (*( state.p)) == 102 )
		goto st529;
	goto st0;
st529:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof529;
case 529:
	if ( (*( state.p)) == 121 )
		goto st530;
	goto st0;
st530:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof530;
case 530:
	switch( (*( state.p)) ) {
		case 13: goto tr800;
		case 32: goto tr800;
		case 44: goto tr801;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr800;
	goto st0;
st531:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof531;
case 531:
	switch( (*( state.p)) ) {
		case 13: goto tr48;
		case 32: goto tr48;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr48;
	goto st0;
st532:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof532;
case 532:
	switch( (*( state.p)) ) {
		case 13: goto st17;
		case 32: goto st17;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st17;
	goto st0;
st533:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof533;
case 533:
	switch( (*( state.p)) ) {
		case 13: goto st6;
		case 32: goto st6;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st6;
	goto st0;
st534:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof534;
case 534:
	switch( (*( state.p)) ) {
		case 34: goto tr802;
		case 92: goto tr803;
		case 110: goto tr804;
	}
	goto st0;
tr802:
#line 92 "propsparser.rl"
	{ state.match += '"';  { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st569;
tr803:
#line 94 "propsparser.rl"
	{ state.match += '\\'; { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st569;
tr804:
#line 93 "propsparser.rl"
	{ state.match += '\n'; { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st569;
st569:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof569;
case 569:
#line 10487 "propsparser.h"
	goto st0;
tr1283:
#line 105 "propsparser.rl"
	{ { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st570;
st570:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof570;
case 570:
#line 10497 "propsparser.h"
	if ( (*( state.p)) == 10 )
		goto tr1283;
	goto st570;
	}
	_test_eof1:  state.cs = 1; goto _test_eof; 
	_test_eof535:  state.cs = 535; goto _test_eof; 
	_test_eof2:  state.cs = 2; goto _test_eof; 
	_test_eof3:  state.cs = 3; goto _test_eof; 
	_test_eof4:  state.cs = 4; goto _test_eof; 
	_test_eof5:  state.cs = 5; goto _test_eof; 
	_test_eof6:  state.cs = 6; goto _test_eof; 
	_test_eof7:  state.cs = 7; goto _test_eof; 
	_test_eof536:  state.cs = 536; goto _test_eof; 
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
	_test_eof537:  state.cs = 537; goto _test_eof; 
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
	_test_eof538:  state.cs = 538; goto _test_eof; 
	_test_eof31:  state.cs = 31; goto _test_eof; 
	_test_eof32:  state.cs = 32; goto _test_eof; 
	_test_eof33:  state.cs = 33; goto _test_eof; 
	_test_eof539:  state.cs = 539; goto _test_eof; 
	_test_eof34:  state.cs = 34; goto _test_eof; 
	_test_eof35:  state.cs = 35; goto _test_eof; 
	_test_eof36:  state.cs = 36; goto _test_eof; 
	_test_eof37:  state.cs = 37; goto _test_eof; 
	_test_eof38:  state.cs = 38; goto _test_eof; 
	_test_eof39:  state.cs = 39; goto _test_eof; 
	_test_eof40:  state.cs = 40; goto _test_eof; 
	_test_eof41:  state.cs = 41; goto _test_eof; 
	_test_eof42:  state.cs = 42; goto _test_eof; 
	_test_eof43:  state.cs = 43; goto _test_eof; 
	_test_eof44:  state.cs = 44; goto _test_eof; 
	_test_eof45:  state.cs = 45; goto _test_eof; 
	_test_eof46:  state.cs = 46; goto _test_eof; 
	_test_eof540:  state.cs = 540; goto _test_eof; 
	_test_eof47:  state.cs = 47; goto _test_eof; 
	_test_eof48:  state.cs = 48; goto _test_eof; 
	_test_eof49:  state.cs = 49; goto _test_eof; 
	_test_eof50:  state.cs = 50; goto _test_eof; 
	_test_eof51:  state.cs = 51; goto _test_eof; 
	_test_eof52:  state.cs = 52; goto _test_eof; 
	_test_eof53:  state.cs = 53; goto _test_eof; 
	_test_eof54:  state.cs = 54; goto _test_eof; 
	_test_eof55:  state.cs = 55; goto _test_eof; 
	_test_eof56:  state.cs = 56; goto _test_eof; 
	_test_eof57:  state.cs = 57; goto _test_eof; 
	_test_eof58:  state.cs = 58; goto _test_eof; 
	_test_eof59:  state.cs = 59; goto _test_eof; 
	_test_eof60:  state.cs = 60; goto _test_eof; 
	_test_eof61:  state.cs = 61; goto _test_eof; 
	_test_eof62:  state.cs = 62; goto _test_eof; 
	_test_eof541:  state.cs = 541; goto _test_eof; 
	_test_eof63:  state.cs = 63; goto _test_eof; 
	_test_eof64:  state.cs = 64; goto _test_eof; 
	_test_eof65:  state.cs = 65; goto _test_eof; 
	_test_eof66:  state.cs = 66; goto _test_eof; 
	_test_eof67:  state.cs = 67; goto _test_eof; 
	_test_eof68:  state.cs = 68; goto _test_eof; 
	_test_eof69:  state.cs = 69; goto _test_eof; 
	_test_eof542:  state.cs = 542; goto _test_eof; 
	_test_eof70:  state.cs = 70; goto _test_eof; 
	_test_eof71:  state.cs = 71; goto _test_eof; 
	_test_eof72:  state.cs = 72; goto _test_eof; 
	_test_eof73:  state.cs = 73; goto _test_eof; 
	_test_eof74:  state.cs = 74; goto _test_eof; 
	_test_eof75:  state.cs = 75; goto _test_eof; 
	_test_eof76:  state.cs = 76; goto _test_eof; 
	_test_eof77:  state.cs = 77; goto _test_eof; 
	_test_eof78:  state.cs = 78; goto _test_eof; 
	_test_eof543:  state.cs = 543; goto _test_eof; 
	_test_eof79:  state.cs = 79; goto _test_eof; 
	_test_eof80:  state.cs = 80; goto _test_eof; 
	_test_eof81:  state.cs = 81; goto _test_eof; 
	_test_eof82:  state.cs = 82; goto _test_eof; 
	_test_eof83:  state.cs = 83; goto _test_eof; 
	_test_eof84:  state.cs = 84; goto _test_eof; 
	_test_eof544:  state.cs = 544; goto _test_eof; 
	_test_eof85:  state.cs = 85; goto _test_eof; 
	_test_eof86:  state.cs = 86; goto _test_eof; 
	_test_eof87:  state.cs = 87; goto _test_eof; 
	_test_eof88:  state.cs = 88; goto _test_eof; 
	_test_eof545:  state.cs = 545; goto _test_eof; 
	_test_eof89:  state.cs = 89; goto _test_eof; 
	_test_eof90:  state.cs = 90; goto _test_eof; 
	_test_eof91:  state.cs = 91; goto _test_eof; 
	_test_eof92:  state.cs = 92; goto _test_eof; 
	_test_eof93:  state.cs = 93; goto _test_eof; 
	_test_eof94:  state.cs = 94; goto _test_eof; 
	_test_eof95:  state.cs = 95; goto _test_eof; 
	_test_eof96:  state.cs = 96; goto _test_eof; 
	_test_eof97:  state.cs = 97; goto _test_eof; 
	_test_eof98:  state.cs = 98; goto _test_eof; 
	_test_eof546:  state.cs = 546; goto _test_eof; 
	_test_eof99:  state.cs = 99; goto _test_eof; 
	_test_eof100:  state.cs = 100; goto _test_eof; 
	_test_eof101:  state.cs = 101; goto _test_eof; 
	_test_eof102:  state.cs = 102; goto _test_eof; 
	_test_eof103:  state.cs = 103; goto _test_eof; 
	_test_eof104:  state.cs = 104; goto _test_eof; 
	_test_eof105:  state.cs = 105; goto _test_eof; 
	_test_eof106:  state.cs = 106; goto _test_eof; 
	_test_eof107:  state.cs = 107; goto _test_eof; 
	_test_eof108:  state.cs = 108; goto _test_eof; 
	_test_eof109:  state.cs = 109; goto _test_eof; 
	_test_eof110:  state.cs = 110; goto _test_eof; 
	_test_eof547:  state.cs = 547; goto _test_eof; 
	_test_eof111:  state.cs = 111; goto _test_eof; 
	_test_eof112:  state.cs = 112; goto _test_eof; 
	_test_eof113:  state.cs = 113; goto _test_eof; 
	_test_eof114:  state.cs = 114; goto _test_eof; 
	_test_eof115:  state.cs = 115; goto _test_eof; 
	_test_eof116:  state.cs = 116; goto _test_eof; 
	_test_eof117:  state.cs = 117; goto _test_eof; 
	_test_eof118:  state.cs = 118; goto _test_eof; 
	_test_eof119:  state.cs = 119; goto _test_eof; 
	_test_eof548:  state.cs = 548; goto _test_eof; 
	_test_eof120:  state.cs = 120; goto _test_eof; 
	_test_eof121:  state.cs = 121; goto _test_eof; 
	_test_eof122:  state.cs = 122; goto _test_eof; 
	_test_eof123:  state.cs = 123; goto _test_eof; 
	_test_eof124:  state.cs = 124; goto _test_eof; 
	_test_eof549:  state.cs = 549; goto _test_eof; 
	_test_eof125:  state.cs = 125; goto _test_eof; 
	_test_eof126:  state.cs = 126; goto _test_eof; 
	_test_eof127:  state.cs = 127; goto _test_eof; 
	_test_eof128:  state.cs = 128; goto _test_eof; 
	_test_eof129:  state.cs = 129; goto _test_eof; 
	_test_eof130:  state.cs = 130; goto _test_eof; 
	_test_eof131:  state.cs = 131; goto _test_eof; 
	_test_eof132:  state.cs = 132; goto _test_eof; 
	_test_eof133:  state.cs = 133; goto _test_eof; 
	_test_eof550:  state.cs = 550; goto _test_eof; 
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
	_test_eof551:  state.cs = 551; goto _test_eof; 
	_test_eof146:  state.cs = 146; goto _test_eof; 
	_test_eof147:  state.cs = 147; goto _test_eof; 
	_test_eof148:  state.cs = 148; goto _test_eof; 
	_test_eof149:  state.cs = 149; goto _test_eof; 
	_test_eof150:  state.cs = 150; goto _test_eof; 
	_test_eof151:  state.cs = 151; goto _test_eof; 
	_test_eof152:  state.cs = 152; goto _test_eof; 
	_test_eof153:  state.cs = 153; goto _test_eof; 
	_test_eof154:  state.cs = 154; goto _test_eof; 
	_test_eof155:  state.cs = 155; goto _test_eof; 
	_test_eof552:  state.cs = 552; goto _test_eof; 
	_test_eof156:  state.cs = 156; goto _test_eof; 
	_test_eof157:  state.cs = 157; goto _test_eof; 
	_test_eof158:  state.cs = 158; goto _test_eof; 
	_test_eof553:  state.cs = 553; goto _test_eof; 
	_test_eof159:  state.cs = 159; goto _test_eof; 
	_test_eof160:  state.cs = 160; goto _test_eof; 
	_test_eof161:  state.cs = 161; goto _test_eof; 
	_test_eof162:  state.cs = 162; goto _test_eof; 
	_test_eof163:  state.cs = 163; goto _test_eof; 
	_test_eof164:  state.cs = 164; goto _test_eof; 
	_test_eof554:  state.cs = 554; goto _test_eof; 
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
	_test_eof225:  state.cs = 225; goto _test_eof; 
	_test_eof226:  state.cs = 226; goto _test_eof; 
	_test_eof227:  state.cs = 227; goto _test_eof; 
	_test_eof228:  state.cs = 228; goto _test_eof; 
	_test_eof229:  state.cs = 229; goto _test_eof; 
	_test_eof230:  state.cs = 230; goto _test_eof; 
	_test_eof555:  state.cs = 555; goto _test_eof; 
	_test_eof231:  state.cs = 231; goto _test_eof; 
	_test_eof232:  state.cs = 232; goto _test_eof; 
	_test_eof233:  state.cs = 233; goto _test_eof; 
	_test_eof234:  state.cs = 234; goto _test_eof; 
	_test_eof235:  state.cs = 235; goto _test_eof; 
	_test_eof236:  state.cs = 236; goto _test_eof; 
	_test_eof237:  state.cs = 237; goto _test_eof; 
	_test_eof238:  state.cs = 238; goto _test_eof; 
	_test_eof556:  state.cs = 556; goto _test_eof; 
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
	_test_eof557:  state.cs = 557; goto _test_eof; 
	_test_eof253:  state.cs = 253; goto _test_eof; 
	_test_eof254:  state.cs = 254; goto _test_eof; 
	_test_eof255:  state.cs = 255; goto _test_eof; 
	_test_eof256:  state.cs = 256; goto _test_eof; 
	_test_eof257:  state.cs = 257; goto _test_eof; 
	_test_eof258:  state.cs = 258; goto _test_eof; 
	_test_eof259:  state.cs = 259; goto _test_eof; 
	_test_eof260:  state.cs = 260; goto _test_eof; 
	_test_eof261:  state.cs = 261; goto _test_eof; 
	_test_eof262:  state.cs = 262; goto _test_eof; 
	_test_eof263:  state.cs = 263; goto _test_eof; 
	_test_eof264:  state.cs = 264; goto _test_eof; 
	_test_eof265:  state.cs = 265; goto _test_eof; 
	_test_eof266:  state.cs = 266; goto _test_eof; 
	_test_eof267:  state.cs = 267; goto _test_eof; 
	_test_eof268:  state.cs = 268; goto _test_eof; 
	_test_eof558:  state.cs = 558; goto _test_eof; 
	_test_eof269:  state.cs = 269; goto _test_eof; 
	_test_eof270:  state.cs = 270; goto _test_eof; 
	_test_eof271:  state.cs = 271; goto _test_eof; 
	_test_eof272:  state.cs = 272; goto _test_eof; 
	_test_eof273:  state.cs = 273; goto _test_eof; 
	_test_eof274:  state.cs = 274; goto _test_eof; 
	_test_eof275:  state.cs = 275; goto _test_eof; 
	_test_eof276:  state.cs = 276; goto _test_eof; 
	_test_eof277:  state.cs = 277; goto _test_eof; 
	_test_eof278:  state.cs = 278; goto _test_eof; 
	_test_eof279:  state.cs = 279; goto _test_eof; 
	_test_eof280:  state.cs = 280; goto _test_eof; 
	_test_eof281:  state.cs = 281; goto _test_eof; 
	_test_eof282:  state.cs = 282; goto _test_eof; 
	_test_eof559:  state.cs = 559; goto _test_eof; 
	_test_eof283:  state.cs = 283; goto _test_eof; 
	_test_eof284:  state.cs = 284; goto _test_eof; 
	_test_eof285:  state.cs = 285; goto _test_eof; 
	_test_eof286:  state.cs = 286; goto _test_eof; 
	_test_eof287:  state.cs = 287; goto _test_eof; 
	_test_eof288:  state.cs = 288; goto _test_eof; 
	_test_eof289:  state.cs = 289; goto _test_eof; 
	_test_eof290:  state.cs = 290; goto _test_eof; 
	_test_eof291:  state.cs = 291; goto _test_eof; 
	_test_eof292:  state.cs = 292; goto _test_eof; 
	_test_eof293:  state.cs = 293; goto _test_eof; 
	_test_eof294:  state.cs = 294; goto _test_eof; 
	_test_eof295:  state.cs = 295; goto _test_eof; 
	_test_eof296:  state.cs = 296; goto _test_eof; 
	_test_eof297:  state.cs = 297; goto _test_eof; 
	_test_eof298:  state.cs = 298; goto _test_eof; 
	_test_eof299:  state.cs = 299; goto _test_eof; 
	_test_eof300:  state.cs = 300; goto _test_eof; 
	_test_eof301:  state.cs = 301; goto _test_eof; 
	_test_eof560:  state.cs = 560; goto _test_eof; 
	_test_eof302:  state.cs = 302; goto _test_eof; 
	_test_eof303:  state.cs = 303; goto _test_eof; 
	_test_eof304:  state.cs = 304; goto _test_eof; 
	_test_eof561:  state.cs = 561; goto _test_eof; 
	_test_eof305:  state.cs = 305; goto _test_eof; 
	_test_eof306:  state.cs = 306; goto _test_eof; 
	_test_eof307:  state.cs = 307; goto _test_eof; 
	_test_eof308:  state.cs = 308; goto _test_eof; 
	_test_eof309:  state.cs = 309; goto _test_eof; 
	_test_eof310:  state.cs = 310; goto _test_eof; 
	_test_eof562:  state.cs = 562; goto _test_eof; 
	_test_eof311:  state.cs = 311; goto _test_eof; 
	_test_eof312:  state.cs = 312; goto _test_eof; 
	_test_eof313:  state.cs = 313; goto _test_eof; 
	_test_eof314:  state.cs = 314; goto _test_eof; 
	_test_eof315:  state.cs = 315; goto _test_eof; 
	_test_eof316:  state.cs = 316; goto _test_eof; 
	_test_eof317:  state.cs = 317; goto _test_eof; 
	_test_eof318:  state.cs = 318; goto _test_eof; 
	_test_eof319:  state.cs = 319; goto _test_eof; 
	_test_eof320:  state.cs = 320; goto _test_eof; 
	_test_eof321:  state.cs = 321; goto _test_eof; 
	_test_eof322:  state.cs = 322; goto _test_eof; 
	_test_eof323:  state.cs = 323; goto _test_eof; 
	_test_eof324:  state.cs = 324; goto _test_eof; 
	_test_eof325:  state.cs = 325; goto _test_eof; 
	_test_eof326:  state.cs = 326; goto _test_eof; 
	_test_eof327:  state.cs = 327; goto _test_eof; 
	_test_eof328:  state.cs = 328; goto _test_eof; 
	_test_eof329:  state.cs = 329; goto _test_eof; 
	_test_eof330:  state.cs = 330; goto _test_eof; 
	_test_eof331:  state.cs = 331; goto _test_eof; 
	_test_eof332:  state.cs = 332; goto _test_eof; 
	_test_eof333:  state.cs = 333; goto _test_eof; 
	_test_eof334:  state.cs = 334; goto _test_eof; 
	_test_eof335:  state.cs = 335; goto _test_eof; 
	_test_eof336:  state.cs = 336; goto _test_eof; 
	_test_eof337:  state.cs = 337; goto _test_eof; 
	_test_eof338:  state.cs = 338; goto _test_eof; 
	_test_eof339:  state.cs = 339; goto _test_eof; 
	_test_eof340:  state.cs = 340; goto _test_eof; 
	_test_eof341:  state.cs = 341; goto _test_eof; 
	_test_eof342:  state.cs = 342; goto _test_eof; 
	_test_eof343:  state.cs = 343; goto _test_eof; 
	_test_eof344:  state.cs = 344; goto _test_eof; 
	_test_eof345:  state.cs = 345; goto _test_eof; 
	_test_eof346:  state.cs = 346; goto _test_eof; 
	_test_eof347:  state.cs = 347; goto _test_eof; 
	_test_eof348:  state.cs = 348; goto _test_eof; 
	_test_eof349:  state.cs = 349; goto _test_eof; 
	_test_eof350:  state.cs = 350; goto _test_eof; 
	_test_eof351:  state.cs = 351; goto _test_eof; 
	_test_eof352:  state.cs = 352; goto _test_eof; 
	_test_eof353:  state.cs = 353; goto _test_eof; 
	_test_eof354:  state.cs = 354; goto _test_eof; 
	_test_eof355:  state.cs = 355; goto _test_eof; 
	_test_eof356:  state.cs = 356; goto _test_eof; 
	_test_eof357:  state.cs = 357; goto _test_eof; 
	_test_eof358:  state.cs = 358; goto _test_eof; 
	_test_eof359:  state.cs = 359; goto _test_eof; 
	_test_eof360:  state.cs = 360; goto _test_eof; 
	_test_eof361:  state.cs = 361; goto _test_eof; 
	_test_eof362:  state.cs = 362; goto _test_eof; 
	_test_eof363:  state.cs = 363; goto _test_eof; 
	_test_eof364:  state.cs = 364; goto _test_eof; 
	_test_eof365:  state.cs = 365; goto _test_eof; 
	_test_eof366:  state.cs = 366; goto _test_eof; 
	_test_eof367:  state.cs = 367; goto _test_eof; 
	_test_eof368:  state.cs = 368; goto _test_eof; 
	_test_eof369:  state.cs = 369; goto _test_eof; 
	_test_eof370:  state.cs = 370; goto _test_eof; 
	_test_eof371:  state.cs = 371; goto _test_eof; 
	_test_eof372:  state.cs = 372; goto _test_eof; 
	_test_eof373:  state.cs = 373; goto _test_eof; 
	_test_eof374:  state.cs = 374; goto _test_eof; 
	_test_eof375:  state.cs = 375; goto _test_eof; 
	_test_eof376:  state.cs = 376; goto _test_eof; 
	_test_eof377:  state.cs = 377; goto _test_eof; 
	_test_eof378:  state.cs = 378; goto _test_eof; 
	_test_eof563:  state.cs = 563; goto _test_eof; 
	_test_eof379:  state.cs = 379; goto _test_eof; 
	_test_eof380:  state.cs = 380; goto _test_eof; 
	_test_eof381:  state.cs = 381; goto _test_eof; 
	_test_eof564:  state.cs = 564; goto _test_eof; 
	_test_eof382:  state.cs = 382; goto _test_eof; 
	_test_eof383:  state.cs = 383; goto _test_eof; 
	_test_eof384:  state.cs = 384; goto _test_eof; 
	_test_eof385:  state.cs = 385; goto _test_eof; 
	_test_eof386:  state.cs = 386; goto _test_eof; 
	_test_eof387:  state.cs = 387; goto _test_eof; 
	_test_eof565:  state.cs = 565; goto _test_eof; 
	_test_eof388:  state.cs = 388; goto _test_eof; 
	_test_eof389:  state.cs = 389; goto _test_eof; 
	_test_eof390:  state.cs = 390; goto _test_eof; 
	_test_eof391:  state.cs = 391; goto _test_eof; 
	_test_eof392:  state.cs = 392; goto _test_eof; 
	_test_eof393:  state.cs = 393; goto _test_eof; 
	_test_eof394:  state.cs = 394; goto _test_eof; 
	_test_eof395:  state.cs = 395; goto _test_eof; 
	_test_eof396:  state.cs = 396; goto _test_eof; 
	_test_eof397:  state.cs = 397; goto _test_eof; 
	_test_eof398:  state.cs = 398; goto _test_eof; 
	_test_eof399:  state.cs = 399; goto _test_eof; 
	_test_eof400:  state.cs = 400; goto _test_eof; 
	_test_eof401:  state.cs = 401; goto _test_eof; 
	_test_eof402:  state.cs = 402; goto _test_eof; 
	_test_eof403:  state.cs = 403; goto _test_eof; 
	_test_eof404:  state.cs = 404; goto _test_eof; 
	_test_eof405:  state.cs = 405; goto _test_eof; 
	_test_eof406:  state.cs = 406; goto _test_eof; 
	_test_eof407:  state.cs = 407; goto _test_eof; 
	_test_eof408:  state.cs = 408; goto _test_eof; 
	_test_eof409:  state.cs = 409; goto _test_eof; 
	_test_eof410:  state.cs = 410; goto _test_eof; 
	_test_eof411:  state.cs = 411; goto _test_eof; 
	_test_eof412:  state.cs = 412; goto _test_eof; 
	_test_eof413:  state.cs = 413; goto _test_eof; 
	_test_eof414:  state.cs = 414; goto _test_eof; 
	_test_eof415:  state.cs = 415; goto _test_eof; 
	_test_eof416:  state.cs = 416; goto _test_eof; 
	_test_eof417:  state.cs = 417; goto _test_eof; 
	_test_eof418:  state.cs = 418; goto _test_eof; 
	_test_eof419:  state.cs = 419; goto _test_eof; 
	_test_eof420:  state.cs = 420; goto _test_eof; 
	_test_eof421:  state.cs = 421; goto _test_eof; 
	_test_eof422:  state.cs = 422; goto _test_eof; 
	_test_eof423:  state.cs = 423; goto _test_eof; 
	_test_eof424:  state.cs = 424; goto _test_eof; 
	_test_eof425:  state.cs = 425; goto _test_eof; 
	_test_eof426:  state.cs = 426; goto _test_eof; 
	_test_eof427:  state.cs = 427; goto _test_eof; 
	_test_eof428:  state.cs = 428; goto _test_eof; 
	_test_eof429:  state.cs = 429; goto _test_eof; 
	_test_eof430:  state.cs = 430; goto _test_eof; 
	_test_eof431:  state.cs = 431; goto _test_eof; 
	_test_eof432:  state.cs = 432; goto _test_eof; 
	_test_eof433:  state.cs = 433; goto _test_eof; 
	_test_eof434:  state.cs = 434; goto _test_eof; 
	_test_eof435:  state.cs = 435; goto _test_eof; 
	_test_eof436:  state.cs = 436; goto _test_eof; 
	_test_eof437:  state.cs = 437; goto _test_eof; 
	_test_eof438:  state.cs = 438; goto _test_eof; 
	_test_eof439:  state.cs = 439; goto _test_eof; 
	_test_eof440:  state.cs = 440; goto _test_eof; 
	_test_eof441:  state.cs = 441; goto _test_eof; 
	_test_eof442:  state.cs = 442; goto _test_eof; 
	_test_eof443:  state.cs = 443; goto _test_eof; 
	_test_eof444:  state.cs = 444; goto _test_eof; 
	_test_eof445:  state.cs = 445; goto _test_eof; 
	_test_eof446:  state.cs = 446; goto _test_eof; 
	_test_eof447:  state.cs = 447; goto _test_eof; 
	_test_eof448:  state.cs = 448; goto _test_eof; 
	_test_eof449:  state.cs = 449; goto _test_eof; 
	_test_eof450:  state.cs = 450; goto _test_eof; 
	_test_eof451:  state.cs = 451; goto _test_eof; 
	_test_eof452:  state.cs = 452; goto _test_eof; 
	_test_eof566:  state.cs = 566; goto _test_eof; 
	_test_eof453:  state.cs = 453; goto _test_eof; 
	_test_eof454:  state.cs = 454; goto _test_eof; 
	_test_eof455:  state.cs = 455; goto _test_eof; 
	_test_eof456:  state.cs = 456; goto _test_eof; 
	_test_eof457:  state.cs = 457; goto _test_eof; 
	_test_eof458:  state.cs = 458; goto _test_eof; 
	_test_eof459:  state.cs = 459; goto _test_eof; 
	_test_eof460:  state.cs = 460; goto _test_eof; 
	_test_eof461:  state.cs = 461; goto _test_eof; 
	_test_eof462:  state.cs = 462; goto _test_eof; 
	_test_eof463:  state.cs = 463; goto _test_eof; 
	_test_eof464:  state.cs = 464; goto _test_eof; 
	_test_eof465:  state.cs = 465; goto _test_eof; 
	_test_eof466:  state.cs = 466; goto _test_eof; 
	_test_eof467:  state.cs = 467; goto _test_eof; 
	_test_eof567:  state.cs = 567; goto _test_eof; 
	_test_eof468:  state.cs = 468; goto _test_eof; 
	_test_eof469:  state.cs = 469; goto _test_eof; 
	_test_eof470:  state.cs = 470; goto _test_eof; 
	_test_eof471:  state.cs = 471; goto _test_eof; 
	_test_eof472:  state.cs = 472; goto _test_eof; 
	_test_eof473:  state.cs = 473; goto _test_eof; 
	_test_eof474:  state.cs = 474; goto _test_eof; 
	_test_eof475:  state.cs = 475; goto _test_eof; 
	_test_eof568:  state.cs = 568; goto _test_eof; 
	_test_eof476:  state.cs = 476; goto _test_eof; 
	_test_eof477:  state.cs = 477; goto _test_eof; 
	_test_eof478:  state.cs = 478; goto _test_eof; 
	_test_eof479:  state.cs = 479; goto _test_eof; 
	_test_eof480:  state.cs = 480; goto _test_eof; 
	_test_eof481:  state.cs = 481; goto _test_eof; 
	_test_eof482:  state.cs = 482; goto _test_eof; 
	_test_eof483:  state.cs = 483; goto _test_eof; 
	_test_eof484:  state.cs = 484; goto _test_eof; 
	_test_eof485:  state.cs = 485; goto _test_eof; 
	_test_eof486:  state.cs = 486; goto _test_eof; 
	_test_eof487:  state.cs = 487; goto _test_eof; 
	_test_eof488:  state.cs = 488; goto _test_eof; 
	_test_eof489:  state.cs = 489; goto _test_eof; 
	_test_eof490:  state.cs = 490; goto _test_eof; 
	_test_eof491:  state.cs = 491; goto _test_eof; 
	_test_eof492:  state.cs = 492; goto _test_eof; 
	_test_eof493:  state.cs = 493; goto _test_eof; 
	_test_eof494:  state.cs = 494; goto _test_eof; 
	_test_eof495:  state.cs = 495; goto _test_eof; 
	_test_eof496:  state.cs = 496; goto _test_eof; 
	_test_eof497:  state.cs = 497; goto _test_eof; 
	_test_eof498:  state.cs = 498; goto _test_eof; 
	_test_eof499:  state.cs = 499; goto _test_eof; 
	_test_eof500:  state.cs = 500; goto _test_eof; 
	_test_eof501:  state.cs = 501; goto _test_eof; 
	_test_eof502:  state.cs = 502; goto _test_eof; 
	_test_eof503:  state.cs = 503; goto _test_eof; 
	_test_eof504:  state.cs = 504; goto _test_eof; 
	_test_eof505:  state.cs = 505; goto _test_eof; 
	_test_eof506:  state.cs = 506; goto _test_eof; 
	_test_eof507:  state.cs = 507; goto _test_eof; 
	_test_eof508:  state.cs = 508; goto _test_eof; 
	_test_eof509:  state.cs = 509; goto _test_eof; 
	_test_eof510:  state.cs = 510; goto _test_eof; 
	_test_eof511:  state.cs = 511; goto _test_eof; 
	_test_eof512:  state.cs = 512; goto _test_eof; 
	_test_eof513:  state.cs = 513; goto _test_eof; 
	_test_eof514:  state.cs = 514; goto _test_eof; 
	_test_eof515:  state.cs = 515; goto _test_eof; 
	_test_eof516:  state.cs = 516; goto _test_eof; 
	_test_eof517:  state.cs = 517; goto _test_eof; 
	_test_eof518:  state.cs = 518; goto _test_eof; 
	_test_eof519:  state.cs = 519; goto _test_eof; 
	_test_eof520:  state.cs = 520; goto _test_eof; 
	_test_eof521:  state.cs = 521; goto _test_eof; 
	_test_eof522:  state.cs = 522; goto _test_eof; 
	_test_eof523:  state.cs = 523; goto _test_eof; 
	_test_eof524:  state.cs = 524; goto _test_eof; 
	_test_eof525:  state.cs = 525; goto _test_eof; 
	_test_eof526:  state.cs = 526; goto _test_eof; 
	_test_eof527:  state.cs = 527; goto _test_eof; 
	_test_eof528:  state.cs = 528; goto _test_eof; 
	_test_eof529:  state.cs = 529; goto _test_eof; 
	_test_eof530:  state.cs = 530; goto _test_eof; 
	_test_eof531:  state.cs = 531; goto _test_eof; 
	_test_eof532:  state.cs = 532; goto _test_eof; 
	_test_eof533:  state.cs = 533; goto _test_eof; 
	_test_eof534:  state.cs = 534; goto _test_eof; 
	_test_eof569:  state.cs = 569; goto _test_eof; 
	_test_eof570:  state.cs = 570; goto _test_eof; 

	_test_eof: {}
	if ( ( state.p) == ( state.eof) )
	{
	switch (  state.cs ) {
	case 544: 
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	break;
	case 550: 
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	break;
	case 551: 
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	break;
	case 548: 
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	break;
	case 540: 
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	break;
	case 537: 
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	break;
	case 543: 
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	break;
	case 546: 
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	break;
	case 542: 
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	break;
	case 549: 
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	break;
	case 545: 
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	break;
	case 536: 
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	break;
	case 555: 
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	break;
	case 566: 
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	break;
	case 547: 
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	break;
	case 558: 
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	break;
	case 556: 
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	break;
	case 559: 
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	break;
	case 557: 
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	break;
	case 567: 
#line 151 "propsparser.rl"
	{ props.forceusername  = state.match; }
	break;
	case 541: 
#line 152 "propsparser.rl"
	{ props.forcegroupname = state.match; }
	break;
	case 560: 
	case 562: 
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	break;
	case 552: 
	case 554: 
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	break;
	case 538: 
	case 568: 
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	break;
	case 563: 
	case 565: 
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	break;
	case 561: 
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	break;
	case 553: 
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	break;
	case 539: 
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	break;
	case 564: 
#line 189 "propsparser.rl"
	{ deps.version = state.match; }
#line 213 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	break;
#line 11205 "propsparser.h"
	}
	}

	_out: {}
	}

#line 239 "propsparser.rl"

    if (state.cs == PropsParser_error) {
        throw std::runtime_error("Parse error. Unconsumed input: " + std::string(state.p, state.pe));
    }
}

}

#endif
