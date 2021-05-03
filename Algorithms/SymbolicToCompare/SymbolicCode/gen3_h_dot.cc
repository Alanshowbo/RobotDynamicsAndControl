/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:12 GMT-04:00
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
  double t683;
  double t713;
  double t690;
  double t765;
  double t785;
  double t718;
  double t880;
  double t929;
  double t932;
  double t935;
  double t962;
  double t963;
  double t964;
  double t801;
  double t803;
  double t804;
  double t811;
  double t813;
  double t828;
  double t830;
  double t831;
  double t836;
  double t884;
  double t890;
  double t905;
  double t906;
  double t907;
  double t909;
  double t910;
  double t916;
  double t970;
  double t971;
  double t973;
  double t975;
  double t800;
  double t840;
  double t844;
  double t921;
  double t923;
  double t857;
  double t870;
  double t874;
  double t731;
  double t774;
  double t775;
  double t845;
  double t924;
  double t925;
  double t927;
  double t938;
  double t1027;
  double t954;
  double t957;
  double t958;
  double t940;
  double t942;
  double t947;
  double t1014;
  double t1015;
  double t1019;
  double t1053;
  double t1054;
  double t1058;
  double t1059;
  double t1061;
  double t1062;
  double t1079;
  double t1081;
  double t1082;
  double t1084;
  double t1085;
  double t1086;
  double t1083;
  double t1087;
  double t1088;
  double t1116;
  double t1117;
  double t1120;
  double t1101;
  double t1102;
  double t1107;
  double t1108;
  double t1109;
  double t1110;
  double t1113;
  double t1115;
  double t1121;
  double t1122;
  double t990;
  double t993;
  double t994;
  double t1131;
  double t1134;
  double t1139;
  double t1069;
  double t1071;
  double t1072;
  double t1091;
  double t685;
  double t1093;
  double t694;
  double t1073;
  double t1074;
  double t1075;
  double t1077;
  double t1078;
  double t1124;
  double t1125;
  double t1127;
  double t1129;
  double t1096;
  double t1207;
  double t1208;
  double t1210;
  double t1211;
  double t1212;
  double t1213;
  double t1215;
  double t1216;
  double t1217;
  double t1219;
  double t1221;
  double t1222;
  double t983;
  double t984;
  double t986;
  double t1193;
  double t1194;
  double t1195;
  double t1196;
  double t1197;
  double t1198;
  double t1199;
  double t1200;
  double t1201;
  double t1202;
  double t1140;
  double t1233;
  double t1234;
  double t1235;
  double t1237;
  double t1238;
  double t1145;
  double t1146;
  double t1155;
  double t1156;
  double t1161;
  double t1164;
  double t1165;
  double t1166;
  double t1167;
  double t1168;
  double t1169;
  double t1170;
  double t1171;
  double t1277;
  double t1278;
  double t1279;
  double t1280;
  double t1281;
  double t1282;
  double t1283;
  double t1285;
  double t1286;
  double t1287;
  double t1288;
  double t1267;
  double t1268;
  double t1269;
  double t1270;
  double t1271;
  double t1272;
  double t1302;
  double t1303;
  double t1305;
  double t1306;
  double t1307;
  double t700;
  double t948;
  double t949;
  double t951;
  double t997;
  double t1004;
  double t1005;
  double t1342;
  double t1343;
  double t1344;
  double t1345;
  double t1346;
  double t1347;
  double t965;
  double t976;
  double t980;
  double t1341;
  double t1348;
  double t1349;
  double t1007;
  double t1009;
  double t1011;
  double t1351;
  double t1352;
  double t1353;
  double t1354;
  double t1355;
  double t1350;
  double t1356;
  double t1357;
  double t1035;
  double t1036;
  double t1037;
  double t1038;
  double t1039;
  double t1041;
  double t1042;
  double t1043;
  double t1046;
  double t1367;
  double t1368;
  double t1369;
  double t1152;
  double t1162;
  double t1180;
  double t1182;
  double t1184;
  double t1185;
  double t1388;
  double t1390;
  double t1192;
  double t1203;
  double t1204;
  double t1247;
  double t1248;
  double t1249;
  double t1250;
  double t1399;
  double t1421;
  double t1422;
  double t1423;
  double t1424;
  double t1425;
  double t1426;
  double t1252;
  double t1253;
  double t1254;
  double t1255;
  double t1437;
  double t1438;
  double t1439;
  double t1432;
  double t1433;
  double t1434;
  double t1409;
  double t1446;
  double t1447;
  double t1410;
  double t1273;
  double t1274;
  double t1313;
  double t1314;
  double t1315;
  double t1316;
  double t1317;
  double t1325;
  double t1326;
  double t1327;
  double t1328;
  double t1329;
  double t1476;
  double t1477;
  double t1484;
  double t1485;
  double t1497;
  double t1498;
  double t1499;
  double t1500;
  double t1501;
  double t1503;
  double t1504;
  double t1505;
  double t1506;
  double t1502;
  double t1507;
  double t1508;
  double t1461;
  double t1462;
  double t1469;
  double t1470;
  double t1471;
  double t1537;
  double t1538;
  double t1543;
  double t1544;
  double t1518;
  double t1519;
  double t1520;
  double t1375;
  double t1376;
  double t1377;
  double t1396;
  double t1397;
  double t1566;
  double t1569;
  double t1428;
  double t1429;
  double t1576;
  double t1598;
  double t1599;
  double t1600;
  double t1608;
  double t1609;
  double t1610;
  double t1604;
  double t1605;
  double t1586;
  double t1617;
  double t1618;
  double t1619;
  double t1587;
  double t1647;
  double t1649;
  double t1682;
  double t1684;
  double t1719;
  double t1721;
  t683 = Cos(var1[2]);
  t713 = Sin(var1[0]);
  t690 = Sin(var1[2]);
  t765 = Cos(var1[1]);
  t785 = Cos(var1[0]);
  t718 = Sin(var1[1]);
  t880 = -0.25*t765*t713;
  t929 = Power(t785,2);
  t932 = Power(t713,2);
  t935 = t929 + t932;
  t962 = t765*t683*t935;
  t963 = -1.*t935*t718*t690;
  t964 = t962 + t963;
  t801 = 0.625*t785*t765;
  t803 = 0.25*t785*t765;
  t804 = t785*t765*t683;
  t811 = -1.*t785*t718*t690;
  t813 = t804 + t811;
  t828 = 0.1875*t813;
  t830 = 0. + t803 + t828;
  t831 = 10.*t830;
  t836 = t801 + t831;
  t884 = 0.625*t765*t713;
  t890 = -1.*t765*t683*t713;
  t905 = t713*t718*t690;
  t906 = t890 + t905;
  t907 = 0.1875*t906;
  t909 = 0. + t880 + t907;
  t910 = -10.*t909;
  t916 = t884 + t910;
  t970 = 0.25*t929*t765;
  t971 = 0.25*t765*t932;
  t973 = 0.1875*t964;
  t975 = t970 + t971 + t973;
  t800 = -0.25*t785*t765;
  t840 = 0.0666666666666667*t836;
  t844 = 0. + t800 + t840;
  t921 = 0.0666666666666667*t916;
  t923 = 0. + t880 + t921;
  t857 = t785*t683*t718;
  t870 = t785*t765*t690;
  t874 = t857 + t870;
  t731 = -1.*t683*t713*t718;
  t774 = -1.*t765*t713*t690;
  t775 = t731 + t774;
  t845 = t775*t844;
  t924 = t874*t923;
  t925 = t845 + t924;
  t927 = Power(t765,2);
  t938 = Power(t718,2);
  t1027 = t927 + t938;
  t954 = t765*t683;
  t957 = -1.*t718*t690;
  t958 = t954 + t957;
  t940 = -1.*t683*t718;
  t942 = -1.*t765*t690;
  t947 = t940 + t942;
  t1014 = t906*t844;
  t1015 = t813*t923;
  t1019 = t1014 + t1015;
  t1053 = var2[0]*t929;
  t1054 = var2[0]*t932;
  t1058 = t1053 + t1054;
  t1059 = -1.*t683*t1058*t718;
  t1061 = -1.*t765*t1058*t690;
  t1062 = t1059 + t1061;
  t1079 = -1.*t785*t683*t718;
  t1081 = -1.*t785*t765*t690;
  t1082 = t1079 + t1081;
  t1084 = t683*t713*t718;
  t1085 = t765*t713*t690;
  t1086 = t1084 + t1085;
  t1083 = -0.125*t785*t1082;
  t1087 = 0.125*t713*t1086;
  t1088 = t1083 + t1087;
  t1116 = t765*t683*t1058;
  t1117 = -1.*t1058*t718*t690;
  t1120 = t1116 + t1117;
  t1101 = -0.25*var2[0]*t765*t713;
  t1102 = -0.25*var2[1]*t785*t718;
  t1107 = t1101 + t1102;
  t1108 = -1.*t713*t1107;
  t1109 = -0.25*var2[0]*t785*t765;
  t1110 = 0.25*var2[1]*t713*t718;
  t1113 = t1109 + t1110;
  t1115 = -1.*t785*t1113;
  t1121 = 0.1875*t1120;
  t1122 = 0. + t1108 + t1115 + t1121;
  t990 = -1.*t785*t844;
  t993 = -1.*t713*t923;
  t994 = t990 + t993;
  t1131 = -0.25*var2[1]*t765*t947;
  t1134 = t1107*t813;
  t1139 = t1113*t906;
  t1069 = -1.*t765*t683;
  t1071 = t718*t690;
  t1072 = t1069 + t1071;
  t1091 = var2[1]*t927;
  t685 = Power(t683,2);
  t1093 = var2[1]*t938;
  t694 = Power(t690,2);
  t1073 = 0.1*t1062*t1072;
  t1074 = -1.*t765*t683*t1058;
  t1075 = t1058*t718*t690;
  t1077 = t1074 + t1075;
  t1078 = 0.1*t947*t1077;
  t1124 = 0.9*t1120;
  t1125 = 1.875*t1122;
  t1127 = t1124 + t1125;
  t1129 = t947*t1127;
  t1096 = t1091 + t1093;
  t1207 = -0.625*t785*t718;
  t1208 = -0.25*t785*t718;
  t1210 = 0.1875*t1082;
  t1211 = t1208 + t1210;
  t1212 = 10.*t1211;
  t1213 = t1207 + t1212;
  t1215 = -0.625*t713*t718;
  t1216 = 0.25*t713*t718;
  t1217 = 0.1875*t1086;
  t1219 = t1216 + t1217;
  t1221 = -10.*t1219;
  t1222 = t1215 + t1221;
  t983 = -0.0666666666666667*t785*t836;
  t984 = -0.0666666666666667*t713*t916;
  t986 = t983 + t984;
  t1193 = 0.25*var2[1]*t765*t713;
  t1194 = 0.25*var2[0]*t785*t718;
  t1195 = t1193 + t1194;
  t1196 = -1.*t785*t1195;
  t1197 = -0.25*var2[1]*t785*t765;
  t1198 = 0.25*var2[0]*t713*t718;
  t1199 = t1197 + t1198;
  t1200 = -1.*t713*t1199;
  t1201 = 0.1875*t1062;
  t1202 = t1196 + t1200 + t1201;
  t1140 = t1131 + t1134 + t1139;
  t1233 = 0.25*t785*t718;
  t1234 = 0.0666666666666667*t1213;
  t1235 = t1233 + t1234;
  t1237 = 0.0666666666666667*t1222;
  t1238 = t1216 + t1237;
  t1145 = t1086*t844;
  t1146 = t1082*t923;
  t1155 = t1107*t1082;
  t1156 = t1113*t1086;
  t1161 = -0.25*var2[1]*t765*t1072;
  t1164 = t1107*t874;
  t1165 = t1113*t775;
  t1166 = -0.25*var2[1]*t765*t958;
  t1167 = var2[2]*t685;
  t1168 = var2[2]*t694;
  t1169 = t1091 + t1167 + t1093 + t1168;
  t1170 = -0.1875*t1169;
  t1171 = t1164 + t1165 + t1166 + t1170;
  t1277 = -1.*t785*t765*t683;
  t1278 = t785*t718*t690;
  t1279 = t1277 + t1278;
  t1280 = 0.1875*t1279;
  t1281 = t800 + t1280;
  t1282 = -10.*t1281;
  t1283 = t801 + t1282;
  t1285 = -0.625*t765*t713;
  t1286 = t880 + t907;
  t1287 = 10.*t1286;
  t1288 = t1285 + t1287;
  t1267 = -1.*t785*t1107;
  t1268 = 0.25*var2[0]*t765*t713;
  t1269 = 0.25*var2[1]*t785*t718;
  t1270 = t1268 + t1269;
  t1271 = -1.*t785*t1270;
  t1272 = 0. + t1267 + t1271;
  t1302 = 0.0666666666666667*t1283;
  t1303 = t800 + t1302;
  t1305 = 0.25*t765*t713;
  t1306 = 0.0666666666666667*t1288;
  t1307 = t1305 + t1306;
  t700 = t685 + t694;
  t948 = -1.*t683*t935*t718;
  t949 = -1.*t765*t935*t690;
  t951 = t948 + t949;
  t997 = -0.25*t765*t713*t874;
  t1004 = -0.25*t785*t765*t775;
  t1005 = t997 + t1004;
  t1342 = -0.625*t718;
  t1343 = -0.25*t718;
  t1344 = 0.1875*t947;
  t1345 = 0. + t1343 + t1344;
  t1346 = 10.*t1345;
  t1347 = t1342 + t1346;
  t965 = 0.9*t964;
  t976 = 1.875*t975;
  t980 = t965 + t976;
  t1341 = 0.25*t718;
  t1348 = 0.0666666666666667*t1347;
  t1349 = 0. + t1341 + t1348;
  t1007 = -0.25*t765*t713*t813;
  t1009 = -0.25*t785*t765*t906;
  t1011 = t1007 + t1009;
  t1351 = -0.625*t785*t765;
  t1352 = -10.*t830;
  t1353 = t1351 + t1352;
  t1354 = 0.0666666666666667*t1353;
  t1355 = 0. + t803 + t1354;
  t1350 = t874*t1349;
  t1356 = t958*t1355;
  t1357 = t1350 + t1356;
  t1035 = -0.1875*t1027;
  t1036 = -0.25*t785*t718*t874;
  t1037 = 0.25*t713*t718*t775;
  t1038 = -0.25*t765*t958;
  t1039 = t1035 + t1036 + t1037 + t1038;
  t1041 = -0.25*t765*t947;
  t1042 = -0.25*t785*t718*t813;
  t1043 = 0.25*t713*t718*t906;
  t1046 = t1041 + t1042 + t1043;
  t1367 = t813*t1349;
  t1368 = t947*t1355;
  t1369 = t1367 + t1368;
  t1152 = 0. + t1131 + t1134 + t1139;
  t1162 = t1155 + t1156 + t1161;
  t1180 = 0.978125*t765*t1058;
  t1182 = 0. + t1180;
  t1184 = -0.1*t1058*t718;
  t1185 = 0. + t1184;
  t1388 = 0.1*t1086*t1062;
  t1390 = 0.1*t906*t1077;
  t1192 = 0.9*t1062;
  t1203 = 1.875*t1202;
  t1204 = t1192 + t1203;
  t1247 = t1199*t874;
  t1248 = t1195*t775;
  t1249 = 0.25*var2[1]*t718*t958;
  t1250 = 0. + t1131 + t1247 + t1248 + t1249 + t1134 + t1139;
  t1399 = t906*t1127;
  t1421 = -0.625*t765;
  t1422 = -0.25*t765;
  t1423 = 0.1875*t1072;
  t1424 = t1422 + t1423;
  t1425 = 10.*t1424;
  t1426 = t1421 + t1425;
  t1252 = 0.25*var2[1]*t718*t947;
  t1253 = t1199*t813;
  t1254 = t1195*t906;
  t1255 = t1252 + t1155 + t1156 + t1161 + t1253 + t1254;
  t1437 = 0.625*t785*t718;
  t1438 = -10.*t1211;
  t1439 = t1437 + t1438;
  t1432 = 0.25*t765;
  t1433 = 0.0666666666666667*t1426;
  t1434 = t1432 + t1433;
  t1409 = t1082*t1349;
  t1446 = 0.0666666666666667*t1439;
  t1447 = t1208 + t1446;
  t1410 = t1072*t1355;
  t1273 = 1.875*t1272;
  t1274 = 0. + t1273;
  t1313 = t1113*t1082;
  t1314 = t1113*t874;
  t1315 = t1107*t775;
  t1316 = t1270*t775;
  t1317 = t1313 + t1314 + t1315 + t1316;
  t1325 = t1113*t813;
  t1326 = t1113*t1279;
  t1327 = t1107*t906;
  t1328 = t1270*t906;
  t1329 = t1325 + t1326 + t1327 + t1328;
  t1476 = -10.*t1286;
  t1477 = t884 + t1476;
  t1484 = 0.0666666666666667*t1477;
  t1485 = t880 + t1484;
  t1497 = 0.625*t718;
  t1498 = -10.*t1345;
  t1499 = t1497 + t1498;
  t1500 = 0.0666666666666667*t1499;
  t1501 = 0. + t1343 + t1500;
  t1503 = 10.*t909;
  t1504 = t1285 + t1503;
  t1505 = 0.0666666666666667*t1504;
  t1506 = 0. + t1305 + t1505;
  t1502 = t775*t1501;
  t1507 = t958*t1506;
  t1508 = t1502 + t1507;
  t1461 = 0.978125*t1096;
  t1462 = 0. + t1461;
  t1469 = 0.9*t1169;
  t1470 = -1.875*t1171;
  t1471 = t1469 + t1470;
  t1537 = 10.*t1281;
  t1538 = t1351 + t1537;
  t1543 = 0.0666666666666667*t1538;
  t1544 = t803 + t1543;
  t1518 = t906*t1501;
  t1519 = t947*t1506;
  t1520 = t1518 + t1519;
  t1375 = 0.9*t1027;
  t1376 = -1.875*t1039;
  t1377 = t1375 + t1376;
  t1396 = -1.875*t1152;
  t1397 = 0. + t1396;
  t1566 = 0.1*t1082*t1062;
  t1569 = 0.1*t813*t1077;
  t1428 = -1.875*t1250;
  t1429 = 0. + t1428;
  t1576 = t813*t1127;
  t1598 = 0.625*t765;
  t1599 = -10.*t1424;
  t1600 = t1598 + t1599;
  t1608 = 0.625*t713*t718;
  t1609 = 10.*t1219;
  t1610 = t1608 + t1609;
  t1604 = 0.0666666666666667*t1600;
  t1605 = t1422 + t1604;
  t1586 = t1086*t1501;
  t1617 = -0.25*t713*t718;
  t1618 = 0.0666666666666667*t1610;
  t1619 = t1617 + t1618;
  t1587 = t1072*t1506;
  t1647 = 10.*t1072*t1140;
  t1649 = 10.*t947*t1171;
  t1682 = 10.*t1086*t1140;
  t1684 = 10.*t906*t1171;
  t1719 = 10.*t1082*t1140;
  t1721 = 10.*t813*t1171;
  p_output1[0]=(0. + 10.*t1019*t1329 - 0.625*t1096*(-0.0666666666666667*t1288*t713*t718 + 0.0666666666666667*t1283*t718*t785 - 0.0666666666666667*t718*t785*t836 - 0.0666666666666667*t713*t718*t916) + 0.625*t1058*t765*(-0.0666666666666667*t1283*t713 - 0.0666666666666667*t1288*t785 + 0.0666666666666667*t713*t836 - 0.0666666666666667*t785*t916) + 10.*t1171*(t1307*t775 + t1082*t844 + t1303*t874 + t775*t923) + 10.*t1122*(-1.*t1303*t713 - 1.*t1307*t785 + t713*t844 - 1.*t785*t923) + 10.*t1140*(t1303*t813 + t1279*t844 + t1307*t906 + t906*t923) + 10.*t1317*t925 + t1274*t958 + 10.*t1272*t994)*var2[0] + (0. + t1073 + t1078 + t1129 + 10.*t1019*t1255 - 1.*t1182*t718 - 1.*t1185*t765 - 0.878125*t1058*t718*t765 + 0.625*t1058*t765*(-0.0666666666666667*t1222*t713 - 0.0666666666666667*t1213*t785) + 10.*t1122*(-1.*t1238*t713 - 1.*t1235*t785) + 10.*t1171*(t1014 + t1015 + t1235*t775 + t1238*t874) + 10.*t1140*(t1145 + t1146 + t1238*t813 + t1235*t906) - 0.625*t1096*(-0.0666666666666667*t1213*t713*t718 + 0.0666666666666667*t1222*t718*t785 - 0.0666666666666667*t713*t765*t836 + 0.0666666666666667*t765*t785*t916) + 10.*t1250*t925 + t1204*t958 - 0.625*t1058*t718*t986 + 10.*t1202*t994)*var2[1] + (t1073 + t1078 + 10.*t1088*t1122 + t1129 + 10.*t1019*t1162 + 0.625*t1058*t1088*t765 - 0.625*t1096*(-0.125*t1082*t713*t718 - 0.125*t1086*t718*t785) + 10.*t1171*(t1014 + t1015 + 0.125*t1082*t775 - 0.125*t1086*t874) + 10.*t1140*(t1145 + t1146 - 0.125*t1086*t813 + 0.125*t1082*t906) + 10.*t1152*t925 + 1.2515625*t1062*t958 + 1.875*t1062*t994)*var2[2] + (10.*t1011*t1019 + 10.*t1005*t925 + 0.978125*t927*t935 + 0.1*t935*t938 + 0.1*t947*t951 + t958*t980 + 0.625*t765*t935*t986 + 10.*t975*t994)*var3[0] + (0. + 10.*t1019*t1046 - 0.625*t1027*(-0.0666666666666667*t713*t718*t836 + 0.0666666666666667*t718*t785*t916) + 10.*t1039*t925)*var3[1] - 1.875*t700*t925*var3[2];
  p_output1[1]=(0. + t1082*t1127 + 0.1*t1062*t1279 + 10.*t1317*t1357 + 10.*t1329*t1369 - 10.*t1272*t1349*t713 + t1462*t713 + t1471*t713 - 0.625*t1096*(-0.0666666666666667*t1347*t713*t718 + 0.0666666666666667*t1477*t765) + t1274*t775 + 1.875*t1317*t785 - 10.*t1122*t1349*t785 - 1.*t1182*t718*t785 - 1.*t1185*t765*t785 - 0.041666666666666664*t1058*t1347*t765*t785 + 10.*t1140*(t1349*t906 + t1485*t947) + 10.*t1171*(t1349*t775 + t1485*t958))*var2[0] + (0. + 10.*t1250*t1357 + 10.*t1255*t1369 + t1388 + t1390 + t1399 - 10.*t1202*t1349*t713 - 10.*t1122*t1434*t713 + t1185*t713*t718 + 0.041666666666666664*t1058*t1347*t713*t718 - 1.*t1182*t713*t765 - 0.041666666666666664*t1058*t1426*t713*t765 + t1204*t775 - 1.*t1429*t785 - 0.625*t1096*(-0.0666666666666667*t1353*t718 + 0.0666666666666667*t1439*t765 + 0.0666666666666667*t1426*t718*t785 + 0.0666666666666667*t1347*t765*t785) + 0.1*t1058*t713*t927 + 0.978125*t1058*t713*t938 + 10.*t1140*(t1409 + t1410 + t1434*t813 + t1447*t947) + 10.*t1171*(t1367 + t1368 + t1434*t874 + t1447*t958))*var2[1] + (10.*t1152*t1357 + 10.*t1162*t1369 + t1388 + t1390 + t1399 - 1.25*t1072*t1122*t713 - 1.875*t1062*t1349*t713 - 0.078125*t1058*t1072*t713*t765 + 1.2515625*t1062*t775 - 1.*t1397*t785 - 0.625*t1096*(-0.125*t1082*t765 + 0.125*t1072*t718*t785) + 10.*t1140*(t1409 + t1410 + 0.125*t1072*t813 - 0.125*t1082*t947) + 10.*t1171*(t1367 + t1368 + 0.125*t1072*t874 - 0.125*t1082*t958))*var2[2] + (10.*t1005*t1357 + 10.*t1011*t1369 + 1.875*t1005*t785 - 0.041666666666666664*t1347*t713*t765*t935 - 0.878125*t713*t718*t765*t935 + 0.1*t906*t951 - 10.*t1349*t713*t975 + t775*t980)*var3[0] + (0. + 10.*t1039*t1357 + 10.*t1046*t1369 - 0.978125*t1027*t785 - 1.*t1377*t785 - 0.625*t1027*(0.0666666666666667*t1353*t765 + 0.0666666666666667*t1347*t718*t785))*var3[1] + (-1.875*t1357*t700 - 1.2515625*t700*t785)*var3[2];
  p_output1[2]=(0. + 10.*t1317*t1508 + 10.*t1329*t1520 + 1.875*t1317*t713 + 10.*t1122*t1501*t713 - 1.*t1182*t713*t718 - 1.*t1185*t713*t765 + 0.041666666666666664*t1058*t1499*t713*t765 + t1127*t775 - 1.*t1462*t785 - 1.*t1471*t785 - 10.*t1272*t1501*t785 - 0.625*t1096*(0.0666666666666667*t1538*t765 - 0.0666666666666667*t1499*t718*t785) + t1274*t874 + 0.1*t1062*t906 + 10.*t1140*(t1279*t1501 + t1544*t947) + 10.*t1171*(t1082*t1501 + t1544*t958))*var2[0] + (0. + 10.*t1250*t1508 + 10.*t1255*t1520 + t1566 + t1569 + t1576 - 1.*t1429*t713 - 0.625*t1096*(-0.0666666666666667*t1504*t718 - 0.0666666666666667*t1600*t713*t718 + 0.0666666666666667*t1610*t765 - 0.0666666666666667*t1499*t713*t765) - 10.*t1202*t1501*t785 - 10.*t1122*t1605*t785 - 1.*t1185*t718*t785 + 0.041666666666666664*t1058*t1499*t718*t785 + t1182*t765*t785 - 0.041666666666666664*t1058*t1600*t765*t785 + t1204*t874 - 0.1*t1058*t785*t927 - 0.978125*t1058*t785*t938 + 10.*t1140*(t1586 + t1587 + t1605*t906 + t1619*t947) + 10.*t1171*(t1518 + t1519 + t1605*t775 + t1619*t958))*var2[1] + (10.*t1152*t1508 + 10.*t1162*t1520 + t1566 + t1569 + t1576 - 1.*t1397*t713 - 0.625*t1096*(0.125*t1072*t713*t718 + 0.125*t1086*t765) + 1.25*t1072*t1122*t785 - 1.875*t1062*t1501*t785 + 0.078125*t1058*t1072*t765*t785 + 1.2515625*t1062*t874 + 10.*t1140*(t1586 + t1587 - 0.125*t1072*t906 + 0.125*t1086*t947) + 10.*t1171*(t1518 + t1519 - 0.125*t1072*t775 + 0.125*t1086*t958))*var2[2] + (10.*t1005*t1508 + 10.*t1011*t1520 + 1.875*t1005*t713 - 0.041666666666666664*t1499*t765*t785*t935 + 0.878125*t718*t765*t785*t935 + 0.1*t813*t951 - 10.*t1501*t785*t975 + t874*t980)*var3[0] + (0. + 10.*t1039*t1508 + 10.*t1046*t1520 - 0.978125*t1027*t713 - 1.*t1377*t713 - 0.625*t1027*(-0.0666666666666667*t1499*t713*t718 + 0.0666666666666667*t1504*t765))*var3[1] + (-1.875*t1508*t700 - 1.2515625*t700*t713)*var3[2];
  p_output1[3]=(10.*t1329*t947 + 10.*t1317*t958)*var2[0] + (t1647 + t1649 + 0.625*t1096*t718 + 10.*t1255*t947 + 10.*t1250*t958)*var2[1] + (t1647 + t1649 + 10.*t1162*t947 + 10.*t1152*t958)*var2[2] + (10.*t1011*t947 + 10.*t1005*t958)*var3[0] + (-0.625*t1027*t765 + 10.*t1046*t947 + 10.*t1039*t958)*var3[1] - 1.875*t700*t958*var3[2];
  p_output1[4]=(0. + 10.*t1082*t1171 + 10.*t1140*t1279 + 10.*t1122*t713 + 0.625*t1058*t713*t765 + 10.*t1317*t775 - 10.*t1272*t785 + 0.625*t1096*t718*t785 + 10.*t1329*t906)*var2[0] + (0. + t1682 + t1684 + 0.625*t1096*t713*t765 + 10.*t1250*t775 - 10.*t1202*t785 + 0.625*t1058*t718*t785 + 10.*t1255*t906)*var2[1] + (t1682 + t1684 + 10.*t1152*t775 - 1.875*t1062*t785 + 10.*t1162*t906)*var2[2] + (10.*t1005*t775 + 10.*t1011*t906 - 0.625*t765*t785*t935 - 10.*t785*t975)*var3[0] + (0. + 0.625*t1027*t713*t718 + 10.*t1039*t775 + 10.*t1046*t906)*var3[1] - 1.875*t700*t775*var3[2];
  p_output1[5]=(0. - 10.*t1272*t713 + 0.625*t1096*t713*t718 + 10.*t1171*t775 - 10.*t1122*t785 - 0.625*t1058*t765*t785 + 10.*t1329*t813 + 10.*t1317*t874 + 10.*t1140*t906)*var2[0] + (0. + t1719 + t1721 - 10.*t1202*t713 + 0.625*t1058*t713*t718 - 0.625*t1096*t765*t785 + 10.*t1255*t813 + 10.*t1250*t874)*var2[1] + (t1719 + t1721 - 1.875*t1062*t713 + 10.*t1162*t813 + 10.*t1152*t874)*var2[2] + (10.*t1011*t813 + 10.*t1005*t874 - 0.625*t713*t765*t935 - 10.*t713*t975)*var3[0] + (0. - 0.625*t1027*t718*t785 + 10.*t1046*t813 + 10.*t1039*t874)*var3[1] - 1.875*t700*t874*var3[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "gen3_h_dot.hh"

namespace SymExpression
{

void gen3_h_dot_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
