/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 09:10:31 GMT-05:00
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
  double t212;
  double t244;
  double t240;
  double t248;
  double t270;
  double t272;
  double t276;
  double t282;
  double t311;
  double t366;
  double t377;
  double t378;
  double t441;
  double t442;
  double t443;
  double t395;
  double t396;
  double t399;
  double t400;
  double t407;
  double t408;
  double t481;
  double t483;
  double t485;
  double t450;
  double t451;
  double t452;
  double t464;
  double t475;
  double t316;
  double t487;
  double t488;
  double t489;
  double t490;
  double t492;
  double t497;
  double t499;
  double t321;
  double t332;
  double t336;
  double t343;
  double t353;
  double t355;
  double t486;
  double t502;
  double t535;
  double t476;
  double t549;
  double t550;
  double t553;
  double t567;
  double t568;
  double t569;
  double t576;
  double t505;
  double t506;
  double t507;
  double t511;
  double t516;
  double t288;
  double t593;
  double t596;
  double t597;
  double t600;
  double t602;
  double t609;
  double t610;
  double t540;
  double t290;
  double t291;
  double t428;
  double t431;
  double t433;
  double t629;
  double t630;
  double t631;
  double t635;
  double t585;
  double t586;
  double t645;
  double t646;
  double t647;
  double t651;
  double t652;
  double t656;
  double t658;
  double t659;
  double t660;
  double t662;
  double t663;
  double t664;
  double t665;
  double t650;
  double t657;
  double t666;
  double t670;
  double t671;
  double t685;
  double t686;
  double t687;
  double t688;
  double t694;
  double t696;
  double t697;
  double t720;
  double t724;
  double t725;
  double t726;
  double t727;
  double t731;
  double t732;
  double t741;
  double t744;
  double t745;
  double t746;
  double t759;
  double t760;
  double t761;
  double t285;
  double t293;
  double t297;
  double t362;
  double t363;
  double t394;
  double t419;
  double t420;
  double t426;
  double t434;
  double t435;
  double t592;
  double t612;
  double t616;
  double t617;
  double t541;
  double t544;
  double t628;
  double t636;
  double t638;
  double t587;
  double t589;
  double t626;
  double t627;
  double t554;
  double t559;
  double t565;
  double t577;
  double t579;
  double t583;
  double t640;
  double t641;
  double t672;
  double t673;
  double t821;
  double t822;
  double t823;
  double t684;
  double t701;
  double t703;
  double t705;
  double t706;
  double t810;
  double t811;
  double t812;
  double t764;
  double t765;
  double t813;
  double t681;
  double t682;
  double t836;
  double t837;
  double t838;
  double t738;
  double t739;
  double t830;
  double t846;
  double t733;
  double t734;
  double t740;
  double t747;
  double t753;
  double t869;
  double t859;
  double t860;
  double t861;
  double t862;
  double t762;
  double t772;
  double t776;
  double t784;
  double t785;
  double t503;
  double t517;
  double t809;
  double t817;
  double t826;
  double t667;
  double t841;
  double t728;
  double t849;
  double t850;
  double t858;
  double t863;
  double t872;
  double t873;
  double t874;
  t212 = Cos(var1[0]);
  t244 = Sin(var1[1]);
  t240 = Cos(var1[2]);
  t248 = t212*t240*t244;
  t270 = Cos(var1[1]);
  t272 = Sin(var1[2]);
  t276 = t270*t212*t272;
  t282 = t248 + t276;
  t311 = Sin(var1[0]);
  t366 = t240*t244*t311;
  t377 = t270*t311*t272;
  t378 = t366 + t377;
  t441 = -1.*t212*t240*t244;
  t442 = -1.*t270*t212*t272;
  t443 = t441 + t442;
  t395 = -0.25*t270*t212;
  t396 = -1.*t270*t212*t240;
  t399 = t212*t244*t272;
  t400 = t396 + t399;
  t407 = 0.1875*t400;
  t408 = t395 + t407;
  t481 = t270*t212*t240;
  t483 = -1.*t212*t244*t272;
  t485 = t481 + t483;
  t450 = -0.25*t270*t311;
  t451 = -1.*t270*t240*t311;
  t452 = t244*t311*t272;
  t464 = t451 + t452;
  t475 = 0.1875*t464;
  t316 = 0.625*t270*t311;
  t487 = 0.625*t270*t212;
  t488 = 0.25*t270*t212;
  t489 = 0.1875*t485;
  t490 = 0. + t488 + t489;
  t492 = 10.*t490;
  t497 = t487 + t492;
  t499 = 0.0666666666666667*t497;
  t321 = 0.25*t270*t311;
  t332 = t270*t240*t311;
  t336 = -1.*t244*t311*t272;
  t343 = t332 + t336;
  t353 = 0.1875*t343;
  t355 = t321 + t353;
  t486 = -0.1875*t485;
  t502 = 0. + t395 + t486 + t499;
  t535 = -0.125*t270*t212;
  t476 = t450 + t475;
  t549 = -10.*t408;
  t550 = t487 + t549;
  t553 = 0.0666666666666667*t550;
  t567 = -0.625*t270*t311;
  t568 = 10.*t476;
  t569 = t567 + t568;
  t576 = 0.0666666666666667*t569;
  t505 = 0. + t450 + t475;
  t506 = -10.*t505;
  t507 = t316 + t506;
  t511 = 0.0666666666666667*t507;
  t516 = 0. + t450 + t475 + t511;
  t288 = 0.25*t212*t244;
  t593 = -0.625*t212*t244;
  t596 = -0.25*t212*t244;
  t597 = 0.1875*t443;
  t600 = t596 + t597;
  t602 = 10.*t600;
  t609 = t593 + t602;
  t610 = 0.0666666666666667*t609;
  t540 = t535 + t499;
  t290 = 0.1875*t282;
  t291 = t288 + t290;
  t428 = 0.25*t244*t311;
  t431 = 0.1875*t378;
  t433 = t428 + t431;
  t629 = -0.625*t244*t311;
  t630 = -10.*t433;
  t631 = t629 + t630;
  t635 = 0.0666666666666667*t631;
  t585 = -0.125*t270*t311;
  t586 = t585 + t511;
  t645 = -1.*t270*t240;
  t646 = t244*t272;
  t647 = t645 + t646;
  t651 = -1.*t240*t244;
  t652 = -1.*t270*t272;
  t656 = t651 + t652;
  t658 = -0.625*t244;
  t659 = -0.25*t244;
  t660 = 0.1875*t656;
  t662 = 0. + t659 + t660;
  t663 = 10.*t662;
  t664 = t658 + t663;
  t665 = 0.0666666666666667*t664;
  t650 = 0.25*t244;
  t657 = -0.1875*t656;
  t666 = 0. + t650 + t657 + t665;
  t670 = 0.125*t244;
  t671 = t670 + t665;
  t685 = -0.625*t270;
  t686 = -0.25*t270;
  t687 = 0.1875*t647;
  t688 = t686 + t687;
  t694 = 10.*t688;
  t696 = t685 + t694;
  t697 = 0.0666666666666667*t696;
  t720 = 0.625*t244;
  t724 = -10.*t662;
  t725 = t720 + t724;
  t726 = 0.0666666666666667*t725;
  t727 = 0. + t659 + t660 + t726;
  t731 = -0.125*t244;
  t732 = t731 + t726;
  t741 = 0.625*t270;
  t744 = -10.*t688;
  t745 = t741 + t744;
  t746 = 0.0666666666666667*t745;
  t759 = t240*t244;
  t760 = t270*t272;
  t761 = t759 + t760;
  t285 = 0.625*t212*t244;
  t293 = 10.*t291;
  t297 = t285 + t293;
  t362 = 10.*t355;
  t363 = t316 + t362;
  t394 = -0.625*t270*t212;
  t419 = 10.*t408;
  t420 = t394 + t419;
  t426 = 0.625*t244*t311;
  t434 = 10.*t433;
  t435 = t426 + t434;
  t592 = 0.125*t212*t244;
  t612 = t592 + t610;
  t616 = -0.1875*t443;
  t617 = t288 + t616 + t610;
  t541 = 0.625*t270*t311*t540;
  t544 = 10.*t355*t502;
  t628 = 0.125*t244*t311;
  t636 = t628 + t635;
  t638 = t428 + t431 + t635;
  t587 = -0.625*t270*t212*t586;
  t589 = 10.*t408*t516;
  t626 = 0.625*t212*t244*t540;
  t627 = 10.*t291*t502;
  t554 = t535 + t553;
  t559 = t395 + t407 + t553;
  t565 = 0.125*t270*t311;
  t577 = t565 + t576;
  t579 = -0.1875*t464;
  t583 = t321 + t579 + t576;
  t640 = 0.625*t244*t311*t586;
  t641 = 10.*t433*t516;
  t672 = -0.625*t270*t212*t671;
  t673 = 10.*t408*t666;
  t821 = -10.*t600;
  t822 = t285 + t821;
  t823 = 0.0666666666666667*t822;
  t684 = 0.125*t270;
  t701 = t684 + t697;
  t703 = 0.25*t270;
  t705 = -0.1875*t647;
  t706 = t703 + t705 + t697;
  t810 = -10.*t490;
  t811 = t394 + t810;
  t812 = 0.0666666666666667*t811;
  t764 = 0.1875*t761;
  t765 = t650 + t764;
  t813 = 0. + t488 + t489 + t812;
  t681 = 0.625*t244*t311*t671;
  t682 = 10.*t433*t666;
  t836 = -10.*t476;
  t837 = t316 + t836;
  t838 = 0.0666666666666667*t837;
  t738 = 0.625*t212*t244*t732;
  t739 = 10.*t291*t727;
  t830 = 0.125*t270*t212;
  t846 = 0.0666666666666667*t420;
  t733 = 0.625*t270*t311*t732;
  t734 = 10.*t355*t727;
  t740 = -0.125*t270;
  t747 = t740 + t746;
  t753 = t686 + t687 + t746;
  t869 = 0.0666666666666667*t435;
  t859 = 10.*t505;
  t860 = t567 + t859;
  t861 = 0.0666666666666667*t860;
  t862 = 0. + t321 + t579 + t861;
  t762 = 1.875*var2[2]*t761;
  t772 = 1.875*var2[2]*t343;
  t776 = 1.875*var2[2]*t400;
  t784 = 1.875*t343*t502;
  t785 = 1.875*t400*t516;
  t503 = 1.875*t282*t502;
  t517 = 1.875*t378*t516;
  t809 = 1.875*t400*t666;
  t817 = 1.875*t761*t813;
  t826 = t596 + t597 + t823;
  t667 = 1.875*t378*t666;
  t841 = t450 + t475 + t838;
  t728 = 1.875*t282*t727;
  t849 = -0.1875*t400;
  t850 = t488 + t849 + t846;
  t858 = 1.875*t343*t727;
  t863 = 1.875*t761*t862;
  t872 = -0.25*t244*t311;
  t873 = -0.1875*t378;
  t874 = t872 + t873 + t869;
  p_output1[0]=0;
  p_output1[1]=t363*var2[0] + t297*var2[1] + 1.875*t282*var2[2];
  p_output1[2]=t420*var2[0] + t435*var2[1] + 1.875*t378*var2[2];
  p_output1[3]=(t541 + t544 - 0.625*t270*t311*t554 + 10.*t476*t559 - 0.625*t212*t270*t577 + 10.*t408*t583 + t587 + t589)*var2[0] + (-0.625*t212*t270*t612 + 10.*t408*t617 + t626 + t627 - 0.625*t270*t311*t636 + 10.*t476*t638 + t640 + t641)*var2[1] + (0.078125*t270*t311*t378 - 0.078125*t212*t270*t443 - 0.625*t408*t443 + 0.625*t378*t476 + t503 + t517)*var2[2];
  p_output1[4]=(t672 + t673)*var2[0] + (t681 + t682 - 0.625*t270*t311*t701 + 10.*t476*t706)*var2[1] + (-0.078125*t270*t311*t647 - 0.625*t476*t647 + t667)*var2[2];
  p_output1[5]=(t733 + t734)*var2[0] + (t738 + t739 - 0.625*t212*t270*t747 + 10.*t408*t753)*var2[1] + (0.078125*t212*t270*t647 + 0.625*t408*t647 + t728)*var2[2];
  p_output1[6]=t762 + (t720 + 10.*t765)*var2[1];
  p_output1[7]=t772 + t297*var2[0] + t363*var2[1];
  p_output1[8]=t776 + t435*var2[0] + t420*var2[1];
  p_output1[9]=(-0.625*t212*t244*t554 + 0.625*t244*t311*t577 + 10.*t433*t583 + 10.*t559*t600 + t626 + t627 + t640 + t641)*var2[0] + (t541 + t544 + t587 + t589 + 0.625*t244*t311*t612 + 10.*t433*t617 - 0.625*t212*t244*t636 + 10.*t600*t638)*var2[1] + (0.078125*t212*t244*t378 + 0.078125*t244*t311*t443 - 0.625*t433*t443 + 0.625*t378*t600 + t784 + t785)*var2[2];
  p_output1[10]=(t681 + t682 - 0.625*t270*(t585 + t838) + 10.*t688*t841)*var2[0] + (t672 + t673 - 0.625*t212*t244*t701 + 10.*t600*t706 + 10.*t765*t813 - 0.625*t270*(-0.125*t212*t244 + t823) + 10.*t688*t826 + 0.625*t244*(t812 + t830))*var2[1] + (0.078125*t270*t443 - 0.078125*t212*t244*t647 - 0.625*t600*t647 + 0.625*t443*t688 + t809 + t817)*var2[2];
  p_output1[11]=(t738 + t739 - 0.625*t270*(t830 + t846) + 10.*t688*t850)*var2[0] + (t733 + t734 + 0.625*t244*t311*t747 + 10.*t433*t753 + 0.625*t244*(t565 + t861) + 10.*t765*t862 - 0.625*t270*(-0.125*t244*t311 + t869) + 10.*t688*t874)*var2[1] + (-0.078125*t270*t378 - 0.078125*t244*t311*t647 + 0.625*t433*t647 - 0.625*t378*t688 + t858 + t863)*var2[2];
  p_output1[12]=t762 + 1.875*t761*var2[1];
  p_output1[13]=t772 + 1.875*t282*var2[0] + 1.875*t343*var2[1];
  p_output1[14]=t776 + 1.875*t378*var2[0] + 1.875*t400*var2[1];
  p_output1[15]=(t503 + t517 + 1.875*t443*t559 + 1.875*t378*t583)*var2[0] + (1.875*t378*t617 + 1.875*t443*t638 + t784 + t785)*var2[1] + (0. + t784 + t785)*var2[2];
  p_output1[16]=(t667 + 1.875*t647*t841)*var2[0] + (1.875*t443*t706 + t809 + t817 + 1.875*t647*t826)*var2[1] + (0. + t809 + t817)*var2[2];
  p_output1[17]=(t728 + 1.875*t647*t850)*var2[0] + (1.875*t378*t753 + t858 + t863 + 1.875*t647*t874)*var2[1] + (0. + t858 + t863)*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "gen3_Acmm_dot.hh"

namespace SymExpression
{

void gen3_Acmm_dot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
