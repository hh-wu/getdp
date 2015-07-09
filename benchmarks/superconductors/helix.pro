
// ideas for future work: for AC losses
//
// - add definition of external magnetic field; usually provided through a
// boundary condition.
//
// - Have Jc as a function of h: Jc(B) = k / (B_0 + |B|) (Kim's model, really
// basic; or use a table with interpolated values)
//
// - Test with higher order edge basis functions; maybe 1st order in the HTS,
// high order in the air
//

Include "helix_data.pro";

Group {
  Air = Region[ AIR ];
  Matrixx = Region[ {MATRIX} ];
  MatrixBnd = Region[ BND_MATRIX ];
  Filaments = Region[{}];
  Terms = Region[{ (BND_MATRIX + 1), (BND_MATRIX + 2) }];
  For i In {1:NumLayers}
    For j In {1:NumFilaments~{i}}
      Filaments += Region[ (FILAMENT + 1000 * i + j) ];
      Terms += Region[ (BND_FILAMENT + 1000 * i + j) ];
      Terms += Region[ (BND_FILAMENT + 1100 * i + j) ];
    EndFor
  EndFor

  Omega_c = Region[{Matrixx,Filaments}];
  Omega_a = Region[{Air}];
  Omega = Region[{Omega_c, Omega_a}];
  BdOmega_c = Region[{MatrixBnd}];

  Cut1AV = Region[ (AIR + 1) ];
  Cut1TO = Region[ (AIR + 2) ];

  BdOmega = Region[ {(BND_AIR),  (BND_AIR+1),  (BND_AIR+2), Terms} ];
}

Function {
  mu0 = 4*Pi*1e-7 / scaling; // Vacuum permeablility
  sigmaCu = 6e7 / scaling; // electric conductivity of copper
  sigmaFilaments = 6e10 /scaling;

  sigma[Matrixx] = sigmaCu;
  sigma[Filaments] = sigmaFilaments;

  mu[Omega_a] = 1*mu0;
  mu[Omega_c] = 1*mu0;

  rho[Matrixx] = 1/sigmaCu;
  drhodJ[Matrixx] = 0;

  rho[Omega_a] = 10;
  drhodJ[Omega_a] = 0;

  DefineConstant[
    Itot = {800/2, Name "Total current"},
    Flag_NL = 1
  ];

  If(!Flag_NL)
    rho[Filaments] = 1/sigmaFilaments;
  EndIf
  If(Flag_NL)
    DefineConstant[
      Ec = {1e-4  /scaling, Name "Critical electric field"},
      Jc = {5e8 /scaling^2, Name "Critical current density"},
      n = {10, Name "n value"}
    ];

    // mettre la perturbation regularisante en parametre

    /* Power law:
    rho[Filaments] = Ec / Jc * (Norm[$1] / Jc)^(n - 1); // + 1e-11;
    drhodJ[Filaments] = Ec / Jc^2 * (n-1) * (Norm[$1] / Jc)^(n - 3) * TensorDiag[CompX[$1],CompY[$1],CompZ[$1]];
    */
    /* Power law with Antti's regularization:*/
    rho0 = 0; //1e-8;
    rho[Filaments] = (Ec / Jc * (Norm[$1] / Jc)^(n - 1))#1 * 0 +
       (#1 < rho0) ? rho0 : #1;
    drhodJ[Filaments] =
       (Ec / Jc * (Norm[$1] / Jc)^(n - 1))#2 * 0 +
       (#1 < rho0) ? 0 : (Ec / Jc^2 * (n-1) * (Norm[$1] / Jc)^(n - 3) * TensorDiag[CompX[$1],CompY[$1],CompZ[$1]]);

    /* Comsol:
    E0 = 0.0836168;
    alpha = 1.449621256;
    Jc = 17e6;
    rho[Filaments] = (Norm[$1] < Jc) ? 0 : (E0 * ((Norm[$1] - Jc)/Jc)^alpha / Norm[$1]);
    drhodJ[Filaments] = 0;
    */
  EndIf

  Freq = 50;
  dtimet = 1e-6;
  time0t = 0; // transient analysis initial time
  time1t = 5e-3; // transient analysis final time
  theta = 1;

  // non-linear loop parameters
  NL_Eps = 1.e-4;
  NL_Relax = 1;
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
  { Name VoltageTO ;
    Case {
    }
  }
  { Name CurrentTO ;
    Case {
      { Region Cut1TO; Value Itot ; TimeFunction Sin_wt_p[]{2*Pi*Freq, 0.} ; }
    }
  }
  { Name AGauge ;
    Case {
      { Region Omega; SubRegion Region[{BdOmega}]; Value 0. ; }
    }
  }
  { Name VoltageAV ;
    Case {
    }
  }
  { Name CurrentAV ;
    Case {
      { Region Cut1AV; Value Itot ; TimeFunction Sin_wt_p[]{2*Pi*Freq, 0.} ; }
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
    }
    GlobalQuantity {
      { Name Current1    ; Type AliasOf        ; NameOfCoef I1 ; }
      { Name Voltage1    ; Type AssociatedWith ; NameOfCoef I1 ; }
    }
    Constraint {
      { NameOfCoef Current1 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint CurrentTO ; }
      { NameOfCoef Voltage1 ;
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

}

Formulation {
  { Name MagDynTO; Type FemEquation;
    Quantity {
      { Name t; Type Local; NameOfSpace HSpace; }
      { Name I1; Type Global; NameOfSpace HSpace[Current1]; }
      { Name V1; Type Global; NameOfSpace HSpace[Voltage1]; }
    }
    Equation {
      Galerkin { DtDof [ mu[] * Dof{t} , {t} ];
        In Omega; Integration Int; Jacobian Vol;  }
      Galerkin { [ rho[{d t}] * Dof{d t} , {d t} ];
        In Omega_c; Integration Int; Jacobian Vol;  }
      /*
      Galerkin { JacNL [ drhodJ[{d t}] * Dof{d t} , {d t} ];
        In Filaments; Integration Int; Jacobian Vol;  }
        */
      Galerkin { [ drhodJ[{d t}] * Dof{d t} , {d t} ];
        In Filaments; Integration Int; Jacobian Vol;  }
      Galerkin { [ - drhodJ[{d t}] * {d t} , {d t} ];
        In Filaments; Integration Int; Jacobian Vol;  }
      Galerkin { [ rho[{d t}] * {d t} , {d t} ];
        In Omega_c; Integration Int; Jacobian Vol;  }
    }
  }
  { Name MagDynAV_modified; Type FemEquation;
    Quantity {
      { Name as; Type Local; NameOfSpace ASpace; }
      { Name es; Type Local; NameOfSpace ESpace; }
      { Name I1s; Type Global; NameOfSpace ESpace[Current1]; }
      { Name V1s; Type Global; NameOfSpace ESpace[Voltage1]; }
    }
    Equation {
      Galerkin { [ rho[-Dt[{as}]-{es}] * {d as} , {d as} ];
        In Omega; Integration Int; Jacobian Vol;  }

      // approx d'abelin: le tenseur est en fait plein
      Galerkin { [ ( drhodJ[-Dt[{as}]-{es}] * TensorDiag[CompX[(-Dt[{as}]-{es})], CompY[(-Dt[{as}]-{es})], CompZ[(-Dt[{as}]-{es})]]
                            + rho[-Dt[{as}]-{es}]*TensorDiag[1,1,1]) * Dof{d as} , {d as} ];
        In Omega; Integration Int; Jacobian Vol;  }

      Galerkin { [ ( drhodJ[-Dt[{as}]-{es}] * TensorDiag[CompX[(-Dt[{as}]-{es})], CompY[(-Dt[{as}]-{es})], CompZ[(-Dt[{as}]-{es})]]
                             + rho[-Dt[{as}]-{es}]*TensorDiag[1,1,1]) * (-{d as}) , {d as} ];
        In Omega; Integration Int; Jacobian Vol;  }

      Galerkin { [ -mu[]*Dof{es} , {as} ];
	In Omega_c; Integration Int; Jacobian Vol;  }
      Galerkin { DtDof [ -mu[]*Dof{as} , {as} ];
	In Omega_c; Integration Int; Jacobian Vol;  }

      Galerkin { [ -Dof{es} , {es} ];
	In Omega_c; Integration Int; Jacobian Vol;  }
      Galerkin { DtDof [ -Dof{as} , {es} ];
        In Omega_c; Integration Int; Jacobian Vol;  }

      GlobalTerm { [ -Dof{I1s} , {V1s} ] ; In Cut1AV ; }
    }
  }
}

Resolution {
  { Name MagDynTOTime;
    System {
      { Name A; NameOfFormulation MagDynTO; }
    }
    Operation {
      //InitSolution[A];
      //TimeLoopSundials[A];

      SetGlobalSolverOptions["-mat_mumps_icntl_14 500"];
      InitSolution[A];
      TimeLoopTheta[time0t, time1t, dtimet, theta] {
        Print[ {$Residual} ];
        While[$Residual > NL_Eps]{
          Generate[A]; Solve[A]; Residual[A];
          Print[ {$Residual} ];
        }
        SaveSolution[A];
      }


      If(0)
        SetGlobalSolverOptions["-mat_mumps_icntl_14 500"];
        InitSolution[A];
        TimeLoopTheta[time0t, time1t, dtimet, theta] {
          If(!Flag_NL)
            Generate[A]; Solve[A]; SaveSolution[A];
          EndIf
          If(Flag_NL)
            //GenerateJac[A];
            //SolveNL[A];
            //IterativeLoop[NL_NbrMax, NL_Eps, NL_Relax] {
            IterativeLoopN[NL_NbrMax, NL_Relax, System{ {A, NL_Eps, NL_Eps, Residual MeanL2Norm} } ]{
              GenerateJac[A]; SolveJac[A];
            }
            SaveSolution[A];
          EndIf
        }
      EndIf
    }
  }

  { Name MagDynTOComplex;
    System {
      { Name A; NameOfFormulation MagDynTO;
        Type ComplexValue; Frequency Freq;}
    }
    Operation {
      InitSolution[A];
      Generate[A]; Solve[A]; SaveSolution[A];
    }
  }

  { Name MagDynAVTime;
    System {
      { Name A; NameOfFormulation MagDynAV_modified; }
    }
    Operation {
      SetGlobalSolverOptions["-mat_mumps_icntl_14 500"];
      InitSolution[A];
      TimeLoopTheta[time0t, time1t, dtimet, theta] {
        Print[ {$Residual} ];
        While[$Residual > NL_Eps]{
          Generate[A]; Solve[A]; Residual[A];
          Print[ {$Residual} ];
        }
        SaveSolution[A];
      }
    }
  }

  { Name MagDynAVComplex;
    System {
      { Name A; NameOfFormulation MagDynAV_modified;
        Type ComplexValue; Frequency Freq;}
    }
    Operation {
      Generate[A]; Solve[A]; SaveSolution[A];
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
      { Name q; Value{ Local{ [ rho[]*( Re[{d t}]*Re[{d t}] + Im[{d t}]*Im[{d t}]) ] ;
	    In Omega_c; Jacobian Vol; } } }
      { Name b; Value{ Local{ [ mu[]*({t}) ] ;
            In Omega; Jacobian Vol; } } }
      { Name dtb; Value{ Local{ [ mu[]*(Dt [{t}]) ] ;
            In Omega; Jacobian Vol; } } }
      { Name I1 ; Value { Term { [ {I1} ] ; In Cut1TO ; } } }
      { Name V1 ; Value { Term { [ {V1} ] ; In Cut1TO ; } } }
      { Name Z1 ; Value { Term { [ {V1}/{I1} ] ; In Cut1TO ; } } }
    }
  }
  { Name MagDynAV; NameOfFormulation MagDynAV_modified; NameOfSystem A;
    Quantity {
      { Name v; Value{ Local{ [ {dInv es} ] ;
	    In Omega_c; Jacobian Vol; } } }
      { Name e; Value{ Local{ [ -(Dt[ {as} ] + {es}) ] ;
	    In Omega_c; Jacobian Vol; } } }
      { Name a; Value{ Local{ [ {as} ] ;
	    In Omega; Jacobian Vol; } } }
      { Name b; Value{ Local{ [ {d as} ] ;
	    In Omega; Jacobian Vol; } } }
      { Name j; Value{ Local{ [  -sigma[]*(Dt[ {as} ] + {es}) ]  ;
          In Omega_c; Jacobian Vol; } } }
      { Name q; Value{ Local{ [  sigma[]*( Re[(Dt[ {as} ] + {es})]*Re[(Dt[ {as} ] + {es})]
                                  + Im[(Dt[ {as} ] + {es})]*Im[(Dt[ {as} ] + {es})]) ]  ;
          In Omega_c; Jacobian Vol; } } }
      { Name h; Value{ Local{ [ 1./mu[]*({d as}) ] ;
            In Omega; Jacobian Vol; } } }
      { Name I1 ; Value { Term { [ {I1s} ] ; In Cut1AV ; } } }
      { Name V1 ; Value { Term { [ {V1s} ] ; In Cut1AV ; } } }
      { Name Z1 ; Value { Term { [ {V1s}/{I1s} ] ; In Cut1AV ; } } }
    }
  }
}

PostOperation {
  { Name MagDynTO ; NameOfPostProcessing MagDynTO ;
    Operation {
      //Print[ phi, OnElementsOf Omega , File "phiTO.pos"] ;
      //Print[ h, OnElementsOf Omega , File "hTO.pos"] ;
      Print[ j, OnElementsOf Omega_c , File "jTO.pos"
        //];
        , TimeStep {0:690:10} ] ;
     //Print[ q, OnElementsOf Omega_c , File "qTO.pos"] ;
      Print[I1, OnRegion Cut1TO, File "I1TO.pos"];
      Print[V1, OnRegion Cut1TO, File "V1TO.pos"];
      Print[Z1, OnRegion Cut1TO, File "Z1TO.pos"];
    }
  }

  { Name MagDynAV ; NameOfPostProcessing MagDynAV ;
    Operation {
      Print[ e, OnElementsOf Omega_c , File "eAV.pos"] ;
      Print[ a, OnElementsOf Omega , File "aAV.pos"] ;
      Print[ b, OnElementsOf Omega_a , File "bAV.pos"] ;
      Print[ v, OnElementsOf Omega_c , File "vAV.pos"] ;
      Print[ j, OnElementsOf Omega_c , File "jAV.pos"] ;
      Print[ q, OnElementsOf Omega_c , File "qAV.pos"] ;
      Print[I1, OnRegion Cut1AV, File "I1AV.pos"];
      Print[V1, OnRegion Cut1AV, File "V1AV.pos"];
    }
  }
}
