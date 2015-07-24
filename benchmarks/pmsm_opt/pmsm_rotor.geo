//--------------------------------------------------------------------------------
// Rotor PMSM
//--------------------------------------------------------------------------------
A = InitialRotorAngle ; //-45/2*deg + A1; // with Theta_Park

sinA = Sin(A); cosA = Cos(A);
pntR[]+=newp; Point(newp)={rR1*cosA, rR1*sinA, 0, pR1};
pntR[]+=newp; Point(newp)={rR2*cosA, rR2*sinA, 0, pR1};
pntR[]+=newp; Point(newp)={rR4*cosA, rR4*sinA, 0, pR1};
pntR[]+=newp; Point(newp)={rR5*cosA, rR5*sinA, 0, pR2};
pntR[]+=newp; Point(newp)={rB1*cosA, rB1*sinA, 0, pR2};

For k In {0:#pntR[]-2}
 linR0[]+=newl; 
 Line(newl) = { pntR[k], pntR[k+1] };
EndFor

For k In {0:#linR0[]-1}
 linR1[] += Rotate {{0, 0, 1}, {0, 0, 0}, A0} { Duplicata{Line{linR0[k]};} };
EndFor

AA[] = {(A0-Th_magnet)/2., Th_magnet, (A0-Th_magnet)/2.} ;

// shaft surface
lin[] = Extrude {{0, 0, 1}, {0, 0, 0}, AA[0]} { Point{pntR[0]}; }; 
cirR[]+=lin[1];
lin[] = Extrude {{0, 0, 1}, {0, 0, 0}, AA[1]} { Point{lin[0]}; };
cirR[]+=lin[1];
lin[] = Extrude {{0, 0, 1}, {0, 0, 0}, AA[2]} { Point{lin[0]}; };
cirR[]+=lin[1];
surfint[]=cirR[{0,1,2}] ; // boundary conditions

// inner magnet surface
pMagnet[] = Rotate {{0, 0, 1}, {0, 0, 0}, AA[0]} { Duplicata{Point{pntR[1]};} };
lin[] = Extrude {{0, 0, 1}, {0, 0, 0}, AA[1]} { Point{pMagnet[0]}; };
pMagnet[] += lin[0]; cirR[] += lin[1] ;

// rotor inter-magnet surface
lin[] = Extrude {{0, 0, 1}, {0, 0, 0}, AA[0]} { Point{pntR[2]}; };
pMagnet[] += lin[0]; cirR[]+=lin[1]; 

pMagnet[] += Rotate {{0, 0, 1}, {0, 0, 0}, AA[1]} { Duplicata{Point{lin[0]};} };
lin[] = Extrude {{0, 0, 1}, {0, 0, 0}, AA[2]} { Point{pMagnet[3]}; };
cirR[]+=lin[1];

// rotor section surface
lin[] = Extrude {{0, 0, 1}, {0, 0, 0}, AA[0]} { Point{pntR[3]}; };
pMagnet[] += lin[0] ; cirR[]+=lin[1];
lin[] = Extrude {{0, 0, 1}, {0, 0, 0}, AA[1]} { Point{lin[0]}; };
pMagnet[] += lin[0] ; cirR[]+=lin[1];
lin[] = Extrude {{0, 0, 1}, {0, 0, 0}, AA[2]} { Point{lin[0]}; };
cirR[]+=lin[1];

// air gap surface
lin[] = Extrude {{0, 0, 1}, {0, 0, 0}, A0} { Point{pntR[4]}; }; 
cirR[]+=lin[1];

//Abort ;

// magnet bed edges
linR2[] = Rotate {{0, 0, 1}, {0, 0, 0}, AA[0]} { Duplicata{Line{linR0[{1,2}]};} };
linR3[] = Rotate {{0, 0, 1}, {0, 0, 0},-AA[2]} { Duplicata{Line{linR1[{1,2}]};} };

// surfaces rotor
linRotor[] = {linR0[{0,1}], cirR[4], -linR2[0], cirR[3], linR3[0],
               cirR[5], -linR1[{1,0}], -cirR[{2,1,0}]};
Line Loop(newll) = {linR0[{0,1}], cirR[4], -linR2[0], cirR[3], linR3[0], cirR[5], -linR1[{1,0}], -cirR[{2,1,0}]};
srotor[0]=news; Plane Surface(srotor[0]) = {newll-1};

lMagnet[] = { linR2[1], cirR[7], linR3[1], linR3[0], cirR[3], linR2[0] };
Line Loop(newl) = {linR2[1], cirR[7], -linR3[{1,0}], -cirR[3], linR2[0]};
smagnet[0]=news; Plane Surface(smagnet[0]) = {newll-1};

// mettre abs dans relocateVertex pour pouvoir utiliser la meme liste
Printf("lMagnet=", lMagnet[]);

nn = #cirR[]-1 ;
Line Loop(newll) = {cirR[{nn-5}], linR2[1], -cirR[{nn-3}], -linR0[2]};
sairrotor[]+=news; Plane Surface(news) = -{newll-1};
Line Loop(newll) = {cirR[{nn-4}], linR1[2], -cirR[{nn-1}], -linR3[1]};
sairrotor[]+=news; Plane Surface(news) = -{newll-1};

Line Loop(newll) = {linR0[3], cirR[nn], -linR1[3], -cirR[{nn-1:nn-3:-1}]};
sairrotormb[]+=news; Plane Surface(news) = {newll-1};

// --------------------------------------------------------------------------
// Moving band == AirGap rotor side
// --------------------------------------------------------------------------

//Filling the gap for the whole 2*Pi
lineMBrotor[]=cirR[{nn}];
Printf("1:", lineMBrotor[]);
For k In {1:NbrPolesTot-1}
  lineMBrotoraux[]+=Rotate {{0, 0, 1}, {0, 0, 0}, k*A0} { Duplicata{Line{lineMBrotor[]};} };
EndFor

nicepos_rotor[] += { linRotor[], lMagnet[] };

// -----------------------------------------------------------------------
// Physical regions
// -----------------------------------------------------------------------

Physical Surface(ROTOR_FE)     = {srotor[]};     // Rotor
Physical Surface(ROTOR_AIR)    = {sairrotor[]};  // AirRotor
Physical Surface(ROTOR_AIRGAP) = {sairrotormb[]};

For k In {0:NbrPolesInModel - 1}
  Physical Surface(ROTOR_MAGNET+k) = {smagnet[k]}; // Magnets
EndFor

Physical Line(SURF_INT) = {surfint[]}; // SurfInt

Physical Line(ROTOR_BND_A0)  = linR0[];
Physical Line(ROTOR_BND_A1)  = linR1[];

lineMBrotor[] += lineMBrotoraux[] ;
nr = #lineMBrotor[];
nnp = nr/(NbrPolesTot/NbrPolesInModel) ;

For k In {1:Floor[NbrPolesTot/NbrPolesInModel]}
  kk= ((k*nnp-1) > nr) ? nr-1 : k*nnp-1 ;
  Physical Line(ROTOR_BND_MOVING_BAND+k-1) = lineMBrotor[{(k-1)*nnp:kk}] ;
EndFor

/*
k1 = Floor[NbrPolesTot/NbrSect];
k2 = Ceil[NbrPolesTot/NbrSect];
If (k2 > k1)
  Physical Line(ROTOR_BND_MOVING_BAND+k2-1) =   lineMBrotor[{(k2-1)*nnp:#lineMBrotor[]-1}] ;
EndIf
*/
