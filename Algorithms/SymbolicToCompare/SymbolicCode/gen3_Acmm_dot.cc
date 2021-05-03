/*
 * Automatically Generated from Mathematica.
 * Fri 30 Apr 2021 09:00:24 GMT-04:00
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
  double t1087;
  double t1096;
  double t1097;
  double t1100;
  double t1102;
  double t1147;
  double t1053;
  double t1109;
  double t1163;
  double t1110;
  double t1169;
  double t1170;
  double t1228;
  double t1229;
  double t1230;
  double t1231;
  double t1232;
  double t1239;
  double t1240;
  double t1241;
  double t1242;
  double t1208;
  double t1215;
  double t1223;
  double t1246;
  double t1247;
  double t1249;
  double t1244;
  double t1245;
  double t1251;
  double t1252;
  double t1292;
  double t1273;
  double t1274;
  double t1275;
  double t1296;
  double t1297;
  double t1298;
  double t1265;
  double t1268;
  double t1269;
  double t1278;
  double t1280;
  double t1284;
  double t1285;
  double t1289;
  double t1290;
  double t1293;
  double t1299;
  double t1300;
  double t1301;
  double t1304;
  double t1305;
  double t1308;
  double t1314;
  double t1315;
  double t1316;
  double t1328;
  double t1330;
  double t1331;
  double t1324;
  double t1325;
  double t1326;
  double t1338;
  double t1339;
  double t1179;
  double t1180;
  double t1204;
  double t1207;
  double t1224;
  double t1225;
  double t1226;
  double t1227;
  double t1172;
  double t1173;
  double t1174;
  double t1257;
  double t1258;
  double t1259;
  double t1263;
  double t1372;
  double t1373;
  double t1374;
  double t1375;
  double t1376;
  double t1378;
  double t1381;
  double t1380;
  double t1382;
  double t1383;
  double t1384;
  double t1385;
  double t1362;
  double t1363;
  double t1364;
  double t1365;
  double t1291;
  double t1309;
  double t1310;
  double t1393;
  double t1394;
  double t1395;
  double t1398;
  double t1399;
  double t1320;
  double t1321;
  double t1327;
  double t1332;
  double t1333;
  double t1335;
  double t1336;
  double t1340;
  double t1342;
  double t1343;
  double t1344;
  double t1428;
  double t1430;
  double t1431;
  double t1432;
  double t1435;
  double t1436;
  double t1437;
  double t1441;
  double t1442;
  double t1443;
  double t1444;
  double t1452;
  double t1453;
  double t1455;
  double t1456;
  double t1457;
  double t1337;
  double t1502;
  double t1506;
  double t1507;
  double t1509;
  double t1510;
  double t1511;
  double t1512;
  double t1513;
  double t1514;
  double t1516;
  double t1517;
  double t1521;
  double t1522;
  double t1523;
  double t1524;
  double t1525;
  double t1492;
  double t1494;
  double t1408;
  double t1411;
  double t1412;
  double t1361;
  double t1366;
  double t1370;
  double t1497;
  double t1555;
  double t1556;
  double t1557;
  double t1558;
  double t1559;
  double t1560;
  double t1414;
  double t1415;
  double t1416;
  double t1526;
  double t1563;
  double t1564;
  double t1565;
  double t1532;
  double t1533;
  double t1534;
  double t1540;
  double t1568;
  double t1569;
  double t1570;
  double t1571;
  double t1572;
  double t1541;
  double t1463;
  double t1464;
  double t1465;
  double t1474;
  double t1475;
  double t1478;
  double t1596;
  double t1597;
  double t1598;
  double t1601;
  double t1622;
  double t1623;
  double t1624;
  double t1627;
  double t1628;
  double t1631;
  double t1632;
  double t1633;
  double t1634;
  double t1643;
  double t1644;
  double t1645;
  double t1646;
  double t1642;
  double t1648;
  double t1650;
  double t1652;
  double t1653;
  double t1654;
  double t1548;
  double t1550;
  double t1658;
  double t1661;
  double t1664;
  double t1687;
  double t1688;
  double t1689;
  double t1692;
  double t1693;
  double t1674;
  double t1696;
  double t1697;
  double t1698;
  double t1699;
  double t1700;
  double t1701;
  double t1675;
  double t1718;
  double t1723;
  double t1732;
  double t1735;
  double t1754;
  double t1756;
  double t1318;
  double t1319;
  double t1322;
  double t1780;
  double t1781;
  double t1782;
  double t1783;
  double t1775;
  double t1350;
  double t1351;
  double t1355;
  double t1404;
  double t1405;
  double t1406;
  double t1786;
  double t1787;
  double t1788;
  double t1791;
  double t1792;
  double t1793;
  double t1794;
  double t1795;
  double t1418;
  double t1419;
  double t1420;
  double t1467;
  double t1468;
  double t1469;
  double t1470;
  double t1472;
  double t1480;
  double t1481;
  double t1482;
  double t1483;
  double t1486;
  double t1789;
  double t1528;
  double t1529;
  double t1530;
  double t1536;
  double t1539;
  double t1542;
  double t1806;
  double t1807;
  double t1808;
  double t1810;
  double t1811;
  double t1812;
  double t1573;
  double t1574;
  double t1575;
  double t1578;
  double t1579;
  double t1580;
  double t1823;
  double t1824;
  double t1827;
  double t1828;
  double t1595;
  double t1602;
  double t1603;
  double t1607;
  double t1608;
  double t1611;
  double t1862;
  double t1863;
  double t1864;
  double t1630;
  double t1635;
  double t1636;
  double t1638;
  double t1639;
  double t1640;
  double t1667;
  double t1668;
  double t1669;
  double t1672;
  double t1673;
  double t1676;
  double t1845;
  double t1846;
  double t1702;
  double t1703;
  double t1704;
  double t1707;
  double t1708;
  double t1709;
  double t1919;
  double t1922;
  double t1931;
  double t1934;
  double t1950;
  double t1952;
  double t1969;
  double t1970;
  double t1971;
  t1087 = Cos(var1[0]);
  t1096 = Power(t1087,2);
  t1097 = Sin(var1[0]);
  t1100 = Power(t1097,2);
  t1102 = t1096 + t1100;
  t1147 = Cos(var1[1]);
  t1053 = Cos(var1[2]);
  t1109 = Sin(var1[1]);
  t1163 = Sin(var1[2]);
  t1110 = -1.*t1053*t1102*t1109;
  t1169 = -1.*t1147*t1102*t1163;
  t1170 = t1110 + t1169;
  t1228 = -1.*t1087*t1053*t1109;
  t1229 = -1.*t1087*t1147*t1163;
  t1230 = t1228 + t1229;
  t1231 = -0.125*t1087*t1230;
  t1232 = t1053*t1097*t1109;
  t1239 = t1147*t1097*t1163;
  t1240 = t1232 + t1239;
  t1241 = 0.125*t1097*t1240;
  t1242 = t1231 + t1241;
  t1208 = -1.*t1053*t1109;
  t1215 = -1.*t1147*t1163;
  t1223 = t1208 + t1215;
  t1246 = t1147*t1053*t1102;
  t1247 = -1.*t1102*t1109*t1163;
  t1249 = t1246 + t1247;
  t1244 = 0.25*t1096*t1147;
  t1245 = 0.25*t1147*t1100;
  t1251 = 0.1875*t1249;
  t1252 = t1244 + t1245 + t1251;
  t1292 = -0.25*t1147*t1097;
  t1273 = t1087*t1147*t1053;
  t1274 = -1.*t1087*t1109*t1163;
  t1275 = t1273 + t1274;
  t1296 = -1.*t1147*t1053*t1097;
  t1297 = t1097*t1109*t1163;
  t1298 = t1296 + t1297;
  t1265 = -0.25*t1087*t1147;
  t1268 = 0.625*t1087*t1147;
  t1269 = 0.25*t1087*t1147;
  t1278 = 0.1875*t1275;
  t1280 = 0. + t1269 + t1278;
  t1284 = 10.*t1280;
  t1285 = t1268 + t1284;
  t1289 = 0.0666666666666667*t1285;
  t1290 = 0. + t1265 + t1289;
  t1293 = 0.625*t1147*t1097;
  t1299 = 0.1875*t1298;
  t1300 = 0. + t1292 + t1299;
  t1301 = -10.*t1300;
  t1304 = t1293 + t1301;
  t1305 = 0.0666666666666667*t1304;
  t1308 = 0. + t1292 + t1305;
  t1314 = -0.25*t1147*t1097*t1275;
  t1315 = -0.25*t1087*t1147*t1298;
  t1316 = t1314 + t1315;
  t1328 = t1087*t1053*t1109;
  t1330 = t1087*t1147*t1163;
  t1331 = t1328 + t1330;
  t1324 = -1.*t1053*t1097*t1109;
  t1325 = -1.*t1147*t1097*t1163;
  t1326 = t1324 + t1325;
  t1338 = t1298*t1290;
  t1339 = t1275*t1308;
  t1179 = -1.*t1147*t1053;
  t1180 = t1109*t1163;
  t1204 = t1179 + t1180;
  t1207 = 0.1*t1170*t1204;
  t1224 = -1.*t1147*t1053*t1102;
  t1225 = t1102*t1109*t1163;
  t1226 = t1224 + t1225;
  t1227 = 0.1*t1223*t1226;
  t1172 = t1147*t1053;
  t1173 = -1.*t1109*t1163;
  t1174 = t1172 + t1173;
  t1257 = 0.9*t1249;
  t1258 = 1.875*t1252;
  t1259 = t1257 + t1258;
  t1263 = t1223*t1259;
  t1372 = -0.625*t1087*t1109;
  t1373 = -0.25*t1087*t1109;
  t1374 = 0.1875*t1230;
  t1375 = t1373 + t1374;
  t1376 = 10.*t1375;
  t1378 = t1372 + t1376;
  t1381 = 0.25*t1097*t1109;
  t1380 = -0.625*t1097*t1109;
  t1382 = 0.1875*t1240;
  t1383 = t1381 + t1382;
  t1384 = -10.*t1383;
  t1385 = t1380 + t1384;
  t1362 = -0.25*t1096*t1109;
  t1363 = -0.25*t1100*t1109;
  t1364 = 0.1875*t1170;
  t1365 = t1362 + t1363 + t1364;
  t1291 = -1.*t1087*t1290;
  t1309 = -1.*t1097*t1308;
  t1310 = t1291 + t1309;
  t1393 = 0.25*t1087*t1109;
  t1394 = 0.0666666666666667*t1378;
  t1395 = t1393 + t1394;
  t1398 = 0.0666666666666667*t1385;
  t1399 = t1381 + t1398;
  t1320 = t1240*t1290;
  t1321 = t1230*t1308;
  t1327 = t1326*t1290;
  t1332 = t1331*t1308;
  t1333 = t1327 + t1332;
  t1335 = -0.25*t1147*t1097*t1230;
  t1336 = -0.25*t1087*t1147*t1240;
  t1340 = t1338 + t1339;
  t1342 = -0.25*t1147*t1097*t1331;
  t1343 = -0.25*t1087*t1147*t1326;
  t1344 = t1342 + t1343;
  t1428 = -1.*t1087*t1147*t1053;
  t1430 = t1087*t1109*t1163;
  t1431 = t1428 + t1430;
  t1432 = 0.1875*t1431;
  t1435 = t1265 + t1432;
  t1436 = -10.*t1435;
  t1437 = t1268 + t1436;
  t1441 = -0.625*t1147*t1097;
  t1442 = t1292 + t1299;
  t1443 = 10.*t1442;
  t1444 = t1441 + t1443;
  t1452 = 0.0666666666666667*t1437;
  t1453 = t1265 + t1452;
  t1455 = 0.25*t1147*t1097;
  t1456 = 0.0666666666666667*t1444;
  t1457 = t1455 + t1456;
  t1337 = t1335 + t1336;
  t1502 = 0.25*t1109;
  t1506 = -0.625*t1109;
  t1507 = -0.25*t1109;
  t1509 = 0.1875*t1223;
  t1510 = 0. + t1507 + t1509;
  t1511 = 10.*t1510;
  t1512 = t1506 + t1511;
  t1513 = 0.0666666666666667*t1512;
  t1514 = 0. + t1502 + t1513;
  t1516 = t1275*t1514;
  t1517 = -0.625*t1087*t1147;
  t1521 = -10.*t1280;
  t1522 = t1517 + t1521;
  t1523 = 0.0666666666666667*t1522;
  t1524 = 0. + t1269 + t1523;
  t1525 = t1223*t1524;
  t1492 = 0.1*t1240*t1170;
  t1494 = 0.1*t1298*t1226;
  t1408 = 0.25*t1097*t1109*t1331;
  t1411 = 0.25*t1087*t1109*t1326;
  t1412 = t1408 + t1411 + t1314 + t1315;
  t1361 = 0.9*t1170;
  t1366 = 1.875*t1365;
  t1370 = t1361 + t1366;
  t1497 = t1298*t1259;
  t1555 = -0.625*t1147;
  t1556 = -0.25*t1147;
  t1557 = 0.1875*t1204;
  t1558 = t1556 + t1557;
  t1559 = 10.*t1558;
  t1560 = t1555 + t1559;
  t1414 = 0.25*t1097*t1109*t1275;
  t1415 = 0.25*t1087*t1109*t1298;
  t1416 = t1335 + t1336 + t1414 + t1415;
  t1526 = t1516 + t1525;
  t1563 = 0.25*t1147;
  t1564 = 0.0666666666666667*t1560;
  t1565 = t1563 + t1564;
  t1532 = t1331*t1514;
  t1533 = t1174*t1524;
  t1534 = t1532 + t1533;
  t1540 = t1230*t1514;
  t1568 = 0.625*t1087*t1109;
  t1569 = -10.*t1375;
  t1570 = t1568 + t1569;
  t1571 = 0.0666666666666667*t1570;
  t1572 = t1373 + t1571;
  t1541 = t1204*t1524;
  t1463 = -0.25*t1087*t1147*t1230;
  t1464 = -0.25*t1087*t1147*t1331;
  t1465 = 0. + t1463 + t1464;
  t1474 = -0.25*t1087*t1147*t1275;
  t1475 = -0.25*t1087*t1147*t1431;
  t1478 = 0. + t1474 + t1475;
  t1596 = -10.*t1442;
  t1597 = t1293 + t1596;
  t1598 = 0.0666666666666667*t1597;
  t1601 = t1292 + t1598;
  t1622 = 0.625*t1109;
  t1623 = -10.*t1510;
  t1624 = t1622 + t1623;
  t1627 = 0.0666666666666667*t1624;
  t1628 = 0. + t1507 + t1627;
  t1631 = 10.*t1435;
  t1632 = t1517 + t1631;
  t1633 = 0.0666666666666667*t1632;
  t1634 = t1269 + t1633;
  t1643 = 10.*t1300;
  t1644 = t1441 + t1643;
  t1645 = 0.0666666666666667*t1644;
  t1646 = 0. + t1455 + t1645;
  t1642 = t1298*t1628;
  t1648 = t1223*t1646;
  t1650 = t1642 + t1648;
  t1652 = t1326*t1628;
  t1653 = t1174*t1646;
  t1654 = t1652 + t1653;
  t1548 = Power(t1147,2);
  t1550 = Power(t1109,2);
  t1658 = 0.1*t1230*t1170;
  t1661 = 0.1*t1275*t1226;
  t1664 = t1275*t1259;
  t1687 = 0.625*t1147;
  t1688 = -10.*t1558;
  t1689 = t1687 + t1688;
  t1692 = 0.0666666666666667*t1689;
  t1693 = t1556 + t1692;
  t1674 = t1240*t1628;
  t1696 = -0.25*t1097*t1109;
  t1697 = 0.625*t1097*t1109;
  t1698 = 10.*t1383;
  t1699 = t1697 + t1698;
  t1700 = 0.0666666666666667*t1699;
  t1701 = t1696 + t1700;
  t1675 = t1204*t1646;
  t1718 = 10.*t1223*t1344;
  t1723 = 10.*t1204*t1316;
  t1732 = 10.*t1298*t1344;
  t1735 = 10.*t1240*t1316;
  t1754 = 10.*t1275*t1344;
  t1756 = 10.*t1230*t1316;
  t1318 = -0.125*t1240*t1275;
  t1319 = 0.125*t1230*t1298;
  t1322 = t1318 + t1319 + t1320 + t1321;
  t1780 = -0.25*t1147*t1223;
  t1781 = -0.25*t1087*t1109*t1275;
  t1782 = 0.25*t1097*t1109*t1298;
  t1783 = t1780 + t1781 + t1782;
  t1775 = t1548 + t1550;
  t1350 = 0.125*t1230*t1326;
  t1351 = -0.125*t1331*t1240;
  t1355 = t1350 + t1351 + t1338 + t1339;
  t1404 = t1298*t1395;
  t1405 = t1275*t1399;
  t1406 = t1404 + t1405 + t1320 + t1321;
  t1786 = -0.25*t1087*t1109*t1230;
  t1787 = 0.25*t1097*t1109*t1240;
  t1788 = -0.25*t1147*t1204;
  t1791 = -0.1875*t1775;
  t1792 = -0.25*t1087*t1109*t1331;
  t1793 = 0.25*t1097*t1109*t1326;
  t1794 = -0.25*t1147*t1174;
  t1795 = t1791 + t1792 + t1793 + t1794;
  t1418 = t1326*t1395;
  t1419 = t1331*t1399;
  t1420 = t1418 + t1419 + t1338 + t1339;
  t1467 = t1230*t1290;
  t1468 = t1331*t1453;
  t1469 = t1326*t1457;
  t1470 = t1326*t1308;
  t1472 = t1467 + t1468 + t1469 + t1470;
  t1480 = t1431*t1290;
  t1481 = t1275*t1453;
  t1482 = t1298*t1457;
  t1483 = t1298*t1308;
  t1486 = t1480 + t1481 + t1482 + t1483;
  t1789 = t1786 + t1787 + t1788;
  t1528 = -0.125*t1230*t1174;
  t1529 = 0.125*t1331*t1204;
  t1530 = t1528 + t1529 + t1516 + t1525;
  t1536 = -0.125*t1223*t1230;
  t1539 = 0.125*t1204*t1275;
  t1542 = t1536 + t1539 + t1540 + t1541;
  t1806 = 0.25*t1147*t1097*t1326;
  t1807 = 0.25*t1109*t1174;
  t1808 = 0. + t1780 + t1464 + t1806 + t1807 + t1781 + t1782;
  t1810 = 0.25*t1109*t1223;
  t1811 = 0.25*t1147*t1097*t1298;
  t1812 = t1810 + t1786 + t1787 + t1788 + t1474 + t1811;
  t1573 = t1174*t1572;
  t1574 = t1331*t1565;
  t1575 = t1516 + t1573 + t1574 + t1525;
  t1578 = t1223*t1572;
  t1579 = t1275*t1565;
  t1580 = t1540 + t1578 + t1579 + t1541;
  t1823 = 0.25*t1097*t1109*t1230;
  t1824 = 0. + t1823 + t1408;
  t1827 = 0.25*t1097*t1109*t1431;
  t1828 = 0. + t1414 + t1827;
  t1595 = t1298*t1514;
  t1602 = t1223*t1601;
  t1603 = t1595 + t1602;
  t1607 = t1326*t1514;
  t1608 = t1174*t1601;
  t1611 = t1607 + t1608;
  t1862 = 0.9*t1775;
  t1863 = -1.875*t1795;
  t1864 = t1862 + t1863;
  t1630 = t1431*t1628;
  t1635 = t1223*t1634;
  t1636 = t1630 + t1635;
  t1638 = t1230*t1628;
  t1639 = t1174*t1634;
  t1640 = t1638 + t1639;
  t1667 = 0.125*t1240*t1174;
  t1668 = -0.125*t1326*t1204;
  t1669 = t1667 + t1668 + t1642 + t1648;
  t1672 = 0.125*t1223*t1240;
  t1673 = -0.125*t1204*t1298;
  t1676 = t1672 + t1673 + t1674 + t1675;
  t1845 = -1.875*t1808;
  t1846 = 0. + t1845;
  t1702 = t1174*t1701;
  t1703 = t1326*t1693;
  t1704 = t1642 + t1702 + t1703 + t1648;
  t1707 = t1223*t1701;
  t1708 = t1298*t1693;
  t1709 = t1674 + t1707 + t1708 + t1675;
  t1919 = 10.*t1223*t1795;
  t1922 = 10.*t1204*t1783;
  t1931 = 10.*t1298*t1795;
  t1934 = 10.*t1240*t1783;
  t1950 = 10.*t1275*t1795;
  t1952 = 10.*t1230*t1783;
  t1969 = Power(t1053,2);
  t1970 = Power(t1163,2);
  t1971 = t1969 + t1970;
  p_output1[0]=(0. + 0.625*t1102*t1147*(0.0666666666666667*t1097*t1285 - 0.0666666666666667*t1087*t1304 - 0.0666666666666667*t1097*t1437 - 0.0666666666666667*t1087*t1444) + 10.*t1252*(t1097*t1290 - 1.*t1087*t1308 - 1.*t1097*t1453 - 1.*t1087*t1457) + 10.*t1333*t1465 + 10.*t1344*t1472 + 10.*t1340*t1478 + 10.*t1316*t1486)*var2[0] + (-1.75625*t1102*t1109*t1147 + t1207 + t1227 + t1263 - 0.625*t1102*t1109*(-0.0666666666666667*t1087*t1285 - 0.0666666666666667*t1097*t1304) + 10.*t1310*t1365 + t1174*t1370 + 0.625*t1102*t1147*(-0.0666666666666667*t1087*t1378 - 0.0666666666666667*t1097*t1385) + 10.*t1252*(-1.*t1087*t1395 - 1.*t1097*t1399) + 10.*t1316*t1406 + 10.*t1333*t1412 + 10.*t1340*t1416 + 10.*t1344*t1420)*var2[1] + (1.2515625*t1170*t1174 + t1207 + t1227 + 0.625*t1102*t1147*t1242 + 10.*t1242*t1252 + t1263 + 1.875*t1170*t1310 + 10.*t1316*t1322 + 10.*t1316*t1333 + 10.*t1337*t1340 + 10.*t1344*t1355)*var2[2];
  p_output1[1]=(0. - 0.878125*t1087*t1102*t1109*t1147 + t1230*t1259 - 1.875*t1097*t1344 + 0.1*t1170*t1431 + 1.875*t1087*t1465 - 0.041666666666666664*t1087*t1102*t1147*t1512 - 10.*t1087*t1252*t1514 + 10.*t1478*t1526 + 10.*t1465*t1534 + 10.*t1316*t1603 + 10.*t1344*t1611)*var2[0] + (t1326*t1370 + 1.875*t1087*t1412 + t1492 + t1494 + t1497 + 0.041666666666666664*t1097*t1102*t1109*t1512 - 10.*t1097*t1365*t1514 + 10.*t1416*t1526 + 10.*t1412*t1534 - 0.878125*t1097*t1102*t1548 + 0.878125*t1097*t1102*t1550 - 0.041666666666666664*t1097*t1102*t1147*t1560 - 10.*t1097*t1252*t1565 + 10.*t1344*t1575 + 10.*t1316*t1580)*var2[1] + (-0.078125*t1097*t1102*t1147*t1204 - 1.25*t1097*t1204*t1252 + 1.875*t1087*t1316 + 1.2515625*t1170*t1326 + t1492 + t1494 + t1497 - 1.875*t1097*t1170*t1514 + 10.*t1337*t1526 + 10.*t1344*t1530 + 10.*t1316*t1534 + 10.*t1316*t1542)*var2[2];
  p_output1[2]=(0. - 0.878125*t1097*t1102*t1109*t1147 + 0.1*t1170*t1298 + t1259*t1326 + 1.875*t1087*t1344 + 1.875*t1097*t1465 + 0.041666666666666664*t1097*t1102*t1147*t1624 + 10.*t1097*t1252*t1628 + 10.*t1316*t1636 + 10.*t1344*t1640 + 10.*t1478*t1650 + 10.*t1465*t1654)*var2[0] + (t1331*t1370 + 1.875*t1097*t1412 + 0.878125*t1087*t1102*t1548 - 0.878125*t1087*t1102*t1550 + 0.041666666666666664*t1087*t1102*t1109*t1624 - 10.*t1087*t1365*t1628 + 10.*t1416*t1650 + 10.*t1412*t1654 + t1658 + t1661 + t1664 - 0.041666666666666664*t1087*t1102*t1147*t1689 - 10.*t1087*t1252*t1693 + 10.*t1344*t1704 + 10.*t1316*t1709)*var2[1] + (0.078125*t1087*t1102*t1147*t1204 + 1.25*t1087*t1204*t1252 + 1.875*t1097*t1316 + 1.2515625*t1170*t1331 - 1.875*t1087*t1170*t1628 + 10.*t1337*t1650 + 10.*t1316*t1654 + t1658 + t1661 + t1664 + 10.*t1344*t1669 + 10.*t1316*t1676)*var2[2];
  p_output1[3]=(10.*t1174*t1465 + 10.*t1223*t1478)*var2[0] + (10.*t1174*t1412 + 10.*t1223*t1416 + t1718 + t1723)*var2[1] + (10.*t1174*t1316 + 10.*t1223*t1337 + t1718 + t1723)*var2[2];
  p_output1[4]=(0. + 0.625*t1097*t1102*t1147 + 10.*t1097*t1252 + 10.*t1230*t1344 + 10.*t1316*t1431 + 10.*t1326*t1465 + 10.*t1298*t1478)*var2[0] + (0.625*t1087*t1102*t1109 - 10.*t1087*t1365 + 10.*t1326*t1412 + 10.*t1298*t1416 + t1732 + t1735)*var2[1] + (-1.875*t1087*t1170 + 10.*t1316*t1326 + 10.*t1298*t1337 + t1732 + t1735)*var2[2];
  p_output1[5]=(0. - 0.625*t1087*t1102*t1147 - 10.*t1087*t1252 + 10.*t1298*t1316 + 10.*t1326*t1344 + 10.*t1331*t1465 + 10.*t1275*t1478)*var2[0] + (0.625*t1097*t1102*t1109 - 10.*t1097*t1365 + 10.*t1331*t1412 + 10.*t1275*t1416 + t1754 + t1756)*var2[1] + (-1.875*t1097*t1170 + 10.*t1316*t1331 + 10.*t1275*t1337 + t1754 + t1756)*var2[2];
  p_output1[6]=(-0.625*(-0.0666666666666667*t1087*t1109*t1285 - 0.0666666666666667*t1097*t1109*t1304 + 0.0666666666666667*t1087*t1109*t1437 - 0.0666666666666667*t1097*t1109*t1444)*t1775 + 10.*t1486*t1783 + 10.*t1472*t1795 + 10.*t1333*t1824 + 10.*t1340*t1828)*var2[0] + (0. - 0.625*(-0.0666666666666667*t1097*t1147*t1285 + 0.0666666666666667*t1087*t1147*t1304 - 0.0666666666666667*t1097*t1109*t1378 + 0.0666666666666667*t1087*t1109*t1385)*t1775 + 10.*t1406*t1783 + 10.*t1420*t1795 + 10.*t1333*t1808 + 10.*t1340*t1812)*var2[1] + (-0.625*(-0.125*t1097*t1109*t1230 - 0.125*t1087*t1109*t1240)*t1775 + 10.*t1322*t1783 + 10.*t1333*t1783 + 10.*t1340*t1789 + 10.*t1355*t1795)*var2[2];
  p_output1[7]=(0.978125*t1097*t1775 - 0.625*(-0.0666666666666667*t1097*t1109*t1512 + 0.0666666666666667*t1147*t1597)*t1775 + 10.*t1603*t1783 + 10.*t1611*t1795 + 1.875*t1087*t1824 + 10.*t1534*t1824 + 10.*t1526*t1828 + t1097*t1864)*var2[0] + (0. - 0.625*(0.0666666666666667*t1087*t1147*t1512 - 0.0666666666666667*t1109*t1522 + 0.0666666666666667*t1087*t1109*t1560 + 0.0666666666666667*t1147*t1570)*t1775 + 10.*t1580*t1783 + 10.*t1575*t1795 + 10.*t1534*t1808 + 10.*t1526*t1812 - 1.*t1087*t1846)*var2[1] + (-0.625*(0.125*t1087*t1109*t1204 - 0.125*t1147*t1230)*t1775 + 1.875*t1087*t1783 + 10.*t1534*t1783 + 10.*t1542*t1783 + 10.*t1526*t1789 + 10.*t1530*t1795)*var2[2];
  p_output1[8]=(-0.978125*t1087*t1775 - 0.625*(-0.0666666666666667*t1087*t1109*t1624 + 0.0666666666666667*t1147*t1632)*t1775 + 10.*t1636*t1783 + 10.*t1640*t1795 + 1.875*t1097*t1824 + 10.*t1654*t1824 + 10.*t1650*t1828 - 1.*t1087*t1864)*var2[0] + (0. - 0.625*(-0.0666666666666667*t1097*t1147*t1624 - 0.0666666666666667*t1109*t1644 - 0.0666666666666667*t1097*t1109*t1689 + 0.0666666666666667*t1147*t1699)*t1775 + 10.*t1709*t1783 + 10.*t1704*t1795 + 10.*t1654*t1808 + 10.*t1650*t1812 - 1.*t1097*t1846)*var2[1] + (-0.625*(0.125*t1097*t1109*t1204 + 0.125*t1147*t1240)*t1775 + 1.875*t1097*t1783 + 10.*t1654*t1783 + 10.*t1676*t1783 + 10.*t1650*t1789 + 10.*t1669*t1795)*var2[2];
  p_output1[9]=(10.*t1174*t1824 + 10.*t1223*t1828)*var2[0] + (0.625*t1109*t1775 + 10.*t1174*t1808 + 10.*t1223*t1812 + t1919 + t1922)*var2[1] + (10.*t1174*t1783 + 10.*t1223*t1789 + t1919 + t1922)*var2[2];
  p_output1[10]=(0.625*t1087*t1109*t1775 + 10.*t1431*t1783 + 10.*t1230*t1795 + 10.*t1326*t1824 + 10.*t1298*t1828)*var2[0] + (0. + 0.625*t1097*t1147*t1775 + 10.*t1326*t1808 + 10.*t1298*t1812 + t1931 + t1934)*var2[1] + (10.*t1326*t1783 + 10.*t1298*t1789 + t1931 + t1934)*var2[2];
  p_output1[11]=(0.625*t1097*t1109*t1775 + 10.*t1298*t1783 + 10.*t1326*t1795 + 10.*t1331*t1824 + 10.*t1275*t1828)*var2[0] + (0. - 0.625*t1087*t1147*t1775 + 10.*t1331*t1808 + 10.*t1275*t1812 + t1950 + t1952)*var2[1] + (10.*t1331*t1783 + 10.*t1275*t1789 + t1950 + t1952)*var2[2];
  p_output1[12]=-1.875*t1472*t1971*var2[0] - 1.875*t1420*t1971*var2[1] + (0. - 1.875*t1355*t1971)*var2[2];
  p_output1[13]=(1.2515625*t1097*t1971 - 1.875*t1611*t1971)*var2[0] - 1.875*t1575*t1971*var2[1] + (0. - 1.875*t1530*t1971)*var2[2];
  p_output1[14]=(-1.2515625*t1087*t1971 - 1.875*t1640*t1971)*var2[0] - 1.875*t1704*t1971*var2[1] + (0. - 1.875*t1669*t1971)*var2[2];
  p_output1[15]=-1.875*t1223*t1971*var2[1] + (0. - 1.875*t1223*t1971)*var2[2];
  p_output1[16]=-1.875*t1230*t1971*var2[0] - 1.875*t1298*t1971*var2[1] + (0. - 1.875*t1298*t1971)*var2[2];
  p_output1[17]=-1.875*t1326*t1971*var2[0] - 1.875*t1275*t1971*var2[1] + (0. - 1.875*t1275*t1971)*var2[2];
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
