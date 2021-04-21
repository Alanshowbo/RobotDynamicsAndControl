/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:29 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t55;
  double t46;
  double t52;
  double t59;
  double t63;
  double t64;
  double t65;
  double t76;
  double t77;
  double t78;
  double t79;
  double t80;
  double t81;
  double t86;
  double t91;
  double t93;
  double t94;
  double t85;
  double t87;
  double t89;
  double t95;
  double t97;
  double t99;
  double t101;
  double t113;
  double t114;
  double t115;
  double t128;
  double t132;
  double t129;
  double t133;
  double t134;
  double t151;
  double t152;
  double t153;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t147;
  double t148;
  double t150;
  double t168;
  double t169;
  double t170;
  double t188;
  double t190;
  double t191;
  double t192;
  double t193;
  double t194;
  double t197;
  double t198;
  double t200;
  double t201;
  double t202;
  double t179;
  double t180;
  double t181;
  double t221;
  double t222;
  double t223;
  double t199;
  double t205;
  double t206;
  double t214;
  double t215;
  double t216;
  double t210;
  double t211;
  double t212;
  double t213;
  double t217;
  double t218;
  double t219;
  double t224;
  double t225;
  double t226;
  double t227;
  double t228;
  double t229;
  double t230;
  double t234;
  double t235;
  double t236;
  double t237;
  double t238;
  double t239;
  double t242;
  double t243;
  double t244;
  double t245;
  double t246;
  double t248;
  double t249;
  double t250;
  double t251;
  double t252;
  double t256;
  double t257;
  double t258;
  double t272;
  double t160;
  double t161;
  double t162;
  double t178;
  double t182;
  double t183;
  double t274;
  double t275;
  double t276;
  double t171;
  double t173;
  double t174;
  double t175;
  double t177;
  double t185;
  double t186;
  double t53;
  double t60;
  double t61;
  double t273;
  double t277;
  double t278;
  double t279;
  double t290;
  double t291;
  double t292;
  double t293;
  double t294;
  double t295;
  double t296;
  double t297;
  double t298;
  double t299;
  double t300;
  double t301;
  double t155;
  double t156;
  double t157;
  double t286;
  double t282;
  double t159;
  double t163;
  double t164;
  double t304;
  double t305;
  double t306;
  double t307;
  double t308;
  double t309;
  double t310;
  double t311;
  double t312;
  double t313;
  double t314;
  double t71;
  double t72;
  double t73;
  double t363;
  double t364;
  double t365;
  double t154;
  double t158;
  double t165;
  double t166;
  double t247;
  double t253;
  double t254;
  double t66;
  double t74;
  double t90;
  double t98;
  double t102;
  double t103;
  double t104;
  double t105;
  double t107;
  double t108;
  double t111;
  double t112;
  double t118;
  double t121;
  double t122;
  double t127;
  double t167;
  double t187;
  double t207;
  double t220;
  double t231;
  double t232;
  double t233;
  double t240;
  double t241;
  double t255;
  double t259;
  double t260;
  double t261;
  double t262;
  double t263;
  double t264;
  double t265;
  double t266;
  double t267;
  double t268;
  double t269;
  double t270;
  double t271;
  double t317;
  double t318;
  double t319;
  double t323;
  double t324;
  double t325;
  double t336;
  double t337;
  double t338;
  double t339;
  double t395;
  double t396;
  double t397;
  double t346;
  double t347;
  double t348;
  double t342;
  double t343;
  double t344;
  double t398;
  double t405;
  double t406;
  double t407;
  double t285;
  double t287;
  double t288;
  double t280;
  double t281;
  double t283;
  double t404;
  double t408;
  double t409;
  double t434;
  double t443;
  double t444;
  double t445;
  double t435;
  double t436;
  double t437;
  double t439;
  double t440;
  double t441;
  double t413;
  double t414;
  double t415;
  double t416;
  double t417;
  double t420;
  double t421;
  double t422;
  double t423;
  double t424;
  double t353;
  double t383;
  double t384;
  double t385;
  double t386;
  double t387;
  double t389;
  double t390;
  double t391;
  double t392;
  double t393;
  double t399;
  double t400;
  double t401;
  double t402;
  double t403;
  double t368;
  double t371;
  double t438;
  double t442;
  double t446;
  double t447;
  double t448;
  double t449;
  double t450;
  double t451;
  double t452;
  double t453;
  double t454;
  double t455;
  double t456;
  double t457;
  double t458;
  double t459;
  double t460;
  double t461;
  double t462;
  double t463;
  double t378;
  double t379;
  double t380;
  double t381;
  double t382;
  double t388;
  double t394;
  double t410;
  double t411;
  double t412;
  double t418;
  double t419;
  double t425;
  double t321;
  double t341;
  double t350;
  double t497;
  double t498;
  double t499;
  double t485;
  double t486;
  double t487;
  double t489;
  double t490;
  double t491;
  double t512;
  double t513;
  double t514;
  double t426;
  double t427;
  double t431;
  double t432;
  double t433;
  double t534;
  double t543;
  double t544;
  double t545;
  double t535;
  double t536;
  double t537;
  double t539;
  double t540;
  double t541;
  double t538;
  double t542;
  double t546;
  double t547;
  double t548;
  double t549;
  double t550;
  double t551;
  double t552;
  double t553;
  double t554;
  double t555;
  double t556;
  double t557;
  double t558;
  double t559;
  double t560;
  double t561;
  double t562;
  double t563;
  double t528;
  double t529;
  double t530;
  double t302;
  double t303;
  double t585;
  double t586;
  double t587;
  double t575;
  double t576;
  double t577;
  double t579;
  double t580;
  double t581;
  double t600;
  double t601;
  double t602;
  t55 = Cos(var1[1]);
  t46 = Cos(var1[0]);
  t52 = Sin(var1[1]);
  t59 = Sin(var1[0]);
  t63 = -0.125*var2[0]*t55*t46;
  t64 = 0.125*var2[1]*t52*t59;
  t65 = t63 + t64;
  t76 = Power(t55,2);
  t77 = var2[1]*t76;
  t78 = Power(t52,2);
  t79 = var2[1]*t78;
  t80 = t77 + t79;
  t81 = Power(t46,2);
  t86 = Power(t59,2);
  t91 = var2[0]*t81;
  t93 = var2[0]*t86;
  t94 = t91 + t93;
  t85 = 0.5*t81*t80;
  t87 = 0.5*t80*t86;
  t89 = 0. + t85 + t87;
  t95 = 0.5*t55*t94;
  t97 = 0. + t95;
  t99 = -0.5*t52*t94;
  t101 = 0. + t99;
  t113 = -0.9*t46*t89;
  t114 = -0.9*t52*t59*t97;
  t115 = -0.1*t55*t59*t101;
  t128 = Cos(var1[2]);
  t132 = Sin(var1[2]);
  t129 = t128*t52*t59;
  t133 = t55*t59*t132;
  t134 = t129 + t133;
  t151 = t46*t128*t52;
  t152 = t55*t46*t132;
  t153 = t151 + t152;
  t135 = 0.1875*var2[2]*t134;
  t136 = -0.25*t55*t46;
  t137 = -1.*t55*t46*t128;
  t138 = t46*t52*t132;
  t139 = t137 + t138;
  t140 = 0.1875*t139;
  t141 = t136 + t140;
  t142 = var2[0]*t141;
  t143 = 0.25*t52*t59;
  t144 = 0.1875*t134;
  t147 = t143 + t144;
  t148 = var2[1]*t147;
  t150 = t135 + t142 + t148;
  t168 = -1.*t46*t128*t52;
  t169 = -1.*t55*t46*t132;
  t170 = t168 + t169;
  t188 = -1.*t46*t80;
  t190 = Power(t128,2);
  t191 = var2[2]*t190;
  t192 = Power(t132,2);
  t193 = var2[2]*t192;
  t194 = t191 + t193;
  t197 = -1.*t46*t194;
  t198 = t188 + t197;
  t200 = -1.*t80*t59;
  t201 = -1.*t59*t194;
  t202 = t200 + t201;
  t179 = -1.*t55*t128*t59;
  t180 = t52*t59*t132;
  t181 = t179 + t180;
  t221 = t55*t46*t128;
  t222 = -1.*t46*t52*t132;
  t223 = t221 + t222;
  t199 = -0.5*t46*t198;
  t205 = -0.5*t59*t202;
  t206 = 0. + t199 + t205;
  t214 = -1.*t128*t52*t59;
  t215 = -1.*t55*t59*t132;
  t216 = t214 + t215;
  t210 = t55*t128;
  t211 = -1.*t52*t132;
  t212 = t210 + t211;
  t213 = 0.5*t94*t212;
  t217 = 0.5*t216*t198;
  t218 = 0.5*t153*t202;
  t219 = t213 + t217 + t218;
  t224 = -1.*t128*t52;
  t225 = -1.*t55*t132;
  t226 = t224 + t225;
  t227 = 0.5*t94*t226;
  t228 = 0.5*t181*t198;
  t229 = 0.5*t223*t202;
  t230 = t227 + t228 + t229;
  t234 = t80*t59;
  t235 = t59*t194;
  t236 = t234 + t235;
  t237 = -0.9*t46*t206;
  t238 = 0.9*t216*t219;
  t239 = 0.1*t181*t230;
  t242 = 0.5*t170*t198;
  t243 = 0.5*t153*t198;
  t244 = 0.5*t216*t202;
  t245 = 0.5*t216*t236;
  t246 = 0. + t242 + t243 + t244 + t245;
  t248 = 0.5*t223*t198;
  t249 = 0.5*t139*t198;
  t250 = 0.5*t181*t202;
  t251 = 0.5*t181*t236;
  t252 = 0. + t248 + t249 + t250 + t251;
  t256 = -0.5*t46*t202;
  t257 = -0.5*t46*t236;
  t258 = 0. + t256 + t257;
  t272 = t81 + t86;
  t160 = t55*t128*t59;
  t161 = -1.*t52*t59*t132;
  t162 = t160 + t161;
  t178 = -0.25*t55*t59;
  t182 = 0.1875*t181;
  t183 = t178 + t182;
  t274 = -1.*t55*t128;
  t275 = t52*t132;
  t276 = t274 + t275;
  t171 = 0.1875*var2[2]*t170;
  t173 = -0.25*t46*t52;
  t174 = 0.1875*t170;
  t175 = t173 + t174;
  t177 = var2[1]*t175;
  t185 = var2[0]*t183;
  t186 = t171 + t177 + t185;
  t53 = -0.125*var2[1]*t46*t52;
  t60 = -0.125*var2[0]*t55*t59;
  t61 = t53 + t60;
  t273 = 0.9*t272*t226*t212;
  t277 = 0.1*t272*t226*t276;
  t278 = t273 + t277;
  t279 = t94*t278;
  t290 = 0.45*t272*t226*t216;
  t291 = 0.05*t272*t226*t134;
  t292 = 0.45*t272*t212*t181;
  t293 = 0.05*t272*t276*t181;
  t294 = t290 + t291 + t292 + t293;
  t295 = t294*t198;
  t296 = 0.05*t272*t226*t170;
  t297 = 0.45*t272*t226*t153;
  t298 = 0.45*t272*t212*t223;
  t299 = 0.05*t272*t276*t223;
  t300 = t296 + t297 + t298 + t299;
  t301 = t300*t202;
  t155 = 0.25*t46*t52;
  t156 = 0.1875*t153;
  t157 = t155 + t156;
  t286 = 0.1875*var2[2]*t139;
  t282 = 0.1875*var2[2]*t162;
  t159 = 0.25*t55*t59;
  t163 = 0.1875*t162;
  t164 = t159 + t163;
  t304 = 0.5*t94*t276;
  t305 = 0.5*t134*t198;
  t306 = 0.5*t170*t202;
  t307 = 0. + t304 + t305 + t306;
  t308 = 0.1*t226*t307;
  t309 = 0.9*t226*t219;
  t310 = 0.1*t276*t230;
  t311 = 0. + t227 + t228 + t229;
  t312 = 0.9*t212*t311;
  t313 = t308 + t309 + t310 + t312;
  t314 = t272*t313;
  t71 = 0.125*var2[1]*t46*t52;
  t72 = 0.125*var2[0]*t55*t59;
  t73 = t71 + t72;
  t363 = 0.45*t272*t212*t216;
  t364 = 0.05*t272*t226*t181;
  t365 = t363 + t364;
  t154 = 0.1875*var2[2]*t153;
  t158 = var2[1]*t157;
  t165 = var2[0]*t164;
  t166 = t154 + t158 + t165;
  t247 = 0.9*t212*t246;
  t253 = 0.1*t226*t252;
  t254 = t247 + t253;
  t66 = 5.*t61*t65;
  t74 = 5.*t73*t65;
  t90 = 0.9*t59*t89;
  t98 = -0.9*t46*t52*t97;
  t102 = -0.1*t55*t46*t101;
  t103 = 0. + t90 + t98 + t102;
  t104 = -1.*t46*t80*t103;
  t105 = -0.9*t59*t89;
  t107 = 0.9*t46*t52*t97;
  t108 = 0.1*t55*t46*t101;
  t111 = t105 + t107 + t108;
  t112 = -1.*t46*t80*t111;
  t118 = t113 + t114 + t115;
  t121 = t80*t59*t118;
  t122 = 0. + t113 + t114 + t115;
  t127 = -1.*t80*t59*t122;
  t167 = 10.*t150*t166;
  t187 = 10.*t150*t186;
  t207 = -0.9*t59*t206;
  t220 = 0.9*t153*t219;
  t231 = 0.1*t223*t230;
  t232 = t207 + t220 + t231;
  t233 = t198*t232;
  t240 = t237 + t238 + t239;
  t241 = t236*t240;
  t255 = t94*t254;
  t259 = -0.9*t59*t258;
  t260 = 0.9*t153*t246;
  t261 = 0.1*t223*t252;
  t262 = t237 + t238 + t239 + t259 + t260 + t261;
  t263 = t202*t262;
  t264 = 0.9*t59*t206;
  t265 = 0.9*t170*t219;
  t266 = 0.1*t139*t230;
  t267 = -0.9*t46*t258;
  t268 = 0.9*t216*t246;
  t269 = 0.1*t181*t252;
  t270 = t264 + t265 + t266 + t267 + t268 + t269;
  t271 = t198*t270;
  t317 = 0.125*var2[0]*t46*t52;
  t318 = 0.125*var2[1]*t55*t59;
  t319 = t317 + t318;
  t323 = -0.125*var2[1]*t55*t46;
  t324 = 0.125*var2[0]*t52*t59;
  t325 = t323 + t324;
  t336 = -0.4*t55*t52*t94;
  t337 = -0.9*t52*t97;
  t338 = -0.1*t55*t101;
  t339 = t336 + t337 + t338;
  t395 = t128*t52;
  t396 = t55*t132;
  t397 = t395 + t396;
  t346 = var2[0]*t157;
  t347 = var2[1]*t164;
  t348 = t282 + t346 + t347;
  t342 = var2[1]*t141;
  t343 = var2[0]*t147;
  t344 = t286 + t342 + t343;
  t398 = 0.1875*var2[2]*t397;
  t405 = -0.25*t55;
  t406 = 0.1875*t276;
  t407 = t405 + t406;
  t285 = 0.1875*var2[1]*t139;
  t287 = 0.1875*var2[0]*t134;
  t288 = t285 + t286 + t287;
  t280 = 0.1875*var2[0]*t153;
  t281 = 0.1875*var2[1]*t162;
  t283 = t280 + t281 + t282;
  t404 = 0.1875*var2[2]*t276;
  t408 = var2[1]*t407;
  t409 = t404 + t408;
  t434 = t76 + t78;
  t443 = -0.5*t434*t59*t223;
  t444 = -0.5*t46*t434*t181;
  t445 = t443 + t444;
  t435 = -0.5*t434*t59*t153;
  t436 = -0.5*t46*t434*t216;
  t437 = t435 + t436;
  t439 = -0.5*t434*t59*t170;
  t440 = -0.5*t46*t434*t134;
  t441 = t439 + t440;
  t413 = 0.1*t223*t307;
  t414 = 0.9*t223*t219;
  t415 = 0.1*t170*t230;
  t416 = 0.9*t153*t311;
  t417 = 0. + t413 + t414 + t415 + t416;
  t420 = 0.1*t181*t307;
  t421 = 0.9*t181*t219;
  t422 = 0.1*t134*t230;
  t423 = 0.9*t216*t311;
  t424 = 0. + t420 + t421 + t422 + t423;
  t353 = -0.625*t55*t46*t61;
  t383 = -0.05*t76*t46*t94;
  t384 = -0.45*t46*t78*t94;
  t385 = 0.9*t55*t46*t97;
  t386 = -0.1*t46*t52*t101;
  t387 = 0. + t383 + t384 + t385 + t386;
  t389 = 0.05*t76*t59*t94;
  t390 = 0.45*t78*t59*t94;
  t391 = -0.9*t55*t59*t97;
  t392 = 0.1*t52*t59*t101;
  t393 = 0. + t389 + t390 + t391 + t392;
  t399 = 0.25*t52;
  t400 = 0.1875*t397;
  t401 = t399 + t400;
  t402 = var2[1]*t401;
  t403 = t398 + t402;
  t368 = 10.*t164*t150;
  t371 = 10.*t141*t186;
  t438 = 0.9*t223*t437;
  t442 = 0.1*t223*t441;
  t446 = 0.1*t170*t445;
  t447 = 0.9*t153*t445;
  t448 = t438 + t442 + t446 + t447;
  t449 = t202*t448;
  t450 = 0.9*t226*t437;
  t451 = 0.1*t226*t441;
  t452 = 0.9*t212*t445;
  t453 = 0.1*t276*t445;
  t454 = t450 + t451 + t452 + t453;
  t455 = t94*t454;
  t456 = 0.9*t181*t437;
  t457 = 0.1*t181*t441;
  t458 = 0.9*t216*t445;
  t459 = 0.1*t134*t445;
  t460 = t456 + t457 + t458 + t459;
  t461 = t198*t460;
  t462 = -1.*t434*t59*t417;
  t463 = -1.*t46*t434*t424;
  t378 = Power(var2[1],2);
  t379 = -0.078125*t378*t55*t52;
  t380 = 5.*t319*t65;
  t381 = 5.*t61*t325;
  t382 = t94*t339;
  t388 = -1.*t80*t59*t387;
  t394 = -1.*t46*t80*t393;
  t410 = 10.*t403*t409;
  t411 = 10.*t150*t348;
  t412 = 10.*t344*t186;
  t418 = t202*t417;
  t419 = t94*t313;
  t425 = t198*t424;
  t321 = 0.625*t52*t59*t61;
  t341 = 10.*t157*t150;
  t350 = 10.*t147*t186;
  t497 = 0.5*t81*t434;
  t498 = 0.5*t434*t86;
  t499 = t497 + t498;
  t485 = -0.5*t46*t434*t170;
  t486 = -0.5*t46*t434*t153;
  t487 = 0. + t485 + t486;
  t489 = -0.5*t46*t434*t223;
  t490 = -0.5*t46*t434*t139;
  t491 = 0. + t489 + t490;
  t512 = -0.9*t46*t499;
  t513 = 0.9*t216*t437;
  t514 = 0.1*t181*t445;
  t426 = 0.1875*var2[1]*t397;
  t427 = t426 + t398;
  t431 = 1.875*t397*t409;
  t432 = 1.875*t162*t150;
  t433 = 1.875*t139*t186;
  t534 = t190 + t192;
  t543 = -0.5*t59*t223*t534;
  t544 = -0.5*t46*t181*t534;
  t545 = t543 + t544;
  t535 = -0.5*t59*t153*t534;
  t536 = -0.5*t46*t216*t534;
  t537 = t535 + t536;
  t539 = -0.5*t59*t170*t534;
  t540 = -0.5*t46*t134*t534;
  t541 = t539 + t540;
  t538 = 0.9*t223*t537;
  t542 = 0.1*t223*t541;
  t546 = 0.1*t170*t545;
  t547 = 0.9*t153*t545;
  t548 = t538 + t542 + t546 + t547;
  t549 = t202*t548;
  t550 = 0.9*t226*t537;
  t551 = 0.1*t226*t541;
  t552 = 0.9*t212*t545;
  t553 = 0.1*t276*t545;
  t554 = t550 + t551 + t552 + t553;
  t555 = t94*t554;
  t556 = 0.9*t181*t537;
  t557 = 0.1*t181*t541;
  t558 = 0.9*t216*t545;
  t559 = 0.1*t134*t545;
  t560 = t556 + t557 + t558 + t559;
  t561 = t198*t560;
  t562 = -1.*t59*t534*t417;
  t563 = -1.*t46*t534*t424;
  t528 = 10.*t427*t409;
  t529 = 10.*t283*t150;
  t530 = 10.*t288*t186;
  t302 = 1.875*t153*t150;
  t303 = 1.875*t134*t186;
  t585 = 0.5*t81*t534;
  t586 = 0.5*t86*t534;
  t587 = t585 + t586;
  t575 = -0.5*t46*t170*t534;
  t576 = -0.5*t46*t153*t534;
  t577 = 0. + t575 + t576;
  t579 = -0.5*t46*t223*t534;
  t580 = -0.5*t46*t139*t534;
  t581 = 0. + t579 + t580;
  t600 = -0.9*t46*t587;
  t601 = 0.9*t216*t537;
  t602 = 0.1*t181*t545;
  p_output1[0]=0. + t104 + t112 + t121 + t127 + t167 + t187 + t233 + t241 + t255 + t263 + t271 + t66 + t74 - 2.*(0. + t104 + t112 + t121 + t127 + t167 + t187 + t233 + t241 + t255 + t263 + t271 + t66 + t74) + (0. + 10.*t141*t166 + 10.*t150*t183 + t254*t272 + t198*(0.45*t170*t212*t272 + 0.05*t139*t226*t272) + t198*(0.45*t153*t212*t272 + 0.05*t223*t226*t272) + t353 + t202*t365 + t236*t365 + t368 + t371 - 0.625*t46*t55*t73)*var2[0] + (t279 + t295 + t301 + t314 + t321 + t272*t339 + t341 + 10.*t183*t344 + 10.*t141*t348 + t350 - 0.625*t319*t46*t55 - 0.625*t325*t55*t59 + 0.625*t46*t52*t65 - 1.*t59*(0.4*t272*t46*t76 - 0.4*t272*t46*t78)*t80 - 1.*t46*(-0.4*t272*t59*t76 + 0.4*t272*t59*t78)*t80 - 0.8*t272*t52*t55*t94)*var2[1] + (t279 + 10.*t141*t283 + 10.*t183*t288 + t295 + t301 + t302 + t303 + t314)*var2[2];
  p_output1[1]=t379 + t380 + t381 + t382 + t388 + t394 + t410 + t411 + t412 + t418 + t419 + t425 - 2.*(t379 + t380 + t381 + t382 + t388 + t394 + t410 + t411 + t412 + t418 + t419 + t425) + (0. + 10.*t147*t166 + 10.*t150*t175 + t321 + t341 + t350 - 1.*t103*t434*t46 - 1.*t111*t434*t46 - 1.*t232*t434*t46 - 1.*t270*t434*t46 + t236*(t512 + t513 + t514) + t202*(0. + 0.9*t153*t487 + 0.1*t223*t491 + t512 + t513 + t514) + t118*t434*t59 - 1.*t122*t434*t59 + t240*t434*t59 - 1.*t262*t434*t59 + t198*(0.9*t153*t437 + 0.1*t223*t445 - 0.9*t499*t59) + t198*(0. + 0.9*t170*t437 + 0.1*t139*t445 + 0.9*t216*t487 + 0.1*t181*t491 + 0.9*t499*t59) + 0.625*t52*t59*t73 + (0.9*t212*t487 + 0.1*t226*t491)*t94)*var2[0] + var2[1]*(10.*t175*t344 + 10.*t147*t348 + t353 + t368 + t371 + 10.*t403*t407 + 10.*t401*t409 + t449 + t455 - 1.*t393*t434*t46 + t461 + t462 + t463 - 0.625*t325*t46*t52 - 1.*t387*t434*t59 + 0.625*t319*t52*t59 + 0.625*t55*t59*t65 - 0.15625*t52*t55*var2[1]) + (10.*t147*t283 + 10.*t175*t288 + 10.*t407*t427 + t431 + t432 + t433 + t449 + t455 + t461 + t462 + t463)*var2[2];
  p_output1[2]=t418 + t419 + t425 + t528 + t529 + t530 - 2.*(t418 + t419 + t425 + t528 + t529 + t530) + (1.875*t134*t166 + 1.875*t150*t170 + t302 + t303 - 1.*t232*t46*t534 - 1.*t270*t46*t534 + t240*t534*t59 - 1.*t262*t534*t59 + t198*(0.9*t153*t537 + 0.1*t223*t545 - 0.9*t587*t59) + t198*(0. + 0.9*t170*t537 + 0.1*t139*t545 + 0.9*t216*t577 + 0.1*t181*t581 + 0.9*t587*t59) + t236*(t600 + t601 + t602) + t202*(0. + 0.9*t153*t577 + 0.1*t223*t581 + t600 + t601 + t602) + (0.9*t212*t577 + 0.1*t226*t581)*t94)*var2[0] + (1.875*t170*t344 + 1.875*t134*t348 + 1.875*t276*t403 + t431 + t432 + t433 + t549 + t555 + t561 + t562 + t563)*var2[1] + (1.875*t134*t283 + 1.875*t170*t288 + 1.875*t276*t427 + t431 + t432 + t433 + t549 + t555 + t561 + t562 + t563)*var2[2];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 3) && 
      !(mrows == 3 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 1 && ncols == 3) && 
      !(mrows == 3 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "gen3_Cdq.hh"

namespace SymExpression
{

void gen3_Cdq_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
