/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:20 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t965;
  double t982;
  double t1053;
  double t980;
  double t986;
  double t987;
  double t1110;
  double t1096;
  double t1087;
  double t1142;
  double t1169;
  double t1170;
  double t1025;
  double t1097;
  double t1100;
  double t1102;
  double t1109;
  double t1147;
  double t1161;
  double t1163;
  double t1165;
  double t1167;
  double t1172;
  double t1173;
  double t1174;
  double t1176;
  double t1179;
  double t1180;
  double t1192;
  double t1194;
  double t1186;
  double t1203;
  double t1210;
  double t1215;
  double t1223;
  double t1193;
  double t1204;
  double t1207;
  double t1225;
  double t1243;
  double t1244;
  double t1245;
  double t1275;
  double t1276;
  double t1278;
  double t1268;
  double t1269;
  double t1273;
  double t1284;
  double t1291;
  double t1292;
  double t1293;
  double t1297;
  double t1298;
  double t1299;
  double t1312;
  double t1313;
  double t1314;
  double t1256;
  double t1257;
  double t1258;
  double t1247;
  double t1249;
  double t1251;
  double t1253;
  double t1259;
  double t1263;
  double t1323;
  t965 = Cos(var1[0]);
  t982 = Sin(var1[0]);
  t1053 = Power(var2[0],2);
  t980 = 0.01*t965;
  t986 = -0.05*t982;
  t987 = t980 + t986;
  t1110 = 0.05*t965;
  t1096 = -0.01*t982;
  t1087 = -0.05*t965;
  t1142 = 0.01*t982;
  t1169 = 0.05*t982;
  t1170 = t980 + t1169;
  t1025 = var3[0]*t987;
  t1097 = t1087 + t1096;
  t1100 = t1053*t1097;
  t1102 = t1025 + t1100;
  t1109 = t1053*t987;
  t1147 = t1110 + t1142;
  t1161 = var3[0]*t1147;
  t1163 = t1109 + t1161;
  t1165 = t1110 + t1096;
  t1167 = t1053*t1165;
  t1172 = var3[0]*t1170;
  t1173 = t1167 + t1172;
  t1174 = t1087 + t1142;
  t1176 = var3[0]*t1174;
  t1179 = t1053*t1170;
  t1180 = t1176 + t1179;
  t1192 = Cos(var1[2]);
  t1194 = Sin(var1[1]);
  t1186 = Cos(var1[1]);
  t1203 = Sin(var1[2]);
  t1210 = t1192*t1194;
  t1215 = t1186*t1203;
  t1223 = t1210 + t1215;
  t1193 = -1.*t1186*t1192;
  t1204 = t1194*t1203;
  t1207 = t1193 + t1204;
  t1225 = 0.25*var2[2]*t1223;
  t1243 = t1192*t982*t1194;
  t1244 = t1186*t982*t1203;
  t1245 = t1243 + t1244;
  t1275 = t1186*t1192*t982;
  t1276 = -1.*t982*t1194*t1203;
  t1278 = t1275 + t1276;
  t1268 = t965*t1192*t1194;
  t1269 = t965*t1186*t1203;
  t1273 = t1268 + t1269;
  t1284 = 0.25*var2[2]*t1278;
  t1291 = 0.25*t965*t1194;
  t1292 = 0.25*t1273;
  t1293 = t1291 + t1292;
  t1297 = 0.25*t1186*t982;
  t1298 = 0.25*t1278;
  t1299 = t1297 + t1298;
  t1312 = -1.*t965*t1192*t1194;
  t1313 = -1.*t965*t1186*t1203;
  t1314 = t1312 + t1313;
  t1256 = -1.*t965*t1186*t1192;
  t1257 = t965*t1194*t1203;
  t1258 = t1256 + t1257;
  t1247 = 0.25*t982*t1194;
  t1249 = 0.25*t1245;
  t1251 = t1247 + t1249;
  t1253 = -0.25*t965*t1186;
  t1259 = 0.25*t1258;
  t1263 = t1253 + t1259;
  t1323 = 0.25*var2[2]*t1258;
  p_output1[0]=0;
  p_output1[1]=t1102;
  p_output1[2]=t1163;
  p_output1[3]=0;
  p_output1[4]=t1173;
  p_output1[5]=t1180;
  p_output1[6]=0;
  p_output1[7]=t1102;
  p_output1[8]=t1163;
  p_output1[9]=0;
  p_output1[10]=t1173;
  p_output1[11]=t1180;
  p_output1[12]=var2[1]*(t1225 + (0.25*t1194 + 0.25*t1223)*var2[1]) + (t1225 + 0.25*t1223*var2[1])*var2[2] + (-0.25*t1186 + 0.25*t1207)*var3[1] + 0.25*t1207*var3[2];
  p_output1[13]=var2[1]*(t1284 + t1293*var2[0] + t1299*var2[1]) + (t1284 + 0.25*t1273*var2[0] + 0.25*t1278*var2[1])*var2[2] + var2[0]*(t1299*var2[0] + t1293*var2[1] + 0.25*t1273*var2[2]) + t1263*var3[0] + t1251*var3[1] + 0.25*t1245*var3[2];
  p_output1[14]=var2[1]*(t1323 + t1251*var2[0] + t1263*var2[1]) + (t1323 + 0.25*t1245*var2[0] + 0.25*t1258*var2[1])*var2[2] + var2[0]*(t1263*var2[0] + t1251*var2[1] + 0.25*t1245*var2[2]) + (-0.25*t1186*t982 + 0.25*(-1.*t1186*t1192*t982 + t1194*t1203*t982))*var3[0] + (0.25*t1314 - 0.25*t1194*t965)*var3[1] + 0.25*t1314*var3[2];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 1 && ncols == 3) && 
      !(mrows == 3 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 5, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "gen3_Pc_ddot.hh"

namespace SymExpression
{

void gen3_Pc_ddot_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
