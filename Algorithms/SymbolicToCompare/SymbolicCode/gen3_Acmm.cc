/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:36 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t98;
  double t151;
  double t152;
  double t153;
  double t154;
  double t181;
  double t90;
  double t191;
  double t207;
  double t252;
  double t253;
  double t254;
  double t260;
  double t261;
  double t263;
  double t264;
  double t271;
  double t276;
  double t277;
  double t282;
  double t284;
  double t289;
  double t291;
  double t292;
  double t294;
  double t309;
  double t308;
  double t310;
  double t313;
  double t315;
  double t316;
  double t317;
  double t318;
  double t319;
  double t356;
  double t357;
  double t358;
  double t324;
  double t325;
  double t326;
  double t345;
  double t351;
  double t353;
  double t331;
  double t334;
  double t230;
  double t231;
  double t233;
  double t355;
  double t359;
  double t360;
  double t192;
  double t212;
  double t228;
  double t258;
  double t265;
  double t268;
  double t396;
  double t398;
  double t399;
  double t400;
  double t402;
  double t404;
  double t370;
  double t372;
  double t373;
  double t408;
  double t413;
  double t415;
  double t240;
  double t241;
  double t242;
  double t423;
  double t428;
  double t429;
  double t430;
  double t435;
  double t450;
  double t451;
  double t452;
  double t457;
  double t458;
  double t465;
  double t466;
  double t469;
  double t470;
  double t473;
  double t475;
  double t95;
  double t182;
  double t507;
  double t364;
  double t365;
  double t366;
  double t374;
  double t376;
  double t377;
  double t512;
  double t513;
  double t514;
  double t515;
  double t516;
  double t519;
  double t520;
  double t521;
  double t522;
  double t422;
  double t437;
  double t438;
  double t440;
  double t441;
  double t442;
  double t527;
  double t531;
  double t532;
  double t464;
  double t476;
  double t477;
  double t479;
  double t480;
  double t484;
  double t581;
  double t582;
  double t583;
  t98 = Cos(var1[0]);
  t151 = Power(t98,2);
  t152 = Sin(var1[0]);
  t153 = Power(t152,2);
  t154 = t151 + t153;
  t181 = Sin(var1[1]);
  t90 = Cos(var1[1]);
  t191 = Cos(var1[2]);
  t207 = Sin(var1[2]);
  t252 = t90*t191*t154;
  t253 = -1.*t181*t154*t207;
  t254 = t252 + t253;
  t260 = 0.25*t90*t151;
  t261 = 0.25*t90*t153;
  t263 = 0.1875*t254;
  t264 = t260 + t261 + t263;
  t271 = 0.625*t90*t98;
  t276 = 0.25*t90*t98;
  t277 = t90*t98*t191;
  t282 = -1.*t98*t181*t207;
  t284 = t277 + t282;
  t289 = 0.1875*t284;
  t291 = 0. + t276 + t289;
  t292 = 10.*t291;
  t294 = t271 + t292;
  t309 = -0.25*t90*t152;
  t308 = 0.625*t90*t152;
  t310 = -1.*t90*t191*t152;
  t313 = t181*t152*t207;
  t315 = t310 + t313;
  t316 = 0.1875*t315;
  t317 = 0. + t309 + t316;
  t318 = -10.*t317;
  t319 = t308 + t318;
  t356 = -1.*t191*t181*t152;
  t357 = -1.*t90*t152*t207;
  t358 = t356 + t357;
  t324 = -0.25*t90*t98;
  t325 = 0.0666666666666667*t294;
  t326 = 0. + t324 + t325;
  t345 = t98*t191*t181;
  t351 = t90*t98*t207;
  t353 = t345 + t351;
  t331 = 0.0666666666666667*t319;
  t334 = 0. + t309 + t331;
  t230 = -1.*t191*t181*t154;
  t231 = -1.*t90*t154*t207;
  t233 = t230 + t231;
  t355 = -0.25*t90*t152*t353;
  t359 = -0.25*t90*t98*t358;
  t360 = t355 + t359;
  t192 = -1.*t191*t181;
  t212 = -1.*t90*t207;
  t228 = t192 + t212;
  t258 = 0.9*t254;
  t265 = 1.875*t264;
  t268 = t258 + t265;
  t396 = -0.625*t181;
  t398 = -0.25*t181;
  t399 = 0.1875*t228;
  t400 = 0. + t398 + t399;
  t402 = 10.*t400;
  t404 = t396 + t402;
  t370 = -0.25*t90*t152*t284;
  t372 = -0.25*t90*t98*t315;
  t373 = t370 + t372;
  t408 = 0.25*t181;
  t413 = 0.0666666666666667*t404;
  t415 = 0. + t408 + t413;
  t240 = t90*t191;
  t241 = -1.*t181*t207;
  t242 = t240 + t241;
  t423 = -0.625*t90*t98;
  t428 = -10.*t291;
  t429 = t423 + t428;
  t430 = 0.0666666666666667*t429;
  t435 = 0. + t276 + t430;
  t450 = 0.625*t181;
  t451 = -10.*t400;
  t452 = t450 + t451;
  t457 = 0.0666666666666667*t452;
  t458 = 0. + t398 + t457;
  t465 = 0.25*t90*t152;
  t466 = -0.625*t90*t152;
  t469 = 10.*t317;
  t470 = t466 + t469;
  t473 = 0.0666666666666667*t470;
  t475 = 0. + t465 + t473;
  t95 = Power(t90,2);
  t182 = Power(t181,2);
  t507 = t95 + t182;
  t364 = t358*t326;
  t365 = t353*t334;
  t366 = t364 + t365;
  t374 = t315*t326;
  t376 = t284*t334;
  t377 = t374 + t376;
  t512 = -0.1875*t507;
  t513 = -0.25*t98*t181*t353;
  t514 = -0.25*t90*t242;
  t515 = 0.25*t181*t152*t358;
  t516 = t512 + t513 + t514 + t515;
  t519 = -0.25*t90*t228;
  t520 = -0.25*t98*t181*t284;
  t521 = 0.25*t181*t152*t315;
  t522 = t519 + t520 + t521;
  t422 = t284*t415;
  t437 = t228*t435;
  t438 = t422 + t437;
  t440 = t353*t415;
  t441 = t242*t435;
  t442 = t440 + t441;
  t527 = 0.9*t507;
  t531 = -1.875*t516;
  t532 = t527 + t531;
  t464 = t315*t458;
  t476 = t228*t475;
  t477 = t464 + t476;
  t479 = t358*t458;
  t480 = t242*t475;
  t484 = t479 + t480;
  t581 = Power(t191,2);
  t582 = Power(t207,2);
  t583 = t581 + t582;
  p_output1[0]=0.1*t154*t182 + 0.1*t228*t233 + t242*t268 + 10.*t360*t366 + 10.*t373*t377 + 0.978125*t154*t95 + 0.625*t154*t90*(-0.0666666666666667*t152*t319 - 0.0666666666666667*t294*t98) + 10.*t264*(-1.*t152*t334 - 1.*t326*t98);
  p_output1[1]=0.1*t233*t315 + t268*t358 - 10.*t152*t264*t415 + 10.*t373*t438 + 10.*t360*t442 - 0.878125*t152*t154*t181*t90 - 0.041666666666666664*t152*t154*t404*t90 + 1.875*t360*t98;
  p_output1[2]=0.1*t233*t284 + t268*t353 + 1.875*t152*t360 + 10.*t373*t477 + 10.*t360*t484 - 10.*t264*t458*t98 + 0.878125*t154*t181*t90*t98 - 0.041666666666666664*t154*t452*t90*t98;
  p_output1[3]=10.*t242*t360 + 10.*t228*t373;
  p_output1[4]=10.*t358*t360 + 10.*t315*t373 - 10.*t264*t98 - 0.625*t154*t90*t98;
  p_output1[5]=-10.*t152*t264 + 10.*t353*t360 + 10.*t284*t373 - 0.625*t152*t154*t90;
  p_output1[6]=0. + 10.*t366*t516 + 10.*t377*t522 - 0.625*t507*(-0.0666666666666667*t152*t181*t294 + 0.0666666666666667*t181*t319*t98);
  p_output1[7]=0. + 10.*t442*t516 + 10.*t438*t522 - 0.978125*t507*t98 - 1.*t532*t98 - 0.625*t507*(0.0666666666666667*t429*t90 + 0.0666666666666667*t181*t404*t98);
  p_output1[8]=0. - 0.978125*t152*t507 + 10.*t484*t516 + 10.*t477*t522 - 1.*t152*t532 - 0.625*t507*(-0.0666666666666667*t152*t181*t452 + 0.0666666666666667*t470*t90);
  p_output1[9]=10.*t242*t516 + 10.*t228*t522 - 0.625*t507*t90;
  p_output1[10]=0. + 0.625*t152*t181*t507 + 10.*t358*t516 + 10.*t315*t522;
  p_output1[11]=0. + 10.*t353*t516 + 10.*t284*t522 - 0.625*t181*t507*t98;
  p_output1[12]=-1.875*t366*t583;
  p_output1[13]=-1.875*t442*t583 - 1.2515625*t583*t98;
  p_output1[14]=-1.2515625*t152*t583 - 1.875*t484*t583;
  p_output1[15]=-1.875*t242*t583;
  p_output1[16]=-1.875*t358*t583;
  p_output1[17]=-1.875*t353*t583;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "gen3_Acmm.hh"

namespace SymExpression
{

void gen3_Acmm_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
