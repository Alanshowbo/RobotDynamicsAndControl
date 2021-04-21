/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:47 GMT-04:00
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
  double t370;
  double t443;
  double t448;
  double t478;
  double t416;
  double t450;
  double t454;
  double t493;
  double t494;
  double t495;
  double t499;
  double t500;
  double t507;
  double t509;
  double t511;
  double t512;
  double t514;
  double t513;
  double t519;
  double t520;
  double t524;
  double t525;
  double t526;
  double t583;
  double t586;
  double t587;
  double t610;
  double t611;
  double t618;
  double t546;
  double t560;
  double t561;
  double t531;
  double t533;
  double t536;
  double t541;
  double t565;
  double t567;
  double t592;
  double t596;
  double t597;
  double t589;
  double t598;
  double t600;
  double t603;
  double t604;
  double t606;
  double t619;
  double t630;
  double t638;
  t370 = Cos(var1[0]);
  t443 = Sin(var1[0]);
  t448 = -0.01*t443;
  t478 = 0.01*t370;
  t416 = -0.05*t370;
  t450 = t416 + t448;
  t454 = var2[0]*t450;
  t493 = -0.05*t443;
  t494 = t478 + t493;
  t495 = var2[0]*t494;
  t499 = 0.05*t370;
  t500 = t499 + t448;
  t507 = var2[0]*t500;
  t509 = 0.05*t443;
  t511 = t478 + t509;
  t512 = var2[0]*t511;
  t514 = Sin(var1[1]);
  t513 = Cos(var1[2]);
  t519 = t370*t513*t514;
  t520 = Cos(var1[1]);
  t524 = Sin(var1[2]);
  t525 = t520*t370*t524;
  t526 = t519 + t525;
  t583 = t513*t514*t443;
  t586 = t520*t443*t524;
  t587 = t583 + t586;
  t610 = t513*t514;
  t611 = t520*t524;
  t618 = t610 + t611;
  t546 = t520*t513*t443;
  t560 = -1.*t514*t443*t524;
  t561 = t546 + t560;
  t531 = 0.25*t370*t514;
  t533 = 0.25*t526;
  t536 = t531 + t533;
  t541 = 0.25*t520*t443;
  t565 = 0.25*t561;
  t567 = t541 + t565;
  t592 = -1.*t520*t370*t513;
  t596 = t370*t514*t524;
  t597 = t592 + t596;
  t589 = -0.25*t520*t370;
  t598 = 0.25*t597;
  t600 = t589 + t598;
  t603 = 0.25*t514*t443;
  t604 = 0.25*t587;
  t606 = t603 + t604;
  t619 = 0.25*var2[2]*t618;
  t630 = 0.25*var2[2]*t561;
  t638 = 0.25*var2[2]*t597;
  p_output1[0]=0;
  p_output1[1]=t454;
  p_output1[2]=t495;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=t507;
  p_output1[11]=t512;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=t454;
  p_output1[20]=t495;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t507;
  p_output1[29]=t512;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=t567*var2[0] + t536*var2[1] + 0.25*t526*var2[2];
  p_output1[38]=t600*var2[0] + t606*var2[1] + 0.25*t587*var2[2];
  p_output1[39]=t619 + (0.25*t514 + 0.25*t618)*var2[1];
  p_output1[40]=t630 + t536*var2[0] + t567*var2[1];
  p_output1[41]=t638 + t606*var2[0] + t600*var2[1];
  p_output1[42]=t619 + 0.25*t618*var2[1];
  p_output1[43]=t630 + 0.25*t526*var2[0] + 0.25*t561*var2[1];
  p_output1[44]=t638 + 0.25*t587*var2[0] + 0.25*t597*var2[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 15, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "gen3_Jc_dot.hh"

namespace SymExpression
{

void gen3_Jc_dot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
