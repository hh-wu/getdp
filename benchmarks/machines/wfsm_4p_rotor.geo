Geometry.AutoCoherence = 0 ; // Should all duplicate entities be automatically removed?

Y0=Sqrt(R0*R0-X*X);
Y1=Sqrt(R1*R1-X*X);
Y2=Sqrt(R2*R2-X*X);
Y3=Sqrt(R3*R3-X*X);
Y4=Sqrt(R4*R4-X*X);
Y5=Sqrt(R5*R5-X*X);

dP=newp-1;
Point(dP+1)  = {40*u, 0*u, 0*u, p*2};
Point(dP+2)  = {40*Cos(Pi/4) *u, 40*Sin(Pi/4) *u, 0 *u, p};
Point(dP+3)  = {55*Cos(Pi/4) *u, 55*Sin(Pi/4) *u, 0 *u, p};
Point(dP+4)  = {Sqrt(55*55-25*25) *u, 25 *u, 0 *u, p/2};
Point(dP+5)  = {51.9 *u, 25 *u, 0 *u, pc};
Point(dP+6)  = {51.9 *u, 50 *u, 0 *u, pc*2};
Point(dP+7)  = {105.9 *u, 62.5 *u, 0 *u, pc};
Point(dP+8)  = {105.9 *u, 25 *u, 0 *u, pc};
Point(dP+9)  = {110.9 *u, Y0, 0 *u, pMB*2};
Point(dP+10)  = {110.9 *u, 25 *u, 0 *u, pc/1.5};
Point(dP+11)  = {127.9 *u, 0 *u, 0 *u, pMB*4}; //6
Point(dP+12)  = {3 *u, 0 *u, 0 *u, p*0.3};
Point(dP+13)  = {125.73/1.4 *u, 125.73/1.4 *u, 0 *u, pMB*6};

Point(dP+14)  = {110.9 *u, Y1, 0 *u, pMB*2};
Point(dP+15)  = {110.9 *u, Y2, 0 *u, pMB*2};
Point(dP+16)  = {110.9 *u, Y3, 0 *u, pMB*4};
Point(dP+17)  = {R1 + 3 *u, 0 *u, 0*u, pMB*3};   //6
Point(dP+18)  = {R2 + 3 *u, 0 *u, 0*u, pMB*3};   //6
Point(dP+19)  = {R3 + 3 *u, 0 *u, 0*u, pMB*3};   //6
Point(dP+20)  = {R4 + 3 *u, 0 *u, 0*u, pMB*3};   //6
Point(dP+21)  = {R5 + 3 *u, 0 *u, 0*u, pMB*3};   //6
Point(dP+22)  = {110.9 *u, Y4, 0 *u, pMB*4};
Point(dP+23)  = {110.9 *u, Y5, 0 *u, pMB*4};

dR=newl-1;
Line(dR+1) = {dP+1,dP+21};
Line(dR+2) = {cen, dP+2};
Line(dR+3) = {dP+2,dP+3};
Line(dR+4) = {dP+5,dP+6};
Line(dR+5) = {dP+4,dP+5};
Line(dR+6) = {dP+5,dP+8};
Line(dR+7) = {dP+8,dP+10};
Line(dR+8) = {dP+19,dP+18};
Line(dR+9) = {dP+7,dP+8};
Line(dR+10) = {dP+6,dP+7};
Circle(dR+11) = {dP+11,dP+12,dP+9};
Circle(dR+12) = {dP+4,cen,dP+3};
Circle(dR+13) = {dP+1,cen,dP+2};
Line(dR+14) = {cen,dP+1};
Circle(dR+15) = {dP+9,dP+12,dP+13};
Line(dR+16) = {dP+3,dP+13};
Circle(dR+17) = {dP+17,dP+12,dP+14};
Circle(dR+18) = {dP+18,dP+12,dP+15};
Circle(dR+19) = {dP+19,dP+12,dP+16};
Line(dR+20) = {dP+18,dP+17};
Line(dR+21) = {dP+17,dP+11};
Line(dR+22) = {dP+10,dP+23};
Line(dR+23) = {dP+16,dP+15};
Line(dR+24) = {dP+15,dP+14};
Line(dR+25) = {dP+14,dP+9};
Circle(dR+26) = {dP+20,dP+12,dP+22};
Circle(dR+27) = {dP+21,dP+12,dP+23};
Line(dR+28) = {dP+21,dP+20};
Line(dR+29) = {dP+20,dP+19};
Line(dR+30) = {dP+23,dP+22};
Line(dR+31) = {dP+22,dP+16};

OuterShaft_[] += dR+13;
InnerMB_[] += {dR+11,dR+15};
RotorPeriod_Dependent_[] +=  {dR+2,dR+3,dR+16};

// conductor
Line Loop(newll) = {-dR-9,-dR-10,-dR-4,dR+6};
dH=news; Plane Surface(dH) ={newll-1};
RotorConductor_[] += dH;

// rotor iron
Line Loop(newll) = {dR+7,dR+22,-dR-27,-dR-1,dR+13,dR+3,-dR-12,dR+5,dR+6};
dH=news; Plane Surface(dH) = {newll-1};
RotorIron_[] += dH;
Line Loop(newll) = {-dR-18,-dR-8,dR+19,dR+23};
dH=news; Plane Surface(dH) = {newll-1};
RotorIron_[] += dH;
Line Loop(newll) = {dR+24,-dR-17,-dR-20,dR+18};
dH=news; Plane Surface(dH) = {newll-1};
RotorIron_[] += dH;
Line Loop(newll) = {dR+11,-dR-25,-dR-17,dR+21};
dH=news; Plane Surface(dH) = {newll-1};
RotorIron_[] += dH;
Line Loop(newll) = {-dR-19,-dR-29,dR+26,dR+31};
dH=news;  Plane Surface(dH) = {newll-1};
RotorIron_[] += dH;
Line Loop(newll) = {-dR-26,-dR-28,dR+27,dR+30};
dH=news;  Plane Surface(dH) = {newll-1};
RotorIron_[] += dH;

// rotor shaft
Line Loop(newll) = {-dR-2,dR+14,dR+13};
dH=news;  Plane Surface(dH) = {newll-1};
RotorShaft_[] += dH;

// rotor air
Line Loop(newll) = {dR+15,-dR-16,-dR-12,dR+5,dR+4,dR+10,dR+9,dR+7,dR+22,dR+30,dR+31,dR+23,dR+24,dR+25};
dH=news;  Plane Surface(dH) = {newll-1};
RotorAir_[] += dH;

// For simplicity, I do the symmetry and rotation of some lines first
OuterShaft_[] += Symmetry {0,1,0,0} { Duplicata{Line{OuterShaft_[{0}]};} };
InnerMB_[] += Symmetry {0,1,0,0} { Duplicata{Line{InnerMB_[{0,1}]};} };
RotorPeriod_Reference_[] = Rotate{{0, 0, 1}, {0, 0, 0}, -2*Pi/NbrPolesTot}
{Duplicata{Line{RotorPeriod_Dependent_[]};} };

NN = #RotorIron_[]-1;
RotorIron_[] += Symmetry {0,1,0,0} { Duplicata{ Surface{RotorIron_[{0:NN}]};} };
RotorShaft_[] += Symmetry {0,1,0,0} { Duplicata{ Surface{RotorShaft_[{0}]};} };
RotorAir_[] += Symmetry {0,1,0,0} { Duplicata{ Surface{RotorAir_[{0}]};} };
RotorConductor_[] += Symmetry {0,1,0,0} { Duplicata{ Surface{RotorConductor_[{0}]};} };

If(NbrPolesInModel != NbrPolesTot && NbrPolesInModel>1)
  RotorPeriod_Dependent_[] = Rotate{{0, 0, 1}, {0, 0, 0}, NbrPolesInModel*2*Pi/NbrPolesTot}
  { Duplicata{Line{RotorPeriod_Reference_[]};} };
EndIf

NN = #RotorIron_[]-1;
For k In {1:NbrSect-1}
  OuterShaft_[] += Rotate {{0, 0, 1}, {0, 0, 0}, 2*Pi*k/NbrSectTot} { Duplicata{ Line{OuterShaft_[{0:1}]};} };
  InnerMB_[] += Rotate {{0, 0, 1}, {0, 0, 0}, 2*Pi*k/NbrSectTot} { Duplicata{ Line{InnerMB_[{0:3}]};} };

  RotorIron_[] += Rotate {{0,0,1},{0,0,0}, 2*Pi*k/NbrSectTot} {Duplicata{Surface{RotorIron_[{0:NN}]};} };
  RotorShaft_[] += Rotate {{0,0,1},{0,0,0}, 2*Pi*k/NbrSectTot} {Duplicata{Surface{RotorShaft_[{0,1}]};} };
  RotorAir_[] += Rotate {{0,0,1},{0,0,0}, 2*Pi*k/NbrSectTot} {Duplicata{Surface{RotorAir_[{0,1}]};} };
  RotorConductor_[] += Rotate {{0,0,1},{0,0,0}, 2*Pi*k/NbrSectTot} {Duplicata{Surface{RotorConductor_[{0,1}]};} };
EndFor

Geometry.AutoCoherence = 1 ;
Coherence;

// Correcting position of rotor
allRotorSurfaces[] = Surface '*';
Rotate {{0,0,1},{0,0,0}, RotorAngle_R} {Surface{allRotorSurfaces[]};}

//Completing the moving band
For k In {NbrSect:NbrSectTot-1}
  InnerMB_[] += Rotate {{0, 0, 1}, {0, 0, 0}, k*2*Pi/NbrSectTot} { Duplicata{ Line{InnerMB_[{0:3}]};} };
EndFor

//---------------------------------------------------------
// Physical Regions
//---------------------------------------------------------
If(NbrPolesInModel==1)
  C1[] = {0} ;
  C2[] = {1};
EndIf
If(NbrPolesInModel==2)
  C1[] = {0,3} ;
  C2[] = {1,2};
EndIf
If(NbrPolesInModel==3)
  C1[] = {0,3,4} ;
  C2[] = {1,2,5};
EndIf
If(NbrPolesInModel==4)
  C1[] = {0,3,4,7} ;
  C2[] = {1,2,5,6};
EndIf

Physical Surface(ROTOR_COND+1) = {RotorConductor_[{C1[]}]};
Physical Surface(ROTOR_COND+2) = {RotorConductor_[{C2[]}]};

Physical Surface(ROTOR_FE) = {RotorIron_[]};
Physical Surface(ROTOR_SHAFT) = {RotorShaft_[]}; // To consider or not in the FE model
Physical Surface(ROTOR_AIR)   = {RotorAir_[]};

Printf("",RotorPeriod_Dependent_[]);
Printf("",RotorPeriod_Reference_[]);

Physical Line(ROTOR_PERIOD_REFERENCE) = RotorPeriod_Reference_[] ;
Physical Line(ROTOR_PERIOD_DEPENDENT) = RotorPeriod_Dependent_[] ;

Physical Line(SURF_INT) = {OuterShaft_[]};

/*
NN = #InnerMB_[]/NbrPolesTot ;
For k In {0:NbrPolesTot-1}
  Physical Line(ROTOR_BND_MOVING_BAND+k) = InnerMB_[{k*NN:(k+1)*NN-1}];
EndFor
*/
For k In {0:NbrPolesTot/NbrPolesInModel-1}
  Physical Line(ROTOR_BND_MOVING_BAND+k) = {InnerMB_[{k*4*NbrSect:(k+1)*4*NbrSect-1}]};
EndFor


// For visu
Color SteelBlue {Surface{RotorIron_[]};}
//Color SkyBlue {Surface{RotorShaft_[]};} // Shaft as air
Color SteelBlue {Surface{RotorShaft_[]};} // Shaft as steel
Color SkyBlue {Surface{RotorAir_[]};}
Color Orchid  {Surface{RotorConductor_[{C1[]}]};}
Color Purple  {Surface{RotorConductor_[{C2[]}]};}

Coherence;
nicepos_rotor[] = {CombinedBoundary{ Surface{RotorIron_[], RotorShaft_[]};},
                   Boundary{ Surface{RotorConductor_[]};},
                   CombinedBoundary{ Surface{RotorAir_[]};} } ;




