/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:10 GMT-04:00
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
  double t641;
  double t647;
  double t658;
  double t664;
  double t668;
  double t671;
  double t676;
  double t716;
  double t717;
  double t718;
  double t726;
  double t764;
  double t805;
  double t806;
  double t809;
  t641 = Cos(var1[1]);
  t647 = Cos(var1[2]);
  t658 = -1.*t641*t647;
  t664 = Sin(var1[1]);
  t668 = Sin(var1[2]);
  t671 = t664*t668;
  t676 = t658 + t671;
  t716 = Sin(var1[0]);
  t717 = t647*t716*t664;
  t718 = t641*t716*t668;
  t726 = t717 + t718;
  t764 = Cos(var1[0]);
  t805 = -1.*t764*t647*t664;
  t806 = -1.*t764*t641*t668;
  t809 = t805 + t806;
  p_output1[0]=0.0666666666666667*(-0.625*t641 + 10.*(-0.25*t641 + 0.1875*t676))*var2[1] + 0.125*t676*var2[2];
  p_output1[1]=0.0666666666666667*(-0.625*t641*t764 + 10.*(-0.25*t641*t764 + 0.1875*(-1.*t641*t647*t764 + t664*t668*t764)))*var2[0] + 0.0666666666666667*(0.625*t664*t716 + 10.*(0.25*t664*t716 + 0.1875*t726))*var2[1] + 0.125*t726*var2[2];
  p_output1[2]=0.0666666666666667*(-0.625*t641*t716 + 10.*(-0.25*t641*t716 + 0.1875*(-1.*t641*t647*t716 + t664*t668*t716)))*var2[0] + 0.0666666666666667*(-0.625*t664*t764 + 10.*(-0.25*t664*t764 + 0.1875*t809))*var2[1] + 0.125*t809*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "gen3_vCOM_Tot.hh"

namespace SymExpression
{

void gen3_vCOM_Tot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
