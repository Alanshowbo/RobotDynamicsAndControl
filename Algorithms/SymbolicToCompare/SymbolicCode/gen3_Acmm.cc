/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:13 GMT-04:00
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
  double t700;
  double t800;
  double t801;
  double t803;
  double t804;
  double t845;
  double t685;
  double t880;
  double t905;
  double t951;
  double t953;
  double t954;
  double t964;
  double t965;
  double t970;
  double t971;
  double t982;
  double t986;
  double t987;
  double t995;
  double t997;
  double t1004;
  double t1006;
  double t1007;
  double t1009;
  double t1026;
  double t1025;
  double t1027;
  double t1030;
  double t1032;
  double t1033;
  double t1034;
  double t1035;
  double t1036;
  double t1077;
  double t1078;
  double t1083;
  double t1041;
  double t1042;
  double t1043;
  double t1065;
  double t1071;
  double t1073;
  double t1048;
  double t1052;
  double t926;
  double t927;
  double t929;
  double t1075;
  double t1084;
  double t1085;
  double t884;
  double t907;
  double t924;
  double t962;
  double t973;
  double t976;
  double t1121;
  double t1123;
  double t1124;
  double t1125;
  double t1127;
  double t1129;
  double t1096;
  double t1097;
  double t1098;
  double t1134;
  double t1139;
  double t1141;
  double t936;
  double t938;
  double t939;
  double t1148;
  double t1154;
  double t1155;
  double t1156;
  double t1161;
  double t1176;
  double t1177;
  double t1178;
  double t1183;
  double t1184;
  double t1193;
  double t1194;
  double t1197;
  double t1198;
  double t1201;
  double t1203;
  double t694;
  double t857;
  double t1239;
  double t1087;
  double t1089;
  double t1091;
  double t1099;
  double t1100;
  double t1101;
  double t1244;
  double t1245;
  double t1246;
  double t1247;
  double t1248;
  double t1251;
  double t1252;
  double t1253;
  double t1254;
  double t1147;
  double t1163;
  double t1164;
  double t1166;
  double t1167;
  double t1168;
  double t1259;
  double t1263;
  double t1264;
  double t1192;
  double t1204;
  double t1205;
  double t1208;
  double t1210;
  double t1214;
  double t1313;
  double t1314;
  double t1315;
  t700 = Cos(var1[0]);
  t800 = Power(t700,2);
  t801 = Sin(var1[0]);
  t803 = Power(t801,2);
  t804 = t800 + t803;
  t845 = Sin(var1[1]);
  t685 = Cos(var1[1]);
  t880 = Cos(var1[2]);
  t905 = Sin(var1[2]);
  t951 = t685*t880*t804;
  t953 = -1.*t804*t845*t905;
  t954 = t951 + t953;
  t964 = 0.25*t800*t685;
  t965 = 0.25*t685*t803;
  t970 = 0.1875*t954;
  t971 = t964 + t965 + t970;
  t982 = 0.625*t700*t685;
  t986 = 0.25*t700*t685;
  t987 = t700*t685*t880;
  t995 = -1.*t700*t845*t905;
  t997 = t987 + t995;
  t1004 = 0.1875*t997;
  t1006 = 0. + t986 + t1004;
  t1007 = 10.*t1006;
  t1009 = t982 + t1007;
  t1026 = -0.25*t685*t801;
  t1025 = 0.625*t685*t801;
  t1027 = -1.*t685*t880*t801;
  t1030 = t801*t845*t905;
  t1032 = t1027 + t1030;
  t1033 = 0.1875*t1032;
  t1034 = 0. + t1026 + t1033;
  t1035 = -10.*t1034;
  t1036 = t1025 + t1035;
  t1077 = -1.*t880*t801*t845;
  t1078 = -1.*t685*t801*t905;
  t1083 = t1077 + t1078;
  t1041 = -0.25*t700*t685;
  t1042 = 0.0666666666666667*t1009;
  t1043 = 0. + t1041 + t1042;
  t1065 = t700*t880*t845;
  t1071 = t700*t685*t905;
  t1073 = t1065 + t1071;
  t1048 = 0.0666666666666667*t1036;
  t1052 = 0. + t1026 + t1048;
  t926 = -1.*t880*t804*t845;
  t927 = -1.*t685*t804*t905;
  t929 = t926 + t927;
  t1075 = -0.25*t685*t801*t1073;
  t1084 = -0.25*t700*t685*t1083;
  t1085 = t1075 + t1084;
  t884 = -1.*t880*t845;
  t907 = -1.*t685*t905;
  t924 = t884 + t907;
  t962 = 0.9*t954;
  t973 = 1.875*t971;
  t976 = t962 + t973;
  t1121 = -0.625*t845;
  t1123 = -0.25*t845;
  t1124 = 0.1875*t924;
  t1125 = 0. + t1123 + t1124;
  t1127 = 10.*t1125;
  t1129 = t1121 + t1127;
  t1096 = -0.25*t685*t801*t997;
  t1097 = -0.25*t700*t685*t1032;
  t1098 = t1096 + t1097;
  t1134 = 0.25*t845;
  t1139 = 0.0666666666666667*t1129;
  t1141 = 0. + t1134 + t1139;
  t936 = t685*t880;
  t938 = -1.*t845*t905;
  t939 = t936 + t938;
  t1148 = -0.625*t700*t685;
  t1154 = -10.*t1006;
  t1155 = t1148 + t1154;
  t1156 = 0.0666666666666667*t1155;
  t1161 = 0. + t986 + t1156;
  t1176 = 0.625*t845;
  t1177 = -10.*t1125;
  t1178 = t1176 + t1177;
  t1183 = 0.0666666666666667*t1178;
  t1184 = 0. + t1123 + t1183;
  t1193 = 0.25*t685*t801;
  t1194 = -0.625*t685*t801;
  t1197 = 10.*t1034;
  t1198 = t1194 + t1197;
  t1201 = 0.0666666666666667*t1198;
  t1203 = 0. + t1193 + t1201;
  t694 = Power(t685,2);
  t857 = Power(t845,2);
  t1239 = t694 + t857;
  t1087 = t1083*t1043;
  t1089 = t1073*t1052;
  t1091 = t1087 + t1089;
  t1099 = t1032*t1043;
  t1100 = t997*t1052;
  t1101 = t1099 + t1100;
  t1244 = -0.1875*t1239;
  t1245 = -0.25*t700*t845*t1073;
  t1246 = 0.25*t801*t845*t1083;
  t1247 = -0.25*t685*t939;
  t1248 = t1244 + t1245 + t1246 + t1247;
  t1251 = -0.25*t685*t924;
  t1252 = -0.25*t700*t845*t997;
  t1253 = 0.25*t801*t845*t1032;
  t1254 = t1251 + t1252 + t1253;
  t1147 = t997*t1141;
  t1163 = t924*t1161;
  t1164 = t1147 + t1163;
  t1166 = t1073*t1141;
  t1167 = t939*t1161;
  t1168 = t1166 + t1167;
  t1259 = 0.9*t1239;
  t1263 = -1.875*t1248;
  t1264 = t1259 + t1263;
  t1192 = t1032*t1184;
  t1204 = t924*t1203;
  t1205 = t1192 + t1204;
  t1208 = t1083*t1184;
  t1210 = t939*t1203;
  t1214 = t1208 + t1210;
  t1313 = Power(t880,2);
  t1314 = Power(t905,2);
  t1315 = t1313 + t1314;
  p_output1[0]=10.*t1085*t1091 + 10.*t1098*t1101 + 0.978125*t694*t804 + 0.625*t685*(-0.0666666666666667*t1009*t700 - 0.0666666666666667*t1036*t801)*t804 + 0.1*t804*t857 + 0.1*t924*t929 + 10.*(-1.*t1043*t700 - 1.*t1052*t801)*t971 + t939*t976;
  p_output1[1]=10.*t1098*t1164 + 10.*t1085*t1168 + 1.875*t1085*t700 - 0.041666666666666664*t1129*t685*t801*t804 - 0.878125*t685*t801*t804*t845 + 0.1*t1032*t929 - 10.*t1141*t801*t971 + t1083*t976;
  p_output1[2]=10.*t1098*t1205 + 10.*t1085*t1214 + 1.875*t1085*t801 - 0.041666666666666664*t1178*t685*t700*t804 + 0.878125*t685*t700*t804*t845 - 10.*t1184*t700*t971 + t1073*t976 + 0.1*t929*t997;
  p_output1[3]=10.*t1098*t924 + 10.*t1085*t939;
  p_output1[4]=10.*t1083*t1085 + 10.*t1032*t1098 - 0.625*t685*t700*t804 - 10.*t700*t971;
  p_output1[5]=10.*t1073*t1085 - 0.625*t685*t801*t804 - 10.*t801*t971 + 10.*t1098*t997;
  p_output1[6]=0. + 10.*t1091*t1248 + 10.*t1101*t1254 - 0.625*t1239*(0.0666666666666667*t1036*t700*t845 - 0.0666666666666667*t1009*t801*t845);
  p_output1[7]=0. + 10.*t1168*t1248 + 10.*t1164*t1254 - 0.978125*t1239*t700 - 1.*t1264*t700 - 0.625*t1239*(0.0666666666666667*t1155*t685 + 0.0666666666666667*t1129*t700*t845);
  p_output1[8]=0. + 10.*t1214*t1248 + 10.*t1205*t1254 - 0.978125*t1239*t801 - 1.*t1264*t801 - 0.625*t1239*(0.0666666666666667*t1198*t685 - 0.0666666666666667*t1178*t801*t845);
  p_output1[9]=-0.625*t1239*t685 + 10.*t1254*t924 + 10.*t1248*t939;
  p_output1[10]=0. + 10.*t1083*t1248 + 10.*t1032*t1254 + 0.625*t1239*t801*t845;
  p_output1[11]=0. + 10.*t1073*t1248 - 0.625*t1239*t700*t845 + 10.*t1254*t997;
  p_output1[12]=-1.875*t1091*t1315;
  p_output1[13]=-1.875*t1168*t1315 - 1.2515625*t1315*t700;
  p_output1[14]=-1.875*t1214*t1315 - 1.2515625*t1315*t801;
  p_output1[15]=-1.875*t1315*t939;
  p_output1[16]=-1.875*t1083*t1315;
  p_output1[17]=-1.875*t1073*t1315;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "gen3_Acmm.hh"

namespace SymExpression
{

void gen3_Acmm_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
