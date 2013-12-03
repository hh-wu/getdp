a  = 6.7/2 ;
ll = 1.66 ; kk = 4 ;
//ll = 1.1 ;  kk = 2 ;

x1=Sqrt(130*130-a*a);
x2=Sqrt((130-2.1/kk)*(130-2.1/kk)-a*a);
x3=Sqrt((130-2.1/ll)*(130-2.1/ll)-a*a);

dP=newp-1;
Point(dP+1)  = { x1*1e-3,-a*1e-3, 0,pslo/3};
Point(dP+2)  = {131.5e-3,-a*1e-3, 0,pslo};
Point(dP+3)  = {132.25e-3,-(a+0.75)*1e-3,0,pslo*1};
Point(dP+4)  = {133*1e-3,-a*1e-3,0,pslo*2};
Point(dP+5)  = {132.25e-3,-a*1e-3,0,psl};
Point(dP+6)  = {133e-3,0e-3,0,pslo*2};
Point(dP+7)  = {150e-3,-a*1e-3,0,pslo*3.};
Point(dP+8)  = {150e-3,0e-3,0,pslo*5};
Point(dP+9)  = {130e-3,0e-3,0,pMB*2};
Point(dP+10) = {195e-3,0.000e-3,0,pout};
Point(dP+11)  = {195e-3*Cos(Pi/60),-195e-3*Sin(Pi/60),0,pout};
Point(dP+12)  = {x2*1e-3,-a*1e-3,0,pMB};
Point(dP+13)  = {(130-2.1/kk)*1e-3*Cos(Pi/60),-(130-2.1/kk)*1e-3*Sin(Pi/60),0,pMB};
Point(dP+14)  = {(130-2.1/kk)*1e-3,0,0,pMB};
Point(dP+15)  = {130e-3*Cos(Pi/60),-130e-3*Sin(Pi/60),0,pMB*2};
Point(dP+16)  = {141e-3,0e-3,0,pslo*5};
Point(dP+17)  = {141e-3,-a*1e-3,0,pslo*5};

// Moving band
Point(dP+18)  = {(130-2.1/ll)*1e-3*Cos(Pi/60),-(130-2.1/ll)*1e-3*Sin(Pi/60),0,pMB*2};
Point(dP+19)  = {(130-2.1/ll)*1e-3,0,0,pMB*2};
Point(dP+20)  = {x3*1e-3,-a*1e-3,0,pMB*2};

Rotate {{0,0,1},{0,0,0}, StatorAngle_} { Point{dP+1:dP+20}; }

dR=newl-1;
Line(dR+1) = {dP+6,dP+16};
Line(dR+2) = {dP+8,dP+7};
Line(dR+3) = {dP+17,dP+4};
Line(dR+4) = {dP+4,dP+6};
Line(dR+5) = {dP+6,dP+9};
Line(dR+6) = {dP+1,dP+2};
Line(dR+7) = {dP+8,dP+10};
Circle(dR+8) = {dP+4,dP+5,dP+3};
Circle(dR+9) = {dP+3,dP+5,dP+2};
Line(dR+10) = {dP+13,dP+15};
Line(dR+11) = {dP+15,dP+11};
Circle(dR+12) = {dP+10,cen,dP+11};
Circle(dR+13) = {dP+9,cen,dP+1};
Circle(dR+14) = {dP+1,cen,dP+15};
Circle(dR+15) = {dP+14,cen,dP+12};
Circle(dR+16) = {dP+12,cen,dP+13};
Line(dR+17) = {dP+14,dP+9};
Line(dR+18) = {dP+17,dP+16};
Line(dR+19) = {dP+16,dP+8};
Line(dR+20) = {dP+7,dP+17};
Line(dR+21) = {dP+18,dP+13};
Line(dR+22) = {dP+19,dP+14};
Circle(dR+23) = {dP+18,cen,dP+20};
Circle(dR+24) = {dP+20,cen,dP+19};

// for physical lines
OuterStator_[] += dR+12;
StatorBoundary_[] += {dR+12,dR+8,dR+9,dR+2,dR+3,dR+4,dR+14,dR+20,dR+18,dR+6};
OuterMB_[] += {dR+23,dR+24};
StatorPeriod_Reference_[] += {dR+10,dR+11,dR+21};

Line Loop(newll) = {dR+19,dR+2,dR+20,dR+18};
dH=news; Plane Surface(dH) = -{newll-1};
StatorConductor1_[] += dH;
Line Loop(newll) = {dR+1,-dR-18,dR+3,dR+4};
dH=news; Plane Surface(dH) = -{newll-1};
StatorConductor2_[] += dH;

Line Loop(newll) = {dR+11,-dR-12,-dR-7,dR+2,dR+20,dR+3,dR+8,dR+9,-dR-6,dR+14};
dH=news; Plane Surface(dH) = {newll-1};
StatorIron_[] += dH;

Line Loop(newll) = {dR+6,-dR-9,-dR-8,dR+4,dR+5,dR+13};
dH=news; Plane Surface(dH) ={newll-1};
StatorSlotOpening_[] += dH;

Line Loop(newll) = {-dR-10,-dR-16,-dR-15,dR+17,dR+13,dR+14};
dH=news; Plane Surface(dH) = -{newll-1};
StatorAirgapLayer_[] += dH;
Line Loop(newll) = {dR+15,dR+16,-dR-21,dR+23,dR+24,dR+22};
dH=news; Plane Surface(dH) = -{newll-1};
StatorAirgapLayer_[] += dH;

Geometry.AutoCoherence = 0;

// For simplicity, I do the symmetry of some lines first
a = -Tan(StatorAngle_);
b = 1;
OuterStator_[] += Symmetry {a,b,0,0} { Duplicata{Line{OuterStator_[{0}]};} };
OuterMB_[] += Symmetry {a,b,0,0} { Duplicata{Line{OuterMB_[{0,1}]};} };

s1[] = Symmetry {a,b,0,0} { Duplicata{ Surface{StatorConductor1_[{0}]};} };
StatorConductor1_[] += s1[];
s2[] = Symmetry {a,b,0,0} { Duplicata{ Surface{StatorConductor2_[{0}]};} };
StatorConductor2_[] += s2[];
s3[] = Symmetry {a,b,0,0} { Duplicata{ Surface{StatorIron_[{0}]};} };
StatorIron_[] += s3[];
s4[] = Symmetry {a,b,0,0} { Duplicata{ Surface{StatorSlotOpening_[0]};} };
StatorSlotOpening_[] += s4[];
s5[] = Symmetry {a,b,0,0} { Duplicata{ Surface{StatorAirgapLayer_[{0,1}]};} };
StatorAirgapLayer_[] += s5[];
Reverse Surface {s1[], s2[], s3[], s4[], s5[]};

StatorPeriod_Dependent_[] = Rotate{{0, 0, 1}, {0, 0, 0}, NbrSectStator*2*StatorAngle_}
{Duplicata{Line{StatorPeriod_Reference_[{0:2}]};} };

For k In {1:NbrSectStator-1}
  OuterStator_[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*2*StatorAngle_} { Duplicata{ Line{OuterStator_[{0:1}]};} };
  OuterMB_[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*2*StatorAngle_} { Duplicata{ Line{OuterMB_[{0:3}]};} };

  StatorConductor1_[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*2*StatorAngle_} { Duplicata{ Surface{StatorConductor1_[{0:1}]};} };
  StatorConductor2_[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*2*StatorAngle_} { Duplicata{ Surface{StatorConductor2_[{0:1}]};} };
  StatorIron_[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*2*StatorAngle_} { Duplicata{ Surface{StatorIron_[{0,1}]};} };
  StatorSlotOpening_[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*2*StatorAngle_} { Duplicata{ Surface{StatorSlotOpening_[{0,1}]};} };
  StatorAirgapLayer_[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*2*StatorAngle_} { Duplicata{ Surface{StatorAirgapLayer_[{0:3}]};} };
EndFor

Geometry.AutoCoherence = 1;
Coherence;


//Completing the moving band
NN = #OuterMB_[];
For k In {1:NbrPolesTot-1}
  OuterMB_[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*NbrSectStator*2*StatorAngle_} { Duplicata{ Line{OuterMB_[{0:NN-1}]};} };
EndFor

// Stator winding
// PhaseBelt either 120 or 60

qq   = (PhaseBelt==120)?10:5;
off1 = 0 ;
off2 = (PhaseBelt==120)?10:25;
aa   = (PhaseBelt==120)?3:6;
bb   = (PhaseBelt==120)?3:0;

For f In {0:5}
  Con1[] ={} ;
  For i In {0:NbrSectStator-1}
    If (Fmod(Floor((i+off1)/qq),aa) == f)
      Con1[] += {StatorConductor1_[{2*i,2*i+1}]};
    EndIf
    If (Fmod(Floor((i+off2)/qq),aa) == f-bb)
      Con1[] += {StatorConductor2_[{2*i,2*i+1}]};
    EndIf
  EndFor
  If (#Con1[] > 0)
    Physical Surface(STATOR_COND+1+f) = {Con1[]};
    If (f==0) Color Red {Surface{Con1[]};} //+1
    EndIf
    If (f==1) Color SpringGreen {Surface{Con1[]};}//-3
    EndIf
    If (f==2) Color Orange {Surface{Con1[]};}//+2
    EndIf
    If (f==3) Color Pink {Surface{Con1[]};}//-1
    EndIf
    If (f==4) Color ForestGreen {Surface{Con1[]};}//+3
    EndIf
    If (f==5) Color Gold {Surface{Con1[]};}//-2
    EndIf
  EndIf
EndFor

Physical Surface(STATOR_FE) = {StatorIron_[]};
Physical Surface(STATOR_SLOT_OPENING) = {StatorSlotOpening_[]};
Physical Surface(STATOR_AIRGAP) = {StatorAirgapLayer_[]};

Physical Line(SURF_EXT) = {OuterStator_[]};
Physical Line(STATOR_PERIOD_REFERENCE) = StatorPeriod_Reference_[] ;
Physical Line(STATOR_PERIOD_DEPENDENT) = StatorPeriod_Dependent_[];

/*
// Before the moving band was always defined in sections equal to the number of total poles
For k In {0:NbrPolesTot-1}
  Physical Line(STATOR_BND_MOVING_BAND+k) = {OuterMB_[{4*k*NbrSectStator/NbrPolesInModel:4*(k+1)*NbrSectStator/NbrPolesInModel-1}]};
EndFor
*/

For k In {0:NbrPolesTot/NbrPolesInModel-1}
  Physical Line(STATOR_BND_MOVING_BAND+k) = {OuterMB_[{k*4*NbrSectStator:(k+1)*4*NbrSectStator-1}]};
EndFor

Color SteelBlue {Surface{StatorIron_[]};}
Color SkyBlue {Surface{StatorSlotOpening_[]};}
Color SkyBlue {Surface{StatorAirgapLayer_[]};}

nicepos_stator[] = {CombinedBoundary{Surface{StatorConductor1_[]};},
                    CombinedBoundary{Surface{StatorConductor2_[]};},
                    CombinedBoundary{Surface{StatorIron_[]};},
                    CombinedBoundary{Surface{StatorSlotOpening_[], StatorAirgapLayer_[]};} };




