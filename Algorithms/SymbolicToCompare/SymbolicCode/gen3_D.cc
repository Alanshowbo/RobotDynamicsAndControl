/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:04 GMT-04:00
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
  double t624;
  double t626;
  double t604;
  double t609;
  double t628;
  double t629;
  double t638;
  double t640;
  double t649;
  double t654;
  double t641;
  double t659;
  double t660;
  double t661;
  double t650;
  double t655;
  double t656;
  double t671;
  double t672;
  double t676;
  double t679;
  double t681;
  double t682;
  double t686;
  double t687;
  double t689;
  double t690;
  double t694;
  double t695;
  double t709;
  double t713;
  double t716;
  double t717;
  double t750;
  double t751;
  double t755;
  double t719;
  double t722;
  double t723;
  double t718;
  double t726;
  double t727;
  double t731;
  double t732;
  double t734;
  double t741;
  double t742;
  double t743;
  double t784;
  double t785;
  double t792;
  double t756;
  double t757;
  double t758;
  double t729;
  double t730;
  double t735;
  double t736;
  double t738;
  double t740;
  double t747;
  double t748;
  double t749;
  double t759;
  double t760;
  double t761;
  double t762;
  double t763;
  double t764;
  double t765;
  double t770;
  double t774;
  double t775;
  double t777;
  double t783;
  double t817;
  double t818;
  double t819;
  double t834;
  double t835;
  double t836;
  double t831;
  double t840;
  double t841;
  double t845;
  double t846;
  double t847;
  double t849;
  double t851;
  double t852;
  double t853;
  double t856;
  double t799;
  double t800;
  double t801;
  double t804;
  double t805;
  double t806;
  double t869;
  double t870;
  double t874;
  double t793;
  double t795;
  double t796;
  double t797;
  double t803;
  double t807;
  double t809;
  double t810;
  double t811;
  double t859;
  double t860;
  double t861;
  double t862;
  double t863;
  double t875;
  double t876;
  double t880;
  double t881;
  double t882;
  double t883;
  double t884;
  double t885;
  double t886;
  double t889;
  double t890;
  t624 = Cos(var1[1]);
  t626 = Power(t624,2);
  t604 = Cos(var1[0]);
  t609 = Power(t604,2);
  t628 = Sin(var1[0]);
  t629 = Power(t628,2);
  t638 = t609 + t629;
  t640 = Sin(var1[1]);
  t649 = Cos(var1[2]);
  t654 = Sin(var1[2]);
  t641 = Power(t640,2);
  t659 = t624*t649;
  t660 = -1.*t640*t654;
  t661 = t659 + t660;
  t650 = -1.*t649*t640;
  t655 = -1.*t624*t654;
  t656 = t650 + t655;
  t671 = -0.25*t604*t624;
  t672 = -1.*t604*t624*t649;
  t676 = t604*t640*t654;
  t679 = t672 + t676;
  t681 = 0.1875*t679;
  t682 = t671 + t681;
  t686 = -0.25*t624*t628;
  t687 = -1.*t624*t649*t628;
  t689 = t628*t640*t654;
  t690 = t687 + t689;
  t694 = 0.1875*t690;
  t695 = t686 + t694;
  t709 = t626 + t641;
  t713 = t604*t649*t640;
  t716 = t604*t624*t654;
  t717 = t713 + t716;
  t750 = -1.*t649*t628*t640;
  t751 = -1.*t624*t628*t654;
  t755 = t750 + t751;
  t719 = t604*t624*t649;
  t722 = -1.*t604*t640*t654;
  t723 = t719 + t722;
  t718 = 0.45*t638*t717*t661;
  t726 = 0.05*t638*t656*t723;
  t727 = t718 + t726;
  t731 = t649*t628*t640;
  t732 = t624*t628*t654;
  t734 = t731 + t732;
  t741 = -1.*t604*t649*t640;
  t742 = -1.*t604*t624*t654;
  t743 = t741 + t742;
  t784 = Power(t649,2);
  t785 = Power(t654,2);
  t792 = t784 + t785;
  t756 = 0.45*t638*t755*t661;
  t757 = 0.05*t638*t656*t690;
  t758 = t756 + t757;
  t729 = -1.*t628*t709*t727;
  t730 = 0.25*t628*t640;
  t735 = 0.1875*t734;
  t736 = t730 + t735;
  t738 = 10.*t736*t682;
  t740 = -0.25*t604*t640;
  t747 = 0.1875*t743;
  t748 = t740 + t747;
  t749 = 10.*t748*t695;
  t759 = -1.*t604*t709*t758;
  t760 = -0.5*t628*t709*t717;
  t761 = -0.5*t604*t709*t755;
  t762 = t760 + t761;
  t763 = 0.9*t661*t762;
  t764 = -0.5*t628*t709*t723;
  t765 = -0.5*t604*t709*t690;
  t770 = t764 + t765;
  t774 = 0.1*t656*t770;
  t775 = t763 + t774;
  t777 = t638*t775;
  t783 = 0. + t729 + t738 + t749 + t759 + t777;
  t817 = 0.5*t609*t709;
  t818 = 0.5*t629*t709;
  t819 = t817 + t818;
  t834 = -1.*t624*t649;
  t835 = t640*t654;
  t836 = t834 + t835;
  t831 = -0.25*t624;
  t840 = 0.1875*t836;
  t841 = t831 + t840;
  t845 = -0.9*t628*t819;
  t846 = 0.9*t717*t762;
  t847 = 0.1*t723*t770;
  t849 = t845 + t846 + t847;
  t851 = -0.9*t604*t819;
  t852 = 0.9*t755*t762;
  t853 = 0.1*t690*t770;
  t856 = t851 + t852 + t853;
  t799 = -0.5*t628*t717*t792;
  t800 = -0.5*t604*t755*t792;
  t801 = t799 + t800;
  t804 = -0.5*t628*t723*t792;
  t805 = -0.5*t604*t690*t792;
  t806 = t804 + t805;
  t869 = 0.5*t609*t792;
  t870 = 0.5*t629*t792;
  t874 = t869 + t870;
  t793 = -1.*t628*t792*t727;
  t795 = 1.875*t734*t682;
  t796 = 1.875*t743*t695;
  t797 = -1.*t604*t792*t758;
  t803 = 0.9*t661*t801;
  t807 = 0.1*t656*t806;
  t809 = t803 + t807;
  t810 = t638*t809;
  t811 = t793 + t795 + t796 + t797 + t810;
  t859 = 1.875*t743*t748;
  t860 = 1.875*t734*t736;
  t861 = 1.875*t836*t841;
  t862 = -1.*t628*t792*t849;
  t863 = -1.*t604*t792*t856;
  t875 = -0.9*t628*t874;
  t876 = 0.9*t717*t801;
  t880 = 0.1*t723*t806;
  t881 = t875 + t876 + t880;
  t882 = -1.*t628*t709*t881;
  t883 = -0.9*t604*t874;
  t884 = 0.9*t755*t801;
  t885 = 0.1*t690*t806;
  t886 = t883 + t884 + t885;
  t889 = -1.*t604*t709*t886;
  t890 = t859 + t860 + t861 + t862 + t863 + t882 + t889;
  p_output1[0]=0.078125*t609*t626 + 0.078125*t626*t629 + 2.*t638*(0.45*t626*t638 + 0.05*t638*t641) + 2.*t638*(0.05*t638*Power(t656,2) + 0.45*t638*Power(t661,2)) + 10.*Power(t682,2) + 10.*Power(t695,2);
  p_output1[1]=t783;
  p_output1[2]=t811;
  p_output1[3]=t783;
  p_output1[4]=0.078125*t626 + 0.078125*t609*t641 + 0.078125*t629*t641 + 10.*Power(t736,2) + 10.*Power(t748,2) + 1.8*t609*t709*t819 + 1.8*t629*t709*t819 + 10.*Power(t841,2) - 2.*t628*t709*t849 - 2.*t604*t709*t856;
  p_output1[5]=t890;
  p_output1[6]=t811;
  p_output1[7]=t890;
  p_output1[8]=0.3515625*Power(t734,2) + 0.3515625*Power(t743,2) + 0.3515625*Power(t836,2) - 2.*t628*t792*t881 - 2.*t604*t792*t886;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "gen3_D.hh"

namespace SymExpression
{

void gen3_D_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
