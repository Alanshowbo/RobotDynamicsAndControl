/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:42 GMT-04:00
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
  double t252;
  double t268;
  double t261;
  double t308;
  double t269;
  double t271;
  double t276;
  double t277;
  double t335;
  double t364;
  double t370;
  double t372;
  double t376;
  double t378;
  double t385;
  double t386;
  double t391;
  double t395;
  double t396;
  double t398;
  double t399;
  double t405;
  double t416;
  double t446;
  double t447;
  double t448;
  double t486;
  double t487;
  double t491;
  t252 = Cos(var1[0]);
  t268 = Sin(var1[0]);
  t261 = 0.01*t252;
  t308 = 0.01*t268;
  t269 = -0.05*t268;
  t271 = t261 + t269;
  t276 = var2[0]*t271;
  t277 = 0.05*t252;
  t335 = t277 + t308;
  t364 = var2[0]*t335;
  t370 = 0.05*t268;
  t372 = t261 + t370;
  t376 = var2[0]*t372;
  t378 = -0.05*t252;
  t385 = t378 + t308;
  t386 = var2[0]*t385;
  t391 = Cos(var1[1]);
  t395 = Cos(var1[2]);
  t396 = -1.*t391*t395;
  t398 = Sin(var1[1]);
  t399 = Sin(var1[2]);
  t405 = t398*t399;
  t416 = t396 + t405;
  t446 = t395*t398*t268;
  t447 = t391*t268*t399;
  t448 = t446 + t447;
  t486 = -1.*t252*t395*t398;
  t487 = -1.*t391*t252*t399;
  t491 = t486 + t487;
  p_output1[0]=0;
  p_output1[1]=t276;
  p_output1[2]=t364;
  p_output1[3]=0;
  p_output1[4]=t376;
  p_output1[5]=t386;
  p_output1[6]=0;
  p_output1[7]=t276;
  p_output1[8]=t364;
  p_output1[9]=0;
  p_output1[10]=t376;
  p_output1[11]=t386;
  p_output1[12]=(-0.25*t391 + 0.25*t416)*var2[1] + 0.25*t416*var2[2];
  p_output1[13]=(-0.25*t252*t391 + 0.25*(-1.*t252*t391*t395 + t252*t398*t399))*var2[0] + (0.25*t268*t398 + 0.25*t448)*var2[1] + 0.25*t448*var2[2];
  p_output1[14]=(-0.25*t268*t391 + 0.25*(-1.*t268*t391*t395 + t268*t398*t399))*var2[0] + (-0.25*t252*t398 + 0.25*t491)*var2[1] + 0.25*t491*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 5, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "gen3_Pc_dot.hh"

namespace SymExpression
{

void gen3_Pc_dot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
