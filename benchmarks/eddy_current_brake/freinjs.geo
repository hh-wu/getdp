// File freinjs.geo

//Mesh.Algorithm = 1; // MeshAdapt
//Mesh.Algorithm = 2; // Automatic, Default
//Mesh.Algorithm = 6; // Frontal

//Mesh.Algorithm3D = 1; // Delaunay, Default
//Mesh.Algorithm3D = 4; // Frontal
Mesh.Optimize = 1 ;
//Mesh.CharacteristicLengthFactor = 1.5 ; // 1. by default


Include "freinjs-dat.pro";

/*
   p_... = point
   l_... = line
  ll_... = line loop
   s_... = surface
  sl_... = surface loop
   v_... = volume
*/


///  Characteristic length for the mesh -------------------------------------
///    ----------------------------------

lc_air   = 50*mm;
lc_core  = 10*mm;
lc_gap   = 1*mm * 5;
lc_plate = 10*mm;
lc_coil  = 5*mm ;

/// 1) The plate --------------------------------------------------------------
///    ---------

//displacementX = lx_core/2;

p_pl[]+=newp; Point(newp) = { lx_plate/2 + displacementX,         0,  lz_plate/2, lc_plate}; // 0
p_pl[]+=newp; Point(newp) = { lx_plate/2 + displacementX,         0, -lz_plate/2*0, lc_plate}; // 1
p_pl[]+=newp; Point(newp) = {-lx_plate/2 + displacementX,         0, -lz_plate/2*0, lc_plate}; // 2
p_pl[]+=newp; Point(newp) = {-lx_plate/2 + displacementX,         0,  lz_plate/2, lc_plate}; // 3

For k In {0:3}
  l_pl[]+=newl; Line(newl) = {p_pl[k], p_pl[{(k==3)?0:k+1}]}; // 0
EndFor
ll_pl[]+=newll; Line Loop(newll) = {l_pl[]}; // 0
s_pl[]+=news; Plane Surface(news) = {ll_pl[0]}; // 0

out[] = Extrude {0, ly_plate, 0} { Surface{s_pl[0]}; };
v_pl=out[1] ;
s_pl[] += out[{0,2,4:#out[]-1}];
cut_symmetry[] += out[3];
skinPlate[] = s_pl[];

//For k In {0:#out[]-1}
//Printf("out[%g]=%g",k, out[k]);  EndFor


/// 2) The core ---------------------------------------------------------------
///    --------

p_co[]+=newp; Point(newp) = { lx_core/2,          ly_plate+ly_gap,  lz_core/2, lc_gap}; // 0
p_co[]+=newp; Point(newp) = { lx_core/2,          ly_plate+ly_gap, -lz_core/2*0, lc_gap}; // 1
p_co[]+=newp; Point(newp) = { lx_core/2-lx_foot,  ly_plate+ly_gap, -lz_core/2*0, lc_gap}; // 2
p_co[]+=newp; Point(newp) = { lx_core/2-lx_foot,  ly_plate+ly_gap,  lz_core/2, lc_gap}; // 3

p_co_[]+=newp; Point(newp) = {-lx_core/2+lx_foot,  ly_plate+ly_gap,  lz_core/2, lc_gap}; // 4
p_co_[]+=newp; Point(newp) = {-lx_core/2+lx_foot,  ly_plate+ly_gap, -lz_core/2*0, lc_gap}; // 5
p_co_[]+=newp; Point(newp) = {-lx_core/2,          ly_plate+ly_gap, -lz_core/2*0, lc_gap}; // 6
p_co_[]+=newp; Point(newp) = {-lx_core/2,          ly_plate+ly_gap,  lz_core/2, lc_gap}; // 7

For k In {0:3}
  l_co[] +=newl; Line(newl) = {p_co[k] , p_co[{(k==3)?0:k+1}]}; // 0
  l_co_[]+=newl; Line(newl) = {p_co_[k], p_co_[{(k==3)?0:k+1}]}; // 0
EndFor

ll_co[]+=newll; Line Loop(newll) = {l_co[{0:3}]};
s_co[]+=news; Plane Surface(news) = {ll_co[0]};

ll_co_[]+=newll; Line Loop(newll) = {l_co_[{0:3}]}; // coil side
s_co_[]+=news; Plane Surface(news) = {ll_co_[0]};
skinCore[] += {s_co[0], s_co_[0]};

out[] = Extrude {0, ly_foot-ly_coil, 0} { Surface{s_co[0]}; };
v_co[]   += out[1] ;
cut_symmetry[] += out[3];
skinCore[] += out[{2,4:#out[]-1}];

out[] = Extrude {0, ly_coil, 0} { Surface{out[0]}; };
v_co[]   += out[1] ;
cut_symmetry[] += out[3];
skinCore[] += out[{2,4:#out[]-1}];


out[] = Extrude {0, ly_foot-ly_coil, 0} { Surface{s_co_[0]}; };
v_co[]   += out[1] ;
cut_symmetry[] += out[3];
skinCore[] += out[{2,4:#out[]-1}];

cut_coil_bot = out[0];
out[] = Extrude {0, ly_coil, 0} { Surface{out[0]}; };
cut_coil_top = out[0];
v_co[]   += out[1] ;
cut_symmetry[] += out[3];
skinCore[] += out[{2,4:#out[]-1}];
skinCoreCoil[] += out[{2,4:#out[]-1}];
v_coco = out[1];

//For k In {0:#out[]-1}
//Printf("out[%g]=%g",k, out[k]);  EndFor


/// 4.) The inductor ---------------------------------------------------------
///      ------------

p_in[]+=newp; Point(newp) = {-lx_core/2+lx_foot+lx_coil, ly_plate+ly_gap+ly_foot-ly_coil,  lz_core/2, lc_coil};
p_in[]+=newp; Point(newp) = {-lx_core/2+lx_foot+lx_coil, ly_plate+ly_gap+ly_foot-ly_coil,  0, lc_coil};
p_in[]+=newp; Point(newp) = {-lx_core/2-lx_coil,         ly_plate+ly_gap+ly_foot-ly_coil,  0, lc_coil};

p_in[]+=newp; Point(newp) = {-lx_core/2-lx_coil, ly_plate+ly_gap+ly_foot-ly_coil, lz_core/2,         lc_coil};
p_in[]+=newp; Point(newp) = {-lx_core/2, ly_plate+ly_gap+ly_foot-ly_coil,         lz_core/2+lz_coil, lc_coil};
p_in[]+=newp; Point(newp) = {-lx_core/2+lx_foot, ly_plate+ly_gap+ly_foot-ly_coil, lz_core/2+lz_coil, lc_coil};


l_in[]+=newl; Line(newl)   = {p_in[0], p_in[1]};
l_in[]+=newl; Line(newl)   = {p_in[2], p_in[3]};
l_in[]+=newl; Line(newl)   = {p_in[4], p_in[5]};
l_in[]+=newl; Circle(newl) = {p_in[0], 43, p_in[5]}; // 1
l_in[]+=newl; Circle(newl) = {p_in[3], 52, p_in[4]}; // 1

l_in[]+=newl; Line(newl)   = {44, p_in[1]};
l_in[]+=newl; Line(newl)   = {48, p_in[2]};

l_in[]+=newl; Line(newl)   = {43, p_in[0]};
l_in[]+=newl; Line(newl)   = {43, p_in[5]};
l_in[]+=newl; Line(newl)   = {52, p_in[3]};
l_in[]+=newl; Line(newl)   = {52, p_in[4]};


Line Loop(newll) = {129, -134, -86, 136};
s_in[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {132, -137, 136};
s_in[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {137, -131, -139, 89};
s_in[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {139, -133, -138};
s_in[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {88, 138, -130, -135};
s_in[]+=news; Plane Surface(news) = {newll-1};


For k In {0:#s_in[]-1}
  out[] = Extrude {0, ly_coil, 0} { Surface{s_in[k]}; };
  v_in[]+= out[1];
EndFor
out[] = CombinedBoundary{Volume{v_in[]};};




For k In {0:#out[]-1}
  Printf("out[%g]=%g",k, out[k]);
  If (Fabs[out[k]]!=162 && Fabs[out[k]]!=248)
    skinCoil[] += out[k];
  EndIf
EndFor
  cut_symmetry[] += {162,248};


p_co[]+=newp; Point(newp) = { lx_core/2, ly_plate+ly_gap+ly_foot+ly_core, 0, lc_core};
p_co[]+=newp; Point(newp) = { lx_core/2, ly_plate+ly_gap+ly_foot+ly_core, lz_core/2, lc_core};
p_co[]+=newp; Point(newp) = {-lx_core/2, ly_plate+ly_gap+ly_foot+ly_core, 0, lc_core};
p_co[]+=newp; Point(newp) = {-lx_core/2, ly_plate+ly_gap+ly_foot+ly_core,  lz_core/2, lc_core};

l_co[]+=newl; Line(newl) = {69, 42};
l_co[]+=newl; Line(newl) = {70, 38};
l_co[]+=newl; Line(newl) = {62, 100};
l_co[]+=newl; Line(newl) = {100, 98};
l_co[]+=newl; Line(newl) = {98, 33};
l_co[]+=newl; Line(newl) = {98, 97};
l_co[]+=newl; Line(newl) = {97, 99};
l_co[]+=newl; Line(newl) = {99, 100};
l_co[]+=newl; Line(newl) = {58, 99};
l_co[]+=newl; Line(newl) = {34, 97};


Line Loop(260) = {250, -66, -251, -151};
Plane Surface(261) = {260};
Line Loop(262) = {254, 64, 259, -255};
Plane Surface(263) = {262};
Line Loop(264) = {110, 252, -257, -258};
Plane Surface(265) = {264};
Line Loop(266) = {253, 255, 256, 257};
Plane Surface(267) = {266};
Line Loop(268) = {250, 67, -254, -253, -252, 111, 154};
Plane Surface(269) = {268};
Line Loop(270) = {256, -258, -109, -152, 251, -65, 259};
Plane Surface(271) = {270}; // Cut symmetry
cut_symmetry[] += 271;

Surface Loop(272) = {269, 261, 271, 267, 263, 265, 84, 171, 128};
v_co[]+=newv; Volume(newv) = {272};

skinCore[] +={269, 261, 267, 263, 265, 171} ;  // to ignore the internal surfaces



/// 5) The air ----------------------------------------------------------------
///    -------



p_air[]+=newp; Point(newp) = {axl, ayb, 0*azb, lc_air}; // 0
p_air[]+=newp; Point(newp) = {axl, ayt, 0*azb, lc_air}; // 1
p_air[]+=newp; Point(newp) = {axr, ayt, 0*azb, lc_air}; // 2
p_air[]+=newp; Point(newp) = {axr, ayb, 0*azb, lc_air}; // 3

p_air[]+=newp; Point(newp) = {axl, ayb, azf, lc_air}; // 4
p_air[]+=newp; Point(newp) = {axl, ayt, azf, lc_air}; // 5
p_air[]+=newp; Point(newp) = {axr, ayt, azf, lc_air}; // 6
p_air[]+=newp; Point(newp) = {axr, ayb, azf, lc_air}; // 7


l_air[]+=newl; Line(newl)   = {p_air[0], p_air[1]}; // 0
l_air[]+=newl; Line(newl)   = {p_air[1], p_air[2]}; // 1
l_air[]+=newl; Line(newl)   = {p_air[2], p_air[3]}; // 2
l_air[]+=newl; Line(newl)   = {p_air[3], p_air[0]}; // 3
l_air[]+=newl; Line(newl)   = {p_air[4], p_air[5]}; // 4
l_air[]+=newl; Line(newl)   = {p_air[5], p_air[6]}; // 5
l_air[]+=newl; Line(newl)   = {p_air[6], p_air[7]}; // 6
l_air[]+=newl; Line(newl)   = {p_air[7], p_air[4]}; // 7
l_air[]+=newl; Line(newl)   = {p_air[1], p_air[5]}; // 8
l_air[]+=newl; Line(newl)   = {p_air[2], p_air[6]}; // 9
l_air[]+=newl; Line(newl)   = {p_air[7], p_air[3]}; // 10
l_air[]+=newl; Line(newl)   = {p_air[4], p_air[0]}; // 11


ll_air[]+=newll; Line Loop(newll) = { l_air[0],   l_air[1],  l_air[2],  l_air[3]};  // 0, back
ll_air[]+=newll; Line Loop(newll) = { l_air[4],   l_air[5],  l_air[6],  l_air[7]};  // 1, front
ll_air[]+=newll; Line Loop(newll) = { l_air[0],   l_air[8], -l_air[4],  l_air[11]}; // 2, right
ll_air[]+=newll; Line Loop(newll) = {-l_air[2],   l_air[9],  l_air[6],  l_air[10]}; // 3, left
ll_air[]+=newll; Line Loop(newll) = { l_air[11], -l_air[3], -l_air[10], l_air[7]};  // 4, bottom
ll_air[]+=newll; Line Loop(newll) = {-l_air[8],   l_air[1],  l_air[9], -l_air[5]};  // 5, top

For ki In {1:5}
  s_air[]+=news; Plane Surface(news) = {ll_air[ki]};
EndFor

Line Loop(newll) = {259, 256, -258, -232, -243, -135, -96, -32, 92, 134, 157, 251, -74, -52, -31, 48, 70};
Line Loop(newll) = {18, -9, -14, 2};
cutair= news ; Plane Surface(news) = {286, newll-2, newll-1};
cut_symmetry[] += cutair;

Surface Loop(newsl) = {296, 293, 299, 294, 292, 295, 269, 261, 263, 267, 265, 79, 83, 71, 57, 38, 49, 61, 244, 149, 249, 222, 147, 227, 201, 145, 210, 188, 179, 143, 93, 40, 101, 105, 27, 6, 15, 28, 23, 141, 158};
v_air=newv; Volume(newv) = {newsl-1};  // newsl-1 = number of the last

/// (+) The physical entities ------------------------------------------------
///      ---------------------

Physical Volume(PLATE)     = v_pl;
Physical Volume(CORE)      = v_co[];

Physical Volume(CORE_COIL) = v_coco;

Physical Volume(AIR)       = v_air;
Physical Volume(COIL)      = v_in[];

Physical Surface(SKIN_PLATE) = {skinPlate[]};
Physical Surface(SKIN_CORE)  = {skinCore[]};
Physical Surface(SKIN_COIL)  = {skinCoil[]};


Physical Surface(SKIN_CORE_COIL) = skinCoreCoil[];
Physical Surface(AIR_INF)        = s_air[];

Physical Surface(CUT_COIL_BOT)   = cut_coil_bot ;
Physical Surface(CUT_COIL_TOP)   = cut_coil_top ;

Physical Surface(CUT_SYMMETRY) = cut_symmetry[];

// EOF





