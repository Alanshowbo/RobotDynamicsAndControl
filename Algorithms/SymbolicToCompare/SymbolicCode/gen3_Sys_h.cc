/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:14 GMT-04:00
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
  double t800;
  double t803;
  double t828;
  double t857;
  double t870;
  double t929;
  double t932;
  double t694;
  double t954;
  double t965;
  double t970;
  double t973;
  double t976;
  double t980;
  double t1023;
  double t1025;
  double t1026;
  double t1030;
  double t1033;
  double t1038;
  double t1040;
  double t1041;
  double t1053;
  double t1054;
  double t1062;
  double t1099;
  double t1100;
  double t1102;
  double t1109;
  double t1110;
  double t1120;
  double t1121;
  double t1123;
  double t1124;
  double t1130;
  double t1131;
  double t1134;
  double t1142;
  double t1147;
  double t1148;
  double t1161;
  double t1163;
  double t1165;
  double t1166;
  double t1047;
  double t1065;
  double t1071;
  double t1075;
  t800 = Cos(var1[0]);
  t803 = Power(t800,2);
  t828 = var2[0]*t803;
  t857 = Sin(var1[0]);
  t870 = Power(t857,2);
  t929 = var2[0]*t870;
  t932 = t828 + t929;
  t694 = Cos(var1[1]);
  t954 = Sin(var1[1]);
  t965 = Power(t694,2);
  t970 = var2[1]*t965;
  t973 = Power(t954,2);
  t976 = var2[1]*t973;
  t980 = t970 + t976;
  t1023 = Cos(var1[2]);
  t1025 = t694*t1023*t932;
  t1026 = Sin(var1[2]);
  t1030 = -1.*t932*t954*t1026;
  t1033 = t1025 + t1030;
  t1038 = -0.25*var2[0]*t694*t857;
  t1040 = -0.25*var2[1]*t800*t954;
  t1041 = t1038 + t1040;
  t1053 = -0.25*var2[0]*t800*t694;
  t1054 = 0.25*var2[1]*t857*t954;
  t1062 = t1053 + t1054;
  t1099 = Power(t1023,2);
  t1100 = var2[2]*t1099;
  t1102 = Power(t1026,2);
  t1109 = var2[2]*t1102;
  t1110 = t970 + t1100 + t976 + t1109;
  t1120 = t800*t1023*t954;
  t1121 = t800*t694*t1026;
  t1123 = t1120 + t1121;
  t1124 = t1041*t1123;
  t1130 = -1.*t1023*t857*t954;
  t1131 = -1.*t694*t857*t1026;
  t1134 = t1130 + t1131;
  t1142 = t1062*t1134;
  t1147 = t694*t1023;
  t1148 = -1.*t954*t1026;
  t1161 = t1147 + t1148;
  t1163 = -0.25*var2[1]*t694*t1161;
  t1165 = -0.1875*t1110;
  t1166 = t1124 + t1142 + t1163 + t1165;
  t1047 = -1.*t857*t1041;
  t1065 = -1.*t800*t1062;
  t1071 = 0.1875*t1033;
  t1075 = 0. + t1047 + t1065 + t1071;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + 0.978125*t694*t932;
  p_output1[7]=0. - 0.1*t932*t954;
  p_output1[8]=0. + 0.978125*t980;
  p_output1[9]=-0.625*t980;
  p_output1[10]=0;
  p_output1[11]=0.625*t694*t932;
  p_output1[12]=0.9*t1033 + 1.875*t1075;
  p_output1[13]=0.1*(-1.*t1026*t694*t932 - 1.*t1023*t932*t954);
  p_output1[14]=0.9*t1110 - 1.875*t1166;
  p_output1[15]=10.*t1166;
  p_output1[16]=10.*(t1041*(t1023*t694*t800 - 1.*t1026*t800*t954) + t1062*(-1.*t1023*t694*t857 + t1026*t857*t954) - 0.25*t694*(-1.*t1026*t694 - 1.*t1023*t954)*var2[1]);
  p_output1[17]=10.*t1075;
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
