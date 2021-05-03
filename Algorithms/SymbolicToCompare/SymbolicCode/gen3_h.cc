/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:11 GMT-04:00
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
  double t671;
  double t676;
  double t683;
  double t685;
  double t686;
  double t690;
  double t694;
  double t698;
  double t717;
  double t735;
  double t743;
  double t785;
  double t796;
  double t800;
  double t840;
  double t844;
  double t845;
  double t846;
  double t850;
  double t857;
  double t858;
  double t859;
  double t860;
  double t874;
  double t880;
  double t883;
  double t884;
  double t885;
  double t890;
  double t894;
  double t897;
  double t903;
  double t803;
  double t804;
  double t809;
  double t810;
  double t811;
  double t813;
  double t814;
  double t818;
  double t828;
  double t829;
  double t775;
  double t783;
  double t784;
  double t909;
  double t910;
  double t916;
  double t921;
  double t943;
  double t945;
  double t946;
  double t929;
  double t930;
  double t931;
  double t939;
  double t940;
  double t941;
  double t933;
  double t934;
  double t740;
  double t757;
  double t761;
  double t700;
  double t708;
  double t718;
  double t726;
  double t923;
  double t762;
  double t763;
  double t765;
  double t801;
  double t830;
  double t831;
  double t949;
  double t951;
  double t953;
  double t954;
  double t957;
  double t942;
  double t947;
  double t948;
  double t958;
  double t959;
  double t994;
  double t995;
  double t997;
  double t998;
  double t999;
  double t1001;
  double t970;
  double t971;
  double t973;
  double t974;
  double t1011;
  double t1012;
  double t1013;
  double t1019;
  double t1020;
  double t1021;
  double t1028;
  double t1029;
  double t987;
  double t989;
  double t1006;
  double t1007;
  double t1008;
  double t1043;
  double t1044;
  double t1045;
  double t1049;
  double t1050;
  double t1054;
  double t1055;
  double t1056;
  double t1065;
  double t1066;
  double t1067;
  t671 = Cos(var1[1]);
  t676 = Cos(var1[0]);
  t683 = Power(t676,2);
  t685 = var2[0]*t683;
  t686 = Sin(var1[0]);
  t690 = Power(t686,2);
  t694 = var2[0]*t690;
  t698 = t685 + t694;
  t717 = Sin(var1[1]);
  t735 = Cos(var1[2]);
  t743 = Sin(var1[2]);
  t785 = t671*t735*t698;
  t796 = -1.*t698*t717*t743;
  t800 = t785 + t796;
  t840 = 0.625*t676*t671;
  t844 = 0.25*t676*t671;
  t845 = t676*t671*t735;
  t846 = -1.*t676*t717*t743;
  t850 = t845 + t846;
  t857 = 0.1875*t850;
  t858 = 0. + t844 + t857;
  t859 = 10.*t858;
  t860 = t840 + t859;
  t874 = 0.625*t671*t686;
  t880 = -0.25*t671*t686;
  t883 = -1.*t671*t735*t686;
  t884 = t686*t717*t743;
  t885 = t883 + t884;
  t890 = 0.1875*t885;
  t894 = 0. + t880 + t890;
  t897 = -10.*t894;
  t903 = t874 + t897;
  t803 = -0.25*var2[0]*t671*t686;
  t804 = -0.25*var2[1]*t676*t717;
  t809 = t803 + t804;
  t810 = -1.*t686*t809;
  t811 = -0.25*var2[0]*t676*t671;
  t813 = 0.25*var2[1]*t686*t717;
  t814 = t811 + t813;
  t818 = -1.*t676*t814;
  t828 = 0.1875*t800;
  t829 = 0. + t810 + t818 + t828;
  t775 = t671*t735;
  t783 = -1.*t717*t743;
  t784 = t775 + t783;
  t909 = Power(t671,2);
  t910 = var2[1]*t909;
  t916 = Power(t717,2);
  t921 = var2[1]*t916;
  t943 = -1.*t735*t686*t717;
  t945 = -1.*t671*t686*t743;
  t946 = t943 + t945;
  t929 = -0.25*t676*t671;
  t930 = 0.0666666666666667*t860;
  t931 = 0. + t929 + t930;
  t939 = t676*t735*t717;
  t940 = t676*t671*t743;
  t941 = t939 + t940;
  t933 = 0.0666666666666667*t903;
  t934 = 0. + t880 + t933;
  t740 = -1.*t735*t717;
  t757 = -1.*t671*t743;
  t761 = t740 + t757;
  t700 = 0.978125*t671*t698;
  t708 = 0. + t700;
  t718 = -0.1*t698*t717;
  t726 = 0. + t718;
  t923 = t910 + t921;
  t762 = -1.*t735*t698*t717;
  t763 = -1.*t671*t698*t743;
  t765 = t762 + t763;
  t801 = 0.9*t800;
  t830 = 1.875*t829;
  t831 = t801 + t830;
  t949 = Power(t735,2);
  t951 = var2[2]*t949;
  t953 = Power(t743,2);
  t954 = var2[2]*t953;
  t957 = t910 + t951 + t921 + t954;
  t942 = t809*t941;
  t947 = t814*t946;
  t948 = -0.25*var2[1]*t671*t784;
  t958 = -0.1875*t957;
  t959 = t942 + t947 + t948 + t958;
  t994 = -0.625*t717;
  t995 = -0.25*t717;
  t997 = 0.1875*t761;
  t998 = 0. + t995 + t997;
  t999 = 10.*t998;
  t1001 = t994 + t999;
  t970 = -0.25*var2[1]*t671*t761;
  t971 = t809*t850;
  t973 = t814*t885;
  t974 = t970 + t971 + t973;
  t1011 = 0.25*t717;
  t1012 = 0.0666666666666667*t1001;
  t1013 = 0. + t1011 + t1012;
  t1019 = -0.625*t676*t671;
  t1020 = -10.*t858;
  t1021 = t1019 + t1020;
  t1028 = 0.0666666666666667*t1021;
  t1029 = 0. + t844 + t1028;
  t987 = 0.978125*t923;
  t989 = 0. + t987;
  t1006 = 0.9*t957;
  t1007 = -1.875*t959;
  t1008 = t1006 + t1007;
  t1043 = 0.625*t717;
  t1044 = -10.*t998;
  t1045 = t1043 + t1044;
  t1049 = 0.0666666666666667*t1045;
  t1050 = 0. + t995 + t1049;
  t1054 = -0.625*t671*t686;
  t1055 = 10.*t894;
  t1056 = t1054 + t1055;
  t1065 = 0.25*t671*t686;
  t1066 = 0.0666666666666667*t1056;
  t1067 = 0. + t1065 + t1066;
  p_output1[0]=t671*t708 - 1.*t717*t726 + 0.1*t761*t765 + t784*t831 + 0.625*t671*t698*(-0.0666666666666667*t676*t860 - 0.0666666666666667*t686*t903) - 0.625*(-0.0666666666666667*t686*t717*t860 + 0.0666666666666667*t676*t717*t903)*t923 + 10.*t829*(-1.*t676*t931 - 1.*t686*t934) + 10.*(t934*t941 + t931*t946)*t959 + 10.*(t885*t931 + t850*t934)*t974;
  p_output1[1]=-1.*t1008*t676 - 0.041666666666666664*t1001*t671*t686*t698 - 1.*t686*t708*t717 - 1.*t671*t686*t726 - 10.*t1013*t686*t829 + 0.1*t765*t885 - 0.625*(0.0666666666666667*t1021*t671 + 0.0666666666666667*t1001*t676*t717)*t923 + t831*t946 + 10.*(t1029*t784 + t1013*t941)*t959 + 10.*(t1029*t761 + t1013*t850)*t974 - 1.*t676*t989;
  p_output1[2]=-1.*t1008*t686 - 0.041666666666666664*t1045*t671*t676*t698 + t676*t708*t717 + t671*t676*t726 - 10.*t1050*t676*t829 + 0.1*t765*t850 - 0.625*(0.0666666666666667*t1056*t671 - 0.0666666666666667*t1045*t686*t717)*t923 + t831*t941 + 10.*(t1067*t784 + t1050*t946)*t959 + 10.*(t1067*t761 + t1050*t885)*t974 - 1.*t686*t989;
  p_output1[3]=0. - 0.625*t671*t923 + 10.*t784*t959 + 10.*t761*t974;
  p_output1[4]=-0.625*t671*t676*t698 - 10.*t676*t829 + 0.625*t686*t717*t923 + 10.*t946*t959 + 10.*t885*t974;
  p_output1[5]=-0.625*t671*t686*t698 - 10.*t686*t829 - 0.625*t676*t717*t923 + 10.*t941*t959 + 10.*t850*t974;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "gen3_h.hh"

namespace SymExpression
{

void gen3_h_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
