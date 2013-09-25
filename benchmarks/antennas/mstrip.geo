Include "mstrip_param.pro" ;

TRANS = 1 ;

Mesh.Algorithm3D = 4; // 3D mesh algorithm (1=Delaunay, 4=Frontal)
Mesh.Optimize = 1; // Optimize the mesh to improve the quality of tetrahedral elements
Mesh.Smoothing = 5;

//Mesh.CharacteristicLengthFactor = 2 ;

lc   = W2/2;
lcb   = lc;
lair  = lc*5;
laire = lc*3;


//nw1 = Ceil[W1/lc] ;
nw2 = Ceil[W2/lc]+1 ;
nw1 = nw2 ;

//=======================================================================
nl0 = Ceil[D4/lc] + 1 ;
nl1 = Ceil[(L6-D4)/lc] ;
nl2 = Ceil[L4/lc] ;
nl3 = Ceil[L1/lc] ;

nd5 = Ceil[D5/lc] ;
nd6 = Ceil[D6/lc] ;
nl5 = Ceil[L5/lc] ;
nl4 = Ceil[L2/lc] ;

ng = Ceil[(D6+W2+2*L5+2*L2+D3)/lc];

ndepth2 = Ceil[depth2/depth1]/4 ;
ndepth3 = 2 * ndepth2 ;
ndepth4 = ndepth2 ;
lmstrip = 1 ;
ndepth3to4 = (ndepth3+ndepth4)/2 ;
nlground = Ceil[-(-D4-hT/2)/lc] ;

nlair = Ceil[zb2/laire]*2 ;
nlpml = 5 ;




//==========================================================

p0[]+=newp ; Point(p0[0]) = { 0,        0,        0., lc};
p0[]+=newp ; Point(p0[1]) = { 0,        L6-D4+W2, 0., lc};
p0[]+=newp ; Point(p0[2]) = { L3,       L6-D4+W2, 0., lc};
p0[]+=newp ; Point(p0[3]) = { L3,       L6-D4-L4+W2, 0., lc};
p0[]+=newp ; Point(p0[4]) = { L3+L5,    L6-D4-L4+W2, 0., lc};
p0[]+=newp ; Point(p0[5]) = { L3+L5,    L6-D4+W2, 0., lc};
p0[]+=newp ; Point(p0[6]) = { L3+L5+L2, L6-D4+W2, 0., lc};
p0[]+=newp ; Point(p0[7]) = { L3+L5+L2, L6-D4-L4+W2, 0., lc};
p0[]+=newp ; Point(p0[8]) = { L3+2*L5+L2, L6-D4-L4+W2, 0., lc};
p0[]+=newp ; Point(p0[9]) = { L3+2*L5+L2, L6-D4+W2, 0., lc};
p0[]+=newp ; Point(p0[10]) = {L3+2*L5+2*L2, L6-D4+W2, 0., lc};
p0[]+=newp ; Point(p0[11]) = {L3+2*L5+2*L2, L6-D4-L1, 0., lc};

p0[]+=newp ; Point(p0[12]) = {L3+2*L5+2*L2-W2, L6-D4-L1, 0., lc};
p0[]+=newp ; Point(p0[13]) = {L3+2*L5+2*L2-W2, L6-D4, 0., lc};
p0[]+=newp ; Point(p0[14]) = {L3+2*L5+L2+W2, L6-D4, 0., lc};
p0[]+=newp ; Point(p0[15]) = {L3+2*L5+L2+W2, L6-D4-L4, 0., lc};
p0[]+=newp ; Point(p0[16]) = {L3+L5+L2-W2, L6-D4-L4, 0., lc};
p0[]+=newp ; Point(p0[17]) = {L3+L5+L2-W2, L6-D4, 0., lc};
p0[]+=newp ; Point(p0[18]) = {L3+L5+W2, L6-D4, 0., lc};
p0[]+=newp ; Point(p0[19]) = {L3+L5+W2, L6-D4-L4, 0., lc};
p0[]+=newp ; Point(p0[20]) = {L3-W2, L6-D4-L4, 0., lc};
p0[]+=newp ; Point(p0[21]) = {L3-W2, L6-D4, 0., lc};
p0[]+=newp ; Point(p0[22]) = {L3-W2-D6, L6-D4, 0., lc};

p0[]+=newp ; Point(p0[23]) = {L3-2*W2-D6, L6-D4, 0., lc};
p0[]+=newp ; Point(p0[24]) = {L3-2*W2-D6-D5, L6-D4, 0., lc};
p0[]+=newp ; Point(p0[25]) = {L3-2*W2-D6-D5, 0, 0., lc};

For k1 In {0:#p0[]-1}
k2 = (k1==(#p0[]-1)) ? 0 : k1+1 ;
l0[] += newl ; Line(l0[k1]) = {p0[k1],p0[k2]};
EndFor

Line Loop(newll) = {l0[]};
surfmstrip[] += news ; Plane Surface(surfmstrip[0]) = {newll-1};

p0[]+=newp ; Point(p0[26]) = {L3-W2-D6, 0, 0., lc};
p0[]+=newp ; Point(p0[27]) = {L3-2*W2-D6, 0, 0., lc};

l0[] += newl ; Line(newl) = {p0[26],p0[27]};
l0[] += newl ; Line(newl) = {p0[22],p0[26]};
l0[] += newl ; Line(newl) = {p0[27],p0[23]};

Line Loop(newll) = {-l0[22],l0[27],l0[26],l0[28]};
surfmstrip[] += news ; Plane Surface(surfmstrip[1]) = {newll-1};

Transfinite Line{l0[25]}         = nw1 + 1;
Transfinite Line{l0[{11,22,26}]} = nw2 + 1;

Transfinite Line {l0[{0,24,27,28}]}    = nl1 + 1;
Transfinite Line {l0[{2:8:2,14:20:2}]} = nl2 + 1;
Transfinite Line {l0[{12,10}]}         = nl3 + 1;
Transfinite Line {l0[{5,9,13,17}]}     = nl4 + 1;
Transfinite Line {l0[{3,7,15,19}]}     = nl5 + 1;

Transfinite Line{l0[23]} = nd5 + 1;
Transfinite Line{l0[21]} = nd6 + 1;
Transfinite Line{l0[1]}  = nd5 + nd6 + nw2 + 1;

Transfinite Surface{surfmstrip[0]} = {p0[0],p0[25],p0[12],p0[11]} ;
Transfinite Surface{surfmstrip[1]}; //Recombine Surface '*';

l0[] += newl ; Line(newl) = {p0[25],p0[27]};

//Ground, Feed, GroundToFeed
If(!TRANS)
  surf[] = Extrude {0, -D4, 0} {Line{l0[{25,26,29}]}; }; l0[] += surf[{0,4,8}] ;
  surfGround[] += surf[{1}]; surfFeed[] += surf[{5}]; surfGroundToFeed[] += surf[{9}];
EndIf
If(TRANS)
  surf[] = Extrude {0, -D4, 0} {Line{l0[{25,26,29}]}; Layers{nl0}; }; l0[] += surf[{0,4,8}] ;
  surfGround[] += surf[{1}]; surfFeed[] += surf[{5}]; surfGroundToFeed[] += surf[{9}];
EndIf

//==========================================================
wT = L3 + 2*L5 + 2*L2 ;
hT = L6 + W2 ;
//==========================================================

pcb[]+=newp ; Point(pcb[0]) = { -D1,    -D4, 0., lcb};
pcb[]+=newp ; Point(pcb[1]) = {  wT+D3, -D4, 0., lcb};
pcb[]+=newp ; Point(pcb[2]) = {  wT+D3,  hT+D2, 0., lcb};
pcb[]+=newp ; Point(pcb[3]) = { -D1,     hT+D2, 0., lcb};

pcb[]+=newp ; Point(pcb[4]) = { -D1,    0, 0., lcb};
pcb[]+=newp ; Point(pcb[5]) = {  wT+D3, 0, 0., lcb};

lg2[]+= newl; Line(newl) = {33, pcb[4]};
lg2[]+= newl; Line(newl) = {pcb[4], p0[0]};
lg2[]+= newl; Line(newl) = {33, 30};
lg2[]+= newl; Line(newl) = {27, pcb[5]};
lg2[]+= newl; Line(newl) = {31, 34};
lg2[]+= newl; Line(newl) = {34, pcb[5]};

Line Loop(53) = {49, -37, -48, -47};
Plane Surface(54) = {53};
Line Loop(55) = {51, 52, -50, 40};
Plane Surface(56) = {55};

surfGround2[] += {54,56};

Line(57) = {38, 35};
Line(58) = {35, 36};
Line(59) = {36, 37};
Line Loop(60) = {25, 34, 31, 24};
Plane Surface(61) = {60};
Line Loop(62) = {50, 57, 58, 59, 48, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 30};
Plane Surface(63) = {62};
surfPcb[] = {61,63};

If(TRANS)
Transfinite Line {lg2[{0:2,5}]} = nl0+1 ;
Transfinite Line {lg2[{3,4}]} = ng+1;
Transfinite Surface {54,56};
//Recombine Surface {54,56};
EndIf

//For n In {0:#l0[]-1}
//Printf("n %g l0 %g", n, l0[n]); EndFor

surf[] = Extrude {0, -D4-hT/2, 0} {Line{lg2[2],l0[{30,31,32}],lg2[4]}; };
surfGround3[] += surf[{1,5,9,13,17}];


If(1)
//================================================================================================
// Volumes at antenna level
For k In {0:#surfmstrip[]-1}
  vol[] = Extrude {0, 0, depth1} {Surface{surfmstrip[k]}; Layers{lmstrip}; };
  vol_mstrip[] += vol[1] ; // Antenna
EndFor

vol[] = Extrude {0, 0, depth1} {Surface{surfGround[0],surfFeed[0],surfGroundToFeed[0]}; Layers{lmstrip}; };
vol_ground[]       += vol[1] ;
vol_feed[]         += vol[7] ;
vol_groundtofeed[] += vol[13];

// Extruding PCB also along z for easing mesh
vol[] = Extrude {0, 0, depth1} {Surface{surfPcb[{0,1}]}; Layers{lmstrip}; }; vol_air[] += vol[{1,7}] ;
vol[] = Extrude {0, 0, depth1} {Surface{surfGround2[{0,1}]}; Layers{lmstrip}; }; vol_air[] += vol[{1,7}] ; //vol_ground2[] += vol[{1,7}] ;

vol[] = Extrude {0, 0, depth1} {Surface{surfGround3[{0:4}]}; Layers{lmstrip}; }; vol_air[] += vol[{1:25:6}] ;

//================================================================================================
// Under microstrip patch antenna
For k In {0:#surfmstrip[]-1}
  // PCB under antenna
  vol[] = Extrude {0, 0, -depth2} {Surface{surfmstrip[k]}; Layers{ndepth2}; }; vol_pcb[] += vol[1] ;
  vol[] = Extrude {0, 0, -depth1} {Surface{vol[0]}; Layers{lmstrip}; }; vol_pcb[] += vol[1] ;
  vol[] = Extrude {0, 0, -(depth3+depth1+depth4)} {Surface{vol[0]}; Layers{ndepth3to4}; }; vol_pcb[] += vol[1] ;
EndFor
For k In {0:1}
  vol[] = Extrude {0, 0, -depth2} {Surface{surfPcb[k]}; Layers{ndepth2}; }; vol_pcb[] += vol[1] ;
  vol[] = Extrude {0, 0, -depth1} {Surface{vol[0]};     Layers{lmstrip}; }; vol_pcb[] += vol[1] ;
  vol[] = Extrude {0, 0, -(depth3+depth1+depth4)} {Surface{vol[0]}; Layers{ndepth3to4}; }; vol_pcb[] += vol[1] ;
EndFor

vol[] = Extrude {0, 0, -depth2} {Surface{surfGround[0]}; Layers{ndepth2}; };  vol_ground[] += vol[1] ;
vol[] = Extrude {0, 0, -depth1} {Surface{vol[0]};     Layers{lmstrip}; };    vol_ground[] += vol[1] ;
vol[] = Extrude {0, 0, -(depth3+depth1+depth4)} {Surface{vol[0]}; Layers{ndepth3to4}; }; vol_pcb[] += vol[1] ;

vol[] = Extrude {0, 0, -depth2} {Surface{surfGroundToFeed[0]}; Layers{ndepth2}; }; vol_pcb[] += vol[1] ;
vol[] = Extrude {0, 0, -depth1} {Surface{vol[0]}; Layers{lmstrip}; };              vol_ground[] += vol[1] ;
vol[] = Extrude {0, 0, -(depth3+depth1+depth4)} {Surface{vol[0]}; Layers{ndepth3to4}; }; vol_pcb[] += vol[1] ;

vol[] = Extrude {0, 0, -depth2} {Surface{surfFeed[0]}; Layers{ndepth2}; }; vol_pcb[] += vol[1] ;
vol[] = Extrude {0, 0, -depth1} {Surface{vol[0]}; Layers{lmstrip}; };      vol_ground[] += vol[1] ;
vol[] = Extrude {0, 0, -(depth3+depth1+depth4)} {Surface{vol[0]}; Layers{ndepth3to4}; }; vol_pcb[] += vol[1] ;

vol[] = Extrude {0, 0, -depth2} {Surface{surfGround2[{0,1}]}; Layers{ndepth2}; }; vol_pcb[] += vol[{1,7}] ;
vol[] = Extrude {0, 0, -depth1} {Surface{vol[{0,6}]}; Layers{lmstrip}; };         vol_ground2[] += vol[{1,7}] ;
vol[] = Extrude {0, 0, -(depth3+depth1+depth4)} {Surface{vol[{0,6}]}; Layers{ndepth3to4}; }; vol_pcb[] += vol[{1,7}] ;

vol[] = Extrude {0, 0, -depth2} {Surface{surfGround3[{0:4}]}; Layers{ndepth2}; }; vol_pcb[] += vol[{1:25:6}] ;
vol[] = Extrude {0, 0, -depth1} {Surface{vol[{0:24:6}]}; Layers{lmstrip}; }; vol_ground3[] += vol[{1:25:6}] ;
vol[] = Extrude {0, 0, -(depth3+depth1+depth4)} {Surface{vol[{0:24:6}]}; Layers{ndepth3to4}; }; vol_pcb[] += vol[{1:25:6}] ;


//========================================================================
// Skins
skin_mstrip[] = CombinedBoundary{Volume{vol_mstrip[]};};
skin_ground[] = CombinedBoundary{Volume{vol_ground[], vol_ground2[], vol_feed[], vol_ground3[]};};
skin_feed[] =   CombinedBoundary{Volume{vol_groundtofeed[]};};

//========================================================================
//Air around Microstrip antenna and substrate
pp[0] = newp ; Point(pp[0]) = { wT + dwT,  hT + D2 + dhT, zb2, lair} ;
pp[1] = newp ; Point(pp[1]) = {-dwT,       hT + D2 + dhT, zb2, lair} ;
pp[2] = newp ; Point(pp[2]) = {-dwT,      -D4 - hT/2 - dhT, zb2, lair} ;
pp[3] = newp ; Point(pp[3]) = { wT + dwT, -D4 - hT/2 - dhT, zb2, lair} ;

For k1 In {0:3}
  k2 = (k1!=3)?k1+1:0 ;
  lbox[]+=newl ; Line(newl) = {pp[k1],pp[k2]};
EndFor
llbox = newll ; Line Loop(llbox) = lbox[];
surfbox = news ; Plane Surface(surfbox) = {llbox};

vol[] = Extrude {0, 0, -5*zb2_} {Surface{surfbox};};
surf_airin[] = Boundary{Volume{vol[1]};};
Delete {Volume{vol[1]};}

surf_antennapcb[]=CombinedBoundary{Volume{vol_mstrip[],vol_ground[],vol_feed[],vol_groundtofeed[],vol_air[],vol_ground2[],vol_pcb[]};} ;
sl_antennapcb = newll ; Surface Loop(sl_antennapcb)=surf_antennapcb[] ;
sl_airin = newll ; Surface Loop(sl_airin)=surf_airin[] ;
vol_air[] += newv ; Volume(newv) = {sl_airin, sl_antennapcb};

// Pml
ppml[0] = newp ; Point(ppml[0]) = { wT + dwT + PmlDelta, hT + D2 + dhT + PmlDelta, zb2 + PmlDelta, lair} ;
ppml[1] = newp ; Point(ppml[1]) = {    - dwT - PmlDelta, hT + D2 + dhT + PmlDelta, zb2 + PmlDelta, lair} ;
ppml[2] = newp ; Point(ppml[2]) = {     -dwT - PmlDelta,-D4 - hT/2 -dhT - PmlDelta, zb2 + PmlDelta, lair} ;
ppml[3] = newp ; Point(ppml[3]) = { wT + dwT + PmlDelta,-D4 - hT/2 -dhT - PmlDelta, zb2 + PmlDelta, lair} ;

For k1 In {0:3}
  k2 = (k1!=3)?k1+1:0 ;
  lpml[]+=newl ; Line(newl) = {ppml[k1],ppml[k2]};
EndFor
llpml = newll ; Line Loop(llpml) = lpml[];
surfpml = news ; Plane Surface(surfpml) = {llpml};

vol[] = Extrude {0, 0, -5*zb2_-2*PmlDelta} {Surface{surfpml};};
surfairinf[] = Boundary{Volume{vol[1]};};
Delete {Volume{vol[1]};}

//sl_pml = newll ; Surface Loop(sl_pml) = surfairinf[];
//vol_PML_ALL[] += newv ; Volume(newv) = {sl_pml, sl_airin};

Line(newl) = {788, 802};
Line(newl) = {791, 805};
Line(newl) = {792, 806};
Line(newl) = {801, 815};
Line(newl) = {790, 804};
Line(newl) = {789, 803};
Line(newl) = {793, 807};
Line(newl) = {797, 811};

Line Loop(2303) = {2295, -2270, -2296, 2239};
Plane Surface(2304) = {2303};
Line Loop(2305) = {2296, 2288, -2298, -2257};
Plane Surface(2306) = {2305};
Line Loop(2307) = {2295, 2279, -2297, -2248};
Plane Surface(2308) = {2307};
Line Loop(2309) = {2277, -2297, -2246, 2298};
Plane Surface(2310) = {2309};
Line Loop(2311) = {2300, 2268, -2299, -2237};
Plane Surface(2312) = {2311};
Line Loop(2313) = {2299, 2284, -2302, -2253};
Plane Surface(2314) = {2313};
Line Loop(2315) = {2244, 2302, -2275, -2301};
Plane Surface(2316) = {2315};
Line Loop(2317) = {2301, -2280, -2300, 2249};
Plane Surface(2318) = {2317};
Line Loop(2319) = {2267, -2300, -2236, 2295};
Plane Surface(2320) = {2319};
Line Loop(2321) = {2243, 2301, -2274, -2297};
Plane Surface(2322) = {2321};
Line Loop(2323) = {2245, 2298, -2276, -2302};
Plane Surface(2324) = {2323};
Line Loop(2331) = {2296, -2269, -2299, 2238};
Plane Surface(2332) = {2331};


Surface Loop(2325) = {2293, 2304, 2306, 2308, 2310, 2262};
Volume(2326) = {2325};
Surface Loop(2327) = {2312, 2314, 2316, 2318, 2254, 2285};
Volume(2328) = {2327};
volPMLX[] = {2326,2328};

Surface Loop(2329) = {2281, 2320, 2318, 2250, 2322, 2308};
Volume(2330) = {2329};
Surface Loop(2333) = {2306, 2258, 2289, 2332, 2324, 2314};
Volume(2334) = {2333};
volPMLY[] = {2330,2334};

Surface Loop(2335) = {2241, 2272, 2320, 2332, 2304, 2312};
Volume(2336) = {2335};
Surface Loop(2337) = {2294, 2263, 2310, 2316, 2322, 2324};
Volume(2338) = {2337};
volPMLZ[] = {2336,2338};

/*
// Outer layer PML
next_vol = newv ;
// Using boundary layers (mesh for seeing them!)
Extrude {
  Surface{surf_airin[0],-surf_airin[1]}; Layers{5, PmlDelta}; //Recombine;
  Using View[-3];  // Hack to force "box-type" boundary layer along x,y,z axes
}
volPMLZ[] = {next_vol,next_vol+1};

Extrude {
  Surface{-surf_airin[2],-surf_airin[4]}; Layers{5, PmlDelta}; //Recombine;
  Using View[-3];  // Hack to force "box-type" boundary layer along x,y,z axes
}
volPMLY[] = {next_vol+2,next_vol+3};

Extrude {
  Surface{-surf_airin[3],-surf_airin[5]}; Layers{5, PmlDelta}; //Recombine;
  Using View[-3];  // Hack to force "box-type" boundary layer along x,y,z axes
}
volPMLX[] = {next_vol+4,next_vol+5};

surfairinf[] = {1938,1894,1872,1850,1828,1916};
*/

//=============================================================================
If(1)
  Physical Volume(MICROSTRIP) = {vol_mstrip[]} ;// Not used
  Physical Volume(SUBSTRATE)  = {vol_pcb[]};
  Physical Volume(AIR) = {vol_air[]};

  //Physical Volume(PMLX) = {vol_PML_ALL[]};
  Physical Volume(PMLX) = {volPMLX[]};
  Physical Volume(PMLY) = {volPMLY[]};
  Physical Volume(PMLZ) = {volPMLZ[]};
  Physical Surface(SURFAIR) = {surfairinf[]};



  Physical Surface(SKINMICROSTRIP) = {skin_mstrip[]}; //cuts 194,212
  Physical Surface(SKINGROUND) =  {skin_ground[]}; // cuts 238,252
  Physical Surface(SKINFEED) = { skin_feed[] } ;

  skin_mstrip1[] = CombinedBoundary{Volume{vol_mstrip[0]};};
  skin_mstrip2[] = CombinedBoundary{Volume{vol_mstrip[1]};};
  Physical Surface(SKINMICROSTRIP1) = {skin_mstrip1[]};
  Physical Surface(SKINMICROSTRIP2) = {skin_mstrip2[]};

  Printf("vol_ground",vol_ground[]);
  Printf("vol_feed",vol_feed[]);
  skin_ground1[] = CombinedBoundary{Volume{vol_ground[0]};};
  skin_ground2[] = CombinedBoundary{Volume{vol_feed[]};};
  skin_ground3[] = CombinedBoundary{Volume{vol_ground[{1:#vol_ground[]-1}], vol_ground2[], vol_ground3[]};};
  Physical Surface(SKINGROUND1) =  {skin_ground1[]};// 1 - touching SkinFeed
  Physical Surface(SKINGROUND2) =  {skin_ground2[]};// 0 - touching SkinFeed
  Physical Surface(SKINGROUND3) =  {skin_ground3[]};

  //For n In {0:#skin_feed[]-1}
  //Printf("skin n %g surf %g", n, skin_feed[n]); EndFor

  Physical Surface(SKINF_TOP) = skin_feed[5] ;
  Physical Surface(SKINF_BOT) = skin_feed[0] ;
  Physical Surface(SKINF_BACK) = skin_feed[3] ;
  Physical Surface(SKINF_FRONT) = skin_feed[4] ;
EndIf

EndIf

/*
Hide { Point{ Point '*' }; Line{ Line '*' }; }
nice_view[] = Boundary{ Surface{ skin_mstrip[], skin_ground[], skin_feed[] }; };
Show { Line{ nice_view[] }; }
*/
