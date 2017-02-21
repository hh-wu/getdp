Include "t32_data.geo";

Mesh.SurfaceFaces = 1;
Geometry.CopyMeshingMethod = 1;

Mesh.Algorithm = 1;
Mesh.Algorithm3D = 4; // 3D mesh algorithm (1=Delaunay, 4=Frontal, 5=Frontal Delaunay, 6=Frontal Hex, 7=MMG3D, 9=R-tree)
Mesh.Optimize=1;

//ListOfPointsAtCorners[]={7,8,9} ;
//Characteristic Length  ListOfPointsAtCorners[] = lc0/4;

Mesh.CharacteristicLengthFactor=1;

// characteristic lengths
lc0  = wcore/5;
lc1  = wcore/5;
lc2  = wcore/5;

lcri = lc0*4; // Pi*Rint/30;
lcro = lc0*4; // Pi*Rext/30;

lc1f = (Flag_3Dmodel==0)?lc1: lc1;
lc2f = (Flag_3Dmodel==0)?lc2: lc2;

nl_hcoil = 10 ;
nl_wcoil = 4;

nlayers = 1;
nlayers_ang = 5;
nlayers_ind = nl_wcoil-1;

// center of the model at (0,0)
cen = newp; Point(newp) = {0,                   0, 0, lc0};

// Points at y=0
pnt0[] += newp; Point(newp) = {wcore/2,             0, 0, lc0};
pnt0[] += newp; Point(newp) = {wcore/2+whole-wcoil, 0, 0, lc0};
pnt0[] += newp; Point(newp) = {wcore/2+whole,       0, 0, lc0};
pnt0[] += newp; Point(newp) = {wcore/2+whole+wcore, 0, 0, lc0};
pnt0[] += newp; Point(newp) = {wcore/2+whole+wcore+wcoil, 0, 0, lc0};


// Points at y=hcore/2-wcore
pnt1[] += newp; Point(newp) = {wcore/2,             hcore/2-wcore, 0, lc1f};
pnt1[] += newp; Point(newp) = {wcore/2+whole-wcoil, hcore/2-wcore, 0, lc1f};
pnt1[] += newp; Point(newp) = {wcore/2+whole,       hcore/2-wcore, 0, lc1f};
pnt1[] += newp; Point(newp) = {wcore/2+whole+wcore, hcore/2-wcore, 0, lc1};
pnt1[] += newp; Point(newp) = {wcore/2+whole+wcore+wcoil, hcore/2-wcore, 0, lc1};


// Points at y=hcore/2
// wTot/2 == wcore/2+whole+wcore+wcoil
pnt2[] += newp; Point(newp) = { 0,      hcore/2, 0, lc2f};
pnt2[] += newp; Point(newp) = { wcore/2+whole+wcore, hcore/2, 0, lc2};

// horizontal lines
lnh0[] += newl; Line(newl) = {cen,pnt0[0]};

For k In {0:3}
  lnh0[] += newl; Line(newl) = {pnt0[k],pnt0[k+1]};
  lnh1[] += newl; Line(newl) = {pnt1[k],pnt1[k+1]};
EndFor

lnh2[] += newl; Line(newl) = {pnt2[0],pnt2[1]};

// vertical lines
lnv0[] += newl; Line(newl) = {cen,pnt2[0]};
lnv1[] += newl; Line(newl) = {pnt0[0],pnt1[0]};
lnv2[] += newl; Line(newl) = {pnt0[1],pnt1[1]};
lnv3[] += newl; Line(newl) = {pnt0[2],pnt1[2]};
lnv4[] += newl; Line(newl) = {pnt0[3],pnt1[3]};
lnv4[] += newl; Line(newl) = {pnt1[3],pnt2[1]};
lnv5[] += newl; Line(newl) = {pnt0[4],pnt1[4]};

Line Loop(newll) = {lnv0[0],lnh2[0],-lnv4[1],-lnh1[{2:0:-1}],-lnv1[0],-lnh0[0]};
surf_ECore[] += news ; Plane Surface(news) = newll-1;

Line Loop(newll) = {lnv3[0],lnh1[2],-lnv4[0],-lnh0[3]};
surf_ECore[] += news ; Plane Surface(news) = newll-1;

//Air inside
Line Loop(newll) = {lnh0[1],lnv2[0],-lnh1[0],-lnv1[0]};
surf_Air[] += news ; Plane Surface(news) = newll-1;

// Coil
// Left side (0)
Line Loop(newll) = {lnh0[2],lnv3[0],-lnh1[1],-lnv2[0]};
surf_Coil[] += news ; Plane Surface(news) = newll-1;

// Left side (1)
Line Loop(newll) = {lnh0[4],lnv5[0],-lnh1[3],-lnv4[0]};
surf_Coil[] += news ; Plane Surface(news) = newll-1;


// Coil
Transfinite Line{lnh0[{2,4}],lnh1[{1,3}]} = nl_wcoil;
Transfinite Line{lnv3[0],lnv2[0],lnv5[0],lnv4[0]} = nl_hcoil;
Transfinite Surface{surf_Coil[]};
//Recombine Surface {surf_Coil[]};

//ECore
// {lnv0[0],lnh2[0],-lnv4[1],-lnh1[{2:0:-1}],-lnv1[0],-lnh0[0]};
// Transfinite Line{lnv0[0]} = nl_hcoil + 1.5*(Ceil[wcore/lc0]+1) ;
// Transfinite Line{lnh2[0]} =
// Transfinite Line{lnh0[0]} = (1.5*(Ceil[wcore/lc0]+1))/2 ;
//Recombine Surface {surf_ECore[0]};

// ECore inside coil
Transfinite Line{lnh1[2],lnh0[3]} = 1.5*(Ceil[wcore/lc0]+1);
Transfinite Surface{surf_ECore[1]}; //Recombine Surface {surf_ECore[1]};

//===========================================================
// Air around
// Inner circle
pnta[] += newp; Point(newp) = { Rint, 0, 0, lcri};
pnta[] += newp; Point(newp) = { 0, Rint, 0, lcri};

ln_rin[]+=newl; Circle(newl) = {pnta[0], cen, pnta[1]};

// Closing de domain...axis at x=0
lnh0[]+=newl; Line(newl) = {pnt0[{#pnt0[]-1}], pnta[0]};
lnv0[]+=newl; Line(newl) = {pnt2[0], pnta[1]};

Line Loop(newll) = {lnh0[5], ln_rin[0], -lnv0[1], lnh2[0], -lnv4[1], lnh1[3], -lnv5[0]};
surf_Air[] += news; Plane Surface(news) = {newll-1};


// Outer circle - Infinity
pnta_[] += newp; Point(newp) = { Rext, 0, 0, lcro};
pnta_[] += newp; Point(newp) = { 0, Rext, 0, lcro};

ln_bnd[]+=newl; Circle(newl) = {pnta_[0], cen, pnta_[1]};


lnh0[]+=newl; Line(newl) = {pnta[0], pnta_[0]};
lnv0[]+=newl; Line(newl) = {pnta[1], pnta_[1]};

Line Loop(newll) = {lnh0[6], ln_bnd[0], -lnv0[2], -ln_rin[0]};
surf_AirInf[] += news; Ruled Surface(news) = {newll-1};

//Symmetry
ln_bnd[] += Symmetry {1,0,0,0} { Duplicata{ Line{ln_bnd[{0}]};} };
lnh0[] += Symmetry {1,0,0,0} { Duplicata{ Line{lnh0[]};} };
surf_ECore[] += Symmetry {1,0,0,0} { Duplicata{ Surface{surf_ECore[{0,1}]};} };
surf_Coil[]  += Symmetry {1,0,0,0} { Duplicata{ Surface{surf_Coil[{0,1}]};} };
surf_Air[]   += Symmetry {1,0,0,0} { Duplicata{ Surface{surf_Air[{0,1}]};} };
surf_AirInf[] += Symmetry {1,0,0,0} { Duplicata{ Surface{surf_AirInf[{0}]};} };

If(!Flag_Symmetry)
  ln_bnd[] += Symmetry {0,1,0,0} { Duplicata{ Line{ln_bnd[{0,1}]};} };

  surf_ECore[] += Symmetry {0,1,0,0} { Duplicata{ Surface{surf_ECore[]};} };
  surf_Coil[]  += Symmetry {0,1,0,0} { Duplicata{ Surface{surf_Coil[]};} };
  surf_Air[]   += Symmetry {0,1,0,0} { Duplicata{ Surface{surf_Air[]};} };
  surf_AirInf[] += Symmetry {0,1,0,0} { Duplicata{ Surface{surf_AirInf[]};} };
EndIf



//===========================================================
If(Flag_3Dmodel==1)

  surf_cut_xy[] = Surface '*'; //All surfaces till now!

  Lz = AxialLength;
  // Extruding surfaces // Just 1/4 of the model!
  For k In {0:3}
    vol[] = Extrude {0,0,-Lz/2} { Surface {surf_ECore[k]}; Layers{nlayers}; /*Recombine ;*/ }; //QuadTriAddVerts; QuadTriNoNewVerts
    vol_Core[]    += vol[1];
    surf_ECore__[]+= vol[0];
  EndFor
  For k In {0:3}
    vol[] = Extrude {0,0,-Lz/2} { Surface {surf_Coil[k]}; Layers{nlayers}; /*Recombine;*/ };
    vol_Coil[] += vol[1];
    surf_Coil__[] += vol[0];
  EndFor

  vol_CoilR[] = vol_Coil[{0,1}];
  vol_CoilL[] = vol_Coil[{2,3}];

  vol_inCoilR[] = vol_Core[1];
  vol_inCoilL[] = vol_Core[3];


  vol[] = Extrude {{0, 1, 0}, {wcore/2+whole,          0, -Lz/2},-Pi/2}{ Surface{surf_Coil__[0]};};
  //vol[] = Extrude {{0, 1, 0}, {wcore/2+whole,          0, -Lz/2},-Pi/2}{ Surface{surf_Coil__[0]}; Layers{nlayers_ang};};
  vol_CoilR[] += vol[1];
  vol[] = Extrude {{0, 1, 0}, {wcore/2+whole+wcore,    0, -Lz/2}, Pi/2}{ Surface{surf_Coil__[1]};};//Recombine;};
  //vol[] = Extrude {{0, 1, 0}, {wcore/2+whole+wcore,    0, -Lz/2}, Pi/2}{ Surface{surf_Coil__[1]}; Layers{nlayers_ang};};//Recombine;};
  vol_CoilR[] += vol[1];

  vol[] = Extrude {{0, 1, 0}, {-(wcore/2+whole),       0, -Lz/2}, Pi/2}{ Surface{surf_Coil__[2]}; };
  //vol[] = Extrude {{0, 1, 0}, {-(wcore/2+whole),       0, -Lz/2}, Pi/2}{ Surface{surf_Coil__[2]}; Layers{nlayers_ang};};//Recombine;};
  vol_CoilL[] += vol[1];
  vol[] = Extrude {{0, 1, 0}, {-(wcore/2+whole+wcore), 0, -Lz/2}, -Pi/2}{ Surface{surf_Coil__[3]}; };
    //vol[] = Extrude {{0, 1, 0}, {-(wcore/2+whole+wcore), 0, -Lz/2}, -Pi/2}{ Surface{surf_Coil__[3]}; Layers{nlayers_ang};};//Recombine;};
  vol_CoilL[] += vol[1];


  vol[] = Extrude {0,0,-wcoil} { Surface{surf_ECore__[1]}; Layers{nlayers_ind};};//Recombine;};
  vol_CoilR[] += vol[1];
  vol[] = Extrude {0,0,-wcoil} { Surface{surf_ECore__[3]}; Layers{nlayers_ind};};//Recombine;};
  vol_CoilL[] += vol[1];


  //vol[] = Extrude {0,0,-Lz/2} { Surface {surf_Air[0]}; };
  vol[] = Extrude {0,0,-Lz/2} { Surface {surf_Air[0]}; Layers{nlayers};};//Recombine;};
  vol_Air[] += vol[1];
  surf_cut_xz[] += vol[2];
  //vol[] = Extrude {0,0,-Lz/2} { Surface {surf_Air[2]}; };
  vol[] = Extrude {0,0,-Lz/2} { Surface {surf_Air[2]}; Layers{nlayers};};//Recombine;};
  vol_Air[] += vol[1];
  surf_cut_xz[] += vol[2];


  // DomainInf, not used in 3D (kinda cylindrical domain)
  vol[] = Extrude {0,0,-depthZ} { Surface {surf_AirInf[0]}; };
  vol_Air[] += vol[1];
  surf_cut_xz[] += vol[2];
  vol[] = Extrude {0,0,-depthZ} { Surface {surf_AirInf[1]}; };
  vol_Air[] += vol[1];
  surf_cut_xz[] += vol[2];

  // Closing the air...
  la_back[]+=newl; Line(newl) = {214, 208};
  la_back[]+=newl; Line(newl) = {208, 203};

  Characteristic Length {208} = lc0*2;

  Line Loop(newll) = {44, 477, la_back[{0,1}], -455, -29, 234, 316, 365, -299, -406, 85, -149, 428, 333, -387, -350, -278};
  surf_cut_air_xz[]+=news; Plane Surface(news) = {newll-1};
  surf_cut_xz[] += surf_cut_air_xz[0];

  Line Loop(newll) = {475, 493, 494, -453};
  surf_air_back[]+=news; Plane Surface(news) = {newll-1};

  Surface Loop(newsl) = {355, 358, 404, 395, 283, 287, 342, 338, 448, 426, 308, 304, 382, 373, 321, 324, 496, 73, 32, 498, 118, 93, 97, 182, 157, 161, 469, 491, 243, 239};
  vol_Air[] +=newv; Volume(newv) = {newsl-1};

  If(Flag_Symmetry3D==2) // 1/2 of geometry
    surf_cut_xz[] = {};
    surf_cut_xy[] -= surf_Coil[] ;
    surf_Coil[]   += Symmetry {0,1,0,0} { Duplicata{ Surface{surf_Coil[]};} };
    surf_cut_xy[] += Symmetry {0,1,0,0} { Duplicata{ Surface{surf_cut_xy[]};} };
    surf_cut_xy[] += surf_Coil[] ;


    vol_Core[]  += Symmetry {0,1,0,0} { Duplicata{ Volume{vol_Core[]};} };

    vol_inCoilR[] += vol_Core[5];
    vol_inCoilL[] += vol_Core[7];

    vol_CoilR[] += Symmetry {0,1,0,0} { Duplicata{ Volume{vol_CoilR[]};} };
    vol_CoilL[] += Symmetry {0,1,0,0} { Duplicata{ Volume{vol_CoilL[]};} };

    vol_Air[]   += Symmetry {0,1,0,0} { Duplicata{ Volume{vol_Air[]};} };
  EndIf

EndIf


If(Flag_3Dmodel==0)
  //=================================================
  // Physical regions for FE analysis (2D)
  //=================================================
  Physical Surface(CORE)   = surf_ECore[];

  nb_surf_coil = #surf_Coil[];
  Physical Surface(COIL)   = surf_Coil[{0:nb_surf_coil-1:4}];
  Physical Surface(COIL+1) = surf_Coil[{1:nb_surf_coil-1:4}];
  Physical Surface(COIL+2) = surf_Coil[{2:nb_surf_coil-1:4}];
  Physical Surface(COIL+3) = surf_Coil[{3:nb_surf_coil-1:4}];

  Physical Surface(AIR)    = surf_Air[];
  Physical Surface(AIRINF) = surf_AirInf[];
  Physical Line(SURF_AIROUT) = ln_bnd[];

    //=================================================
  // Some colors... for aesthetics :-)
  //=================================================
  Reverse Surface {surf_ECore[{2,3}], surf_Coil[{2,3}],surf_Air[{2,3}],surf_AirInf[1]};

  Recursive Color SkyBlue { Surface{surf_Air[]};}
  Recursive Color Blue { Surface{surf_AirInf[]};}
  Recursive Color SteelBlue { Surface{ surf_ECore[]}; }
  Recursive Color Red    { Surface{surf_Coil[{0,1}]}; }
  Recursive Color Yellow { Surface{surf_Coil[{2,3}]}; }
  If(!Flag_Symmetry)
    Reverse Surface {surf_ECore[{4,5}], surf_Coil[{4,5}],surf_Air[{4,5}],surf_AirInf[2]};
    Recursive Color Red    { Surface{surf_Coil[{4,5}]}; }
    Recursive Color Yellow { Surface{surf_Coil[{6,7}]}; }
  EndIf

EndIf

If(Flag_3Dmodel==1)
  //=================================================
  // Physical regions for FE analysis (3D)
  //=================================================
  bnd_Core[]  = CombinedBoundary{Volume{vol_Core[]};};
  bnd_Core[] -= surf_cut_xy[];
  If (Flag_Symmetry3D ==1)
    surf_cut_xz[] += bnd_Core[{5,9,16,20}];
    bnd_Core[] -= surf_cut_xz[];
  EndIf
  //Printf("",bnd_Core[]);
  Physical Volume(CORE)      = vol_Core[];
  Physical Surface(SKINCORE) = bnd_Core[];

  Physical Volume(COIL+0)       = vol_CoilR[];
  Physical Volume(COIL+1)       = vol_CoilL[];

  Physical Volume(LEG_INCOIL+0) = vol_inCoilR[]; // for source computation
  Physical Volume(LEG_INCOIL+1) = vol_inCoilL[];

  nb_surf_coil = #surf_Coil[];
  Physical Surface(ELECCOIL+0) = surf_Coil[{1:nb_surf_coil-1:4}]; // e.g. the one of the right
  Physical Surface(ELECCOIL+1) = surf_Coil[{2:nb_surf_coil-1:4}];

  //Right
  // ======================================================
  bnd_CoilR[]  = CombinedBoundary{Volume{vol_CoilR[]};};
  bnd_CoilR[] -= surf_Coil[{0:nb_surf_coil-1:4,1:nb_surf_coil-1:4}];
  If (Flag_Symmetry3D ==1)
    surf_cut_xz[] += bnd_CoilR[{4,6,9,12,16}];
    bnd_CoilR[]   -= surf_cut_xz[];
  EndIf
  Physical Surface(SKINCOIL+0) = bnd_CoilR[];

  bnd_CoilR_plus_hole[] = CombinedBoundary{Volume{vol_CoilR[], vol_inCoilR[]};};
  bnd_inCoilR[]  = CombinedBoundary{Volume{vol_inCoilR[]};};
  bnd_inCoilR[] -= bnd_CoilR_plus_hole[];
  Physical Surface(SKINCOIL_CUT+0) = bnd_inCoilR[];

  bnd_CoilR_plus_hole[] -= CombinedBoundary{Volume{vol_CoilR[]};};
  bnd_CoilR_plus_hole[] -= surf_cut_xy[];
  Physical Surface(COIL_CUT+0)= bnd_CoilR_plus_hole[1]; //cut down (top at 0)

  If (Flag_Symmetry3D ==1)
    surf_cut_xz[] += bnd_CoilR_plus_hole[1];
  EndIf

  // Left
  // ======================================================
  bnd_CoilL[]  = CombinedBoundary{Volume{vol_CoilL[]};};
  bnd_CoilL[] -= surf_Coil[{2:nb_surf_coil-1:4,3:nb_surf_coil-1:4}];
  If (Flag_Symmetry3D ==1)
     surf_cut_xz[] += bnd_CoilL[{4,6,9,12,16}];
     bnd_CoilL[]   -= surf_cut_xz[];
   EndIf
  Physical Surface(SKINCOIL+1) = bnd_CoilL[];


  bnd_CoilL_plus_hole[] = CombinedBoundary{Volume{vol_CoilL[], vol_inCoilL[]};};
  bnd_inCoilL[]  = CombinedBoundary{Volume{vol_inCoilL[]};};
  bnd_inCoilL[] -= bnd_CoilL_plus_hole[];
  Physical Surface(SKINCOIL_CUT+1) = bnd_inCoilL[];

  bnd_CoilL_plus_hole[] -= CombinedBoundary{Volume{vol_CoilL[]};};
  bnd_CoilL_plus_hole[] -= surf_cut_xy[];
  Physical Surface(COIL_CUT+1)= bnd_CoilL_plus_hole[1]; //cut down (top at 0)

  If (Flag_Symmetry3D ==1)
    surf_cut_xz[] += bnd_CoilL_plus_hole[1];
  EndIf

  Physical Volume(AIR)         = vol_Air[];
  Physical Surface(SURF_CUTXY) = surf_cut_xy[];
  Physical Surface(SURF_CUTXZ) = surf_cut_xz[];

  all_vol[] = Volume '*';
  bnd_all[] = CombinedBoundary{Volume{all_vol[]};};
  bnd_all[] -= surf_cut_xy[];
  bnd_all[] -= surf_cut_xz[];
  Physical Surface(SURF_AIROUT) = bnd_all[];

  //=================================================
  // Some colors... for aesthetics :-)
  //=================================================
  Recursive Color SkyBlue { Volume{vol_Air[]};}
  Recursive Color SteelBlue { Volume{ vol_Core[]}; }
  Recursive Color Red    { Volume{vol_CoilR[]}; }
  Recursive Color Yellow { Volume{vol_CoilL[]}; }

EndIf


// Post-processing point
Point(newp) = {0, ypos_1, 0 }; // for visu
Point(newp) = {0, ypos_2, 0 }; // for visu
Point(newp) = {0, ypos_3, 0 }; // for visu

If(PostProcessing.NbViews==0)
  View "Label of Points 1,2,3" {
  T3(0,ypos_1,0, TextAttributes("Align", "Left", "Font", "Helvetica")){ " 1 " };
  T3(0,ypos_2,0, TextAttributes("Align", "Left", "Font", "Helvetica")){ " 2 " };
  T3(0,ypos_3,0, TextAttributes("Align", "Left", "Font", "Helvetica")){ " 3 " };
  };
EndIf

