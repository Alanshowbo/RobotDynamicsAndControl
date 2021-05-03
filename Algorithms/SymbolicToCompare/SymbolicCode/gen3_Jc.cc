/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:21 GMT-04:00
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
  double t980;
  double t987;
  double t986;
  double t1096;
  double t1025;
  double t1053;
  double t1087;
  double t1097;
  double t1100;
  double t1102;
  double t1109;
  double t1110;
  double t1142;
  double t1161;
  double t1165;
  double t1167;
  double t1210;
  double t1215;
  double t1223;
  double t1224;
  double t1227;
  double t1228;
  double t1229;
  double t1230;
  double t1233;
  double t1236;
  double t1239;
  double t1240;
  t980 = Cos(var1[0]);
  t987 = Sin(var1[0]);
  t986 = 0.01*t980;
  t1096 = 0.01*t987;
  t1025 = -0.05*t987;
  t1053 = t986 + t1025;
  t1087 = 0.05*t980;
  t1097 = t1087 + t1096;
  t1100 = 0.05*t987;
  t1102 = t986 + t1100;
  t1109 = -0.05*t980;
  t1110 = t1109 + t1096;
  t1142 = Cos(var1[1]);
  t1161 = Cos(var1[2]);
  t1165 = Sin(var1[1]);
  t1167 = Sin(var1[2]);
  t1210 = -1.*t1142*t1161;
  t1215 = t1165*t1167;
  t1223 = t1210 + t1215;
  t1224 = 0.25*t1223;
  t1227 = t1161*t987*t1165;
  t1228 = t1142*t987*t1167;
  t1229 = t1227 + t1228;
  t1230 = 0.25*t1229;
  t1233 = -1.*t980*t1161*t1165;
  t1236 = -1.*t980*t1142*t1167;
  t1239 = t1233 + t1236;
  t1240 = 0.25*t1239;
  p_output1[0]=0;
  p_output1[1]=t1053;
  p_output1[2]=t1097;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=t1102;
  p_output1[11]=t1110;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=t1053;
  p_output1[20]=t1097;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t1102;
  p_output1[29]=t1110;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=-0.25*t1142*t980 + 0.25*(-1.*t1142*t1161*t980 + t1165*t1167*t980);
  p_output1[38]=-0.25*t1142*t987 + 0.25*(-1.*t1142*t1161*t987 + t1165*t1167*t987);
  p_output1[39]=-0.25*t1142 + t1224;
  p_output1[40]=t1230 + 0.25*t1165*t987;
  p_output1[41]=t1240 - 0.25*t1165*t980;
  p_output1[42]=t1224;
  p_output1[43]=t1230;
  p_output1[44]=t1240;
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
