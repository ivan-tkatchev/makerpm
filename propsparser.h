
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

    
#line 220 "propsparser.rl"

/*

*/

    
#line 65 "propsparser.h"
static const int PropsParser_start = 1;
static const int PropsParser_first_final = 507;
static const int PropsParser_error = 0;

static const int PropsParser_en_strchar_escape = 506;
static const int PropsParser_en_consume_line = 540;
static const int PropsParser_en_main = 1;


#line 226 "propsparser.rl"
    
#line 77 "propsparser.h"
	{
	 state.cs = PropsParser_start;
	 state.top = 0;
	}

#line 227 "propsparser.rl"

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
		case 507: goto st507;
		case 2: goto st2;
		case 3: goto st3;
		case 4: goto st4;
		case 5: goto st5;
		case 6: goto st6;
		case 7: goto st7;
		case 508: goto st508;
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
		case 509: goto st509;
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
		case 510: goto st510;
		case 31: goto st31;
		case 32: goto st32;
		case 33: goto st33;
		case 511: goto st511;
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
		case 512: goto st512;
		case 47: goto st47;
		case 48: goto st48;
		case 49: goto st49;
		case 50: goto st50;
		case 51: goto st51;
		case 52: goto st52;
		case 53: goto st53;
		case 513: goto st513;
		case 54: goto st54;
		case 55: goto st55;
		case 56: goto st56;
		case 57: goto st57;
		case 58: goto st58;
		case 59: goto st59;
		case 60: goto st60;
		case 61: goto st61;
		case 62: goto st62;
		case 514: goto st514;
		case 63: goto st63;
		case 64: goto st64;
		case 65: goto st65;
		case 66: goto st66;
		case 67: goto st67;
		case 68: goto st68;
		case 515: goto st515;
		case 69: goto st69;
		case 70: goto st70;
		case 71: goto st71;
		case 72: goto st72;
		case 516: goto st516;
		case 73: goto st73;
		case 74: goto st74;
		case 75: goto st75;
		case 76: goto st76;
		case 77: goto st77;
		case 78: goto st78;
		case 79: goto st79;
		case 80: goto st80;
		case 81: goto st81;
		case 82: goto st82;
		case 517: goto st517;
		case 83: goto st83;
		case 84: goto st84;
		case 85: goto st85;
		case 86: goto st86;
		case 87: goto st87;
		case 88: goto st88;
		case 89: goto st89;
		case 90: goto st90;
		case 91: goto st91;
		case 92: goto st92;
		case 93: goto st93;
		case 94: goto st94;
		case 518: goto st518;
		case 95: goto st95;
		case 96: goto st96;
		case 97: goto st97;
		case 98: goto st98;
		case 99: goto st99;
		case 100: goto st100;
		case 101: goto st101;
		case 102: goto st102;
		case 103: goto st103;
		case 519: goto st519;
		case 104: goto st104;
		case 105: goto st105;
		case 106: goto st106;
		case 107: goto st107;
		case 108: goto st108;
		case 520: goto st520;
		case 109: goto st109;
		case 110: goto st110;
		case 111: goto st111;
		case 112: goto st112;
		case 113: goto st113;
		case 114: goto st114;
		case 115: goto st115;
		case 116: goto st116;
		case 117: goto st117;
		case 521: goto st521;
		case 118: goto st118;
		case 119: goto st119;
		case 120: goto st120;
		case 121: goto st121;
		case 122: goto st122;
		case 123: goto st123;
		case 124: goto st124;
		case 125: goto st125;
		case 126: goto st126;
		case 127: goto st127;
		case 128: goto st128;
		case 129: goto st129;
		case 522: goto st522;
		case 130: goto st130;
		case 131: goto st131;
		case 132: goto st132;
		case 133: goto st133;
		case 134: goto st134;
		case 135: goto st135;
		case 136: goto st136;
		case 137: goto st137;
		case 138: goto st138;
		case 139: goto st139;
		case 523: goto st523;
		case 140: goto st140;
		case 141: goto st141;
		case 142: goto st142;
		case 524: goto st524;
		case 143: goto st143;
		case 144: goto st144;
		case 145: goto st145;
		case 146: goto st146;
		case 147: goto st147;
		case 148: goto st148;
		case 525: goto st525;
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
		case 526: goto st526;
		case 215: goto st215;
		case 216: goto st216;
		case 217: goto st217;
		case 218: goto st218;
		case 219: goto st219;
		case 220: goto st220;
		case 221: goto st221;
		case 222: goto st222;
		case 527: goto st527;
		case 223: goto st223;
		case 224: goto st224;
		case 225: goto st225;
		case 226: goto st226;
		case 227: goto st227;
		case 228: goto st228;
		case 229: goto st229;
		case 230: goto st230;
		case 231: goto st231;
		case 232: goto st232;
		case 233: goto st233;
		case 234: goto st234;
		case 235: goto st235;
		case 236: goto st236;
		case 528: goto st528;
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
		case 529: goto st529;
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
		case 530: goto st530;
		case 267: goto st267;
		case 268: goto st268;
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
		case 283: goto st283;
		case 284: goto st284;
		case 285: goto st285;
		case 531: goto st531;
		case 286: goto st286;
		case 287: goto st287;
		case 288: goto st288;
		case 532: goto st532;
		case 289: goto st289;
		case 290: goto st290;
		case 291: goto st291;
		case 292: goto st292;
		case 293: goto st293;
		case 294: goto st294;
		case 533: goto st533;
		case 295: goto st295;
		case 296: goto st296;
		case 297: goto st297;
		case 298: goto st298;
		case 299: goto st299;
		case 300: goto st300;
		case 301: goto st301;
		case 302: goto st302;
		case 303: goto st303;
		case 304: goto st304;
		case 305: goto st305;
		case 306: goto st306;
		case 307: goto st307;
		case 308: goto st308;
		case 309: goto st309;
		case 310: goto st310;
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
		case 534: goto st534;
		case 363: goto st363;
		case 364: goto st364;
		case 365: goto st365;
		case 535: goto st535;
		case 366: goto st366;
		case 367: goto st367;
		case 368: goto st368;
		case 369: goto st369;
		case 370: goto st370;
		case 371: goto st371;
		case 536: goto st536;
		case 372: goto st372;
		case 373: goto st373;
		case 374: goto st374;
		case 375: goto st375;
		case 376: goto st376;
		case 377: goto st377;
		case 378: goto st378;
		case 379: goto st379;
		case 380: goto st380;
		case 381: goto st381;
		case 382: goto st382;
		case 383: goto st383;
		case 384: goto st384;
		case 385: goto st385;
		case 386: goto st386;
		case 387: goto st387;
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
		case 537: goto st537;
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
		case 538: goto st538;
		case 448: goto st448;
		case 449: goto st449;
		case 450: goto st450;
		case 451: goto st451;
		case 452: goto st452;
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
		case 468: goto st468;
		case 469: goto st469;
		case 470: goto st470;
		case 471: goto st471;
		case 472: goto st472;
		case 473: goto st473;
		case 474: goto st474;
		case 475: goto st475;
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
		case 539: goto st539;
		case 540: goto st540;
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
		case 71: goto st47;
		case 76: goto st54;
		case 78: goto st63;
		case 79: goto st69;
		case 80: goto st73;
		case 82: goto st83;
		case 83: goto st95;
		case 85: goto st104;
		case 86: goto st109;
		case 97: goto st2;
		case 98: goto st8;
		case 99: goto st19;
		case 100: goto st34;
		case 103: goto st47;
		case 108: goto st54;
		case 110: goto st63;
		case 111: goto st69;
		case 112: goto st73;
		case 114: goto st83;
		case 115: goto st95;
		case 117: goto st104;
		case 118: goto st109;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st1;
	goto st0;
st0:
 state.cs = 0;
	goto _out;
tr2:
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr772:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st507;
tr773:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr787:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st507;
tr788:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr802:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st507;
tr803:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr820:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st507;
tr821:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr835:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st507;
tr836:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr850:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st507;
tr851:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr865:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st507;
tr866:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr880:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st507;
tr881:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr895:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st507;
tr896:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr910:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st507;
tr911:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr925:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st507;
tr926:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr940:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st507;
tr941:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr955:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st507;
tr956:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr970:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st507;
tr971:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr985:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st507;
tr986:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1000:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st507;
tr1001:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1018:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st507;
tr1019:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1033:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st507;
tr1034:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1048:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st507;
tr1049:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1063:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st507;
tr1064:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1078:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st507;
tr1079:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1093:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st507;
tr1094:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1108:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st507;
tr1109:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1126:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st507;
tr1127:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1141:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st507;
tr1142:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1159:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st507;
tr1160:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
tr1174:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st507;
tr1175:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
#line 110 "propsparser.rl"
	{{ state.stack[ state.top++] = 507; goto st540;}}
	goto st507;
st507:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof507;
case 507:
#line 982 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st507;
		case 32: goto st507;
		case 35: goto tr2;
		case 65: goto st2;
		case 66: goto st8;
		case 67: goto st19;
		case 68: goto st34;
		case 71: goto st47;
		case 76: goto st54;
		case 78: goto st63;
		case 79: goto st69;
		case 80: goto st73;
		case 82: goto st83;
		case 83: goto st95;
		case 85: goto st104;
		case 86: goto st109;
		case 97: goto st2;
		case 98: goto st8;
		case 99: goto st19;
		case 100: goto st34;
		case 103: goto st47;
		case 108: goto st54;
		case 110: goto st63;
		case 111: goto st69;
		case 112: goto st73;
		case 114: goto st83;
		case 115: goto st95;
		case 117: goto st104;
		case 118: goto st109;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st507;
	goto st0;
tr774:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st2;
tr789:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st2;
tr807:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st2;
tr822:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st2;
tr837:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st2;
tr852:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st2;
tr867:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st2;
tr882:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st2;
tr897:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st2;
tr912:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st2;
tr927:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st2;
tr942:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st2;
tr957:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st2;
tr972:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st2;
tr987:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st2;
tr1005:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st2;
tr1020:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st2;
tr1035:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st2;
tr1050:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st2;
tr1065:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st2;
tr1080:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st2;
tr1095:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st2;
tr1113:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st2;
tr1128:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st2;
tr1146:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st2;
tr1161:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st2;
tr1176:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st2;
st2:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof2;
case 2:
#line 1137 "propsparser.h"
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
		case 58: goto st505;
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
		case 34: goto tr21;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st6;
	goto st0;
tr21:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st7;
tr22:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st7;
tr24:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 7; goto st506;}}
	goto st7;
st7:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof7;
case 7:
#line 1199 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st508;
		case 92: goto tr24;
	}
	goto tr22;
st508:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof508;
case 508:
	switch( (*( state.p)) ) {
		case 13: goto tr772;
		case 32: goto tr772;
		case 35: goto tr773;
		case 65: goto tr774;
		case 66: goto tr775;
		case 67: goto tr776;
		case 68: goto tr777;
		case 71: goto tr778;
		case 76: goto tr779;
		case 78: goto tr780;
		case 79: goto tr781;
		case 80: goto tr782;
		case 82: goto tr783;
		case 83: goto tr784;
		case 85: goto tr785;
		case 86: goto tr786;
		case 97: goto tr774;
		case 98: goto tr775;
		case 99: goto tr776;
		case 100: goto tr777;
		case 103: goto tr778;
		case 108: goto tr779;
		case 110: goto tr780;
		case 111: goto tr781;
		case 112: goto tr782;
		case 114: goto tr783;
		case 115: goto tr784;
		case 117: goto tr785;
		case 118: goto tr786;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr772;
	goto st0;
tr775:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st8;
tr790:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st8;
tr808:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st8;
tr823:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st8;
tr838:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st8;
tr853:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st8;
tr868:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st8;
tr883:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st8;
tr898:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st8;
tr913:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st8;
tr928:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st8;
tr943:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st8;
tr958:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st8;
tr973:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st8;
tr988:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st8;
tr1006:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st8;
tr1021:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st8;
tr1036:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st8;
tr1051:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st8;
tr1066:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st8;
tr1081:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st8;
tr1096:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st8;
tr1114:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st8;
tr1129:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st8;
tr1147:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st8;
tr1162:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st8;
tr1177:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st8;
st8:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof8;
case 8:
#line 1363 "propsparser.h"
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
		case 58: goto st504;
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
		case 34: goto tr35;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st17;
	goto st0;
tr35:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st18;
tr36:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st18;
tr38:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 18; goto st506;}}
	goto st18;
st18:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof18;
case 18:
#line 1462 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st509;
		case 92: goto tr38;
	}
	goto tr36;
st509:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof509;
case 509:
	switch( (*( state.p)) ) {
		case 13: goto tr787;
		case 32: goto tr787;
		case 35: goto tr788;
		case 65: goto tr789;
		case 66: goto tr790;
		case 67: goto tr791;
		case 68: goto tr792;
		case 71: goto tr793;
		case 76: goto tr794;
		case 78: goto tr795;
		case 79: goto tr796;
		case 80: goto tr797;
		case 82: goto tr798;
		case 83: goto tr799;
		case 85: goto tr800;
		case 86: goto tr801;
		case 97: goto tr789;
		case 98: goto tr790;
		case 99: goto tr791;
		case 100: goto tr792;
		case 103: goto tr793;
		case 108: goto tr794;
		case 110: goto tr795;
		case 111: goto tr796;
		case 112: goto tr797;
		case 114: goto tr798;
		case 115: goto tr799;
		case 117: goto tr800;
		case 118: goto tr801;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr787;
	goto st0;
tr776:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st19;
tr791:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st19;
tr809:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st19;
tr824:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st19;
tr839:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st19;
tr854:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st19;
tr869:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st19;
tr884:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st19;
tr899:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st19;
tr914:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st19;
tr929:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st19;
tr944:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st19;
tr959:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st19;
tr974:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st19;
tr989:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st19;
tr1007:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st19;
tr1022:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st19;
tr1037:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st19;
tr1052:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st19;
tr1067:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st19;
tr1082:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st19;
tr1097:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st19;
tr1115:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st19;
tr1130:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st19;
tr1148:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st19;
tr1163:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st19;
tr1178:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st19;
st19:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof19;
case 19:
#line 1626 "propsparser.h"
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
		case 13: goto tr47;
		case 32: goto tr47;
		case 58: goto st503;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr47;
	goto st0;
tr47:
#line 201 "propsparser.rl"
	{ deps = rpmprops_t::deps_t(); }
	goto st28;
st28:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof28;
case 28:
#line 1699 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr47;
		case 32: goto tr47;
		case 34: goto tr49;
		case 97: goto st448;
		case 99: goto st456;
		case 105: goto st462;
		case 112: goto st468;
		case 114: goto st491;
		case 118: goto st497;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr47;
	goto st0;
tr49:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st29;
tr56:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st29;
tr58:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 29; goto st506;}}
	goto st29;
st29:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof29;
case 29:
#line 1734 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st30;
		case 92: goto tr58;
	}
	goto tr56;
st30:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof30;
case 30:
	switch( (*( state.p)) ) {
		case 13: goto tr59;
		case 32: goto tr59;
		case 60: goto tr60;
		case 61: goto tr61;
		case 62: goto tr62;
		case 97: goto tr63;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr59;
	goto st0;
tr59:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st510;
tr699:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st510;
st510:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof510;
case 510:
#line 1767 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr802;
		case 32: goto tr802;
		case 35: goto tr803;
		case 60: goto st31;
		case 61: goto st443;
		case 62: goto st444;
		case 65: goto tr807;
		case 66: goto tr808;
		case 67: goto tr809;
		case 68: goto tr810;
		case 71: goto tr811;
		case 76: goto tr812;
		case 78: goto tr813;
		case 79: goto tr814;
		case 80: goto tr815;
		case 82: goto tr816;
		case 83: goto tr817;
		case 85: goto tr818;
		case 86: goto tr819;
		case 97: goto tr807;
		case 98: goto tr808;
		case 99: goto tr809;
		case 100: goto tr810;
		case 103: goto tr811;
		case 108: goto tr812;
		case 110: goto tr813;
		case 111: goto tr814;
		case 112: goto tr815;
		case 114: goto tr816;
		case 115: goto tr817;
		case 117: goto tr818;
		case 118: goto tr819;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr802;
	goto st0;
tr60:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st31;
tr700:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st31;
st31:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof31;
case 31:
#line 1817 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr64;
		case 32: goto tr64;
		case 34: goto tr65;
		case 61: goto st442;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr64;
	goto st0;
tr64:
#line 177 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
	goto st32;
tr677:
#line 179 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
	goto st32;
tr679:
#line 176 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
	goto st32;
tr681:
#line 178 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
	goto st32;
tr684:
#line 180 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
	goto st32;
st32:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof32;
case 32:
#line 1851 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st32;
		case 32: goto st32;
		case 34: goto tr68;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st32;
	goto st0;
tr68:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st33;
tr69:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st33;
tr71:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 33; goto st506;}}
	goto st33;
tr65:
#line 177 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st33;
tr678:
#line 179 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st33;
tr680:
#line 176 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st33;
tr682:
#line 178 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st33;
tr685:
#line 180 "propsparser.rl"
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
#line 1920 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st511;
		case 92: goto tr71;
	}
	goto tr69;
st511:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof511;
case 511:
	switch( (*( state.p)) ) {
		case 13: goto tr820;
		case 32: goto tr820;
		case 35: goto tr821;
		case 65: goto tr822;
		case 66: goto tr823;
		case 67: goto tr824;
		case 68: goto tr825;
		case 71: goto tr826;
		case 76: goto tr827;
		case 78: goto tr828;
		case 79: goto tr829;
		case 80: goto tr830;
		case 82: goto tr831;
		case 83: goto tr832;
		case 85: goto tr833;
		case 86: goto tr834;
		case 97: goto tr822;
		case 98: goto tr823;
		case 99: goto tr824;
		case 100: goto tr825;
		case 103: goto tr826;
		case 108: goto tr827;
		case 110: goto tr828;
		case 111: goto tr829;
		case 112: goto tr830;
		case 114: goto tr831;
		case 115: goto tr832;
		case 117: goto tr833;
		case 118: goto tr834;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr820;
	goto st0;
tr777:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st34;
tr792:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st34;
tr810:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st34;
tr825:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st34;
tr840:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st34;
tr855:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st34;
tr870:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st34;
tr885:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st34;
tr900:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st34;
tr915:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st34;
tr930:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st34;
tr945:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st34;
tr960:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st34;
tr975:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st34;
tr990:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st34;
tr1008:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st34;
tr1023:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st34;
tr1038:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st34;
tr1053:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st34;
tr1068:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st34;
tr1083:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st34;
tr1098:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st34;
tr1116:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st34;
tr1131:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st34;
tr1149:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st34;
tr1164:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st34;
tr1179:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st34;
st34:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof34;
case 34:
#line 2084 "propsparser.h"
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
		case 58: goto st441;
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
		case 34: goto tr84;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st45;
	goto st0;
tr84:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st46;
tr85:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st46;
tr87:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 46; goto st506;}}
	goto st46;
st46:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof46;
case 46:
#line 2195 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st512;
		case 92: goto tr87;
	}
	goto tr85;
st512:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof512;
case 512:
	switch( (*( state.p)) ) {
		case 13: goto tr835;
		case 32: goto tr835;
		case 35: goto tr836;
		case 65: goto tr837;
		case 66: goto tr838;
		case 67: goto tr839;
		case 68: goto tr840;
		case 71: goto tr841;
		case 76: goto tr842;
		case 78: goto tr843;
		case 79: goto tr844;
		case 80: goto tr845;
		case 82: goto tr846;
		case 83: goto tr847;
		case 85: goto tr848;
		case 86: goto tr849;
		case 97: goto tr837;
		case 98: goto tr838;
		case 99: goto tr839;
		case 100: goto tr840;
		case 103: goto tr841;
		case 108: goto tr842;
		case 110: goto tr843;
		case 111: goto tr844;
		case 112: goto tr845;
		case 114: goto tr846;
		case 115: goto tr847;
		case 117: goto tr848;
		case 118: goto tr849;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr835;
	goto st0;
tr778:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st47;
tr793:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st47;
tr811:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st47;
tr826:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st47;
tr841:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st47;
tr856:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st47;
tr871:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st47;
tr886:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st47;
tr901:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st47;
tr916:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st47;
tr931:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st47;
tr946:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st47;
tr961:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st47;
tr976:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st47;
tr991:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st47;
tr1009:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st47;
tr1024:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st47;
tr1039:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st47;
tr1054:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st47;
tr1069:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st47;
tr1084:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st47;
tr1099:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st47;
tr1117:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st47;
tr1132:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st47;
tr1150:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st47;
tr1165:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st47;
tr1180:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st47;
st47:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof47;
case 47:
#line 2359 "propsparser.h"
	if ( (*( state.p)) == 114 )
		goto st48;
	goto st0;
st48:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof48;
case 48:
	if ( (*( state.p)) == 111 )
		goto st49;
	goto st0;
st49:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof49;
case 49:
	if ( (*( state.p)) == 117 )
		goto st50;
	goto st0;
st50:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof50;
case 50:
	if ( (*( state.p)) == 112 )
		goto st51;
	goto st0;
st51:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof51;
case 51:
	switch( (*( state.p)) ) {
		case 13: goto st52;
		case 32: goto st52;
		case 58: goto st440;
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
		case 34: goto tr94;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st52;
	goto st0;
tr94:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st53;
tr95:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st53;
tr97:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 53; goto st506;}}
	goto st53;
st53:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof53;
case 53:
#line 2428 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st513;
		case 92: goto tr97;
	}
	goto tr95;
st513:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof513;
case 513:
	switch( (*( state.p)) ) {
		case 13: goto tr850;
		case 32: goto tr850;
		case 35: goto tr851;
		case 65: goto tr852;
		case 66: goto tr853;
		case 67: goto tr854;
		case 68: goto tr855;
		case 71: goto tr856;
		case 76: goto tr857;
		case 78: goto tr858;
		case 79: goto tr859;
		case 80: goto tr860;
		case 82: goto tr861;
		case 83: goto tr862;
		case 85: goto tr863;
		case 86: goto tr864;
		case 97: goto tr852;
		case 98: goto tr853;
		case 99: goto tr854;
		case 100: goto tr855;
		case 103: goto tr856;
		case 108: goto tr857;
		case 110: goto tr858;
		case 111: goto tr859;
		case 112: goto tr860;
		case 114: goto tr861;
		case 115: goto tr862;
		case 117: goto tr863;
		case 118: goto tr864;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr850;
	goto st0;
tr779:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st54;
tr794:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st54;
tr812:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st54;
tr827:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st54;
tr842:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st54;
tr857:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st54;
tr872:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st54;
tr887:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st54;
tr902:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st54;
tr917:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st54;
tr932:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st54;
tr947:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st54;
tr962:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st54;
tr977:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st54;
tr992:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st54;
tr1010:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st54;
tr1025:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st54;
tr1040:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st54;
tr1055:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st54;
tr1070:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st54;
tr1085:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st54;
tr1100:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st54;
tr1118:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st54;
tr1133:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st54;
tr1151:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st54;
tr1166:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st54;
tr1181:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st54;
st54:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof54;
case 54:
#line 2592 "propsparser.h"
	if ( (*( state.p)) == 105 )
		goto st55;
	goto st0;
st55:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof55;
case 55:
	if ( (*( state.p)) == 99 )
		goto st56;
	goto st0;
st56:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof56;
case 56:
	if ( (*( state.p)) == 101 )
		goto st57;
	goto st0;
st57:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof57;
case 57:
	if ( (*( state.p)) == 110 )
		goto st58;
	goto st0;
st58:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof58;
case 58:
	if ( (*( state.p)) == 115 )
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
		case 58: goto st439;
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
		case 34: goto tr106;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st61;
	goto st0;
tr106:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st62;
tr107:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st62;
tr109:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 62; goto st506;}}
	goto st62;
st62:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof62;
case 62:
#line 2675 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st514;
		case 92: goto tr109;
	}
	goto tr107;
st514:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof514;
case 514:
	switch( (*( state.p)) ) {
		case 13: goto tr865;
		case 32: goto tr865;
		case 35: goto tr866;
		case 65: goto tr867;
		case 66: goto tr868;
		case 67: goto tr869;
		case 68: goto tr870;
		case 71: goto tr871;
		case 76: goto tr872;
		case 78: goto tr873;
		case 79: goto tr874;
		case 80: goto tr875;
		case 82: goto tr876;
		case 83: goto tr877;
		case 85: goto tr878;
		case 86: goto tr879;
		case 97: goto tr867;
		case 98: goto tr868;
		case 99: goto tr869;
		case 100: goto tr870;
		case 103: goto tr871;
		case 108: goto tr872;
		case 110: goto tr873;
		case 111: goto tr874;
		case 112: goto tr875;
		case 114: goto tr876;
		case 115: goto tr877;
		case 117: goto tr878;
		case 118: goto tr879;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr865;
	goto st0;
tr780:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st63;
tr795:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st63;
tr813:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st63;
tr828:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st63;
tr843:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st63;
tr858:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st63;
tr873:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st63;
tr888:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st63;
tr903:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st63;
tr918:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st63;
tr933:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st63;
tr948:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st63;
tr963:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st63;
tr978:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st63;
tr993:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st63;
tr1011:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st63;
tr1026:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st63;
tr1041:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st63;
tr1056:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st63;
tr1071:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st63;
tr1086:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st63;
tr1101:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st63;
tr1119:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st63;
tr1134:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st63;
tr1152:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st63;
tr1167:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st63;
tr1182:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st63;
st63:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof63;
case 63:
#line 2839 "propsparser.h"
	if ( (*( state.p)) == 97 )
		goto st64;
	goto st0;
st64:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof64;
case 64:
	if ( (*( state.p)) == 109 )
		goto st65;
	goto st0;
st65:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof65;
case 65:
	if ( (*( state.p)) == 101 )
		goto st66;
	goto st0;
st66:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof66;
case 66:
	switch( (*( state.p)) ) {
		case 13: goto st67;
		case 32: goto st67;
		case 58: goto st438;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st67;
	goto st0;
st67:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof67;
case 67:
	switch( (*( state.p)) ) {
		case 13: goto st67;
		case 32: goto st67;
		case 34: goto tr115;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st67;
	goto st0;
tr115:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st68;
tr116:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st68;
tr118:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 68; goto st506;}}
	goto st68;
st68:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof68;
case 68:
#line 2901 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st515;
		case 92: goto tr118;
	}
	goto tr116;
st515:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof515;
case 515:
	switch( (*( state.p)) ) {
		case 13: goto tr880;
		case 32: goto tr880;
		case 35: goto tr881;
		case 65: goto tr882;
		case 66: goto tr883;
		case 67: goto tr884;
		case 68: goto tr885;
		case 71: goto tr886;
		case 76: goto tr887;
		case 78: goto tr888;
		case 79: goto tr889;
		case 80: goto tr890;
		case 82: goto tr891;
		case 83: goto tr892;
		case 85: goto tr893;
		case 86: goto tr894;
		case 97: goto tr882;
		case 98: goto tr883;
		case 99: goto tr884;
		case 100: goto tr885;
		case 103: goto tr886;
		case 108: goto tr887;
		case 110: goto tr888;
		case 111: goto tr889;
		case 112: goto tr890;
		case 114: goto tr891;
		case 115: goto tr892;
		case 117: goto tr893;
		case 118: goto tr894;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr880;
	goto st0;
tr781:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st69;
tr796:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st69;
tr814:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st69;
tr829:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st69;
tr844:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st69;
tr859:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st69;
tr874:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st69;
tr889:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st69;
tr904:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st69;
tr919:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st69;
tr934:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st69;
tr949:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st69;
tr964:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st69;
tr979:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st69;
tr994:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st69;
tr1012:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st69;
tr1027:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st69;
tr1042:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st69;
tr1057:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st69;
tr1072:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st69;
tr1087:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st69;
tr1102:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st69;
tr1120:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st69;
tr1135:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st69;
tr1153:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st69;
tr1168:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st69;
tr1183:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st69;
st69:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof69;
case 69:
#line 3065 "propsparser.h"
	switch( (*( state.p)) ) {
		case 83: goto st70;
		case 98: goto st352;
		case 112: goto st428;
		case 115: goto st70;
	}
	goto st0;
st70:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof70;
case 70:
	switch( (*( state.p)) ) {
		case 13: goto st71;
		case 32: goto st71;
		case 58: goto st351;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st71;
	goto st0;
st71:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof71;
case 71:
	switch( (*( state.p)) ) {
		case 13: goto st71;
		case 32: goto st71;
		case 34: goto tr124;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st71;
	goto st0;
tr124:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st72;
tr125:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st72;
tr127:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 72; goto st506;}}
	goto st72;
st72:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof72;
case 72:
#line 3117 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st516;
		case 92: goto tr127;
	}
	goto tr125;
st516:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof516;
case 516:
	switch( (*( state.p)) ) {
		case 13: goto tr895;
		case 32: goto tr895;
		case 35: goto tr896;
		case 65: goto tr897;
		case 66: goto tr898;
		case 67: goto tr899;
		case 68: goto tr900;
		case 71: goto tr901;
		case 76: goto tr902;
		case 78: goto tr903;
		case 79: goto tr904;
		case 80: goto tr905;
		case 82: goto tr906;
		case 83: goto tr907;
		case 85: goto tr908;
		case 86: goto tr909;
		case 97: goto tr897;
		case 98: goto tr898;
		case 99: goto tr899;
		case 100: goto tr900;
		case 103: goto tr901;
		case 108: goto tr902;
		case 110: goto tr903;
		case 111: goto tr904;
		case 112: goto tr905;
		case 114: goto tr906;
		case 115: goto tr907;
		case 117: goto tr908;
		case 118: goto tr909;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr895;
	goto st0;
tr782:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st73;
tr797:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st73;
tr815:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st73;
tr830:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st73;
tr845:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st73;
tr860:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st73;
tr875:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st73;
tr890:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st73;
tr905:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st73;
tr920:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st73;
tr935:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st73;
tr950:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st73;
tr965:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st73;
tr980:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st73;
tr995:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st73;
tr1013:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st73;
tr1028:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st73;
tr1043:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st73;
tr1058:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st73;
tr1073:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st73;
tr1088:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st73;
tr1103:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st73;
tr1121:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st73;
tr1136:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st73;
tr1154:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st73;
tr1169:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st73;
tr1184:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st73;
st73:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof73;
case 73:
#line 3281 "propsparser.h"
	switch( (*( state.p)) ) {
		case 97: goto st74;
		case 108: goto st206;
		case 111: goto st216;
		case 114: goto st247;
	}
	goto st0;
st74:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof74;
case 74:
	if ( (*( state.p)) == 99 )
		goto st75;
	goto st0;
st75:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof75;
case 75:
	if ( (*( state.p)) == 107 )
		goto st76;
	goto st0;
st76:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof76;
case 76:
	if ( (*( state.p)) == 97 )
		goto st77;
	goto st0;
st77:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof77;
case 77:
	if ( (*( state.p)) == 103 )
		goto st78;
	goto st0;
st78:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof78;
case 78:
	if ( (*( state.p)) == 101 )
		goto st79;
	goto st0;
st79:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof79;
case 79:
	if ( (*( state.p)) == 114 )
		goto st80;
	goto st0;
st80:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof80;
case 80:
	switch( (*( state.p)) ) {
		case 13: goto st81;
		case 32: goto st81;
		case 58: goto st205;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st81;
	goto st0;
st81:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof81;
case 81:
	switch( (*( state.p)) ) {
		case 13: goto st81;
		case 32: goto st81;
		case 34: goto tr140;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st81;
	goto st0;
tr140:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st82;
tr141:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st82;
tr143:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 82; goto st506;}}
	goto st82;
st82:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof82;
case 82:
#line 3375 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st517;
		case 92: goto tr143;
	}
	goto tr141;
st517:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof517;
case 517:
	switch( (*( state.p)) ) {
		case 13: goto tr910;
		case 32: goto tr910;
		case 35: goto tr911;
		case 65: goto tr912;
		case 66: goto tr913;
		case 67: goto tr914;
		case 68: goto tr915;
		case 71: goto tr916;
		case 76: goto tr917;
		case 78: goto tr918;
		case 79: goto tr919;
		case 80: goto tr920;
		case 82: goto tr921;
		case 83: goto tr922;
		case 85: goto tr923;
		case 86: goto tr924;
		case 97: goto tr912;
		case 98: goto tr913;
		case 99: goto tr914;
		case 100: goto tr915;
		case 103: goto tr916;
		case 108: goto tr917;
		case 110: goto tr918;
		case 111: goto tr919;
		case 112: goto tr920;
		case 114: goto tr921;
		case 115: goto tr922;
		case 117: goto tr923;
		case 118: goto tr924;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr910;
	goto st0;
tr783:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st83;
tr798:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st83;
tr816:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st83;
tr831:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st83;
tr846:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st83;
tr861:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st83;
tr876:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st83;
tr891:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st83;
tr906:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st83;
tr921:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st83;
tr936:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st83;
tr951:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st83;
tr966:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st83;
tr981:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st83;
tr996:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st83;
tr1014:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st83;
tr1029:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st83;
tr1044:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st83;
tr1059:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st83;
tr1074:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st83;
tr1089:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st83;
tr1104:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st83;
tr1122:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st83;
tr1137:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st83;
tr1155:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st83;
tr1170:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st83;
tr1185:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st83;
st83:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof83;
case 83:
#line 3539 "propsparser.h"
	switch( (*( state.p)) ) {
		case 80: goto st84;
		case 101: goto st122;
		case 112: goto st84;
	}
	goto st0;
st84:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof84;
case 84:
	switch( (*( state.p)) ) {
		case 77: goto st85;
		case 109: goto st85;
	}
	goto st0;
st85:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof85;
case 85:
	switch( (*( state.p)) ) {
		case 86: goto st86;
		case 118: goto st86;
	}
	goto st0;
st86:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof86;
case 86:
	if ( (*( state.p)) == 101 )
		goto st87;
	goto st0;
st87:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof87;
case 87:
	if ( (*( state.p)) == 114 )
		goto st88;
	goto st0;
st88:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof88;
case 88:
	if ( (*( state.p)) == 115 )
		goto st89;
	goto st0;
st89:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof89;
case 89:
	if ( (*( state.p)) == 105 )
		goto st90;
	goto st0;
st90:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof90;
case 90:
	if ( (*( state.p)) == 111 )
		goto st91;
	goto st0;
st91:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof91;
case 91:
	if ( (*( state.p)) == 110 )
		goto st92;
	goto st0;
st92:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof92;
case 92:
	switch( (*( state.p)) ) {
		case 13: goto st93;
		case 32: goto st93;
		case 58: goto st121;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st93;
	goto st0;
st93:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof93;
case 93:
	switch( (*( state.p)) ) {
		case 13: goto st93;
		case 32: goto st93;
		case 34: goto tr156;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st93;
	goto st0;
tr156:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st94;
tr157:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st94;
tr159:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 94; goto st506;}}
	goto st94;
st94:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof94;
case 94:
#line 3650 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st518;
		case 92: goto tr159;
	}
	goto tr157;
st518:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof518;
case 518:
	switch( (*( state.p)) ) {
		case 13: goto tr925;
		case 32: goto tr925;
		case 35: goto tr926;
		case 65: goto tr927;
		case 66: goto tr928;
		case 67: goto tr929;
		case 68: goto tr930;
		case 71: goto tr931;
		case 76: goto tr932;
		case 78: goto tr933;
		case 79: goto tr934;
		case 80: goto tr935;
		case 82: goto tr936;
		case 83: goto tr937;
		case 85: goto tr938;
		case 86: goto tr939;
		case 97: goto tr927;
		case 98: goto tr928;
		case 99: goto tr929;
		case 100: goto tr930;
		case 103: goto tr931;
		case 108: goto tr932;
		case 110: goto tr933;
		case 111: goto tr934;
		case 112: goto tr935;
		case 114: goto tr936;
		case 115: goto tr937;
		case 117: goto tr938;
		case 118: goto tr939;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr925;
	goto st0;
tr784:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st95;
tr799:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st95;
tr817:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st95;
tr832:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st95;
tr847:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st95;
tr862:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st95;
tr877:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st95;
tr892:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st95;
tr907:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st95;
tr922:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st95;
tr937:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st95;
tr952:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st95;
tr967:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st95;
tr982:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st95;
tr997:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st95;
tr1015:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st95;
tr1030:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st95;
tr1045:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st95;
tr1060:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st95;
tr1075:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st95;
tr1090:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st95;
tr1105:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st95;
tr1123:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st95;
tr1138:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st95;
tr1156:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st95;
tr1171:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st95;
tr1186:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st95;
st95:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof95;
case 95:
#line 3814 "propsparser.h"
	if ( (*( state.p)) == 117 )
		goto st96;
	goto st0;
st96:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof96;
case 96:
	if ( (*( state.p)) == 109 )
		goto st97;
	goto st0;
st97:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof97;
case 97:
	if ( (*( state.p)) == 109 )
		goto st98;
	goto st0;
st98:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof98;
case 98:
	if ( (*( state.p)) == 97 )
		goto st99;
	goto st0;
st99:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof99;
case 99:
	if ( (*( state.p)) == 114 )
		goto st100;
	goto st0;
st100:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof100;
case 100:
	if ( (*( state.p)) == 121 )
		goto st101;
	goto st0;
st101:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof101;
case 101:
	switch( (*( state.p)) ) {
		case 13: goto st102;
		case 32: goto st102;
		case 58: goto st120;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st102;
	goto st0;
st102:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof102;
case 102:
	switch( (*( state.p)) ) {
		case 13: goto st102;
		case 32: goto st102;
		case 34: goto tr168;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st102;
	goto st0;
tr168:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st103;
tr169:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st103;
tr171:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 103; goto st506;}}
	goto st103;
st103:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof103;
case 103:
#line 3897 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st519;
		case 92: goto tr171;
	}
	goto tr169;
st519:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof519;
case 519:
	switch( (*( state.p)) ) {
		case 13: goto tr940;
		case 32: goto tr940;
		case 35: goto tr941;
		case 65: goto tr942;
		case 66: goto tr943;
		case 67: goto tr944;
		case 68: goto tr945;
		case 71: goto tr946;
		case 76: goto tr947;
		case 78: goto tr948;
		case 79: goto tr949;
		case 80: goto tr950;
		case 82: goto tr951;
		case 83: goto tr952;
		case 85: goto tr953;
		case 86: goto tr954;
		case 97: goto tr942;
		case 98: goto tr943;
		case 99: goto tr944;
		case 100: goto tr945;
		case 103: goto tr946;
		case 108: goto tr947;
		case 110: goto tr948;
		case 111: goto tr949;
		case 112: goto tr950;
		case 114: goto tr951;
		case 115: goto tr952;
		case 117: goto tr953;
		case 118: goto tr954;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr940;
	goto st0;
tr785:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st104;
tr800:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st104;
tr818:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st104;
tr833:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st104;
tr848:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st104;
tr863:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st104;
tr878:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st104;
tr893:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st104;
tr908:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st104;
tr923:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st104;
tr938:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st104;
tr953:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st104;
tr968:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st104;
tr983:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st104;
tr998:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st104;
tr1016:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st104;
tr1031:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st104;
tr1046:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st104;
tr1061:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st104;
tr1076:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st104;
tr1091:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st104;
tr1106:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st104;
tr1124:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st104;
tr1139:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st104;
tr1157:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st104;
tr1172:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st104;
tr1187:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st104;
st104:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof104;
case 104:
#line 4061 "propsparser.h"
	switch( (*( state.p)) ) {
		case 82: goto st105;
		case 114: goto st105;
	}
	goto st0;
st105:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof105;
case 105:
	switch( (*( state.p)) ) {
		case 76: goto st106;
		case 108: goto st106;
	}
	goto st0;
st106:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof106;
case 106:
	switch( (*( state.p)) ) {
		case 13: goto st107;
		case 32: goto st107;
		case 58: goto st119;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st107;
	goto st0;
st107:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof107;
case 107:
	switch( (*( state.p)) ) {
		case 13: goto st107;
		case 32: goto st107;
		case 34: goto tr176;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st107;
	goto st0;
tr176:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st108;
tr177:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st108;
tr179:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 108; goto st506;}}
	goto st108;
st108:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof108;
case 108:
#line 4120 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st520;
		case 92: goto tr179;
	}
	goto tr177;
st520:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof520;
case 520:
	switch( (*( state.p)) ) {
		case 13: goto tr955;
		case 32: goto tr955;
		case 35: goto tr956;
		case 65: goto tr957;
		case 66: goto tr958;
		case 67: goto tr959;
		case 68: goto tr960;
		case 71: goto tr961;
		case 76: goto tr962;
		case 78: goto tr963;
		case 79: goto tr964;
		case 80: goto tr965;
		case 82: goto tr966;
		case 83: goto tr967;
		case 85: goto tr968;
		case 86: goto tr969;
		case 97: goto tr957;
		case 98: goto tr958;
		case 99: goto tr959;
		case 100: goto tr960;
		case 103: goto tr961;
		case 108: goto tr962;
		case 110: goto tr963;
		case 111: goto tr964;
		case 112: goto tr965;
		case 114: goto tr966;
		case 115: goto tr967;
		case 117: goto tr968;
		case 118: goto tr969;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr955;
	goto st0;
tr786:
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	goto st109;
tr801:
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	goto st109;
tr819:
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st109;
tr834:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	goto st109;
tr849:
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	goto st109;
tr864:
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	goto st109;
tr879:
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	goto st109;
tr894:
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	goto st109;
tr909:
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	goto st109;
tr924:
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	goto st109;
tr939:
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	goto st109;
tr954:
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	goto st109;
tr969:
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	goto st109;
tr984:
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	goto st109;
tr999:
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	goto st109;
tr1017:
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st109;
tr1032:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	goto st109;
tr1047:
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	goto st109;
tr1062:
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	goto st109;
tr1077:
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	goto st109;
tr1092:
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	goto st109;
tr1107:
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	goto st109;
tr1125:
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st109;
tr1140:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	goto st109;
tr1158:
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st109;
tr1173:
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	goto st109;
tr1188:
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	goto st109;
st109:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof109;
case 109:
#line 4284 "propsparser.h"
	if ( (*( state.p)) == 101 )
		goto st110;
	goto st0;
st110:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof110;
case 110:
	if ( (*( state.p)) == 114 )
		goto st111;
	goto st0;
st111:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof111;
case 111:
	if ( (*( state.p)) == 115 )
		goto st112;
	goto st0;
st112:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof112;
case 112:
	if ( (*( state.p)) == 105 )
		goto st113;
	goto st0;
st113:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof113;
case 113:
	if ( (*( state.p)) == 111 )
		goto st114;
	goto st0;
st114:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof114;
case 114:
	if ( (*( state.p)) == 110 )
		goto st115;
	goto st0;
st115:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof115;
case 115:
	switch( (*( state.p)) ) {
		case 13: goto st116;
		case 32: goto st116;
		case 58: goto st118;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st116;
	goto st0;
st116:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof116;
case 116:
	switch( (*( state.p)) ) {
		case 13: goto st116;
		case 32: goto st116;
		case 34: goto tr188;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st116;
	goto st0;
tr188:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st117;
tr189:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st117;
tr191:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 117; goto st506;}}
	goto st117;
st117:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof117;
case 117:
#line 4367 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st521;
		case 92: goto tr191;
	}
	goto tr189;
st521:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof521;
case 521:
	switch( (*( state.p)) ) {
		case 13: goto tr970;
		case 32: goto tr970;
		case 35: goto tr971;
		case 65: goto tr972;
		case 66: goto tr973;
		case 67: goto tr974;
		case 68: goto tr975;
		case 71: goto tr976;
		case 76: goto tr977;
		case 78: goto tr978;
		case 79: goto tr979;
		case 80: goto tr980;
		case 82: goto tr981;
		case 83: goto tr982;
		case 85: goto tr983;
		case 86: goto tr984;
		case 97: goto tr972;
		case 98: goto tr973;
		case 99: goto tr974;
		case 100: goto tr975;
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
		goto tr970;
	goto st0;
st118:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof118;
case 118:
	switch( (*( state.p)) ) {
		case 13: goto st116;
		case 32: goto st116;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st116;
	goto st0;
st119:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof119;
case 119:
	switch( (*( state.p)) ) {
		case 13: goto st107;
		case 32: goto st107;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st107;
	goto st0;
st120:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof120;
case 120:
	switch( (*( state.p)) ) {
		case 13: goto st102;
		case 32: goto st102;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st102;
	goto st0;
st121:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof121;
case 121:
	switch( (*( state.p)) ) {
		case 13: goto st93;
		case 32: goto st93;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st93;
	goto st0;
st122:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof122;
case 122:
	switch( (*( state.p)) ) {
		case 108: goto st123;
		case 113: goto st131;
	}
	goto st0;
st123:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof123;
case 123:
	if ( (*( state.p)) == 101 )
		goto st124;
	goto st0;
st124:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof124;
case 124:
	if ( (*( state.p)) == 97 )
		goto st125;
	goto st0;
st125:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof125;
case 125:
	if ( (*( state.p)) == 115 )
		goto st126;
	goto st0;
st126:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof126;
case 126:
	if ( (*( state.p)) == 101 )
		goto st127;
	goto st0;
st127:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof127;
case 127:
	switch( (*( state.p)) ) {
		case 13: goto st128;
		case 32: goto st128;
		case 58: goto st130;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st128;
	goto st0;
st128:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof128;
case 128:
	switch( (*( state.p)) ) {
		case 13: goto st128;
		case 32: goto st128;
		case 34: goto tr200;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st128;
	goto st0;
tr200:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st129;
tr201:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st129;
tr203:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 129; goto st506;}}
	goto st129;
st129:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof129;
case 129:
#line 4536 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st522;
		case 92: goto tr203;
	}
	goto tr201;
st522:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof522;
case 522:
	switch( (*( state.p)) ) {
		case 13: goto tr985;
		case 32: goto tr985;
		case 35: goto tr986;
		case 65: goto tr987;
		case 66: goto tr988;
		case 67: goto tr989;
		case 68: goto tr990;
		case 71: goto tr991;
		case 76: goto tr992;
		case 78: goto tr993;
		case 79: goto tr994;
		case 80: goto tr995;
		case 82: goto tr996;
		case 83: goto tr997;
		case 85: goto tr998;
		case 86: goto tr999;
		case 97: goto tr987;
		case 98: goto tr988;
		case 99: goto tr989;
		case 100: goto tr990;
		case 103: goto tr991;
		case 108: goto tr992;
		case 110: goto tr993;
		case 111: goto tr994;
		case 112: goto tr995;
		case 114: goto tr996;
		case 115: goto tr997;
		case 117: goto tr998;
		case 118: goto tr999;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr985;
	goto st0;
st130:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof130;
case 130:
	switch( (*( state.p)) ) {
		case 13: goto st128;
		case 32: goto st128;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st128;
	goto st0;
st131:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof131;
case 131:
	if ( (*( state.p)) == 117 )
		goto st132;
	goto st0;
st132:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof132;
case 132:
	if ( (*( state.p)) == 105 )
		goto st133;
	goto st0;
st133:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof133;
case 133:
	if ( (*( state.p)) == 114 )
		goto st134;
	goto st0;
st134:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof134;
case 134:
	if ( (*( state.p)) == 101 )
		goto st135;
	goto st0;
st135:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof135;
case 135:
	if ( (*( state.p)) == 115 )
		goto st136;
	goto st0;
st136:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof136;
case 136:
	switch( (*( state.p)) ) {
		case 13: goto tr209;
		case 32: goto tr209;
		case 58: goto st204;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr209;
	goto st0;
tr209:
#line 196 "propsparser.rl"
	{ deps = rpmprops_t::deps_t(); }
	goto st137;
st137:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof137;
case 137:
#line 4646 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr209;
		case 32: goto tr209;
		case 34: goto tr211;
		case 97: goto st149;
		case 99: goto st157;
		case 105: goto st163;
		case 112: goto st169;
		case 114: goto st192;
		case 118: goto st198;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr209;
	goto st0;
tr211:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st138;
tr218:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st138;
tr220:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 138; goto st506;}}
	goto st138;
st138:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof138;
case 138:
#line 4681 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st139;
		case 92: goto tr220;
	}
	goto tr218;
st139:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof139;
case 139:
	switch( (*( state.p)) ) {
		case 13: goto tr221;
		case 32: goto tr221;
		case 60: goto tr222;
		case 61: goto tr223;
		case 62: goto tr224;
		case 97: goto tr225;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr221;
	goto st0;
tr221:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st523;
tr256:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st523;
st523:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof523;
case 523:
#line 4714 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr1000;
		case 32: goto tr1000;
		case 35: goto tr1001;
		case 60: goto st140;
		case 61: goto st144;
		case 62: goto st145;
		case 65: goto tr1005;
		case 66: goto tr1006;
		case 67: goto tr1007;
		case 68: goto tr1008;
		case 71: goto tr1009;
		case 76: goto tr1010;
		case 78: goto tr1011;
		case 79: goto tr1012;
		case 80: goto tr1013;
		case 82: goto tr1014;
		case 83: goto tr1015;
		case 85: goto tr1016;
		case 86: goto tr1017;
		case 97: goto tr1005;
		case 98: goto tr1006;
		case 99: goto tr1007;
		case 100: goto tr1008;
		case 103: goto tr1009;
		case 108: goto tr1010;
		case 110: goto tr1011;
		case 111: goto tr1012;
		case 112: goto tr1013;
		case 114: goto tr1014;
		case 115: goto tr1015;
		case 117: goto tr1016;
		case 118: goto tr1017;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1000;
	goto st0;
tr222:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st140;
tr257:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st140;
st140:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof140;
case 140:
#line 4764 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr226;
		case 32: goto tr226;
		case 34: goto tr227;
		case 61: goto st143;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr226;
	goto st0;
tr226:
#line 177 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
	goto st141;
tr234:
#line 179 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
	goto st141;
tr236:
#line 176 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
	goto st141;
tr238:
#line 178 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
	goto st141;
tr241:
#line 180 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
	goto st141;
st141:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof141;
case 141:
#line 4798 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st141;
		case 32: goto st141;
		case 34: goto tr230;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st141;
	goto st0;
tr230:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st142;
tr231:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st142;
tr233:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 142; goto st506;}}
	goto st142;
tr227:
#line 177 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st142;
tr235:
#line 179 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st142;
tr237:
#line 176 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st142;
tr239:
#line 178 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st142;
tr242:
#line 180 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st142;
st142:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof142;
case 142:
#line 4867 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st524;
		case 92: goto tr233;
	}
	goto tr231;
st524:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof524;
case 524:
	switch( (*( state.p)) ) {
		case 13: goto tr1018;
		case 32: goto tr1018;
		case 35: goto tr1019;
		case 65: goto tr1020;
		case 66: goto tr1021;
		case 67: goto tr1022;
		case 68: goto tr1023;
		case 71: goto tr1024;
		case 76: goto tr1025;
		case 78: goto tr1026;
		case 79: goto tr1027;
		case 80: goto tr1028;
		case 82: goto tr1029;
		case 83: goto tr1030;
		case 85: goto tr1031;
		case 86: goto tr1032;
		case 97: goto tr1020;
		case 98: goto tr1021;
		case 99: goto tr1022;
		case 100: goto tr1023;
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
		goto tr1018;
	goto st0;
st143:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof143;
case 143:
	switch( (*( state.p)) ) {
		case 13: goto tr234;
		case 32: goto tr234;
		case 34: goto tr235;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr234;
	goto st0;
tr223:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st144;
tr258:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st144;
st144:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof144;
case 144:
#line 4935 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr236;
		case 32: goto tr236;
		case 34: goto tr237;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr236;
	goto st0;
tr224:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st145;
tr259:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st145;
st145:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof145;
case 145:
#line 4956 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr238;
		case 32: goto tr238;
		case 34: goto tr239;
		case 61: goto st146;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr238;
	goto st0;
st146:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof146;
case 146:
	switch( (*( state.p)) ) {
		case 13: goto tr241;
		case 32: goto tr241;
		case 34: goto tr242;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr241;
	goto st0;
tr225:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st147;
tr260:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st147;
st147:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof147;
case 147:
#line 4990 "propsparser.h"
	if ( (*( state.p)) == 110 )
		goto st148;
	goto st0;
st148:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof148;
case 148:
	if ( (*( state.p)) == 121 )
		goto st525;
	goto st0;
st525:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof525;
case 525:
	switch( (*( state.p)) ) {
		case 13: goto tr1000;
		case 32: goto tr1000;
		case 35: goto tr1001;
		case 65: goto tr1005;
		case 66: goto tr1006;
		case 67: goto tr1007;
		case 68: goto tr1008;
		case 71: goto tr1009;
		case 76: goto tr1010;
		case 78: goto tr1011;
		case 79: goto tr1012;
		case 80: goto tr1013;
		case 82: goto tr1014;
		case 83: goto tr1015;
		case 85: goto tr1016;
		case 86: goto tr1017;
		case 97: goto tr1005;
		case 98: goto tr1006;
		case 99: goto tr1007;
		case 100: goto tr1008;
		case 103: goto tr1009;
		case 108: goto tr1010;
		case 110: goto tr1011;
		case 111: goto tr1012;
		case 112: goto tr1013;
		case 114: goto tr1014;
		case 115: goto tr1015;
		case 117: goto tr1016;
		case 118: goto tr1017;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1000;
	goto st0;
st149:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof149;
case 149:
	if ( (*( state.p)) == 117 )
		goto st150;
	goto st0;
st150:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof150;
case 150:
	if ( (*( state.p)) == 116 )
		goto st151;
	goto st0;
st151:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof151;
case 151:
	if ( (*( state.p)) == 111 )
		goto st152;
	goto st0;
st152:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof152;
case 152:
	switch( (*( state.p)) ) {
		case 13: goto tr248;
		case 32: goto tr248;
		case 44: goto tr249;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr248;
	goto st0;
tr248:
#line 163 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st153;
tr266:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st153;
tr273:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st153;
tr279:
#line 153 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st153;
tr287:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st153;
tr290:
#line 155 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st153;
tr293:
#line 152 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st153;
tr300:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st153;
tr306:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st153;
tr309:
#line 154 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st153;
tr316:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st153;
tr323:
#line 156 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st153;
st153:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof153;
case 153:
#line 5125 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st153;
		case 32: goto st153;
		case 34: goto tr251;
		case 44: goto st156;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st153;
	goto st0;
tr251:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st154;
tr253:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st154;
tr255:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 154; goto st506;}}
	goto st154;
st154:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof154;
case 154:
#line 5155 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st155;
		case 92: goto tr255;
	}
	goto tr253;
st155:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof155;
case 155:
	switch( (*( state.p)) ) {
		case 13: goto tr256;
		case 32: goto tr256;
		case 60: goto tr257;
		case 61: goto tr258;
		case 62: goto tr259;
		case 97: goto tr260;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr256;
	goto st0;
tr249:
#line 163 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st156;
tr267:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st156;
tr274:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st156;
tr280:
#line 153 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st156;
tr288:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st156;
tr291:
#line 155 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st156;
tr294:
#line 152 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st156;
tr301:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st156;
tr307:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st156;
tr310:
#line 154 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st156;
tr317:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st156;
tr324:
#line 156 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st156;
st156:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof156;
case 156:
#line 5229 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st156;
		case 32: goto st156;
		case 97: goto st149;
		case 99: goto st157;
		case 105: goto st163;
		case 112: goto st169;
		case 114: goto st192;
		case 118: goto st198;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st156;
	goto st0;
st157:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof157;
case 157:
	if ( (*( state.p)) == 111 )
		goto st158;
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
	if ( (*( state.p)) == 102 )
		goto st160;
	goto st0;
st160:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof160;
case 160:
	if ( (*( state.p)) == 105 )
		goto st161;
	goto st0;
st161:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof161;
case 161:
	if ( (*( state.p)) == 103 )
		goto st162;
	goto st0;
st162:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof162;
case 162:
	switch( (*( state.p)) ) {
		case 13: goto tr266;
		case 32: goto tr266;
		case 44: goto tr267;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr266;
	goto st0;
st163:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof163;
case 163:
	if ( (*( state.p)) == 110 )
		goto st164;
	goto st0;
st164:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof164;
case 164:
	if ( (*( state.p)) == 116 )
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
	if ( (*( state.p)) == 114 )
		goto st167;
	goto st0;
st167:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof167;
case 167:
	if ( (*( state.p)) == 112 )
		goto st168;
	goto st0;
st168:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof168;
case 168:
	switch( (*( state.p)) ) {
		case 13: goto tr273;
		case 32: goto tr273;
		case 44: goto tr274;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr273;
	goto st0;
st169:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof169;
case 169:
	switch( (*( state.p)) ) {
		case 111: goto st170;
		case 114: goto st180;
	}
	goto st0;
st170:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof170;
case 170:
	if ( (*( state.p)) == 115 )
		goto st171;
	goto st0;
st171:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof171;
case 171:
	if ( (*( state.p)) == 116 )
		goto st172;
	goto st0;
st172:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof172;
case 172:
	switch( (*( state.p)) ) {
		case 13: goto tr279;
		case 32: goto tr279;
		case 44: goto tr280;
		case 116: goto st173;
		case 117: goto st178;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr279;
	goto st0;
st173:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof173;
case 173:
	if ( (*( state.p)) == 114 )
		goto st174;
	goto st0;
st174:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof174;
case 174:
	if ( (*( state.p)) == 97 )
		goto st175;
	goto st0;
st175:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof175;
case 175:
	if ( (*( state.p)) == 110 )
		goto st176;
	goto st0;
st176:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof176;
case 176:
	if ( (*( state.p)) == 115 )
		goto st177;
	goto st0;
st177:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof177;
case 177:
	switch( (*( state.p)) ) {
		case 13: goto tr287;
		case 32: goto tr287;
		case 44: goto tr288;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr287;
	goto st0;
st178:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof178;
case 178:
	if ( (*( state.p)) == 110 )
		goto st179;
	goto st0;
st179:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof179;
case 179:
	switch( (*( state.p)) ) {
		case 13: goto tr290;
		case 32: goto tr290;
		case 44: goto tr291;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr290;
	goto st0;
st180:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof180;
case 180:
	if ( (*( state.p)) == 101 )
		goto st181;
	goto st0;
st181:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof181;
case 181:
	switch( (*( state.p)) ) {
		case 13: goto tr293;
		case 32: goto tr293;
		case 44: goto tr294;
		case 114: goto st182;
		case 116: goto st185;
		case 117: goto st190;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr293;
	goto st0;
st182:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof182;
case 182:
	if ( (*( state.p)) == 101 )
		goto st183;
	goto st0;
st183:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof183;
case 183:
	if ( (*( state.p)) == 113 )
		goto st184;
	goto st0;
st184:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof184;
case 184:
	switch( (*( state.p)) ) {
		case 13: goto tr300;
		case 32: goto tr300;
		case 44: goto tr301;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr300;
	goto st0;
st185:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof185;
case 185:
	if ( (*( state.p)) == 114 )
		goto st186;
	goto st0;
st186:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof186;
case 186:
	if ( (*( state.p)) == 97 )
		goto st187;
	goto st0;
st187:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof187;
case 187:
	if ( (*( state.p)) == 110 )
		goto st188;
	goto st0;
st188:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof188;
case 188:
	if ( (*( state.p)) == 115 )
		goto st189;
	goto st0;
st189:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof189;
case 189:
	switch( (*( state.p)) ) {
		case 13: goto tr306;
		case 32: goto tr306;
		case 44: goto tr307;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr306;
	goto st0;
st190:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof190;
case 190:
	if ( (*( state.p)) == 110 )
		goto st191;
	goto st0;
st191:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof191;
case 191:
	switch( (*( state.p)) ) {
		case 13: goto tr309;
		case 32: goto tr309;
		case 44: goto tr310;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr309;
	goto st0;
st192:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof192;
case 192:
	if ( (*( state.p)) == 112 )
		goto st193;
	goto st0;
st193:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof193;
case 193:
	if ( (*( state.p)) == 109 )
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
	if ( (*( state.p)) == 105 )
		goto st196;
	goto st0;
st196:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof196;
case 196:
	if ( (*( state.p)) == 98 )
		goto st197;
	goto st0;
st197:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof197;
case 197:
	switch( (*( state.p)) ) {
		case 13: goto tr316;
		case 32: goto tr316;
		case 44: goto tr317;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr316;
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
	if ( (*( state.p)) == 114 )
		goto st200;
	goto st0;
st200:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof200;
case 200:
	if ( (*( state.p)) == 105 )
		goto st201;
	goto st0;
st201:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof201;
case 201:
	if ( (*( state.p)) == 102 )
		goto st202;
	goto st0;
st202:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof202;
case 202:
	if ( (*( state.p)) == 121 )
		goto st203;
	goto st0;
st203:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof203;
case 203:
	switch( (*( state.p)) ) {
		case 13: goto tr323;
		case 32: goto tr323;
		case 44: goto tr324;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr323;
	goto st0;
st204:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof204;
case 204:
	switch( (*( state.p)) ) {
		case 13: goto tr209;
		case 32: goto tr209;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr209;
	goto st0;
st205:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof205;
case 205:
	switch( (*( state.p)) ) {
		case 13: goto st81;
		case 32: goto st81;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st81;
	goto st0;
st206:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof206;
case 206:
	if ( (*( state.p)) == 97 )
		goto st207;
	goto st0;
st207:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof207;
case 207:
	if ( (*( state.p)) == 116 )
		goto st208;
	goto st0;
st208:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof208;
case 208:
	if ( (*( state.p)) == 102 )
		goto st209;
	goto st0;
st209:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof209;
case 209:
	if ( (*( state.p)) == 111 )
		goto st210;
	goto st0;
st210:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof210;
case 210:
	if ( (*( state.p)) == 114 )
		goto st211;
	goto st0;
st211:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof211;
case 211:
	if ( (*( state.p)) == 109 )
		goto st212;
	goto st0;
st212:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof212;
case 212:
	switch( (*( state.p)) ) {
		case 13: goto st213;
		case 32: goto st213;
		case 58: goto st215;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st213;
	goto st0;
st213:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof213;
case 213:
	switch( (*( state.p)) ) {
		case 13: goto st213;
		case 32: goto st213;
		case 34: goto tr333;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st213;
	goto st0;
tr333:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st214;
tr334:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st214;
tr336:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 214; goto st506;}}
	goto st214;
st214:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof214;
case 214:
#line 5742 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st526;
		case 92: goto tr336;
	}
	goto tr334;
st526:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof526;
case 526:
	switch( (*( state.p)) ) {
		case 13: goto tr1033;
		case 32: goto tr1033;
		case 35: goto tr1034;
		case 65: goto tr1035;
		case 66: goto tr1036;
		case 67: goto tr1037;
		case 68: goto tr1038;
		case 71: goto tr1039;
		case 76: goto tr1040;
		case 78: goto tr1041;
		case 79: goto tr1042;
		case 80: goto tr1043;
		case 82: goto tr1044;
		case 83: goto tr1045;
		case 85: goto tr1046;
		case 86: goto tr1047;
		case 97: goto tr1035;
		case 98: goto tr1036;
		case 99: goto tr1037;
		case 100: goto tr1038;
		case 103: goto tr1039;
		case 108: goto tr1040;
		case 110: goto tr1041;
		case 111: goto tr1042;
		case 112: goto tr1043;
		case 114: goto tr1044;
		case 115: goto tr1045;
		case 117: goto tr1046;
		case 118: goto tr1047;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1033;
	goto st0;
st215:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof215;
case 215:
	switch( (*( state.p)) ) {
		case 13: goto st213;
		case 32: goto st213;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st213;
	goto st0;
st216:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof216;
case 216:
	if ( (*( state.p)) == 115 )
		goto st217;
	goto st0;
st217:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof217;
case 217:
	if ( (*( state.p)) == 116 )
		goto st218;
	goto st0;
st218:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof218;
case 218:
	switch( (*( state.p)) ) {
		case 73: goto st219;
		case 85: goto st233;
		case 105: goto st219;
		case 117: goto st233;
	}
	goto st0;
st219:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof219;
case 219:
	if ( (*( state.p)) == 110 )
		goto st220;
	goto st0;
st220:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof220;
case 220:
	switch( (*( state.p)) ) {
		case 13: goto st221;
		case 32: goto st221;
		case 58: goto st232;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st221;
	goto st0;
st221:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof221;
case 221:
	switch( (*( state.p)) ) {
		case 13: goto st221;
		case 32: goto st221;
		case 34: goto tr344;
		case 115: goto st223;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st221;
	goto st0;
tr344:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st222;
tr346:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st222;
tr348:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 222; goto st506;}}
	goto st222;
st222:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof222;
case 222:
#line 5874 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st527;
		case 92: goto tr348;
	}
	goto tr346;
st527:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof527;
case 527:
	switch( (*( state.p)) ) {
		case 13: goto tr1048;
		case 32: goto tr1048;
		case 35: goto tr1049;
		case 65: goto tr1050;
		case 66: goto tr1051;
		case 67: goto tr1052;
		case 68: goto tr1053;
		case 71: goto tr1054;
		case 76: goto tr1055;
		case 78: goto tr1056;
		case 79: goto tr1057;
		case 80: goto tr1058;
		case 82: goto tr1059;
		case 83: goto tr1060;
		case 85: goto tr1061;
		case 86: goto tr1062;
		case 97: goto tr1050;
		case 98: goto tr1051;
		case 99: goto tr1052;
		case 100: goto tr1053;
		case 103: goto tr1054;
		case 108: goto tr1055;
		case 110: goto tr1056;
		case 111: goto tr1057;
		case 112: goto tr1058;
		case 114: goto tr1059;
		case 115: goto tr1060;
		case 117: goto tr1061;
		case 118: goto tr1062;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1048;
	goto st0;
st223:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof223;
case 223:
	if ( (*( state.p)) == 104 )
		goto st224;
	goto st0;
st224:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof224;
case 224:
	if ( (*( state.p)) == 101 )
		goto st225;
	goto st0;
st225:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof225;
case 225:
	if ( (*( state.p)) == 108 )
		goto st226;
	goto st0;
st226:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof226;
case 226:
	if ( (*( state.p)) == 108 )
		goto st227;
	goto st0;
st227:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof227;
case 227:
	switch( (*( state.p)) ) {
		case 13: goto st228;
		case 32: goto st228;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st228;
	goto st0;
st228:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof228;
case 228:
	switch( (*( state.p)) ) {
		case 13: goto st228;
		case 32: goto st228;
		case 34: goto tr354;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st228;
	goto st0;
tr354:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st229;
tr355:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st229;
tr357:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 229; goto st506;}}
	goto st229;
st229:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof229;
case 229:
#line 5989 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st230;
		case 92: goto tr357;
	}
	goto tr355;
st230:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof230;
case 230:
	switch( (*( state.p)) ) {
		case 13: goto tr358;
		case 32: goto tr358;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr358;
	goto st0;
tr358:
#line 138 "propsparser.rl"
	{ props.postin.prog = state.match; }
	goto st231;
st231:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof231;
case 231:
#line 6014 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st231;
		case 32: goto st231;
		case 34: goto tr344;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st231;
	goto st0;
st232:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof232;
case 232:
	switch( (*( state.p)) ) {
		case 13: goto st221;
		case 32: goto st221;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st221;
	goto st0;
st233:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof233;
case 233:
	if ( (*( state.p)) == 110 )
		goto st234;
	goto st0;
st234:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof234;
case 234:
	switch( (*( state.p)) ) {
		case 13: goto st235;
		case 32: goto st235;
		case 58: goto st246;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st235;
	goto st0;
st235:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof235;
case 235:
	switch( (*( state.p)) ) {
		case 13: goto st235;
		case 32: goto st235;
		case 34: goto tr363;
		case 115: goto st237;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st235;
	goto st0;
tr363:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st236;
tr365:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st236;
tr367:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 236; goto st506;}}
	goto st236;
st236:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof236;
case 236:
#line 6086 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st528;
		case 92: goto tr367;
	}
	goto tr365;
st528:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof528;
case 528:
	switch( (*( state.p)) ) {
		case 13: goto tr1063;
		case 32: goto tr1063;
		case 35: goto tr1064;
		case 65: goto tr1065;
		case 66: goto tr1066;
		case 67: goto tr1067;
		case 68: goto tr1068;
		case 71: goto tr1069;
		case 76: goto tr1070;
		case 78: goto tr1071;
		case 79: goto tr1072;
		case 80: goto tr1073;
		case 82: goto tr1074;
		case 83: goto tr1075;
		case 85: goto tr1076;
		case 86: goto tr1077;
		case 97: goto tr1065;
		case 98: goto tr1066;
		case 99: goto tr1067;
		case 100: goto tr1068;
		case 103: goto tr1069;
		case 108: goto tr1070;
		case 110: goto tr1071;
		case 111: goto tr1072;
		case 112: goto tr1073;
		case 114: goto tr1074;
		case 115: goto tr1075;
		case 117: goto tr1076;
		case 118: goto tr1077;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1063;
	goto st0;
st237:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof237;
case 237:
	if ( (*( state.p)) == 104 )
		goto st238;
	goto st0;
st238:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof238;
case 238:
	if ( (*( state.p)) == 101 )
		goto st239;
	goto st0;
st239:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof239;
case 239:
	if ( (*( state.p)) == 108 )
		goto st240;
	goto st0;
st240:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof240;
case 240:
	if ( (*( state.p)) == 108 )
		goto st241;
	goto st0;
st241:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof241;
case 241:
	switch( (*( state.p)) ) {
		case 13: goto st242;
		case 32: goto st242;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st242;
	goto st0;
st242:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof242;
case 242:
	switch( (*( state.p)) ) {
		case 13: goto st242;
		case 32: goto st242;
		case 34: goto tr373;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st242;
	goto st0;
tr373:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st243;
tr374:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st243;
tr376:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 243; goto st506;}}
	goto st243;
st243:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof243;
case 243:
#line 6201 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st244;
		case 92: goto tr376;
	}
	goto tr374;
st244:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof244;
case 244:
	switch( (*( state.p)) ) {
		case 13: goto tr377;
		case 32: goto tr377;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr377;
	goto st0;
tr377:
#line 146 "propsparser.rl"
	{ props.postun.prog = state.match; }
	goto st245;
st245:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof245;
case 245:
#line 6226 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st245;
		case 32: goto st245;
		case 34: goto tr363;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st245;
	goto st0;
st246:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof246;
case 246:
	switch( (*( state.p)) ) {
		case 13: goto st235;
		case 32: goto st235;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st235;
	goto st0;
st247:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof247;
case 247:
	switch( (*( state.p)) ) {
		case 101: goto st248;
		case 111: goto st277;
	}
	goto st0;
st248:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof248;
case 248:
	switch( (*( state.p)) ) {
		case 73: goto st249;
		case 85: goto st263;
		case 105: goto st249;
		case 117: goto st263;
	}
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
		case 34: goto tr386;
		case 115: goto st253;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st251;
	goto st0;
tr386:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st252;
tr388:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st252;
tr390:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 252; goto st506;}}
	goto st252;
st252:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof252;
case 252:
#line 6318 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st529;
		case 92: goto tr390;
	}
	goto tr388;
st529:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof529;
case 529:
	switch( (*( state.p)) ) {
		case 13: goto tr1078;
		case 32: goto tr1078;
		case 35: goto tr1079;
		case 65: goto tr1080;
		case 66: goto tr1081;
		case 67: goto tr1082;
		case 68: goto tr1083;
		case 71: goto tr1084;
		case 76: goto tr1085;
		case 78: goto tr1086;
		case 79: goto tr1087;
		case 80: goto tr1088;
		case 82: goto tr1089;
		case 83: goto tr1090;
		case 85: goto tr1091;
		case 86: goto tr1092;
		case 97: goto tr1080;
		case 98: goto tr1081;
		case 99: goto tr1082;
		case 100: goto tr1083;
		case 103: goto tr1084;
		case 108: goto tr1085;
		case 110: goto tr1086;
		case 111: goto tr1087;
		case 112: goto tr1088;
		case 114: goto tr1089;
		case 115: goto tr1090;
		case 117: goto tr1091;
		case 118: goto tr1092;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1078;
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
		case 34: goto tr396;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st258;
	goto st0;
tr396:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st259;
tr397:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st259;
tr399:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 259; goto st506;}}
	goto st259;
st259:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof259;
case 259:
#line 6433 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st260;
		case 92: goto tr399;
	}
	goto tr397;
st260:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof260;
case 260:
	switch( (*( state.p)) ) {
		case 13: goto tr400;
		case 32: goto tr400;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr400;
	goto st0;
tr400:
#line 134 "propsparser.rl"
	{ props.prein.prog = state.match; }
	goto st261;
st261:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof261;
case 261:
#line 6458 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st261;
		case 32: goto st261;
		case 34: goto tr386;
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
	if ( (*( state.p)) == 110 )
		goto st264;
	goto st0;
st264:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof264;
case 264:
	switch( (*( state.p)) ) {
		case 13: goto st265;
		case 32: goto st265;
		case 58: goto st276;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st265;
	goto st0;
st265:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof265;
case 265:
	switch( (*( state.p)) ) {
		case 13: goto st265;
		case 32: goto st265;
		case 34: goto tr405;
		case 115: goto st267;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st265;
	goto st0;
tr405:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st266;
tr407:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st266;
tr409:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 266; goto st506;}}
	goto st266;
st266:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof266;
case 266:
#line 6530 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st530;
		case 92: goto tr409;
	}
	goto tr407;
st530:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof530;
case 530:
	switch( (*( state.p)) ) {
		case 13: goto tr1093;
		case 32: goto tr1093;
		case 35: goto tr1094;
		case 65: goto tr1095;
		case 66: goto tr1096;
		case 67: goto tr1097;
		case 68: goto tr1098;
		case 71: goto tr1099;
		case 76: goto tr1100;
		case 78: goto tr1101;
		case 79: goto tr1102;
		case 80: goto tr1103;
		case 82: goto tr1104;
		case 83: goto tr1105;
		case 85: goto tr1106;
		case 86: goto tr1107;
		case 97: goto tr1095;
		case 98: goto tr1096;
		case 99: goto tr1097;
		case 100: goto tr1098;
		case 103: goto tr1099;
		case 108: goto tr1100;
		case 110: goto tr1101;
		case 111: goto tr1102;
		case 112: goto tr1103;
		case 114: goto tr1104;
		case 115: goto tr1105;
		case 117: goto tr1106;
		case 118: goto tr1107;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1093;
	goto st0;
st267:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof267;
case 267:
	if ( (*( state.p)) == 104 )
		goto st268;
	goto st0;
st268:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof268;
case 268:
	if ( (*( state.p)) == 101 )
		goto st269;
	goto st0;
st269:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof269;
case 269:
	if ( (*( state.p)) == 108 )
		goto st270;
	goto st0;
st270:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof270;
case 270:
	if ( (*( state.p)) == 108 )
		goto st271;
	goto st0;
st271:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof271;
case 271:
	switch( (*( state.p)) ) {
		case 13: goto st272;
		case 32: goto st272;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st272;
	goto st0;
st272:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof272;
case 272:
	switch( (*( state.p)) ) {
		case 13: goto st272;
		case 32: goto st272;
		case 34: goto tr415;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st272;
	goto st0;
tr415:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st273;
tr416:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st273;
tr418:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 273; goto st506;}}
	goto st273;
st273:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof273;
case 273:
#line 6645 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st274;
		case 92: goto tr418;
	}
	goto tr416;
st274:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof274;
case 274:
	switch( (*( state.p)) ) {
		case 13: goto tr419;
		case 32: goto tr419;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr419;
	goto st0;
tr419:
#line 142 "propsparser.rl"
	{ props.preun.prog = state.match; }
	goto st275;
st275:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof275;
case 275:
#line 6670 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st275;
		case 32: goto st275;
		case 34: goto tr405;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st275;
	goto st0;
st276:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof276;
case 276:
	switch( (*( state.p)) ) {
		case 13: goto st265;
		case 32: goto st265;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st265;
	goto st0;
st277:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof277;
case 277:
	if ( (*( state.p)) == 118 )
		goto st278;
	goto st0;
st278:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof278;
case 278:
	if ( (*( state.p)) == 105 )
		goto st279;
	goto st0;
st279:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof279;
case 279:
	if ( (*( state.p)) == 100 )
		goto st280;
	goto st0;
st280:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof280;
case 280:
	if ( (*( state.p)) == 101 )
		goto st281;
	goto st0;
st281:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof281;
case 281:
	if ( (*( state.p)) == 115 )
		goto st282;
	goto st0;
st282:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof282;
case 282:
	switch( (*( state.p)) ) {
		case 13: goto tr426;
		case 32: goto tr426;
		case 58: goto st350;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr426;
	goto st0;
tr426:
#line 191 "propsparser.rl"
	{ deps = rpmprops_t::deps_t(); }
	goto st283;
st283:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof283;
case 283:
#line 6745 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr426;
		case 32: goto tr426;
		case 34: goto tr428;
		case 97: goto st295;
		case 99: goto st303;
		case 105: goto st309;
		case 112: goto st315;
		case 114: goto st338;
		case 118: goto st344;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr426;
	goto st0;
tr428:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st284;
tr435:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st284;
tr437:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 284; goto st506;}}
	goto st284;
st284:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof284;
case 284:
#line 6780 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st285;
		case 92: goto tr437;
	}
	goto tr435;
st285:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof285;
case 285:
	switch( (*( state.p)) ) {
		case 13: goto tr438;
		case 32: goto tr438;
		case 60: goto tr439;
		case 61: goto tr440;
		case 62: goto tr441;
		case 97: goto tr442;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr438;
	goto st0;
tr438:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st531;
tr473:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st531;
st531:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof531;
case 531:
#line 6813 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr1108;
		case 32: goto tr1108;
		case 35: goto tr1109;
		case 60: goto st286;
		case 61: goto st290;
		case 62: goto st291;
		case 65: goto tr1113;
		case 66: goto tr1114;
		case 67: goto tr1115;
		case 68: goto tr1116;
		case 71: goto tr1117;
		case 76: goto tr1118;
		case 78: goto tr1119;
		case 79: goto tr1120;
		case 80: goto tr1121;
		case 82: goto tr1122;
		case 83: goto tr1123;
		case 85: goto tr1124;
		case 86: goto tr1125;
		case 97: goto tr1113;
		case 98: goto tr1114;
		case 99: goto tr1115;
		case 100: goto tr1116;
		case 103: goto tr1117;
		case 108: goto tr1118;
		case 110: goto tr1119;
		case 111: goto tr1120;
		case 112: goto tr1121;
		case 114: goto tr1122;
		case 115: goto tr1123;
		case 117: goto tr1124;
		case 118: goto tr1125;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1108;
	goto st0;
tr439:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st286;
tr474:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st286;
st286:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof286;
case 286:
#line 6863 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr443;
		case 32: goto tr443;
		case 34: goto tr444;
		case 61: goto st289;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr443;
	goto st0;
tr443:
#line 177 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
	goto st287;
tr451:
#line 179 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
	goto st287;
tr453:
#line 176 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
	goto st287;
tr455:
#line 178 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
	goto st287;
tr458:
#line 180 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
	goto st287;
st287:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof287;
case 287:
#line 6897 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st287;
		case 32: goto st287;
		case 34: goto tr447;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st287;
	goto st0;
tr447:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st288;
tr448:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st288;
tr450:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 288; goto st506;}}
	goto st288;
tr444:
#line 177 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st288;
tr452:
#line 179 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st288;
tr454:
#line 176 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st288;
tr456:
#line 178 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st288;
tr459:
#line 180 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st288;
st288:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof288;
case 288:
#line 6966 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st532;
		case 92: goto tr450;
	}
	goto tr448;
st532:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof532;
case 532:
	switch( (*( state.p)) ) {
		case 13: goto tr1126;
		case 32: goto tr1126;
		case 35: goto tr1127;
		case 65: goto tr1128;
		case 66: goto tr1129;
		case 67: goto tr1130;
		case 68: goto tr1131;
		case 71: goto tr1132;
		case 76: goto tr1133;
		case 78: goto tr1134;
		case 79: goto tr1135;
		case 80: goto tr1136;
		case 82: goto tr1137;
		case 83: goto tr1138;
		case 85: goto tr1139;
		case 86: goto tr1140;
		case 97: goto tr1128;
		case 98: goto tr1129;
		case 99: goto tr1130;
		case 100: goto tr1131;
		case 103: goto tr1132;
		case 108: goto tr1133;
		case 110: goto tr1134;
		case 111: goto tr1135;
		case 112: goto tr1136;
		case 114: goto tr1137;
		case 115: goto tr1138;
		case 117: goto tr1139;
		case 118: goto tr1140;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1126;
	goto st0;
st289:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof289;
case 289:
	switch( (*( state.p)) ) {
		case 13: goto tr451;
		case 32: goto tr451;
		case 34: goto tr452;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr451;
	goto st0;
tr440:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st290;
tr475:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st290;
st290:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof290;
case 290:
#line 7034 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr453;
		case 32: goto tr453;
		case 34: goto tr454;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr453;
	goto st0;
tr441:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st291;
tr476:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st291;
st291:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof291;
case 291:
#line 7055 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr455;
		case 32: goto tr455;
		case 34: goto tr456;
		case 61: goto st292;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr455;
	goto st0;
st292:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof292;
case 292:
	switch( (*( state.p)) ) {
		case 13: goto tr458;
		case 32: goto tr458;
		case 34: goto tr459;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr458;
	goto st0;
tr442:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st293;
tr477:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st293;
st293:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof293;
case 293:
#line 7089 "propsparser.h"
	if ( (*( state.p)) == 110 )
		goto st294;
	goto st0;
st294:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof294;
case 294:
	if ( (*( state.p)) == 121 )
		goto st533;
	goto st0;
st533:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof533;
case 533:
	switch( (*( state.p)) ) {
		case 13: goto tr1108;
		case 32: goto tr1108;
		case 35: goto tr1109;
		case 65: goto tr1113;
		case 66: goto tr1114;
		case 67: goto tr1115;
		case 68: goto tr1116;
		case 71: goto tr1117;
		case 76: goto tr1118;
		case 78: goto tr1119;
		case 79: goto tr1120;
		case 80: goto tr1121;
		case 82: goto tr1122;
		case 83: goto tr1123;
		case 85: goto tr1124;
		case 86: goto tr1125;
		case 97: goto tr1113;
		case 98: goto tr1114;
		case 99: goto tr1115;
		case 100: goto tr1116;
		case 103: goto tr1117;
		case 108: goto tr1118;
		case 110: goto tr1119;
		case 111: goto tr1120;
		case 112: goto tr1121;
		case 114: goto tr1122;
		case 115: goto tr1123;
		case 117: goto tr1124;
		case 118: goto tr1125;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1108;
	goto st0;
st295:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof295;
case 295:
	if ( (*( state.p)) == 117 )
		goto st296;
	goto st0;
st296:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof296;
case 296:
	if ( (*( state.p)) == 116 )
		goto st297;
	goto st0;
st297:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof297;
case 297:
	if ( (*( state.p)) == 111 )
		goto st298;
	goto st0;
st298:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof298;
case 298:
	switch( (*( state.p)) ) {
		case 13: goto tr465;
		case 32: goto tr465;
		case 44: goto tr466;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr465;
	goto st0;
tr465:
#line 163 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st299;
tr483:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st299;
tr490:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st299;
tr496:
#line 153 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st299;
tr504:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st299;
tr507:
#line 155 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st299;
tr510:
#line 152 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st299;
tr517:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st299;
tr523:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st299;
tr526:
#line 154 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st299;
tr533:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st299;
tr540:
#line 156 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st299;
st299:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof299;
case 299:
#line 7224 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st299;
		case 32: goto st299;
		case 34: goto tr468;
		case 44: goto st302;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st299;
	goto st0;
tr468:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st300;
tr470:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st300;
tr472:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 300; goto st506;}}
	goto st300;
st300:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof300;
case 300:
#line 7254 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st301;
		case 92: goto tr472;
	}
	goto tr470;
st301:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof301;
case 301:
	switch( (*( state.p)) ) {
		case 13: goto tr473;
		case 32: goto tr473;
		case 60: goto tr474;
		case 61: goto tr475;
		case 62: goto tr476;
		case 97: goto tr477;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr473;
	goto st0;
tr466:
#line 163 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st302;
tr484:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st302;
tr491:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st302;
tr497:
#line 153 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st302;
tr505:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st302;
tr508:
#line 155 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st302;
tr511:
#line 152 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st302;
tr518:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st302;
tr524:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st302;
tr527:
#line 154 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st302;
tr534:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st302;
tr541:
#line 156 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st302;
st302:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof302;
case 302:
#line 7328 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st302;
		case 32: goto st302;
		case 97: goto st295;
		case 99: goto st303;
		case 105: goto st309;
		case 112: goto st315;
		case 114: goto st338;
		case 118: goto st344;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st302;
	goto st0;
st303:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof303;
case 303:
	if ( (*( state.p)) == 111 )
		goto st304;
	goto st0;
st304:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof304;
case 304:
	if ( (*( state.p)) == 110 )
		goto st305;
	goto st0;
st305:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof305;
case 305:
	if ( (*( state.p)) == 102 )
		goto st306;
	goto st0;
st306:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof306;
case 306:
	if ( (*( state.p)) == 105 )
		goto st307;
	goto st0;
st307:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof307;
case 307:
	if ( (*( state.p)) == 103 )
		goto st308;
	goto st0;
st308:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof308;
case 308:
	switch( (*( state.p)) ) {
		case 13: goto tr483;
		case 32: goto tr483;
		case 44: goto tr484;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr483;
	goto st0;
st309:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof309;
case 309:
	if ( (*( state.p)) == 110 )
		goto st310;
	goto st0;
st310:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof310;
case 310:
	if ( (*( state.p)) == 116 )
		goto st311;
	goto st0;
st311:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof311;
case 311:
	if ( (*( state.p)) == 101 )
		goto st312;
	goto st0;
st312:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof312;
case 312:
	if ( (*( state.p)) == 114 )
		goto st313;
	goto st0;
st313:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof313;
case 313:
	if ( (*( state.p)) == 112 )
		goto st314;
	goto st0;
st314:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof314;
case 314:
	switch( (*( state.p)) ) {
		case 13: goto tr490;
		case 32: goto tr490;
		case 44: goto tr491;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr490;
	goto st0;
st315:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof315;
case 315:
	switch( (*( state.p)) ) {
		case 111: goto st316;
		case 114: goto st326;
	}
	goto st0;
st316:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof316;
case 316:
	if ( (*( state.p)) == 115 )
		goto st317;
	goto st0;
st317:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof317;
case 317:
	if ( (*( state.p)) == 116 )
		goto st318;
	goto st0;
st318:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof318;
case 318:
	switch( (*( state.p)) ) {
		case 13: goto tr496;
		case 32: goto tr496;
		case 44: goto tr497;
		case 116: goto st319;
		case 117: goto st324;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr496;
	goto st0;
st319:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof319;
case 319:
	if ( (*( state.p)) == 114 )
		goto st320;
	goto st0;
st320:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof320;
case 320:
	if ( (*( state.p)) == 97 )
		goto st321;
	goto st0;
st321:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof321;
case 321:
	if ( (*( state.p)) == 110 )
		goto st322;
	goto st0;
st322:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof322;
case 322:
	if ( (*( state.p)) == 115 )
		goto st323;
	goto st0;
st323:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof323;
case 323:
	switch( (*( state.p)) ) {
		case 13: goto tr504;
		case 32: goto tr504;
		case 44: goto tr505;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr504;
	goto st0;
st324:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof324;
case 324:
	if ( (*( state.p)) == 110 )
		goto st325;
	goto st0;
st325:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof325;
case 325:
	switch( (*( state.p)) ) {
		case 13: goto tr507;
		case 32: goto tr507;
		case 44: goto tr508;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr507;
	goto st0;
st326:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof326;
case 326:
	if ( (*( state.p)) == 101 )
		goto st327;
	goto st0;
st327:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof327;
case 327:
	switch( (*( state.p)) ) {
		case 13: goto tr510;
		case 32: goto tr510;
		case 44: goto tr511;
		case 114: goto st328;
		case 116: goto st331;
		case 117: goto st336;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr510;
	goto st0;
st328:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof328;
case 328:
	if ( (*( state.p)) == 101 )
		goto st329;
	goto st0;
st329:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof329;
case 329:
	if ( (*( state.p)) == 113 )
		goto st330;
	goto st0;
st330:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof330;
case 330:
	switch( (*( state.p)) ) {
		case 13: goto tr517;
		case 32: goto tr517;
		case 44: goto tr518;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr517;
	goto st0;
st331:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof331;
case 331:
	if ( (*( state.p)) == 114 )
		goto st332;
	goto st0;
st332:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof332;
case 332:
	if ( (*( state.p)) == 97 )
		goto st333;
	goto st0;
st333:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof333;
case 333:
	if ( (*( state.p)) == 110 )
		goto st334;
	goto st0;
st334:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof334;
case 334:
	if ( (*( state.p)) == 115 )
		goto st335;
	goto st0;
st335:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof335;
case 335:
	switch( (*( state.p)) ) {
		case 13: goto tr523;
		case 32: goto tr523;
		case 44: goto tr524;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr523;
	goto st0;
st336:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof336;
case 336:
	if ( (*( state.p)) == 110 )
		goto st337;
	goto st0;
st337:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof337;
case 337:
	switch( (*( state.p)) ) {
		case 13: goto tr526;
		case 32: goto tr526;
		case 44: goto tr527;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr526;
	goto st0;
st338:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof338;
case 338:
	if ( (*( state.p)) == 112 )
		goto st339;
	goto st0;
st339:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof339;
case 339:
	if ( (*( state.p)) == 109 )
		goto st340;
	goto st0;
st340:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof340;
case 340:
	if ( (*( state.p)) == 108 )
		goto st341;
	goto st0;
st341:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof341;
case 341:
	if ( (*( state.p)) == 105 )
		goto st342;
	goto st0;
st342:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof342;
case 342:
	if ( (*( state.p)) == 98 )
		goto st343;
	goto st0;
st343:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof343;
case 343:
	switch( (*( state.p)) ) {
		case 13: goto tr533;
		case 32: goto tr533;
		case 44: goto tr534;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr533;
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
	if ( (*( state.p)) == 114 )
		goto st346;
	goto st0;
st346:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof346;
case 346:
	if ( (*( state.p)) == 105 )
		goto st347;
	goto st0;
st347:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof347;
case 347:
	if ( (*( state.p)) == 102 )
		goto st348;
	goto st0;
st348:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof348;
case 348:
	if ( (*( state.p)) == 121 )
		goto st349;
	goto st0;
st349:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof349;
case 349:
	switch( (*( state.p)) ) {
		case 13: goto tr540;
		case 32: goto tr540;
		case 44: goto tr541;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr540;
	goto st0;
st350:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof350;
case 350:
	switch( (*( state.p)) ) {
		case 13: goto tr426;
		case 32: goto tr426;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr426;
	goto st0;
st351:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof351;
case 351:
	switch( (*( state.p)) ) {
		case 13: goto st71;
		case 32: goto st71;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st71;
	goto st0;
st352:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof352;
case 352:
	if ( (*( state.p)) == 115 )
		goto st353;
	goto st0;
st353:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof353;
case 353:
	if ( (*( state.p)) == 111 )
		goto st354;
	goto st0;
st354:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof354;
case 354:
	if ( (*( state.p)) == 108 )
		goto st355;
	goto st0;
st355:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof355;
case 355:
	if ( (*( state.p)) == 101 )
		goto st356;
	goto st0;
st356:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof356;
case 356:
	if ( (*( state.p)) == 116 )
		goto st357;
	goto st0;
st357:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof357;
case 357:
	if ( (*( state.p)) == 101 )
		goto st358;
	goto st0;
st358:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof358;
case 358:
	if ( (*( state.p)) == 115 )
		goto st359;
	goto st0;
st359:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof359;
case 359:
	switch( (*( state.p)) ) {
		case 13: goto tr549;
		case 32: goto tr549;
		case 58: goto st427;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr549;
	goto st0;
tr549:
#line 206 "propsparser.rl"
	{ deps = rpmprops_t::deps_t(); }
	goto st360;
st360:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof360;
case 360:
#line 7824 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr549;
		case 32: goto tr549;
		case 34: goto tr551;
		case 97: goto st372;
		case 99: goto st380;
		case 105: goto st386;
		case 112: goto st392;
		case 114: goto st415;
		case 118: goto st421;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr549;
	goto st0;
tr551:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st361;
tr558:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st361;
tr560:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 361; goto st506;}}
	goto st361;
st361:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof361;
case 361:
#line 7859 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st362;
		case 92: goto tr560;
	}
	goto tr558;
st362:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof362;
case 362:
	switch( (*( state.p)) ) {
		case 13: goto tr561;
		case 32: goto tr561;
		case 60: goto tr562;
		case 61: goto tr563;
		case 62: goto tr564;
		case 97: goto tr565;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr561;
	goto st0;
tr561:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st534;
tr596:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st534;
st534:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof534;
case 534:
#line 7892 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr1141;
		case 32: goto tr1141;
		case 35: goto tr1142;
		case 60: goto st363;
		case 61: goto st367;
		case 62: goto st368;
		case 65: goto tr1146;
		case 66: goto tr1147;
		case 67: goto tr1148;
		case 68: goto tr1149;
		case 71: goto tr1150;
		case 76: goto tr1151;
		case 78: goto tr1152;
		case 79: goto tr1153;
		case 80: goto tr1154;
		case 82: goto tr1155;
		case 83: goto tr1156;
		case 85: goto tr1157;
		case 86: goto tr1158;
		case 97: goto tr1146;
		case 98: goto tr1147;
		case 99: goto tr1148;
		case 100: goto tr1149;
		case 103: goto tr1150;
		case 108: goto tr1151;
		case 110: goto tr1152;
		case 111: goto tr1153;
		case 112: goto tr1154;
		case 114: goto tr1155;
		case 115: goto tr1156;
		case 117: goto tr1157;
		case 118: goto tr1158;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1141;
	goto st0;
tr562:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st363;
tr597:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st363;
st363:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof363;
case 363:
#line 7942 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr566;
		case 32: goto tr566;
		case 34: goto tr567;
		case 61: goto st366;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr566;
	goto st0;
tr566:
#line 177 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
	goto st364;
tr574:
#line 179 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
	goto st364;
tr576:
#line 176 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
	goto st364;
tr578:
#line 178 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
	goto st364;
tr581:
#line 180 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
	goto st364;
st364:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof364;
case 364:
#line 7976 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st364;
		case 32: goto st364;
		case 34: goto tr570;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st364;
	goto st0;
tr570:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st365;
tr571:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st365;
tr573:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 365; goto st506;}}
	goto st365;
tr567:
#line 177 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st365;
tr575:
#line 179 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st365;
tr577:
#line 176 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st365;
tr579:
#line 178 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st365;
tr582:
#line 180 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); }
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st365;
st365:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof365;
case 365:
#line 8045 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st535;
		case 92: goto tr573;
	}
	goto tr571;
st535:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof535;
case 535:
	switch( (*( state.p)) ) {
		case 13: goto tr1159;
		case 32: goto tr1159;
		case 35: goto tr1160;
		case 65: goto tr1161;
		case 66: goto tr1162;
		case 67: goto tr1163;
		case 68: goto tr1164;
		case 71: goto tr1165;
		case 76: goto tr1166;
		case 78: goto tr1167;
		case 79: goto tr1168;
		case 80: goto tr1169;
		case 82: goto tr1170;
		case 83: goto tr1171;
		case 85: goto tr1172;
		case 86: goto tr1173;
		case 97: goto tr1161;
		case 98: goto tr1162;
		case 99: goto tr1163;
		case 100: goto tr1164;
		case 103: goto tr1165;
		case 108: goto tr1166;
		case 110: goto tr1167;
		case 111: goto tr1168;
		case 112: goto tr1169;
		case 114: goto tr1170;
		case 115: goto tr1171;
		case 117: goto tr1172;
		case 118: goto tr1173;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1159;
	goto st0;
st366:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof366;
case 366:
	switch( (*( state.p)) ) {
		case 13: goto tr574;
		case 32: goto tr574;
		case 34: goto tr575;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr574;
	goto st0;
tr563:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st367;
tr598:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st367;
st367:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof367;
case 367:
#line 8113 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr576;
		case 32: goto tr576;
		case 34: goto tr577;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr576;
	goto st0;
tr564:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st368;
tr599:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st368;
st368:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof368;
case 368:
#line 8134 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr578;
		case 32: goto tr578;
		case 34: goto tr579;
		case 61: goto st369;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr578;
	goto st0;
st369:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof369;
case 369:
	switch( (*( state.p)) ) {
		case 13: goto tr581;
		case 32: goto tr581;
		case 34: goto tr582;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr581;
	goto st0;
tr565:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st370;
tr600:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st370;
st370:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof370;
case 370:
#line 8168 "propsparser.h"
	if ( (*( state.p)) == 110 )
		goto st371;
	goto st0;
st371:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof371;
case 371:
	if ( (*( state.p)) == 121 )
		goto st536;
	goto st0;
st536:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof536;
case 536:
	switch( (*( state.p)) ) {
		case 13: goto tr1141;
		case 32: goto tr1141;
		case 35: goto tr1142;
		case 65: goto tr1146;
		case 66: goto tr1147;
		case 67: goto tr1148;
		case 68: goto tr1149;
		case 71: goto tr1150;
		case 76: goto tr1151;
		case 78: goto tr1152;
		case 79: goto tr1153;
		case 80: goto tr1154;
		case 82: goto tr1155;
		case 83: goto tr1156;
		case 85: goto tr1157;
		case 86: goto tr1158;
		case 97: goto tr1146;
		case 98: goto tr1147;
		case 99: goto tr1148;
		case 100: goto tr1149;
		case 103: goto tr1150;
		case 108: goto tr1151;
		case 110: goto tr1152;
		case 111: goto tr1153;
		case 112: goto tr1154;
		case 114: goto tr1155;
		case 115: goto tr1156;
		case 117: goto tr1157;
		case 118: goto tr1158;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1141;
	goto st0;
st372:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof372;
case 372:
	if ( (*( state.p)) == 117 )
		goto st373;
	goto st0;
st373:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof373;
case 373:
	if ( (*( state.p)) == 116 )
		goto st374;
	goto st0;
st374:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof374;
case 374:
	if ( (*( state.p)) == 111 )
		goto st375;
	goto st0;
st375:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof375;
case 375:
	switch( (*( state.p)) ) {
		case 13: goto tr588;
		case 32: goto tr588;
		case 44: goto tr589;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr588;
	goto st0;
tr588:
#line 163 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st376;
tr606:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st376;
tr613:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st376;
tr619:
#line 153 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st376;
tr627:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st376;
tr630:
#line 155 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st376;
tr633:
#line 152 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st376;
tr640:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st376;
tr646:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st376;
tr649:
#line 154 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st376;
tr656:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st376;
tr663:
#line 156 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st376;
st376:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof376;
case 376:
#line 8303 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st376;
		case 32: goto st376;
		case 34: goto tr591;
		case 44: goto st379;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st376;
	goto st0;
tr591:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st377;
tr593:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st377;
tr595:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 377; goto st506;}}
	goto st377;
st377:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof377;
case 377:
#line 8333 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st378;
		case 92: goto tr595;
	}
	goto tr593;
st378:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof378;
case 378:
	switch( (*( state.p)) ) {
		case 13: goto tr596;
		case 32: goto tr596;
		case 60: goto tr597;
		case 61: goto tr598;
		case 62: goto tr599;
		case 97: goto tr600;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr596;
	goto st0;
tr589:
#line 163 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st379;
tr607:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st379;
tr614:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st379;
tr620:
#line 153 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st379;
tr628:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st379;
tr631:
#line 155 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st379;
tr634:
#line 152 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st379;
tr641:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st379;
tr647:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st379;
tr650:
#line 154 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st379;
tr657:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st379;
tr664:
#line 156 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st379;
st379:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof379;
case 379:
#line 8407 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st379;
		case 32: goto st379;
		case 97: goto st372;
		case 99: goto st380;
		case 105: goto st386;
		case 112: goto st392;
		case 114: goto st415;
		case 118: goto st421;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st379;
	goto st0;
st380:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof380;
case 380:
	if ( (*( state.p)) == 111 )
		goto st381;
	goto st0;
st381:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof381;
case 381:
	if ( (*( state.p)) == 110 )
		goto st382;
	goto st0;
st382:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof382;
case 382:
	if ( (*( state.p)) == 102 )
		goto st383;
	goto st0;
st383:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof383;
case 383:
	if ( (*( state.p)) == 105 )
		goto st384;
	goto st0;
st384:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof384;
case 384:
	if ( (*( state.p)) == 103 )
		goto st385;
	goto st0;
st385:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof385;
case 385:
	switch( (*( state.p)) ) {
		case 13: goto tr606;
		case 32: goto tr606;
		case 44: goto tr607;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr606;
	goto st0;
st386:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof386;
case 386:
	if ( (*( state.p)) == 110 )
		goto st387;
	goto st0;
st387:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof387;
case 387:
	if ( (*( state.p)) == 116 )
		goto st388;
	goto st0;
st388:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof388;
case 388:
	if ( (*( state.p)) == 101 )
		goto st389;
	goto st0;
st389:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof389;
case 389:
	if ( (*( state.p)) == 114 )
		goto st390;
	goto st0;
st390:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof390;
case 390:
	if ( (*( state.p)) == 112 )
		goto st391;
	goto st0;
st391:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof391;
case 391:
	switch( (*( state.p)) ) {
		case 13: goto tr613;
		case 32: goto tr613;
		case 44: goto tr614;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr613;
	goto st0;
st392:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof392;
case 392:
	switch( (*( state.p)) ) {
		case 111: goto st393;
		case 114: goto st403;
	}
	goto st0;
st393:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof393;
case 393:
	if ( (*( state.p)) == 115 )
		goto st394;
	goto st0;
st394:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof394;
case 394:
	if ( (*( state.p)) == 116 )
		goto st395;
	goto st0;
st395:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof395;
case 395:
	switch( (*( state.p)) ) {
		case 13: goto tr619;
		case 32: goto tr619;
		case 44: goto tr620;
		case 116: goto st396;
		case 117: goto st401;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr619;
	goto st0;
st396:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof396;
case 396:
	if ( (*( state.p)) == 114 )
		goto st397;
	goto st0;
st397:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof397;
case 397:
	if ( (*( state.p)) == 97 )
		goto st398;
	goto st0;
st398:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof398;
case 398:
	if ( (*( state.p)) == 110 )
		goto st399;
	goto st0;
st399:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof399;
case 399:
	if ( (*( state.p)) == 115 )
		goto st400;
	goto st0;
st400:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof400;
case 400:
	switch( (*( state.p)) ) {
		case 13: goto tr627;
		case 32: goto tr627;
		case 44: goto tr628;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr627;
	goto st0;
st401:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof401;
case 401:
	if ( (*( state.p)) == 110 )
		goto st402;
	goto st0;
st402:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof402;
case 402:
	switch( (*( state.p)) ) {
		case 13: goto tr630;
		case 32: goto tr630;
		case 44: goto tr631;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr630;
	goto st0;
st403:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof403;
case 403:
	if ( (*( state.p)) == 101 )
		goto st404;
	goto st0;
st404:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof404;
case 404:
	switch( (*( state.p)) ) {
		case 13: goto tr633;
		case 32: goto tr633;
		case 44: goto tr634;
		case 114: goto st405;
		case 116: goto st408;
		case 117: goto st413;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr633;
	goto st0;
st405:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof405;
case 405:
	if ( (*( state.p)) == 101 )
		goto st406;
	goto st0;
st406:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof406;
case 406:
	if ( (*( state.p)) == 113 )
		goto st407;
	goto st0;
st407:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof407;
case 407:
	switch( (*( state.p)) ) {
		case 13: goto tr640;
		case 32: goto tr640;
		case 44: goto tr641;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr640;
	goto st0;
st408:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof408;
case 408:
	if ( (*( state.p)) == 114 )
		goto st409;
	goto st0;
st409:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof409;
case 409:
	if ( (*( state.p)) == 97 )
		goto st410;
	goto st0;
st410:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof410;
case 410:
	if ( (*( state.p)) == 110 )
		goto st411;
	goto st0;
st411:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof411;
case 411:
	if ( (*( state.p)) == 115 )
		goto st412;
	goto st0;
st412:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof412;
case 412:
	switch( (*( state.p)) ) {
		case 13: goto tr646;
		case 32: goto tr646;
		case 44: goto tr647;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr646;
	goto st0;
st413:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof413;
case 413:
	if ( (*( state.p)) == 110 )
		goto st414;
	goto st0;
st414:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof414;
case 414:
	switch( (*( state.p)) ) {
		case 13: goto tr649;
		case 32: goto tr649;
		case 44: goto tr650;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr649;
	goto st0;
st415:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof415;
case 415:
	if ( (*( state.p)) == 112 )
		goto st416;
	goto st0;
st416:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof416;
case 416:
	if ( (*( state.p)) == 109 )
		goto st417;
	goto st0;
st417:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof417;
case 417:
	if ( (*( state.p)) == 108 )
		goto st418;
	goto st0;
st418:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof418;
case 418:
	if ( (*( state.p)) == 105 )
		goto st419;
	goto st0;
st419:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof419;
case 419:
	if ( (*( state.p)) == 98 )
		goto st420;
	goto st0;
st420:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof420;
case 420:
	switch( (*( state.p)) ) {
		case 13: goto tr656;
		case 32: goto tr656;
		case 44: goto tr657;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr656;
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
	if ( (*( state.p)) == 114 )
		goto st423;
	goto st0;
st423:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof423;
case 423:
	if ( (*( state.p)) == 105 )
		goto st424;
	goto st0;
st424:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof424;
case 424:
	if ( (*( state.p)) == 102 )
		goto st425;
	goto st0;
st425:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof425;
case 425:
	if ( (*( state.p)) == 121 )
		goto st426;
	goto st0;
st426:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof426;
case 426:
	switch( (*( state.p)) ) {
		case 13: goto tr663;
		case 32: goto tr663;
		case 44: goto tr664;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr663;
	goto st0;
st427:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof427;
case 427:
	switch( (*( state.p)) ) {
		case 13: goto tr549;
		case 32: goto tr549;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr549;
	goto st0;
st428:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof428;
case 428:
	if ( (*( state.p)) == 116 )
		goto st429;
	goto st0;
st429:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof429;
case 429:
	switch( (*( state.p)) ) {
		case 70: goto st430;
		case 102: goto st430;
	}
	goto st0;
st430:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof430;
case 430:
	if ( (*( state.p)) == 108 )
		goto st431;
	goto st0;
st431:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof431;
case 431:
	if ( (*( state.p)) == 97 )
		goto st432;
	goto st0;
st432:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof432;
case 432:
	if ( (*( state.p)) == 103 )
		goto st433;
	goto st0;
st433:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof433;
case 433:
	if ( (*( state.p)) == 115 )
		goto st434;
	goto st0;
st434:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof434;
case 434:
	switch( (*( state.p)) ) {
		case 13: goto st435;
		case 32: goto st435;
		case 58: goto st437;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st435;
	goto st0;
st435:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof435;
case 435:
	switch( (*( state.p)) ) {
		case 13: goto st435;
		case 32: goto st435;
		case 34: goto tr673;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st435;
	goto st0;
tr673:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st436;
tr674:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st436;
tr676:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 436; goto st506;}}
	goto st436;
st436:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof436;
case 436:
#line 8911 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st537;
		case 92: goto tr676;
	}
	goto tr674;
st537:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof537;
case 537:
	switch( (*( state.p)) ) {
		case 13: goto tr1174;
		case 32: goto tr1174;
		case 35: goto tr1175;
		case 65: goto tr1176;
		case 66: goto tr1177;
		case 67: goto tr1178;
		case 68: goto tr1179;
		case 71: goto tr1180;
		case 76: goto tr1181;
		case 78: goto tr1182;
		case 79: goto tr1183;
		case 80: goto tr1184;
		case 82: goto tr1185;
		case 83: goto tr1186;
		case 85: goto tr1187;
		case 86: goto tr1188;
		case 97: goto tr1176;
		case 98: goto tr1177;
		case 99: goto tr1178;
		case 100: goto tr1179;
		case 103: goto tr1180;
		case 108: goto tr1181;
		case 110: goto tr1182;
		case 111: goto tr1183;
		case 112: goto tr1184;
		case 114: goto tr1185;
		case 115: goto tr1186;
		case 117: goto tr1187;
		case 118: goto tr1188;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr1174;
	goto st0;
st437:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof437;
case 437:
	switch( (*( state.p)) ) {
		case 13: goto st435;
		case 32: goto st435;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st435;
	goto st0;
st438:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof438;
case 438:
	switch( (*( state.p)) ) {
		case 13: goto st67;
		case 32: goto st67;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st67;
	goto st0;
st439:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof439;
case 439:
	switch( (*( state.p)) ) {
		case 13: goto st61;
		case 32: goto st61;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st61;
	goto st0;
st440:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof440;
case 440:
	switch( (*( state.p)) ) {
		case 13: goto st52;
		case 32: goto st52;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st52;
	goto st0;
st441:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof441;
case 441:
	switch( (*( state.p)) ) {
		case 13: goto st45;
		case 32: goto st45;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st45;
	goto st0;
st442:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof442;
case 442:
	switch( (*( state.p)) ) {
		case 13: goto tr677;
		case 32: goto tr677;
		case 34: goto tr678;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr677;
	goto st0;
tr61:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st443;
tr701:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st443;
st443:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof443;
case 443:
#line 9034 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr679;
		case 32: goto tr679;
		case 34: goto tr680;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr679;
	goto st0;
tr62:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st444;
tr702:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st444;
st444:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof444;
case 444:
#line 9055 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto tr681;
		case 32: goto tr681;
		case 34: goto tr682;
		case 61: goto st445;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr681;
	goto st0;
st445:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof445;
case 445:
	switch( (*( state.p)) ) {
		case 13: goto tr684;
		case 32: goto tr684;
		case 34: goto tr685;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr684;
	goto st0;
tr63:
#line 172 "propsparser.rl"
	{ deps.name = state.match; }
	goto st446;
tr703:
#line 170 "propsparser.rl"
	{ deps.name = state.match; }
	goto st446;
st446:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof446;
case 446:
#line 9089 "propsparser.h"
	if ( (*( state.p)) == 110 )
		goto st447;
	goto st0;
st447:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof447;
case 447:
	if ( (*( state.p)) == 121 )
		goto st538;
	goto st0;
st538:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof538;
case 538:
	switch( (*( state.p)) ) {
		case 13: goto tr802;
		case 32: goto tr802;
		case 35: goto tr803;
		case 65: goto tr807;
		case 66: goto tr808;
		case 67: goto tr809;
		case 68: goto tr810;
		case 71: goto tr811;
		case 76: goto tr812;
		case 78: goto tr813;
		case 79: goto tr814;
		case 80: goto tr815;
		case 82: goto tr816;
		case 83: goto tr817;
		case 85: goto tr818;
		case 86: goto tr819;
		case 97: goto tr807;
		case 98: goto tr808;
		case 99: goto tr809;
		case 100: goto tr810;
		case 103: goto tr811;
		case 108: goto tr812;
		case 110: goto tr813;
		case 111: goto tr814;
		case 112: goto tr815;
		case 114: goto tr816;
		case 115: goto tr817;
		case 117: goto tr818;
		case 118: goto tr819;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr802;
	goto st0;
st448:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof448;
case 448:
	if ( (*( state.p)) == 117 )
		goto st449;
	goto st0;
st449:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof449;
case 449:
	if ( (*( state.p)) == 116 )
		goto st450;
	goto st0;
st450:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof450;
case 450:
	if ( (*( state.p)) == 111 )
		goto st451;
	goto st0;
st451:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof451;
case 451:
	switch( (*( state.p)) ) {
		case 13: goto tr691;
		case 32: goto tr691;
		case 44: goto tr692;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr691;
	goto st0;
tr691:
#line 163 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st452;
tr709:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st452;
tr716:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st452;
tr722:
#line 153 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st452;
tr730:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st452;
tr733:
#line 155 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st452;
tr736:
#line 152 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st452;
tr743:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st452;
tr749:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st452;
tr752:
#line 154 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st452;
tr759:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st452;
tr766:
#line 156 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st452;
st452:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof452;
case 452:
#line 9224 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st452;
		case 32: goto st452;
		case 34: goto tr694;
		case 44: goto st455;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st452;
	goto st0;
tr694:
#line 63 "propsparser.rl"
	{
            state.match.clear();
        }
	goto st453;
tr696:
#line 67 "propsparser.rl"
	{
            state.match += (*( state.p));
        }
	goto st453;
tr698:
#line 98 "propsparser.rl"
	{{ state.stack[ state.top++] = 453; goto st506;}}
	goto st453;
st453:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof453;
case 453:
#line 9254 "propsparser.h"
	switch( (*( state.p)) ) {
		case 34: goto st454;
		case 92: goto tr698;
	}
	goto tr696;
st454:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof454;
case 454:
	switch( (*( state.p)) ) {
		case 13: goto tr699;
		case 32: goto tr699;
		case 60: goto tr700;
		case 61: goto tr701;
		case 62: goto tr702;
		case 97: goto tr703;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr699;
	goto st0;
tr692:
#line 163 "propsparser.rl"
	{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }
	goto st455;
tr710:
#line 162 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; }
	goto st455;
tr717:
#line 157 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; }
	goto st455;
tr723:
#line 153 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; }
	goto st455;
tr731:
#line 161 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; }
	goto st455;
tr734:
#line 155 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; }
	goto st455;
tr737:
#line 152 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; }
	goto st455;
tr744:
#line 159 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; }
	goto st455;
tr750:
#line 160 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; }
	goto st455;
tr753:
#line 154 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; }
	goto st455;
tr760:
#line 158 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; }
	goto st455;
tr767:
#line 156 "propsparser.rl"
	{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; }
	goto st455;
st455:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof455;
case 455:
#line 9328 "propsparser.h"
	switch( (*( state.p)) ) {
		case 13: goto st455;
		case 32: goto st455;
		case 97: goto st448;
		case 99: goto st456;
		case 105: goto st462;
		case 112: goto st468;
		case 114: goto st491;
		case 118: goto st497;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st455;
	goto st0;
st456:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof456;
case 456:
	if ( (*( state.p)) == 111 )
		goto st457;
	goto st0;
st457:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof457;
case 457:
	if ( (*( state.p)) == 110 )
		goto st458;
	goto st0;
st458:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof458;
case 458:
	if ( (*( state.p)) == 102 )
		goto st459;
	goto st0;
st459:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof459;
case 459:
	if ( (*( state.p)) == 105 )
		goto st460;
	goto st0;
st460:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof460;
case 460:
	if ( (*( state.p)) == 103 )
		goto st461;
	goto st0;
st461:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof461;
case 461:
	switch( (*( state.p)) ) {
		case 13: goto tr709;
		case 32: goto tr709;
		case 44: goto tr710;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr709;
	goto st0;
st462:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof462;
case 462:
	if ( (*( state.p)) == 110 )
		goto st463;
	goto st0;
st463:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof463;
case 463:
	if ( (*( state.p)) == 116 )
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
	if ( (*( state.p)) == 114 )
		goto st466;
	goto st0;
st466:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof466;
case 466:
	if ( (*( state.p)) == 112 )
		goto st467;
	goto st0;
st467:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof467;
case 467:
	switch( (*( state.p)) ) {
		case 13: goto tr716;
		case 32: goto tr716;
		case 44: goto tr717;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr716;
	goto st0;
st468:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof468;
case 468:
	switch( (*( state.p)) ) {
		case 111: goto st469;
		case 114: goto st479;
	}
	goto st0;
st469:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof469;
case 469:
	if ( (*( state.p)) == 115 )
		goto st470;
	goto st0;
st470:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof470;
case 470:
	if ( (*( state.p)) == 116 )
		goto st471;
	goto st0;
st471:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof471;
case 471:
	switch( (*( state.p)) ) {
		case 13: goto tr722;
		case 32: goto tr722;
		case 44: goto tr723;
		case 116: goto st472;
		case 117: goto st477;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr722;
	goto st0;
st472:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof472;
case 472:
	if ( (*( state.p)) == 114 )
		goto st473;
	goto st0;
st473:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof473;
case 473:
	if ( (*( state.p)) == 97 )
		goto st474;
	goto st0;
st474:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof474;
case 474:
	if ( (*( state.p)) == 110 )
		goto st475;
	goto st0;
st475:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof475;
case 475:
	if ( (*( state.p)) == 115 )
		goto st476;
	goto st0;
st476:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof476;
case 476:
	switch( (*( state.p)) ) {
		case 13: goto tr730;
		case 32: goto tr730;
		case 44: goto tr731;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr730;
	goto st0;
st477:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof477;
case 477:
	if ( (*( state.p)) == 110 )
		goto st478;
	goto st0;
st478:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof478;
case 478:
	switch( (*( state.p)) ) {
		case 13: goto tr733;
		case 32: goto tr733;
		case 44: goto tr734;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr733;
	goto st0;
st479:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof479;
case 479:
	if ( (*( state.p)) == 101 )
		goto st480;
	goto st0;
st480:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof480;
case 480:
	switch( (*( state.p)) ) {
		case 13: goto tr736;
		case 32: goto tr736;
		case 44: goto tr737;
		case 114: goto st481;
		case 116: goto st484;
		case 117: goto st489;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr736;
	goto st0;
st481:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof481;
case 481:
	if ( (*( state.p)) == 101 )
		goto st482;
	goto st0;
st482:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof482;
case 482:
	if ( (*( state.p)) == 113 )
		goto st483;
	goto st0;
st483:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof483;
case 483:
	switch( (*( state.p)) ) {
		case 13: goto tr743;
		case 32: goto tr743;
		case 44: goto tr744;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr743;
	goto st0;
st484:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof484;
case 484:
	if ( (*( state.p)) == 114 )
		goto st485;
	goto st0;
st485:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof485;
case 485:
	if ( (*( state.p)) == 97 )
		goto st486;
	goto st0;
st486:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof486;
case 486:
	if ( (*( state.p)) == 110 )
		goto st487;
	goto st0;
st487:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof487;
case 487:
	if ( (*( state.p)) == 115 )
		goto st488;
	goto st0;
st488:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof488;
case 488:
	switch( (*( state.p)) ) {
		case 13: goto tr749;
		case 32: goto tr749;
		case 44: goto tr750;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr749;
	goto st0;
st489:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof489;
case 489:
	if ( (*( state.p)) == 110 )
		goto st490;
	goto st0;
st490:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof490;
case 490:
	switch( (*( state.p)) ) {
		case 13: goto tr752;
		case 32: goto tr752;
		case 44: goto tr753;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr752;
	goto st0;
st491:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof491;
case 491:
	if ( (*( state.p)) == 112 )
		goto st492;
	goto st0;
st492:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof492;
case 492:
	if ( (*( state.p)) == 109 )
		goto st493;
	goto st0;
st493:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof493;
case 493:
	if ( (*( state.p)) == 108 )
		goto st494;
	goto st0;
st494:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof494;
case 494:
	if ( (*( state.p)) == 105 )
		goto st495;
	goto st0;
st495:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof495;
case 495:
	if ( (*( state.p)) == 98 )
		goto st496;
	goto st0;
st496:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof496;
case 496:
	switch( (*( state.p)) ) {
		case 13: goto tr759;
		case 32: goto tr759;
		case 44: goto tr760;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr759;
	goto st0;
st497:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof497;
case 497:
	if ( (*( state.p)) == 101 )
		goto st498;
	goto st0;
st498:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof498;
case 498:
	if ( (*( state.p)) == 114 )
		goto st499;
	goto st0;
st499:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof499;
case 499:
	if ( (*( state.p)) == 105 )
		goto st500;
	goto st0;
st500:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof500;
case 500:
	if ( (*( state.p)) == 102 )
		goto st501;
	goto st0;
st501:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof501;
case 501:
	if ( (*( state.p)) == 121 )
		goto st502;
	goto st0;
st502:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof502;
case 502:
	switch( (*( state.p)) ) {
		case 13: goto tr766;
		case 32: goto tr766;
		case 44: goto tr767;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr766;
	goto st0;
st503:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof503;
case 503:
	switch( (*( state.p)) ) {
		case 13: goto tr47;
		case 32: goto tr47;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto tr47;
	goto st0;
st504:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof504;
case 504:
	switch( (*( state.p)) ) {
		case 13: goto st17;
		case 32: goto st17;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st17;
	goto st0;
st505:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof505;
case 505:
	switch( (*( state.p)) ) {
		case 13: goto st6;
		case 32: goto st6;
	}
	if ( 9 <= (*( state.p)) && (*( state.p)) <= 10 )
		goto st6;
	goto st0;
st506:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof506;
case 506:
	switch( (*( state.p)) ) {
		case 34: goto tr768;
		case 92: goto tr769;
		case 110: goto tr770;
	}
	goto st0;
tr768:
#line 92 "propsparser.rl"
	{ state.match += '"';  { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st539;
tr769:
#line 94 "propsparser.rl"
	{ state.match += '\\'; { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st539;
tr770:
#line 93 "propsparser.rl"
	{ state.match += '\n'; { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st539;
st539:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof539;
case 539:
#line 9792 "propsparser.h"
	goto st0;
tr1190:
#line 105 "propsparser.rl"
	{ { state.cs =  state.stack[-- state.top];goto _again;} }
	goto st540;
st540:
	if ( ++( state.p) == ( state.pe) )
		goto _test_eof540;
case 540:
#line 9802 "propsparser.h"
	if ( (*( state.p)) == 10 )
		goto tr1190;
	goto st540;
	}
	_test_eof1:  state.cs = 1; goto _test_eof; 
	_test_eof507:  state.cs = 507; goto _test_eof; 
	_test_eof2:  state.cs = 2; goto _test_eof; 
	_test_eof3:  state.cs = 3; goto _test_eof; 
	_test_eof4:  state.cs = 4; goto _test_eof; 
	_test_eof5:  state.cs = 5; goto _test_eof; 
	_test_eof6:  state.cs = 6; goto _test_eof; 
	_test_eof7:  state.cs = 7; goto _test_eof; 
	_test_eof508:  state.cs = 508; goto _test_eof; 
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
	_test_eof509:  state.cs = 509; goto _test_eof; 
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
	_test_eof510:  state.cs = 510; goto _test_eof; 
	_test_eof31:  state.cs = 31; goto _test_eof; 
	_test_eof32:  state.cs = 32; goto _test_eof; 
	_test_eof33:  state.cs = 33; goto _test_eof; 
	_test_eof511:  state.cs = 511; goto _test_eof; 
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
	_test_eof512:  state.cs = 512; goto _test_eof; 
	_test_eof47:  state.cs = 47; goto _test_eof; 
	_test_eof48:  state.cs = 48; goto _test_eof; 
	_test_eof49:  state.cs = 49; goto _test_eof; 
	_test_eof50:  state.cs = 50; goto _test_eof; 
	_test_eof51:  state.cs = 51; goto _test_eof; 
	_test_eof52:  state.cs = 52; goto _test_eof; 
	_test_eof53:  state.cs = 53; goto _test_eof; 
	_test_eof513:  state.cs = 513; goto _test_eof; 
	_test_eof54:  state.cs = 54; goto _test_eof; 
	_test_eof55:  state.cs = 55; goto _test_eof; 
	_test_eof56:  state.cs = 56; goto _test_eof; 
	_test_eof57:  state.cs = 57; goto _test_eof; 
	_test_eof58:  state.cs = 58; goto _test_eof; 
	_test_eof59:  state.cs = 59; goto _test_eof; 
	_test_eof60:  state.cs = 60; goto _test_eof; 
	_test_eof61:  state.cs = 61; goto _test_eof; 
	_test_eof62:  state.cs = 62; goto _test_eof; 
	_test_eof514:  state.cs = 514; goto _test_eof; 
	_test_eof63:  state.cs = 63; goto _test_eof; 
	_test_eof64:  state.cs = 64; goto _test_eof; 
	_test_eof65:  state.cs = 65; goto _test_eof; 
	_test_eof66:  state.cs = 66; goto _test_eof; 
	_test_eof67:  state.cs = 67; goto _test_eof; 
	_test_eof68:  state.cs = 68; goto _test_eof; 
	_test_eof515:  state.cs = 515; goto _test_eof; 
	_test_eof69:  state.cs = 69; goto _test_eof; 
	_test_eof70:  state.cs = 70; goto _test_eof; 
	_test_eof71:  state.cs = 71; goto _test_eof; 
	_test_eof72:  state.cs = 72; goto _test_eof; 
	_test_eof516:  state.cs = 516; goto _test_eof; 
	_test_eof73:  state.cs = 73; goto _test_eof; 
	_test_eof74:  state.cs = 74; goto _test_eof; 
	_test_eof75:  state.cs = 75; goto _test_eof; 
	_test_eof76:  state.cs = 76; goto _test_eof; 
	_test_eof77:  state.cs = 77; goto _test_eof; 
	_test_eof78:  state.cs = 78; goto _test_eof; 
	_test_eof79:  state.cs = 79; goto _test_eof; 
	_test_eof80:  state.cs = 80; goto _test_eof; 
	_test_eof81:  state.cs = 81; goto _test_eof; 
	_test_eof82:  state.cs = 82; goto _test_eof; 
	_test_eof517:  state.cs = 517; goto _test_eof; 
	_test_eof83:  state.cs = 83; goto _test_eof; 
	_test_eof84:  state.cs = 84; goto _test_eof; 
	_test_eof85:  state.cs = 85; goto _test_eof; 
	_test_eof86:  state.cs = 86; goto _test_eof; 
	_test_eof87:  state.cs = 87; goto _test_eof; 
	_test_eof88:  state.cs = 88; goto _test_eof; 
	_test_eof89:  state.cs = 89; goto _test_eof; 
	_test_eof90:  state.cs = 90; goto _test_eof; 
	_test_eof91:  state.cs = 91; goto _test_eof; 
	_test_eof92:  state.cs = 92; goto _test_eof; 
	_test_eof93:  state.cs = 93; goto _test_eof; 
	_test_eof94:  state.cs = 94; goto _test_eof; 
	_test_eof518:  state.cs = 518; goto _test_eof; 
	_test_eof95:  state.cs = 95; goto _test_eof; 
	_test_eof96:  state.cs = 96; goto _test_eof; 
	_test_eof97:  state.cs = 97; goto _test_eof; 
	_test_eof98:  state.cs = 98; goto _test_eof; 
	_test_eof99:  state.cs = 99; goto _test_eof; 
	_test_eof100:  state.cs = 100; goto _test_eof; 
	_test_eof101:  state.cs = 101; goto _test_eof; 
	_test_eof102:  state.cs = 102; goto _test_eof; 
	_test_eof103:  state.cs = 103; goto _test_eof; 
	_test_eof519:  state.cs = 519; goto _test_eof; 
	_test_eof104:  state.cs = 104; goto _test_eof; 
	_test_eof105:  state.cs = 105; goto _test_eof; 
	_test_eof106:  state.cs = 106; goto _test_eof; 
	_test_eof107:  state.cs = 107; goto _test_eof; 
	_test_eof108:  state.cs = 108; goto _test_eof; 
	_test_eof520:  state.cs = 520; goto _test_eof; 
	_test_eof109:  state.cs = 109; goto _test_eof; 
	_test_eof110:  state.cs = 110; goto _test_eof; 
	_test_eof111:  state.cs = 111; goto _test_eof; 
	_test_eof112:  state.cs = 112; goto _test_eof; 
	_test_eof113:  state.cs = 113; goto _test_eof; 
	_test_eof114:  state.cs = 114; goto _test_eof; 
	_test_eof115:  state.cs = 115; goto _test_eof; 
	_test_eof116:  state.cs = 116; goto _test_eof; 
	_test_eof117:  state.cs = 117; goto _test_eof; 
	_test_eof521:  state.cs = 521; goto _test_eof; 
	_test_eof118:  state.cs = 118; goto _test_eof; 
	_test_eof119:  state.cs = 119; goto _test_eof; 
	_test_eof120:  state.cs = 120; goto _test_eof; 
	_test_eof121:  state.cs = 121; goto _test_eof; 
	_test_eof122:  state.cs = 122; goto _test_eof; 
	_test_eof123:  state.cs = 123; goto _test_eof; 
	_test_eof124:  state.cs = 124; goto _test_eof; 
	_test_eof125:  state.cs = 125; goto _test_eof; 
	_test_eof126:  state.cs = 126; goto _test_eof; 
	_test_eof127:  state.cs = 127; goto _test_eof; 
	_test_eof128:  state.cs = 128; goto _test_eof; 
	_test_eof129:  state.cs = 129; goto _test_eof; 
	_test_eof522:  state.cs = 522; goto _test_eof; 
	_test_eof130:  state.cs = 130; goto _test_eof; 
	_test_eof131:  state.cs = 131; goto _test_eof; 
	_test_eof132:  state.cs = 132; goto _test_eof; 
	_test_eof133:  state.cs = 133; goto _test_eof; 
	_test_eof134:  state.cs = 134; goto _test_eof; 
	_test_eof135:  state.cs = 135; goto _test_eof; 
	_test_eof136:  state.cs = 136; goto _test_eof; 
	_test_eof137:  state.cs = 137; goto _test_eof; 
	_test_eof138:  state.cs = 138; goto _test_eof; 
	_test_eof139:  state.cs = 139; goto _test_eof; 
	_test_eof523:  state.cs = 523; goto _test_eof; 
	_test_eof140:  state.cs = 140; goto _test_eof; 
	_test_eof141:  state.cs = 141; goto _test_eof; 
	_test_eof142:  state.cs = 142; goto _test_eof; 
	_test_eof524:  state.cs = 524; goto _test_eof; 
	_test_eof143:  state.cs = 143; goto _test_eof; 
	_test_eof144:  state.cs = 144; goto _test_eof; 
	_test_eof145:  state.cs = 145; goto _test_eof; 
	_test_eof146:  state.cs = 146; goto _test_eof; 
	_test_eof147:  state.cs = 147; goto _test_eof; 
	_test_eof148:  state.cs = 148; goto _test_eof; 
	_test_eof525:  state.cs = 525; goto _test_eof; 
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
	_test_eof526:  state.cs = 526; goto _test_eof; 
	_test_eof215:  state.cs = 215; goto _test_eof; 
	_test_eof216:  state.cs = 216; goto _test_eof; 
	_test_eof217:  state.cs = 217; goto _test_eof; 
	_test_eof218:  state.cs = 218; goto _test_eof; 
	_test_eof219:  state.cs = 219; goto _test_eof; 
	_test_eof220:  state.cs = 220; goto _test_eof; 
	_test_eof221:  state.cs = 221; goto _test_eof; 
	_test_eof222:  state.cs = 222; goto _test_eof; 
	_test_eof527:  state.cs = 527; goto _test_eof; 
	_test_eof223:  state.cs = 223; goto _test_eof; 
	_test_eof224:  state.cs = 224; goto _test_eof; 
	_test_eof225:  state.cs = 225; goto _test_eof; 
	_test_eof226:  state.cs = 226; goto _test_eof; 
	_test_eof227:  state.cs = 227; goto _test_eof; 
	_test_eof228:  state.cs = 228; goto _test_eof; 
	_test_eof229:  state.cs = 229; goto _test_eof; 
	_test_eof230:  state.cs = 230; goto _test_eof; 
	_test_eof231:  state.cs = 231; goto _test_eof; 
	_test_eof232:  state.cs = 232; goto _test_eof; 
	_test_eof233:  state.cs = 233; goto _test_eof; 
	_test_eof234:  state.cs = 234; goto _test_eof; 
	_test_eof235:  state.cs = 235; goto _test_eof; 
	_test_eof236:  state.cs = 236; goto _test_eof; 
	_test_eof528:  state.cs = 528; goto _test_eof; 
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
	_test_eof529:  state.cs = 529; goto _test_eof; 
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
	_test_eof530:  state.cs = 530; goto _test_eof; 
	_test_eof267:  state.cs = 267; goto _test_eof; 
	_test_eof268:  state.cs = 268; goto _test_eof; 
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
	_test_eof283:  state.cs = 283; goto _test_eof; 
	_test_eof284:  state.cs = 284; goto _test_eof; 
	_test_eof285:  state.cs = 285; goto _test_eof; 
	_test_eof531:  state.cs = 531; goto _test_eof; 
	_test_eof286:  state.cs = 286; goto _test_eof; 
	_test_eof287:  state.cs = 287; goto _test_eof; 
	_test_eof288:  state.cs = 288; goto _test_eof; 
	_test_eof532:  state.cs = 532; goto _test_eof; 
	_test_eof289:  state.cs = 289; goto _test_eof; 
	_test_eof290:  state.cs = 290; goto _test_eof; 
	_test_eof291:  state.cs = 291; goto _test_eof; 
	_test_eof292:  state.cs = 292; goto _test_eof; 
	_test_eof293:  state.cs = 293; goto _test_eof; 
	_test_eof294:  state.cs = 294; goto _test_eof; 
	_test_eof533:  state.cs = 533; goto _test_eof; 
	_test_eof295:  state.cs = 295; goto _test_eof; 
	_test_eof296:  state.cs = 296; goto _test_eof; 
	_test_eof297:  state.cs = 297; goto _test_eof; 
	_test_eof298:  state.cs = 298; goto _test_eof; 
	_test_eof299:  state.cs = 299; goto _test_eof; 
	_test_eof300:  state.cs = 300; goto _test_eof; 
	_test_eof301:  state.cs = 301; goto _test_eof; 
	_test_eof302:  state.cs = 302; goto _test_eof; 
	_test_eof303:  state.cs = 303; goto _test_eof; 
	_test_eof304:  state.cs = 304; goto _test_eof; 
	_test_eof305:  state.cs = 305; goto _test_eof; 
	_test_eof306:  state.cs = 306; goto _test_eof; 
	_test_eof307:  state.cs = 307; goto _test_eof; 
	_test_eof308:  state.cs = 308; goto _test_eof; 
	_test_eof309:  state.cs = 309; goto _test_eof; 
	_test_eof310:  state.cs = 310; goto _test_eof; 
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
	_test_eof534:  state.cs = 534; goto _test_eof; 
	_test_eof363:  state.cs = 363; goto _test_eof; 
	_test_eof364:  state.cs = 364; goto _test_eof; 
	_test_eof365:  state.cs = 365; goto _test_eof; 
	_test_eof535:  state.cs = 535; goto _test_eof; 
	_test_eof366:  state.cs = 366; goto _test_eof; 
	_test_eof367:  state.cs = 367; goto _test_eof; 
	_test_eof368:  state.cs = 368; goto _test_eof; 
	_test_eof369:  state.cs = 369; goto _test_eof; 
	_test_eof370:  state.cs = 370; goto _test_eof; 
	_test_eof371:  state.cs = 371; goto _test_eof; 
	_test_eof536:  state.cs = 536; goto _test_eof; 
	_test_eof372:  state.cs = 372; goto _test_eof; 
	_test_eof373:  state.cs = 373; goto _test_eof; 
	_test_eof374:  state.cs = 374; goto _test_eof; 
	_test_eof375:  state.cs = 375; goto _test_eof; 
	_test_eof376:  state.cs = 376; goto _test_eof; 
	_test_eof377:  state.cs = 377; goto _test_eof; 
	_test_eof378:  state.cs = 378; goto _test_eof; 
	_test_eof379:  state.cs = 379; goto _test_eof; 
	_test_eof380:  state.cs = 380; goto _test_eof; 
	_test_eof381:  state.cs = 381; goto _test_eof; 
	_test_eof382:  state.cs = 382; goto _test_eof; 
	_test_eof383:  state.cs = 383; goto _test_eof; 
	_test_eof384:  state.cs = 384; goto _test_eof; 
	_test_eof385:  state.cs = 385; goto _test_eof; 
	_test_eof386:  state.cs = 386; goto _test_eof; 
	_test_eof387:  state.cs = 387; goto _test_eof; 
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
	_test_eof537:  state.cs = 537; goto _test_eof; 
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
	_test_eof538:  state.cs = 538; goto _test_eof; 
	_test_eof448:  state.cs = 448; goto _test_eof; 
	_test_eof449:  state.cs = 449; goto _test_eof; 
	_test_eof450:  state.cs = 450; goto _test_eof; 
	_test_eof451:  state.cs = 451; goto _test_eof; 
	_test_eof452:  state.cs = 452; goto _test_eof; 
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
	_test_eof468:  state.cs = 468; goto _test_eof; 
	_test_eof469:  state.cs = 469; goto _test_eof; 
	_test_eof470:  state.cs = 470; goto _test_eof; 
	_test_eof471:  state.cs = 471; goto _test_eof; 
	_test_eof472:  state.cs = 472; goto _test_eof; 
	_test_eof473:  state.cs = 473; goto _test_eof; 
	_test_eof474:  state.cs = 474; goto _test_eof; 
	_test_eof475:  state.cs = 475; goto _test_eof; 
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
	_test_eof539:  state.cs = 539; goto _test_eof; 
	_test_eof540:  state.cs = 540; goto _test_eof; 

	_test_eof: {}
	if ( ( state.p) == ( state.eof) )
	{
	switch (  state.cs ) {
	case 515: 
#line 116 "propsparser.rl"
	{ props.name = state.match; }
	break;
	case 521: 
#line 117 "propsparser.rl"
	{ props.version = state.match; }
	break;
	case 522: 
#line 118 "propsparser.rl"
	{ props.release = state.match; }
	break;
	case 519: 
#line 119 "propsparser.rl"
	{ props.summary = state.match; }
	break;
	case 512: 
#line 120 "propsparser.rl"
	{ props.description = state.match; }
	break;
	case 509: 
#line 121 "propsparser.rl"
	{ props.buildhost = state.match; }
	break;
	case 514: 
#line 122 "propsparser.rl"
	{ props.license = state.match; }
	break;
	case 517: 
#line 123 "propsparser.rl"
	{ props.packager = state.match; }
	break;
	case 513: 
#line 124 "propsparser.rl"
	{ props.group = state.match; }
	break;
	case 520: 
#line 125 "propsparser.rl"
	{ props.url = state.match; }
	break;
	case 516: 
#line 126 "propsparser.rl"
	{ props.os = state.match; }
	break;
	case 508: 
#line 127 "propsparser.rl"
	{ props.arch = state.match; }
	break;
	case 526: 
#line 128 "propsparser.rl"
	{ props.platform = state.match; }
	break;
	case 537: 
#line 129 "propsparser.rl"
	{ props.optflags = state.match; }
	break;
	case 518: 
#line 131 "propsparser.rl"
	{ props.rpmversion = state.match; }
	break;
	case 529: 
#line 135 "propsparser.rl"
	{ props.prein.code = state.match; }
	break;
	case 527: 
#line 139 "propsparser.rl"
	{ props.postin.code = state.match; }
	break;
	case 530: 
#line 143 "propsparser.rl"
	{ props.preun.code = state.match; }
	break;
	case 528: 
#line 147 "propsparser.rl"
	{ props.postun.code = state.match; }
	break;
	case 531: 
	case 533: 
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	break;
	case 523: 
	case 525: 
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	break;
	case 510: 
	case 538: 
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	break;
	case 534: 
	case 536: 
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	break;
	case 532: 
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 193 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
	break;
	case 524: 
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 198 "propsparser.rl"
	{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
	break;
	case 511: 
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 203 "propsparser.rl"
	{ props.conflict.push_back(deps); }
	break;
	case 535: 
#line 184 "propsparser.rl"
	{ deps.version = state.match; }
#line 208 "propsparser.rl"
	{ props.obsolete.push_back(deps); }
	break;
#line 10472 "propsparser.h"
	}
	}

	_out: {}
	}

#line 233 "propsparser.rl"

    if (state.cs == PropsParser_error) {
        throw std::runtime_error("Parse error. Unconsumed input: " + std::string(state.p, state.pe));
    }
}

}

#endif
