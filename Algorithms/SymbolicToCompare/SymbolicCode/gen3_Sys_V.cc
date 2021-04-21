/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:39 GMT-04:00
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
  double t153;
  double t170;
  double t185;
  double t233;
  double t240;
  double t252;
  double t258;
  double t260;
  double t263;
  double t289;
  double t316;
  double t268;
  double t269;
  double t271;
  double t276;
  double t370;
  double t372;
  double t374;
  double t399;
  double t405;
  double t408;
  t153 = Cos(var1[0]);
  t170 = Power(t153,2);
  t185 = var2[0]*t170;
  t233 = Sin(var1[0]);
  t240 = Power(t233,2);
  t252 = var2[0]*t240;
  t258 = t185 + t252;
  t260 = Cos(var1[1]);
  t263 = Sin(var1[1]);
  t289 = Cos(var1[2]);
  t316 = Sin(var1[2]);
  t268 = Power(t260,2);
  t269 = var2[1]*t268;
  t271 = Power(t263,2);
  t276 = var2[1]*t271;
  t370 = -0.25*var2[1]*t153*t263;
  t372 = -0.25*var2[0]*t260*t233;
  t374 = t370 + t372;
  t399 = -0.25*var2[0]*t260*t153;
  t405 = 0.25*var2[1]*t263*t233;
  t408 = t399 + t405;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=t258;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t258*t260;
  p_output1[7]=-1.*t258*t263;
  p_output1[8]=t269 + t276;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t258*t260*t289 - 1.*t258*t263*t316;
  p_output1[13]=-1.*t258*t263*t289 - 1.*t258*t260*t316;
  p_output1[14]=t269 + t276 + Power(t289,2)*var2[2] + Power(t316,2)*var2[2];
  p_output1[15]=(t153*t263*t289 + t153*t260*t316)*t374 + (-1.*t233*t263*t289 - 1.*t233*t260*t316)*t408 - 0.25*t260*(t260*t289 - 1.*t263*t316)*var2[1];
  p_output1[16]=(t153*t260*t289 - 1.*t153*t263*t316)*t374 + (-1.*t233*t260*t289 + t233*t263*t316)*t408 - 0.25*t260*(-1.*t263*t289 - 1.*t260*t316)*var2[1];
  p_output1[17]=0. - 1.*t233*t374 - 1.*t153*t408;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "gen3_Sys_V.hh"

namespace SymExpression
{

void gen3_Sys_V_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
