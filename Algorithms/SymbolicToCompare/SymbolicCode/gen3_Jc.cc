/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:44 GMT-04:00
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
  double t269;
  double t277;
  double t276;
  double t370;
  double t308;
  double t335;
  double t364;
  double t372;
  double t376;
  double t378;
  double t385;
  double t386;
  double t405;
  double t435;
  double t439;
  double t441;
  double t480;
  double t485;
  double t491;
  double t492;
  double t495;
  double t496;
  double t497;
  double t498;
  double t501;
  double t504;
  double t507;
  double t508;
  t269 = Cos(var1[0]);
  t277 = Sin(var1[0]);
  t276 = 0.01*t269;
  t370 = 0.01*t277;
  t308 = -0.05*t277;
  t335 = t276 + t308;
  t364 = 0.05*t269;
  t372 = t364 + t370;
  t376 = 0.05*t277;
  t378 = t276 + t376;
  t385 = -0.05*t269;
  t386 = t385 + t370;
  t405 = Cos(var1[1]);
  t435 = Cos(var1[2]);
  t439 = Sin(var1[1]);
  t441 = Sin(var1[2]);
  t480 = -1.*t405*t435;
  t485 = t439*t441;
  t491 = t480 + t485;
  t492 = 0.25*t491;
  t495 = t435*t439*t277;
  t496 = t405*t277*t441;
  t497 = t495 + t496;
  t498 = 0.25*t497;
  t501 = -1.*t269*t435*t439;
  t504 = -1.*t405*t269*t441;
  t507 = t501 + t504;
  t508 = 0.25*t507;
  p_output1[0]=0;
  p_output1[1]=t335;
  p_output1[2]=t372;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=t378;
  p_output1[11]=t386;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=t335;
  p_output1[20]=t372;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t378;
  p_output1[29]=t386;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=-0.25*t269*t405 + 0.25*(-1.*t269*t405*t435 + t269*t439*t441);
  p_output1[38]=-0.25*t277*t405 + 0.25*(-1.*t277*t405*t435 + t277*t439*t441);
  p_output1[39]=-0.25*t405 + t492;
  p_output1[40]=0.25*t277*t439 + t498;
  p_output1[41]=-0.25*t269*t439 + t508;
  p_output1[42]=t492;
  p_output1[43]=t498;
  p_output1[44]=t508;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 15, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "gen3_Jc.hh"

namespace SymExpression
{

void gen3_Jc_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
