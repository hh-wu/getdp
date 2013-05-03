Include "relay_data.pro";

pos_y = p_init + displacementY ; //-0.014; // 1mm-15mm Vertical displacement relay
//pos_y = -7.7e-3;  // 1mm-15mm Vertical displacement relay

pm0 = 0.01 ;
pm = pm0 ;

p = 0.005 ;
pa = p/3 ;
pa2 = pa ;
pa2h = 4*pa ;
pa2w = 4*pa ;

e2 = 3.55e-2;
h2 = 8.8e-2 ;

e3 = 4.5e-2 ;
h3 = 5e-2 ;

e4 = 5.5e-2  ;
h4 = 12.2e-2 ;

e5 = 9.e-2 ;

// Physical regions
MovingIron = 1000 ;
SkinMovingIron = 1100 ;

Yoke = 2000 ;
SkinYokeOut = 2200 ;
SkinYokeIn =  2300 ;

MagnetRight = 3000 ;
MagnetLeft  = 3001 ;

CoilR_up   = 4000 ;
CoilR_down = 4001 ;
CoilL_up   = 4002 ;
CoilL_down = 4003 ;

AirGapOut = 5000 ;

AirLayer = 10000;
/*
AirLayerU = 10000;
AirLayerR = 10001;
AirLayerD = 10002;
AirLayerL = 10003;
*/
Dummy = 111111 ;

Point(1) = { e1, h1+pos_y, 0, pa};
Point(2) = { e1,-h1+pos_y, 0, pa};
Point(3) = {-e1,-h1+pos_y, 0, pa};
Point(4) = {-e1, h1+pos_y, 0, pa};

Point(5) = { e2, h2, 0, pa2};
Point(6) = { e2,-h2, 0, pa2};
Point(7) = {-e2,-h2, 0, pa2};
Point(8) = {-e2, h2, 0, pa2};

Point(9) = { e2, h3, 0, p};
Point(10) = { e2,-h3, 0, p};
Point(11) = {-e2,-h3, 0, p};
Point(12) = {-e2, h3, 0, p};

Point(13) = { e4, h2, 0, p};
Point(14) = { e4, h3, 0, p};
Point(15) = { e4,-h3, 0, p};
Point(16) = { e4,-h2, 0, p};

Point(17) = {-e4,-h2, 0, p};
Point(18) = {-e4,-h3, 0, p};
Point(19) = {-e4, h3, 0, p};
Point(20) = {-e4, h2, 0, p};

Point(21) = { e3, h3, 0, p};
Point(22) = { e3,-h3, 0, p};
Point(23) = {-e3,-h3, 0, p};
Point(24) = {-e3, h3, 0, p};

Point(25) = { e5, h4, 0, pm0};
Point(26) = { e5,-h4, 0, pm0};
Point(27) = {-e5,-h4, 0, pm0};
Point(28) = {-e5, h4, 0, pm0};


Point(29) = { e1+d, h1+d+pos_y, 0, pa};
Point(30) = { e1+d,-h1-d+pos_y, 0, pa};
Point(31) = {-e1-d,-h1-d+pos_y, 0, pa};
Point(32) = {-e1-d, h1+d+pos_y, 0, pa};


Point(33) = { 0, h2, 0, p};
Point(34) = { 0,-h2, 0, p};

Point(37) = {e5,  0, 0, pm} ;
Point(38) = { 0,-h4, 0, pm} ;
Point(39) = {-e5, 0, 0, pm} ;
Point(40) = { 0, h4, 0, pm} ;

Point(41) = { e1, pos_y, 0., pa2w};
Point(42) = { 0.,-h1+pos_y, 0., pa2h};
Point(43) = {-e1, pos_y, 0, pa2w};
Point(44) = { 0., h1+pos_y, 0., pa2h};

Point(45) = { e1+d, pos_y, 0., pa2w};
Point(46) = {    0., -h1-d+pos_y, 0., pa2h};
Point(47) = {-e1-d, pos_y, 0., pa2w};
Point(48) = {    0.,  h1+d+pos_y, 0., pa2h};


Line(1) = {1,41};
Line(2) = {41,2};
Line(3) = {2,42};
Line(4) = {42,3};
Line(111) = {3,43};
Line(222) = {43,4};
Line(333) = {4,44};
Line(444) = {44,1};

Line(5) = {5,9};
Line(6) = {9,10};
Line(7) = {10,6};
Line(8) = {6,34};
Line(81) = {34,7};
Line(9) = {7,11};
Line(10) = {11,12};
Line(11) = {12,8};
Line(12) = {8,33};
Line(121)= {33,5};
Line(13) = {5,13};
Line(14) = {13,14};
Line(15) = {14,21};
Line(16) = {21,9};
Line(17) = {21,22};
Line(18) = {22,10};
Line(19) = {22,15};
Line(20) = {15,16};
Line(21) = {16,6};
Line(22) = {7,17};
Line(23) = {17,18};
Line(24) = {18,23};
Line(25) = {23,11};
Line(26) = {23,24};
Line(27) = {24,12};
Line(28) = {24,19};
Line(29) = {19,20};
Line(30) = {20,8};

Line(31) = {25,37};
Line(32) = {37,26};
Line(33) = {26,38};
Line(34) = {38,27};
Line(310) = {27,39};
Line(320) = {39,28};
Line(330) = {28,40};
Line(340) = {40,25};

Line Loop(35) = {1,2,3,4,111,222,333,444};
surfIron = news ;
Plane Surface(surfIron) = {35};

Line Loop(37) = {-16,-15,-14,-13,5};
surfCoils[] += news ;
Plane Surface(surfCoils[0]) = {37};

Line Loop(39) = {-21,-20,-19,18,7};
surfCoils[] += news ;
Plane Surface(surfCoils[1]) = {39};

Line Loop(41) = {-25,-24,-23,-22,9};
surfCoils[] += news ;
Plane Surface(surfCoils[2]) = {41};

Line Loop(43) = {-30,-29,-28,27,11};
surfCoils[] += news ;
Plane Surface(surfCoils[3]) = {43};

Line Loop(45) = {-18,-17,16,6};
surfMagnets[] += news ;
Plane Surface(surfMagnets[0]) = {45};
Line Loop(47) = {-27,-26,25,10};
surfMagnets[] += news ;
Plane Surface(surfMagnets[1]) = {47};

Line Loop(49) = {31,32,33,34,310,320,330,340};
Line Loop(50) = {12,121,13,14,15,17,19,20,21,8,81,22,23,24,26,28,29,30};
surfYoke = news ;
Plane Surface(surfYoke) = {49,50};


// Surfaces for Maxwell stress tensor: Arkkio Method
Line(4004) = {1,29};
Line(4006) = {29,45};
Line(40061) = {45,30};
Line(4007) = {30,2};

Line(4010) = {4,32};
Line(4014) = {32,48};
Line(40141) = {48,29};

Line(4016) = {3,31};
Line(4018) = {32,47};
Line(40181) = {47,31};

Line(4020) = {31,46};
Line(40201) = {46,30};

Line Loop(40212) = {4014,40141,-4004,-444,-333,4010};
surfal[] += news ; Plane Surface(surfal[0]) = {40212};
Line Loop(40214) = {-4007,-40061,-4006,-4004,1,2};
surfal[] += news ; Plane Surface(surfal[1]) = {40214};
Line Loop(40216) = {4020,40201,4007,3,4,4016};
surfal[] += news ; Plane Surface(surfal[2]) = {40216};

Line Loop(40218) = {-4016,111,222,4010,4018,40181};
surfal[] += news ; Plane Surface(surfal[3]) = {40218};

Line Loop(40228) = {12,121,5,6,7,8,81,9,10,11};
Line Loop(40229) = {4020,40201,-40061,-4006,-40141,-4014,4018,40181};
Plane Surface(40230) = {40228,40229};


lingapout[] = {12,121,5,6,7,8,81,9,10,11};
viewLines[] = Boundary{Surface{surfIron, surfCoils[], surfMagnets[], surfYoke};};
Physical Line(111111) = {viewLines[],lingapout[]} ;

// Physical regions
Physical Surface(MovingIron) = {surfIron};// Moving Iron part
Physical Line(SkinMovingIron) = {Boundary{Surface{surfIron};}};//SkinMoving

Physical Surface(Yoke) =  {surfYoke};// Iron
Physical Line(SkinYokeOut) = {31,32,33,34,310,320,330,340};

Physical Surface(CoilR_up)   = {surfCoils[0]};
Physical Surface(CoilR_down) = {surfCoils[1]};
Physical Surface(CoilL_up)   = {surfCoils[3]};
Physical Surface(CoilL_down) = {surfCoils[2]};

Physical Surface(MagnetRight) = {surfMagnets[0]};
Physical Surface(MagnetLeft ) = {surfMagnets[1]};

Physical Surface(AirGapOut) = {40230};


Physical Surface(AirLayer) = {surfal[]} ;
/*
Physical Surface(AirLayerU) = {40213} ;
Physical Surface(AirLayerR) = {40215} ;
Physical Surface(AirLayerD) = {40217} ;
Physical Surface(AirLayerL) = {40219} ;
*/
// Some colors ...
Color Red {Surface{surfMagnets[]};}
Color Cyan {Surface{surfCoils[]};}
Color Gold {Surface{surfIron,surfYoke};}
Color White{Surface{40230};}
Color Violet {Surface{surfal};}














