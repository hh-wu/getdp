Geometry.AutoCoherence = 0 ;

//--------------------------------------------------------------------------------
// Rotor SPM
//--------------------------------------------------------------------------------

pr[] = {};
pr[]+=newp ; Point(newp) = {rR1*Cos(Pi/8), rR1*Sin(Pi/8), 0., pR1};
pr[]+=newp ; Point(newp) = {rR2*Cos(Pi/8), rR2*Sin(Pi/8), 0., pR2};
pr[]+=newp ; Point(newp) = {rR2*Cos(thm) , rR2*Sin(thm) , 0., pR2};
pr[]+=newp ; Point(newp) = {rR3*Cos(Pi/8), rR3*Sin(Pi/8), 0., pR2};
pr[]+=newp ; Point(newp) = {rR3*Cos(thm) , rR3*Sin(thm) , 0., pR2};

pr_[]+=newp ; Point(newp) = {rR1*Cos(Pi/8),-rR1*Sin(Pi/8), 0., pR1};
pr_[]+=newp ; Point(newp) = {rR2*Cos(Pi/8),-rR2*Sin(Pi/8), 0., pR2};
pr_[]+=newp ; Point(newp) = {rR2*Cos(thm) ,-rR2*Sin(thm) , 0., pR2};
pr_[]+=newp ; Point(newp) = {rR3*Cos(Pi/8),-rR3*Sin(Pi/8), 0., pR2};
pr_[]+=newp ; Point(newp) = {rR3*Cos(thm) ,-rR3*Sin(thm) , 0., pR2};

lr[]+=newl ; Circle(newl) = {pr_[0],  cen, pr[0]};
lr[]+=newl ; Line(newl)   = {pr[0], pr[1]};
lr[]+=newl ; Circle(newl) = {pr[1],  cen, pr[2]};
lr[]+=newl ; Circle(newl) = {pr[2],  cen, pr_[2]};
lr[]+=newl ; Circle(newl) = {pr_[2], cen, pr_[1]};
lr[]+=newl ; Line(newl) = {pr_[1], pr_[0]};

lr[]+=newl ; Line(newl) = {pr[1], pr[3]};
lr[]+=newl ; Circle(newl) = {pr[3],  cen, pr[4]};
lr[]+=newl ; Line(newl) = {pr[4], pr[2]};

lr[]+=newl ; Circle(newl) = {pr[4],  cen, pr_[4]};
lr[]+=newl ; Line(newl) = {pr_[4], pr_[2]};

lr[]+=newl ; Circle(newl) = {pr_[4], cen, pr_[3]};
lr[]+=newl ; Line(newl) = {pr_[3], pr_[1]};

surfint[]= lr[0];
linR0[] += lr[{5,12}];
linR1[] += lr[{1,6}];

llrotor = newll ; Line Loop(newll) = {lr[{0:5}]};
srotor[]+=news  ; Plane Surface(news) = -llrotor ;

llair[] += newll ; Line Loop(newll) = {-lr[2],lr[{6:8}]};
sairrotor[]+=news  ; Plane Surface(news) = -llair[0] ;

llmagnet[] += newll ; Line Loop(newll) = {-lr[8],lr[{9,10}],-lr[3]};
smagnet[]+=news  ; Plane Surface(news) = -llmagnet[0] ;

llair[] += newll ; Line Loop(newll) = {-lr[10],lr[{11:12}],-lr[4]};
sairrotor[]+=news  ; Plane Surface(news) = -llair[1] ;

// Moving band
pmbr[]+=newp ; Point(newp) = {rB1*Cos(Pi/8),  rB1*Sin(Pi/8), 0., pB1};
pmbr[]+=newp ; Point(newp) = {rB1*Cos(Pi/8), -rB1*Sin(Pi/8), 0., pB1};

lmbr[]+=newl; Line(newl)   = { pr[3], pmbr[0]};
lmbr[]+=newl; Circle(newl) = { pmbr[0], cen, pmbr[1]};
lmbr[]+=newl; Line(newl)   = { pmbr[1], pr_[3]};

llmbr = newll ; Line Loop(newll) = {-lr[{11,9,7}],lmbr[]};
sairrotormb[]+=news  ; Plane Surface(news) = llmbr ;

linR0[] += lmbr[{2}];
linR1[] += lmbr[{0}];

If (InitialRotorAngle!=0)
  allSurfacesRotor[] = Surface '*';
  Rotate {{0,0,1},{0,0,0}, InitialRotorAngle} {Surface{allSurfacesRotor[]};} // Correcting initial position
EndIf

lineMBrotor[]=lmbr[1];
For k In {1:NbrPolesTot-1} // This line must be always complete
 lineMBrotor[]+= Rotate {{0, 0, 1}, {0, 0, 0}, k*Pi/4} { Duplicata{ Line{lineMBrotor[0]};} };
EndFor

// FULL MODEL ==> Rotation of NbrPolesInModel * Pi/4
If(SymmetryFactor<8)
  If (SymmetryFactor>1)
    For k In {0:#linR1[]-1}
      linR1_[] += Rotate {{0, 0, 1}, {0, 0, 0}, 2*Pi/SymmetryFactor-Pi/4} { Duplicata{Line{linR1[k]};} };
    EndFor
    linR1[] = linR1_[];
  EndIf

  For k In {1:NbrPolesInModel-1}
    surfint[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*Pi/4} { Duplicata{ Line{surfint[0]};} }; //For simplicity
    srotor[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*Pi/4} { Duplicata{ Surface{srotor[0]};} };
    smagnet[]+= Rotate {{0, 0, 1}, {0, 0, 0}, k*Pi/4} { Duplicata{ Surface{smagnet[0]};} };
    sairrotor[]  += Rotate {{0, 0, 1}, {0, 0, 0}, k*Pi/4} { Duplicata{ Surface{sairrotor[{0,1}]};} };
    sairrotormb[]+= Rotate {{0, 0, 1}, {0, 0, 0}, k*Pi/4} { Duplicata{ Surface{sairrotormb[0]};} };
  EndFor
EndIf

Geometry.AutoCoherence = 1 ;
Coherence ;

// -------------------------------------------------------------------------------
// Physical regions
// -------------------------------------------------------------------------------

Physical Surface(ROTOR_FE)     = {srotor[]};
Physical Surface(ROTOR_AIR)    = {sairrotor[]};
Physical Surface(ROTOR_AIRGAP) = {sairrotormb[]};// For torque computation with Maxwell stress tensor

NN = (Flag_Symmetry)?NbrPolesInModel:NbrPolesTot;
For k In {0:NN-1}
  Physical Surface(ROTOR_MAGNET+k) = {smagnet[k]}; // Magnets
EndFor
Physical Line(SURF_INT) = {surfint[]}; // SurfInt

If(Flag_Symmetry)  //Lines for symmetry link
  Physical Line(ROTOR_BND_A0)  = linR0[];
  Physical Line(ROTOR_BND_A1)  = linR1[];
EndIf

If(!Flag_Symmetry)
  Physical Line(ROTOR_BND_MOVING_BAND)  = {lineMBrotor[]};
EndIf
If(Flag_Symmetry)
  nr = #lineMBrotor[];
  nnp = nr/(NbrPolesTot/NbrSect) ;
  For k In {1:Ceil[NbrPolesTot/NbrSect]}
    kk= ((k*nnp-1) > nr) ? nr-1 : k*nnp-1 ;
    Physical Line(ROTOR_BND_MOVING_BAND+k-1) = {lineMBrotor[{(k-1)*nnp:kk}]};
  EndFor
EndIf

// -------------------------------------------------------------------------------
// For nice visualisation...
// -------------------------------------------------------------------------------
linRotor[]  = CombinedBoundary{Surface{srotor[]};};
linMagnet[] = Boundary{Surface{smagnet[]};};
nicepos_rotor[] = { linRotor[], linMagnet[] };

Color SteelBlue {Surface{srotor[]};}
Color SkyBlue {Surface{sairrotor[], sairrotormb[]};}
Color Orchid {Surface{smagnet[]};}

