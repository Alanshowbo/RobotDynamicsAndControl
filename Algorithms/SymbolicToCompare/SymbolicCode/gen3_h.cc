/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:34 GMT-04:00
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
  double t81;
  double t105;
  double t85;
  double t89;
  double t90;
  double t91;
  double t94;
  double t95;
  double t97;
  double t118;
  double t129;
  double t144;
  double t148;
  double t151;
  double t190;
  double t191;
  double t192;
  double t193;
  double t198;
  double t199;
  double t202;
  double t205;
  double t206;
  double t210;
  double t212;
  double t213;
  double t216;
  double t217;
  double t218;
  double t219;
  double t220;
  double t221;
  double t153;
  double t154;
  double t158;
  double t159;
  double t160;
  double t162;
  double t163;
  double t165;
  double t170;
  double t171;
  double t140;
  double t142;
  double t143;
  double t178;
  double t180;
  double t181;
  double t182;
  double t247;
  double t248;
  double t249;
  double t233;
  double t234;
  double t235;
  double t242;
  double t243;
  double t244;
  double t237;
  double t238;
  double t121;
  double t133;
  double t134;
  double t185;
  double t98;
  double t99;
  double t107;
  double t108;
  double t135;
  double t136;
  double t138;
  double t152;
  double t173;
  double t174;
  double t251;
  double t252;
  double t253;
  double t254;
  double t255;
  double t245;
  double t246;
  double t250;
  double t256;
  double t257;
  double t281;
  double t282;
  double t284;
  double t285;
  double t286;
  double t287;
  double t263;
  double t264;
  double t265;
  double t266;
  double t296;
  double t297;
  double t298;
  double t304;
  double t305;
  double t306;
  double t311;
  double t312;
  double t273;
  double t275;
  double t291;
  double t292;
  double t293;
  double t326;
  double t327;
  double t328;
  double t332;
  double t333;
  double t336;
  double t337;
  double t338;
  double t345;
  double t346;
  double t347;
  t81 = Cos(var1[1]);
  t105 = Sin(var1[1]);
  t85 = Cos(var1[0]);
  t89 = Power(t85,2);
  t90 = var2[0]*t89;
  t91 = Sin(var1[0]);
  t94 = Power(t91,2);
  t95 = var2[0]*t94;
  t97 = t90 + t95;
  t118 = Cos(var1[2]);
  t129 = Sin(var1[2]);
  t144 = t81*t118*t97;
  t148 = -1.*t105*t97*t129;
  t151 = t144 + t148;
  t190 = 0.625*t81*t85;
  t191 = 0.25*t81*t85;
  t192 = t81*t85*t118;
  t193 = -1.*t85*t105*t129;
  t198 = t192 + t193;
  t199 = 0.1875*t198;
  t202 = 0. + t191 + t199;
  t205 = 10.*t202;
  t206 = t190 + t205;
  t210 = 0.625*t81*t91;
  t212 = -0.25*t81*t91;
  t213 = -1.*t81*t118*t91;
  t216 = t105*t91*t129;
  t217 = t213 + t216;
  t218 = 0.1875*t217;
  t219 = 0. + t212 + t218;
  t220 = -10.*t219;
  t221 = t210 + t220;
  t153 = -0.25*var2[1]*t85*t105;
  t154 = -0.25*var2[0]*t81*t91;
  t158 = t153 + t154;
  t159 = -1.*t91*t158;
  t160 = -0.25*var2[0]*t81*t85;
  t162 = 0.25*var2[1]*t105*t91;
  t163 = t160 + t162;
  t165 = -1.*t85*t163;
  t170 = 0.1875*t151;
  t171 = 0. + t159 + t165 + t170;
  t140 = t81*t118;
  t142 = -1.*t105*t129;
  t143 = t140 + t142;
  t178 = Power(t81,2);
  t180 = var2[1]*t178;
  t181 = Power(t105,2);
  t182 = var2[1]*t181;
  t247 = -1.*t118*t105*t91;
  t248 = -1.*t81*t91*t129;
  t249 = t247 + t248;
  t233 = -0.25*t81*t85;
  t234 = 0.0666666666666667*t206;
  t235 = 0. + t233 + t234;
  t242 = t85*t118*t105;
  t243 = t81*t85*t129;
  t244 = t242 + t243;
  t237 = 0.0666666666666667*t221;
  t238 = 0. + t212 + t237;
  t121 = -1.*t118*t105;
  t133 = -1.*t81*t129;
  t134 = t121 + t133;
  t185 = t180 + t182;
  t98 = 0.978125*t81*t97;
  t99 = 0. + t98;
  t107 = -0.1*t105*t97;
  t108 = 0. + t107;
  t135 = -1.*t118*t105*t97;
  t136 = -1.*t81*t97*t129;
  t138 = t135 + t136;
  t152 = 0.9*t151;
  t173 = 1.875*t171;
  t174 = t152 + t173;
  t251 = Power(t118,2);
  t252 = var2[2]*t251;
  t253 = Power(t129,2);
  t254 = var2[2]*t253;
  t255 = t180 + t252 + t182 + t254;
  t245 = t158*t244;
  t246 = -0.25*var2[1]*t81*t143;
  t250 = t163*t249;
  t256 = -0.1875*t255;
  t257 = t245 + t246 + t250 + t256;
  t281 = -0.625*t105;
  t282 = -0.25*t105;
  t284 = 0.1875*t134;
  t285 = 0. + t282 + t284;
  t286 = 10.*t285;
  t287 = t281 + t286;
  t263 = -0.25*var2[1]*t81*t134;
  t264 = t158*t198;
  t265 = t163*t217;
  t266 = t263 + t264 + t265;
  t296 = 0.25*t105;
  t297 = 0.0666666666666667*t287;
  t298 = 0. + t296 + t297;
  t304 = -0.625*t81*t85;
  t305 = -10.*t202;
  t306 = t304 + t305;
  t311 = 0.0666666666666667*t306;
  t312 = 0. + t191 + t311;
  t273 = 0.978125*t185;
  t275 = 0. + t273;
  t291 = 0.9*t255;
  t292 = -1.875*t257;
  t293 = t291 + t292;
  t326 = 0.625*t105;
  t327 = -10.*t285;
  t328 = t326 + t327;
  t332 = 0.0666666666666667*t328;
  t333 = 0. + t282 + t332;
  t336 = -0.625*t81*t91;
  t337 = 10.*t219;
  t338 = t336 + t337;
  t345 = 0.25*t81*t91;
  t346 = 0.0666666666666667*t338;
  t347 = 0. + t345 + t346;
  p_output1[0]=-1.*t105*t108 + 0.1*t134*t138 + t143*t174 + 10.*(t238*t244 + t235*t249)*t257 + 10.*(t217*t235 + t198*t238)*t266 - 0.625*t185*(0.0666666666666667*t105*t221*t85 - 0.0666666666666667*t105*t206*t91) + 10.*t171*(-1.*t235*t85 - 1.*t238*t91) + 0.625*t81*(-0.0666666666666667*t206*t85 - 0.0666666666666667*t221*t91)*t97 + t81*t99;
  p_output1[1]=0.1*t138*t217 + t174*t249 + 10.*t266*(t198*t298 + t134*t312) + 10.*t257*(t244*t298 + t143*t312) - 1.*t275*t85 - 1.*t293*t85 - 0.625*t185*(0.0666666666666667*t306*t81 + 0.0666666666666667*t105*t287*t85) - 10.*t171*t298*t91 - 1.*t108*t81*t91 - 0.041666666666666664*t287*t81*t91*t97 - 1.*t105*t91*t99;
  p_output1[2]=0.1*t138*t198 + t174*t244 + 10.*t266*(t217*t333 + t134*t347) + 10.*t257*(t249*t333 + t143*t347) - 10.*t171*t333*t85 + t108*t81*t85 - 1.*t275*t91 - 1.*t293*t91 - 0.625*t185*(0.0666666666666667*t338*t81 - 0.0666666666666667*t105*t328*t91) - 0.041666666666666664*t328*t81*t85*t97 + t105*t85*t99;
  p_output1[3]=0. + 10.*t143*t257 + 10.*t134*t266 - 0.625*t185*t81;
  p_output1[4]=10.*t249*t257 + 10.*t217*t266 - 10.*t171*t85 + 0.625*t105*t185*t91 - 0.625*t81*t85*t97;
  p_output1[5]=10.*t244*t257 + 10.*t198*t266 - 0.625*t105*t185*t85 - 10.*t171*t91 - 0.625*t81*t91*t97;
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
