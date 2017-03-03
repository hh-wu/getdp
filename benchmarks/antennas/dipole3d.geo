fac = 2 ;

Mesh.CharacteristicLengthFactor = fac ;
Mesh.Algorithm3D = 4; // 3D mesh algorithm (1=Delaunay, 4=Frontal, 5=Frontal Delaunay, 6=Frontal Hex, 7=MMG3D, 9=R-tree)
Mesh.Optimize = 1 ;

// characteristic lengths & some transfinite number of divisions
lc  = lambda/nbla ; // rule of thumb (min 10 divisions)
lcd = (lc < delta_gap/4) ? lc : delta_gap/4 ;
lcair = PmlDelta/4 ; // PML

flag = 0 ; // if 0, extruded mesh becomes free
nbrdivDelta = flag*Ceil[6/fac] ;
nbrdivHalfDipole = flag*Ceil[Ldipole/2/delta_gap*nbrdivDelta/2/fac] ;
nbrdivDipoleSection = flag*Ceil[4/fac] ; // 1/4 circle
nbrdivPhi = flag*Ceil[4/fac] ;

//=================================================
// Dipole
//=================================================

p0 = newp ; Point(p0) = {0,       -Ldipole/2, 0, lcd};
p1 = newp ; Point(p1) = {rdipole, -Ldipole/2, 0, lcd};

cutdipole0 = newl ; Line(newl) = {p0,p1};

surf[] = Extrude {0, (Ldipole-delta_gap)/2, 0} {
  Line{cutdipole0}; Layers{nbrdivHalfDipole} ;
};
surfdipole[0] = surf[1] ; cutdipole1 = surf[0] ;

surf[] = Extrude {0, delta_gap, 0} {
  Line{cutdipole1}; Layers{nbrdivDelta} ;
};
surfdipole[2] = surf[1] ; cutdipole2 = surf[0] ;

surf[] = Extrude {0, (Ldipole-delta_gap)/2, 0} {
  Line{cutdipole2}; Layers{nbrdivHalfDipole} ;
};
surfdipole[1] = surf[1] ; cutdipole3 = surf[0];

p_[] = Boundary{Line{cutdipole3};};

bnddipole[] = CombinedBoundary{ Surface{surfdipole[]};} ;
axisdipole[] = bnddipole[{1,3,6}] ;
bnddipole[] -= axisdipole[];
//Printf("bnddipole ",bnddipole[]);

//=================================================
// Air and Pml
//=================================================

pp[] += newp ; Point(newp) = {  0, -yb, 0, lcair} ;
pp[] += newp ; Point(newp) = { xb, -yb, 0, lcair} ;
pp[] += newp ; Point(newp) = { xb,  yb, 0, lcair} ;
pp[] += newp ; Point(newp) = {  0,  yb, 0, lcair} ;

For k In {0:2}
  lbox[]+=newl ; Line(newl) = {pp[k],pp[k+1]};
EndFor

lbox[]+=newl ; Line(newl) = {p0,pp[0]};
lbox[]+=newl ; Line(newl) = {p_[0],pp[3]};

Line Loop(newll) = {lbox[{0:2}], -lbox[{4}], -bnddipole[{3,4,2:0}], lbox[{3}]};
surfair[] += news ; Plane Surface(news) = {newll-1}; // Air around dipole

ppml[] += newp ; Point(newp) = {  0,             -yb- PmlDelta, 0, lcair} ;
ppml[] += newp ; Point(newp) = {  xb+ PmlDelta,  -yb- PmlDelta, 0, lcair} ;
ppml[] += newp ; Point(newp) = {  xb + PmlDelta,  yb+ PmlDelta, 0, lcair} ;
ppml[] += newp ; Point(newp) = {  0,              yb+ PmlDelta, 0, lcair} ;

For k In {0:2}
  lpml[]+=newl ; Line(newl) = {ppml[k],ppml[k+1]};
EndFor

lpml[]+=newl ; Line(newl) = {pp[3],ppml[3]};
lpml[]+=newl ; Line(newl) = {pp[0],ppml[0]};

// diagonals
lpml[]+=newl ; Line(newl) = {pp[1],ppml[1]};
lpml[]+=newl ; Line(newl) = {pp[2],ppml[2]};

//Line Loop(newll) = {lpml[{4,0:2}],-lpml[{3}],-lbox[{2:0:-1}] };
//surfPML[] += news; Plane Surface(news) = {newll-1};

Line Loop(newll) = {lpml[4], lpml[0], -lpml[5], -lbox[0]};
surfPML[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {lbox[1], lpml[6], -lpml[1], -lpml[5]};
surfPML[]+=news; Plane Surface(news) = {newll-1};
Line Loop(newll) = {lpml[3], -lpml[2], -lpml[6], lbox[2]};
surfPML[]+=news; Plane Surface(news) = {newll-1};


//=================================================
// 3D
//=================================================
If(Flag_PML_Cyl==0)
  // Rectangular PML
  Phi = Pi/4 ; // 1/8 of the geometry
  vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfdipole[0]}; Layers{nbrdivPhi} ; Recombine;};
  voldipole[] += vol[1] ; surfdipole_[] += vol[0] ;
  vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfdipole[1]}; Layers{nbrdivPhi} ; Recombine;};
  voldipole[] += vol[1] ; surfdipole_[] += vol[0] ;
  vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfdipole[2]}; Layers{nbrdivPhi} ; Recombine;};
  voldipole[] += vol[1] ; surfdipole_[] += vol[0] ; // feed

  skindipole[] = CombinedBoundary{Volume{voldipole[]};};
  skindipole[] -= {surfdipole[],surfdipole_[]};

  surf[] = Extrude{0,0,-zb}{Line{lbox[1]};};
  surf[] = Extrude{0,0,-zb-PmlDelta}{Line{lpml[1]};};

  Line(93) = {12, 30};
  Line(94) = {9, 29};
  Line(95) = {16, 32};
  Line(96) = {13, 31};
  Line(97) = {30, 32};
  Line(98) = {29, 31};
  Line Loop(99) = {16, 93, -87};
  Plane Surface(100) = {99};
  Line Loop(101) = {93, -85, -94, -17, 35, 36, 70, 53, 54, 18};
  Plane Surface(102) = {101};
  Line Loop(103) = {14, 86, -94};
  Plane Surface(104) = {103};
  Surface Loop(newsl) = {100, 102, 88, 104, 20, 62, 65, 79, 45, 41};
  volair[]+=newv; Volume(newv) = {newsl-1};

  Line Loop(107) = {23, 95, -91};
  Plane Surface(108) = {107};
  Line Loop(109) = {27, 91, -97, -87};
  Plane Surface(110) = {109};
  Line Loop(111) = {95, -97, -93, 24};
  Plane Surface(112) = {111};
  Surface Loop(newsl) = {108, 33, 112, 110, 100};
  volpmly[]+=newv; Volume(newv) = {newsl-1};

  Line Loop(115) = {21, 90, -96};
  Plane Surface(116) = {115};
  Line Loop(117) = {94, 98, -96, -25};
  Plane Surface(118) = {117};
  Line Loop(119) = {86, 98, -90, -26};
  Plane Surface(120) = {119};
  Surface Loop(newsl) = {118, 120, 116, 29, 104};
  volpmly[]+=newv; Volume(newv) = {newsl-1};

  Line Loop(123) = {97, -89, -98, 85};
  Plane Surface(124) = {123};
  Surface Loop(newsl) = {110, 92, 31, 124, 88, 120};
  volpmlx[]+=newv; Volume(newv) = {newsl-1};

  surfairinf[] = {108,92,116} ;

  If(CoefGeo!=8) // Symmetry for getting 1/4 of the geometry
    surfairinf[]+= Symmetry {Cos(Phi), 0, Sin(Phi), 0} { Duplicata{Surface{surfairinf[]};} };
    volair[]    += Symmetry {Cos(Phi), 0, Sin(Phi), 0} { Duplicata{Volume{volair[]};} };
    voldipole[] += Symmetry {Cos(Phi), 0, Sin(Phi), 0} { Duplicata{Volume{voldipole[]};} };
    volpmlx[]   += Symmetry {Cos(Phi), 0, Sin(Phi), 0} { Duplicata{Volume{volpmlx[]};} };
    volpmly[]   += Symmetry {Cos(Phi), 0, Sin(Phi), 0} { Duplicata{Volume{volpmly[]};} };

    If(CoefGeo==1)
      surfairinf[]+= Symmetry {Cos(2*Phi), 0, Sin(2*Phi), 0} { Duplicata{Surface{surfairinf[]};} };
      volair[]    += Symmetry {Cos(2*Phi), 0, Sin(2*Phi), 0} { Duplicata{Volume{volair[]};} };
      voldipole[] += Symmetry {Cos(2*Phi), 0, Sin(2*Phi), 0} { Duplicata{Volume{voldipole[]};} };
      volpmlx[]   += Symmetry {Cos(2*Phi), 0, Sin(2*Phi), 0} { Duplicata{Volume{volpmlx[]};} };
      volpmly[]   += Symmetry {Cos(2*Phi), 0, Sin(2*Phi), 0} { Duplicata{Volume{volpmly[]};} };

      surfairinf[]+= Symmetry {Cos(4*Phi), 0, Sin(4*Phi), 0} { Duplicata{Surface{surfairinf[]};} };
      volair[]    += Symmetry {Cos(4*Phi), 0, Sin(4*Phi), 0} { Duplicata{Volume{volair[]};} };
      voldipole[] += Symmetry {Cos(4*Phi), 0, Sin(4*Phi), 0} { Duplicata{Volume{voldipole[]};} };
      volpmlx[]   += Symmetry {Cos(4*Phi), 0, Sin(4*Phi), 0} { Duplicata{Volume{volpmlx[]};} };
      volpmly[]   += Symmetry {Cos(4*Phi), 0, Sin(4*Phi), 0} { Duplicata{Volume{volpmly[]};} };
    EndIf
  EndIf
EndIf


If(Flag_PML_Cyl==1)
  Phi = AngleWedge ;
  vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfdipole[0]}; Layers{nbrdivPhi} ; Recombine;};
  voldipole[] += vol[1] ; surfdipole_[] += vol[0] ;
  vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfdipole[1]}; Layers{nbrdivPhi} ; Recombine;};
  voldipole[] += vol[1] ; surfdipole_[] += vol[0] ;
  vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfdipole[2]}; Layers{nbrdivPhi} ; Recombine;};
  voldipole[] += vol[1] ; surfdipole_[] += vol[0] ; // feed

  vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfair[]}; Layers{nbrdivPhi} ; Recombine;};
  volair[] += vol[1] ; surfair_[] += vol[0] ;

  vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfPML[0]}; Layers{nbrdivPhi} ; Recombine;};
  volpmly[] += vol[1] ; surfpml_[] += vol[0] ;
  surfairinf[] += vol[2] ;

  vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfPML[1]}; Layers{nbrdivPhi} ; Recombine;};
  volpmlx[] += vol[1] ; surfpml_[] += vol[0] ;
  surfairinf[] += vol[4] ;

  vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfPML[2]}; Layers{nbrdivPhi} ; Recombine;};
  volpmly[] += vol[1] ; surfpml_[] += vol[0] ;
  surfairinf[] += vol[2] ;
EndIf


//=================================================
// Physical regions
//=================================================

Physical Volume(AIR)  = volair[];
Physical Volume(PML)  = {volpmly[], volpmlx[]};

Physical Surface(SURFAIRINF) = surfairinf[];

nn = #voldipole[]-1;
Physical Volume(DIPOLE)   = voldipole[{0:nn:3,1:nn:3}];
Physical Volume(DIPOLEDWN)= voldipole[{0:nn:3}] ;
Physical Volume(DIPOLEUP) = voldipole[{1:nn:3}] ;
Physical Volume(FEED)     = voldipole[{2:nn:3}] ; // Feeding

If(CoefGeo>1)
  skindipole0[] = Boundary{Volume{voldipole[{0:nn:3}]};};
  skindipole1[] = Boundary{Volume{voldipole[{1:nn:3}]};};
  skindipole2[] = Boundary{Volume{voldipole[{2:nn:3}]};};

  n0 = #skindipole0[];
  Physical Surface(SKINDIPOLEDWN) = skindipole0[{2:n0-1:n0/2, 3:n0-1:n0/2}];
  Physical Surface(SKINDIPOLEUP)  = skindipole1[{3:n0-1:n0/2, 4:n0-1:n0/2}];
  Physical Surface(SKINFEED)   = skindipole2[{3:n0-1:n0/2}];
EndIf

If(CoefGeo==1 && !Flag_PML_Cyl)
  nn = #voldipole[]-1;
  skindipole0[] = CombinedBoundary{Volume{voldipole[{0:nn:3}]};};
  skindipole1[] = CombinedBoundary{Volume{voldipole[{1:nn:3}]};};
  skindipole2[] = CombinedBoundary{Volume{voldipole[{2:nn:3}]};};

  skindipole01[] = {skindipole0[], skindipole1[]};

  skindipole0[] -= skindipole2[];
  skindipole1[] -= skindipole2[];
  skindipole2[] -= skindipole01[];

  Physical Surface(SKINDIPOLEDWN) = skindipole0[];
  Physical Surface(SKINDIPOLEUP)  = skindipole1[];
  Physical Surface(SKINFEED)   = skindipole2[];
EndIf
