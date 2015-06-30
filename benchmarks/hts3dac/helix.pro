Include "helix_data.pro";

Group {
  Air = Region[ AIR ];
  Matrixx = Region[ MATRIX ];
  ExternalBnd = Region[ BND_AIR ];
  MatrixBnd = Region[ BND_MATRIX ];
  Filaments = Region[{}];
  For i In {1:NumLayers}
    For j In {1:NumFilaments~{i}}
      Filaments += Region[ (FILAMENT + 1000 * i + j) ];
    EndFor
  EndFor
  //ht0 = Region[ {21001, 21002, 21101, 21102, 200001, 200002, 210002, 210003} ];
  ht0 = Region[ {ExternalBnd} ];

  Omega_c = Region[{Matrixx,Filaments}];
  Omega_a = Region[{Air}];
  Omega = Region[{Omega_c, Omega_a}];
  BdOmega_c = Region[{MatrixBnd}];

  Cut1TO = Region[ (AIR + 1) ];

  BdOmega = Region[ ExternalBnd ];
}

Function {
  mu0 = 4*Pi*1e-7; // Vacuum permeablility
  sigmaCu = 6e9; // electric conductivity of copper
  sigmaFilaments = 6e10;
  mu[Omega_a] = 1*mu0;
  mu[Omega_c] = 1*mu0;
  rho[Matrixx] = 1/sigmaCu;

  DefineConstant[ Flag_NL = 1 ];

  If(!Flag_NL)
    rho[Filaments] = 1/sigmaFilaments;
  EndIf
  If(Flag_NL)
    DefineConstant[
      Ec = {1e-4, Name "Critical electric field"},
      Jc = {5e8, Name "Critical current density"},
      n = {40, Name "n value"},
      Itot = {100, Name "Total current"}
    ];

    rho[Filaments] =
      (Ec / Jc * (Norm[$1] / Jc)^(n - 1))#2 * 0 +
      (#2 < 1e-8) ? #2 : 1e-8 ;

    drhodJ[Filaments] =
      (Ec / Jc * (Norm[$1] / Jc)^(n - 1))#3 * 0 +
      (#3 < 1e-08) ? (Ec / Jc^2 * (n-1) * (Norm[$1] / Jc)^(n - 2)) : 0;

      dEdJ_NL[Filaments] = drhodJ[$1#1] * SquDyadicProduct[#1]  ;
    dEdJ_NL[Matrixx] = 0;
  EndIf

  Freq = 50;
  dtimet = 1e-4;
  time0t = 0; // transient analysis initial time
  time1t = 10*dtimet; // transient analysis final time
  theta = 1;

  // non-linear loop parameters
  NL_Eps = 1.e-6;
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
  { Name MagneticField ;
    Case {
      { Region ht0; Value 0; }
    }
  }
  { Name CurrentTO ;
    Case {
      { Region Cut1TO; Value Itot ; TimeFunction Sin_wt_p[]{2*Pi*Freq, 0.} ; }
    }
  }
  { Name VoltageTO ;
    Case {
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
      { NameOfCoef t ;
        EntityType EdgesOf ; NameOfConstraint MagneticField ; }
      { NameOfCoef phi ;
        EntityType NodesOf ; NameOfConstraint MagneticField ; }
      { NameOfCoef Current1 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint CurrentTO ; }
      { NameOfCoef Voltage1 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint VoltageTO ; }
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
      //Galerkin { [ -mu[] * Dof{t} , {t} ];
      //  In Omega; Integration Int; Jacobian Vol;  }

      Galerkin { DtDof [ mu[] * Dof{t} , {t} ];
        In Omega; Integration Int; Jacobian Vol;  }

      Galerkin { [ rho[{d t}] * Dof{d t} , {d t} ];
        In Omega_c; Integration Int; Jacobian Vol;  }

      If(Flag_NL)
        Galerkin { JacNL [ dEdJ_NL[{d t}] * Dof{d t} , {d t} ];
          In Filaments; Integration Int; Jacobian Vol;  }
      EndIf

      GlobalTerm { [ -Dof{V1} , {I1} ] ; In Cut1TO ; }
    }
  }

}

Resolution {
  { Name MagDynTOTime;
    System {
      { Name A; NameOfFormulation MagDynTO; }
    }
    Operation {
      SetGlobalSolverOptions["-mat_mumps_icntl_14 500"];

      InitSolution[A];
      TimeLoopTheta[time0t, time1t, dtimet, theta] {
        If(!Flag_NL)
          Generate[A]; Solve[A]; SaveSolution[A];
        EndIf
        If(Flag_NL)
          GenerateJac[A];
          SolveNL[A];
          //IterativeLoop[NL_NbrMax, NL_Eps, NL_Relax] { GenerateJac[A]; SolveJac[A]; }
          SaveSolution[A];
        EndIf
      }
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
}

PostOperation {
  { Name MagDynTO ; NameOfPostProcessing MagDynTO ;
    Operation {
      Print[ phi, OnElementsOf Omega , File "phiTO.pos"] ;
      Print[ h, OnElementsOf Omega , File "hTO.pos"] ;
      Print[ j, OnElementsOf Omega_c , File "jTO.pos"] ;
      Print[ q, OnElementsOf Omega_c , File "qTO.pos"] ;
      Print[I1, OnRegion Cut1TO, File "I1TO.pos"];
      Print[V1, OnRegion Cut1TO, File "V1TO.pos"];
      Print[Z1, OnRegion Cut1TO, File "Z1TO.pos"];
    }
  }

}
