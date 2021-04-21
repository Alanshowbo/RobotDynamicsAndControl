/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:28 GMT-04:00
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
  double t62;
  double t67;
  double t69;
  double t63;
  double t74;
  double t75;
  double t76;
  double t68;
  double t70;
  double t71;
  double t81;
  double t82;
  double t85;
  double t86;
  double t87;
  double t88;
  double t91;
  double t92;
  double t93;
  double t94;
  double t95;
  double t96;
  double t100;
  double t101;
  double t102;
  double t103;
  double t125;
  double t126;
  double t127;
  double t105;
  double t106;
  double t107;
  double t104;
  double t108;
  double t109;
  double t112;
  double t113;
  double t114;
  double t119;
  double t120;
  double t121;
  double t143;
  double t144;
  double t145;
  double t128;
  double t129;
  double t130;
  double t110;
  double t111;
  double t115;
  double t116;
  double t117;
  double t118;
  double t122;
  double t123;
  double t124;
  double t131;
  double t132;
  double t133;
  double t134;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t142;
  double t164;
  double t165;
  double t166;
  double t172;
  double t173;
  double t174;
  double t171;
  double t175;
  double t176;
  double t181;
  double t182;
  double t183;
  double t184;
  double t186;
  double t187;
  double t188;
  double t189;
  double t150;
  double t151;
  double t152;
  double t154;
  double t155;
  double t156;
  double t197;
  double t198;
  double t199;
  double t146;
  double t147;
  double t148;
  double t149;
  double t153;
  double t157;
  double t158;
  double t159;
  double t160;
  double t192;
  double t193;
  double t194;
  double t195;
  double t196;
  double t200;
  double t201;
  double t202;
  double t203;
  double t204;
  double t205;
  double t206;
  double t207;
  double t208;
  double t209;
  double t210;
  t43 = Cos(var1[1]);
  t46 = Power(t43,2);
  t51 = Cos(var1[0]);
  t52 = Power(t51,2);
  t54 = Sin(var1[0]);
  t55 = Power(t54,2);
  t60 = t52 + t55;
  t62 = Sin(var1[1]);
  t67 = Cos(var1[2]);
  t69 = Sin(var1[2]);
  t63 = Power(t62,2);
  t74 = t43*t67;
  t75 = -1.*t62*t69;
  t76 = t74 + t75;
  t68 = -1.*t67*t62;
  t70 = -1.*t43*t69;
  t71 = t68 + t70;
  t81 = -0.25*t43*t51;
  t82 = -1.*t43*t51*t67;
  t85 = t51*t62*t69;
  t86 = t82 + t85;
  t87 = 0.1875*t86;
  t88 = t81 + t87;
  t91 = -0.25*t43*t54;
  t92 = -1.*t43*t67*t54;
  t93 = t62*t54*t69;
  t94 = t92 + t93;
  t95 = 0.1875*t94;
  t96 = t91 + t95;
  t100 = t46 + t63;
  t101 = t51*t67*t62;
  t102 = t43*t51*t69;
  t103 = t101 + t102;
  t125 = -1.*t67*t62*t54;
  t126 = -1.*t43*t54*t69;
  t127 = t125 + t126;
  t105 = t43*t51*t67;
  t106 = -1.*t51*t62*t69;
  t107 = t105 + t106;
  t104 = 0.45*t60*t103*t76;
  t108 = 0.05*t60*t71*t107;
  t109 = t104 + t108;
  t112 = t67*t62*t54;
  t113 = t43*t54*t69;
  t114 = t112 + t113;
  t119 = -1.*t51*t67*t62;
  t120 = -1.*t43*t51*t69;
  t121 = t119 + t120;
  t143 = Power(t67,2);
  t144 = Power(t69,2);
  t145 = t143 + t144;
  t128 = 0.45*t60*t76*t127;
  t129 = 0.05*t60*t71*t94;
  t130 = t128 + t129;
  t110 = -1.*t100*t54*t109;
  t111 = 0.25*t62*t54;
  t115 = 0.1875*t114;
  t116 = t111 + t115;
  t117 = 10.*t88*t116;
  t118 = -0.25*t51*t62;
  t122 = 0.1875*t121;
  t123 = t118 + t122;
  t124 = 10.*t123*t96;
  t131 = -1.*t51*t100*t130;
  t132 = -0.5*t100*t54*t103;
  t133 = -0.5*t51*t100*t127;
  t134 = t132 + t133;
  t135 = 0.9*t76*t134;
  t136 = -0.5*t100*t54*t107;
  t137 = -0.5*t51*t100*t94;
  t138 = t136 + t137;
  t139 = 0.1*t71*t138;
  t140 = t135 + t139;
  t141 = t60*t140;
  t142 = 0. + t110 + t117 + t124 + t131 + t141;
  t164 = 0.5*t52*t100;
  t165 = 0.5*t100*t55;
  t166 = t164 + t165;
  t172 = -1.*t43*t67;
  t173 = t62*t69;
  t174 = t172 + t173;
  t171 = -0.25*t43;
  t175 = 0.1875*t174;
  t176 = t171 + t175;
  t181 = -0.9*t54*t166;
  t182 = 0.9*t103*t134;
  t183 = 0.1*t107*t138;
  t184 = t181 + t182 + t183;
  t186 = -0.9*t51*t166;
  t187 = 0.9*t127*t134;
  t188 = 0.1*t94*t138;
  t189 = t186 + t187 + t188;
  t150 = -0.5*t54*t103*t145;
  t151 = -0.5*t51*t127*t145;
  t152 = t150 + t151;
  t154 = -0.5*t54*t107*t145;
  t155 = -0.5*t51*t94*t145;
  t156 = t154 + t155;
  t197 = 0.5*t52*t145;
  t198 = 0.5*t55*t145;
  t199 = t197 + t198;
  t146 = -1.*t54*t145*t109;
  t147 = 1.875*t114*t88;
  t148 = 1.875*t121*t96;
  t149 = -1.*t51*t145*t130;
  t153 = 0.9*t76*t152;
  t157 = 0.1*t71*t156;
  t158 = t153 + t157;
  t159 = t60*t158;
  t160 = t146 + t147 + t148 + t149 + t159;
  t192 = 1.875*t121*t123;
  t193 = 1.875*t174*t176;
  t194 = 1.875*t114*t116;
  t195 = -1.*t54*t145*t184;
  t196 = -1.*t51*t145*t189;
  t200 = -0.9*t54*t199;
  t201 = 0.9*t103*t152;
  t202 = 0.1*t107*t156;
  t203 = t200 + t201 + t202;
  t204 = -1.*t100*t54*t203;
  t205 = -0.9*t51*t199;
  t206 = 0.9*t127*t152;
  t207 = 0.1*t94*t156;
  t208 = t205 + t206 + t207;
  t209 = -1.*t51*t100*t208;
  t210 = t192 + t193 + t194 + t195 + t196 + t204 + t209;
  p_output1[0]=0.078125*t46*t52 + 0.078125*t46*t55 + 2.*t60*(0.45*t46*t60 + 0.05*t60*t63) + 2.*t60*(0.05*t60*Power(t71,2) + 0.45*t60*Power(t76,2)) + 10.*Power(t88,2) + 10.*Power(t96,2);
  p_output1[1]=t142;
  p_output1[2]=t160;
  p_output1[3]=t142;
  p_output1[4]=10.*Power(t116,2) + 10.*Power(t123,2) + 10.*Power(t176,2) + 0.078125*t46 - 2.*t100*t189*t51 + 1.8*t100*t166*t52 - 2.*t100*t184*t54 + 1.8*t100*t166*t55 + 0.078125*t52*t63 + 0.078125*t55*t63;
  p_output1[5]=t210;
  p_output1[6]=t160;
  p_output1[7]=t210;
  p_output1[8]=0.3515625*Power(t114,2) + 0.3515625*Power(t121,2) + 0.3515625*Power(t174,2) - 2.*t145*t208*t51 - 2.*t145*t203*t54;
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
