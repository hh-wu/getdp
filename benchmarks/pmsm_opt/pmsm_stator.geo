// --------------------------------------------------------------------------
// Moving band == AirGap stator side
// --------------------------------------------------------------------------

pntG[] += newp; Point(newp) = {rB2, 0., 0., pS1};
circ[] = Extrude {{0, 0, 1}, {0, 0, 0}, A0} { Point{pntG[0]}; };
pntG[] += circ[0];
lineMBstator[] = circ[1];

//air gap over 2*Pi
For k In {1:NbrPolesTot-1}
  lineMBstatoraux[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*A0} { Duplicata{Line{lineMBstator[0]};} };
EndFor

// --------------------------------------------------------------------------
// Flanks and outer surface 
// --------------------------------------------------------------------------

pntS[]  = newp; Point(newp) = {rS1, 0, 0, pS1};
pntS[] += newp; Point(newp) = {rS3, 0, 0, pS2};
pntS[] += newp; Point(newp) = {rS7, 0, 0, pS2};
pntS[] += Rotate {{0, 0, 1}, {0, 0, 0}, A0} { Duplicata{Point{ pntS[]};} };

linS[]  = newl; Line(newl) = {pntG[0], pntS[0]};
linS[] += newl; Line(newl) = {pntS[0], pntS[1]};
linS[] += newl; Line(newl) = {pntS[1], pntS[2]};
linS[] += newl; Circle(newl) = { pntS[2], cen, pntS[5]};
linS[] += newl; Line(newl) = {pntS[5], pntS[4]};
linS[] += newl; Line(newl) = {pntS[4], pntS[3]};
linS[] += newl; Line(newl) = {pntS[3], pntG[1]};

cirS[] = linS[];
cirS[] -= linS[0];
cirS[] -= linS[6]; // stator contour 

// --------------------------------------------------------------------------
// Slots
// --------------------------------------------------------------------------

AA[]=deg2rad*{2.77, 4.0, 5.52, 5.56, 5.65, 9.35, 9.44, 9.48, 11, 12.23} ;

For k In {0:#AA[]-1}
  cosAA[]+=Cos(AA[k]); sinAA[]+=Sin(AA[k]);
EndFor

Function QuarterCircleCenters
// Computes the center of both quarter of circles 
// with ends {pX1, pY1} and {pX2, pY2}
  sgn = (pX2<pX1) ? -1 : 1 ;
  pXC1 = ( (pX1+pX2) - (pY2-pY1) * sgn ) / 2. ;
  pYC1 = ( (pY1+pY2) + (pX2-pX1) * sgn ) / 2.;
  pXC2 = ( (pX1+pX2) + (pY2-pY1) * sgn ) / 2. ;
  pYC2 = ( (pY1+pY2) - (pX2-pX1) * sgn ) / 2.;
Return

// definition of the slot contour points
pntSlot[]+=newp; Point(newp)={rS1*cosAA[2], rS1*sinAA[2], 0., pS1};
pntSlot[]+=newp; Point(newp)={rS2*cosAA[3], rS2*sinAA[3], 0., pS3};
pntSlot[]+=newp; Point(newp)={rS3*cosAA[1], rS3*sinAA[1], 0., pS3};
pX1 = rS5*cosAA[0]; pY1 = rS5*sinAA[0];
pX2 = rS6*cosAA[4]; pY2 = rS6*sinAA[4]; 
pntSlot[]+=newp; Point(newp)={ pX1, pY1, 0., pS3};
pntSlot[]+=newp; Point(newp)={ pX2, pY2, 0., pS3};
Call QuarterCircleCenters;
pntSlot[]+=newp; Point(newp)={ pXC1, pYC1, 0., pS3};

pX1 = rS6*cosAA[5]; pY1 = rS6*sinAA[5];
pX2 = rS5*cosAA[9]; pY2 = rS5*sinAA[9];
plusorminus = -1; // choose the correct center out of 2
pntSlot[]+=newp; Point(newp)={ pX1, pY1, 0., pS3};
pntSlot[]+=newp; Point(newp)={ pX2, pY2, 0., pS3};
Call QuarterCircleCenters;
pntSlot[]+=newp; Point(newp)={ pXC2, pYC2, 0., pS3};
pntSlot[]+=newp; Point(newp)={rS3*cosAA[8], rS3*sinAA[8], 0., pS3}; 
pntSlot[]+=newp; Point(newp)={rS2*cosAA[6], rS2*sinAA[6], 0., pS3}; 
pntSlot[]+=newp; Point(newp)={rS1*cosAA[7], rS1*sinAA[7], 0., pS1}; 

// air slot 1
linASlot[]+=newl ; Line(newl)={pntSlot[0], pntSlot[1]};
linASlot[]+=newl ; Line(newl)={pntSlot[1], pntSlot[2]};
linASlot[]+=newl ; Circle(newl)={pntSlot[2], cen, pntSlot[9]};
linASlot[]+=newl ; Line(newl)={pntSlot[9], pntSlot[10]};
linASlot[]+=newl ; Line(newl)={pntSlot[10], pntSlot[11]};
linASlot[]+=newl ; Circle(newl)={pntSlot[11], cen, pntSlot[0]};

Line Loop(newll) = {linASlot[]};
sairslot[] += news ; Plane Surface(sairslot[0]) = {newll-1};

// coil slot 1
linSlot[]+=newl ; Line(newl)={pntSlot[2], pntSlot[3]};
linSlot[]+=newl ; Circle(newl)= {pntSlot[3], pntSlot[5], pntSlot[4]};
linSlot[]+=newl ; Line(newl)={pntSlot[4], pntSlot[6]};
linSlot[]+=newl ; Circle(newl)={pntSlot[6], pntSlot[8],pntSlot[7]};
linSlot[]+=newl ; Line(newl)={pntSlot[7], pntSlot[9]};

Line Loop(newll) = {-linASlot[2],linSlot[]};
sslot[] = news ; Plane Surface(sslot[0]) = {newll-1};

// slots 2 and 3
A2 = 15*deg2rad;

pntSlot0[0] = pntSlot[0];
pntSlot1[0] = pntSlot[11];
For k In{1:2}
  pntSlot0[] += Rotate {{0, 0, 1}, {0, 0, 0}, A2} { Duplicata{Point{pntSlot0[k-1]};} };
  pntSlot1[] += Rotate {{0, 0, 1}, {0, 0, 0}, A2} { Duplicata{Point{pntSlot1[k-1]};} };
EndFor

For k In{1:2}
  sslot[] += Rotate {{0, 0, 1}, {0, 0, 0}, A2} { Duplicata{Surface{sslot[k-1]};} };
  sairslot[] += Rotate {{0, 0, 1}, {0, 0, 0}, A2} { Duplicata{Surface{sairslot[k-1]};} };
EndFor

cSlot[]+=newl; Circle(newl) = {pntS[0], cen, pntSlot[0]};
cSlot[]+=newl; Circle(newl) = {pntSlot1[0], cen, pntSlot0[1]};
cSlot[]+=newl; Circle(newl) = {pntSlot1[1], cen, pntSlot0[2]};
cSlot[]+=newl; Circle(newl) = {pntSlot1[2], cen, pntS[3]};

linesslot0[] = CombinedBoundary{ Surface{ sslot[0], sairslot[0] } ;};
linesslot1[] = CombinedBoundary{ Surface{ sslot[1], sairslot[1] } ;};
linesslot2[] = CombinedBoundary{ Surface{ sslot[2], sairslot[2] } ;};

Line Loop(newll) = {-lineMBstator[0],linS[0], cSlot[0],-linesslot0[{4}],
                    cSlot[1],-linesslot1[{9}],
                    cSlot[2],-linesslot2[{9}], cSlot[3], linS[6]};

sairgapS[0]=news; Plane Surface(sairgapS[0]) = {newll-1};

linesslot0[] -= linesslot0[{4}];
linesslot1[] -= linesslot1[{9}];
linesslot2[] -= linesslot2[{9}];

Line Loop(newll) = { cSlot[0], linesslot0[],
                     cSlot[1], linesslot1[],
                     cSlot[2], linesslot2[],
                     cSlot[3], -cirS[]};

sstator[0]=news; Plane Surface(sstator[0]) = -{newll-1};

// --------------------------------------------------------------------------
// Physical regions
// --------------------------------------------------------------------------

Physical Surface(STATOR_FE)     = {sstator[]};  // Stator
Physical Surface(STATOR_AIR)    = {sairslot[]}; // AirStator
Physical Surface(STATOR_AIRGAP) = {sairgapS[]}; 

NN = 3;
Physical Surface(STATOR_IND_AM) = {sslot[{0:NN-1:6}]};
Physical Surface(STATOR_IND_CP) = {sslot[{1:NN-1:6}]};
Physical Surface(STATOR_IND_BM) = {sslot[{2:NN-1:6}]};

Color Pink         {Surface{ sslot[{0:NN-1:6}] };} // A-
Color ForestGreen  {Surface{ sslot[{1:NN-1:6}] };} // C+
Color PaleGoldenrod{Surface{ sslot[{2:NN-1:6}] };} // B-

Physical Line(SURF_EXT) = linS[3]; 
Physical Line(STATOR_BND_A0) = linS[{0,2}];
Physical Line(STATOR_BND_A1) = linS[{4,6}] ;


lineMBstator[] += lineMBstatoraux[] ;
NN = NbrPolesTot/NbrPolesInModel;
For k In {1:NN}
  Physical Line(STATOR_BND_MOVING_BAND+k-1) = {lineMBstator[k-1]};
EndFor

// For nice visualisation...
linStator[] = CombinedBoundary{Surface{sstator[]};};
linSlot[] = CombinedBoundary{Surface{sslot[]};};

nicepos_stator[] += {linStator[],linSlot[] };

/*
lineMBstator[] += lineMBstatoraux[] ;
ns = #lineMBstator[]; // 8
NNN = NbrPolesTot/NbrPolesInModel; // 8
nns = ns/NNN ; // 1
For k In {1:NNN}
  kk= ((k*nns-1) > ns) ? ns-1 : k*nns-1 ;
  Physical Line(STATOR_BND_MOVING_BAND+k-1) = {lineMBstator[{(k-1)*nns:kk}]};
EndFor
*/
/* k1 = Floor[NbrPolesTot/NbrSect]; */
/* k2 = Ceil[NbrPolesTot/NbrSect]; */
/* If (k2 > k1) */
/*   Physical Line(STATOR_BND_MOVING_BAND+k2-1) = lineMBstator[{(k2-1)*nns:#lineMBstator[]-1}] ; */
/* EndIf */



