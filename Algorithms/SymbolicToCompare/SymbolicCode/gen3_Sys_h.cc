/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:37 GMT-04:00
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
  double t151;
  double t153;
  double t170;
  double t182;
  double t185;
  double t233;
  double t236;
  double t95;
  double t254;
  double t261;
  double t263;
  double t265;
  double t268;
  double t269;
  double t307;
  double t308;
  double t309;
  double t313;
  double t316;
  double t321;
  double t323;
  double t324;
  double t335;
  double t336;
  double t343;
  double t374;
  double t376;
  double t378;
  double t385;
  double t386;
  double t395;
  double t396;
  double t398;
  double t399;
  double t405;
  double t406;
  double t408;
  double t416;
  double t422;
  double t423;
  double t435;
  double t437;
  double t439;
  double t440;
  double t330;
  double t345;
  double t351;
  double t355;
  t151 = Cos(var1[0]);
  t153 = Power(t151,2);
  t170 = var2[0]*t153;
  t182 = Sin(var1[0]);
  t185 = Power(t182,2);
  t233 = var2[0]*t185;
  t236 = t170 + t233;
  t95 = Cos(var1[1]);
  t254 = Sin(var1[1]);
  t261 = Power(t95,2);
  t263 = var2[1]*t261;
  t265 = Power(t254,2);
  t268 = var2[1]*t265;
  t269 = t263 + t268;
  t307 = Cos(var1[2]);
  t308 = t95*t307*t236;
  t309 = Sin(var1[2]);
  t313 = -1.*t254*t236*t309;
  t316 = t308 + t313;
  t321 = -0.25*var2[1]*t151*t254;
  t323 = -0.25*var2[0]*t95*t182;
  t324 = t321 + t323;
  t335 = -0.25*var2[0]*t95*t151;
  t336 = 0.25*var2[1]*t254*t182;
  t343 = t335 + t336;
  t374 = Power(t307,2);
  t376 = var2[2]*t374;
  t378 = Power(t309,2);
  t385 = var2[2]*t378;
  t386 = t263 + t376 + t268 + t385;
  t395 = t151*t307*t254;
  t396 = t95*t151*t309;
  t398 = t395 + t396;
  t399 = t324*t398;
  t405 = t95*t307;
  t406 = -1.*t254*t309;
  t408 = t405 + t406;
  t416 = -0.25*var2[1]*t95*t408;
  t422 = -1.*t307*t254*t182;
  t423 = -1.*t95*t182*t309;
  t435 = t422 + t423;
  t437 = t343*t435;
  t439 = -0.1875*t386;
  t440 = t399 + t416 + t437 + t439;
  t330 = -1.*t182*t324;
  t345 = -1.*t151*t343;
  t351 = 0.1875*t316;
  t355 = 0. + t330 + t345 + t351;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + 0.978125*t236*t95;
  p_output1[7]=0. - 0.1*t236*t254;
  p_output1[8]=0. + 0.978125*t269;
  p_output1[9]=-0.625*t269;
  p_output1[10]=0;
  p_output1[11]=0.625*t236*t95;
  p_output1[12]=0.9*t316 + 1.875*t355;
  p_output1[13]=0.1*(-1.*t236*t254*t307 - 1.*t236*t309*t95);
  p_output1[14]=0.9*t386 - 1.875*t440;
  p_output1[15]=10.*t440;
  p_output1[16]=10.*(t324*(-1.*t151*t254*t309 + t151*t307*t95) + t343*(t182*t254*t309 - 1.*t182*t307*t95) - 0.25*t95*(-1.*t254*t307 - 1.*t309*t95)*var2[1]);
  p_output1[17]=10.*t355;
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

#include "gen3_Sys_h.hh"

namespace SymExpression
{

void gen3_Sys_h_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
