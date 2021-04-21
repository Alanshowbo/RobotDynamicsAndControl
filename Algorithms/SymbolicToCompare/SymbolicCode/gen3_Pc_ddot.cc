/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:43 GMT-04:00
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
  double t261;
  double t271;
  double t335;
  double t269;
  double t276;
  double t277;
  double t386;
  double t370;
  double t364;
  double t405;
  double t443;
  double t444;
  double t308;
  double t372;
  double t376;
  double t378;
  double t385;
  double t416;
  double t435;
  double t437;
  double t439;
  double t441;
  double t446;
  double t447;
  double t448;
  double t450;
  double t453;
  double t454;
  double t464;
  double t466;
  double t460;
  double t475;
  double t480;
  double t485;
  double t491;
  double t465;
  double t476;
  double t478;
  double t493;
  double t511;
  double t512;
  double t513;
  double t543;
  double t544;
  double t546;
  double t552;
  double t536;
  double t537;
  double t541;
  double t558;
  double t559;
  double t560;
  double t564;
  double t565;
  double t566;
  double t580;
  double t581;
  double t582;
  double t517;
  double t519;
  double t520;
  double t515;
  double t521;
  double t524;
  double t526;
  double t527;
  double t531;
  double t590;
  t261 = Cos(var1[0]);
  t271 = Sin(var1[0]);
  t335 = Power(var2[0],2);
  t269 = 0.01*t261;
  t276 = -0.05*t271;
  t277 = t269 + t276;
  t386 = 0.05*t261;
  t370 = -0.01*t271;
  t364 = -0.05*t261;
  t405 = 0.01*t271;
  t443 = 0.05*t271;
  t444 = t269 + t443;
  t308 = var3[0]*t277;
  t372 = t364 + t370;
  t376 = t335*t372;
  t378 = t308 + t376;
  t385 = t335*t277;
  t416 = t386 + t405;
  t435 = var3[0]*t416;
  t437 = t385 + t435;
  t439 = t386 + t370;
  t441 = t335*t439;
  t446 = var3[0]*t444;
  t447 = t441 + t446;
  t448 = t364 + t405;
  t450 = var3[0]*t448;
  t453 = t335*t444;
  t454 = t450 + t453;
  t464 = Cos(var1[2]);
  t466 = Sin(var1[1]);
  t460 = Cos(var1[1]);
  t475 = Sin(var1[2]);
  t480 = t464*t466;
  t485 = t460*t475;
  t491 = t480 + t485;
  t465 = -1.*t460*t464;
  t476 = t466*t475;
  t478 = t465 + t476;
  t493 = 0.25*var2[2]*t491;
  t511 = t464*t466*t271;
  t512 = t460*t271*t475;
  t513 = t511 + t512;
  t543 = t460*t464*t271;
  t544 = -1.*t466*t271*t475;
  t546 = t543 + t544;
  t552 = 0.25*var2[2]*t546;
  t536 = t261*t464*t466;
  t537 = t460*t261*t475;
  t541 = t536 + t537;
  t558 = 0.25*t261*t466;
  t559 = 0.25*t541;
  t560 = t558 + t559;
  t564 = 0.25*t460*t271;
  t565 = 0.25*t546;
  t566 = t564 + t565;
  t580 = -1.*t261*t464*t466;
  t581 = -1.*t460*t261*t475;
  t582 = t580 + t581;
  t517 = -1.*t460*t261*t464;
  t519 = t261*t466*t475;
  t520 = t517 + t519;
  t515 = -0.25*t460*t261;
  t521 = 0.25*t520;
  t524 = t515 + t521;
  t526 = 0.25*t466*t271;
  t527 = 0.25*t513;
  t531 = t526 + t527;
  t590 = 0.25*var2[2]*t520;
  p_output1[0]=0;
  p_output1[1]=t378;
  p_output1[2]=t437;
  p_output1[3]=0;
  p_output1[4]=t447;
  p_output1[5]=t454;
  p_output1[6]=0;
  p_output1[7]=t378;
  p_output1[8]=t437;
  p_output1[9]=0;
  p_output1[10]=t447;
  p_output1[11]=t454;
  p_output1[12]=var2[1]*(t493 + (0.25*t466 + 0.25*t491)*var2[1]) + (t493 + 0.25*t491*var2[1])*var2[2] + (-0.25*t460 + 0.25*t478)*var3[1] + 0.25*t478*var3[2];
  p_output1[13]=var2[1]*(t552 + t560*var2[0] + t566*var2[1]) + (t552 + 0.25*t541*var2[0] + 0.25*t546*var2[1])*var2[2] + var2[0]*(t566*var2[0] + t560*var2[1] + 0.25*t541*var2[2]) + t524*var3[0] + t531*var3[1] + 0.25*t513*var3[2];
  p_output1[14]=var2[1]*(t590 + t531*var2[0] + t524*var2[1]) + (t590 + 0.25*t513*var2[0] + 0.25*t520*var2[1])*var2[2] + var2[0]*(t524*var2[0] + t531*var2[1] + 0.25*t513*var2[2]) + (-0.25*t271*t460 + 0.25*(-1.*t271*t460*t464 + t271*t466*t475))*var3[0] + (-0.25*t261*t466 + 0.25*t582)*var3[1] + 0.25*t582*var3[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 5, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "gen3_Pc_ddot.hh"

namespace SymExpression
{

void gen3_Pc_ddot_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
