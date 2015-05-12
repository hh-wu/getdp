// File freinjs.geo

//Mesh.Algorithm = 1; // MeshAdapt
//Mesh.Algorithm = 2; // Automatic, Default
//Mesh.Algorithm = 6; // Frontal

//Mesh.Algorithm3D = 1; // Delaunay, Default
Mesh.Algorithm3D = 4; // Frontal
Mesh.Optimize = 1 ;
Mesh.CharacteristicLengthFactor = 1.5 ; // 1. by default


Include "freinjs-dat.pro";

/*
   p_... = point
   l_... = line
  ll_... = line loop
   s_... = surface
  sl_... = surface loop
   v_... = volume
*/


/// *) Characteristic length for the mesh -------------------------------------
///    ----------------------------------

lc_air   = 50*mm;
lc_core  = 10*mm;
lc_gap   = 1*mm * 5;
lc_plate = 10*mm;
lc_coil  = 5*mm ;

/// 1) The plate --------------------------------------------------------------
///    ---------

p_pl[]+=newp; Point(newp) = { lx_plate/2,         0,  lz_plate/2, lc_plate}; // 0
p_pl[]+=newp; Point(newp) = { lx_plate/2,         0, -lz_plate/2, lc_plate}; // 1
p_pl[]+=newp; Point(newp) = {-lx_plate/2,         0, -lz_plate/2, lc_plate}; // 2
p_pl[]+=newp; Point(newp) = {-lx_plate/2,         0,  lz_plate/2, lc_plate}; // 3

p_pl[]+=newp; Point(newp) = { lx_plate/2,  ly_plate,  lz_plate/2, lc_plate}; // 4
p_pl[]+=newp; Point(newp) = { lx_plate/2,  ly_plate, -lz_plate/2, lc_plate}; // 5
p_pl[]+=newp; Point(newp) = {-lx_plate/2,  ly_plate, -lz_plate/2, lc_plate}; // 6
p_pl[]+=newp; Point(newp) = {-lx_plate/2,  ly_plate,  lz_plate/2, lc_plate}; // 7

p_pl[]+=newp; Point(newp) = { lx_core/2,          ly_plate,  lz_core/2, lc_gap}; // 8
p_pl[]+=newp; Point(newp) = { lx_core/2,          ly_plate, -lz_core/2, lc_gap}; // 9
p_pl[]+=newp; Point(newp) = { lx_core/2-lx_foot,  ly_plate, -lz_core/2, lc_gap}; // 10
p_pl[]+=newp; Point(newp) = { lx_core/2-lx_foot,  ly_plate,  lz_core/2, lc_gap}; // 11

p_pl[]+=newp; Point(newp) = {-lx_core/2,          ly_plate,  lz_core/2, lc_gap}; // 12
p_pl[]+=newp; Point(newp) = {-lx_core/2,          ly_plate, -lz_core/2, lc_gap}; // 13
p_pl[]+=newp; Point(newp) = {-lx_core/2+lx_foot,  ly_plate, -lz_core/2, lc_gap}; // 14
p_pl[]+=newp; Point(newp) = {-lx_core/2+lx_foot,  ly_plate,  lz_core/2, lc_gap}; // 15

l_pl[]+=newl; Line(newl) = {p_pl[0], p_pl[1]}; // 0
l_pl[]+=newl; Line(newl) = {p_pl[1], p_pl[2]}; // 1
l_pl[]+=newl; Line(newl) = {p_pl[2], p_pl[3]}; // 2
l_pl[]+=newl; Line(newl) = {p_pl[3], p_pl[0]}; // 3

l_pl[]+=newl; Line(newl) = {p_pl[4], p_pl[5]}; // 4
l_pl[]+=newl; Line(newl) = {p_pl[5], p_pl[6]}; // 5
l_pl[]+=newl; Line(newl) = {p_pl[6], p_pl[7]}; // 6
l_pl[]+=newl; Line(newl) = {p_pl[7], p_pl[4]}; // 7

l_pl[]+=newl; Line(newl) = {p_pl[8], p_pl[9]};   // 8
l_pl[]+=newl; Line(newl) = {p_pl[9], p_pl[10]};  // 9
l_pl[]+=newl; Line(newl) = {p_pl[10], p_pl[11]}; // 10
l_pl[]+=newl; Line(newl) = {p_pl[11], p_pl[8]};  // 11

l_pl[]+=newl; Line(newl) = {p_pl[12], p_pl[13]}; // 12
l_pl[]+=newl; Line(newl) = {p_pl[13], p_pl[14]}; // 13
l_pl[]+=newl; Line(newl) = {p_pl[14], p_pl[15]}; // 14
l_pl[]+=newl; Line(newl) = {p_pl[15], p_pl[12]}; // 15

l_pl[]+=newl; Line(newl) = {p_pl[0], p_pl[4]}; // 16
l_pl[]+=newl; Line(newl) = {p_pl[1], p_pl[5]}; // 17
l_pl[]+=newl; Line(newl) = {p_pl[2], p_pl[6]}; // 18
l_pl[]+=newl; Line(newl) = {p_pl[3], p_pl[7]}; // 19

// bottom face
ll_pl[]+=newll; Line Loop(newll) = {l_pl[0], l_pl[1], l_pl[2], l_pl[3]}; // 0
s_pl[]+=news; Plane Surface(news) = {ll_pl[0]}; // 0

// right face
ll_pl[]+=newll; Line Loop(newll) = {l_pl[17], -l_pl[4], -l_pl[16], l_pl[0]}; // 1
s_pl[]+=news; Plane Surface(news) = {ll_pl[1]}; // 1

// back face
ll_pl[]+=newll; Line Loop(newll) = {l_pl[17], l_pl[5], -l_pl[18], -l_pl[1]}; // 2
s_pl[]+=news; Plane Surface(news) = {ll_pl[2]}; // 2

// left face
ll_pl[]+=newll; Line Loop(newll) = {l_pl[18], l_pl[6], -l_pl[19], -l_pl[2]}; // 3
s_pl[]+=news; Plane Surface(news) = {ll_pl[3]}; // 3

// front face
ll_pl[]+=newll; Line Loop(newll) = {l_pl[16], -l_pl[7], -l_pl[19], l_pl[3]}; // 4
s_pl[]+=news; Plane Surface(news) = {ll_pl[4]}; // 4

// top face
ll_pl[]+=newll; Line Loop(newll) = {l_pl[8], l_pl[9], l_pl[10], l_pl[11]}; // 5, leg print right
s_pl[]+=news; Plane Surface(news) = {ll_pl[5]}; // 5

ll_pl[]+=newll; Line Loop(newll) = {l_pl[12], l_pl[13], l_pl[14], l_pl[15]}; // 6, leg print left
s_pl[]+=news; Plane Surface(news) = {ll_pl[6]}; // 6

ll_pl[]+=newll; Line Loop(newll) = {l_pl[4], l_pl[5], l_pl[6], l_pl[7]}; // 7
s_pl[]+=news; Plane Surface(news) = {ll_pl[5], ll_pl[6], ll_pl[7]}; // 7

sl_pl=newsl; Surface Loop(newsl) = {s_pl[]};
v_pl=newv; Volume(newv) = {sl_pl};

skinPlate[] = Boundary{Volume{v_pl};};

/// 2) The core ---------------------------------------------------------------
///    --------

p_co[]+=newp; Point(newp) = { lx_core/2,          ly_plate+ly_gap,  lz_core/2, lc_gap}; // 0
p_co[]+=newp; Point(newp) = { lx_core/2,          ly_plate+ly_gap, -lz_core/2, lc_gap}; // 1
p_co[]+=newp; Point(newp) = { lx_core/2-lx_foot,  ly_plate+ly_gap, -lz_core/2, lc_gap}; // 2
p_co[]+=newp; Point(newp) = { lx_core/2-lx_foot,  ly_plate+ly_gap,  lz_core/2, lc_gap}; // 3

p_co[]+=newp; Point(newp) = {-lx_core/2+lx_foot,  ly_plate+ly_gap,  lz_core/2, lc_gap}; // 4
p_co[]+=newp; Point(newp) = {-lx_core/2+lx_foot,  ly_plate+ly_gap, -lz_core/2, lc_gap}; // 5
p_co[]+=newp; Point(newp) = {-lx_core/2,          ly_plate+ly_gap, -lz_core/2, lc_gap}; // 6
p_co[]+=newp; Point(newp) = {-lx_core/2,          ly_plate+ly_gap,  lz_core/2, lc_gap}; // 7

p_co[]+=newp; Point(newp) = { lx_core/2, ly_plate+ly_gap+ly_foot, -lz_core/2, lc_core}; // 8
p_co[]+=newp; Point(newp) = { lx_core/2, ly_plate+ly_gap+ly_foot,  lz_core/2, lc_core}; // 9

p_co[]+=newp; Point(newp) = {-lx_core/2+lx_foot, ly_plate+ly_gap+ly_foot-ly_coil, -lz_core/2, lc_coil}; // 10
p_co[]+=newp; Point(newp) = {-lx_core/2+lx_foot, ly_plate+ly_gap+ly_foot,         -lz_core/2, lc_coil}; // 11
p_co[]+=newp; Point(newp) = {-lx_core/2+lx_foot, ly_plate+ly_gap+ly_foot,          lz_core/2, lc_coil}; // 12
p_co[]+=newp; Point(newp) = {-lx_core/2+lx_foot, ly_plate+ly_gap+ly_foot-ly_coil,  lz_core/2, lc_coil}; // 13

p_co[]+=newp; Point(newp) = { lx_core/2-lx_foot,  ly_plate+ly_gap+ly_foot, -lz_core/2, lc_core}; // 14
p_co[]+=newp; Point(newp) = { lx_core/2-lx_foot,  ly_plate+ly_gap+ly_foot,  lz_core/2, lc_core}; // 15

p_co[]+=newp; Point(newp) = {-lx_core/2, ly_plate+ly_gap+ly_foot-ly_coil, -lz_core/2, lc_coil}; // 16
p_co[]+=newp; Point(newp) = {-lx_core/2, ly_plate+ly_gap+ly_foot,         -lz_core/2, lc_core}; // 17
p_co[]+=newp; Point(newp) = {-lx_core/2, ly_plate+ly_gap+ly_foot,          lz_core/2, lc_core}; // 18
p_co[]+=newp; Point(newp) = {-lx_core/2, ly_plate+ly_gap+ly_foot-ly_coil,  lz_core/2, lc_coil}; // 19

p_co[]+=newp; Point(newp) = { lx_core/2, ly_plate+ly_gap+ly_foot+ly_core, -lz_core/2, lc_core}; // 20
p_co[]+=newp; Point(newp) = { lx_core/2, ly_plate+ly_gap+ly_foot+ly_core,  lz_core/2, lc_core}; // 21

p_co[]+=newp; Point(newp) = {-lx_core/2, ly_plate+ly_gap+ly_foot+ly_core, -lz_core/2, lc_core}; // 22
p_co[]+=newp; Point(newp) = {-lx_core/2, ly_plate+ly_gap+ly_foot+ly_core,  lz_core/2, lc_core}; // 23

p_co[]+=newp; Point(newp) = {-lx_core/2+lx_foot+lx_coil, ly_plate+ly_gap+ly_foot,
							  lz_core/2, lc_coil}; // 24
p_co[]+=newp; Point(newp) = {-lx_core/2+lx_foot+lx_coil, ly_plate+ly_gap+ly_foot,
							 -lz_core/2, lc_coil}; // 25

l_co[]+=newl; Line(newl) = {p_co[0], p_co[1]}; // 0
l_co[]+=newl; Line(newl) = {p_co[1], p_co[2]}; // 1
l_co[]+=newl; Line(newl) = {p_co[2], p_co[3]}; // 2
l_co[]+=newl; Line(newl) = {p_co[3], p_co[0]}; // 3

l_co[]+=newl; Line(newl) = {p_co[4], p_co[5]}; // 4
l_co[]+=newl; Line(newl) = {p_co[5], p_co[6]}; // 5
l_co[]+=newl; Line(newl) = {p_co[6], p_co[7]}; // 6
l_co[]+=newl; Line(newl) = {p_co[7], p_co[4]}; // 7

l_co[]+=newl; Line(newl) = {p_co[1],  p_co[8]};  // 8
l_co[]+=newl; Line(newl) = {p_co[8],  p_co[9]};  // 9
l_co[]+=newl; Line(newl) = {p_co[9],  p_co[0]};  // 10

l_co[]+=newl; Line(newl) = {p_co[5],  p_co[10]}; // 11
l_co[]+=newl; Line(newl) = {p_co[10], p_co[11]}; // 12
l_co[]+=newl; Line(newl) = {p_co[11], p_co[12]}; // 13
l_co[]+=newl; Line(newl) = {p_co[12], p_co[13]}; // 14
l_co[]+=newl; Line(newl) = {p_co[13], p_co[4]};  // 15
l_co[]+=newl; Line(newl) = {p_co[10], p_co[13]}; // 16

l_co[]+=newl; Line(newl) = {p_co[2],  p_co[14]}; // 17
l_co[]+=newl; Line(newl) = {p_co[14], p_co[15]}; // 18
l_co[]+=newl; Line(newl) = {p_co[15], p_co[3]};  // 19

l_co[]+=newl; Line(newl) = {p_co[6],  p_co[16]}; // 20
l_co[]+=newl; Line(newl) = {p_co[16], p_co[17]}; // 21
l_co[]+=newl; Line(newl) = {p_co[17], p_co[18]}; // 22
l_co[]+=newl; Line(newl) = {p_co[18], p_co[19]}; // 23
l_co[]+=newl; Line(newl) = {p_co[19], p_co[7]};  // 24
l_co[]+=newl; Line(newl) = {p_co[16], p_co[19]}; // 25

l_co[]+=newl; Line(newl) = {p_co[9], p_co[15]}; // 26

l_co[]+=newl; Line(newl) = {p_co[12], p_co[18]}; // 27
l_co[]+=newl; Line(newl) = {p_co[13], p_co[19]}; // 28

l_co[]+=newl; Line(newl) = {p_co[8], p_co[14]}; // 29

l_co[]+=newl; Line(newl) = {p_co[11], p_co[17]}; // 30
l_co[]+=newl; Line(newl) = {p_co[10], p_co[16]}; // 31

l_co[]+=newl; Line(newl) = {p_co[14], p_co[25]}; // 32
l_co[]+=newl; Line(newl) = {p_co[24], p_co[15]}; // 33

l_co[]+=newl; Line(newl) = {p_co[8], p_co[20]};  // 34
l_co[]+=newl; Line(newl) = {p_co[20], p_co[21]}; // 35
l_co[]+=newl; Line(newl) = {p_co[21], p_co[9]};  // 36

l_co[]+=newl; Line(newl) = {p_co[17], p_co[22]}; // 37
l_co[]+=newl; Line(newl) = {p_co[22], p_co[23]}; // 38
l_co[]+=newl; Line(newl) = {p_co[23], p_co[18]}; // 39

l_co[]+=newl; Line(newl) = {p_co[21], p_co[23]}; // 40

l_co[]+=newl; Line(newl) = {p_co[20], p_co[22]}; // 41

l_co[]+=newl; Line(newl) = {p_co[24], p_co[25]}; // 42
l_co[]+=newl; Line(newl) = {p_co[25], p_co[11]}; // 43
l_co[]+=newl; Line(newl) = {p_co[12], p_co[24]}; // 44



/// 2.*) legs bottom faces

ll_co[]+=newll; Line Loop(newll) = {l_co[0], l_co[1], l_co[2], l_co[3]}; // 0, leg right
s_co[]+=news; Plane Surface(news) = {ll_co[0]}; // 0

ll_co[]+=newll; Line Loop(newll) = {l_co[4], l_co[5], l_co[6], l_co[7]}; // 1, leg left
s_co[]+=news; Plane Surface(news) = {ll_co[1]}; // 1

/// 2.*) legs right faces

ll_co[]+=newll; Line Loop(newll) = {l_co[8], l_co[9], l_co[10], l_co[0]}; // 2, leg right
s_co[]+=news; Plane Surface(news) = {ll_co[2]}; // 2

ll_co[]+=newll; Line Loop(newll) = {l_co[11], l_co[16], l_co[15], l_co[4]}; // 3, leg left, bottom
s_co[]+=news; Plane Surface(news) = {ll_co[3]}; // 3

ll_co[]+=newll; Line Loop(newll) = {l_co[12], l_co[13], l_co[14], -l_co[16]}; // 4, leg left, top
s_co[]+=news; Plane Surface(news) = {ll_co[4]}; // 4

/// 2.*) legs left faces

ll_co[]+=newll; Line Loop(newll) = {l_co[17], l_co[18], l_co[19], -l_co[2]}; // 5, leg right
s_co[]+=news; Plane Surface(news) = {ll_co[5]}; // 5

ll_co[]+=newll; Line Loop(newll) = {l_co[20], l_co[25], l_co[24], -l_co[6]}; // 6, leg left, bottom
s_co[]+=news; Plane Surface(news) = {ll_co[6]}; // 6

ll_co[]+=newll; Line Loop(newll) = {l_co[21], l_co[22], l_co[23], -l_co[25]}; // 7, leg left, top
s_co[]+=news; Plane Surface(news) = {ll_co[7]}; // 7

/// 2.*) legs front faces

ll_co[]+=newll; Line Loop(newll) = {-l_co[10], l_co[26], l_co[19], l_co[3]}; // 8, leg right
s_co[]+=news; Plane Surface(news) = {ll_co[8]}; // 8

ll_co[]+=newll; Line Loop(newll) = {-l_co[15], l_co[28], l_co[24], l_co[7]}; // 9, leg left, bottom
s_co[]+=news; Plane Surface(news) = {ll_co[9]}; // 9

ll_co[]+=newll; Line Loop(newll) = {-l_co[14], l_co[27], l_co[23], -l_co[28]}; // 10, leg left, top
s_co[]+=news; Plane Surface(news) = {ll_co[10]}; // 10

/// 2.*) legs back faces

ll_co[]+=newll; Line Loop(newll) = {l_co[8], l_co[29], -l_co[17], -l_co[1]}; // 11, leg right
s_co[]+=news; Plane Surface(news) = {ll_co[11]}; // 11

ll_co[]+=newll; Line Loop(newll) = {l_co[11], l_co[31], -l_co[20], -l_co[5]}; // 12, leg left, bottom
s_co[]+=news; Plane Surface(news) = {ll_co[12]}; // 12

ll_co[]+=newll; Line Loop(newll) = {l_co[12], l_co[30], -l_co[21], -l_co[31]}; // 13, leg left, top
s_co[]+=news; Plane Surface(news) = {ll_co[13]}; // 13


/// 2.*) legs top faces

ll_co[]+=newll; Line Loop(newll) = {-l_co[9], l_co[29], l_co[18], -l_co[26]}; // 14, leg right
s_co[]+=news; Plane Surface(news) = {ll_co[14]}; // 14

ll_co[]+=newll; Line Loop(newll) = {-l_co[16], l_co[31], l_co[25], -l_co[28]}; // 15, leg left, bottom
s_co[]+=news; Plane Surface(news) = {ll_co[15]}; // 15

ll_co[]+=newll; Line Loop(newll) = {-l_co[13], l_co[30], l_co[22], -l_co[27]}; // 16, leg left, top
s_co[]+=news; Plane Surface(news) = {ll_co[16]}; // 16


/// 2.*) legs volumes

sl_co[]+=newsl; Surface Loop(newsl) = {-s_co[0], s_co[2], -s_co[5], s_co[8],
									  -s_co[11], s_co[14]}; // 0, leg right
v_co[]+=newv; Volume(newv) = {sl_co[0]};											// 0

sl_co[]+=newsl; Surface Loop(newsl) = {-s_co[1], s_co[3], -s_co[6], s_co[9],
									  -s_co[12], s_co[15]}; // 1, leg left, bottom
v_co[]+=newv; Volume(newv) = {sl_co[1]};											// 1

sl_co[]+=newsl; Surface Loop(newsl) = {-s_co[15], s_co[4], -s_co[7], s_co[10],
									  -s_co[13], s_co[16]}; // 2, leg left, top
v_co[]+=newv; Volume(newv) = {sl_co[2]}; 											// 2


/// 2.*) body, bottom face

ll_co[]+=newll; Line Loop(newll) = {-l_co[18], l_co[32],-l_co[42], l_co[33]}; // 17
s_co[]+=news; Plane Surface(news) = {ll_co[17]};									// 17

// surface 23 = forgotten bottom face (see below)

/// 2.*) body, right face

ll_co[]+=newll; Line Loop(newll) = {l_co[34], l_co[35], l_co[36], -l_co[9]}; // 18
s_co[]+=news; Plane Surface(news) = {ll_co[18]};									// 18

/// 2.*) body, left face

ll_co[]+=newll; Line Loop(newll) = {l_co[37], l_co[38], l_co[39], -l_co[22]}; // 19
s_co[]+=news; Plane Surface(news) = {ll_co[19]};									// 19

/// 2.*) body, front face

ll_co[]+=newll; Line Loop(newll) = {-l_co[36], l_co[40], l_co[39], -l_co[27],
									 l_co[44], l_co[33], -l_co[26]}; // 20
s_co[]+=news; Plane Surface(news) = {ll_co[20]};									// 20

/// 2.*) body, back face

ll_co[]+=newll; Line Loop(newll) = {l_co[34], l_co[41], -l_co[37], -l_co[30],
									 -l_co[43], -l_co[32], -l_co[29]}; // 21
s_co[]+=news; Plane Surface(news) = {ll_co[21]};									// 21

/// 2.*) body, top face

ll_co[]+=newll; Line Loop(newll) = {-l_co[35], l_co[41], l_co[38], -l_co[40]}; // 22
s_co[]+=news; Plane Surface(news) = {ll_co[22]};									// 22

/// 2.*) body, forgotten bottom face

ll_co[]+=newll; Line Loop(newll) = {l_co[42], l_co[43],l_co[13], l_co[44]};	// 23
s_co[]+=news; Plane Surface(news) = {ll_co[23]};									// 23

/// 2.*) body, volume

sl_co[]+=newsl; Surface Loop(newsl) = {-s_co[17], -s_co[14], -s_co[16], s_co[18],
									   -s_co[19], s_co[20], -s_co[21], s_co[22],
									   -s_co[23]}; // 3
v_co[]+=newv; Volume(newv) = {sl_co[3]}; 											// 3


skinCore[] = CombinedBoundary{Volume{v_co[]};};  // to ignore the internal surfaces

/// 3.*) The airgap -----------------------------------------------------------
///      ----------

out[] = Extrude {0, ly_gap, 0} { Surface{s_pl[5]}; };
v_ga[] += out[1]; // 0, right

out[] = Extrude {0, ly_gap, 0} { Surface{s_pl[6]}; };
v_ga[] += out[1]; // 0, left


/// 4.*) The inductor ---------------------------------------------------------
///      ------------

p_in[]+=newp; Point(newp) = {-lx_core/2+lx_foot+lx_coil, ly_plate+ly_gap+ly_foot-ly_coil,
							  lz_core/2, lc_coil};											// 0
p_in[]+=newp; Point(newp) = {-lx_core/2+lx_foot+lx_coil, ly_plate+ly_gap+ly_foot-ly_coil,
							 -lz_core/2, lc_coil};											// 1
p_in[]+=newp; Point(newp) = {-lx_core/2+lx_foot, ly_plate+ly_gap+ly_foot-ly_coil,
							 -lz_core/2-lz_coil, lc_coil};									// 2
p_in[]+=newp; Point(newp) = {-lx_core/2, ly_plate+ly_gap+ly_foot-ly_coil,
							 -lz_core/2-lz_coil, lc_coil};									// 3
p_in[]+=newp; Point(newp) = {-lx_core/2-lx_coil, ly_plate+ly_gap+ly_foot-ly_coil,
							 -lz_core/2, lc_coil};											// 4
p_in[]+=newp; Point(newp) = {-lx_core/2-lx_coil, ly_plate+ly_gap+ly_foot-ly_coil,
							  lz_core/2, lc_coil};											// 5
p_in[]+=newp; Point(newp) = {-lx_core/2, ly_plate+ly_gap+ly_foot-ly_coil,
							  lz_core/2+lz_coil, lc_coil};									// 6
p_in[]+=newp; Point(newp) = {-lx_core/2+lx_foot, ly_plate+ly_gap+ly_foot-ly_coil,
							  lz_core/2+lz_coil, lc_coil};									// 7

l_in[]+=newl; Line(newl)   = {p_in[0], p_in[1]};           // 0
l_in[]+=newl; Circle(newl) = {p_in[1], p_co[10], p_in[2]}; // 1
l_in[]+=newl; Line(newl)   = {p_in[2], p_in[3]};           // 2
l_in[]+=newl; Circle(newl) = {p_in[3], p_co[16], p_in[4]}; // 3
l_in[]+=newl; Line(newl)   = {p_in[4], p_in[5]};           // 4
l_in[]+=newl; Circle(newl) = {p_in[5], p_co[19], p_in[6]}; // 5
l_in[]+=newl; Line(newl)   = {p_in[6], p_in[7]};           // 6
l_in[]+=newl; Circle(newl) = {p_in[7], p_co[13], p_in[0]}; // 7
l_in[]+=newl; Line(newl)   = {p_in[0], p_co[13]};          // 8
l_in[]+=newl; Line(newl)   = {p_in[1], p_co[10]};          // 9
l_in[]+=newl; Line(newl)   = {p_in[2], p_co[10]};          // 10
l_in[]+=newl; Line(newl)   = {p_in[3], p_co[16]};          // 11
l_in[]+=newl; Line(newl)   = {p_in[4], p_co[16]};          // 12
l_in[]+=newl; Line(newl)   = {p_in[5], p_co[19]};          // 13
l_in[]+=newl; Line(newl)   = {p_in[6], p_co[19]};          // 14
l_in[]+=newl; Line(newl)   = {p_in[7], p_co[13]};          // 15

ll_in[]+=newll; Line Loop(newll) = {l_in[0], l_in[9], l_co[16], -l_in[8]};		// 0
ll_in[]+=newll; Line Loop(newll) = {l_in[1], l_in[10], -l_in[9]};				// 1
ll_in[]+=newll; Line Loop(newll) = {-l_in[10], l_in[2], l_in[11], -l_co[31]};	// 2
ll_in[]+=newll; Line Loop(newll) = {-l_in[11], l_in[3], l_in[12]};				// 3
ll_in[]+=newll; Line Loop(newll) = {-l_co[25], -l_in[12], l_in[4], l_in[13]};	// 4
ll_in[]+=newll; Line Loop(newll) = {l_in[14], -l_in[13], l_in[5]};				// 5
ll_in[]+=newll; Line Loop(newll) = {l_in[15], l_co[28], -l_in[14], l_in[6]};	// 6
ll_in[]+=newll; Line Loop(newll) = {l_in[7], l_in[8], -l_in[15]};				// 7


For ki In {0:7}
  s_in[]+=news; Plane Surface(news) = {ll_in[ki]};
  out[] = Extrude {0, ly_coil, 0} { Surface{s_in[ki]}; };
  v_in[]+= out[1];
EndFor

skinCoil[] = CombinedBoundary{Volume{v_in[]};};

/// 5) The air ----------------------------------------------------------------
///    -------

p_air[]+=newp; Point(newp) = {axl, ayb, azb, lc_air}; // 0
p_air[]+=newp; Point(newp) = {axl, ayt, azb, lc_air}; // 1
p_air[]+=newp; Point(newp) = {axr, ayt, azb, lc_air}; // 2
p_air[]+=newp; Point(newp) = {axr, ayb, azb, lc_air}; // 3
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

For ki In {0:5}
  s_air[]+=news; Plane Surface(news) = {ll_air[ki]};
EndFor

sl_air=newsl;
Surface Loop(newsl) = { -s_air[0], s_air[1], s_air[2], -s_air[3], -s_air[4],
  s_air[5]
};

/*
allvol[] = Volume '*';
surf[] = CombinedBoundary{ Volume{allvol[]}; };
Surface Loop(newsl) = surf[] ;
v_air=newv; Volume(newv) = {sl_air, newsl-1};  // newsl-1 = number of the last
*/											   //... generated surface loop

Surface Loop(394) = {326, 310, 327, 304, 287, 309, 281, 269, 286, 259, 246, 268, 236, 228, 245, 215, 206, 359, 351, 368, 349, 328, 350, 125, 133, 127, 135, 129, 131, 89, 107, 95, 101, 160, 148, 152, 156, 97, 109, 91, 103, 177, 181, 169, 173, 30, 24, 26, 36, 28, 22};
v_air=newv; Volume(newv) = {393, 394};


/// *.*) The physical entities ------------------------------------------------
///      ---------------------

Physical Volume(PLATE)     = v_pl;
Physical Volume(CORE)      = v_co[];
/*
Physical Volume(CORE_BOT)  = v_co[1];
Physical Volume(CORE_COIL) = v_co[2];
Physical Volume(CORE_TOP)  = {v_co[0], v_co[3]};
*/
Physical Volume(AIRGAP)    = v_ga[];
Physical Volume(AIR)       = v_air;
Physical Volume(COIL)      = v_in[];

/*
Physical Volume(COIL_R)    = v_in[0];
Physical Volume(COIL_BR)   = v_in[1];
Physical Volume(COIL_B)    = v_in[2];
Physical Volume(COIL_BL)   = v_in[3];
Physical Volume(COIL_L)    = v_in[4];
Physical Volume(COIL_FL)   = v_in[5];
Physical Volume(COIL_F)    = v_in[6];
Physical Volume(COIL_FR)   = v_in[7];

Physical Surface(SKIN_CIRCUIT)   = {skinPlate[], skinCore[]};
*/
Physical Surface(SKIN_PLATE) = {skinPlate[]};
Physical Surface(SKIN_CORE)  = {skinCore[]};
Physical Surface(SKIN_COIL)  = skinCoil[];

Physical Surface(SKIN_CORE_COIL) = {s_co[4], s_co[7], s_co[10], s_co[13]};
Physical Surface(AIR_INF)        = s_air[];
Physical Surface(CUT_COIL_BOT)   = s_co[15];
Physical Surface(CUT_COIL_TOP)   = s_co[16];

// EOF


