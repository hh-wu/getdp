thlag  = 3/NbPhases*60*deg2rad ;
thg    = thlag-thetas ;

//------------------------------------------------------------------------------------------
// stator
//------------------------------------------------------------------------------------------
pntStator1[]+=newp; Point(newp) = { r3*Cos(-thetas/2), r3*Sin(-thetas/2), 0.,lr3};
pntStator1[]+=newp; Point(newp) = { r3*Cos( thetas/2), r3*Sin( thetas/2), 0.,lr3};
pntStator1[]+=newp; Point(newp) = { r3*Cos( thetas/2+thg), r3*Sin( thetas/2+thg), 0.,lr3};

pntStator2[]+=newp; Point(newp) = { r4*Cos(-thetas/2), r4*Sin(-thetas/2), 0.,lr4};
pntStator2[]+=newp; Point(newp) = { r4*Cos( thetas/2), r4*Sin( thetas/2), 0.,lr4};
pntStator2[]+=newp; Point(newp) = { r4*Cos( thetas/2+thg), r4*Sin( thetas/2+thg), 0.,lr4};

cstator1[] += newl ; Circle(newl) = {pntStator1[0],cen,pntStator1[1]};
cstator1[] += newl ; Circle(newl) = {pntStator1[1],cen,pntStator1[2]};
cstator2[] += newl ; Circle(newl) = {pntStator2[0],cen,pntStator2[1]};
cstator2[] += newl ; Circle(newl) = {pntStator2[1],cen,pntStator2[2]};
lstator12[] +=newl; Line(newl) = {pntStator1[0],pntStator2[0]};
lstator12[] +=newl; Line(newl) = {pntStator1[1],pntStator2[1]};

Line Loop(newll) = {-cstator1[0], lstator12[0], cstator2[0], -lstator12[1]};
surfind[]+=news; Plane Surface(news) = newll-1 ;

For k In {1:NbPhases*2-1}
cstator1[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*thlag} { Duplicata{Line{cstator1[{0,1}]};} };
cstator2[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*thlag} { Duplicata{Line{cstator2[{0,1}]};} };
surfind[]  += Rotate {{0, 0, 1}, {0, 0, 0}, k*thlag} { Duplicata{Surface{surfind[{0}]};} };
EndFor

bnd[] = Boundary{Surface{surfind[1]};};
Line Loop(newll) = {-cstator1[1], lstator12[1], cstator2[1], -bnd[1]};
surfnoind[]+=news; Plane Surface(news) = newll-1 ;

For k In {1:NbPhases*2-1}
surfnoind[]+= Rotate {{0, 0, 1}, {0, 0, 0}, k*thlag} { Duplicata{Surface{surfnoind[{0}]};} };
EndFor

// Outer boundary
For k In {0:3}
 pntout[]+=newp; Point(newp) = { r5*Cos(k*Pi/2),  r5*Sin(k*Pi/2), 0.,lr5};
EndFor
For k In {0:3}
  cout[]+=newl ; Circle(newl)={pntout[k],cen,pntout[(k==3)? 0:k+1]};
EndFor

llout[] += newll; Line Loop (newll) = cout[];
llout[] += newll; Line Loop (newll) = cstator2[];
sstatorout = news ; Plane Surface(news) = llout[] ;


//------------------------------------------------------------------------------------------
// AirGap and moving band
//------------------------------------------------------------------------------------------
For k In {0:3}
 pntmb1[]+=newp; Point(newp) = { rmb1*Cos(k*Pi/2),  rmb1*Sin(k*Pi/2), 0.,lr2};
EndFor
For k In {0:3}
cmb1[]+=newl ; Circle(newl)={pntmb1[k], cen, pntmb1[(k==3) ? 0 : k+1]};
EndFor

llstator[] += newll; Line Loop (newll) = cstator1[];
llstator[] += newll; Line Loop (newll) = cmb1[];
sstatorAir  = news ; Plane Surface(sstatorAir) = {llstator[]};

// ---------------------------------------------------
// Physical Regions
// ---------------------------------------------------

If(NbPhases==1)
  Physical Surface(STATOR_INDA)  = {surfind[0]} ;
  Physical Surface(STATOR_INDAN) = {surfind[1]} ;
  Color Red    { Surface{ surfind[{0:NbPhases*2-1:NbPhases}] };}
EndIf

If(NbPhases==3)
  Physical Surface(STATOR_INDA)  = {surfind[0]} ;
  Physical Surface(STATOR_INDAN) = {surfind[3]} ;
  Physical Surface(STATOR_INDB)  = {surfind[4]} ;
  Physical Surface(STATOR_INDBN) = {surfind[1]} ;
  Physical Surface(STATOR_INDC)  = {surfind[2]} ;
  Physical Surface(STATOR_INDCN) = {surfind[5]} ;
  Color Red    { Surface{ surfind[{0:NbPhases*2-1:NbPhases}] };}
  Color Green  { Surface{ surfind[{1:NbPhases*2-1:NbPhases}] };}
  Color Gold { Surface{ surfind[{2:NbPhases*2-1:NbPhases}] };}
EndIf

Physical Surface(STATOR_FE)  = {sstatorout};
Physical Surface(STATOR_AIR)  = {surfnoind[]};
Physical Surface(STATOR_AIRGAP) = {sstatorAir};
Physical Line(SURF_INF)      = cout[] ;
Physical Line(STATOR_BND_MOVING_BAND) = cmb1[] ;


Color Cyan { Surface{sstatorAir,surfnoind[]}; }
Color NavyBlue { Surface{sstatorout}; }


// For nice visualisation...
linStator[] = Boundary{Surface{sstatorout,surfnoind[]};};
linStator[] += Boundary{Surface{surfind[]};};

nicepos_stator[] += {linStator[] };
