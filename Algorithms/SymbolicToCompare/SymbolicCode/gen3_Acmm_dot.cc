/*
 * Automatically Generated from Mathematica.
 * Fri 24 Apr 2020 10:16:46 GMT-04:00
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
  double t364;
  double t372;
  double t335;
  double t386;
  double t416;
  double t437;
  double t443;
  double t444;
  double t376;
  double t446;
  double t447;
  double t448;
  double t496;
  double t497;
  double t498;
  double t499;
  double t500;
  double t507;
  double t508;
  double t509;
  double t510;
  double t479;
  double t485;
  double t491;
  double t514;
  double t515;
  double t519;
  double t512;
  double t513;
  double t520;
  double t521;
  double t560;
  double t541;
  double t542;
  double t543;
  double t564;
  double t565;
  double t566;
  double t533;
  double t536;
  double t537;
  double t546;
  double t548;
  double t552;
  double t553;
  double t557;
  double t558;
  double t561;
  double t567;
  double t568;
  double t569;
  double t572;
  double t573;
  double t576;
  double t582;
  double t583;
  double t584;
  double t597;
  double t598;
  double t599;
  double t593;
  double t594;
  double t595;
  double t606;
  double t607;
  double t453;
  double t454;
  double t476;
  double t478;
  double t492;
  double t493;
  double t494;
  double t495;
  double t370;
  double t378;
  double t385;
  double t525;
  double t526;
  double t527;
  double t531;
  double t640;
  double t641;
  double t642;
  double t643;
  double t644;
  double t646;
  double t649;
  double t648;
  double t650;
  double t651;
  double t652;
  double t653;
  double t630;
  double t631;
  double t632;
  double t633;
  double t559;
  double t577;
  double t578;
  double t661;
  double t662;
  double t663;
  double t588;
  double t666;
  double t667;
  double t589;
  double t596;
  double t600;
  double t601;
  double t603;
  double t604;
  double t608;
  double t610;
  double t611;
  double t612;
  double t697;
  double t698;
  double t699;
  double t700;
  double t703;
  double t704;
  double t705;
  double t709;
  double t710;
  double t711;
  double t712;
  double t720;
  double t721;
  double t723;
  double t724;
  double t725;
  double t605;
  double t770;
  double t774;
  double t775;
  double t777;
  double t778;
  double t779;
  double t780;
  double t781;
  double t782;
  double t784;
  double t785;
  double t789;
  double t790;
  double t791;
  double t792;
  double t793;
  double t761;
  double t762;
  double t676;
  double t679;
  double t680;
  double t629;
  double t634;
  double t638;
  double t765;
  double t820;
  double t823;
  double t824;
  double t825;
  double t826;
  double t827;
  double t682;
  double t683;
  double t684;
  double t794;
  double t831;
  double t832;
  double t833;
  double t800;
  double t801;
  double t802;
  double t806;
  double t836;
  double t837;
  double t838;
  double t839;
  double t840;
  double t807;
  double t731;
  double t732;
  double t733;
  double t735;
  double t736;
  double t737;
  double t864;
  double t865;
  double t868;
  double t869;
  double t890;
  double t891;
  double t892;
  double t895;
  double t896;
  double t899;
  double t900;
  double t901;
  double t902;
  double t911;
  double t912;
  double t913;
  double t914;
  double t910;
  double t916;
  double t918;
  double t920;
  double t921;
  double t922;
  double t812;
  double t814;
  double t927;
  double t929;
  double t932;
  double t954;
  double t955;
  double t956;
  double t960;
  double t961;
  double t942;
  double t965;
  double t966;
  double t967;
  double t968;
  double t969;
  double t970;
  double t943;
  double t988;
  double t991;
  double t1000;
  double t1003;
  double t1022;
  double t1024;
  double t586;
  double t587;
  double t590;
  double t1048;
  double t1049;
  double t1050;
  double t1051;
  double t1043;
  double t618;
  double t619;
  double t623;
  double t672;
  double t673;
  double t674;
  double t1054;
  double t1055;
  double t1056;
  double t1059;
  double t1060;
  double t1061;
  double t1062;
  double t1063;
  double t686;
  double t687;
  double t688;
  double t740;
  double t741;
  double t742;
  double t743;
  double t746;
  double t748;
  double t749;
  double t750;
  double t751;
  double t754;
  double t1057;
  double t796;
  double t797;
  double t798;
  double t804;
  double t805;
  double t808;
  double t1074;
  double t1075;
  double t1076;
  double t1078;
  double t1079;
  double t1080;
  double t841;
  double t842;
  double t843;
  double t846;
  double t847;
  double t848;
  double t1091;
  double t1092;
  double t1094;
  double t1095;
  double t863;
  double t870;
  double t871;
  double t875;
  double t876;
  double t877;
  double t1130;
  double t1131;
  double t1132;
  double t898;
  double t903;
  double t904;
  double t906;
  double t907;
  double t908;
  double t935;
  double t936;
  double t937;
  double t940;
  double t941;
  double t944;
  double t1113;
  double t1114;
  double t964;
  double t971;
  double t972;
  double t975;
  double t976;
  double t978;
  double t1187;
  double t1190;
  double t1206;
  double t1209;
  double t1218;
  double t1220;
  double t1237;
  double t1238;
  double t1239;
  t364 = Cos(var1[2]);
  t372 = Sin(var1[1]);
  t335 = Cos(var1[1]);
  t386 = Cos(var1[0]);
  t416 = Power(t386,2);
  t437 = Sin(var1[0]);
  t443 = Power(t437,2);
  t444 = t416 + t443;
  t376 = Sin(var1[2]);
  t446 = -1.*t364*t372*t444;
  t447 = -1.*t335*t444*t376;
  t448 = t446 + t447;
  t496 = -1.*t386*t364*t372;
  t497 = -1.*t335*t386*t376;
  t498 = t496 + t497;
  t499 = -0.125*t386*t498;
  t500 = t364*t372*t437;
  t507 = t335*t437*t376;
  t508 = t500 + t507;
  t509 = 0.125*t437*t508;
  t510 = t499 + t509;
  t479 = -1.*t364*t372;
  t485 = -1.*t335*t376;
  t491 = t479 + t485;
  t514 = t335*t364*t444;
  t515 = -1.*t372*t444*t376;
  t519 = t514 + t515;
  t512 = 0.25*t335*t416;
  t513 = 0.25*t335*t443;
  t520 = 0.1875*t519;
  t521 = t512 + t513 + t520;
  t560 = -0.25*t335*t437;
  t541 = t335*t386*t364;
  t542 = -1.*t386*t372*t376;
  t543 = t541 + t542;
  t564 = -1.*t335*t364*t437;
  t565 = t372*t437*t376;
  t566 = t564 + t565;
  t533 = -0.25*t335*t386;
  t536 = 0.625*t335*t386;
  t537 = 0.25*t335*t386;
  t546 = 0.1875*t543;
  t548 = 0. + t537 + t546;
  t552 = 10.*t548;
  t553 = t536 + t552;
  t557 = 0.0666666666666667*t553;
  t558 = 0. + t533 + t557;
  t561 = 0.625*t335*t437;
  t567 = 0.1875*t566;
  t568 = 0. + t560 + t567;
  t569 = -10.*t568;
  t572 = t561 + t569;
  t573 = 0.0666666666666667*t572;
  t576 = 0. + t560 + t573;
  t582 = -0.25*t335*t437*t543;
  t583 = -0.25*t335*t386*t566;
  t584 = t582 + t583;
  t597 = t386*t364*t372;
  t598 = t335*t386*t376;
  t599 = t597 + t598;
  t593 = -1.*t364*t372*t437;
  t594 = -1.*t335*t437*t376;
  t595 = t593 + t594;
  t606 = t566*t558;
  t607 = t543*t576;
  t453 = -1.*t335*t364;
  t454 = t372*t376;
  t476 = t453 + t454;
  t478 = 0.1*t476*t448;
  t492 = -1.*t335*t364*t444;
  t493 = t372*t444*t376;
  t494 = t492 + t493;
  t495 = 0.1*t491*t494;
  t370 = t335*t364;
  t378 = -1.*t372*t376;
  t385 = t370 + t378;
  t525 = 0.9*t519;
  t526 = 1.875*t521;
  t527 = t525 + t526;
  t531 = t491*t527;
  t640 = -0.625*t386*t372;
  t641 = -0.25*t386*t372;
  t642 = 0.1875*t498;
  t643 = t641 + t642;
  t644 = 10.*t643;
  t646 = t640 + t644;
  t649 = 0.25*t372*t437;
  t648 = -0.625*t372*t437;
  t650 = 0.1875*t508;
  t651 = t649 + t650;
  t652 = -10.*t651;
  t653 = t648 + t652;
  t630 = -0.25*t416*t372;
  t631 = -0.25*t372*t443;
  t632 = 0.1875*t448;
  t633 = t630 + t631 + t632;
  t559 = -1.*t386*t558;
  t577 = -1.*t437*t576;
  t578 = t559 + t577;
  t661 = 0.25*t386*t372;
  t662 = 0.0666666666666667*t646;
  t663 = t661 + t662;
  t588 = t508*t558;
  t666 = 0.0666666666666667*t653;
  t667 = t649 + t666;
  t589 = t498*t576;
  t596 = t595*t558;
  t600 = t599*t576;
  t601 = t596 + t600;
  t603 = -0.25*t335*t437*t498;
  t604 = -0.25*t335*t386*t508;
  t608 = t606 + t607;
  t610 = -0.25*t335*t437*t599;
  t611 = -0.25*t335*t386*t595;
  t612 = t610 + t611;
  t697 = -1.*t335*t386*t364;
  t698 = t386*t372*t376;
  t699 = t697 + t698;
  t700 = 0.1875*t699;
  t703 = t533 + t700;
  t704 = -10.*t703;
  t705 = t536 + t704;
  t709 = -0.625*t335*t437;
  t710 = t560 + t567;
  t711 = 10.*t710;
  t712 = t709 + t711;
  t720 = 0.0666666666666667*t705;
  t721 = t533 + t720;
  t723 = 0.25*t335*t437;
  t724 = 0.0666666666666667*t712;
  t725 = t723 + t724;
  t605 = t603 + t604;
  t770 = 0.25*t372;
  t774 = -0.625*t372;
  t775 = -0.25*t372;
  t777 = 0.1875*t491;
  t778 = 0. + t775 + t777;
  t779 = 10.*t778;
  t780 = t774 + t779;
  t781 = 0.0666666666666667*t780;
  t782 = 0. + t770 + t781;
  t784 = t543*t782;
  t785 = -0.625*t335*t386;
  t789 = -10.*t548;
  t790 = t785 + t789;
  t791 = 0.0666666666666667*t790;
  t792 = 0. + t537 + t791;
  t793 = t491*t792;
  t761 = 0.1*t508*t448;
  t762 = 0.1*t566*t494;
  t676 = 0.25*t372*t437*t599;
  t679 = 0.25*t386*t372*t595;
  t680 = t676 + t582 + t679 + t583;
  t629 = 0.9*t448;
  t634 = 1.875*t633;
  t638 = t629 + t634;
  t765 = t566*t527;
  t820 = -0.625*t335;
  t823 = -0.25*t335;
  t824 = 0.1875*t476;
  t825 = t823 + t824;
  t826 = 10.*t825;
  t827 = t820 + t826;
  t682 = 0.25*t372*t437*t543;
  t683 = 0.25*t386*t372*t566;
  t684 = t603 + t682 + t604 + t683;
  t794 = t784 + t793;
  t831 = 0.25*t335;
  t832 = 0.0666666666666667*t827;
  t833 = t831 + t832;
  t800 = t599*t782;
  t801 = t385*t792;
  t802 = t800 + t801;
  t806 = t498*t782;
  t836 = 0.625*t386*t372;
  t837 = -10.*t643;
  t838 = t836 + t837;
  t839 = 0.0666666666666667*t838;
  t840 = t641 + t839;
  t807 = t476*t792;
  t731 = -0.25*t335*t386*t498;
  t732 = -0.25*t335*t386*t599;
  t733 = 0. + t731 + t732;
  t735 = -0.25*t335*t386*t543;
  t736 = -0.25*t335*t386*t699;
  t737 = 0. + t735 + t736;
  t864 = -10.*t710;
  t865 = t561 + t864;
  t868 = 0.0666666666666667*t865;
  t869 = t560 + t868;
  t890 = 0.625*t372;
  t891 = -10.*t778;
  t892 = t890 + t891;
  t895 = 0.0666666666666667*t892;
  t896 = 0. + t775 + t895;
  t899 = 10.*t703;
  t900 = t785 + t899;
  t901 = 0.0666666666666667*t900;
  t902 = t537 + t901;
  t911 = 10.*t568;
  t912 = t709 + t911;
  t913 = 0.0666666666666667*t912;
  t914 = 0. + t723 + t913;
  t910 = t566*t896;
  t916 = t491*t914;
  t918 = t910 + t916;
  t920 = t595*t896;
  t921 = t385*t914;
  t922 = t920 + t921;
  t812 = Power(t335,2);
  t814 = Power(t372,2);
  t927 = 0.1*t498*t448;
  t929 = 0.1*t543*t494;
  t932 = t543*t527;
  t954 = 0.625*t335;
  t955 = -10.*t825;
  t956 = t954 + t955;
  t960 = 0.0666666666666667*t956;
  t961 = t823 + t960;
  t942 = t508*t896;
  t965 = -0.25*t372*t437;
  t966 = 0.625*t372*t437;
  t967 = 10.*t651;
  t968 = t966 + t967;
  t969 = 0.0666666666666667*t968;
  t970 = t965 + t969;
  t943 = t476*t914;
  t988 = 10.*t491*t612;
  t991 = 10.*t476*t584;
  t1000 = 10.*t566*t612;
  t1003 = 10.*t508*t584;
  t1022 = 10.*t543*t612;
  t1024 = 10.*t498*t584;
  t586 = -0.125*t543*t508;
  t587 = 0.125*t498*t566;
  t590 = t586 + t587 + t588 + t589;
  t1048 = -0.25*t335*t491;
  t1049 = -0.25*t386*t372*t543;
  t1050 = 0.25*t372*t437*t566;
  t1051 = t1048 + t1049 + t1050;
  t1043 = t812 + t814;
  t618 = 0.125*t498*t595;
  t619 = -0.125*t599*t508;
  t623 = t618 + t619 + t606 + t607;
  t672 = t566*t663;
  t673 = t543*t667;
  t674 = t672 + t588 + t673 + t589;
  t1054 = -0.25*t386*t372*t498;
  t1055 = -0.25*t335*t476;
  t1056 = 0.25*t372*t437*t508;
  t1059 = -0.1875*t1043;
  t1060 = -0.25*t386*t372*t599;
  t1061 = -0.25*t335*t385;
  t1062 = 0.25*t372*t437*t595;
  t1063 = t1059 + t1060 + t1061 + t1062;
  t686 = t595*t663;
  t687 = t599*t667;
  t688 = t686 + t606 + t687 + t607;
  t740 = t498*t558;
  t741 = t599*t721;
  t742 = t595*t725;
  t743 = t595*t576;
  t746 = t740 + t741 + t742 + t743;
  t748 = t699*t558;
  t749 = t543*t721;
  t750 = t566*t725;
  t751 = t566*t576;
  t754 = t748 + t749 + t750 + t751;
  t1057 = t1054 + t1055 + t1056;
  t796 = -0.125*t498*t385;
  t797 = 0.125*t599*t476;
  t798 = t796 + t797 + t784 + t793;
  t804 = -0.125*t491*t498;
  t805 = 0.125*t476*t543;
  t808 = t804 + t805 + t806 + t807;
  t1074 = 0.25*t372*t385;
  t1075 = 0.25*t335*t437*t595;
  t1076 = 0. + t1048 + t732 + t1074 + t1049 + t1075 + t1050;
  t1078 = 0.25*t372*t491;
  t1079 = 0.25*t335*t437*t566;
  t1080 = t1078 + t1054 + t1055 + t735 + t1056 + t1079;
  t841 = t385*t840;
  t842 = t599*t833;
  t843 = t784 + t841 + t842 + t793;
  t846 = t491*t840;
  t847 = t543*t833;
  t848 = t806 + t846 + t847 + t807;
  t1091 = 0.25*t372*t437*t498;
  t1092 = 0. + t1091 + t676;
  t1094 = 0.25*t372*t437*t699;
  t1095 = 0. + t682 + t1094;
  t863 = t566*t782;
  t870 = t491*t869;
  t871 = t863 + t870;
  t875 = t595*t782;
  t876 = t385*t869;
  t877 = t875 + t876;
  t1130 = 0.9*t1043;
  t1131 = -1.875*t1063;
  t1132 = t1130 + t1131;
  t898 = t699*t896;
  t903 = t491*t902;
  t904 = t898 + t903;
  t906 = t498*t896;
  t907 = t385*t902;
  t908 = t906 + t907;
  t935 = -0.125*t476*t595;
  t936 = 0.125*t385*t508;
  t937 = t935 + t936 + t910 + t916;
  t940 = 0.125*t491*t508;
  t941 = -0.125*t476*t566;
  t944 = t940 + t941 + t942 + t943;
  t1113 = -1.875*t1076;
  t1114 = 0. + t1113;
  t964 = t595*t961;
  t971 = t385*t970;
  t972 = t910 + t964 + t971 + t916;
  t975 = t566*t961;
  t976 = t491*t970;
  t978 = t942 + t975 + t976 + t943;
  t1187 = 10.*t491*t1063;
  t1190 = 10.*t476*t1051;
  t1206 = 10.*t566*t1063;
  t1209 = 10.*t508*t1051;
  t1218 = 10.*t543*t1063;
  t1220 = 10.*t498*t1051;
  t1237 = Power(t364,2);
  t1238 = Power(t376,2);
  t1239 = t1237 + t1238;
  p_output1[0]=(0. + 0.625*t335*t444*(0.0666666666666667*t437*t553 - 0.0666666666666667*t386*t572 - 0.0666666666666667*t437*t705 - 0.0666666666666667*t386*t712) + 10.*t521*(t437*t558 - 1.*t386*t576 - 1.*t437*t721 - 1.*t386*t725) + 10.*t601*t733 + 10.*t608*t737 + 10.*t612*t746 + 10.*t584*t754)*var2[0] + (-1.75625*t335*t372*t444 + t478 + t495 + t531 - 0.625*t372*t444*(-0.0666666666666667*t386*t553 - 0.0666666666666667*t437*t572) + 10.*t578*t633 + t385*t638 + 0.625*t335*t444*(-0.0666666666666667*t386*t646 - 0.0666666666666667*t437*t653) + 10.*t521*(-1.*t386*t663 - 1.*t437*t667) + 10.*t584*t674 + 10.*t601*t680 + 10.*t608*t684 + 10.*t612*t688)*var2[1] + (1.2515625*t385*t448 + t478 + t495 + 0.625*t335*t444*t510 + 10.*t510*t521 + t531 + 1.875*t448*t578 + 10.*t584*t590 + 10.*t584*t601 + 10.*t605*t608 + 10.*t612*t623)*var2[2];
  p_output1[1]=(0. - 0.878125*t335*t372*t386*t444 + t498*t527 - 1.875*t437*t612 + 0.1*t448*t699 + 1.875*t386*t733 - 0.041666666666666664*t335*t386*t444*t780 - 10.*t386*t521*t782 + 10.*t737*t794 + 10.*t733*t802 + 10.*t584*t871 + 10.*t612*t877)*var2[0] + (t595*t638 + 1.875*t386*t680 + t761 + t762 + t765 + 0.041666666666666664*t372*t437*t444*t780 - 10.*t437*t633*t782 + 10.*t684*t794 + 10.*t680*t802 - 0.878125*t437*t444*t812 + 0.878125*t437*t444*t814 - 0.041666666666666664*t335*t437*t444*t827 - 10.*t437*t521*t833 + 10.*t612*t843 + 10.*t584*t848)*var2[1] + (-0.078125*t335*t437*t444*t476 - 1.25*t437*t476*t521 + 1.875*t386*t584 + 1.2515625*t448*t595 + t761 + t762 + t765 - 1.875*t437*t448*t782 + 10.*t605*t794 + 10.*t612*t798 + 10.*t584*t802 + 10.*t584*t808)*var2[2];
  p_output1[2]=(0. - 0.878125*t335*t372*t437*t444 + 0.1*t448*t566 + t527*t595 + 1.875*t386*t612 + 1.875*t437*t733 + 0.041666666666666664*t335*t437*t444*t892 + 10.*t437*t521*t896 + 10.*t584*t904 + 10.*t612*t908 + 10.*t737*t918 + 10.*t733*t922)*var2[0] + (t599*t638 + 1.875*t437*t680 + 0.878125*t386*t444*t812 - 0.878125*t386*t444*t814 + 0.041666666666666664*t372*t386*t444*t892 - 10.*t386*t633*t896 + 10.*t684*t918 + 10.*t680*t922 + t927 + t929 + t932 - 0.041666666666666664*t335*t386*t444*t956 - 10.*t386*t521*t961 + 10.*t612*t972 + 10.*t584*t978)*var2[1] + (0.078125*t335*t386*t444*t476 + 1.25*t386*t476*t521 + 1.875*t437*t584 + 1.2515625*t448*t599 - 1.875*t386*t448*t896 + 10.*t605*t918 + 10.*t584*t922 + t927 + t929 + t932 + 10.*t612*t937 + 10.*t584*t944)*var2[2];
  p_output1[3]=(10.*t385*t733 + 10.*t491*t737)*var2[0] + (10.*t385*t680 + 10.*t491*t684 + t988 + t991)*var2[1] + (10.*t385*t584 + 10.*t491*t605 + t988 + t991)*var2[2];
  p_output1[4]=(0. + 0.625*t335*t437*t444 + 10.*t437*t521 + 10.*t498*t612 + 10.*t584*t699 + 10.*t595*t733 + 10.*t566*t737)*var2[0] + (t1000 + t1003 + 0.625*t372*t386*t444 - 10.*t386*t633 + 10.*t595*t680 + 10.*t566*t684)*var2[1] + (t1000 + t1003 - 1.875*t386*t448 + 10.*t584*t595 + 10.*t566*t605)*var2[2];
  p_output1[5]=(0. - 0.625*t335*t386*t444 - 10.*t386*t521 + 10.*t566*t584 + 10.*t595*t612 + 10.*t599*t733 + 10.*t543*t737)*var2[0] + (t1022 + t1024 + 0.625*t372*t437*t444 - 10.*t437*t633 + 10.*t599*t680 + 10.*t543*t684)*var2[1] + (t1022 + t1024 - 1.875*t437*t448 + 10.*t584*t599 + 10.*t543*t605)*var2[2];
  p_output1[6]=(10.*t1092*t601 + 10.*t1095*t608 - 0.625*t1043*(-0.0666666666666667*t372*t386*t553 - 0.0666666666666667*t372*t437*t572 + 0.0666666666666667*t372*t386*t705 - 0.0666666666666667*t372*t437*t712) + 10.*t1063*t746 + 10.*t1051*t754)*var2[0] + (0. + 10.*t1076*t601 + 10.*t1080*t608 - 0.625*t1043*(-0.0666666666666667*t335*t437*t553 + 0.0666666666666667*t335*t386*t572 - 0.0666666666666667*t372*t437*t646 + 0.0666666666666667*t372*t386*t653) + 10.*t1051*t674 + 10.*t1063*t688)*var2[1] + (-0.625*t1043*(-0.125*t372*t437*t498 - 0.125*t372*t386*t508) + 10.*t1051*t590 + 10.*t1051*t601 + 10.*t1057*t608 + 10.*t1063*t623)*var2[2];
  p_output1[7]=(1.875*t1092*t386 + 0.978125*t1043*t437 + t1132*t437 + 10.*t1095*t794 + 10.*t1092*t802 - 0.625*t1043*(-0.0666666666666667*t372*t437*t780 + 0.0666666666666667*t335*t865) + 10.*t1051*t871 + 10.*t1063*t877)*var2[0] + (0. - 1.*t1114*t386 + 10.*t1080*t794 + 10.*t1076*t802 - 0.625*t1043*(0.0666666666666667*t335*t386*t780 - 0.0666666666666667*t372*t790 + 0.0666666666666667*t372*t386*t827 + 0.0666666666666667*t335*t838) + 10.*t1063*t843 + 10.*t1051*t848)*var2[1] + (1.875*t1051*t386 - 0.625*t1043*(0.125*t372*t386*t476 - 0.125*t335*t498) + 10.*t1057*t794 + 10.*t1063*t798 + 10.*t1051*t802 + 10.*t1051*t808)*var2[2];
  p_output1[8]=(-0.978125*t1043*t386 - 1.*t1132*t386 + 1.875*t1092*t437 - 0.625*t1043*(-0.0666666666666667*t372*t386*t892 + 0.0666666666666667*t335*t900) + 10.*t1051*t904 + 10.*t1063*t908 + 10.*t1095*t918 + 10.*t1092*t922)*var2[0] + (0. - 1.*t1114*t437 + 10.*t1080*t918 + 10.*t1076*t922 - 0.625*t1043*(-0.0666666666666667*t335*t437*t892 - 0.0666666666666667*t372*t912 - 0.0666666666666667*t372*t437*t956 + 0.0666666666666667*t335*t968) + 10.*t1063*t972 + 10.*t1051*t978)*var2[1] + (1.875*t1051*t437 - 0.625*t1043*(0.125*t372*t437*t476 + 0.125*t335*t508) + 10.*t1057*t918 + 10.*t1051*t922 + 10.*t1063*t937 + 10.*t1051*t944)*var2[2];
  p_output1[9]=(10.*t1092*t385 + 10.*t1095*t491)*var2[0] + (t1187 + t1190 + 0.625*t1043*t372 + 10.*t1076*t385 + 10.*t1080*t491)*var2[1] + (t1187 + t1190 + 10.*t1051*t385 + 10.*t1057*t491)*var2[2];
  p_output1[10]=(0.625*t1043*t372*t386 + 10.*t1063*t498 + 10.*t1095*t566 + 10.*t1092*t595 + 10.*t1051*t699)*var2[0] + (0. + t1206 + t1209 + 0.625*t1043*t335*t437 + 10.*t1080*t566 + 10.*t1076*t595)*var2[1] + (t1206 + t1209 + 10.*t1057*t566 + 10.*t1051*t595)*var2[2];
  p_output1[11]=(0.625*t1043*t372*t437 + 10.*t1095*t543 + 10.*t1051*t566 + 10.*t1063*t595 + 10.*t1092*t599)*var2[0] + (0. + t1218 + t1220 - 0.625*t1043*t335*t386 + 10.*t1080*t543 + 10.*t1076*t599)*var2[1] + (t1218 + t1220 + 10.*t1057*t543 + 10.*t1051*t599)*var2[2];
  p_output1[12]=-1.875*t1239*t746*var2[0] - 1.875*t1239*t688*var2[1] + (0. - 1.875*t1239*t623)*var2[2];
  p_output1[13]=(1.2515625*t1239*t437 - 1.875*t1239*t877)*var2[0] - 1.875*t1239*t843*var2[1] + (0. - 1.875*t1239*t798)*var2[2];
  p_output1[14]=(-1.2515625*t1239*t386 - 1.875*t1239*t908)*var2[0] - 1.875*t1239*t972*var2[1] + (0. - 1.875*t1239*t937)*var2[2];
  p_output1[15]=-1.875*t1239*t491*var2[1] + (0. - 1.875*t1239*t491)*var2[2];
  p_output1[16]=-1.875*t1239*t498*var2[0] - 1.875*t1239*t566*var2[1] + (0. - 1.875*t1239*t566)*var2[2];
  p_output1[17]=-1.875*t1239*t595*var2[0] - 1.875*t1239*t543*var2[1] + (0. - 1.875*t1239*t543)*var2[2];
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
