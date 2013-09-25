// Include "dipole_data.geo";

fac = 1 ;
Mesh.CharacteristicLengthFactor = fac ;


// characteristic lengths & some transfinite number of divisions
lc  = lambda/10 ; // rule of thumb (min 10 divisions)
lcd = delta_gap/4 ;
lcair  = PmlDelta/5 ; // PML

flag = 1 ; // if 0, extruded mesh becomes free
nbrdivDelta = flag*Ceil[3/fac] ;
nbrdivHalfDipole = flag*Ceil[Ldipole/2/delta_gap*nbrdivDelta/2/fac] ;
nbrdivDipoleSection = flag*Ceil[4/fac] ; // 1/4 circle


// -----------------------------------------------------------------------
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

//air
pp[] += newp ; Point(newp) = {  0, -yb, 0, lcair} ;
pp[] += newp ; Point(newp) = { xb, -yb, 0, lcair} ;
pp[] += newp ; Point(newp) = { xb,  yb, 0, lcair} ;
pp[] += newp ; Point(newp) = {  0,  yb, 0, lcair} ;

For k In {0:2}
  lbox[]+=newl ; Line(newl) = {pp[k],pp[k+1]};
EndFor

lbox[]+=newl ; Line(newl) = {p0,pp[0]};
lbox[]+=newl ; Line(newl) = {p_[0],pp[3]};



bnddipole[] = CombinedBoundary{ Surface{surfdipole[]};} ;
axisdipole[] = bnddipole[{1,3,6}] ;
bnddipole[] -= axisdipole[];

//Printf("lbox ",lbox[]);
//Printf("bnddipole ",bnddipole[]);

Line Loop(newll) = {lbox[{0:2}], -lbox[{4}], -bnddipole[{3,4,2:0}], lbox[{3}]};
surfair = news ; Plane Surface(surfair) = {newll-1}; // Air around dipole

ppml[] += newp ; Point(newp) = {  0,             -yb- PmlDelta, 0, lcair} ;
ppml[] += newp ; Point(newp) = {  xb+ PmlDelta,  -yb- PmlDelta, 0, lcair} ;
ppml[] += newp ; Point(newp) = {  xb + PmlDelta,  yb+ PmlDelta, 0, lcair} ;
ppml[] += newp ; Point(newp) = {  0,              yb+ PmlDelta, 0, lcair} ;

For k In {0:2}
  lpml[]+=newl ; Line(newl) = {ppml[k],ppml[k+1]};
EndFor

lpml[]+=newl ; Line(newl) = {pp[3],ppml[3]};
lpml[]+=newl ; Line(newl) = {pp[0],ppml[0]};

Line Loop(newll) = {lpml[{4,0:2}],-lpml[{3}],-lbox[{2:0:-1}] };
surfPML[] += news; Plane Surface(news) = {newll-1};


//=================================================
// Physical regions for FE analysis with GetDP
//=================================================

Physical Surface(AIR) = surfair;
Physical Surface(PML) = surfPML[];
Physical Line(SURFAIRINF) = lpml[{0:2}];

Physical Surface(DIPOLE) = {surfdipole[{0,1}]};

Physical Line(SKINDIPOLE)    = {bnddipole[{0:1,3:4}]};
Physical Line(SKINDIPOLEDWN) = {bnddipole[{0:1}]};
Physical Line(SKINDIPOLEUP)  = {bnddipole[{3:4}]};

Physical Surface(FEED) = {surfdipole[2]}; // Feeding
Physical Line(CUTFEED) = {cutdipole1,cutdipole2};

bndfeed[] = Boundary{ Surface{surfdipole[2]};};
Physical Line(SKINFEED)= {bndfeed[1]};

Physical Line(AXIS) = {lbox[{3,4}],axisdipole[],lpml[{3,4}]}; // not used



