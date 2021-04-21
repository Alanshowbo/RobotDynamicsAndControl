/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 09:10:28 GMT-05:00
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
  double t194;
  double t212;
  double t270;
  double t211;
  double t240;
  double t244;
  double t290;
  double t276;
  double t272;
  double t291;
  double t321;
  double t332;
  double t248;
  double t282;
  double t284;
  double t285;
  double t288;
  double t293;
  double t297;
  double t298;
  double t311;
  double t316;
  double t336;
  double t343;
  double t353;
  double t355;
  double t362;
  double t363;
  t194 = Cos(var1[0]);
  t212 = Sin(var1[0]);
  t270 = Power(var2[0],2);
  t211 = 0.01*t194;
  t240 = -0.05*t212;
  t244 = t211 + t240;
  t290 = 0.05*t194;
  t276 = -0.01*t212;
  t272 = -0.05*t194;
  t291 = 0.01*t212;
  t321 = 0.05*t212;
  t332 = t211 + t321;
  t248 = var3[0]*t244;
  t282 = t272 + t276;
  t284 = t270*t282;
  t285 = t248 + t284;
  t288 = t270*t244;
  t293 = t290 + t291;
  t297 = var3[0]*t293;
  t298 = t288 + t297;
  t311 = t290 + t276;
  t316 = t270*t311;
  t336 = var3[0]*t332;
  t343 = t316 + t336;
  t353 = t272 + t291;
  t355 = var3[0]*t353;
  t362 = t270*t332;
  t363 = t355 + t362;
  p_output1[0]=0;
  p_output1[1]=t285;
  p_output1[2]=t298;
  p_output1[3]=0;
  p_output1[4]=t343;
  p_output1[5]=t363;
  p_output1[6]=0;
  p_output1[7]=t285;
  p_output1[8]=t298;
  p_output1[9]=0;
  p_output1[10]=t343;
  p_output1[11]=t363;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 4, mxREAL);
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
