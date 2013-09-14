Include "mem3D_data.geo";

Mesh.Algorithm3D = 4 ;
Mesh.Optimize = 1;

Geometry.AutoCoherence = 1;

// Characteriscic lengths
p0=  20*u ;
pb   = 10*u ;//beams
ph   = 12*u ;//holes
p_IN = 20*u ;
pa   = 12*u ;//air layer

lcs1 = 2*50 * u ;
lcs2 = 2*100 * u ;

// Building the geometry
Point(1) = { bc/2, Lc/2, 0, p0};
Point(2) = { bc/2,-Lc/2, 0, p0};
Point(3) = {-bc/2,-Lc/2, 0, p0};
Point(4) = {-bc/2, Lc/2, 0, p0};

k = newp ;
i = 0;
kl = 1 ;

//Beams
For(1:4)
  Point(k)   = { bc/2, Lc/2-3*w-i*(da+bb), 0, pb};
  Point(k+1) = { bc/2, Lc/2-3*w-bb-i*(da+bb), 0, pb};
  Point(k+2) = { -bc/2, Lc/2-3*w-i*(da+bb), 0, pb};
  Point(k+3) = { -bc/2, Lc/2-3*w-bb-i*(da+bb), 0, pb};

  Point(k+4)   = { bc/2+Lb, Lc/2-3*w-i*(da+bb), 0, pb};
  Point(k+5) = { bc/2+Lb, Lc/2-3*w-bb-i*(da+bb), 0, pb};
  Point(k+6) = { -bc/2-Lb, Lc/2-3*w-i*(da+bb), 0, pb};
  Point(k+7) = { -bc/2-Lb, Lc/2-3*w-bb-i*(da+bb), 0, pb};

  Line(kl) = {k,k+4};
  Line(kl+1) = {k+1,k+5};
  Line(kl+2) = {k+2,k+6};
  Line(kl+3) = {k+3,k+7};

  Line(kl+4) = {k,k+1};
  Line(kl+5) = {k+4,k+5};
  Line(kl+6) = {k+2,k+3};
  Line(kl+7) = {k+6,k+7};

  k += 8; i+=1; kl +=8 ;
EndFor

Line(33) = {4,1};
Line(34) = {4,7};
Line(35) = {8,15};
Line(36) = {16,23};
Line(37) = {24,31};
Line(38) = {32,3};
Line(39) = {3,2};
Line(40) = {2,30};
Line(41) = {29,22};
Line(42) = {21,14};
Line(43) = {13,6};
Line(44) = {5,1};

k = newp ;
i = 1 ; j = 1 ;

kl = 45;
//Holes in INT
For(1:9)
  For(1:5)
    Point(k) = { bc/2-i*w, Lc/2-j*w, 0, ph};
    Point(k+1) = { bc/2-i*w, Lc/2-j*w-w, 0, ph};
    Point(k+2) = { bc/2-i*w-w, Lc/2-j*w-w, 0, ph};
    Point(k+3) = { bc/2-i*w-w, Lc/2-j*w, 0, ph};

    Line(kl) = {k,k+1};
    Line(kl+1) = {k+1,k+2};
    Line(kl+2) = {k+2,k+3};
    Line(kl+3) = {k+3,k};

    llholes[]+= kl+4; Line Loop(kl+4) = {kl,kl+1,kl+2,kl+3};
    i +=2;
    k += 4 ;kl +=6;
  EndFor
  j +=2; i = 1;
EndFor


Line Loop(314) = {-40,-39,-38,-31,-37,-23,-36,-15,-35,-7,-34,33,-44,5,-43,13,-42,21,-41,29};
surPlateInt_dwn = news ; Plane Surface(news) = {314, llholes[]};

Line Loop(316) = {4,-8,-3,7};
Plane Surface(317) = {316};
Line Loop(318) = {12,-16,-11,15};
Plane Surface(319) = {318};
Line Loop(320) = {20,-24,-19,23};
Plane Surface(321) = {320};
Line Loop(322) = {28,-32,-27,31};
Plane Surface(323) = {322};
Line Loop(324) = {26,-30,-25,29};
Plane Surface(325) = {324};
Line Loop(326) = {18,-22,-17,21};
Plane Surface(327) = {326};
Line Loop(328) = {10,-14,-9,13};
Plane Surface(329) = {328};
Line Loop(330) = {2,-6,-1,5};
Plane Surface(331) = {330};

nl = 2 ;
vol[] = Extrude Surface { surPlateInt_dwn, {0,0,d}} { Layers { {nl}, {1}} ; };;
surPlateInt_up = vol[0];

For k In {317:331:2}
vol[] = Extrude Surface { k, {0,0,d}} { Layers { {nl}, {1}} ; }; ;
EndFor


surPlateInt[] = {1421,1408,323,1412,1416,552,315,536,540,544,1333,1399,1386,321,1390,1394,560,
  1364,319,1368,1372,568,1342,317,1346,1350,576,580,584,1504,331,1496,1500,1509,
  592,1482,329,1474,1478,1487,600,1460,327,1452,1456,1465,608,1438,325,1430,1434,
  1443,1355,1377,616,620,624,628,632,636,640,644,648,652,656,660,664,668,672,676,
  680,684,688,692,696,700,704,708,712,716,720,724,728,732,736,740,744,748,752,756,
  760,764,768,772,776,780,784,788,792,796,800,804,808,812,816,820,824,828,832,836,
  840,844,848,852,856,860,864,868,872,876,880,884,888,892,896,900,904,908,912,916,
  920,924,928,932,936,940,944,948,952,956,960,964,968,972,976,980,984,988,992,996,
  1000,1004,1008,1012,1016,1020,1024,1028,1032,1036,1040,1044,1048,1052,1056,1060,
  1064,1068,1072,1076,1080,1084,1088,1092,1096,1100,1104,1108,1112,1116,1120,1124,
  1128,1132,1136,1140,1144,1148,1152,1156,1160,1164,1168,1172,1176,1180,1184,1188,
  1192,1196,1200,1204,1208,1212,1216,1220,1224,1228,1232,1236,1240,1244,1248,1252,
  1256,1260,1264,1268,1272,1276,1280,1284,1288,1292,1296,1300,1304,1308,1312,1316,
  1320,1324,1328,1332};

slPlateInt=newsl; Surface Loop(newsl) = surPlateInt[] ;
volPlateInt = newv; Volume(newv) = {newsl-1};

Point(1201) = { bin/2, Lin/2, -gap, p_IN};
Point(1202) = { bin/2,-Lin/2, -gap, p_IN};
Point(1203) = {-bin/2,-Lin/2, -gap, p_IN};
Point(1204) = {-bin/2, Lin/2, -gap, p_IN};

Point(1205) = { bin/2-win, Lin/2, -gap, p_IN};
Point(1206) = { bin/2-win,-Lin/2, -gap, p_IN};
Point(1207) = {-bin/2+win,-Lin/2, -gap, p_IN};
Point(1208) = {-bin/2+win, Lin/2, -gap, p_IN};

Point(1209) = { bin/2-win, Lin/2+t, -gap, p_IN};
Point(1210) = { bin/2-win,-Lin/2-t, -gap, p_IN};
Point(1211) = {-bin/2+win,-Lin/2-t, -gap, p_IN};
Point(1212) = {-bin/2+win, Lin/2+t, -gap, p_IN};

Line(1504) = {1204,1208};
Line(1505) = {1208,1212};
Line(1506) = {1212,1209};
Line(1507) = {1209,1205};
Line(1508) = {1205,1201};
Line(1509) = {1201,1202};
Line(1510) = {1202,1206};
Line(1511) = {1206,1210};
Line(1512) = {1210,1211};
Line(1513) = {1211,1207};
Line(1514) = {1207,1203};
Line(1515) = {1203,1204};

Line Loop(1516) = {1504,1505,1506,1507,1508,1509,1510,1511,1512,1513,1514,1515};
Plane Surface(1517) = {1516};

nl2 = 1 ;
Extrude Surface { 1517, {0,0,-td}} { Layers { {nl2}, {1}} ;  };
Extrude Surface { 1579, {0,0,-tin}} { Layers { {nl2}, {1}} ;  };

surDiel[] =  {1579,1534,1517,1538,1542,1546,1550,1554,1558,1562,1566,1570,1574,1578};
slDiel = newsl; Surface Loop(newsl) = surDiel[];
volDiel = newv; Volume(newv) = {newsl-1};
surPlateIn[] = {1579,1596,1600,1604,1608,1612,1616,1620,1624,1628,1632,1636,1640,1641};
slPlateIn = newsl; Surface Loop(newsl) = surPlateIn[];
volPlateIn = newv; Volume(newv) = {newsl-1};

Coherence ;


Physical Volume(PLATEINT) = {volPlateInt};
Physical Surface(SUR_PLATEINT) = Boundary{Volume{volPlateInt};};
Physical Surface(SUR_PLATEINT_DWN) = surPlateInt_dwn;
Physical Surface(SUR_PLATEINT_UP)  = surPlateInt_up;

Physical Volume(DIEL) = {volDiel};
Physical Surface(SUR_DIEL) = Boundary{Volume{volDiel};};
Physical Volume (PLATEIN) = {volPlateIn};
Physical Surface (SUR_PLATEIN) = Boundary{Volume{volPlateIn};};

Physical Surface(SUR_BEAM1i) = {1346};
Physical Surface(SUR_BEAM2i) = {1368};
Physical Surface(SUR_BEAM3i) = {1390};
Physical Surface(SUR_BEAM4i) = {1412};

Physical Point(PTO_BEAM1i1)= {11} ;
Physical Point(PTO_BEAM1i2)= {12} ;
Physical Point(PTO_BEAM1i3)= {1012} ;
Physical Point(PTO_BEAM1i4)= {1016} ;

Physical Point(PTO_BEAM2i1)= {19} ;
Physical Point(PTO_BEAM2i2)= {20} ;
Physical Point(PTO_BEAM2i3)= {1018} ;
Physical Point(PTO_BEAM2i4)= {1022} ;

Physical Point(PTO_BEAM3i1)= {27} ;
Physical Point(PTO_BEAM3i2)= {28} ;
Physical Point(PTO_BEAM3i3)= {1024} ;
Physical Point(PTO_BEAM3i4)= {1028} ;

Physical Point(PTO_BEAM4i1)= {35} ;
Physical Point(PTO_BEAM4i2)= {36} ;
Physical Point(PTO_BEAM4i3)= {1030} ;
Physical Point(PTO_BEAM4i4)= {1034} ;


Physical Surface(SUR_BEAM1d) = {1500};
Physical Surface(SUR_BEAM2d) = {1478};
Physical Surface(SUR_BEAM3d) = {1456};
Physical Surface(SUR_BEAM4d) = {1434};

Physical Point(PTO_BEAM1d1)= {9} ;
Physical Point(PTO_BEAM1d2)= {10} ;
Physical Point(PTO_BEAM1d3)= {1054} ;
Physical Point(PTO_BEAM1d4)= {1058} ;

Physical Point(PTO_BEAM2d1)= {17} ;
Physical Point(PTO_BEAM2d2)= {18} ;
Physical Point(PTO_BEAM2d3)= {1048} ;
Physical Point(PTO_BEAM2d4)= {1052} ;

Physical Point(PTO_BEAM3d1)= {25} ;
Physical Point(PTO_BEAM3d2)= {26} ;
Physical Point(PTO_BEAM3d3)= {1042} ;
Physical Point(PTO_BEAM3d4)= {1046} ;

Physical Point(PTO_BEAM4d1)= {33} ;
Physical Point(PTO_BEAM4d2)= {34} ;
Physical Point(PTO_BEAM4d3)= {1036} ;
Physical Point(PTO_BEAM4d4)= {1040} ;


// Air Layer for computation with FEM

kp = newp;
Point(newp) = { bc/2+Lb+dal, Lc/2+dal, d+dal, pa};
Point(newp) = { bc/2+Lb+dal,-Lc/2-dal, d+dal, pa};
Point(newp) = {-bc/2-Lb-dal,-Lc/2-dal, d+dal, pa};
Point(newp) = {-bc/2-Lb-dal, Lc/2+dal, d+dal, pa};
Point(newp) = { bc/2+Lb+dal, Lc/2+dal, -dal, pa};
Point(newp) = { bc/2+Lb+dal,-Lc/2-dal, -dal, pa};
Point(newp) = {-bc/2-Lb-dal,-Lc/2-dal, -dal, pa};
Point(newp) = {-bc/2-Lb-dal, Lc/2+dal, -dal, pa};

Line(newl) = {kp,kp+1};
Line(newl) = {kp+1,kp+2};
Line(newl) = {kp+2,kp+3};
Line(newl) = {kp+3,kp};
Line(newl) = {kp+4,kp+5};
Line(newl) = {kp+5,kp+6};
Line(newl) = {kp+6,kp+7};
Line(newl) = {kp+7,kp+4};
Line(newl) = {kp,kp+4};
Line(newl) = {kp+1,kp+5};
Line(newl) = {kp+2,kp+6};
Line(newl) = {kp+3,kp+7};

Line Loop(2235) = {2224,2225,2226,2223};
Plane Surface(2236) = {2235};
Line Loop(2237) = {-2227,-2231,2223,2232};
Plane Surface(2238) = {2237};
Line Loop(2239) = {-2233,-2224,2232,2228};
Plane Surface(2240) = {2239};
Line Loop(2241) = {2234,-2229,-2233,2225};
Plane Surface(2242) = {2241};
Line Loop(2243) = {2231,-2230,-2234,2226};
Plane Surface(2244) = {2243};
Line Loop(2245) = {2227,2228,2229,2230};
Plane Surface(2246) = {2245};

slAirlayer=newsl; Surface Loop(newsl) = {2236:2246:2};
volAirlayer = newv; Volume(newv) = {slAirlayer, slPlateInt}; // Right now I do not see the utility...

//Shell
cen0 = newp ; Point(cen0) = {0, 0, 0,lcs1} ;
kp = newp ;
Point(newp) = {R1,0,0,lcs1} ;
Point(newp) = {0,R1,0,lcs1} ;
Point(newp) = {-R1,0,0,lcs1} ;
Point(newp) = {0,-R1,0,lcs1} ;
Point(newp) = {0,0,R1,lcs1} ;
Point(newp) = {0,0,-R1,lcs1} ;

Circle(newl) = {kp,cen0,kp+1};
Circle(newl) = {kp+1,cen0,kp+2};
Circle(newl) = {kp+2,cen0,kp+3};
Circle(newl) = {kp+3,cen0,kp};

Circle(newl) = {kp,cen0,kp+4};
Circle(newl) = {kp+4,cen0,kp+2};
Circle(newl) = {kp+2,cen0,kp+5};
Circle(newl) = {kp+5,cen0,kp};

Circle(newl) = {kp+1,cen0,kp+4};
Circle(newl) = {kp+4,cen0,kp+3};
Circle(newl) = {kp+3,cen0,kp+5};
Circle(newl) = {kp+5,cen0,kp+1};

Line Loop(2261) = {-2257,-2249,2253};
Ruled Surface(2262) = {2261};
Line Loop(2263) = {-2254,-2257,2250};
Ruled Surface(2264) = {2263};
Line Loop(2265) = {-2251,-2254,2258};
Ruled Surface(2266) = {2265};
Line Loop(2267) = {2258,2252,2253};
Ruled Surface(2268) = {2267};
Line Loop(2269) = {-2249,-2256,2260};
Ruled Surface(2270) = {2269};
Line Loop(2271) = {2260,2250,2255};
Ruled Surface(2272) = {2271};
Line Loop(2273) = {-2255,2251,2259};
Ruled Surface(2274) = {2273};
Line Loop(2275) = {-2252,2259,2256};
Ruled Surface(2276) = {2275};


kp = newp ;
Point(newp) = {R2,0,0,lcs2} ;
Point(newp) = {0,R2,0,lcs2} ;
Point(newp) = {-R2,0,0,lcs2} ;
Point(newp) = {0,-R2,0,lcs2} ;
Point(newp) = {0,0,R2,lcs2} ;
Point(newp) = {0,0,-R2,lcs2} ;

Circle(newl) = {kp,cen0,kp+1};
Circle(newl) = {kp+1,cen0,kp+2};
Circle(newl) = {kp+2,cen0,kp+3};
Circle(newl) = {kp+3,cen0,kp};

Circle(newl) = {kp,cen0,kp+4};
Circle(newl) = {kp+4,cen0,kp+2};
Circle(newl) = {kp+2,cen0,kp+5};
Circle(newl) = {kp+5,cen0,kp};

Circle(newl) = {kp+1,cen0,kp+4};
Circle(newl) = {kp+4,cen0,kp+3};
Circle(newl) = {kp+3,cen0,kp+5};
Circle(newl) = {kp+5,cen0,kp+1};


Line Loop(2289) = {-2284,-2287,2280};
Ruled Surface(2290) = {2289};
Line Loop(2291) = {2286,2280,2281};
Ruled Surface(2292) = {2291};
Line Loop(2293) = {2285,-2281,2277};
Ruled Surface(2294) = {2293};
Line Loop(2295) = {2277,-2288,2284};
Ruled Surface(2296) = {2295};
Line Loop(2297) = {-2279,-2282,2286};
Ruled Surface(2298) = {2297};
Line Loop(2299) = {-2282,-2285,2278};
Ruled Surface(2300) = {2299};
Line Loop(2301) = {2283,2288,2278};
Ruled Surface(2302) = {2301};
Line Loop(2303) = {-2287,-2279,2283};
Ruled Surface(2304) = {2303};


slShellOut=newsl; Surface Loop(newsl) = {2298,2304,2290,2296,2294,2300,2302,2292};
slShellIn =newsl; Surface Loop(newl) = {2270,2262,2264,2266,2274,2272,2276,2268};
volShell = newv ; Volume(newv) = {slShellOut, slShellIn};

slPlateInDiel = newsl ; Surface Loop (newsl) = CombinedBoundary{Volume{volPlateIn,volDiel};};
volAir=newv; Volume(newsl) = {slShellIn, slAirlayer, slPlateInDiel};


//------------------------------------------------------------------------------
// Physical regions
//------------------------------------------------------------------------------


Physical Volume (AIRLAYER) = {volAirlayer};
Physical Volume (SHELL) = {volShell};
Physical Volume (AIR)   = {volAir};
Physical Surface (SUR_INF) = {2298,2304,2290,2296,2294,2300,2302,2292};

Recursive Color Cyan {Volume{volAir,volAirlayer, volShell};}
Recursive Color Gold {Volume{volPlateInt};}
Recursive Color NavyBlue {Volume{volDiel};}
Recursive Color Red { Volume{volPlateIn};}


//Hide { Point{ Point '*' }; }
//Hide { Line{ Line '*' }; }

nice_mems[] = Boundary{ Surface{surPlateInt[], surPlateIn[], surDiel[]}; };
Show { Line{ nice_mems[] }; }

