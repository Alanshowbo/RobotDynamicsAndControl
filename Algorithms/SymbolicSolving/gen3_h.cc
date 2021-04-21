/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 09:10:20 GMT-05:00
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
  double t109;
  double t133;
  double t143;
  double t144;
  double t155;
  double t156;
  double t169;
  double t199;
  double t196;
  double t205;
  double t211;
  double t212;
  double t277;
  double t280;
  double t281;
  double t198;
  double t200;
  double t202;
  double t213;
  double t218;
  double t220;
  double t222;
  double t234;
  double t239;
  double t240;
  double t243;
  double t244;
  double t248;
  double t255;
  double t258;
  double t261;
  double t302;
  double t303;
  double t304;
  double t300;
  double t301;
  double t305;
  double t306;
  double t307;
  double t308;
  double t309;
  double t271;
  double t272;
  double t275;
  double t288;
  double t289;
  double t290;
  double t291;
  double t293;
  double t282;
  double t283;
  double t284;
  double t285;
  double t286;
  double t294;
  double t295;
  double t296;
  double t316;
  double t317;
  double t318;
  double t319;
  double t320;
  double t333;
  double t335;
  double t336;
  double t330;
  double t332;
  double t337;
  double t338;
  double t340;
  double t341;
  double t342;
  double t170;
  double t179;
  double t180;
  double t182;
  double t184;
  double t185;
  double t355;
  double t356;
  double t357;
  double t359;
  double t366;
  double t367;
  double t369;
  double t370;
  double t380;
  double t381;
  double t382;
  double t386;
  t109 = Cos(var1[1]);
  t133 = Cos(var1[2]);
  t143 = -1.*t109*t133;
  t144 = Sin(var1[1]);
  t155 = Sin(var1[2]);
  t156 = t144*t155;
  t169 = t143 + t156;
  t199 = Sin(var1[0]);
  t196 = Cos(var1[0]);
  t205 = t133*t144*t199;
  t211 = t109*t199*t155;
  t212 = t205 + t211;
  t277 = -1.*t196*t133*t144;
  t280 = -1.*t109*t196*t155;
  t281 = t277 + t280;
  t198 = -0.125*var2[0]*t109*t196;
  t200 = 0.125*var2[1]*t144*t199;
  t202 = t198 + t200;
  t213 = 0.1875*var2[2]*t212;
  t218 = -0.25*t109*t196;
  t220 = -1.*t109*t196*t133;
  t222 = t196*t144*t155;
  t234 = t220 + t222;
  t239 = 0.1875*t234;
  t240 = t218 + t239;
  t243 = var2[0]*t240;
  t244 = 0.25*t144*t199;
  t248 = 0.1875*t212;
  t255 = t244 + t248;
  t258 = var2[1]*t255;
  t261 = t213 + t243 + t258;
  t302 = t109*t196*t133;
  t303 = -1.*t196*t144*t155;
  t304 = t302 + t303;
  t300 = 0.625*t109*t196;
  t301 = 0.25*t109*t196;
  t305 = 0.1875*t304;
  t306 = 0. + t301 + t305;
  t307 = 10.*t306;
  t308 = t300 + t307;
  t309 = 0.0666666666666667*t308;
  t271 = -0.125*var2[1]*t196*t144;
  t272 = -0.125*var2[0]*t109*t199;
  t275 = t271 + t272;
  t288 = -0.25*t109*t199;
  t289 = -1.*t109*t133*t199;
  t290 = t144*t199*t155;
  t291 = t289 + t290;
  t293 = 0.1875*t291;
  t282 = 0.1875*var2[2]*t281;
  t283 = -0.25*t196*t144;
  t284 = 0.1875*t281;
  t285 = t283 + t284;
  t286 = var2[1]*t285;
  t294 = t288 + t293;
  t295 = var2[0]*t294;
  t296 = t282 + t286 + t295;
  t316 = 0.625*t109*t199;
  t317 = 0. + t288 + t293;
  t318 = -10.*t317;
  t319 = t316 + t318;
  t320 = 0.0666666666666667*t319;
  t333 = -1.*t133*t144;
  t335 = -1.*t109*t155;
  t336 = t333 + t335;
  t330 = -0.625*t144;
  t332 = -0.25*t144;
  t337 = 0.1875*t336;
  t338 = 0. + t332 + t337;
  t340 = 10.*t338;
  t341 = t330 + t340;
  t342 = 0.0666666666666667*t341;
  t170 = 0.1875*var2[2]*t169;
  t179 = -0.25*t109;
  t180 = 0.1875*t169;
  t182 = t179 + t180;
  t184 = var2[1]*t182;
  t185 = t170 + t184;
  t355 = -0.625*t109*t196;
  t356 = -10.*t306;
  t357 = t355 + t356;
  t359 = 0.0666666666666667*t357;
  t366 = 0.625*t144;
  t367 = -10.*t338;
  t369 = t366 + t367;
  t370 = 0.0666666666666667*t369;
  t380 = -0.625*t109*t199;
  t381 = 10.*t317;
  t382 = t380 + t381;
  t386 = 0.0666666666666667*t382;
  p_output1[0]=10.*t185 - 0.625*t109*var2[1];
  p_output1[1]=5.*t202 + 10.*t261;
  p_output1[2]=5.*t275 + 10.*t296;
  p_output1[3]=0. + 5.*t202*(-0.125*t109*t196 + t309) + 10.*t261*(0. + t218 - 0.1875*t304 + t309) + 5.*t275*(-0.125*t109*t199 + t320) + 10.*t296*(0. + t288 + t293 + t320);
  p_output1[4]=5.*t275*(0.125*t144 + t342) + 10.*t296*(0. + 0.25*t144 - 0.1875*t336 + t342) + 10.*t185*(0. + t301 + t305 + t359) - 0.625*t109*(0.125*t109*t196 + t359)*var2[1];
  p_output1[5]=5.*t202*(-0.125*t144 + t370) + 10.*t261*(0. + t332 + t337 + t370) + 10.*t185*(0. + 0.25*t109*t199 - 0.1875*t291 + t386) - 0.625*t109*(0.125*t109*t199 + t386)*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "gen3_h.hh"

namespace SymExpression
{

void gen3_h_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
