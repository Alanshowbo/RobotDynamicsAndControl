/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 09:10:22 GMT-05:00
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
  double t156;
  double t170;
  double t117;
  double t179;
  double t194;
  double t195;
  double t198;
  double t169;
  double t180;
  double t182;
  double t203;
  double t281;
  double t286;
  double t294;
  double t295;
  double t297;
  double t282;
  double t283;
  double t284;
  double t299;
  double t288;
  double t290;
  double t291;
  double t345;
  double t347;
  double t348;
  double t352;
  double t353;
  double t355;
  double t305;
  double t310;
  double t311;
  double t391;
  double t392;
  double t393;
  double t304;
  double t312;
  double t313;
  double t324;
  double t325;
  double t327;
  double t396;
  double t445;
  double t446;
  double t447;
  double t409;
  double t410;
  double t411;
  double t412;
  double t413;
  double t450;
  double t451;
  double t452;
  double t457;
  double t458;
  double t460;
  double t461;
  double t448;
  double t463;
  double t465;
  double t467;
  double t469;
  double t470;
  double t471;
  double t401;
  double t403;
  double t404;
  double t472;
  double t419;
  double t420;
  double t422;
  double t424;
  double t426;
  double t428;
  double t429;
  double t414;
  double t293;
  double t298;
  double t300;
  double t395;
  double t397;
  double t398;
  double t477;
  double t478;
  double t481;
  double t482;
  double t365;
  double t366;
  double t373;
  double t375;
  double t377;
  double t378;
  double t380;
  double t489;
  double t490;
  double t491;
  double t494;
  double t496;
  double t497;
  double t498;
  double t520;
  double t528;
  double t531;
  double t408;
  double t415;
  double t416;
  double t538;
  double t400;
  double t405;
  double t406;
  double t561;
  double t332;
  double t336;
  double t337;
  double t351;
  double t360;
  double t361;
  double t579;
  double t580;
  double t581;
  double t582;
  double t434;
  double t435;
  double t436;
  double t438;
  double t439;
  double t440;
  double t244;
  double t598;
  double t599;
  double t600;
  double t596;
  double t597;
  double t602;
  double t603;
  double t604;
  double t605;
  double t606;
  double t610;
  double t611;
  double t302;
  double t213;
  double t218;
  double t222;
  double t200;
  double t205;
  double t618;
  double t619;
  double t623;
  double t624;
  double t593;
  double t608;
  double t630;
  double t631;
  double t632;
  double t652;
  double t653;
  double t654;
  double t655;
  double t212;
  double t234;
  double t239;
  double t661;
  double t643;
  double t644;
  double t248;
  double t255;
  double t258;
  double t267;
  double t675;
  double t676;
  double t677;
  double t688;
  double t690;
  double t691;
  double t692;
  double t687;
  double t693;
  double t695;
  double t314;
  double t315;
  double t704;
  double t542;
  double t713;
  double t714;
  double t718;
  double t719;
  double t536;
  double t747;
  double t748;
  double t750;
  double t751;
  double t321;
  double t328;
  double t329;
  double t757;
  double t737;
  t156 = Cos(var1[2]);
  t170 = Sin(var1[1]);
  t117 = Cos(var1[1]);
  t179 = Sin(var1[2]);
  t194 = t156*t170;
  t195 = t117*t179;
  t198 = t194 + t195;
  t169 = -1.*t117*t156;
  t180 = t170*t179;
  t182 = t169 + t180;
  t203 = 0.1875*var2[2]*t198;
  t281 = Sin(var1[0]);
  t286 = Cos(var1[0]);
  t294 = t117*t156*t281;
  t295 = -1.*t170*t281*t179;
  t297 = t294 + t295;
  t282 = t156*t170*t281;
  t283 = t117*t281*t179;
  t284 = t282 + t283;
  t299 = 0.1875*var2[2]*t297;
  t288 = t286*t156*t170;
  t290 = t117*t286*t179;
  t291 = t288 + t290;
  t345 = 0.25*t286*t170;
  t347 = 0.1875*t291;
  t348 = t345 + t347;
  t352 = 0.25*t117*t281;
  t353 = 0.1875*t297;
  t355 = t352 + t353;
  t305 = -1.*t117*t286*t156;
  t310 = t286*t170*t179;
  t311 = t305 + t310;
  t391 = -1.*t286*t156*t170;
  t392 = -1.*t117*t286*t179;
  t393 = t391 + t392;
  t304 = -0.25*t117*t286;
  t312 = 0.1875*t311;
  t313 = t304 + t312;
  t324 = 0.25*t170*t281;
  t325 = 0.1875*t284;
  t327 = t324 + t325;
  t396 = 0.1875*var2[2]*t311;
  t445 = t117*t286*t156;
  t446 = -1.*t286*t170*t179;
  t447 = t445 + t446;
  t409 = -0.25*t117*t281;
  t410 = -1.*t117*t156*t281;
  t411 = t170*t281*t179;
  t412 = t410 + t411;
  t413 = 0.1875*t412;
  t450 = 0.625*t117*t286;
  t451 = 0.25*t117*t286;
  t452 = 0.1875*t447;
  t457 = 0. + t451 + t452;
  t458 = 10.*t457;
  t460 = t450 + t458;
  t461 = 0.0666666666666667*t460;
  t448 = -0.1875*t447;
  t463 = 0. + t304 + t448 + t461;
  t465 = 0.625*t117*t281;
  t467 = 0. + t409 + t413;
  t469 = -10.*t467;
  t470 = t465 + t469;
  t471 = 0.0666666666666667*t470;
  t401 = -0.25*t286*t170;
  t403 = 0.1875*t393;
  t404 = t401 + t403;
  t472 = 0. + t409 + t413 + t471;
  t419 = -0.125*var2[0]*t117*t286;
  t420 = 0.125*var2[1]*t170*t281;
  t422 = t419 + t420;
  t424 = 0.1875*var2[2]*t284;
  t426 = var2[0]*t313;
  t428 = var2[1]*t327;
  t429 = t424 + t426 + t428;
  t414 = t409 + t413;
  t293 = 0.1875*var2[0]*t291;
  t298 = 0.1875*var2[1]*t297;
  t300 = t293 + t298 + t299;
  t395 = 0.1875*var2[1]*t311;
  t397 = 0.1875*var2[0]*t284;
  t398 = t395 + t396 + t397;
  t477 = -0.125*t117*t286;
  t478 = t477 + t461;
  t481 = -0.125*t117*t281;
  t482 = t481 + t471;
  t365 = 0.125*var2[1]*t286*t170;
  t366 = 0.125*var2[0]*t117*t281;
  t373 = t365 + t366;
  t375 = 0.1875*var2[2]*t291;
  t377 = var2[1]*t348;
  t378 = var2[0]*t355;
  t380 = t375 + t377 + t378;
  t489 = -0.125*var2[1]*t286*t170;
  t490 = -0.125*var2[0]*t117*t281;
  t491 = t489 + t490;
  t494 = 0.1875*var2[2]*t393;
  t496 = var2[1]*t404;
  t497 = var2[0]*t414;
  t498 = t494 + t496 + t497;
  t520 = -10.*t313;
  t528 = t450 + t520;
  t531 = 0.0666666666666667*t528;
  t408 = -0.625*t117*t281;
  t415 = 10.*t414;
  t416 = t408 + t415;
  t538 = 0.0666666666666667*t416;
  t400 = -0.625*t286*t170;
  t405 = 10.*t404;
  t406 = t400 + t405;
  t561 = 0.0666666666666667*t406;
  t332 = 0.125*var2[0]*t286*t170;
  t336 = 0.125*var2[1]*t117*t281;
  t337 = t332 + t336;
  t351 = var2[0]*t348;
  t360 = var2[1]*t355;
  t361 = t299 + t351 + t360;
  t579 = -0.625*t170*t281;
  t580 = -10.*t327;
  t581 = t579 + t580;
  t582 = 0.0666666666666667*t581;
  t434 = -0.125*var2[1]*t117*t286;
  t435 = 0.125*var2[0]*t170*t281;
  t436 = t434 + t435;
  t438 = var2[1]*t313;
  t439 = var2[0]*t327;
  t440 = t396 + t438 + t439;
  t244 = 0.25*t170;
  t598 = -1.*t156*t170;
  t599 = -1.*t117*t179;
  t600 = t598 + t599;
  t596 = -0.625*t170;
  t597 = -0.25*t170;
  t602 = 0.1875*t600;
  t603 = 0. + t597 + t602;
  t604 = 10.*t603;
  t605 = t596 + t604;
  t606 = 0.0666666666666667*t605;
  t610 = -0.1875*t600;
  t611 = 0. + t244 + t610 + t606;
  t302 = -0.625*t117*t286;
  t213 = -0.25*t117;
  t218 = 0.1875*t182;
  t222 = t213 + t218;
  t200 = 0.1875*var2[1]*t198;
  t205 = t200 + t203;
  t618 = -10.*t457;
  t619 = t302 + t618;
  t623 = 0.0666666666666667*t619;
  t624 = 0. + t451 + t452 + t623;
  t593 = 0.125*t170;
  t608 = t593 + t606;
  t630 = 0.1875*var2[2]*t182;
  t631 = var2[1]*t222;
  t632 = t630 + t631;
  t652 = 0.625*t286*t170;
  t653 = -10.*t404;
  t654 = t652 + t653;
  t655 = 0.0666666666666667*t654;
  t212 = -0.625*t117;
  t234 = 10.*t222;
  t239 = t212 + t234;
  t661 = 0.0666666666666667*t239;
  t643 = 0.125*t117*t286;
  t644 = t643 + t623;
  t248 = 0.1875*t198;
  t255 = t244 + t248;
  t258 = var2[1]*t255;
  t267 = t203 + t258;
  t675 = -10.*t414;
  t676 = t465 + t675;
  t677 = 0.0666666666666667*t676;
  t688 = 0.625*t170;
  t690 = -10.*t603;
  t691 = t688 + t690;
  t692 = 0.0666666666666667*t691;
  t687 = -0.125*t170;
  t693 = t687 + t692;
  t695 = 0. + t597 + t602 + t692;
  t314 = 10.*t313;
  t315 = t302 + t314;
  t704 = 0.0666666666666667*t315;
  t542 = -0.1875*t412;
  t713 = 10.*t467;
  t714 = t408 + t713;
  t718 = 0.0666666666666667*t714;
  t719 = 0. + t352 + t542 + t718;
  t536 = 0.125*t117*t281;
  t747 = 0.625*t117;
  t748 = -10.*t222;
  t750 = t747 + t748;
  t751 = 0.0666666666666667*t750;
  t321 = 0.625*t170*t281;
  t328 = 10.*t327;
  t329 = t321 + t328;
  t757 = 0.0666666666666667*t329;
  t737 = t536 + t718;
  p_output1[0]=var2[1]*(10.*t267 + 0.625*t170*var2[1]) + 10.*t205*var2[2] + t239*var3[1] + 1.875*t182*var3[2];
  p_output1[1]=(5.*t373 + 10.*t380)*var2[0] + (5.*t337 + 10.*t361)*var2[1] + 10.*t300*var2[2] + t315*var3[0] + t329*var3[1] + 1.875*t284*var3[2];
  p_output1[2]=(5.*t422 + 10.*t429)*var2[0] + (5.*t436 + 10.*t440)*var2[1] + 10.*t398*var2[2] + t416*var3[0] + t406*var3[1] + 1.875*t393*var3[2];
  p_output1[3]=(10.*t380*t463 + 10.*t429*t472 + 5.*t373*t478 + 5.*t422*t482 + 10.*t498*(t304 + t312 + t531) + 5.*t491*(t477 + t531) + 5.*t422*(t536 + t538) + 10.*t429*(t352 + t538 + t542))*var2[0] + (10.*t361*t463 + 10.*t440*t472 + 5.*t337*t478 + 5.*t436*t482 + 5.*t422*(0.125*t170*t286 + t561) + 10.*t429*(t345 - 0.1875*t393 + t561) + 5.*t491*(0.125*t170*t281 + t582) + 10.*t498*(t324 + t325 + t582))*var2[1] + (0.625*t393*t422 - 0.625*t393*t429 + 10.*t300*t463 + 10.*t398*t472 - 0.625*t284*t491 + 0.625*t284*t498)*var2[2] + (10.*t313*t463 + 10.*t414*t472 - 0.625*t117*t286*t478 - 0.625*t117*t281*t482)*var3[0] + (10.*t327*t463 + 10.*t404*t472 + 0.625*t170*t281*t478 - 0.625*t170*t286*t482)*var3[1] + (1.875*t284*t463 + 1.875*t393*t472)*var3[2];
  p_output1[4]=var2[1]*(5.*t436*t608 + 10.*t440*t611 + 10.*t267*t624 + 10.*t632*(t401 + t403 + t655) + 5.*t491*(0.125*t117 + t661) + 10.*t498*(0.25*t117 - 0.1875*t182 + t661) + 0.625*t170*t644*var2[1] - 0.625*t117*(-0.125*t170*t286 + t655)*var2[1]) + var2[0]*(5.*t422*t608 + 10.*t429*t611 + 10.*t632*(t409 + t413 + t677) - 0.625*t117*(t481 + t677)*var2[1]) + (0.625*t182*t491 - 0.625*t182*t498 + 10.*t398*t611 + 10.*t205*t624 + 0.625*t393*t632 + 0.078125*t117*t393*var2[1])*var2[2] + (-0.625*t117*t281*t608 + 10.*t414*t611)*var3[0] + (-0.625*t170*t286*t608 + 10.*t404*t611 + 10.*t222*t624 - 0.625*t117*t644)*var3[1] + (1.875*t393*t611 + 1.875*t182*t624)*var3[2];
  p_output1[5]=var2[0]*(5.*t373*t693 + 10.*t380*t695 + 10.*t632*(-0.1875*t311 + t451 + t704) - 0.625*t117*(t643 + t704)*var2[1]) + var2[1]*(5.*t337*t693 + 10.*t361*t695 + 10.*t267*t719 + 5.*t422*(-0.125*t117 + t751) + 10.*t429*(t213 + t218 + t751) + 10.*t632*(-0.25*t170*t281 - 0.1875*t284 + t757) + 0.625*t170*t737*var2[1] - 0.625*t117*(-0.125*t170*t281 + t757)*var2[1]) + (-0.625*t182*t422 + 0.625*t182*t429 - 0.625*t284*t632 + 10.*t300*t695 + 10.*t205*t719 - 0.078125*t117*t284*var2[1])*var2[2] + (-0.625*t117*t286*t693 + 10.*t313*t695)*var3[0] + (0.625*t170*t281*t693 + 10.*t327*t695 + 10.*t222*t719 - 0.625*t117*t737)*var3[1] + (1.875*t284*t695 + 1.875*t182*t719)*var3[2];
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
