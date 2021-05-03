/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:15 GMT-04:00
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
  double t803;
  double t828;
  double t870;
  double t929;
  double t936;
  double t951;
  double t962;
  double t964;
  double t970;
  double t1004;
  double t1033;
  double t976;
  double t980;
  double t982;
  double t986;
  double t1096;
  double t1097;
  double t1099;
  double t1116;
  double t1120;
  double t1121;
  t803 = Cos(var1[0]);
  t828 = Power(t803,2);
  t870 = var2[0]*t828;
  t929 = Sin(var1[0]);
  t936 = Power(t929,2);
  t951 = var2[0]*t936;
  t962 = t870 + t951;
  t964 = Cos(var1[1]);
  t970 = Sin(var1[1]);
  t1004 = Cos(var1[2]);
  t1033 = Sin(var1[2]);
  t976 = Power(t964,2);
  t980 = var2[1]*t976;
  t982 = Power(t970,2);
  t986 = var2[1]*t982;
  t1096 = -0.25*var2[0]*t964*t929;
  t1097 = -0.25*var2[1]*t803*t970;
  t1099 = t1096 + t1097;
  t1116 = -0.25*var2[0]*t803*t964;
  t1120 = 0.25*var2[1]*t929*t970;
  t1121 = t1116 + t1120;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=t962;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t962*t964;
  p_output1[7]=-1.*t962*t970;
  p_output1[8]=t980 + t986;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1004*t962*t964 - 1.*t1033*t962*t970;
  p_output1[13]=-1.*t1033*t962*t964 - 1.*t1004*t962*t970;
  p_output1[14]=t980 + t986 + Power(t1004,2)*var2[2] + Power(t1033,2)*var2[2];
  p_output1[15]=t1099*(t1033*t803*t964 + t1004*t803*t970) + t1121*(-1.*t1033*t929*t964 - 1.*t1004*t929*t970) - 0.25*t964*(t1004*t964 - 1.*t1033*t970)*var2[1];
  p_output1[16]=t1099*(t1004*t803*t964 - 1.*t1033*t803*t970) + t1121*(-1.*t1004*t929*t964 + t1033*t929*t970) - 0.25*t964*(-1.*t1033*t964 - 1.*t1004*t970)*var2[1];
  p_output1[17]=0. - 1.*t1121*t803 - 1.*t1099*t929;
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
