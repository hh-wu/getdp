fac = 1 ;
Mesh.CharacteristicLengthFactor = fac ;

// characteristic lengths & some transfinite number of divisions
lc  = lambda/nbla ; // rule of thumb (min 10 divisions)
lcd = (lc < delta_gap/4) ? lc : delta_gap/4 ;
lcair = PmlDelta/4 ; // PML

flag = 1 ; // if 0, extruded mesh becomes free
nbrdivDelta = flag*Ceil[3/fac] ;
nbrdivHalfDipole = flag*Ceil[Ldipole/2/delta_gap*nbrdivDelta/2/fac] ;
nbrdivDipoleSection = flag*Ceil[4/fac] ; // 1/4 circle

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

If(Flag_InfShape==0) // Rectangular truncation boundary

  pp[]+=p0;
  pp[]+=newp; Point(newp) = {  0, -yb, 0, lcair};
  pp[]+=newp; Point(newp) = { xb, -yb, 0, lcair};
  pp[]+=newp; Point(newp) = { xb,  yb, 0, lcair};
  pp[]+=newp; Point(newp) = {  0,  yb, 0, lcair};
  pp[]+=p_[0];

  For k In {0:4}
    lbox[]+=newl; Line(newl) = {pp[k],pp[k+1]};
  EndFor

  ppml[]+=pp[1];
  ppml[]+=newp; Point(newp) = {           0, -yb-PmlDelta, 0, lcair};
  ppml[]+=newp; Point(newp) = { xb+PmlDelta, -yb-PmlDelta, 0, lcair};
  ppml[]+=newp; Point(newp) = { xb+PmlDelta,  yb+PmlDelta, 0, lcair};
  ppml[]+=newp; Point(newp) = {           0,  yb+PmlDelta, 0, lcair};
  ppml[]+=pp[4];

  For k In {0:4}
    lpml[]+=newl ; Line(newl) = {ppml[k],ppml[k+1]};
  EndFor

EndIf

If(Flag_InfShape==1)  // Capsular trunction boundary

  pp[]+=newp; Point(newp) = {  0, -Ldipole/2-rb, 0, lcair};
  pp[]+=newp; Point(newp) = { rb, -Ldipole/2   , 0, lcair};
  pp[]+=newp; Point(newp) = { rb,  Ldipole/2   , 0, lcair};
  pp[]+=newp; Point(newp) = {  0,  Ldipole/2+rb, 0, lcair};

  lbox[]+=newl; Line(newl) = {p0,pp[0]};
  lbox[]+=newl; Circle(newl) = {pp[0],p0,pp[1]};
  lbox[]+=newl; Line(newl) = {pp[1],pp[2]};
  lbox[]+=newl; Circle(newl) = {pp[2],p_[0],pp[3]};
  lbox[]+=newl; Line(newl) = {pp[3],p_[0]};

  ppml[]+=newp; Point(newp) = {           0, -Ldipole/2-PmlDelta-rb, 0, lcair};
  ppml[]+=newp; Point(newp) = { rb+PmlDelta, -Ldipole/2, 0, lcair};
  ppml[]+=newp; Point(newp) = { rb+PmlDelta,  Ldipole/2, 0, lcair};
  ppml[]+=newp; Point(newp) = {           0,  Ldipole/2+PmlDelta+rb, 0, lcair};

  lpml[]+=newl; Line(newl) = {pp[0],ppml[0]};
  lpml[]+=newl; Circle(newl) = {ppml[0],p0,ppml[1]};
  lpml[]+=newl; Line(newl) = {ppml[1],ppml[2]};
  lpml[]+=newl; Circle(newl) = {ppml[2],p_[0],ppml[3]};
  lpml[]+=newl; Line(newl) = {ppml[3],pp[3]};

EndIf

surfAirLL=newll ; Line Loop(surfAirLL) = {lbox[], -bnddipole[{3,4,2:0}]};
surfAir=news ; Plane Surface(surfAir) = {surfAirLL};

surfPmlLL=newll ; Line Loop(surfPmlLL) = {lpml[],-lbox[{3:1:-1}] };
surfPml=news; Plane Surface(surfPml) = {surfPmlLL};


//=================================================
// Physical regions
//=================================================

Physical Surface(AIR) = surfAir;
Physical Surface(PML) = surfPml;
Physical Line(SURFAIRINF) = lpml[{1:3}];

Physical Surface(DIPOLE) = {surfdipole[{0,1}]};

Physical Line(SKINDIPOLE)    = {bnddipole[{0:1,3:4}]};
Physical Line(SKINDIPOLEDWN) = {bnddipole[{0:1}]};
Physical Line(SKINDIPOLEUP)  = {bnddipole[{3:4}]};

Physical Surface(FEED) = {surfdipole[2]}; // Feeding
Physical Line(CUTFEED) = {cutdipole1,cutdipole2};

bndfeed[] = Boundary{ Surface{surfdipole[2]};};
Physical Line(SKINFEED)= {bndfeed[1]};

Physical Line(AXIS) = {lbox[{3,4}],axisdipole[],lpml[{3,4}]}; // not used
