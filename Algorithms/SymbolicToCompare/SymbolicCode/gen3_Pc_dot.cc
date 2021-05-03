/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:19 GMT-04:00
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
  double t951;
  double t976;
  double t965;
  double t1025;
  double t980;
  double t982;
  double t986;
  double t987;
  double t1053;
  double t1087;
  double t1096;
  double t1097;
  double t1100;
  double t1102;
  double t1109;
  double t1110;
  double t1116;
  double t1120;
  double t1123;
  double t1124;
  double t1134;
  double t1142;
  double t1147;
  double t1172;
  double t1173;
  double t1174;
  double t1216;
  double t1217;
  double t1223;
  t951 = Cos(var1[0]);
  t976 = Sin(var1[0]);
  t965 = 0.01*t951;
  t1025 = 0.01*t976;
  t980 = -0.05*t976;
  t982 = t965 + t980;
  t986 = var2[0]*t982;
  t987 = 0.05*t951;
  t1053 = t987 + t1025;
  t1087 = var2[0]*t1053;
  t1096 = 0.05*t976;
  t1097 = t965 + t1096;
  t1100 = var2[0]*t1097;
  t1102 = -0.05*t951;
  t1109 = t1102 + t1025;
  t1110 = var2[0]*t1109;
  t1116 = Cos(var1[1]);
  t1120 = Cos(var1[2]);
  t1123 = -1.*t1116*t1120;
  t1124 = Sin(var1[1]);
  t1134 = Sin(var1[2]);
  t1142 = t1124*t1134;
  t1147 = t1123 + t1142;
  t1172 = t1120*t976*t1124;
  t1173 = t1116*t976*t1134;
  t1174 = t1172 + t1173;
  t1216 = -1.*t951*t1120*t1124;
  t1217 = -1.*t951*t1116*t1134;
  t1223 = t1216 + t1217;
  p_output1[0]=0;
  p_output1[1]=t986;
  p_output1[2]=t1087;
  p_output1[3]=0;
  p_output1[4]=t1100;
  p_output1[5]=t1110;
  p_output1[6]=0;
  p_output1[7]=t986;
  p_output1[8]=t1087;
  p_output1[9]=0;
  p_output1[10]=t1100;
  p_output1[11]=t1110;
  p_output1[12]=(-0.25*t1116 + 0.25*t1147)*var2[1] + 0.25*t1147*var2[2];
  p_output1[13]=(-0.25*t1116*t951 + 0.25*(-1.*t1116*t1120*t951 + t1124*t1134*t951))*var2[0] + (0.25*t1174 + 0.25*t1124*t976)*var2[1] + 0.25*t1174*var2[2];
  p_output1[14]=(-0.25*t1116*t976 + 0.25*(-1.*t1116*t1120*t976 + t1124*t1134*t976))*var2[0] + (0.25*t1223 - 0.25*t1124*t951)*var2[1] + 0.25*t1223*var2[2];
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
