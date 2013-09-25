//Include "dipole_data.geo";

Mesh.Algorithm3D = 4; // 3D mesh algorithm (1=Delaunay, 4=Frontal)
Mesh.Optimize = 1 ;

fac = 2 ;
Mesh.CharacteristicLengthFactor = fac ;

// characteristic lengths & some transfinite number of divisions
lc  = lambda/10 ; // rule of thumb (min 10 divisions per wavelength)
lcd = delta_gap/4 ;

lcair = PmlDelta/5 ;

flag = 0 ; // if 0, extruded mesh becomes free
nbrdivDelta = flag*Ceil[3/fac] ;
nbrdivHalfDipole = flag*Ceil[Ldipole/2/delta_gap*nbrdivDelta/2/fac] ;
nbrdivDipoleSection = flag*Ceil[4/fac] ; // 1/4 circle
nbrdivPhi = flag*Ceil[4/fac] ;

// ----------------------------------------------------------------------------------

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

// Air around dipole
pp0 = newp ; Point(pp0) = { xb,  yb, 0, lcair} ;
pp1 = newp ; Point(pp1) = { xb, -yb, 0, lcair} ;
pp2 = newp ; Point(pp2) = {  0, -yb, 0, lcair} ;
pp3 = newp ; Point(pp3) = {  0,  yb, 0, lcair} ;

lbox[]+=newl ; Line(newl) = {pp0,pp1};
lbox[]+=newl ; Line(newl) = {pp1,pp2};
lbox[]+=newl ; Line(newl) = {pp3,pp0};

lbox[]+=newl ; Line(newl) = {p0,pp2};
lbox[]+=newl ; Line(newl) = {p_[0],pp3};

Line Loop(newll) = {17, -15, -14, -16, -18, 10, -12, -8, -4, -1};
surfair = news ; Plane Surface(surfair) = {newll-1};


// 3D part
Phi = Pi/2 ;
surf[] = Rotate {{0,1,0} , {0,0,0} , Phi } { Duplicata{Surface{surfair};} };
surfair_[] += surf[0];
bndsurfair_[] = Boundary{Surface{surf[0]};};
lback[] += bndsurfair_[2] ;

surf[] = Extrude {0,0,-zb} { Line{lbox[{2,0,1}]}; };
surfair_[] += surf[{1,5,9}]; lback[] += surf[{0,4,8}];

Line Loop(newll) = lback[] ;
surfair_[] +=news; Plane Surface(news) = {newll-1};

vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfdipole[0]}; Layers{nbrdivPhi} ;};
voldipole[] += vol[1] ; surfdipole_[] += vol[0] ;
vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfdipole[1]}; Layers{nbrdivPhi} ;};
voldipole[] += vol[1] ; surfdipole_[] += vol[0] ;
vol[] = Extrude {{0,1,0} , {0,0,0} , Phi } { Surface{surfdipole[2]}; Layers{nbrdivPhi} ;};
voldipole[] += vol[1] ; surfdipole_[] += vol[0] ; // feed


skindipole[] = CombinedBoundary{Volume{voldipole[]};};
skindipole[] -= {surfdipole[],surfdipole_[]};


Surface Loop(newsl) = {surfair, surfair_[],skindipole[]};
volair = newv ; Volume(volair) = {newsl-1};// Air

// Outer layer PML
ppml[] += newp ; Point(newp) = { xb+PmlDelta, yb+PmlDelta, 0, lcair} ;
ppml[] += newp ; Point(newp) = { xb+PmlDelta,-yb-PmlDelta, 0, lcair} ;
ppml[] += newp ; Point(newp) = {  0,         -yb-PmlDelta, 0, lcair} ;
ppml[] += newp ; Point(newp) = {  0,          yb+PmlDelta, 0, lcair} ;

lpml[]+=newl; Line(newl) = {ppml[0],ppml[1]};
lpml[]+=newl; Line(newl) = {ppml[1],ppml[2]};
lpml[]+=newl; Line(newl) = {ppml[0],ppml[3]};

surf[] = Extrude {0,0,-zb-PmlDelta} { Line{lpml[]}; };
spml[] += surf[{1,5,9}] ;
lpml[] += surf[{0,4,8}] ;


Line(114) = {58, 60};
Line(115) = {12, 54};
Line(116) = {11, 53};
Line(117) = {10, 52};
Line(118) = {50, 56};
Line(119) = {18, 58};
Line(120) = {9, 51};
Line(121) = {48, 55};
Line(122) = {22, 60};


Line Loop(123) = {101, -115, 16, 120};
Plane Surface(124) = {123};
Line Loop(125) = {121, 110, -122, 32};
Plane Surface(126) = {125};
Line Loop(127) = {112, -122, 25, 115};
Plane Surface(128) = {127};
Line Loop(129) = {116, -100, -117, 15};
Plane Surface(130) = {129};
Line Loop(131) = {117, 104, -118, -38};
Plane Surface(132) = {131};
Line Loop(133) = {118, 106, -119, -40};
Plane Surface(134) = {133};
Line Loop(135) = {23, 119, -108, -116};
Plane Surface(136) = {135};
Line Loop(137) = {119, 114, -122, -24};
Plane Surface(138) = {137};
Line Loop(139) = {120, 99, -117, -14};
Plane Surface(140) = {139};
Line Loop(141) = {121, 102, -118, -36};
Plane Surface(142) = {141};

Line Loop(143) = {121, -103, -120, 34};
Plane Surface(144) = {143};

Surface Loop(145) = {105, 140, 142, 132, 39, 144};
volpmlX[]+=newv; Volume(newv) = {newsl-1}; // X
Surface Loop(147) = {35, 126, 113, 124, 128, 144};
volpmlY[]+=newv; Volume(newv) = {newsl-1}; // Y
Surface Loop(149) = {109, 130, 136, 134, 43, 132};
volpmlY[]+=newv; Volume(newv) = {newsl-1}; // Y
Line Loop(151) = {110, -114, -106, -102};
Plane Surface(152) = {151};
Surface Loop(153) = {152, 138, 45, 134, 142, 126};
volpmlZ[]+=newv; Volume(newv) = {newsl-1}; // Z


bndPML[] = CombinedBoundary{Volume{volpmlX[],volpmlY[],volpmlZ[]};};

surfaircut[] = {surfair, surfair_[0], bndPML[{7:12}]};
surfairinf[] = bndPML[{4:6,13 }];


//=================================================
// Physical regions for FE analysis with GetDP
//=================================================

Physical Volume(AIR)  =  volair;
Physical Volume(PML) = {volpmlX[], volpmlY[], volpmlZ[]};
Physical Volume(PMLX) = volpmlX[];
Physical Volume(PMLY) = volpmlY[];
Physical Volume(PMLZ) = volpmlZ[];

Physical Surface(SYMAIR) = surfaircut[];
Physical Surface(SURFAIRINF) = surfairinf[];

Physical Volume(DIPOLE)    =  voldipole[{0,1}] ;
Physical Volume(DIPOLEDWN) =  voldipole[0] ;
Physical Volume(DIPOLEUP) =   voldipole[1] ;
Physical Volume(FEED) =  voldipole[2] ; // Feeding

skindipole0[] = Boundary{Volume{voldipole[0]};};
skindipole1[] = Boundary{Volume{voldipole[1]};};
skindipole2[] = Boundary{Volume{voldipole[2]};};
//Printf("",skindipole2[]);

Physical Surface(SKINDIPOLEDWN) = skindipole0[{2:3}];
Physical Surface(SKINDIPOLEUP)  = skindipole1[{3:4}];
Physical Surface(SYMDIPOLE) = {skindipole0[{0,1}],skindipole1[{0,1}]};

Physical Surface(SKINFEED)   = skindipole2[{3}];
Physical Surface(CUTFEEDUP)  = skindipole2[{4}];
Physical Surface(CUTFEEDDWN) = skindipole2[{2}];
Physical Surface(SYMFEED) = skindipole2[{0,1}];










