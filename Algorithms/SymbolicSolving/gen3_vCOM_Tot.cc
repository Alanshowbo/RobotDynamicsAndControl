/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 09:10:18 GMT-05:00
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
  double t71;
  double t73;
  double t80;
  double t98;
  double t101;
  double t108;
  double t109;
  double t167;
  double t176;
  double t169;
  double t170;
  double t171;
  double t215;
  double t216;
  double t218;
  t71 = Cos(var1[1]);
  t73 = Cos(var1[2]);
  t80 = -1.*t71*t73;
  t98 = Sin(var1[1]);
  t101 = Sin(var1[2]);
  t108 = t98*t101;
  t109 = t80 + t108;
  t167 = Sin(var1[0]);
  t176 = Cos(var1[0]);
  t169 = t73*t98*t167;
  t170 = t71*t167*t101;
  t171 = t169 + t170;
  t215 = -1.*t176*t73*t98;
  t216 = -1.*t71*t176*t101;
  t218 = t215 + t216;
  p_output1[0]=0.0666666666666667*(10.*(0.1875*t109 - 0.25*t71) - 0.625*t71)*var2[1] + 0.125*t109*var2[2];
  p_output1[1]=0.0666666666666667*(-0.625*t176*t71 + 10.*(-0.25*t176*t71 + 0.1875*(-1.*t176*t71*t73 + t101*t176*t98)))*var2[0] + 0.0666666666666667*(0.625*t167*t98 + 10.*(0.1875*t171 + 0.25*t167*t98))*var2[1] + 0.125*t171*var2[2];
  p_output1[2]=0.0666666666666667*(-0.625*t167*t71 + 10.*(-0.25*t167*t71 + 0.1875*(-1.*t167*t71*t73 + t101*t167*t98)))*var2[0] + 0.0666666666666667*(-0.625*t176*t98 + 10.*(0.1875*t218 - 0.25*t176*t98))*var2[1] + 0.125*t218*var2[2];
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
