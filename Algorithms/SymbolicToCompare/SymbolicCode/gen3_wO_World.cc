/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:00 GMT-04:00
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
  double t507;
  double t509;
  double t511;
  double t512;
  double t519;
  double t527;
  double t533;
  double t536;
  double t537;
  double t541;
  double t546;
  double t561;
  double t565;
  double t567;
  double t579;
  double t582;
  double t583;
  double t586;
  double t587;
  double t588;
  double t589;
  double t596;
  double t597;
  t507 = Cos(var1[0]);
  t509 = Power(t507,2);
  t511 = var2[0]*t509;
  t512 = Sin(var1[0]);
  t519 = Power(t512,2);
  t527 = var2[0]*t519;
  t533 = t511 + t527;
  t536 = Cos(var1[1]);
  t537 = Power(t536,2);
  t541 = var2[1]*t537;
  t546 = Sin(var1[1]);
  t561 = Power(t546,2);
  t565 = var2[1]*t561;
  t567 = t541 + t565;
  t579 = -1.*t507*t567;
  t582 = -1.*t512*t567;
  t583 = Cos(var1[2]);
  t586 = Power(t583,2);
  t587 = var2[2]*t586;
  t588 = Sin(var1[2]);
  t589 = Power(t588,2);
  t596 = var2[2]*t589;
  t597 = t587 + t596;
  p_output1[0]=t533;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=t533;
  p_output1[4]=t579;
  p_output1[5]=t582;
  p_output1[6]=t533;
  p_output1[7]=t579 - 1.*t507*t597;
  p_output1[8]=t582 - 1.*t512*t597;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "gen3_wO_World.hh"

namespace SymExpression
{

void gen3_wO_World_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
