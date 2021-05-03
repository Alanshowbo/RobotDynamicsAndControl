/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:05 GMT-04:00
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
  double t629;
  double t609;
  double t626;
  double t634;
  double t641;
  double t642;
  double t647;
  double t671;
  double t676;
  double t679;
  double t681;
  double t683;
  double t661;
  double t664;
  double t668;
  double t669;
  double t670;
  double t685;
  double t686;
  double t689;
  double t690;
  double t694;
  double t698;
  double t700;
  double t708;
  double t713;
  double t716;
  double t756;
  double t757;
  double t760;
  double t761;
  double t762;
  double t800;
  double t801;
  double t803;
  double t763;
  double t764;
  double t765;
  double t770;
  double t774;
  double t775;
  double t777;
  double t783;
  double t784;
  double t785;
  double t795;
  double t796;
  double t799;
  double t823;
  double t824;
  double t828;
  double t853;
  double t857;
  double t858;
  double t859;
  double t860;
  double t861;
  double t869;
  double t870;
  double t875;
  double t876;
  double t880;
  double t842;
  double t844;
  double t845;
  double t910;
  double t914;
  double t916;
  double t874;
  double t883;
  double t884;
  double t898;
  double t902;
  double t903;
  double t890;
  double t893;
  double t894;
  double t897;
  double t905;
  double t906;
  double t907;
  double t919;
  double t920;
  double t921;
  double t923;
  double t924;
  double t925;
  double t926;
  double t930;
  double t931;
  double t932;
  double t933;
  double t934;
  double t935;
  double t939;
  double t940;
  double t941;
  double t942;
  double t943;
  double t946;
  double t947;
  double t948;
  double t949;
  double t951;
  double t958;
  double t959;
  double t962;
  double t983;
  double t811;
  double t812;
  double t813;
  double t840;
  double t846;
  double t847;
  double t985;
  double t986;
  double t987;
  double t829;
  double t830;
  double t831;
  double t835;
  double t836;
  double t850;
  double t851;
  double t627;
  double t638;
  double t639;
  double t984;
  double t989;
  double t990;
  double t992;
  double t1005;
  double t1006;
  double t1007;
  double t1008;
  double t1009;
  double t1010;
  double t1011;
  double t1012;
  double t1013;
  double t1014;
  double t1015;
  double t1016;
  double t805;
  double t806;
  double t807;
  double t1001;
  double t995;
  double t810;
  double t814;
  double t817;
  double t1019;
  double t1020;
  double t1021;
  double t1023;
  double t1025;
  double t1026;
  double t1027;
  double t1028;
  double t1029;
  double t1030;
  double t1031;
  double t656;
  double t657;
  double t658;
  double t1085;
  double t1086;
  double t1087;
  double t804;
  double t809;
  double t818;
  double t819;
  double t945;
  double t953;
  double t954;
  double t648;
  double t659;
  double t717;
  double t718;
  double t719;
  double t723;
  double t726;
  double t730;
  double t731;
  double t732;
  double t734;
  double t735;
  double t740;
  double t743;
  double t747;
  double t755;
  double t820;
  double t852;
  double t885;
  double t909;
  double t927;
  double t928;
  double t929;
  double t936;
  double t938;
  double t957;
  double t963;
  double t964;
  double t965;
  double t966;
  double t970;
  double t971;
  double t973;
  double t974;
  double t975;
  double t976;
  double t980;
  double t981;
  double t982;
  double t1040;
  double t1041;
  double t1042;
  double t1035;
  double t1036;
  double t1037;
  double t1054;
  double t1055;
  double t1056;
  double t1058;
  double t1120;
  double t1121;
  double t1122;
  double t1066;
  double t1067;
  double t1068;
  double t1061;
  double t1062;
  double t1064;
  double t1123;
  double t1130;
  double t1131;
  double t1133;
  double t998;
  double t999;
  double t1002;
  double t993;
  double t994;
  double t996;
  double t1129;
  double t1134;
  double t1135;
  double t1160;
  double t1169;
  double t1170;
  double t1171;
  double t1161;
  double t1162;
  double t1163;
  double t1165;
  double t1166;
  double t1167;
  double t1139;
  double t1140;
  double t1141;
  double t1142;
  double t1143;
  double t1145;
  double t1146;
  double t1147;
  double t1148;
  double t1149;
  double t1073;
  double t1107;
  double t1108;
  double t1109;
  double t1110;
  double t1111;
  double t1113;
  double t1115;
  double t1116;
  double t1117;
  double t1118;
  double t1124;
  double t1125;
  double t1126;
  double t1127;
  double t1128;
  double t1090;
  double t1094;
  double t1164;
  double t1168;
  double t1172;
  double t1173;
  double t1174;
  double t1175;
  double t1176;
  double t1177;
  double t1178;
  double t1179;
  double t1180;
  double t1181;
  double t1182;
  double t1183;
  double t1184;
  double t1185;
  double t1186;
  double t1188;
  double t1189;
  double t1191;
  double t1102;
  double t1103;
  double t1104;
  double t1105;
  double t1106;
  double t1112;
  double t1119;
  double t1136;
  double t1137;
  double t1138;
  double t1144;
  double t1150;
  double t1151;
  double t1039;
  double t1060;
  double t1070;
  double t1229;
  double t1230;
  double t1231;
  double t1216;
  double t1217;
  double t1219;
  double t1222;
  double t1223;
  double t1224;
  double t1244;
  double t1245;
  double t1246;
  double t1152;
  double t1153;
  double t1157;
  double t1158;
  double t1159;
  double t1266;
  double t1275;
  double t1276;
  double t1277;
  double t1267;
  double t1268;
  double t1269;
  double t1271;
  double t1272;
  double t1273;
  double t1270;
  double t1274;
  double t1278;
  double t1279;
  double t1280;
  double t1281;
  double t1282;
  double t1283;
  double t1284;
  double t1285;
  double t1286;
  double t1287;
  double t1288;
  double t1289;
  double t1290;
  double t1291;
  double t1292;
  double t1293;
  double t1294;
  double t1295;
  double t1260;
  double t1261;
  double t1262;
  double t1017;
  double t1018;
  double t1317;
  double t1318;
  double t1319;
  double t1307;
  double t1308;
  double t1309;
  double t1311;
  double t1312;
  double t1313;
  double t1332;
  double t1333;
  double t1334;
  t629 = Cos(var1[0]);
  t609 = Cos(var1[1]);
  t626 = Sin(var1[0]);
  t634 = Sin(var1[1]);
  t641 = -0.125*var2[0]*t629*t609;
  t642 = 0.125*var2[1]*t626*t634;
  t647 = t641 + t642;
  t671 = Power(t629,2);
  t676 = var2[0]*t671;
  t679 = Power(t626,2);
  t681 = var2[0]*t679;
  t683 = t676 + t681;
  t661 = Power(t609,2);
  t664 = var2[1]*t661;
  t668 = Power(t634,2);
  t669 = var2[1]*t668;
  t670 = t664 + t669;
  t685 = 0.5*t609*t683;
  t686 = 0. + t685;
  t689 = -0.9*t626*t686*t634;
  t690 = -0.5*t683*t634;
  t694 = 0. + t690;
  t698 = -0.1*t609*t626*t694;
  t700 = 0.5*t671*t670;
  t708 = 0.5*t679*t670;
  t713 = 0. + t700 + t708;
  t716 = -0.9*t629*t713;
  t756 = Cos(var1[2]);
  t757 = t756*t626*t634;
  t760 = Sin(var1[2]);
  t761 = t609*t626*t760;
  t762 = t757 + t761;
  t800 = t629*t756*t634;
  t801 = t629*t609*t760;
  t803 = t800 + t801;
  t763 = 0.1875*var2[2]*t762;
  t764 = 0.25*t626*t634;
  t765 = 0.1875*t762;
  t770 = t764 + t765;
  t774 = var2[1]*t770;
  t775 = -0.25*t629*t609;
  t777 = -1.*t629*t609*t756;
  t783 = t629*t634*t760;
  t784 = t777 + t783;
  t785 = 0.1875*t784;
  t795 = t775 + t785;
  t796 = var2[0]*t795;
  t799 = t763 + t774 + t796;
  t823 = -1.*t629*t756*t634;
  t824 = -1.*t629*t609*t760;
  t828 = t823 + t824;
  t853 = -1.*t629*t670;
  t857 = Power(t756,2);
  t858 = var2[2]*t857;
  t859 = Power(t760,2);
  t860 = var2[2]*t859;
  t861 = t858 + t860;
  t869 = -1.*t629*t861;
  t870 = t853 + t869;
  t875 = -1.*t626*t670;
  t876 = -1.*t626*t861;
  t880 = t875 + t876;
  t842 = -1.*t609*t756*t626;
  t844 = t626*t634*t760;
  t845 = t842 + t844;
  t910 = t629*t609*t756;
  t914 = -1.*t629*t634*t760;
  t916 = t910 + t914;
  t874 = -0.5*t629*t870;
  t883 = -0.5*t626*t880;
  t884 = 0. + t874 + t883;
  t898 = -1.*t756*t626*t634;
  t902 = -1.*t609*t626*t760;
  t903 = t898 + t902;
  t890 = t609*t756;
  t893 = -1.*t634*t760;
  t894 = t890 + t893;
  t897 = 0.5*t683*t894;
  t905 = 0.5*t903*t870;
  t906 = 0.5*t803*t880;
  t907 = t897 + t905 + t906;
  t919 = -1.*t756*t634;
  t920 = -1.*t609*t760;
  t921 = t919 + t920;
  t923 = 0.5*t683*t921;
  t924 = 0.5*t845*t870;
  t925 = 0.5*t916*t880;
  t926 = t923 + t924 + t925;
  t930 = t626*t670;
  t931 = t626*t861;
  t932 = t930 + t931;
  t933 = -0.9*t629*t884;
  t934 = 0.9*t903*t907;
  t935 = 0.1*t845*t926;
  t939 = 0.5*t828*t870;
  t940 = 0.5*t803*t870;
  t941 = 0.5*t903*t880;
  t942 = 0.5*t903*t932;
  t943 = 0. + t939 + t940 + t941 + t942;
  t946 = 0.5*t916*t870;
  t947 = 0.5*t784*t870;
  t948 = 0.5*t845*t880;
  t949 = 0.5*t845*t932;
  t951 = 0. + t946 + t947 + t948 + t949;
  t958 = -0.5*t629*t880;
  t959 = -0.5*t629*t932;
  t962 = 0. + t958 + t959;
  t983 = t671 + t679;
  t811 = t609*t756*t626;
  t812 = -1.*t626*t634*t760;
  t813 = t811 + t812;
  t840 = -0.25*t609*t626;
  t846 = 0.1875*t845;
  t847 = t840 + t846;
  t985 = -1.*t609*t756;
  t986 = t634*t760;
  t987 = t985 + t986;
  t829 = 0.1875*var2[2]*t828;
  t830 = -0.25*t629*t634;
  t831 = 0.1875*t828;
  t835 = t830 + t831;
  t836 = var2[1]*t835;
  t850 = var2[0]*t847;
  t851 = t829 + t836 + t850;
  t627 = -0.125*var2[0]*t609*t626;
  t638 = -0.125*var2[1]*t629*t634;
  t639 = t627 + t638;
  t984 = 0.9*t983*t921*t894;
  t989 = 0.1*t983*t921*t987;
  t990 = t984 + t989;
  t992 = t683*t990;
  t1005 = 0.45*t983*t921*t903;
  t1006 = 0.05*t983*t921*t762;
  t1007 = 0.45*t983*t894*t845;
  t1008 = 0.05*t983*t987*t845;
  t1009 = t1005 + t1006 + t1007 + t1008;
  t1010 = t1009*t870;
  t1011 = 0.05*t983*t921*t828;
  t1012 = 0.45*t983*t921*t803;
  t1013 = 0.45*t983*t894*t916;
  t1014 = 0.05*t983*t987*t916;
  t1015 = t1011 + t1012 + t1013 + t1014;
  t1016 = t1015*t880;
  t805 = 0.25*t629*t634;
  t806 = 0.1875*t803;
  t807 = t805 + t806;
  t1001 = 0.1875*var2[2]*t784;
  t995 = 0.1875*var2[2]*t813;
  t810 = 0.25*t609*t626;
  t814 = 0.1875*t813;
  t817 = t810 + t814;
  t1019 = 0.5*t683*t987;
  t1020 = 0.5*t762*t870;
  t1021 = 0.5*t828*t880;
  t1023 = 0. + t1019 + t1020 + t1021;
  t1025 = 0.1*t921*t1023;
  t1026 = 0.9*t921*t907;
  t1027 = 0.1*t987*t926;
  t1028 = 0. + t923 + t924 + t925;
  t1029 = 0.9*t894*t1028;
  t1030 = t1025 + t1026 + t1027 + t1029;
  t1031 = t983*t1030;
  t656 = 0.125*var2[0]*t609*t626;
  t657 = 0.125*var2[1]*t629*t634;
  t658 = t656 + t657;
  t1085 = 0.45*t983*t903*t894;
  t1086 = 0.05*t983*t921*t845;
  t1087 = t1085 + t1086;
  t804 = 0.1875*var2[2]*t803;
  t809 = var2[1]*t807;
  t818 = var2[0]*t817;
  t819 = t804 + t809 + t818;
  t945 = 0.9*t894*t943;
  t953 = 0.1*t921*t951;
  t954 = t945 + t953;
  t648 = 5.*t639*t647;
  t659 = 5.*t658*t647;
  t717 = t689 + t698 + t716;
  t718 = t626*t670*t717;
  t719 = 0. + t689 + t698 + t716;
  t723 = -1.*t626*t670*t719;
  t726 = 0.9*t629*t686*t634;
  t730 = 0.1*t629*t609*t694;
  t731 = -0.9*t626*t713;
  t732 = t726 + t730 + t731;
  t734 = -1.*t629*t670*t732;
  t735 = -0.9*t629*t686*t634;
  t740 = -0.1*t629*t609*t694;
  t743 = 0.9*t626*t713;
  t747 = 0. + t735 + t740 + t743;
  t755 = -1.*t629*t670*t747;
  t820 = 10.*t799*t819;
  t852 = 10.*t799*t851;
  t885 = -0.9*t626*t884;
  t909 = 0.9*t803*t907;
  t927 = 0.1*t916*t926;
  t928 = t885 + t909 + t927;
  t929 = t870*t928;
  t936 = t933 + t934 + t935;
  t938 = t932*t936;
  t957 = t683*t954;
  t963 = -0.9*t626*t962;
  t964 = 0.9*t803*t943;
  t965 = 0.1*t916*t951;
  t966 = t933 + t934 + t935 + t963 + t964 + t965;
  t970 = t880*t966;
  t971 = 0.9*t626*t884;
  t973 = 0.9*t828*t907;
  t974 = 0.1*t784*t926;
  t975 = -0.9*t629*t962;
  t976 = 0.9*t903*t943;
  t980 = 0.1*t845*t951;
  t981 = t971 + t973 + t974 + t975 + t976 + t980;
  t982 = t870*t981;
  t1040 = -0.125*var2[1]*t629*t609;
  t1041 = 0.125*var2[0]*t626*t634;
  t1042 = t1040 + t1041;
  t1035 = 0.125*var2[1]*t609*t626;
  t1036 = 0.125*var2[0]*t629*t634;
  t1037 = t1035 + t1036;
  t1054 = -0.4*t609*t683*t634;
  t1055 = -0.9*t686*t634;
  t1056 = -0.1*t609*t694;
  t1058 = t1054 + t1055 + t1056;
  t1120 = t756*t634;
  t1121 = t609*t760;
  t1122 = t1120 + t1121;
  t1066 = var2[0]*t807;
  t1067 = var2[1]*t817;
  t1068 = t995 + t1066 + t1067;
  t1061 = var2[0]*t770;
  t1062 = var2[1]*t795;
  t1064 = t1001 + t1061 + t1062;
  t1123 = 0.1875*var2[2]*t1122;
  t1130 = -0.25*t609;
  t1131 = 0.1875*t987;
  t1133 = t1130 + t1131;
  t998 = 0.1875*var2[0]*t762;
  t999 = 0.1875*var2[1]*t784;
  t1002 = t998 + t999 + t1001;
  t993 = 0.1875*var2[0]*t803;
  t994 = 0.1875*var2[1]*t813;
  t996 = t993 + t994 + t995;
  t1129 = 0.1875*var2[2]*t987;
  t1134 = var2[1]*t1133;
  t1135 = t1129 + t1134;
  t1160 = t661 + t668;
  t1169 = -0.5*t626*t1160*t916;
  t1170 = -0.5*t629*t1160*t845;
  t1171 = t1169 + t1170;
  t1161 = -0.5*t626*t1160*t803;
  t1162 = -0.5*t629*t1160*t903;
  t1163 = t1161 + t1162;
  t1165 = -0.5*t626*t1160*t828;
  t1166 = -0.5*t629*t1160*t762;
  t1167 = t1165 + t1166;
  t1139 = 0.1*t916*t1023;
  t1140 = 0.9*t916*t907;
  t1141 = 0.1*t828*t926;
  t1142 = 0.9*t803*t1028;
  t1143 = 0. + t1139 + t1140 + t1141 + t1142;
  t1145 = 0.1*t845*t1023;
  t1146 = 0.9*t845*t907;
  t1147 = 0.1*t762*t926;
  t1148 = 0.9*t903*t1028;
  t1149 = 0. + t1145 + t1146 + t1147 + t1148;
  t1073 = -0.625*t629*t609*t639;
  t1107 = -0.05*t629*t661*t683;
  t1108 = 0.9*t629*t609*t686;
  t1109 = -0.45*t629*t683*t668;
  t1110 = -0.1*t629*t634*t694;
  t1111 = 0. + t1107 + t1108 + t1109 + t1110;
  t1113 = 0.05*t661*t626*t683;
  t1115 = -0.9*t609*t626*t686;
  t1116 = 0.45*t626*t683*t668;
  t1117 = 0.1*t626*t634*t694;
  t1118 = 0. + t1113 + t1115 + t1116 + t1117;
  t1124 = 0.25*t634;
  t1125 = 0.1875*t1122;
  t1126 = t1124 + t1125;
  t1127 = var2[1]*t1126;
  t1128 = t1123 + t1127;
  t1090 = 10.*t817*t799;
  t1094 = 10.*t795*t851;
  t1164 = 0.9*t916*t1163;
  t1168 = 0.1*t916*t1167;
  t1172 = 0.1*t828*t1171;
  t1173 = 0.9*t803*t1171;
  t1174 = t1164 + t1168 + t1172 + t1173;
  t1175 = t880*t1174;
  t1176 = 0.9*t845*t1163;
  t1177 = 0.1*t845*t1167;
  t1178 = 0.9*t903*t1171;
  t1179 = 0.1*t762*t1171;
  t1180 = t1176 + t1177 + t1178 + t1179;
  t1181 = t870*t1180;
  t1182 = 0.9*t921*t1163;
  t1183 = 0.1*t921*t1167;
  t1184 = 0.9*t894*t1171;
  t1185 = 0.1*t987*t1171;
  t1186 = t1182 + t1183 + t1184 + t1185;
  t1188 = t683*t1186;
  t1189 = -1.*t626*t1160*t1143;
  t1191 = -1.*t629*t1160*t1149;
  t1102 = Power(var2[1],2);
  t1103 = -0.078125*t1102*t609*t634;
  t1104 = 5.*t639*t1042;
  t1105 = 5.*t1037*t647;
  t1106 = t683*t1058;
  t1112 = -1.*t626*t670*t1111;
  t1119 = -1.*t629*t670*t1118;
  t1136 = 10.*t1128*t1135;
  t1137 = 10.*t799*t1068;
  t1138 = 10.*t1064*t851;
  t1144 = t880*t1143;
  t1150 = t870*t1149;
  t1151 = t683*t1030;
  t1039 = 0.625*t626*t634*t639;
  t1060 = 10.*t807*t799;
  t1070 = 10.*t770*t851;
  t1229 = 0.5*t671*t1160;
  t1230 = 0.5*t679*t1160;
  t1231 = t1229 + t1230;
  t1216 = -0.5*t629*t1160*t828;
  t1217 = -0.5*t629*t1160*t803;
  t1219 = 0. + t1216 + t1217;
  t1222 = -0.5*t629*t1160*t916;
  t1223 = -0.5*t629*t1160*t784;
  t1224 = 0. + t1222 + t1223;
  t1244 = -0.9*t629*t1231;
  t1245 = 0.9*t903*t1163;
  t1246 = 0.1*t845*t1171;
  t1152 = 0.1875*var2[1]*t1122;
  t1153 = t1152 + t1123;
  t1157 = 1.875*t1122*t1135;
  t1158 = 1.875*t813*t799;
  t1159 = 1.875*t784*t851;
  t1266 = t857 + t859;
  t1275 = -0.5*t626*t916*t1266;
  t1276 = -0.5*t629*t845*t1266;
  t1277 = t1275 + t1276;
  t1267 = -0.5*t626*t803*t1266;
  t1268 = -0.5*t629*t903*t1266;
  t1269 = t1267 + t1268;
  t1271 = -0.5*t626*t828*t1266;
  t1272 = -0.5*t629*t762*t1266;
  t1273 = t1271 + t1272;
  t1270 = 0.9*t916*t1269;
  t1274 = 0.1*t916*t1273;
  t1278 = 0.1*t828*t1277;
  t1279 = 0.9*t803*t1277;
  t1280 = t1270 + t1274 + t1278 + t1279;
  t1281 = t880*t1280;
  t1282 = 0.9*t845*t1269;
  t1283 = 0.1*t845*t1273;
  t1284 = 0.9*t903*t1277;
  t1285 = 0.1*t762*t1277;
  t1286 = t1282 + t1283 + t1284 + t1285;
  t1287 = t870*t1286;
  t1288 = 0.9*t921*t1269;
  t1289 = 0.1*t921*t1273;
  t1290 = 0.9*t894*t1277;
  t1291 = 0.1*t987*t1277;
  t1292 = t1288 + t1289 + t1290 + t1291;
  t1293 = t683*t1292;
  t1294 = -1.*t626*t1266*t1143;
  t1295 = -1.*t629*t1266*t1149;
  t1260 = 10.*t1153*t1135;
  t1261 = 10.*t996*t799;
  t1262 = 10.*t1002*t851;
  t1017 = 1.875*t803*t799;
  t1018 = 1.875*t762*t851;
  t1317 = 0.5*t671*t1266;
  t1318 = 0.5*t679*t1266;
  t1319 = t1317 + t1318;
  t1307 = -0.5*t629*t828*t1266;
  t1308 = -0.5*t629*t803*t1266;
  t1309 = 0. + t1307 + t1308;
  t1311 = -0.5*t629*t916*t1266;
  t1312 = -0.5*t629*t784*t1266;
  t1313 = 0. + t1311 + t1312;
  t1332 = -0.9*t629*t1319;
  t1333 = 0.9*t903*t1269;
  t1334 = 0.1*t845*t1277;
  p_output1[0]=0. + t648 + t659 + t718 + t723 + t734 + t755 + t820 + t852 + t929 + t938 + t957 + t970 + t982 - 2.*(0. + t648 + t659 + t718 + t723 + t734 + t755 + t820 + t852 + t929 + t938 + t957 + t970 + t982) + (0. + t1073 + t1090 + t1094 - 0.625*t609*t629*t658 + 10.*t795*t819 + 10.*t799*t847 + t1087*t880 + t1087*t932 + t954*t983 + t870*(0.45*t828*t894*t983 + 0.05*t784*t921*t983) + t870*(0.45*t803*t894*t983 + 0.05*t916*t921*t983))*var2[0] + (t1010 + t1016 + t1031 + t1039 + t1060 + t1070 - 0.625*t1042*t609*t626 - 0.625*t1037*t609*t629 + 0.625*t629*t634*t647 + 10.*t1068*t795 + 10.*t1064*t847 + t1058*t983 - 0.8*t609*t634*t683*t983 - 1.*t629*t670*(-0.4*t626*t661*t983 + 0.4*t626*t668*t983) - 1.*t626*t670*(0.4*t629*t661*t983 - 0.4*t629*t668*t983) + t992)*var2[1] + (t1010 + t1016 + t1017 + t1018 + t1031 + 10.*t1002*t847 + t992 + 10.*t795*t996)*var2[2];
  p_output1[1]=t1103 + t1104 + t1105 + t1106 + t1112 + t1119 + t1136 + t1137 + t1138 + t1144 + t1150 + t1151 - 2.*(t1103 + t1104 + t1105 + t1106 + t1112 + t1119 + t1136 + t1137 + t1138 + t1144 + t1150 + t1151) + (0. + t1039 + t1060 + t1070 + 0.625*t626*t634*t658 + t1160*t626*t717 - 1.*t1160*t626*t719 - 1.*t1160*t629*t732 - 1.*t1160*t629*t747 + 10.*t770*t819 + 10.*t799*t835 + t870*(0. + 0.9*t1231*t626 + 0.1*t1171*t784 + 0.9*t1163*t828 + 0.1*t1224*t845 + 0.9*t1219*t903) + t870*(-0.9*t1231*t626 + 0.9*t1163*t803 + 0.1*t1171*t916) + t880*(0. + t1244 + t1245 + t1246 + 0.9*t1219*t803 + 0.1*t1224*t916) + t683*(0.9*t1219*t894 + 0.1*t1224*t921) - 1.*t1160*t629*t928 + (t1244 + t1245 + t1246)*t932 + t1160*t626*t936 - 1.*t1160*t626*t966 - 1.*t1160*t629*t981)*var2[0] + var2[1]*(t1073 + t1090 + t1094 + 10.*t1128*t1133 + 10.*t1126*t1135 + t1175 + t1181 + t1188 + t1189 + t1191 - 1.*t1111*t1160*t626 - 1.*t1118*t1160*t629 + 0.625*t1037*t626*t634 - 0.625*t1042*t629*t634 + 0.625*t609*t626*t647 + 10.*t1068*t770 + 10.*t1064*t835 - 0.15625*t609*t634*var2[1]) + (10.*t1133*t1153 + t1157 + t1158 + t1159 + t1175 + t1181 + t1188 + t1189 + t1191 + 10.*t1002*t835 + 10.*t770*t996)*var2[2];
  p_output1[2]=t1144 + t1150 + t1151 + t1260 + t1261 + t1262 - 2.*(t1144 + t1150 + t1151 + t1260 + t1261 + t1262) + (t1017 + t1018 + 1.875*t762*t819 + 1.875*t799*t828 + t870*(0. + 0.9*t1319*t626 + 0.1*t1277*t784 + 0.9*t1269*t828 + 0.1*t1313*t845 + 0.9*t1309*t903) + t870*(-0.9*t1319*t626 + 0.9*t1269*t803 + 0.1*t1277*t916) + t880*(0. + t1332 + t1333 + t1334 + 0.9*t1309*t803 + 0.1*t1313*t916) + t683*(0.9*t1309*t894 + 0.1*t1313*t921) - 1.*t1266*t629*t928 + (t1332 + t1333 + t1334)*t932 + t1266*t626*t936 - 1.*t1266*t626*t966 - 1.*t1266*t629*t981)*var2[0] + (t1157 + t1158 + t1159 + t1281 + t1287 + t1293 + t1294 + t1295 + 1.875*t1068*t762 + 1.875*t1064*t828 + 1.875*t1128*t987)*var2[1] + (t1157 + t1158 + t1159 + t1281 + t1287 + t1293 + t1294 + t1295 + 1.875*t1002*t828 + 1.875*t1153*t987 + 1.875*t762*t996)*var2[2];
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

#include "gen3_Cdq.hh"

namespace SymExpression
{

void gen3_Cdq_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
