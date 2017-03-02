Geometry.AutoCoherence = 0 ;

Y1 = Sqrt(R2*R2-d1*d1/4) ;
Y2 = Sqrt(Rsl*Rsl-d1*d1/4) ;
Y3 = Sqrt(R1*R1-d1*d1/4) ;
RX = Rsl*Cos(Pi/NbrSectTot) ;
RY = Rsl*Sin(Pi/NbrSectTot) ;
RR = (h2-Rsl*(1+1/Sin(Pi/NbrSectTot)))/(1-1/Sin(Pi/NbrSectTot));
RX2 = RR*Cos(Pi/NbrSectTot) ;
RY2 = RR*Sin(Pi/NbrSectTot) ;

lc_1=0.0005;
lc_2=0.0015;
lc_3=0.003;
lc_4=0.005;

a_x=0.000784;
a_y=0.04755;
b_x=0.002319;
b_y=0.067049;
c_x=0.000700;
c_y=0.070521;
d_x=0.0007;
d_y=0.075021;
e_x=0.00145;
e_y=0.075650;
f_x=0.001450;
f_y=0.077333;
g_x=0;
g_y=0.078550;
h_x=(0.053/2)*Sin(4.5*(Pi/180.));
h_y=(0.053/2)*Cos(4.5*(Pi/180.));
hh_x=(0.053/2)*Sin(0*(Pi/180.));
hh_y=(0.053/2)*Cos(0*(Pi/180.));
R_i=0.080-0.00065;
i_x=R_i*Sin(4.5*Pi/180);
i_y=R_i*Cos(4.5*Pi/180);

k_y=0.080-0.000650;
l_y=0.080-(0.000650*(2/3));
m_x=l_y*Sin(4.5*(Pi/180.));
m_y=l_y*Cos(4.5*(Pi/180.));
o_x=R_i*Sin(1.5*(Pi/180.));
o_y=R_i*Cos(1.5*(Pi/180.));
o_x=1.45e-3;
o_y=Sqrt(R_i^2-o_x^2);

oo_x=1.45e-3;
oo_y=Sqrt(l_y^2-o_x^2);


ii_x=l_y*Sin(4.5*Pi/180);
ii_y=l_y*Cos(4.5*Pi/180);

RotorPeriod_Reference_[] = {};
RotorPeriod_Dependent_[] = {};
OuterShaft_[] = {};
RotorBoundary_[] = {};
InnerMB_[]= {};

For i In {0:NbrSect-1}
  For j In {0:1}
    dP=newp-1;
    Point(dP+1) = {h_x,h_y,0,lc_4};
    Point(dP+2) = {hh_x,hh_y,0,lc_4};
    Point(dP+3) = {i_x,i_y,0, 0.7e-3};
    Point(dP+4) = {ii_x,ii_y,0, 0.7e-3};
    Point(dP+5) = {a_x,a_y,0, 2e-3};
    Point(dP+6) = {0,a_y,0,1e-3};
    Point(dP+7) = {b_x,b_y,0,lc_3*0.8};
    Point(dP+8) = {c_x,c_y,0,lc_2*0.8};
    Point(dP+9) = {0,c_y,0,lc_2};
    Point(dP+10) = {d_x,d_y,0,lc_2};
    Point(dP+11) = {0,d_y,0,lc_2};
    Point(dP+12) = {e_x,e_y,0,lc_2};
    Point(dP+13) = {f_x,f_y,0,lc_1};
    Point(dP+14) = {g_x,g_y,0,lc_1};
    Point(dP+15) = {0,R_i,0,0.3e-3};
    Point(dP+16) = {0,l_y,0,0.3e-3};
    Point(dP+17) = {o_x,o_y,0, 0.6e-3};
    Point(dP+18) = {oo_x,oo_y,0, 0.6e-3};

    For t In {dP+1:dP+18}
      Rotate {{0,0,1},{0,0,0}, RotorAngle_R+2*Pi*i/NbrSectTot} {Point{t};}
    EndFor

    If (j==1)
      For t In {dP+1:dP+18}
        Symmetry {Cos(RotorAngle_S+2*Pi*i/NbrSectTot), Sin(RotorAngle_S+2*Pi*i/NbrSectTot),0,0} {Point{t};}
      EndFor
    EndIf

    dR=newl-1;
    Line(dR+1) = {dP+16,dP+15};
    Line(dR+2) = {dP+15,dP+14};
    Line(dR+3) = {dP+14,dP+11};
    Line(dR+4) = {dP+14,dP+13};
    Line(dR+5) = {dP+13,dP+12};
    Line(dR+6) = {dP+12,dP+10};
    Line(dR+7) = {dP+4,dP+3};
    Line(dR+8) = {dP+11,dP+9};
    Line(dR+9) = {dP+10,dP+8};
    Line(dR+10) = {dP+8,dP+7};
    Line(dR+11) = {dP+7,dP+5};
    Line(dR+12) = {dP+5,dP+6};
    Line(dR+13) = {dP+6,dP+9};
    Line(dR+14) = {dP+6,dP+2};
    Line(dR+15) = {dP+3,dP+1};
    Circle(dR+16) = {dP+3,cen,dP+17};
    Circle(dR+17) = {dP+17,cen,dP+15};
    Circle(dR+18) = {dP+1,cen,dP+2};
    Circle(dR+19) = {dP+4,cen,dP+18};
    Circle(dR+20) = {dP+18,cen,dP+16};
    Line(dR+21) = {dP+13,dP+17};

    // physical lines
    OuterShaft_[] += dR+18;
    RotorBoundary_[] += {dR+4,dR+5,dR+6,dR+9,dR+10,dR+11,dR+12,dR+18,dR+16,dR+17};

    sgn = (j==0)?1.:-1.;// We need to change the sign only to construct the real MB
    InnerMB_[] += {sgn*(dR+19),sgn*(dR+20)};
    allpntsInnerMB[] = Boundary{ Line{Abs(InnerMB_[])}; };
    Characteristic Length{allpntsInnerMB[]} = pMB;

    If (NbrSectTot != NbrSect)
      If (i==0 && j==0)
        RotorPeriod_Reference_[] +=  {dR+7,dR+15};
        Physical Line(ROTOR_BND_A0) =  RotorPeriod_Reference_[] ;
      EndIf
      If (i == NbrSect-1  && j==1)
        RotorPeriod_Dependent_[] +=  {dR+7,dR+15};
        Physical Line(ROTOR_BND_A1) = RotorPeriod_Dependent_[] ;
      EndIf
    EndIf

    rev = (j ? -1 : 1);

    // rotor conductor
    Line Loop(newll) = {-dR-12,-dR-11,-dR-10,-dR-9,-dR-6,-dR-5,-dR-4,dR+3,dR+8,-dR-13};
    Plane Surface(news) = rev*{newll-1};
    RotorConductor_[] += news-1;

    // rotor iron
    Line Loop(newll) = {dR+16,-dR-21,dR+5,dR+6,dR+9,dR+10,dR+11,dR+12,dR+14,-dR-18,-dR-15};
    Plane Surface(news) = rev*{newll-1};
    RotorIron_[] += news-1;

    // rotor slot opening
    Line Loop(newll) = {dR+21,dR+17,dR+2,dR+4};
    Plane Surface(news) = rev*{newll-1};
    RotorSlotOpening_[] += news-1;

    // rotor airgap layer
    Line Loop(newll) = {-dR-1,-dR-20,-dR-19,dR+7,dR+16,dR+17};
    Plane Surface(news) = -rev*{newll-1};
    RotorAirgapLayer_[] += news-1;

  EndFor
EndFor


//Completing the moving band
NN = #InnerMB_[] ;
k1 = (NbrPolesInModel==1)?NbrPolesInModel:NbrPolesInModel+1;
For k In {k1:NbrPolesTot-1}
  InnerMB_[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*NbrSect*2*(Pi/NbrSectTot)} { Duplicata{ Line{InnerMB_[{0:NN-1}]};} };
EndFor

//----------------------------------------------------------------------------------------
// Physical regions
//----------------------------------------------------------------------------------------

For k In {0:NbrSect-1}
  Physical Surface(ROTOR_BAR+1+k) = RotorConductor_[{2*k:2*k+1}];
  Color Orchid { Surface{ RotorConductor_[{2*k, 2*k+1}]};}
EndFor

Physical Surface(ROTOR_FE) = {RotorIron_[]};
Physical Surface(ROTOR_SLOTOPENING) = {RotorSlotOpening_[]};
Physical Surface(ROTOR_AIRGAP) = {RotorAirgapLayer_[]};

Color SteelBlue {Surface{RotorIron_[]};}
If(Flag_OpenRotor)
  Color SkyBlue {Surface{RotorSlotOpening_[]};}
EndIf
If(!Flag_OpenRotor)
  Color SteelBlue {Surface{RotorSlotOpening_[]};}
EndIf
Color SkyBlue {Surface{RotorAirgapLayer_[]};}

Physical Line(SURF_INT) = {OuterShaft_[]};

For k In {0:NbrPolesTot/NbrPolesInModel-1}
  Physical Line(ROTOR_BND_MOVING_BAND+k) = {InnerMB_[{k*4*NbrSect:(k+1)*4*NbrSect-1}]};
EndFor

Coherence;
Geometry.AutoCoherence = 1 ;

//nicepos_rotor[] = {RotorBoundary_[],RotorPeriod_Reference_[],RotorPeriod_Dependent_[]};
If(Flag_OpenRotor)
  nicepos_rotor[] = CombinedBoundary{Surface{RotorIron_[]};};
  nicepos_rotor[] += CombinedBoundary{Surface{RotorSlotOpening_[], RotorAirgapLayer_[]};};
EndIf
If(!Flag_OpenRotor)
  nicepos_rotor[] = CombinedBoundary{Surface{RotorIron_[],RotorSlotOpening_[]};};
  nicepos_rotor[] += CombinedBoundary{Surface{RotorAirgapLayer_[]};};
EndIf
