Geometry.AutoCoherence = 0 ; // Should all duplicate entities be automatically removed?

// some characteristic lengths...
//----------------------------------------
pslo = mm * 0.3*2/2/1.5; // slot opening
psl  = mm * 1.2; // upper part slot
pout = mm * 1.9; // outer radius
pMB  = mm * 0.2 * 2/2; // MB
//----------------------------------------

dPs[] = {} ;
dPs[]+=newp ; Point(newp) = {0, rRext, 0, pMB};
dPs[]+=newp ; Point(newp) = {ws1, Sqrt(rRext*rRext-ws1*ws1),  0., pslo};
dPs[]+=newp ; Point(newp) = {ws1, rS1-Tan(Pi/8)*(wsS1-ws1), 0., pMB*1};
dPs[]+=newp ; Point(newp) = {wsS1, rS1, 0., pMB*1.5};
dPs[]+=newp ; Point(newp) = {wsS1 + (rS2-rS1)*Tan(Pi/24), rS2, 0., psl/1.5};
dPs[]+=newp ; Point(newp) = {0.,   rS2, 0., psl/1.5};
dPs[]+=newp ; Point(newp) = {wsS3, rS3, 0.,pslo*1.5};
dPs[]+=newp ; Point(newp) = {wsS3+Cos(Pi/24)*ws3, rS4-ws3*(1+Sin(Pi/24)),0,psl};

dPs[]+=newp ; Point(newp) = {wsS3, rS4, 0., psl};
dPs[]+=newp ; Point(newp) = {0.,   rS4, 0., psl};
dPs[]+=newp ; Point(newp) = {rRext*Sin(Pi/24), rRext*Cos(Pi/24), 0, pMB*2};
dPs[]+=newp ; Point(newp) = {rSext*Sin(Pi/24), rSext*Cos(Pi/24), 0, pout};
dPs[]+=newp ; Point(newp) = {0., rSext, 0., pout};
// Moving band
dPs[]+=newp ; Point(newp) = {rB2*Sin(Pi/24), rB2*Cos(Pi/24), 0., pMB};
dPs[]+=newp ; Point(newp) = {ws1, Sqrt(rB2*rB2-ws1*ws1), 0., pMB};
dPs[]+=newp ; Point(newp) = {0., rB2, 0.,pMB};


For t In {0:#dPs[]-1}
  Rotate {{0,0,1},{0,0,0}, StatorAngle_} {Point{dPs[t]};}
EndFor

dRs[]={};
dRs[]+=newl; Line(newl) = {dPs[5],dPs[4]};
dRs[]+=newl; Line(newl) = {dPs[4],dPs[7]};
dRs[]+=newl; Line(newl) = {dPs[3],dPs[4]};
dRs[]+=newl; Line(newl) = {dPs[9],dPs[8]};
dRs[]+=newl; Line(newl) = {dPs[12],dPs[9]};
dRs[]+=newl; Line(newl) = {dPs[9],dPs[5]};
dRs[]+=newl; Line(newl) = {dPs[5],dPs[0]};
dRs[]+=newl; Line(newl) = {dPs[3],dPs[2]};
dRs[]+=newl; Line(newl) = {dPs[2],dPs[1]};
dRs[]+=newl; Line(newl) = {dPs[10],dPs[11]};

dRs[]+=newl; Circle(newl) = {dPs[11],cen,dPs[12]};
dRs[]+=newl; Circle(newl) = {dPs[7],dPs[6],dPs[8]};
dRs[]+=newl; Circle(newl) = {dPs[10],cen,dPs[1]};
dRs[]+=newl; Circle(newl) = {dPs[1],cen,dPs[0]};
dRs[]+=newl; Line(newl) = {dPs[0],dPs[15]};
dRs[]+=newl; Line(newl) = {dPs[13],dPs[10]};
dRs[]+=newl; Circle(newl) = {dPs[13],cen,dPs[14]};
dRs[]+=newl; Circle(newl) = {dPs[14],cen,dPs[15]};


Line Loop(newll) = {dRs[{1,11}],-dRs[3],dRs[{5,0}]};
StatorConductor_[0] = news; Plane Surface(news) = {newll-1};

Line Loop(newll) = {-dRs[{8,7}],dRs[{2,1,11}],-dRs[{3,4,10,9}],dRs[12]};
StatorIron_[0] = news; Plane Surface(news) = -{newll-1};
OuterStator_[] = {dRs[10]};
StatorPeriodReference_[] = {dRs[{9,15}]};

Line Loop(newll) = {-dRs[6],dRs[0],-dRs[2],dRs[{7,8,13}]};
StatorSlotOpening_[0] = news; Plane Surface(news) = -{newll-1};

Line Loop(newll) = {dRs[{12,13,14}],-dRs[{17,16}],dRs[15]};
StatorAirgapLayer_[0] = news; Plane Surface(news) = {newll-1};

OuterMB_[] = {dRs[{16,17}]}; // for moving band

// For simplicity: rotating first the lines you need for physical stuff
OuterStator_[] += Symmetry {Cos(StatorAngle_S),Sin(StatorAngle_S),0,0} { Duplicata{Line{OuterStator_[{0}]};} };
aux[] = Symmetry {Cos(StatorAngle_S),Sin(StatorAngle_S),0,0} { Duplicata{Line{OuterMB_[{0,1}]};} }; // for MB
OuterMB_[] += -aux[{1,0}];
StatorPeriodDependent_[] += Rotate {{0, 0, 1}, {0, 0, 0}, 2*Pi*NbrPolesInModel/NbrPolesTot} { Duplicata{ Line{StatorPeriodReference_[{0,1}]};} };

s1[] = Symmetry {Cos(StatorAngle_S),Sin(StatorAngle_S),0,0} { Duplicata{Surface{StatorConductor_[0]};} };
StatorConductor_[] += s1[];
s2[] = Symmetry {Cos(StatorAngle_S),Sin(StatorAngle_S),0,0} { Duplicata{Surface{StatorIron_[0]};} };
StatorIron_[] += s2[];
s3[] = Symmetry {Cos(StatorAngle_S),Sin(StatorAngle_S),0,0} { Duplicata{Surface{StatorSlotOpening_[0]};} };
StatorSlotOpening_[] += s3[];
s4[] = Symmetry {Cos(StatorAngle_S),Sin(StatorAngle_S),0,0} { Duplicata{Surface{StatorAirgapLayer_[0]};} };
StatorAirgapLayer_[] += s4[];
Reverse Surface { s1[], s2[], s3[], s4[]};

For i In {1:NbrSectStator-1}
  OuterStator_[] += Rotate {{0, 0, 1}, {0, 0, 0}, i*Pi/12} { Duplicata{ Line{OuterStator_[{0,1}]};} };// for outer stator
  OuterMB_[] += Rotate {{0, 0, 1}, {0, 0, 0}, i*Pi/12} { Duplicata{ Line{OuterMB_[{0:3}]};} };// for MB

  StatorConductor_[] += Rotate {{0, 0, 1}, {0, 0, 0}, i*Pi/12} { Duplicata{ Surface{StatorConductor_[{0,1}]};} };
  StatorIron_[] += Rotate {{0, 0, 1}, {0, 0, 0}, i*Pi/12} { Duplicata{ Surface{StatorIron_[{0,1}]};} };
  StatorSlotOpening_[] += Rotate {{0, 0, 1}, {0, 0, 0}, i*Pi/12} { Duplicata{ Surface{StatorSlotOpening_[{0,1}]};} };
  StatorAirgapLayer_[] += Rotate {{0, 0, 1}, {0, 0, 0}, i*Pi/12} { Duplicata{ Surface{StatorAirgapLayer_[{0,1}]};} };
EndFor

Geometry.AutoCoherence = 1 ;
Coherence;

// Full Moving band
nn = #OuterMB_[] ;
For i In {1:NbrPolesTot-1}
  OuterMB_[] += Rotate {{0, 0, 1}, {0, 0, 0}, i*Pi/4} { Duplicata{Line{OuterMB_[{0:nn-1}]};} };
EndFor

// -------------------------------------------------------------------------------
// -------------------------------------------------------------------------------
// Physical regions
// -------------------------------------------------------------------------------
// -------------------------------------------------------------------------------

Physical Surface(STATOR_FE) = {StatorIron_[]};
Physical Surface(STATOR_AIR) = {StatorSlotOpening_[]};
Physical Surface(STATOR_AIRGAP) = {StatorAirgapLayer_[]};

/*
For k In {0:NbrSectStator-1}
  Physical Surface(STATOR_IND+k) = {StatorConductor_[{2*k,2*k+1}]};
EndFor
*/
NN = #StatorConductor_[];
Physical Surface(STATOR_IND_AM) = {StatorConductor_[{0:NN-1:12,1:NN-1:12}]};
Physical Surface(STATOR_IND_CP) = {StatorConductor_[{2:NN-1:12,3:NN-1:12}]};
Physical Surface(STATOR_IND_BM) = {StatorConductor_[{4:NN-1:12,5:NN-1:12}]};
Printf("NN %g NbrSectStator %g", NN, NbrSectStator);
If(NbrSectStator>3)
  Physical Surface(STATOR_IND_AP) = {StatorConductor_[{6:NN-1:12,7:NN-1:12}]};
  Physical Surface(STATOR_IND_CM) = {StatorConductor_[{8:NN-1:12,9:NN-1:12}]};
  Physical Surface(STATOR_IND_BP) = {StatorConductor_[{10:NN-1:12,11:NN-1:12}]};
EndIf

Color Pink          { Surface{ StatorConductor_[{0:NN-1:12,1:NN-1:12}]};} // A-
Color ForestGreen   { Surface{ StatorConductor_[{2:NN-1:12,3:NN-1:12}]};} // C+
Color PaleGoldenrod { Surface{ StatorConductor_[{4:NN-1:12,5:NN-1:12}]};} // B-
If (#StatorConductor_[]>=12)
Color Red       {Surface{ StatorConductor_[{6:NN-1:12,7:NN-1:12}] };} // A+
Color SpringGreen{Surface{ StatorConductor_[{8:NN-1:12,9:NN-1:12}] };} // C-
Color Gold {Surface{ StatorConductor_[{10:NN-1:12,11:NN-1:12}] };} // B+
EndIf



nn = #OuterMB_[] ;
nnp = nn/NbrPolesTot ; //Printf("%g %g",nn, nnp);
For k In {1:NbrPolesTot-1}
  kk= ((k*nnp-1)>nn)?nn-1:k*nnp-1 ;
  Physical Line(STATOR_BND_MOVING_BAND+k-1) = { OuterMB_[{(k-1)*nnp:kk}] };
EndFor

If(NbrPolesInModel!=NbrPolesTot)
  Physical Line(STATOR_BND_A0) = {StatorPeriodReference_[]};
  Physical Line(STATOR_BND_A1) = {StatorPeriodDependent_[]};
EndIf

Physical Line(SURF_EXT) = {OuterStator_[]};

StatorBnd_[] = CombinedBoundary{Surface{StatorIron_[]};} ;
StatorBndConductor_[] = CombinedBoundary{Surface{StatorConductor_[]};} ;
Physical Line(STATOR_BND) = {StatorBnd_[]};

nicepos_stator[] += {StatorBnd_[],StatorBndConductor_[]} ;

Color SteelBlue { Surface{StatorIron_[]}; }
Color SkyBlue { Surface{StatorSlotOpening_[], StatorAirgapLayer_[]}; }



