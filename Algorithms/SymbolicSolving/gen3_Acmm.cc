/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 09:10:23 GMT-05:00
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
  double t180;
  double t182;
  double t255;
  double t195;
  double t200;
  double t203;
  double t194;
  double t198;
  double t211;
  double t212;
  double t240;
  double t243;
  double t293;
  double t294;
  double t297;
  double t290;
  double t291;
  double t298;
  double t299;
  double t301;
  double t302;
  double t310;
  double t270;
  double t271;
  double t272;
  double t276;
  double t282;
  double t283;
  double t343;
  double t345;
  double t347;
  double t348;
  double t351;
  double t374;
  double t375;
  double t377;
  double t365;
  double t366;
  double t378;
  double t387;
  double t388;
  double t389;
  double t390;
  double t408;
  double t411;
  double t412;
  double t418;
  double t288;
  double t311;
  double t442;
  double t443;
  double t444;
  double t445;
  double t447;
  double t448;
  double t321;
  double t330;
  double t336;
  double t353;
  double t464;
  double t465;
  double t473;
  double t475;
  double t476;
  double t479;
  double t360;
  double t364;
  double t393;
  double t395;
  double t396;
  double t397;
  double t184;
  double t431;
  double t432;
  double t433;
  double t434;
  double t435;
  double t437;
  double t493;
  double t494;
  double t496;
  double t407;
  double t419;
  double t423;
  double t258;
  double t508;
  double t509;
  double t510;
  double t500;
  double t517;
  double t532;
  double t533;
  t180 = Cos(var1[1]);
  t182 = Cos(var1[0]);
  t255 = Sin(var1[0]);
  t195 = Cos(var1[2]);
  t200 = Sin(var1[1]);
  t203 = Sin(var1[2]);
  t194 = -0.25*t180*t182;
  t198 = -1.*t180*t182*t195;
  t211 = t182*t200*t203;
  t212 = t198 + t211;
  t240 = 0.1875*t212;
  t243 = t194 + t240;
  t293 = t180*t182*t195;
  t294 = -1.*t182*t200*t203;
  t297 = t293 + t294;
  t290 = 0.625*t180*t182;
  t291 = 0.25*t180*t182;
  t298 = 0.1875*t297;
  t299 = 0. + t291 + t298;
  t301 = 10.*t299;
  t302 = t290 + t301;
  t310 = 0.0666666666666667*t302;
  t270 = -0.25*t180*t255;
  t271 = -1.*t180*t195*t255;
  t272 = t200*t255*t203;
  t276 = t271 + t272;
  t282 = 0.1875*t276;
  t283 = t270 + t282;
  t343 = 0.625*t180*t255;
  t345 = 0. + t270 + t282;
  t347 = -10.*t345;
  t348 = t343 + t347;
  t351 = 0.0666666666666667*t348;
  t374 = -1.*t195*t200;
  t375 = -1.*t180*t203;
  t377 = t374 + t375;
  t365 = -0.625*t200;
  t366 = -0.25*t200;
  t378 = 0.1875*t377;
  t387 = 0. + t366 + t378;
  t388 = 10.*t387;
  t389 = t365 + t388;
  t390 = 0.0666666666666667*t389;
  t408 = 0.625*t200;
  t411 = -10.*t387;
  t412 = t408 + t411;
  t418 = 0.0666666666666667*t412;
  t288 = -0.125*t180*t182;
  t311 = t288 + t310;
  t442 = 0.25*t200*t255;
  t443 = t195*t200*t255;
  t444 = t180*t255*t203;
  t445 = t443 + t444;
  t447 = 0.1875*t445;
  t448 = t442 + t447;
  t321 = -0.1875*t297;
  t330 = 0. + t194 + t321 + t310;
  t336 = -0.125*t180*t255;
  t353 = t336 + t351;
  t464 = -0.25*t182*t200;
  t465 = -1.*t182*t195*t200;
  t473 = -1.*t180*t182*t203;
  t475 = t465 + t473;
  t476 = 0.1875*t475;
  t479 = t464 + t476;
  t360 = 0. + t270 + t282 + t351;
  t364 = 0.125*t200;
  t393 = t364 + t390;
  t395 = 0.25*t200;
  t396 = -0.1875*t377;
  t397 = 0. + t395 + t396 + t390;
  t184 = -0.625*t180*t182;
  t431 = -0.25*t180;
  t432 = -1.*t180*t195;
  t433 = t200*t203;
  t434 = t432 + t433;
  t435 = 0.1875*t434;
  t437 = t431 + t435;
  t493 = -10.*t299;
  t494 = t184 + t493;
  t496 = 0.0666666666666667*t494;
  t407 = -0.125*t200;
  t419 = t407 + t418;
  t423 = 0. + t366 + t378 + t418;
  t258 = -0.625*t180*t255;
  t508 = 10.*t345;
  t509 = t258 + t508;
  t510 = 0.0666666666666667*t509;
  t500 = 0. + t291 + t298 + t496;
  t517 = 0.25*t180*t255;
  t532 = -0.1875*t276;
  t533 = 0. + t517 + t532 + t510;
  p_output1[0]=0;
  p_output1[1]=t184 + 10.*t243;
  p_output1[2]=t258 + 10.*t283;
  p_output1[3]=-0.625*t180*t182*t311 + 10.*t243*t330 - 0.625*t180*t255*t353 + 10.*t283*t360;
  p_output1[4]=-0.625*t180*t255*t393 + 10.*t283*t397;
  p_output1[5]=-0.625*t180*t182*t419 + 10.*t243*t423;
  p_output1[6]=-0.625*t180 + 10.*t437;
  p_output1[7]=0.625*t200*t255 + 10.*t448;
  p_output1[8]=-0.625*t182*t200 + 10.*t479;
  p_output1[9]=0.625*t200*t255*t311 - 0.625*t182*t200*t353 + 10.*t330*t448 + 10.*t360*t479;
  p_output1[10]=-0.625*t182*t200*t393 + 10.*t397*t479 - 0.625*t180*(0.125*t180*t182 + t496) + 10.*t437*t500;
  p_output1[11]=0.625*t200*t255*t419 + 10.*t423*t448 - 0.625*t180*(0.125*t180*t255 + t510) + 10.*t437*t533;
  p_output1[12]=1.875*t434;
  p_output1[13]=1.875*t445;
  p_output1[14]=1.875*t475;
  p_output1[15]=1.875*t330*t445 + 1.875*t360*t475;
  p_output1[16]=1.875*t397*t475 + 1.875*t434*t500;
  p_output1[17]=1.875*t423*t445 + 1.875*t434*t533;
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
