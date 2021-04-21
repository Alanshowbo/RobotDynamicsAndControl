/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:33 GMT-04:00
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
  double t63;
  double t65;
  double t73;
  double t77;
  double t78;
  double t81;
  double t85;
  double t102;
  double t115;
  double t105;
  double t107;
  double t108;
  double t155;
  double t156;
  double t158;
  t63 = Cos(var1[1]);
  t65 = Cos(var1[2]);
  t73 = -1.*t63*t65;
  t77 = Sin(var1[1]);
  t78 = Sin(var1[2]);
  t81 = t77*t78;
  t85 = t73 + t81;
  t102 = Sin(var1[0]);
  t115 = Cos(var1[0]);
  t105 = t65*t77*t102;
  t107 = t63*t102*t78;
  t108 = t105 + t107;
  t155 = -1.*t115*t65*t77;
  t156 = -1.*t63*t115*t78;
  t158 = t155 + t156;
  p_output1[0]=0.0666666666666667*(-0.625*t63 + 10.*(-0.25*t63 + 0.1875*t85))*var2[1] + 0.125*t85*var2[2];
  p_output1[1]=0.0666666666666667*(-0.625*t115*t63 + 10.*(-0.25*t115*t63 + 0.1875*(-1.*t115*t63*t65 + t115*t77*t78)))*var2[0] + 0.0666666666666667*(0.625*t102*t77 + 10.*(0.1875*t108 + 0.25*t102*t77))*var2[1] + 0.125*t108*var2[2];
  p_output1[2]=0.0666666666666667*(-0.625*t102*t63 + 10.*(-0.25*t102*t63 + 0.1875*(-1.*t102*t63*t65 + t102*t77*t78)))*var2[0] + 0.0666666666666667*(-0.625*t115*t77 + 10.*(0.1875*t158 - 0.25*t115*t77))*var2[1] + 0.125*t158*var2[2];
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
