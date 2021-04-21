/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:20 GMT-04:00
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
  double t5;
  double t3;
  double t12;
  double t10;
  double t9;
  double t19;
  double t21;
  double t18;
  t5 = Cos(var1[0]);
  t3 = Sin(var1[0]);
  t12 = Sin(var1[1]);
  t10 = Cos(var1[1]);
  t9 = -1.*t5;
  t19 = Cos(var1[2]);
  t21 = Sin(var1[2]);
  t18 = -1.*t3;
  p_output1[0]=0;
  p_output1[1]=t3;
  p_output1[2]=t9;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t5;
  p_output1[6]=t3;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t10;
  p_output1[17]=-1.*t12*t3;
  p_output1[18]=t12*t5;
  p_output1[19]=0;
  p_output1[20]=-1.*t12;
  p_output1[21]=-1.*t10*t3;
  p_output1[22]=t10*t5;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=t9;
  p_output1[26]=t18;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=1.;
  p_output1[32]=t10*t19 - 1.*t12*t21;
  p_output1[33]=-1.*t12*t19*t3 - 1.*t10*t21*t3;
  p_output1[34]=t12*t19*t5 + t10*t21*t5;
  p_output1[35]=0;
  p_output1[36]=-1.*t12*t19 - 1.*t10*t21;
  p_output1[37]=-1.*t10*t19*t3 + t12*t21*t3;
  p_output1[38]=t10*t19*t5 - 1.*t12*t21*t5;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=t9;
  p_output1[42]=t18;
  p_output1[43]=0;
  p_output1[44]=-0.25*t12;
  p_output1[45]=-0.25*t10*t3;
  p_output1[46]=0.25*t10*t5;
  p_output1[47]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 12, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "gen3_T_World.hh"

namespace SymExpression
{

void gen3_T_World_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
