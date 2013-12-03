Geometry.AutoCoherence = 0 ; // Should all duplicate entities be automatically removed?

// Characteristic lengths
p  = mm*12*0.05*1.3;

Characteristic Length {cen} = 2*p ;

dPr[] = {} ;
dPr[]+=newp ; Point(newp) = {0, rR1, 0, p*2};
dPr[]+=newp ; Point(newp) = {rR1*Sin(Pi/8), rR1*Cos(Pi/8), 0.,  p*2};
dPr[]+=newp ; Point(newp) = {rR3*Sin(Pi/8), rR3*Cos(Pi/8), 0.,  p*0.5};
dPr[]+=newp ; Point(newp) = {wrR3, Sqrt(rR3*rR3-wrR3*wrR3), 0., p*0.3};

dPr[]+=newp ; Point(newp) = {wrR3, rR2, 0., p*0.3};
dPr[]+=newp ; Point(newp) = {wrR2, rR2, 0., p*0.4};
dPr[]+=newp ; Point(newp) = {0.,   rR2, 0., p};
dPr[]+=newp ; Point(newp) = {0.,   rB0, 0, p*0.7};
dPr[]+=newp ; Point(newp) = {wrR2, Sqrt(rB0*rB0-wrR2*wrR2), 0., p*0.3};
dPr[]+=newp ; Point(newp) = {rB0*Sin(Pi/8), rB0*Cos(Pi/8),  0., p*0.5};
dPr[]+=newp ; Point(newp) = {rB1*Sin(Pi/8), rB1*Cos(Pi/8), 0., p*0.5};
dPr[]+=newp ; Point(newp) = {rB1/rB0*wrR2, rB1/rB0*Sqrt(rB0*rB0-wrR2*wrR2), 0., p*0.3};
dPr[]+=newp ; Point(newp) = {0., rB1, 0., p*0.5};

For t In {0:#dPr[]-1}
  Rotate {{0,0,1},{0,0,0}, RotorAngle_R} {Point{dPr[t]};}
EndFor

dRr[]={};
dRr[]+=newl ; Line(newl) = {dPr[0], cen};
dRr[]+=newl ; Line(newl) = {cen, dPr[1]};
dRr[]+=newl ; Line(newl) = {dPr[0], dPr[6]};
dRr[]+=newl ; Line(newl) = {dPr[1], dPr[2]};
dRr[]+=newl ; Line(newl) = {dPr[2], dPr[9]};
dRr[]+=newl ; Line(newl) = {dPr[9], dPr[10]};
dRr[]+=newl ; Line(newl) = {dPr[5], dPr[8]};
dRr[]+=newl ; Line(newl) = {dPr[6], dPr[5]};
dRr[]+=newl ; Line(newl) = {dPr[6], dPr[7]};
dRr[]+=newl ; Line(newl) = {dPr[7], dPr[12]};
dRr[]+=newl ; Line(newl) = {dPr[3], dPr[4]};
dRr[]+=newl ; Circle(newl) = {dPr[8], cen, dPr[7]};
dRr[]+=newl ; Circle(newl) = {dPr[9], cen, dPr[8]};
dRr[]+=newl ; Circle(newl) = {dPr[10], cen, dPr[11]};
dRr[]+=newl ; Circle(newl) = {dPr[11], cen, dPr[12]};
dRr[]+=newl ; Circle(newl) = {dPr[1], cen, dPr[0]};
dRr[]+=newl ; Circle(newl) = {dPr[2], cen, dPr[3]};
dRr[]+=newl ; Line(newl) = {dPr[5], dPr[4]};

dRr[]+=newl ; Line(newl) = {dPr[5], dPr[4]};
dRr[]+=newl ; Circle(newl) = {dPr[2], cen, dPr[3]};

RotorPeriod_Reference_[] =  {dRr[{1,3:5}]};

//magnet
Line Loop(newll) = {-dRr[8],dRr[{7,6,11}]};
Magnet_[] += news; Plane Surface(news) ={newll-1};

// rotor iron
Line Loop(newll) = {dRr[17], -dRr[{10,16,3}], dRr[{15,2,7}] };
RotorIron_[] += news; Plane Surface(news) = -{newll-1};

// rotor shaft
Line Loop(newll) = {dRr[{15,0,1}]};
RotorShaft_[] += news; Plane Surface(news) = {newll-1};
OuterShaft_[] += dRr[15];

// rotor air
Line Loop(newll) = {dRr[12], -dRr[6], dRr[17], -dRr[{10,16}], dRr[4]};
RotorAir_[] += news; Plane Surface(news) = {newll-1};

// rotor airgap layer
Line Loop(newll) =  {dRr[9], -dRr[{14,13,5}], dRr[{12,11}]};
RotorAirgapLayer_[] += news; Plane Surface(news) = -{newll-1};

InnerMB_[] += {dRr[{13,14}]} ; // for moving band rotor side

// For simplicity: rotating the lines before the surfaces.
// Otherwise, you may loose them when surface boundaries coincide.
// You could, of course, recover them after from the surfaces but it is a bit trickier... :-)
RotorPeriod_Dependent_[] += Rotate {{0, 0, 1}, {0, 0, 0}, 2*Pi*NbrPolesInModel/NbrPolesTot} { Duplicata{ Line{RotorPeriod_Reference_[]};} };
OuterShaft_[] += Symmetry {Cos(RotorAngle_S),Sin(RotorAngle_S),0,0} { Duplicata{Line{OuterShaft_[0]};} };
aux[] = Symmetry {Cos(RotorAngle_S),Sin(RotorAngle_S),0,0} { Duplicata{Line{InnerMB_[{0,1}]};} };
InnerMB_[] += -aux[{1,0}];

s1[] = Symmetry {Cos(RotorAngle_S),Sin(RotorAngle_S),0,0} { Duplicata{Surface{Magnet_[0]};} };
Magnet_[] += s1[];
s2[] = Symmetry {Cos(RotorAngle_S),Sin(RotorAngle_S),0,0} { Duplicata{Surface{RotorIron_[0]};} };
RotorIron_[] += s2[];
s3[] = Symmetry {Cos(RotorAngle_S),Sin(RotorAngle_S),0,0} { Duplicata{Surface{RotorShaft_[0]};} };
RotorShaft_[] += s3[];
s4[] = Symmetry {Cos(RotorAngle_S),Sin(RotorAngle_S),0,0} { Duplicata{Surface{RotorAir_[0]};} };
RotorAir_[] += s4[];
s5 = Symmetry {Cos(RotorAngle_S),Sin(RotorAngle_S),0,0} { Duplicata{Surface{RotorAirgapLayer_[0]};} };
RotorAirgapLayer_[] += s5[];
Reverse Surface {s1[],s2[],s3[],s4[],s5[]};

Geometry.AutoCoherence = 1 ;
Coherence;

nn = #InnerMB_[];
For i In {1:NbrPolesTot-1}
  InnerMB_[] += Rotate {{0, 0, 1}, {0, 0, 0}, i*Pi/4} { Duplicata{Line{InnerMB_[{0:nn-1}]};} };
EndFor

For i In {1:NbrSect-1}
  OuterShaft_[] += Rotate {{0, 0, 1}, {0, 0, 0}, 2*Pi*i/NbrSectTot} { Duplicata{ Line{OuterShaft_[{0,1}]};} };

  Magnet_[] += Rotate {{0, 0, 1}, {0, 0, 0}, 2*Pi*i/NbrSectTot} { Duplicata{ Surface{Magnet_[{0,1}]};} };
  RotorIron_[] += Rotate {{0, 0, 1}, {0, 0, 0}, 2*Pi*i/NbrSectTot} { Duplicata{ Surface{RotorIron_[{0,1}]};} };
  RotorShaft_[] += Rotate {{0, 0, 1}, {0, 0, 0}, 2*Pi*i/NbrSectTot} { Duplicata{ Surface{RotorShaft_[{0,1}]};} };
  RotorAir_[] += Rotate {{0, 0, 1}, {0, 0, 0}, 2*Pi*i/NbrSectTot} { Duplicata{ Surface{RotorAir_[{0,1}]};} };
  RotorAirgapLayer_[] += Rotate {{0, 0, 1}, {0, 0, 0}, 2*Pi*i/NbrSectTot} { Duplicata{ Surface{RotorAirgapLayer_[{0,1}]};} };
EndFor

//----------------------------------------------------------------------------------------------------
// Physical regions
//----------------------------------------------------------------------------------------------------

Physical Surface(ROTOR_FE)     = {RotorIron_[]};
Physical Surface(ROTOR_SHAFT)  = {RotorShaft_[]}; // Not used: BC at surf_shaft
Physical Surface(ROTOR_AIR)    = {RotorAir_[]};
Physical Surface(ROTOR_AIRGAP) = {RotorAirgapLayer_[]};

For i In {0:NbrSect-1}
  Physical Surface(ROTOR_MAGNET+i) = {Magnet_[{2*i:2*i+1}]};
EndFor

RotorBoundary_[] = CombinedBoundary{ Surface{RotorIron_[], Magnet_[]}; };
Physical Line(ROTOR_BND)       = {RotorBoundary_[]};
Physical Line(SURF_INT) = {OuterShaft_[]};

nn = #InnerMB_[] ;
nnp = nn/(NbrPolesTot/NbrSect) ;
For i In {1:Ceil[NbrPolesTot/NbrSect]}
  ii= ((i*nnp-1) > nn) ? nn-1 : i*nnp-1 ;
  Physical Line(ROTOR_BND_MOVING_BAND+i-1) = {InnerMB_[{(i-1)*nnp:ii}]};
EndFor

If(NbrPolesInModel!=NbrPolesTot)
Physical Line(ROTOR_BND_A0) = {RotorPeriod_Reference_[]};
Physical Line(ROTOR_BND_A1) = {RotorPeriod_Dependent_[]};
EndIf


linMagnet[] = CombinedBoundary{ Surface{Magnet_[]};};
nicepos_rotor[] += {RotorBoundary_[], linMagnet[]};

Color SteelBlue    {Surface{RotorIron_[]};}
Color Orchid {Surface{Magnet_[{0:#Magnet_[]-1:4, 1:#Magnet_[]-1:4}]};}
If(#Magnet_[]>2)
Color Purple {Surface{Magnet_[{2:#Magnet_[]-1:4,3:#Magnet_[]-1:4}]};}
EndIf
Color SkyBlue   {Surface{RotorAir_[],RotorShaft_[],RotorAirgapLayer_[]};}


