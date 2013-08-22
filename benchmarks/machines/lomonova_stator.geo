// -------------------------------------------------------------------------------
// Moving band == AirGap stator side
// -------------------------------------------------------------------------------
alpha_s = Pi/Z ;

pmbs[]+=newp ; Point(newp) = {rB2*Cos(alpha_s),  rB2*Sin(alpha_s), 0., pB1};
pmbs[]+=newp ; Point(newp) = {rB2*Cos(alpha_s), -rB2*Sin(alpha_s), 0., pB1};
lineMBstator[]+=newl; Circle(newl) = { pmbs[0], cen, pmbs[1]};

//--------------------------------------------------------------------------------
// Stator SPM
//--------------------------------------------------------------------------------
th2 = Atan2(bs1/2,rS2);
th3 = Atan2(bs2/2,rS3);
th4 = Atan2(bs3/2,rS4);

ps1[]+=newp ; Point(newp) = {rS1, 0, 0., pS1};
ps1[]+=newp ; Point(newp) = {rS1*Cos(th2), -rS1*Sin(th2),     0., pS1};
ps1[]+=newp ; Point(newp) = {rS1*Cos(alpha_s), -rS1*Sin(alpha_s), 0., pS1};
ps2[]+=newp ; Point(newp) = {rS2, 0, 0., pS2};
ps2[]+=newp ; Point(newp) = {rS2*Cos(th2), -rS2*Sin(th2), 0., pS2};
ps3[]+=newp ; Point(newp) = {rS3, 0, 0., pS3};
ps3[]+=newp ; Point(newp) = {rS3*Cos(th3), -rS3*Sin(th3), 0., pS3};
ps4[]+=newp ; Point(newp) = {rS4, 0, 0., pS4};
ps4[]+=newp ; Point(newp) = {rS4*Cos(th4), -rS4*Sin(th4), 0., pS4};
ps5[]+=newp ; Point(newp) = {rS5, 0, 0., pS5};
ps5[]+=newp ; Point(newp) = {rS5*Cos(alpha_s), -rS5*Sin(alpha_s), 0., pS5};

lns[]+=newl; Line(newl)   = {ps1[0], ps2[0]};
lns[]+=newl; Line(newl)   = {ps2[0], ps3[0]};
lns[]+=newl; Line(newl)   = {ps3[0], ps4[0]};
lns[]+=newl; Line(newl)   = {ps4[0], ps5[0]};
lns[]+=newl; Line(newl)   = {ps1[2], ps5[1]};

lns[]+=newl; Circle(newl) = {ps1[1], cen, ps1[2]};
lns[]+=newl; Circle(newl) = {ps1[0], cen, ps1[1]};
lns[]+=newl; Line(newl)   = {ps1[1], ps2[1]};
lns[]+=newl; Line(newl)   = {ps2[1], ps3[1]};
lns[]+=newl; Circle(newl) = {ps3[0], cen, ps3[1] };
lns[]+=newl; Line(newl)   = {ps3[1], ps4[1]};
lns[]+=newl; Circle(newl) = {ps4[0], cen, ps4[1] };
lns[]+=newl; Circle(newl) = {ps5[0], cen, ps5[1] };

lineInnerMBstator[] += lns[{5,6}] ;
surfout[]+= lns[12];

llslotair = newll; Line Loop(newll) = {lns[{6,7,8}], -lns[{9,1,0}]};
sslotair[]+=news ; Plane Surface(news) = llslotair ;
llcoil = newll ; Line Loop(newll) = {lns[{9,10}],-lns[{11,2}]};
scoil[]+=news ; Plane Surface(news) = llcoil ;
llstatoriron = newll ; Line Loop(newll) = {lns[{5,4}],-lns[{12,3}], lns[{11}], -lns[{10,8,7}]};
sstatoriron[]+=news ; Plane Surface(news) = llstatoriron ;

aux[] = Symmetry {0,1,0,0} { Duplicata{ Line{lineInnerMBstator[{0,1}]};} };
lineInnerMBstator[] += -aux[{1,0}];

surfout[] += Symmetry {0,1,0,0} { Duplicata{ Line{surfout[{0}]};} };

s1[] = Symmetry {0,1,0,0} { Duplicata{ Surface{sslotair[{0}]};} };
sslotair[] += s1[];
s2[] = Symmetry {0,1,0,0} { Duplicata{ Surface{scoil[{0}]};} };
scoil[] += s2[];
s3[] = Symmetry {0,1,0,0} { Duplicata{ Surface{sstatoriron[{0}]};} };
sstatoriron[] += s3[];
Reverse Surface{s1[], s2[], s3[]};

laux[] = Boundary{Surface{sstatoriron[1]};};
paux[] = Boundary{Line{laux[0]};};

lncutmb[] += newl ; Line(newl) = {pmbs[1], ps1[2]};
lncutmb[] += newl ; Line(newl) = {pmbs[0], paux[1]};

llmbstator[]+=newll; Line Loop (newll) = {-lineInnerMBstator[{0:3}], -lncutmb[1], lineMBstator[0], lncutmb[0]} ;
sstator_mb[] += news ; Plane Surface(news) = {llmbstator[]};

For k In {1:Z-1} // Keeping it complete, though not necessary
  lineMBstator[]+= Rotate {{0, 0, 1}, {0, 0, 0}, k*2*alpha_s} { Duplicata{Line{lineMBstator[0]};} };
EndFor

// lines for link constraint in case of symmetry
lineA0[] += {lns[{4}],lncutmb[0]} ;
lineA1[] += Rotate {{0, 0, 1}, {0, 0, 0}, (Z/SymmetryFactor)*2*alpha_s} { Duplicata{ Line{lineA0[{0:1}]};} };

For k In {1:Z/SymmetryFactor-1}
  lineInnerMBstator[]+= Rotate {{0, 0, 1}, {0, 0, 0}, k*2*alpha_s} { Duplicata{ Line{lineInnerMBstator[{0:3}]};} };
  surfout[]+= Rotate {{0, 0, 1}, {0, 0, 0}, k*2*alpha_s} { Duplicata{ Line{surfout[{0,1}]};} };

  sslotair[]+= Rotate {{0, 0, 1}, {0, 0, 0}, k*2*alpha_s} { Duplicata{ Surface{sslotair[{0,1}]};} };
  scoil[]+= Rotate {{0, 0, 1}, {0, 0, 0}, k*2*alpha_s} { Duplicata{ Surface{scoil[{0,1}]};} };
  sstatoriron[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*2*alpha_s} { Duplicata{ Surface{sstatoriron[{0,1}]};} };
  sstator_mb[]  += Rotate {{0, 0, 1}, {0, 0, 0}, k*2*alpha_s} { Duplicata{ Surface{sstator_mb[{0}]};} };
EndFor

allSurfaces[] = {sstatoriron[], sslotair[], sstator_mb[], scoil[]} ;
If(alpha_s!=0)
  StatorAngle   = alpha_s ;
  Rotate {{0,0,1},{0,0,0}, StatorAngle} {Surface{allSurfaces[]};} // Correcting position of stator
EndIf

// -------------------------------------------------------------------------------
// -------------------------------------------------------------------------------
// Physical regions
// -------------------------------------------------------------------------------
// -------------------------------------------------------------------------------

Physical Surface(STATOR_FE) = {sstatoriron[]};
Physical Surface(STATOR_AIR) = {sslotair[]};
Physical Surface(STATOR_AIRGAP) = {sstator_mb[]};


If(Flag_Type==0)
For k In {0:2*Z-1}
  Physical Surface(STATOR_IND+k) = {scoil[{k}]};
EndFor
EndIf
If(Flag_Type>0)
For k In {0:Z/SymmetryFactor-1}
  Physical Surface(STATOR_IND+k) = {scoil[{2*k,2*k+1}]};
EndFor
EndIf

If(Flag_Symmetry) //Lines for symmetry link
  Physical Line(STATOR_BND_A0) = lineA0[];
  Physical Line(STATOR_BND_A1) = lineA1[] ;
EndIf

Physical Line(SURF_EXT) = {surfout[]};

If(!Flag_Symmetry)
  Physical Line(STATOR_BND_MOVING_BAND) = {lineMBstator[]};
EndIf
If(Flag_Symmetry)
  ns =#lineMBstator[];
  nns = ns/SymmetryFactor ;
  For k In {1:SymmetryFactor}
    kk= ((k*nns-1) > ns) ? ns-1 : k*nns-1 ;
    Physical Line(STATOR_BND_MOVING_BAND+k-1) = {lineMBstator[{(k-1)*nns:kk}]};
  EndFor
EndIf



nicepos_stator[] += CombinedBoundary{Surface{sstatoriron[]};} ;
If(Flag_Type==0)
nicepos_stator[] += Boundary{Surface{scoil[]};} ;
EndIf
If(Flag_Type>0)
nicepos_stator[] += CombinedBoundary{Surface{scoil[]};} ;
EndIf



Color SteelBlue {Surface{sstatoriron[]};}
Color SkyBlue {Surface{sslotair[],sstator_mb[]};}

If(Flag_Type>0)
NN = (Flag_Symmetry)?NbrSectStator:NbrSectTotStator;
Color Red    {Surface{scoil[{0:2*NN-6:6, 1:2*NN-5:6}]};}
Color Green  {Surface{scoil[{2:2*NN-4:6, 3:2*NN-3:6}]};}
Color Yellow {Surface{scoil[{4:2*NN-2:6, 5:2*NN-1:6}]};}
EndIf
If(Flag_Type==0)
Color Red   {Surface{scoil[{17,0:4}]};}
Color Green {Surface{scoil[{5:10}]};}
Color Yellow {Surface{scoil[{11:16}]};}
EndIf


