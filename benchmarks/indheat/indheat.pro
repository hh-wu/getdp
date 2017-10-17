Group {

  Omega_c = Region[{1000,1001}];
  Omega_c1 = Region[{1000}];
  Omega_c2 = Region[{1001}];
  Omega_a = Region[{1002}];
  Omega = Region[{1000,1001,1002}];
  BdOmega_c = Region[{2000,2001}];
  BdOmega_c2 = Region[{2001}];

  DefineConstant[ Cut1TO = {2008, Min 1, Step 1, Closed 1,
      Name "Cohomology/H^1(M_a)/Cut 1 for TO formulation"} ];
  DefineConstant[ Cut2TO = {2007, Min 1, Step 1,
      Name "Cohomology/H^1(M_a)/Cur 2 for TO formulation"} ];

  Cut1TO = Region[{Cut1TO}];
  Cut2TO = Region[{Cut2TO}];

  BdOmega = Region[{2004}];
  Term1 = Region[{2002}];
  Term2 = Region[{2003}];
  Terms = Region[{Term1, Term2}];


  DefineConstant[ Cut1AV = {2005, Min 1, Step 1, Closed 1,
      Name "Cohomology/H^1(M_c,S_j)/Cut 1 for AV formulation"} ];
  DefineConstant[ Cut2AV = {2006, Min 1, Step 1,
      Name "Cohomology/H^1(M_c,S_j)/Cut 2 for AV formulation"} ];
  Cut1AV = Region[{Cut1AV}];
  Cut2AV = Region[{Cut2AV}];

  Omega_cTot = Region[{1000,1001, 2002, 2003}];
  Omega_c2Tot = Region[{1001,2001}];

}

Function {

  mu0 = 4*Pi*1e-7; // Vacuum permeablility
  sigmaCu = 6e7; // electric conductivity of copper
  sigmaAl = 3e7; // electric conductivity of aluminum
  sigma_sb = 5.6704e-8; // Stefan-Boltzmann constant
  rhoAl = 2.7e-3/(1e-6); // mass density of aluminum
  kAl = 237; // thermal conductivity of aluminum
  cAl = 0.897/1e-3; // specific heat capacity of aluminum

  mu[Omega_a] = 1*mu0;
  mu[Omega_c] = 1*mu0;
  mu[BdOmega_c] = 1*mu0;
  sigma[Omega_a] = 0.;

  DefineConstant
  [
    voltage = {0, Choices{0,1}, Name "Cohomology/0Voltage drive?"}
    Itot = {1000, Step 1, Name "Cohomology/1Current", Visible !voltage},
    Vtot = {-1, Step 1, Name "Cohomology/1Voltage", Visible voltage},
    frequency  = {50, Min 0, Step 1, Name "Material/Frequency"},
    CoilConductivity  = {sigmaCu, Min 0, Step 1e6, Name "Material/Coil conductivity"},
    TubeConductivity  = {sigmaAl, Min 0, Step 1e6, Name "Material/Tube conductivity"}

    TubeDensity  = {rhoAl, Min 0, Step 10, Name "Material/Type density"}
    TubeSpecificHeat  = {cAl, Min 0, Step 10, Name "Material/Tube specific heat"}
    TubeThermalConductivity  = {kAl, Min 0, Step 10, Name "Material/Tube thermal conductivity"}
    TubeConvectionCoeff  = {10, Min 0, Step 1, Name "Material/Tube convection coef."}
    FinalTime  = {10*60, Min 0, Step 60, Name "ThermalAnalysis/Final time"}
    NumSteps  = {20, Min 0, Step 10, Name "ThermalAnalysis/Num steps"}
  ];

  sigma[Omega_c1] = CoilConductivity;
  sigma[Omega_c2] = TubeConductivity;

  Freq = frequency;
  Itot[] = Itot;
  Vtot[] = Vtot;

  ep[BdOmega_c2] = 1.; // emissivity
  h[BdOmega_c2] = TubeConvectionCoeff;
  rho[Omega_c2] = TubeDensity;
  c[Omega_c2] = TubeSpecificHeat;
  k[Omega_c2] = TubeThermalConductivity;


  skindepthAl = Sqrt[1./(sigmaAl*Pi*Freq*mu0)];
  Printf("Skindepth Al %g", skindepthAl);
  skindepthCu = Sqrt[1./(sigmaCu*Pi*Freq*mu0)];
  Printf("Skindepth Cu %g", skindepthCu);

  time0t = 0; // transient analysis initial time
  time1t = FinalTime; // transient analysis final time
  Nt = NumSteps; // number of time steps
  dtimet[] = (time1t - time0t)/Nt;
  theta = 1;

  AmbT[] = 20+273; // initial temperature

  // non-linear loop parameters
  NL_Eps = 1.e-8;
  NL_Relax = 1.;
  NL_NbrMax = 1000;

}


Jacobian {
  { Name Vol ;
    Case { { Region All ; Jacobian Vol ; } }
  }
  { Name Sur ;
    Case { { Region All ; Jacobian Sur ; } }
  }
  { Name Lin ;
    Case { { Region All ; Jacobian Lin ; } }
  }
}

Integration {
  { Name Int ;
    Case { { Type Gauss ;
	Case {
	  { GeoElement Point       ; NumberOfPoints  1 ; }
	  { GeoElement Line        ; NumberOfPoints  3 ; }
	  { GeoElement Triangle    ; NumberOfPoints  4 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
	  { GeoElement Tetrahedron ; NumberOfPoints  5 ; }
	  { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
	  { GeoElement Prism       ; NumberOfPoints  6 ; }
	}
      } }
  }
}

Constraint {
  { Name CurrentTO ;
    Case {
      If(!voltage)
      { Region Cut1TO; Value Itot[] ; }
      EndIf
    }
  }
  { Name VoltageTO ;
    Case {
      If(voltage)
      { Region Cut1TO; Value Vtot[] ; }
      EndIf
      { Region Cut2TO; Value 0. ; }
    }
  }
  { Name AGauge ;
    Case {
      { Region Omega; SubRegion BdOmega; Value 0. ; }
    }
  }
  { Name VoltageAV ;
    Case {
      If(voltage)
      { Region Cut1AV; Value Vtot[] ; }
      EndIf
      { Region Cut2AV; Value 0. ; }
    }
  }
  { Name CurrentAV ;
    Case {
      If(!voltage)
      { Region Cut1AV; Value Itot[] ; }
      EndIf

    }
  }
  { Name InitTemp ;
    Case {
      { Region Omega_c2 ; Type Init; Value AmbT[] ; }
    }
  }
}

FunctionSpace {
  { Name HSpace; Type Form1;
    BasisFunction {
      { Name sn; NameOfCoef phi; Function BF_GradNode;
        Support Omega; Entity NodesOf[Omega_a]; }
      { Name se; NameOfCoef t; Function BF_Edge;
        Support Omega_c; Entity EdgesOf[All, Not BdOmega_c]; }
      { Name sc1; NameOfCoef I1; Function BF_GroupOfEdges;
        Support Omega; Entity GroupsOfEdgesOf[Cut1TO]; }
      { Name sc2; NameOfCoef I2; Function BF_GroupOfEdges;
        Support Omega; Entity GroupsOfEdgesOf[Cut2TO]; }
    }
    GlobalQuantity {
      { Name Current1    ; Type AliasOf        ; NameOfCoef I1 ; }
      { Name Current2    ; Type AliasOf        ; NameOfCoef I2 ; }
      { Name Voltage1    ; Type AssociatedWith ; NameOfCoef I1 ; }
      { Name Voltage2    ; Type AssociatedWith ; NameOfCoef I2 ; }
    }
    Constraint {
      { NameOfCoef Current1 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint CurrentTO ; }
      { NameOfCoef Current2 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint CurrentTO ; }
      { NameOfCoef Voltage1 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint VoltageTO ; }
      { NameOfCoef Voltage2 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint VoltageTO ; }
    }
  }

  { Name ASpace; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef a; Function BF_Edge;
        Support Omega; Entity EdgesOf[All, Not BdOmega]; }
    }
    Constraint {
      { NameOfCoef a ;  // Gauge condition
	EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
	NameOfConstraint AGauge ; }
    }
  }
  { Name ESpace; Type Form1;
    BasisFunction {
      { Name sn; NameOfCoef v; Function BF_GradNode;
        Support Omega_c; Entity NodesOf[All, Not Terms]; }
      { Name sc1; NameOfCoef V1; Function BF_GroupOfEdges;
	Support Omega_c; Entity GroupsOfEdgesOf[Cut1AV]; }
      { Name sc2; NameOfCoef V2; Function BF_GroupOfEdges;
	Support Omega_c; Entity GroupsOfEdgesOf[Cut2AV]; }
    }
    GlobalQuantity {
      { Name Voltage1    ; Type AliasOf        ; NameOfCoef V1 ; }
      { Name Current1    ; Type AssociatedWith ; NameOfCoef V1 ; }
      { Name Voltage2    ; Type AliasOf        ; NameOfCoef V2 ; }
      { Name Current2    ; Type AssociatedWith ; NameOfCoef V2 ; }
    }
    Constraint {
      { NameOfCoef Current1 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint CurrentAV ; }
      { NameOfCoef Voltage1 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint VoltageAV ; }
      { NameOfCoef Current2 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint CurrentAV ; }
      { NameOfCoef Voltage2 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint VoltageAV ; }
    }
  }

  { Name PhiSpace; Type Form0;
    BasisFunction {
      { Name sn; NameOfCoef v; Function BF_Node;
        Support Omega_c; Entity NodesOf[All, Not Term2]; }
      { Name sc1; NameOfCoef V1; Function BF_GroupOfEdges;
	Support Omega_c; Entity GroupsOfNodesOf[Term1]; }
    }
    GlobalQuantity {
      { Name Voltage1    ; Type AliasOf        ; NameOfCoef V1 ; }
      { Name Current1    ; Type AssociatedWith ; NameOfCoef V1 ; }
    }
    Constraint {
      { NameOfCoef Current1 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint CurrentAV ; }
      { NameOfCoef Voltage1 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint VoltageAV ; }
    }
  }

  { Name TSpace; Type Form0;
    BasisFunction {
      { Name sn; NameOfCoef t; Function BF_Node;
        Support Omega_c2Tot; Entity NodesOf[All]; }
    }
    Constraint {
      { NameOfCoef t; EntityType NodesOf ; NameOfConstraint InitTemp; }
    }
  }

}

Formulation {

  { Name MagDynTO; Type FemEquation;
    Quantity {
      { Name t; Type Local; NameOfSpace HSpace; }
      { Name I1; Type Global; NameOfSpace HSpace[Current1]; }
      { Name I2; Type Global; NameOfSpace HSpace[Current2]; }
      { Name V1; Type Global; NameOfSpace HSpace[Voltage1]; }
      { Name V2; Type Global; NameOfSpace HSpace[Voltage2]; }
    }
    Equation {
      Galerkin { DtDof [ mu[] * Dof{t} , {t} ];
        In Omega; Integration Int; Jacobian Vol;  }

      Galerkin { [ 1/sigma[] * Dof{d t} , {d t} ];
        In Omega_c; Integration Int; Jacobian Vol;  }

      GlobalTerm { [ Dof{V1} , {I1} ] ; In Cut1TO ; }
      GlobalTerm { [ Dof{V2} , {I2} ] ; In Cut2TO ; }
    }
  }

  { Name MagDynAV; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace ASpace; }
      { Name e; Type Local; NameOfSpace ESpace; }
      { Name I1; Type Global; NameOfSpace ESpace[Current1]; }
      { Name V1; Type Global; NameOfSpace ESpace[Voltage1]; }
      { Name I2; Type Global; NameOfSpace ESpace[Current2]; }
      { Name V2; Type Global; NameOfSpace ESpace[Voltage2]; }
    }
    Equation {
      Galerkin { [ 1./mu[] * Dof{d a} , {d a} ];
        In Omega; Integration Int; Jacobian Vol;  }
      Galerkin { [ sigma[] * Dof{e} , {a} ];
	In Omega_c; Integration Int; Jacobian Vol;  }
      Galerkin { DtDof [ sigma[] * Dof{a} , {a} ];
	In Omega_c; Integration Int; Jacobian Vol;  }
      Galerkin { [ sigma[] * Dof{e} , {e} ];
	In Omega_c; Integration Int; Jacobian Vol;  }
      Galerkin { DtDof [ sigma[] * Dof{a} , {e} ];
        In Omega_c; Integration Int; Jacobian Vol;  }
      GlobalTerm { [ - Dof{I1} , {V1} ] ; In Cut1AV ; }
      GlobalTerm { [ - Dof{I2} , {V2} ] ; In Cut2AV ; }
    }
  }

  { Name TheDyn; Type FemEquation;
    Quantity {
      { Name t; Type Local; NameOfSpace TSpace; }
      { Name h; Type Local; NameOfSpace HSpace; }
    }
    Equation {
      Galerkin { [ k[] * Dof{d t} , {d t} ];
	In Omega_c2; Integration Int; Jacobian Vol;  }
      Galerkin { DtDof [ rho[]*c[] * Dof{t} , {t} ];
	In Omega_c2; Integration Int; Jacobian Vol;  }

      Galerkin { [ -0.5/sigma[]*<h>[Re[{d h}]*Re[{d h}] + Im[{d h}]*Im[{d h}]], {t} ];
      	In Omega_c2; Integration Int; Jacobian Vol;  }

      // Identical to:
      // Galerkin { [ -0.5/sigma[]*<h>[SquNorm[{d h}]], {t} ];
      // In Omega_c2; Integration Int; Jacobian Vol;  }


      Galerkin { [ h[]*Dof{t} , {t} ] ;
	In BdOmega_c2; Jacobian Sur ; Integration Int ; }
      Galerkin { [ -h[]*AmbT[] , {t} ] ;
        In BdOmega_c2 ; Jacobian Sur ; Integration Int ; }
      Galerkin { [ sigma_sb*ep[]*({t})^4, {t} ] ;
	In BdOmega_c2; Jacobian Sur ; Integration Int ; }
      Galerkin { [ -sigma_sb*ep[]*(AmbT[])^4 , {t} ] ;
        In BdOmega_c2 ; Jacobian Sur ; Integration Int ; }
    }
  }

}

Resolution {
  { Name MagDynTOComplex;
    System {
      { Name A; NameOfFormulation MagDynTO;
        Type ComplexValue; Frequency Freq;}
    }
    Operation {
      Generate[A]; Solve[A]; SaveSolution[A];
    }
  }

  { Name MagDynAVComplex;
    System {
      { Name A; NameOfFormulation MagDynAV;
        Type ComplexValue; Frequency Freq;}
    }
    Operation {
      Generate[A]; Solve[A]; SaveSolution[A];
    }
  }

  { Name TheDyn;
    System {
      { Name B; NameOfFormulation TheDyn; }
      { Name A; NameOfFormulation MagDynTO;
        Type ComplexValue; Frequency Freq;}
    }
    Operation {
      InitSolution[A];
      Generate[A]; Solve[A]; SaveSolution[A];
      InitSolution[B];
      TimeLoopTheta[time0t, time1t, dtimet[], theta] {
	IterativeLoop[NL_NbrMax, NL_Eps, NL_Relax] {
	  GenerateJac[B]; SolveJac[B];
	}
	SaveSolution[B];
      }
    }
  }

}

PostProcessing {
  { Name MagDynTO; NameOfFormulation MagDynTO; NameOfSystem A;
    Quantity {
      { Name phi; Value{ Local{ [ {dInv t} ] ;
	    In Omega; Jacobian Vol; } } }
      { Name t; Value{ Local{ [ {t} ] ;
	    In Omega; Jacobian Vol; } } }
      { Name h; Value{ Local{ [ {t} ] ;
	    In Omega; Jacobian Vol; } } }
      { Name j; Value{ Local{ [ {d t} ] ;
	    In Omega_c; Jacobian Vol; } } }
      { Name q; Value{ Local{ [ 1./sigma[]*( Re[{d t}]*Re[{d t}] + Im[{d t}]*Im[{d t}]) ] ;
	    In Omega_c; Jacobian Vol; } } }
      { Name b; Value{ Local{ [ mu[]*({t}) ] ;
            In Omega; Jacobian Vol; } } }
      { Name dtb; Value{ Local{ [ mu[]*(Dt [{t}]) ] ;
            In Omega; Jacobian Vol; } } }
      { Name I1 ; Value { Term { [ {I1} ] ; In Cut1TO ; } } }
      { Name I2 ; Value { Term { [ {I2} ] ; In Cut2TO ; } } }
      { Name V1 ; Value { Term { [ {V1} ] ; In Cut1TO ; } } }
      { Name Z1 ; Value { Term { [ {V1}/{I1} ] ; In Cut1TO ; } } }
      { Name V2 ; Value { Term { [ {V2} ] ; In Cut2TO ; } } }

      { Name reI1 ; Value { Term { [ Re[{I1}] ] ; In Cut1TO ; } } }
      { Name reI2 ; Value { Term { [ Re[{I2}] ] ; In Cut2TO ; } } }
      { Name reV1 ; Value { Term { [ Re[{V1}] ] ; In Cut1TO ; } } }
      { Name reZ1 ; Value { Term { [ Re[{V1}/{I1}] ] ; In Cut1TO ; } } }
      { Name reV2 ; Value { Term { [ Re[{V2}] ] ; In Cut2TO ; } } }

      { Name imI1 ; Value { Term { [ Im[{I1}] ] ; In Cut1TO ; } } }
      { Name imI2 ; Value { Term { [ Im[{I2}] ] ; In Cut2TO ; } } }
      { Name imV1 ; Value { Term { [ Im[{V1}] ] ; In Cut1TO ; } } }
      { Name imZ1 ; Value { Term { [ Im[{V1}/{I1}] ] ; In Cut1TO ; } } }
      { Name imV2 ; Value { Term { [ Im[{V2}] ] ; In Cut2TO ; } } }

    }
  }
}

PostProcessing {
  { Name MagDynAV; NameOfFormulation MagDynAV; NameOfSystem A;
    Quantity {
      { Name v; Value{ Local{ [ {dInv e} ] ;
	    In Omega_c; Jacobian Vol; } } }
      { Name e; Value{ Local{ [ -(Dt[ {a} ] + {e}) ] ;
	    In Omega_c; Jacobian Vol; } } }
      { Name a; Value{ Local{ [ {a} ] ;
	    In Omega; Jacobian Vol; } } }
      { Name b; Value{ Local{ [ {d a} ] ;
	    In Omega; Jacobian Vol; } } }
      { Name j; Value{ Local{ [  -sigma[]*(Dt[ {a} ] + {e}) ]  ;
          In Omega_c; Jacobian Vol; } } }
      { Name q; Value{ Local{ [  sigma[]*( Re[(Dt[ {a} ] + {e})]*Re[(Dt[ {a} ] + {e})] + Im[(Dt[ {a} ] + {e})]*Im[(Dt[ {a} ] + {e})]) ]  ;
          In Omega_c; Jacobian Vol; } } }
      { Name h; Value{ Local{ [ 1./mu[]*({d a}) ] ;
            In Omega; Jacobian Vol; } } }
      { Name I1 ; Value { Term { [ {I1} ] ; In Cut1AV ; } } }
      { Name V1 ; Value { Term { [ {V1} ] ; In Cut1AV ; } } }
      { Name Z1 ; Value { Term { [ {V1}/{I1} ] ; In Cut1AV ; } } }
      { Name I2 ; Value { Term { [ {I2} ] ; In Cut2AV ; } } }
      { Name V2 ; Value { Term { [ {V2} ] ; In Cut2AV ; } } }

      { Name reI1 ; Value { Term { [ Re[{I1}] ] ; In Cut1AV ; } } }
      { Name reV1 ; Value { Term { [ Re[{V1}] ] ; In Cut1AV ; } } }
      { Name reZ1 ; Value { Term { [ Re[{V1}/{I1}] ] ; In Cut1AV ; } } }
      { Name reI2 ; Value { Term { [ Re[{I2}] ] ; In Cut2AV ; } } }
      { Name reV2 ; Value { Term { [ Re[{V2}] ] ; In Cut2AV ; } } }

      { Name imI1 ; Value { Term { [ Im[{I1}] ] ; In Cut1AV ; } } }
      { Name imV1 ; Value { Term { [ Im[{V1}] ] ; In Cut1AV ; } } }
      { Name imZ1 ; Value { Term { [ Im[{V1}/{I1}] ] ; In Cut1AV ; } } }
      { Name imI2 ; Value { Term { [ Im[{I2}] ] ; In Cut2AV ; } } }
      { Name imV2 ; Value { Term { [ Im[{V2}] ] ; In Cut2AV ; } } }
    }
  }

  { Name TheDyn; NameOfFormulation TheDyn;
    Quantity {
      { Name t; Value{ Local{ [ {t} ] ;
	    In Omega_c2; Jacobian Vol; } } }
      { Name q; Value{ Local{ [ -k[]*{d t} ] ;
	    In Omega_c2; Jacobian Vol; } } }
      { Name p; Value{ Local{ [ 1./sigma[]*( Re[{d h}]*Re[{d h}] + Im[{d h}]*Im[{d h}] ) ] ;
            In Omega_c2; Jacobian Vol; } } }
    }
  }
}

 PostOperation {
  { Name MagDynTO ; NameOfPostProcessing MagDynTO ;
    Operation {
      Print[ phi, OnElementsOf Omega , File "phiTO.pos"] ;
      Print[ h, OnElementsOf Omega , File "hTO.pos"] ;
      Print[ j, OnElementsOf Omega_c , File "jTO.pos"] ;
      Print[ q, OnElementsOf Omega_c , File "qTO.pos"] ;

      Print[I1, OnRegion Cut1TO, Format FrequencyTable, File "I1TO.txt"];
      Print[V1, OnRegion Cut1TO, Format FrequencyTable, File "V1TO.txt"];
      Print[Z1, OnRegion Cut1TO, Format FrequencyTable, File "Z1TO.txt"];
      Print[I2, OnRegion Cut2TO, Format FrequencyTable, File "I2TO.txt"];

      Print[reI1, OnRegion Cut1TO, Format FrequencyTable, File "temp.txt",
        SendToServer "88Output TO/10re(I1)"];
      Print[imI1, OnRegion Cut1TO, Format FrequencyTable, File "temp.txt",
        SendToServer "88Output TO/11im(I1)"];

      Print[reV1, OnRegion Cut1TO, Format FrequencyTable, File "temp.txt",
        SendToServer "88Output TO/20re(V1)"];
      Print[imV1, OnRegion Cut1TO, Format FrequencyTable, File "temp.txt",
        SendToServer "88Output TO/21imag(V1)"];

      Print[reZ1, OnRegion Cut1TO, Format FrequencyTable, File "temp.txt",
        SendToServer "88Output TO/30re(Z1)"];
      Print[imZ1, OnRegion Cut1TO, Format FrequencyTable, File "temp.txt",
        SendToServer "88Output TO/30imag(Z1)"];

      Print[reI2, OnRegion Cut2TO, Format FrequencyTable, File "temp.txt",
        SendToServer "88Output TO/40re(I2)"];
      Print[imI2, OnRegion Cut2TO, Format FrequencyTable, File "temp.txt",
        SendToServer "88Output TO/40imag(I2)"];
    }
  }

  { Name MagDynAV ; NameOfPostProcessing MagDynAV ;
    Operation {
      Print[ e, OnElementsOf Omega_c , File "eAV.pos"] ;
      Print[ b, OnElementsOf Omega , File "bAV.pos"] ;
      Print[ v, OnElementsOf Omega_c , File "vAV.pos"] ;
      Print[ j, OnElementsOf Omega_c , File "jAV.pos"] ;
      Print[ q, OnElementsOf Omega_c , File "qAV.pos"] ;

      Print[I1, OnRegion Cut1AV, Format FrequencyTable, File "I1AV.txt"];
      Print[V1, OnRegion Cut1AV, Format FrequencyTable, File "V1AV.txt"];
      Print[Z1, OnRegion Cut1AV, Format FrequencyTable, File "Z1AV.txt"];
      Print[I2, OnRegion Cut2AV, Format FrequencyTable, File "I2AV.txt"];

      Print[reI1, OnRegion Cut1AV, Format Table, File "temp.txt",
        SendToServer "88Output AV/10re(I1)"];
      Print[imI1, OnRegion Cut1AV, Format Table, File "temp.txt",
        SendToServer "88Output AV/11im(I1)"];

      Print[reV1, OnRegion Cut1AV, Format Table, File "temp.txt",
        SendToServer "88Output AV/20re(V1)"];
      Print[imV1, OnRegion Cut1AV, Format Table, File "temp.txt",
        SendToServer "88Output AV/21imag(V1)"];

      Print[reZ1, OnRegion Cut1AV, Format Table, File "temp.txt",
        SendToServer "88Output AV/30re(Z1)"];
      Print[imZ1, OnRegion Cut1AV, Format Table, File "temp.txt",
        SendToServer "88Output AV/30imag(Z1)"];

      Print[reI2, OnRegion Cut2AV, Format Table, File "temp.txt",
        SendToServer "88Output AV/40re(I2)"];
      Print[imI2, OnRegion Cut2AV, Format Table, File "temp.txt",
        SendToServer "88Output AV/40imag(I2)"];
    }
  }

  { Name TheDyn ; NameOfPostProcessing TheDyn ;
    Operation {
      Print[ t, OnElementsOf Omega_c2 , File "tThe.pos"] ;
      Print[ q, OnElementsOf Omega_c2 , File "qThe.pos"] ;
      Print[ p, OnElementsOf Omega_c2 , File "pThe.pos"] ;
    }
  }

}


DefineConstant[
  R_ = {"MagDynTOComplex", Name "GetDP/1ResolutionChoices", Visible 1},
  C_ = {"-solve -v2 -pos", Name "GetDP/9ComputeCommand", Visible 1},
  P_ = {"MagDynTO", Name "GetDP/2PostOperationChoices", Visible 1}
];
