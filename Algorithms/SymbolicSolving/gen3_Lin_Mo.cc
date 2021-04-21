/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 09:10:19 GMT-05:00
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
  double t108;
  double t116;
  double t119;
  double t121;
  double t171;
  double t174;
  double t178;
  double t179;
  double t180;
  double t199;
  double t200;
  double t202;
  double t249;
  double t254;
  double t255;
  t108 = Cos(var1[1]);
  t116 = Cos(var1[0]);
  t119 = Sin(var1[1]);
  t121 = Sin(var1[0]);
  t171 = Cos(var1[2]);
  t174 = -1.*t108*t171;
  t178 = Sin(var1[2]);
  t179 = t119*t178;
  t180 = t174 + t179;
  t199 = t171*t119*t121;
  t200 = t108*t121*t178;
  t202 = t199 + t200;
  t249 = -1.*t116*t171*t119;
  t254 = -1.*t108*t116*t178;
  t255 = t249 + t254;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=-0.625*t108*var2[1];
  p_output1[4]=5.*(-0.125*t108*t116*var2[0] + 0.125*t119*t121*var2[1]);
  p_output1[5]=5.*(-0.125*t108*t121*var2[0] - 0.125*t116*t119*var2[1]);
  p_output1[6]=10.*((-0.25*t108 + 0.1875*t180)*var2[1] + 0.1875*t180*var2[2]);
  p_output1[7]=10.*((-0.25*t108*t116 + 0.1875*(-1.*t108*t116*t171 + t116*t119*t178))*var2[0] + (0.25*t119*t121 + 0.1875*t202)*var2[1] + 0.1875*t202*var2[2]);
  p_output1[8]=10.*((-0.25*t108*t121 + 0.1875*(-1.*t108*t121*t171 + t119*t121*t178))*var2[0] + (-0.25*t116*t119 + 0.1875*t255)*var2[1] + 0.1875*t255*var2[2]);
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

#include "gen3_Lin_Mo.hh"

namespace SymExpression
{

void gen3_Lin_Mo_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
