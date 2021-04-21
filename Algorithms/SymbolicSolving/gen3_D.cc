/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 09:10:12 GMT-05:00
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
  double t43;
  double t46;
  double t51;
  double t52;
  double t54;
  double t55;
  double t60;
  double t61;
  double t62;
  double t63;
  double t75;
  double t77;
  double t94;
  double t95;
  double t96;
  double t98;
  double t99;
  double t100;
  double t111;
  double t112;
  double t113;
  double t114;
  double t115;
  double t116;
  double t117;
  double t64;
  double t65;
  double t66;
  double t69;
  double t68;
  double t70;
  double t123;
  double t74;
  double t76;
  double t78;
  double t79;
  double t80;
  double t81;
  double t86;
  double t87;
  double t88;
  double t89;
  double t90;
  double t91;
  double t104;
  double t101;
  double t97;
  double t102;
  double t105;
  double t106;
  double t147;
  double t153;
  double t154;
  double t155;
  double t161;
  double t162;
  double t163;
  double t149;
  double t150;
  double t151;
  double t167;
  double t168;
  double t169;
  double t170;
  double t172;
  double t173;
  double t174;
  double t134;
  double t135;
  double t136;
  double t141;
  double t142;
  double t143;
  double t148;
  double t152;
  double t156;
  double t157;
  double t187;
  double t188;
  double t189;
  double t190;
  double t191;
  double t159;
  double t160;
  double t164;
  double t165;
  double t194;
  double t195;
  double t196;
  double t197;
  double t198;
  double t199;
  double t200;
  double t202;
  double t203;
  double t204;
  double t118;
  double t119;
  double t120;
  double t121;
  double t122;
  double t124;
  double t125;
  double t126;
  double t127;
  double t128;
  double t129;
  double t130;
  double t131;
  double t132;
  double t133;
  double t137;
  double t138;
  double t139;
  double t140;
  double t144;
  double t145;
  double t146;
  double t158;
  double t166;
  double t171;
  double t175;
  double t176;
  double t177;
  double t178;
  double t179;
  double t180;
  double t181;
  double t182;
  double t183;
  double t184;
  double t240;
  double t241;
  double t231;
  double t232;
  double t233;
  double t230;
  double t234;
  double t235;
  double t242;
  double t243;
  double t244;
  double t245;
  double t247;
  double t248;
  double t249;
  double t250;
  double t208;
  double t205;
  double t201;
  double t206;
  double t209;
  double t210;
  double t258;
  double t259;
  double t185;
  double t186;
  double t192;
  double t193;
  double t207;
  double t211;
  double t212;
  double t213;
  double t214;
  double t253;
  double t254;
  double t255;
  double t256;
  double t257;
  double t260;
  double t261;
  double t262;
  double t263;
  double t264;
  double t265;
  double t266;
  double t267;
  double t268;
  double t269;
  double t270;
  t43 = Cos(var1[1]);
  t46 = Power(t43,2);
  t51 = Cos(var1[0]);
  t52 = Power(t51,2);
  t54 = Sin(var1[0]);
  t55 = Power(t54,2);
  t60 = -1.*t52;
  t61 = -1.*t55;
  t62 = t60 + t61;
  t63 = Sin(var1[1]);
  t75 = Cos(var1[2]);
  t77 = Sin(var1[2]);
  t94 = -1.*t75*t63;
  t95 = -1.*t43*t77;
  t96 = t94 + t95;
  t98 = t43*t75;
  t99 = -1.*t63*t77;
  t100 = t98 + t99;
  t111 = -1.*t46;
  t112 = Power(t63,2);
  t113 = -1.*t112;
  t114 = t111 + t113;
  t115 = 0.5*t52*t114;
  t116 = 0.5*t114*t55;
  t117 = t115 + t116;
  t64 = 0.005*t43*t62;
  t65 = -0.015*t63*t62;
  t66 = t64 + t65;
  t69 = -0.005*t63*t62;
  t68 = 0.15*t43*t62;
  t70 = t68 + t69;
  t123 = t64 + t69;
  t74 = -0.25*t43*t51;
  t76 = -1.*t43*t51*t75;
  t78 = t51*t63*t77;
  t79 = t76 + t78;
  t80 = 0.1875*t79;
  t81 = t74 + t80;
  t86 = -0.25*t43*t54;
  t87 = -1.*t43*t75*t54;
  t88 = t63*t54*t77;
  t89 = t87 + t88;
  t90 = 0.1875*t89;
  t91 = t86 + t90;
  t104 = 0.005*t62*t96;
  t101 = 0.005*t62*t100;
  t97 = 0.015*t62*t96;
  t102 = t97 + t101;
  t105 = 0.15*t62*t100;
  t106 = t104 + t105;
  t147 = t104 + t101;
  t153 = t51*t75*t63;
  t154 = t43*t51*t77;
  t155 = t153 + t154;
  t161 = -1.*t75*t63*t54;
  t162 = -1.*t43*t54*t77;
  t163 = t161 + t162;
  t149 = t43*t51*t75;
  t150 = -1.*t51*t63*t77;
  t151 = t149 + t150;
  t167 = 0.01*t117;
  t168 = -0.5*t114*t54*t155;
  t169 = -0.5*t51*t114*t163;
  t170 = t168 + t169;
  t172 = -0.5*t114*t54*t151;
  t173 = -0.5*t51*t114*t89;
  t174 = t172 + t173;
  t134 = t75*t63*t54;
  t135 = t43*t54*t77;
  t136 = t134 + t135;
  t141 = -1.*t51*t75*t63;
  t142 = -1.*t43*t51*t77;
  t143 = t141 + t142;
  t148 = -1.*t54*t147;
  t152 = t151*t102;
  t156 = t155*t106;
  t157 = t148 + t152 + t156;
  t187 = Power(t75,2);
  t188 = -1.*t187;
  t189 = Power(t77,2);
  t190 = -1.*t189;
  t191 = t188 + t190;
  t159 = -1.*t51*t147;
  t160 = t89*t102;
  t164 = t163*t106;
  t165 = t159 + t160 + t164;
  t194 = 0.5*t52*t191;
  t195 = 0.5*t55*t191;
  t196 = t194 + t195;
  t197 = 0.01*t196;
  t198 = -0.5*t54*t155*t191;
  t199 = -0.5*t51*t163*t191;
  t200 = t198 + t199;
  t202 = -0.5*t54*t151*t191;
  t203 = -0.5*t51*t89*t191;
  t204 = t202 + t203;
  t118 = 0.01*t43*t117;
  t119 = -0.01*t63*t117;
  t120 = t118 + t119;
  t121 = t62*t120;
  t122 = t43*t51*t66;
  t124 = -1.*t54*t123;
  t125 = t51*t63*t70;
  t126 = t122 + t124 + t125;
  t127 = -1.*t114*t54*t126;
  t128 = -1.*t43*t54*t66;
  t129 = -1.*t51*t123;
  t130 = -1.*t63*t54*t70;
  t131 = t128 + t129 + t130;
  t132 = -1.*t51*t114*t131;
  t133 = 0.25*t63*t54;
  t137 = 0.1875*t136;
  t138 = t133 + t137;
  t139 = 10.*t81*t138;
  t140 = -0.25*t51*t63;
  t144 = 0.1875*t143;
  t145 = t140 + t144;
  t146 = 10.*t145*t91;
  t158 = -1.*t114*t54*t157;
  t166 = -1.*t51*t114*t165;
  t171 = 0.3*t170;
  t175 = 0.01*t174;
  t176 = t167 + t171 + t175;
  t177 = t100*t176;
  t178 = 0.01*t170;
  t179 = 0.03*t174;
  t180 = t167 + t178 + t179;
  t181 = t96*t180;
  t182 = t177 + t181;
  t183 = t62*t182;
  t184 = 0. + t121 + t127 + t132 + t139 + t146 + t158 + t166 + t183;
  t240 = 0.3*t117;
  t241 = t240 + t178 + t175;
  t231 = -1.*t43*t75;
  t232 = t63*t77;
  t233 = t231 + t232;
  t230 = -0.25*t43;
  t234 = 0.1875*t233;
  t235 = t230 + t234;
  t242 = -1.*t54*t241;
  t243 = t155*t176;
  t244 = t151*t180;
  t245 = t242 + t243 + t244;
  t247 = -1.*t51*t241;
  t248 = t163*t176;
  t249 = t89*t180;
  t250 = t247 + t248 + t249;
  t208 = 0.01*t200;
  t205 = 0.01*t204;
  t201 = 0.3*t200;
  t206 = t197 + t201 + t205;
  t209 = 0.03*t204;
  t210 = t197 + t208 + t209;
  t258 = 0.3*t196;
  t259 = t258 + t208 + t205;
  t185 = 1.875*t136*t81;
  t186 = 1.875*t143*t91;
  t192 = -1.*t54*t191*t157;
  t193 = -1.*t51*t191*t165;
  t207 = t100*t206;
  t211 = t96*t210;
  t212 = t207 + t211;
  t213 = t62*t212;
  t214 = t185 + t186 + t192 + t193 + t213;
  t253 = 1.875*t143*t145;
  t254 = 1.875*t233*t235;
  t255 = 1.875*t136*t138;
  t256 = -1.*t54*t191*t245;
  t257 = -1.*t51*t191*t250;
  t260 = -1.*t54*t259;
  t261 = t155*t206;
  t262 = t151*t210;
  t263 = t260 + t261 + t262;
  t264 = -1.*t114*t54*t263;
  t265 = -1.*t51*t259;
  t266 = t163*t206;
  t267 = t89*t210;
  t268 = t265 + t266 + t267;
  t269 = -1.*t51*t114*t268;
  t270 = t253 + t254 + t255 + t256 + t257 + t264 + t269;
  p_output1[0]=0.078125*t46*t52 + 0.078125*t46*t55 + 2.*t62*(-1.*t63*t66 + t43*t70) + 10.*Power(t81,2) + 10.*Power(t91,2) + 2.*t62*(t100*t106 + t102*t96);
  p_output1[1]=t184;
  p_output1[2]=t214;
  p_output1[3]=t184;
  p_output1[4]=10.*Power(t138,2) + 10.*Power(t145,2) + 10.*Power(t235,2) + 0.078125*t46 - 2.*t114*t250*t51 + 0.078125*t112*t52 - 2.*t114*t245*t54 + 0.078125*t112*t55 - 2.*t114*t54*(0.01*t117*t43*t51 - 0.3*t117*t54 + 0.01*t117*t51*t63) - 2.*t114*t51*(-0.3*t117*t51 - 0.01*t117*t43*t54 - 0.01*t117*t54*t63);
  p_output1[5]=t270;
  p_output1[6]=t214;
  p_output1[7]=t270;
  p_output1[8]=0.3515625*Power(t136,2) + 0.3515625*Power(t143,2) + 0.3515625*Power(t233,2) - 2.*t191*t268*t51 - 2.*t191*t263*t54;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "gen3_D.hh"

namespace SymExpression
{

void gen3_D_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
