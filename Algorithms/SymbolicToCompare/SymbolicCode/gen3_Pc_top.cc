/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:18 GMT-04:00
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
  double t870;
  double t973;
  double t951;
  double t965;
  double t976;
  double t980;
  double t982;
  double t986;
  double t987;
  double t1025;
  double t1038;
  double t1089;
  double t1084;
  double t1093;
  t870 = Cos(var1[0]);
  t973 = Sin(var1[0]);
  t951 = 0.05*t870;
  t965 = 0. + t951;
  t976 = 0.05*t973;
  t980 = 0. + t976;
  t982 = -0.05*t870;
  t986 = 0. + t982;
  t987 = -0.05*t973;
  t1025 = 0. + t987;
  t1038 = Sin(var1[1]);
  t1089 = Cos(var1[1]);
  t1084 = Cos(var1[2]);
  t1093 = Sin(var1[2]);
  p_output1[0]=0.1;
  p_output1[1]=t965;
  p_output1[2]=t980;
  p_output1[3]=0.1;
  p_output1[4]=t986;
  p_output1[5]=t1025;
  p_output1[6]=-0.05;
  p_output1[7]=t965;
  p_output1[8]=t980;
  p_output1[9]=-0.05;
  p_output1[10]=t986;
  p_output1[11]=t1025;
  p_output1[12]=0. - 0.25*t1038 + 0.25*(-1.*t1038*t1084 - 1.*t1089*t1093);
  p_output1[13]=0. - 0.25*t1089*t973 + 0.25*(-1.*t1084*t1089*t973 + t1038*t1093*t973);
  p_output1[14]=0. + 0.25*t1089*t870 + 0.25*(t1084*t1089*t870 - 1.*t1038*t1093*t870);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 5, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "gen3_Pc_top.hh"

namespace SymExpression
{

void gen3_Pc_top_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
