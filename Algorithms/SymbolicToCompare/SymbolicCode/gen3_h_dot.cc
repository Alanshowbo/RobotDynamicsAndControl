/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:35 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t89;
  double t107;
  double t94;
  double t138;
  double t144;
  double t101;
  double t191;
  double t233;
  double t236;
  double t239;
  double t258;
  double t259;
  double t260;
  double t152;
  double t153;
  double t154;
  double t160;
  double t162;
  double t170;
  double t173;
  double t174;
  double t177;
  double t192;
  double t199;
  double t207;
  double t210;
  double t212;
  double t216;
  double t218;
  double t223;
  double t263;
  double t264;
  double t265;
  double t267;
  double t151;
  double t178;
  double t180;
  double t226;
  double t227;
  double t182;
  double t185;
  double t190;
  double t114;
  double t139;
  double t140;
  double t181;
  double t228;
  double t229;
  double t231;
  double t241;
  double t310;
  double t254;
  double t255;
  double t256;
  double t243;
  double t245;
  double t246;
  double t299;
  double t300;
  double t304;
  double t335;
  double t336;
  double t339;
  double t340;
  double t342;
  double t343;
  double t361;
  double t362;
  double t363;
  double t365;
  double t366;
  double t367;
  double t373;
  double t374;
  double t375;
  double t391;
  double t392;
  double t395;
  double t377;
  double t378;
  double t383;
  double t384;
  double t385;
  double t386;
  double t389;
  double t390;
  double t396;
  double t397;
  double t278;
  double t280;
  double t281;
  double t406;
  double t408;
  double t413;
  double t349;
  double t351;
  double t352;
  double t358;
  double t90;
  double t359;
  double t95;
  double t353;
  double t354;
  double t355;
  double t356;
  double t357;
  double t399;
  double t400;
  double t402;
  double t404;
  double t360;
  double t478;
  double t479;
  double t480;
  double t481;
  double t482;
  double t483;
  double t485;
  double t486;
  double t487;
  double t488;
  double t489;
  double t490;
  double t272;
  double t273;
  double t276;
  double t465;
  double t466;
  double t467;
  double t468;
  double t469;
  double t470;
  double t471;
  double t472;
  double t473;
  double t474;
  double t414;
  double t501;
  double t502;
  double t503;
  double t420;
  double t505;
  double t506;
  double t421;
  double t429;
  double t430;
  double t435;
  double t438;
  double t439;
  double t440;
  double t441;
  double t442;
  double t443;
  double t444;
  double t445;
  double t545;
  double t546;
  double t547;
  double t548;
  double t549;
  double t550;
  double t551;
  double t553;
  double t554;
  double t555;
  double t556;
  double t535;
  double t536;
  double t537;
  double t538;
  double t539;
  double t540;
  double t570;
  double t571;
  double t573;
  double t574;
  double t575;
  double t98;
  double t250;
  double t251;
  double t252;
  double t284;
  double t289;
  double t290;
  double t610;
  double t611;
  double t612;
  double t613;
  double t614;
  double t615;
  double t261;
  double t268;
  double t269;
  double t609;
  double t616;
  double t617;
  double t292;
  double t294;
  double t296;
  double t619;
  double t620;
  double t621;
  double t622;
  double t623;
  double t618;
  double t624;
  double t625;
  double t318;
  double t319;
  double t320;
  double t321;
  double t322;
  double t324;
  double t325;
  double t326;
  double t329;
  double t635;
  double t636;
  double t637;
  double t426;
  double t436;
  double t454;
  double t456;
  double t458;
  double t459;
  double t657;
  double t658;
  double t515;
  double t516;
  double t517;
  double t518;
  double t464;
  double t475;
  double t476;
  double t667;
  double t688;
  double t689;
  double t690;
  double t691;
  double t692;
  double t693;
  double t520;
  double t521;
  double t522;
  double t523;
  double t705;
  double t706;
  double t707;
  double t700;
  double t701;
  double t702;
  double t677;
  double t714;
  double t715;
  double t678;
  double t541;
  double t542;
  double t581;
  double t582;
  double t583;
  double t584;
  double t585;
  double t587;
  double t588;
  double t589;
  double t590;
  double t591;
  double t744;
  double t745;
  double t752;
  double t753;
  double t765;
  double t766;
  double t767;
  double t768;
  double t769;
  double t771;
  double t772;
  double t773;
  double t774;
  double t770;
  double t775;
  double t776;
  double t643;
  double t644;
  double t645;
  double t786;
  double t787;
  double t788;
  double t727;
  double t728;
  double t737;
  double t738;
  double t739;
  double t815;
  double t816;
  double t821;
  double t822;
  double t664;
  double t665;
  double t835;
  double t837;
  double t695;
  double t696;
  double t844;
  double t865;
  double t866;
  double t867;
  double t872;
  double t873;
  double t877;
  double t878;
  double t879;
  double t854;
  double t886;
  double t887;
  double t888;
  double t855;
  double t915;
  double t917;
  double t950;
  double t952;
  double t977;
  double t979;
  t89 = Cos(var1[2]);
  t107 = Sin(var1[0]);
  t94 = Sin(var1[2]);
  t138 = Cos(var1[1]);
  t144 = Cos(var1[0]);
  t101 = Sin(var1[1]);
  t191 = -0.25*t138*t107;
  t233 = Power(t144,2);
  t236 = Power(t107,2);
  t239 = t233 + t236;
  t258 = t138*t89*t239;
  t259 = -1.*t101*t239*t94;
  t260 = t258 + t259;
  t152 = 0.625*t138*t144;
  t153 = 0.25*t138*t144;
  t154 = t138*t144*t89;
  t160 = -1.*t144*t101*t94;
  t162 = t154 + t160;
  t170 = 0.1875*t162;
  t173 = 0. + t153 + t170;
  t174 = 10.*t173;
  t177 = t152 + t174;
  t192 = 0.625*t138*t107;
  t199 = -1.*t138*t89*t107;
  t207 = t101*t107*t94;
  t210 = t199 + t207;
  t212 = 0.1875*t210;
  t216 = 0. + t191 + t212;
  t218 = -10.*t216;
  t223 = t192 + t218;
  t263 = 0.25*t138*t233;
  t264 = 0.25*t138*t236;
  t265 = 0.1875*t260;
  t267 = t263 + t264 + t265;
  t151 = -0.25*t138*t144;
  t178 = 0.0666666666666667*t177;
  t180 = 0. + t151 + t178;
  t226 = 0.0666666666666667*t223;
  t227 = 0. + t191 + t226;
  t182 = t144*t89*t101;
  t185 = t138*t144*t94;
  t190 = t182 + t185;
  t114 = -1.*t89*t101*t107;
  t139 = -1.*t138*t107*t94;
  t140 = t114 + t139;
  t181 = t140*t180;
  t228 = t190*t227;
  t229 = t181 + t228;
  t231 = Power(t138,2);
  t241 = Power(t101,2);
  t310 = t231 + t241;
  t254 = t138*t89;
  t255 = -1.*t101*t94;
  t256 = t254 + t255;
  t243 = -1.*t89*t101;
  t245 = -1.*t138*t94;
  t246 = t243 + t245;
  t299 = t210*t180;
  t300 = t162*t227;
  t304 = t299 + t300;
  t335 = var2[0]*t233;
  t336 = var2[0]*t236;
  t339 = t335 + t336;
  t340 = -1.*t89*t101*t339;
  t342 = -1.*t138*t339*t94;
  t343 = t340 + t342;
  t361 = -1.*t144*t89*t101;
  t362 = -1.*t138*t144*t94;
  t363 = t361 + t362;
  t365 = t89*t101*t107;
  t366 = t138*t107*t94;
  t367 = t365 + t366;
  t373 = -0.125*t144*t363;
  t374 = 0.125*t107*t367;
  t375 = t373 + t374;
  t391 = t138*t89*t339;
  t392 = -1.*t101*t339*t94;
  t395 = t391 + t392;
  t377 = -0.25*var2[1]*t144*t101;
  t378 = -0.25*var2[0]*t138*t107;
  t383 = t377 + t378;
  t384 = -1.*t107*t383;
  t385 = -0.25*var2[0]*t138*t144;
  t386 = 0.25*var2[1]*t101*t107;
  t389 = t385 + t386;
  t390 = -1.*t144*t389;
  t396 = 0.1875*t395;
  t397 = 0. + t384 + t390 + t396;
  t278 = -1.*t144*t180;
  t280 = -1.*t107*t227;
  t281 = t278 + t280;
  t406 = -0.25*var2[1]*t138*t246;
  t408 = t383*t162;
  t413 = t389*t210;
  t349 = -1.*t138*t89;
  t351 = t101*t94;
  t352 = t349 + t351;
  t358 = var2[1]*t231;
  t90 = Power(t89,2);
  t359 = var2[1]*t241;
  t95 = Power(t94,2);
  t353 = 0.1*t352*t343;
  t354 = -1.*t138*t89*t339;
  t355 = t101*t339*t94;
  t356 = t354 + t355;
  t357 = 0.1*t246*t356;
  t399 = 0.9*t395;
  t400 = 1.875*t397;
  t402 = t399 + t400;
  t404 = t246*t402;
  t360 = t358 + t359;
  t478 = -0.625*t144*t101;
  t479 = -0.25*t144*t101;
  t480 = 0.1875*t363;
  t481 = t479 + t480;
  t482 = 10.*t481;
  t483 = t478 + t482;
  t485 = -0.625*t101*t107;
  t486 = 0.25*t101*t107;
  t487 = 0.1875*t367;
  t488 = t486 + t487;
  t489 = -10.*t488;
  t490 = t485 + t489;
  t272 = -0.0666666666666667*t144*t177;
  t273 = -0.0666666666666667*t107*t223;
  t276 = t272 + t273;
  t465 = 0.25*var2[0]*t144*t101;
  t466 = 0.25*var2[1]*t138*t107;
  t467 = t465 + t466;
  t468 = -1.*t144*t467;
  t469 = -0.25*var2[1]*t138*t144;
  t470 = 0.25*var2[0]*t101*t107;
  t471 = t469 + t470;
  t472 = -1.*t107*t471;
  t473 = 0.1875*t343;
  t474 = t468 + t472 + t473;
  t414 = t406 + t408 + t413;
  t501 = 0.25*t144*t101;
  t502 = 0.0666666666666667*t483;
  t503 = t501 + t502;
  t420 = t367*t180;
  t505 = 0.0666666666666667*t490;
  t506 = t486 + t505;
  t421 = t363*t227;
  t429 = t383*t363;
  t430 = -0.25*var2[1]*t138*t352;
  t435 = t389*t367;
  t438 = t383*t190;
  t439 = -0.25*var2[1]*t138*t256;
  t440 = t389*t140;
  t441 = var2[2]*t90;
  t442 = var2[2]*t95;
  t443 = t358 + t441 + t359 + t442;
  t444 = -0.1875*t443;
  t445 = t438 + t439 + t440 + t444;
  t545 = -1.*t138*t144*t89;
  t546 = t144*t101*t94;
  t547 = t545 + t546;
  t548 = 0.1875*t547;
  t549 = t151 + t548;
  t550 = -10.*t549;
  t551 = t152 + t550;
  t553 = -0.625*t138*t107;
  t554 = t191 + t212;
  t555 = 10.*t554;
  t556 = t553 + t555;
  t535 = -1.*t144*t383;
  t536 = 0.25*var2[1]*t144*t101;
  t537 = 0.25*var2[0]*t138*t107;
  t538 = t536 + t537;
  t539 = -1.*t144*t538;
  t540 = 0. + t535 + t539;
  t570 = 0.0666666666666667*t551;
  t571 = t151 + t570;
  t573 = 0.25*t138*t107;
  t574 = 0.0666666666666667*t556;
  t575 = t573 + t574;
  t98 = t90 + t95;
  t250 = -1.*t89*t101*t239;
  t251 = -1.*t138*t239*t94;
  t252 = t250 + t251;
  t284 = -0.25*t138*t107*t190;
  t289 = -0.25*t138*t144*t140;
  t290 = t284 + t289;
  t610 = -0.625*t101;
  t611 = -0.25*t101;
  t612 = 0.1875*t246;
  t613 = 0. + t611 + t612;
  t614 = 10.*t613;
  t615 = t610 + t614;
  t261 = 0.9*t260;
  t268 = 1.875*t267;
  t269 = t261 + t268;
  t609 = 0.25*t101;
  t616 = 0.0666666666666667*t615;
  t617 = 0. + t609 + t616;
  t292 = -0.25*t138*t107*t162;
  t294 = -0.25*t138*t144*t210;
  t296 = t292 + t294;
  t619 = -0.625*t138*t144;
  t620 = -10.*t173;
  t621 = t619 + t620;
  t622 = 0.0666666666666667*t621;
  t623 = 0. + t153 + t622;
  t618 = t190*t617;
  t624 = t256*t623;
  t625 = t618 + t624;
  t318 = -0.1875*t310;
  t319 = -0.25*t144*t101*t190;
  t320 = -0.25*t138*t256;
  t321 = 0.25*t101*t107*t140;
  t322 = t318 + t319 + t320 + t321;
  t324 = -0.25*t138*t246;
  t325 = -0.25*t144*t101*t162;
  t326 = 0.25*t101*t107*t210;
  t329 = t324 + t325 + t326;
  t635 = t162*t617;
  t636 = t246*t623;
  t637 = t635 + t636;
  t426 = 0. + t406 + t408 + t413;
  t436 = t429 + t430 + t435;
  t454 = 0.978125*t138*t339;
  t456 = 0. + t454;
  t458 = -0.1*t101*t339;
  t459 = 0. + t458;
  t657 = 0.1*t367*t343;
  t658 = 0.1*t210*t356;
  t515 = t471*t190;
  t516 = 0.25*var2[1]*t101*t256;
  t517 = t467*t140;
  t518 = 0. + t406 + t515 + t516 + t408 + t517 + t413;
  t464 = 0.9*t343;
  t475 = 1.875*t474;
  t476 = t464 + t475;
  t667 = t210*t402;
  t688 = -0.625*t138;
  t689 = -0.25*t138;
  t690 = 0.1875*t352;
  t691 = t689 + t690;
  t692 = 10.*t691;
  t693 = t688 + t692;
  t520 = 0.25*var2[1]*t101*t246;
  t521 = t471*t162;
  t522 = t467*t210;
  t523 = t520 + t429 + t430 + t521 + t435 + t522;
  t705 = 0.625*t144*t101;
  t706 = -10.*t481;
  t707 = t705 + t706;
  t700 = 0.25*t138;
  t701 = 0.0666666666666667*t693;
  t702 = t700 + t701;
  t677 = t363*t617;
  t714 = 0.0666666666666667*t707;
  t715 = t479 + t714;
  t678 = t352*t623;
  t541 = 1.875*t540;
  t542 = 0. + t541;
  t581 = t389*t363;
  t582 = t389*t190;
  t583 = t383*t140;
  t584 = t538*t140;
  t585 = t581 + t582 + t583 + t584;
  t587 = t389*t162;
  t588 = t389*t547;
  t589 = t383*t210;
  t590 = t538*t210;
  t591 = t587 + t588 + t589 + t590;
  t744 = -10.*t554;
  t745 = t192 + t744;
  t752 = 0.0666666666666667*t745;
  t753 = t191 + t752;
  t765 = 0.625*t101;
  t766 = -10.*t613;
  t767 = t765 + t766;
  t768 = 0.0666666666666667*t767;
  t769 = 0. + t611 + t768;
  t771 = 10.*t216;
  t772 = t553 + t771;
  t773 = 0.0666666666666667*t772;
  t774 = 0. + t573 + t773;
  t770 = t140*t769;
  t775 = t256*t774;
  t776 = t770 + t775;
  t643 = 0.9*t310;
  t644 = -1.875*t322;
  t645 = t643 + t644;
  t786 = t210*t769;
  t787 = t246*t774;
  t788 = t786 + t787;
  t727 = 0.978125*t360;
  t728 = 0. + t727;
  t737 = 0.9*t443;
  t738 = -1.875*t445;
  t739 = t737 + t738;
  t815 = 10.*t549;
  t816 = t619 + t815;
  t821 = 0.0666666666666667*t816;
  t822 = t153 + t821;
  t664 = -1.875*t426;
  t665 = 0. + t664;
  t835 = 0.1*t363*t343;
  t837 = 0.1*t162*t356;
  t695 = -1.875*t518;
  t696 = 0. + t695;
  t844 = t162*t402;
  t865 = 0.625*t138;
  t866 = -10.*t691;
  t867 = t865 + t866;
  t872 = 0.0666666666666667*t867;
  t873 = t689 + t872;
  t877 = 0.625*t101*t107;
  t878 = 10.*t488;
  t879 = t877 + t878;
  t854 = t367*t769;
  t886 = -0.25*t101*t107;
  t887 = 0.0666666666666667*t879;
  t888 = t886 + t887;
  t855 = t352*t774;
  t915 = 10.*t352*t414;
  t917 = 10.*t246*t445;
  t950 = 10.*t367*t414;
  t952 = 10.*t210*t445;
  t977 = 10.*t363*t414;
  t979 = 10.*t162*t445;
  p_output1[0]=(0. + 10.*t281*t540 + t256*t542 - 0.625*t360*(-0.0666666666666667*t101*t144*t177 - 0.0666666666666667*t101*t107*t223 + 0.0666666666666667*t101*t144*t551 - 0.0666666666666667*t101*t107*t556) + 0.625*t138*t339*(0.0666666666666667*t107*t177 - 0.0666666666666667*t144*t223 - 0.0666666666666667*t107*t551 - 0.0666666666666667*t144*t556) + 10.*t445*(t140*t227 + t180*t363 + t190*t571 + t140*t575) + 10.*t397*(t107*t180 - 1.*t144*t227 - 1.*t107*t571 - 1.*t144*t575) + 10.*t414*(t210*t227 + t180*t547 + t162*t571 + t210*t575) + 10.*t229*t585 + 10.*t304*t591)*var2[0] + (0. - 0.878125*t101*t138*t339 - 0.625*t101*t276*t339 + t353 + t357 + t404 - 1.*t101*t456 - 1.*t138*t459 + 10.*t281*t474 + t256*t476 + 0.625*t138*t339*(-0.0666666666666667*t144*t483 - 0.0666666666666667*t107*t490) - 0.625*t360*(-0.0666666666666667*t107*t138*t177 + 0.0666666666666667*t138*t144*t223 - 0.0666666666666667*t101*t107*t483 + 0.0666666666666667*t101*t144*t490) + 10.*t397*(-1.*t144*t503 - 1.*t107*t506) + 10.*t414*(t420 + t421 + t210*t503 + t162*t506) + 10.*t445*(t299 + t300 + t140*t503 + t190*t506) + 10.*t229*t518 + 10.*t304*t523)*var2[1] + (1.2515625*t256*t343 + 1.875*t281*t343 + t353 + t357 - 0.625*t360*(-0.125*t101*t107*t363 - 0.125*t101*t144*t367) + 0.625*t138*t339*t375 + 10.*t375*t397 + t404 + 10.*t414*(0.125*t210*t363 - 0.125*t162*t367 + t420 + t421) + 10.*t229*t426 + 10.*t304*t436 + 10.*(t299 + t300 + 0.125*t140*t363 - 0.125*t190*t367)*t445)*var2[2] + (0.978125*t231*t239 + 0.1*t239*t241 + 0.1*t246*t252 + t256*t269 + 0.625*t138*t239*t276 + 10.*t267*t281 + 10.*t229*t290 + 10.*t296*t304)*var3[0] + (0. - 0.625*(-0.0666666666666667*t101*t107*t177 + 0.0666666666666667*t101*t144*t223)*t310 + 10.*t229*t322 + 10.*t304*t329)*var3[1] - 1.875*t229*t98*var3[2];
  p_output1[1]=(0. + t363*t402 - 1.*t101*t144*t456 - 1.*t138*t144*t459 + t140*t542 + 0.1*t343*t547 + 1.875*t144*t585 - 0.041666666666666664*t138*t144*t339*t615 - 10.*t144*t397*t617 - 10.*t107*t540*t617 + 10.*t585*t625 + 10.*t591*t637 + t107*t728 + t107*t739 - 0.625*t360*(-0.0666666666666667*t101*t107*t615 + 0.0666666666666667*t138*t745) + 10.*t414*(t210*t617 + t246*t753) + 10.*t445*(t140*t617 + t256*t753))*var2[0] + (0. + 0.1*t107*t231*t339 + 0.978125*t107*t241*t339 - 1.*t107*t138*t456 + t101*t107*t459 + t140*t476 + 0.041666666666666664*t101*t107*t339*t615 - 10.*t107*t474*t617 + 10.*t518*t625 + 10.*t523*t637 + t657 + t658 + t667 - 0.041666666666666664*t107*t138*t339*t693 - 1.*t144*t696 - 10.*t107*t397*t702 - 0.625*t360*(0.0666666666666667*t138*t144*t615 - 0.0666666666666667*t101*t621 + 0.0666666666666667*t101*t144*t693 + 0.0666666666666667*t138*t707) + 10.*t414*(t677 + t678 + t162*t702 + t246*t715) + 10.*t445*(t635 + t636 + t190*t702 + t256*t715))*var2[1] + (1.2515625*t140*t343 - 0.078125*t107*t138*t339*t352 - 0.625*t360*(0.125*t101*t144*t352 - 0.125*t138*t363) - 1.25*t107*t352*t397 - 1.875*t107*t343*t617 + 10.*t426*t625 + 10.*t445*(0.125*t190*t352 - 0.125*t256*t363 + t635 + t636) + 10.*t436*t637 + t657 + t658 - 1.*t144*t665 + t667 + 10.*t414*(0.125*t162*t352 - 0.125*t246*t363 + t677 + t678))*var2[2] + (-0.878125*t101*t107*t138*t239 + 0.1*t210*t252 + t140*t269 + 1.875*t144*t290 - 0.041666666666666664*t107*t138*t239*t615 - 10.*t107*t267*t617 + 10.*t290*t625 + 10.*t296*t637)*var3[0] + (0. - 0.978125*t144*t310 - 0.625*t310*(0.0666666666666667*t101*t144*t615 + 0.0666666666666667*t138*t621) + 10.*t322*t625 + 10.*t329*t637 - 1.*t144*t645)*var3[1] + (-1.2515625*t144*t98 - 1.875*t625*t98)*var3[2];
  p_output1[2]=(0. + 0.1*t210*t343 + t140*t402 - 1.*t101*t107*t456 - 1.*t107*t138*t459 + t190*t542 + 1.875*t107*t585 - 1.*t144*t728 - 1.*t144*t739 + 0.041666666666666664*t107*t138*t339*t767 + 10.*t107*t397*t769 - 10.*t144*t540*t769 + 10.*t585*t776 + 10.*t591*t788 - 0.625*t360*(-0.0666666666666667*t101*t144*t767 + 0.0666666666666667*t138*t816) + 10.*t414*(t547*t769 + t246*t822) + 10.*t445*(t363*t769 + t256*t822))*var2[0] + (0. - 0.1*t144*t231*t339 - 0.978125*t144*t241*t339 + t138*t144*t456 - 1.*t101*t144*t459 + t190*t476 - 1.*t107*t696 + 0.041666666666666664*t101*t144*t339*t767 - 10.*t144*t474*t769 + 10.*t518*t776 + 10.*t523*t788 + t835 + t837 + t844 - 0.041666666666666664*t138*t144*t339*t867 - 10.*t144*t397*t873 - 0.625*t360*(-0.0666666666666667*t107*t138*t767 - 0.0666666666666667*t101*t772 - 0.0666666666666667*t101*t107*t867 + 0.0666666666666667*t138*t879) + 10.*t414*(t854 + t855 + t210*t873 + t246*t888) + 10.*t445*(t786 + t787 + t140*t873 + t256*t888))*var2[1] + (1.2515625*t190*t343 + 0.078125*t138*t144*t339*t352 - 0.625*t360*(0.125*t101*t107*t352 + 0.125*t138*t367) + 1.25*t144*t352*t397 - 1.*t107*t665 - 1.875*t144*t343*t769 + 10.*t426*t776 + 10.*t445*(-0.125*t140*t352 + 0.125*t256*t367 + t786 + t787) + 10.*t436*t788 + t835 + t837 + t844 + 10.*t414*(-0.125*t210*t352 + 0.125*t246*t367 + t854 + t855))*var2[2] + (0.878125*t101*t138*t144*t239 + 0.1*t162*t252 + t190*t269 + 1.875*t107*t290 - 0.041666666666666664*t138*t144*t239*t767 - 10.*t144*t267*t769 + 10.*t290*t776 + 10.*t296*t788)*var3[0] + (0. - 0.978125*t107*t310 - 1.*t107*t645 - 0.625*t310*(-0.0666666666666667*t101*t107*t767 + 0.0666666666666667*t138*t772) + 10.*t322*t776 + 10.*t329*t788)*var3[1] + (-1.2515625*t107*t98 - 1.875*t776*t98)*var3[2];
  p_output1[3]=(10.*t256*t585 + 10.*t246*t591)*var2[0] + (0.625*t101*t360 + 10.*t256*t518 + 10.*t246*t523 + t915 + t917)*var2[1] + (10.*t256*t426 + 10.*t246*t436 + t915 + t917)*var2[2] + (10.*t256*t290 + 10.*t246*t296)*var3[0] + (-0.625*t138*t310 + 10.*t256*t322 + 10.*t246*t329)*var3[1] - 1.875*t256*t98*var3[2];
  p_output1[4]=(0. + 0.625*t107*t138*t339 + 0.625*t101*t144*t360 + 10.*t107*t397 + 10.*t363*t445 - 10.*t144*t540 + 10.*t414*t547 + 10.*t140*t585 + 10.*t210*t591)*var2[0] + (0. + 0.625*t101*t144*t339 + 0.625*t107*t138*t360 - 10.*t144*t474 + 10.*t140*t518 + 10.*t210*t523 + t950 + t952)*var2[1] + (-1.875*t144*t343 + 10.*t140*t426 + 10.*t210*t436 + t950 + t952)*var2[2] + (-0.625*t138*t144*t239 - 10.*t144*t267 + 10.*t140*t290 + 10.*t210*t296)*var3[0] + (0. + 0.625*t101*t107*t310 + 10.*t140*t322 + 10.*t210*t329)*var3[1] - 1.875*t140*t98*var3[2];
  p_output1[5]=(0. - 0.625*t138*t144*t339 + 0.625*t101*t107*t360 - 10.*t144*t397 + 10.*t210*t414 + 10.*t140*t445 - 10.*t107*t540 + 10.*t190*t585 + 10.*t162*t591)*var2[0] + (0. + 0.625*t101*t107*t339 - 0.625*t138*t144*t360 - 10.*t107*t474 + 10.*t190*t518 + 10.*t162*t523 + t977 + t979)*var2[1] + (-1.875*t107*t343 + 10.*t190*t426 + 10.*t162*t436 + t977 + t979)*var2[2] + (-0.625*t107*t138*t239 - 10.*t107*t267 + 10.*t190*t290 + 10.*t162*t296)*var3[0] + (0. - 0.625*t101*t144*t310 + 10.*t190*t322 + 10.*t162*t329)*var3[1] - 1.875*t190*t98*var3[2];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 3) && 
      !(mrows == 3 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "gen3_h_dot.hh"

namespace SymExpression
{

void gen3_h_dot_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
