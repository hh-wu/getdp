//Flag_3Dmodel = 1;

// characteristic lengths
lc0  = wcoil/nn_wcore;
lc1  = ag/nn_airgap;
lcri = Pi*Rint/2/nn_ri;
lcro = Pi*Rext/2/nn_ro;

// center of the model at (0,0)
cen = newp; Point(newp) = {0,0,0, lc0};

// E-core
pnt0[] += newp; Point(newp) = { 0,             htot/2-hcoreE, 0, lc1};
pnt0[] += newp; Point(newp) = { wcoreE,         htot/2-hcoreE, 0, lc1};
pnt0[] += newp; Point(newp) = { wcoreE+wcoil,   htot/2-hcoreE, 0, lc1};
pnt0[] += newp; Point(newp) = { 2*wcoreE+wcoil, htot/2-hcoreE, 0, lc1};

pnt1[] += newp; Point(newp) = { 0,           htot/2-hcoreE+hcoil, 0, lc0};
pnt1[] += newp; Point(newp) = { wcoreE,       htot/2-hcoreE+hcoil, 0, lc0};
pnt1[] += newp; Point(newp) = { wcoreE+wcoil, htot/2-hcoreE+hcoil, 0, lc0};

pnt2[] += newp; Point(newp) = { 0,             htot/2-hcoreE+hcoil+wcoreE, 0, lc0};
pnt2[] += newp; Point(newp) = { 2*wcoreE+wcoil, htot/2-hcoreE+hcoil+wcoreE, 0, lc0};

lnh0[] += newl; Line(newl) = {pnt0[0],pnt0[1]};
lnh0[] += newl; Line(newl) = {pnt0[1],pnt0[2]};
lnh0[] += newl; Line(newl) = {pnt0[2],pnt0[3]};

lnh1[] += newl; Line(newl) = {pnt1[0],pnt1[1]};
lnh1[] += newl; Line(newl) = {pnt1[1],pnt1[2]};

lnh2[] += newl; Line(newl) = {pnt2[0],pnt2[1]};

lnv[] += newl; Line(newl) = {pnt0[0],pnt1[0]};
lnv[] += newl; Line(newl) = {pnt1[0],pnt2[0]};
lnv[] += newl; Line(newl) = {pnt0[1],pnt1[1]};
lnv[] += newl; Line(newl) = {pnt0[2],pnt1[2]};
lnv[] += newl; Line(newl) = {pnt0[3],pnt2[1]};

Line Loop(newll) = {lnh0[0],lnv[2],-lnh1[0],-lnv[0]};
surf_ECore[] += news ; Plane Surface(news) = newll-1;
Line Loop(newll) = {lnh0[2],lnv[4],-lnh2[0],-lnv[1],lnh1[{0,1}],-lnv[3]};
surf_ECore[] += news ; Plane Surface(news) = newll-1;

Line Loop(newll) = {lnh0[1],lnv[3],-lnh1[1],-lnv[2]};
surf_Coil[] += news ; Plane Surface(news) = newll-1;


// I-core
pnt3[] += newp; Point(newp) = { 0,       htot/2-hcoreE-ag-hcoreI, 0, lc0};
pnt3[] += newp; Point(newp) = { 2*wcoreE+wcoil, htot/2-hcoreE-ag-hcoreI, 0, lc0};
pnt3[] += newp; Point(newp) = { 2*wcoreE+wcoil, htot/2-hcoreE-ag, 0, lc1};
pnt3[] += newp; Point(newp) = { 0,       htot/2-hcoreE-ag, 0, lc1};

For k In {0:#pnt3[]-1}
  lni[]+=newl; Line(newl) = {pnt3[k], pnt3[(k==#pnt3[]-1)?0:k+1]};
EndFor

Line Loop(newll) = {lni[]};
surf_ICore[] += news ; Plane Surface(news) = {newll-1};


// Closing the airgap for testing different configurations
lnv[] += newl; Line(newl) = {pnt3[3], pnt0[0]};
lnv[] += newl; Line(newl) = {pnt3[2], pnt0[3]};

Line Loop(newll) = {-lnv[5],-lni[2],lnv[6],-lnh0[{2:0}]};
surf_Airgap[] += news; Plane Surface(news) = {newll-1};

//===========================================================
// Extruding surfaces // Just 1/4 of the model!
vol[] = Extrude Surface {surf_ECore[0], {0,0,-Lz/2}};;
vol_ECore[] += vol[1];
surf_cut_yz[]+=vol[5];
surf_cut_coil[]    += vol[2];
surf_cut_coil_up[] += vol[4];
vol_in_Coil[] += vol[1];

vol[] = Extrude Surface {surf_ECore[1], {0,0,-Lz/2}};;
vol_ECore[] += vol[1]; surf_cut_yz[]+=vol[5];

vol[] = Extrude Surface {surf_ICore[0], {0,0,-Lz/2}};;
vol_ICore[] = vol[1]; surf_cut_yz[]+=vol[5];

vol[] = Extrude Surface {surf_Airgap[0], {0,0,-Lz/2}};;
vol_Airgap[] = vol[1]; surf_cut_yz[]+=vol[2];

vol[] = Extrude Surface {surf_Coil[0], {0,0,-Lz/2}};;
vol_Coil[] += vol[1]; surf_Coil[] += vol[0];
vol[] = Extrude {{0, 1, 0}, {wcoreE, 0, -Lz/2}, Pi/2}{ Surface{surf_Coil[1]}; };
vol_Coil[] += vol[1]; surf_Coil[] += vol[0];
vol[] = Extrude Surface {surf_Coil[2], {-wcoreE, 0, 0}};;
vol_Coil[] += vol[1]; surf_Coil[] += vol[0];
surf_cut_yz[]+=vol[0];

aux_bnd[] = CombinedBoundary{ Surface{ surf_cut_yz[] };};
bnd_cut_yz[]= aux_bnd[{4:11}]; // Everything but the axis

// Air around
// Inner circle
pnta[] += newp; Point(newp) = { 0,-Rint, 0, lcri};
pnta[] += newp; Point(newp) = { Rint, 0, 0, lcri};
pnta[] += newp; Point(newp) = { 0, Rint, 0, lcri};

ln_rin[]+=newl; Circle(newl) = {pnta[0], cen, pnta[1]};
ln_rin[]+=newl; Circle(newl) = {pnta[1], cen, pnta[2]};

// Closing de domain...axis at x=0
lnaxis[]+=newl; Line(newl) = {pnta[0], pnt3[0]};
lnaxis[]+=lnv[4];
lnaxis[]+=newl; Line(newl) = {pnt2[0], pnta[2]};

Line Loop(newll) = {-lnaxis[2], lnh2[0], -lnv[{4,6}], -lni[{1,0}], -lnaxis[0], ln_rin[{0,1}]};
surf_Air[] += news; Plane Surface(news) = {newll-1};

// Outer circle - Infinity
pnta_[] += newp; Point(newp) = { 0,-Rext, 0, lcro};
pnta_[] += newp; Point(newp) = { Rext, 0, 0, lcro};
pnta_[] += newp; Point(newp) = { 0, Rext, 0, lcro};

ln_rout[]+=newl; Circle(newl) = {pnta_[0], cen, pnta_[1]};
ln_rout[]+=newl; Circle(newl) = {pnta_[1], cen, pnta_[2]};

lnaxis_[]+=newl; Line(newl) = {pnta_[0], pnta[0]};
lnaxis_[]+=newl; Line(newl) = {pnta[2], pnta_[2]};

Line Loop(newll) = {-ln_rin[{1,0}], -lnaxis_[0], ln_rout[{0,1}], -lnaxis_[1]};
surf_AirInf[] += news; Plane Surface(news) = {newll-1};

ln_axis[] = {lnaxis[],lnaxis_[],lni[3],lnv[0]};

vol[] = Extrude {{0, 1, 0}, {0, 0, 0}, Pi/2}{ Surface{surf_AirInf[0]}; };
vol_AirInf[] = vol[1]; surf_cut_yz[]+= vol[0];
surf_airinf_out[] = vol[{4,5}];
surf_airinf_in[] = vol[{2,3}];
bnd_cut_yz_airinf[] = Boundary{Surface{vol[0]};};

// Symmetry YZ
Line Loop(newll) = {lnaxis[2], bnd_cut_yz_airinf[{0,1}], lnaxis[0], bnd_cut_yz[]};
surf_cut_yz[]+= news; Plane Surface(news) = {newll-1};
surf_cut_yz_air[] = news-1;

surf_cut_xy[] = {surf_ECore[{0,1}], surf_ICore[0], surf_Airgap[0], surf_Air[0], surf_AirInf[0], surf_Coil[{0}]} ;

aux_surf[] = CombinedBoundary{Volume{ vol_ECore[], vol_ICore[], vol_Coil[], vol_Airgap[]};};
aux_surf[] -= {surf_ECore[{0,1}], surf_ICore[0], surf_Airgap[0], surf_Coil[{0}], surf_cut_yz[]};

Surface Loop(newsl) = {surf_Air[0], surf_cut_yz_air[0], surf_airinf_in[], aux_surf[]};
vol_Air[]+=newv; Volume(newv) = {newsl-1};



If(Flag_Symmetry<2)
  surf_airinf_out[]   += Symmetry {1,0,0,0} { Duplicata{Surface{surf_airinf_out[]};} }; // For convenience
  surf_cut_coil[] += Symmetry {1,0,0,0} { Duplicata{Surface{surf_cut_coil[]};} };
  surf_cut_coil_up[] += Symmetry {1,0,0,0} { Duplicata{Surface{surf_cut_coil_up[]};} };
  surf_cut_xy[] += Symmetry {1,0,0,0} { Duplicata{Surface{surf_cut_xy[]};} };

  vol_ECore[]  += Symmetry {1,0,0,0} { Duplicata{Volume{vol_ECore[]};} };
  vol_in_Coil[] += vol_ECore[2];

  vol_ICore[]  += Symmetry {1,0,0,0} { Duplicata{Volume{vol_ICore[]};} };
  vol_Coil[]   += Symmetry {1,0,0,0} { Duplicata{Volume{vol_Coil[]};} };
  vol_Airgap[] += Symmetry {1,0,0,0} { Duplicata{Volume{vol_Airgap[]};} };
  vol_Air[]    += Symmetry {1,0,0,0} { Duplicata{Volume{vol_Air[]};} };
  vol_AirInf[] += Symmetry {1,0,0,0} { Duplicata{Volume{vol_AirInf[]};} };

  If(!Flag_Symmetry) // Full model
    surf_airinf_out[]   += Symmetry {0,0,1,0} { Duplicata{Surface{surf_airinf_out[]};} };// For convenience
    surf_cut_coil[] += Symmetry {0,0,1,0} { Duplicata{Surface{surf_cut_coil[]};} };
    surf_cut_coil_up[] += Symmetry {0,0,1,0} { Duplicata{Surface{surf_cut_coil_up[]};} };

    vol_ECore[]  += Symmetry {0,0,1,0} { Duplicata{Volume{vol_ECore[]};} };
    vol_in_Coil[] += vol_ECore[{4,6}];

    vol_ICore[]  += Symmetry {0,0,1,0} { Duplicata{Volume{vol_ICore[]};} };
    vol_Coil[]   += Symmetry {0,0,1,0} { Duplicata{Volume{vol_Coil[]};} };
    vol_Airgap[] += Symmetry {0,0,1,0} { Duplicata{Volume{vol_Airgap[]};} };
    vol_Air[]    += Symmetry {0,0,1,0} { Duplicata{Volume{vol_Air[]};} };
    vol_AirInf[] += Symmetry {0,0,1,0} { Duplicata{Volume{vol_AirInf[]};} };
  EndIf
EndIf




//=================================================
// Some colors... for aesthetics :-)
//=================================================

all_surf_Coil[] = Boundary{Volume{vol_Coil[]};};
all_surf_ECore[] = Boundary{Volume{vol_ECore[]};};
all_surf_ICore[] = Boundary{Volume{vol_ICore[]};};

all_surf_Airgap[] = Boundary{Volume{vol_Airgap[]};};
all_surf_Air[] = Boundary{Volume{vol_Air[]};};
all_surf_AirInf[] = Boundary{Volume{vol_AirInf[]};};

Color SkyBlue {
  Volume{vol_Air[], vol_AirInf[]}; Surface{all_surf_Air[],all_surf_AirInf[]};
}
Color SteelBlue {
  Volume{ vol_ECore[], vol_ICore[]}; Surface{ all_surf_ECore[], all_surf_ICore[] };
}
If(Flag_OpenCore==1)
  Color SkyBlue {Volume{vol_Airgap[]}; Surface{all_surf_Airgap[]}; }
EndIf
If(Flag_OpenCore==0)
  Color SteelBlue {Volume{vol_Airgap[]}; Surface{all_surf_Airgap[]};}
EndIf

Color Red {
  Volume{vol_Coil[]}; Surface{all_surf_Coil[]};
}

//=================================================
// Physical regions for FE analysis with GetDP
//=================================================

Physical Volume(ECORE) = vol_ECore[];
Physical Volume(ICORE) = vol_ICore[];

Physical Volume(COIL) = vol_Coil[];
Physical Volume(LEG_INCOIL) = vol_in_Coil[];

bnd_surf_Coil[] = CombinedBoundary{Volume{vol_Coil[]};};
If(Flag_Symmetry)
  bnd_surf_Coil[] -= surf_cut_xy[] ;
  If(Flag_Symmetry==2) // Half
    bnd_surf_Coil[] -= surf_cut_yz[] ;
  EndIf
EndIf

Physical Surface(SKINCOIL) = bnd_surf_Coil[];

bnd_surf_in_Coil[] = CombinedBoundary{Volume{vol_in_Coil[]};};
bnd_surf_in_Coil[] -= {surf_cut_coil[], surf_cut_coil_up[]};
If(Flag_Symmetry)
  bnd_surf_in_Coil[] -= surf_cut_xy[] ;
  If(Flag_Symmetry==2) // Half
    bnd_surf_in_Coil[] -= surf_cut_yz[] ;
  EndIf
EndIf

Physical Surface(SKINCOIL_) = bnd_surf_in_Coil[];
Physical Surface(CUTCOIL) =   surf_cut_coil[];

Physical Volume(AIRGAP) = vol_Airgap[]; //either Fe or air
If(Flag_Infinity==0)
  Physical Volume(AIR) = {vol_Air[],vol_AirInf[]};
EndIf
If(Flag_Infinity==1)
  Physical Volume(AIR) = vol_Air[];
  Physical Volume(AIRINF) = vol_AirInf[];
EndIf
Physical Surface(SURF_AIROUT) = surf_airinf_out[];

Physical Surface(SURF_ELEC0) = surf_Coil[{0}];

If(Flag_Symmetry)
  Physical Surface(CUT_XY) = {surf_cut_xy[]};
  If(Flag_Symmetry==2) // Half
    Physical Surface(CUT_YZ) = {surf_cut_yz[]}; // BC if symmetry
  EndIf
EndIf
