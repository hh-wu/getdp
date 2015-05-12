Geometry.AutoCoherence = 0 ;

RR = (h2s-Rsls*(1+1/Sin(Pi/NbrSectStatorTot)))/(1-1/Sin(Pi/NbrSectStatorTot));
Y1 = Sqrt(R2s*R2s-d1s*d1s/4) ;
Y2 = Sqrt(RR*RR  -d1s*d1s/4) ;
Y3 = Sqrt(R1s*R1s-d1s*d1s/4) ;
RX = Rsls*Cos(Pi/NbrSectStatorTot) ;
RY = Rsls*Sin(Pi/NbrSectStatorTot) ;
RX2 = RR*Cos(Pi/NbrSectStatorTot) ;
RY2 = RR*Sin(Pi/NbrSectStatorTot) ;

lc_1=0.0004;
lc_2=0.001;
lc_3=0.003;
a_x=0.001500;
a_y=0.079986;
b_x=0.001500;
b_y=0.080900;
c_x=0.002658;
c_y=0.081380;
d_x=0.003664;
d_y=0.097100;
e_x=0.000006;
e_y=0.101000;
f_x=0.080*Sin(3.75*(Pi/180.));
f_y=0.080*Cos(3.75*(Pi/180.));
g_x=0.120*Sin((3.75*(Pi/180.)));
g_y=0.120*Cos((3.75*(Pi/180.)));
h_y=0.097334;
R_sup = Sqrt(d_x^2+(h_y-d_y)^2);
i_x=0.000000;
i_y=0.101000;
j_x=0.002762;
j_y=0.083000;
k_x=((0.080-(0.00065/3))*Sin(3.75*(Pi/180.)));
k_y=((0.080-(0.00065/3))*Cos(3.75*(Pi/180.)));
l_x=0.001500;
l_y=0.079986-0.00065/3;
m_x=((0.080-(0.00065/3))*Sin(0*(Pi/180.)));
m_y=((0.080-(0.00065/3))*Cos(0*(Pi/180.)));
n_x=0.080*Sin(0*(Pi/180.));
n_y=0.080*Cos(0*(Pi/180.));
o_x=0.120*Sin((0*(Pi/180.)));
o_y=0.120*Cos((0*(Pi/180.)));

StatorPeriod_Reference_[]={};
StatorPeriod_Dependent_[]={};
OuterStator_[]={};
StatorBoundary_[]={};
OuterMB_[]={};

For i In {0:NbrSectStator-1}
  For j In {0:1}
    dP=newp-1;
    Point(dP+1) = {a_x,a_y,0,lc_1};
    Point(dP+2) = {b_x,b_y,0,lc_1};
    Point(dP+3) = {c_x,c_y,0,lc_2*0.6};
    Point(dP+4) = {d_x,d_y,0,lc_3};
    Point(dP+5) = {0,h_y+R_sup,0,lc_3*0.5};
    Point(dP+6) = {g_x,g_y,0,lc_3*1.3};
    Point(dP+7) = {f_x,f_y,0,lc_1*1.4};
    Point(dP+8) = {0,h_y,0,lc_3};
    Point(dP+9) = {k_x,k_y,0,lc_1*1.4};
    Point(dP+10) = {l_x,l_y,0,lc_1};
    Point(dP+11) = {m_x,m_y,0,lc_1};
    Point(dP+12) = {n_x,n_y,0,lc_1};
    Point(dP+13) = {o_x,o_y,0,lc_3*1.3};
    Point(dP+14) = {j_x,j_y,0,lc_2};
    Point(dP+15) = {0,j_y,0,lc_2};

    For t In {dP+1:dP+15}
      Rotate {{0,0,1},{0,0,0}, StatorAngle_+2*Pi*i/NbrSectStatorTot} {Point{t};}
    EndFor

    If (j==1)
      For t In {dP+1:dP+15}
        Symmetry {Cos(StatorAngle_S+2*Pi*i/NbrSectStatorTot),Sin(StatorAngle_S+2*Pi*i/NbrSectStatorTot),0,0} {Point{t};}
      EndFor
    EndIf

    dR=newl-1;
    Line(dR+1) = {dP+7,dP+6};
    Line(dR+2) = {dP+10,dP+1};
    Line(dR+3) = {dP+1,dP+2};
    Line(dR+4) = {dP+2,dP+3};
    Line(dR+5) = {dP+3,dP+14};
    Line(dR+6) = {dP+14,dP+4};
    Line(dR+7) = {dP+11,dP+12};
    Line(dR+8) = {dP+12,dP+15};
    Line(dR+9) = {dP+15,dP+8};
    Line(dR+10) = {dP+8,dP+5};
    Line(dR+11) = {dP+5,dP+13};
    Line(dR+12) = {dP+15,dP+14};
    Circle(dR+13) = {dP+6,cen,dP+13};
    Circle(dR+14) = {dP+4,dP+8,dP+5};
    Circle(dR+15) = {dP+9,cen,dP+10};
    Circle(dR+16) = {dP+10,cen,dP+11};
    Circle(dR+17) = {dP+7,cen,dP+1};
    Circle(dR+18) = {dP+1,cen,dP+12};
    Line(dR+19) = {dP+9,dP+7};

    // physical lines
    OuterStator_[] += dR+13;
    StatorBoundary_[] += {dR+3,dR+4,dR+5,dR+6,dR+13,dR+14,dR+17,dR+12};

    sgn = (j==0)?1:-1;
    OuterMB_[] += {sgn*(dR+15),sgn*(dR+16)};

    If (NbrSectStatorTot != NbrSectStator)
      If (i==0 && j==0)
        StatorPeriod_Reference_[] += {dR+1,dR+19};
      EndIf
      If (i==NbrSectStator-1  && j==1)
        StatorPeriod_Dependent_[] += {dR+1,dR+19};
      EndIf
    EndIf

    rev = (j ? -1 : 1);

    Line Loop(newll) = {dR+6,dR+14,-dR-10,-dR-9,dR+12};
    dH=news; Plane Surface(dH) = rev*{newll-1};
    StatorConductor_[2*i+j] = dH;

    Line Loop(newll) = {dR+3,dR+4,dR+5,dR+6,dR+14,dR+11,-dR-13,-dR-1,dR+17};
    dH=news; Plane Surface(dH) = -rev*{newll-1};
    StatorIron_[2*i+j] = dH;

    Line Loop(newll) = {-dR-12,-dR-8,-dR-18,dR+3,dR+4,dR+5};
    dH=news; Plane Surface(dH) = rev*{newll-1};
    StatorSlotOpening_[2*i+j] = dH;

    Line Loop(newll) = {-dR-7,dR+17,dR+18,-dR-16,-dR-15,dR+19};
    dH=news; Plane Surface(dH) = rev*{newll-1};
    StatorAirgapLayer_[2*i+j] = dH;

  EndFor
EndFor

qq=4;
For f In {0:5}
  Con[]={};
  For i In {0:NbrSectStator/qq-1}
    If (Fmod(i,6) == f)
      For j In {0:qq-1}
        Con[] += {StatorConductor_[{2*i*qq+2*j,2*i*qq+2*j+1}]};
      EndFor
    EndIf
  EndFor
  If (#Con[] > 0)
    Physical Surface(STATOR_IND+1+f) = {Con[]};
    If (f == 0) Color Red {Surface{Con[]};}
    EndIf
    If (f == 1) Color SpringGreen {Surface{Con[]};}
    EndIf
    If (f == 2) Color Gold {Surface{Con[]};}
    EndIf
    If (f == 3) Color Pink {Surface{Con[]};}
    EndIf
    If (f == 4) Color ForestGreen {Surface{Con[]};}
    EndIf
    If (f == 5) Color PaleGoldenrod {Surface{Con[]};}
    EndIf
  EndIf
EndFor


//Completing the moving band
NN = #OuterMB_[] ;
k1 = (NbrPolesInModel==1)?NbrPolesInModel:NbrPolesInModel+1;
For k In {k1:NbrPolesTot-1}
  OuterMB_[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*NbrSectStator*2*StatorAngle_} { Duplicata{ Line{OuterMB_[{0:NN-1}]};} };
EndFor

//----------------------------------------------------------------------------------------
// Physical regions
//----------------------------------------------------------------------------------------
Physical Surface(STATOR_FE) = {StatorIron_[{0:NbrSectStator*2-1}]};
Physical Surface(STATOR_SLOTOPENING) = {StatorSlotOpening_[{0:NbrSectStator*2-1}]};
Physical Surface(STATOR_AIRGAP) = {StatorAirgapLayer_[{0:NbrSectStator*2-1}]};

Color SteelBlue { Surface{StatorIron_[{0:NbrSectStator*2-1}]}; }
Color SkyBlue   { Surface{StatorSlotOpening_[{0:NbrSectStator*2-1}]};
  Surface{StatorAirgapLayer_[{0:NbrSectStator*2-1}]};}

Physical Line(STATOR_BND_A0) = StatorPeriod_Reference_[];
Physical Line(STATOR_BND_A1) = StatorPeriod_Dependent_[];

Physical Line(SURF_EXT) = {OuterStator_[]};

/*
For k In {0:NbrPolesTot-1}
  Physical Line(STATOR_BND_MOVING_BAND+k) = {OuterMB_[{k*4*NbrSectStator/NbrPolesInModel:(k+1)*4*NbrSectStator/NbrPolesInModel-1}]};
EndFor
*/

For k In {0:NbrPolesTot/NbrPolesInModel-1}
  Physical Line(STATOR_BND_MOVING_BAND+k) = {OuterMB_[{k*4*NbrSectStator:(k+1)*4*NbrSectStator-1}]};
EndFor

//nicepos_stator[] += {StatorBoundary_[],StatorPeriod_Reference_[],StatorPeriod_Dependent_[]};

Coherence;
Geometry.AutoCoherence = 1 ;

nicepos_stator[] = CombinedBoundary{Surface{StatorIron_[]};};
nicepos_stator[] += CombinedBoundary{Surface{StatorSlotOpening_[],StatorAirgapLayer_[]};};
