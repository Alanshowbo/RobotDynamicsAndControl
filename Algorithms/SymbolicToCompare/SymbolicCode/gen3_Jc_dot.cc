/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:25 GMT-04:00
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
  double t1096;
  double t1170;
  double t1172;
  double t1207;
  double t1100;
  double t1176;
  double t1180;
  double t1225;
  double t1226;
  double t1227;
  double t1231;
  double t1232;
  double t1239;
  double t1241;
  double t1243;
  double t1244;
  double t1246;
  double t1245;
  double t1249;
  double t1251;
  double t1253;
  double t1257;
  double t1258;
  double t1315;
  double t1318;
  double t1319;
  double t1342;
  double t1343;
  double t1350;
  double t1278;
  double t1292;
  double t1293;
  double t1263;
  double t1265;
  double t1268;
  double t1273;
  double t1297;
  double t1299;
  double t1332;
  double t1334;
  double t1335;
  double t1321;
  double t1323;
  double t1327;
  double t1330;
  double t1336;
  double t1338;
  double t1351;
  double t1362;
  double t1370;
  t1096 = Cos(var1[0]);
  t1170 = Sin(var1[0]);
  t1172 = -0.01*t1170;
  t1207 = 0.01*t1096;
  t1100 = -0.05*t1096;
  t1176 = t1100 + t1172;
  t1180 = var2[0]*t1176;
  t1225 = -0.05*t1170;
  t1226 = t1207 + t1225;
  t1227 = var2[0]*t1226;
  t1231 = 0.05*t1096;
  t1232 = t1231 + t1172;
  t1239 = var2[0]*t1232;
  t1241 = 0.05*t1170;
  t1243 = t1207 + t1241;
  t1244 = var2[0]*t1243;
  t1246 = Sin(var1[1]);
  t1245 = Cos(var1[2]);
  t1249 = t1096*t1245*t1246;
  t1251 = Cos(var1[1]);
  t1253 = Sin(var1[2]);
  t1257 = t1096*t1251*t1253;
  t1258 = t1249 + t1257;
  t1315 = t1245*t1170*t1246;
  t1318 = t1251*t1170*t1253;
  t1319 = t1315 + t1318;
  t1342 = t1245*t1246;
  t1343 = t1251*t1253;
  t1350 = t1342 + t1343;
  t1278 = t1251*t1245*t1170;
  t1292 = -1.*t1170*t1246*t1253;
  t1293 = t1278 + t1292;
  t1263 = 0.25*t1096*t1246;
  t1265 = 0.25*t1258;
  t1268 = t1263 + t1265;
  t1273 = 0.25*t1251*t1170;
  t1297 = 0.25*t1293;
  t1299 = t1273 + t1297;
  t1332 = -1.*t1096*t1251*t1245;
  t1334 = t1096*t1246*t1253;
  t1335 = t1332 + t1334;
  t1321 = 0.25*t1170*t1246;
  t1323 = 0.25*t1319;
  t1327 = t1321 + t1323;
  t1330 = -0.25*t1096*t1251;
  t1336 = 0.25*t1335;
  t1338 = t1330 + t1336;
  t1351 = 0.25*var2[2]*t1350;
  t1362 = 0.25*var2[2]*t1293;
  t1370 = 0.25*var2[2]*t1335;
  p_output1[0]=0;
  p_output1[1]=t1180;
  p_output1[2]=t1227;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=t1239;
  p_output1[11]=t1244;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=t1180;
  p_output1[20]=t1227;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t1239;
  p_output1[29]=t1244;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=t1299*var2[0] + t1268*var2[1] + 0.25*t1258*var2[2];
  p_output1[38]=t1338*var2[0] + t1327*var2[1] + 0.25*t1319*var2[2];
  p_output1[39]=t1351 + (0.25*t1246 + 0.25*t1350)*var2[1];
  p_output1[40]=t1362 + t1268*var2[0] + t1299*var2[1];
  p_output1[41]=t1370 + t1327*var2[0] + t1338*var2[1];
  p_output1[42]=t1351 + 0.25*t1350*var2[1];
  p_output1[43]=t1362 + 0.25*t1258*var2[0] + 0.25*t1293*var2[1];
  p_output1[44]=t1370 + 0.25*t1319*var2[0] + 0.25*t1335*var2[1];
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
