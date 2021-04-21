/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:40 GMT-04:00
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
  double t170;
  double t240;
  double t252;
  double t265;
  double t185;
  double t261;
  double t268;
  double t269;
  double t271;
  double t276;
  double t277;
  double t308;
  double t320;
  double t336;
  double t323;
  double t351;
  t170 = Cos(var1[0]);
  t240 = Sin(var1[0]);
  t252 = 0.01*t240;
  t265 = -0.01*t170;
  t185 = 0.05*t170;
  t261 = 0. + t185 + t252;
  t268 = 0.05*t240;
  t269 = 0. + t265 + t268;
  t271 = -0.05*t170;
  t276 = 0. + t271 + t252;
  t277 = -0.05*t240;
  t308 = 0. + t265 + t277;
  t320 = Sin(var1[1]);
  t336 = Cos(var1[1]);
  t323 = Cos(var1[2]);
  t351 = Sin(var1[2]);
  p_output1[0]=0.1;
  p_output1[1]=t261;
  p_output1[2]=t269;
  p_output1[3]=0.1;
  p_output1[4]=t276;
  p_output1[5]=t308;
  p_output1[6]=-0.05;
  p_output1[7]=t261;
  p_output1[8]=t269;
  p_output1[9]=-0.05;
  p_output1[10]=t276;
  p_output1[11]=t308;
  p_output1[12]=0. - 0.25*t320 + 0.25*(-1.*t320*t323 - 1.*t336*t351);
  p_output1[13]=0. - 0.25*t240*t336 + 0.25*(-1.*t240*t323*t336 + t240*t320*t351);
  p_output1[14]=0. + 0.25*t170*t336 + 0.25*(t170*t323*t336 - 1.*t170*t320*t351);
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

#include "gen3_Pc.hh"

namespace SymExpression
{

void gen3_Pc_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
