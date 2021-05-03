/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:03 GMT-04:00
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
  double t600;
  double t611;
  double t607;
  double t619;
  double t630;
  double t631;
  double t632;
  double t634;
  double t638;
  double t649;
  double t650;
  double t654;
  double t673;
  double t675;
  double t676;
  t600 = Cos(var1[1]);
  t611 = Sin(var1[0]);
  t607 = Cos(var1[0]);
  t619 = Sin(var1[1]);
  t630 = Cos(var1[2]);
  t631 = -1.*t600*t630;
  t632 = Sin(var1[2]);
  t634 = t619*t632;
  t638 = t631 + t634;
  t649 = t630*t611*t619;
  t650 = t600*t611*t632;
  t654 = t649 + t650;
  t673 = -1.*t607*t630*t619;
  t675 = -1.*t607*t600*t632;
  t676 = t673 + t675;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=-0.125*t600*var2[1];
  p_output1[4]=-0.125*t600*t607*var2[0] + 0.125*t611*t619*var2[1];
  p_output1[5]=-0.125*t600*t611*var2[0] - 0.125*t607*t619*var2[1];
  p_output1[6]=(-0.25*t600 + 0.1875*t638)*var2[1] + 0.1875*t638*var2[2];
  p_output1[7]=(-0.25*t600*t607 + 0.1875*(-1.*t600*t607*t630 + t607*t619*t632))*var2[0] + (0.25*t611*t619 + 0.1875*t654)*var2[1] + 0.1875*t654*var2[2];
  p_output1[8]=(-0.25*t600*t611 + 0.1875*(-1.*t600*t611*t630 + t611*t619*t632))*var2[0] + (-0.25*t607*t619 + 0.1875*t676)*var2[1] + 0.1875*t676*var2[2];
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

#include "gen3_vO_COM.hh"

namespace SymExpression
{

void gen3_vO_COM_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
