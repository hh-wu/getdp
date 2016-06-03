Include "helix_data.pro";

Group {
  Air = Region[AIR];
  AirInf = Region[INF];
  Matrix = Region[MATRIX];
  BndMatrix = Region[BND_MATRIX];
  Filaments = Region[{}];
  For i In {1:NumLayers}
    For j In {1:NumFilaments~{i}}
      Filaments += Region[(FILAMENT + 1000 * i + j)];
    EndFor
  EndFor

  OmegaC = Region[{Matrix, Filaments}]; // conducting domain
  OmegaCC = Region[{Air, AirInf}]; // non-conducting domain
  BndOmegaC = Region[BndMatrix]; // boundary of conducting domain
  Cut = Region[(INF + 1)]; // thick cut
  Omega = Region[{OmegaC, OmegaCC}]; // full domain
}

Function {

  mu0 = 4*Pi*1e-7; // [Hm⁻¹]

  DefineConstant[
    sigmaMatrix = {6e7, Min 1e3, Max 6e7, Step 1e3,
      Name "Input/4Materials/Matrix conductivity [Sm⁻¹]"},
    Itot = {800/2, Min 100, Max 1000, Step 100,
      Name "Input/3Source/Total current [A]"},
    Ec = {1e-4,
      Name "Input/4Materials/Critical electric field [Vm⁻¹]"},
    Jc = {5e8,
      Name "Input/4Materials/Critical current density [Am⁻²]"},
    n = {(Preset == 3) ? 30 : 10, Min 3, Max 40, Step 1,
      ReadOnly Preset, Highlight "LightYellow",
      Name "Input/4Materials/Exponent (n) value"},
    Freq = {50, Min 1, Max 100, Step 1,
      Name "Input/3Source/Frequency [Hz]"},
    periods = {1.25, Min 0.1, Max 2.0, Step 0.05,
      Name "Input/Solver/0Periods to simulate [s]"},
    time0 = 0, // initial time
    time1 = periods * (1 / Freq), // final time
    // n = 10 -> 20, dt = 5e-5
    // n = 30, dt = 5e-6
    dt = {(Preset == 3) ? 1e-5 : 5e-5, ReadOnly Preset,
      Min 5e-7, Max 5e-4, Step 1e-6,
      Name "Input/Solver/1Time step [s]"}
    theta = 1, // implicit Euler
    tol_abs = {1e-6,
      Name "Input/Solver/Absolute tolerance on nonlinear residual"},
    tol_rel = {1e-6,
      Name "Input/Solver/Relative tolerance on nonlinear residual"},
    visu = {1, Choices{0, 1}, AutoCheck 0,
      Name "Input/Solver/Visu", Label "Real-time visualization"}
  ];

  sigmaMatrix = sigmaMatrix / Scaling;
  Ec = Ec / Scaling;
  Jc = Jc / Scaling^2;

  mu[Omega] =  mu0 / Scaling;
  rho[Matrix] = 1 / sigmaMatrix;

  // power law E(J) = rho(J) * J
  rho[Filaments] = Ec / Jc^n * Norm[$1]^(n - 1);
  dEdJ[Filaments] =
    Ec / Jc^n * Norm[$1]^(n - 1) * TensorDiag[1, 1, 1] +
    Ec / Jc^n * (n - 1) * Norm[$1]^(n - 3) *
      Tensor[CompX[$1]^2, CompX[$1] * CompY[$1], CompX[$1] * CompZ[$1],
             CompY[$1] * CompX[$1], CompY[$1]^2, CompY[$1] * CompZ[$1],
             CompZ[$1] * CompX[$1], CompZ[$1] * CompY[$1], CompZ[$1]^2];
}

Jacobian {
  { Name Vol ;
    Case {
      { Region AirInf ; Jacobian VolCylShell{AirRadius, InfRadius} ; }
      { Region All ; Jacobian Vol ; }
    }
  }
}

Integration {
  { Name Int ;
    Case {
      { Type Gauss ;
	Case {
	  { GeoElement Triangle ; NumberOfPoints  4 ; }
          { GeoElement Quadrangle ; NumberOfPoints  4 ; }
	  { GeoElement Tetrahedron ; NumberOfPoints  5 ; }
	}
      }
    }
  }
}

Constraint {
  { Name Voltage ;
    Case {
    }
  }
  { Name Current ;
    Case {
      { Region Cut; Value -Itot ; TimeFunction Sin_wt_p[]{2*Pi*Freq, 0.} ; }
    }
  }
}

FunctionSpace {
  { Name HSpace; Type Form1;
    BasisFunction {
      { Name sn; NameOfCoef phin; Function BF_GradNode;
        Support Omega; Entity NodesOf[OmegaCC]; }
      { Name se; NameOfCoef he; Function BF_Edge;
        Support OmegaC; Entity EdgesOf[All, Not BndOmegaC]; }
      { Name sc1; NameOfCoef I1; Function BF_GroupOfEdges;
        Support Omega; Entity GroupsOfEdgesOf[Cut]; }
    }
    GlobalQuantity {
      { Name Current1 ; Type AliasOf        ; NameOfCoef I1 ; }
      { Name Voltage1 ; Type AssociatedWith ; NameOfCoef I1 ; }
    }
    Constraint {
      { NameOfCoef Current1 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint Current ; }
      { NameOfCoef Voltage1 ;
        EntityType GroupsOfEdgesOf ; NameOfConstraint Voltage ; }
    }
  }
}

Formulation {
  { Name MagDynH; Type FemEquation;
    Quantity {
      { Name h; Type Local; NameOfSpace HSpace; }
      { Name I1; Type Global; NameOfSpace HSpace[Current1]; }
      { Name V1; Type Global; NameOfSpace HSpace[Voltage1]; }
    }
    Equation {
      // Nonlinear weak form: Find h_k such that
      //
      //   \partial_t (\mu h_k, h') + (\rho(curl h_k) curl h_k, curl h')
      //     + < n x e, h'> = 0,
      //
      // for all h' in Hspace.
      //
      // Linearization in the superconducting filaments:
      //
      //   E(J_k) \approx E(J_k-1) + (dE/dJ)_k-1 * (J_k - J_k-1)
      //
      // i.e.
      //
      //   (\rho(curl h_k) curl h_k, curl h') \approx
      //       (\rho(curl h_k-1) curl h_k-1, curl h')
      //     + (dEdJ(curl h_k-1) curl h_k, curl h')
      //     - (dEdJ(curl h_k-1) curl h_k-1, curl h')
      //
      Galerkin { DtDof [ mu[] * Dof{h} , {h} ];
        In Omega; Integration Int; Jacobian Vol;  }

      Galerkin { [ rho[] * Dof{d h} , {d h} ];
        In Matrix; Integration Int; Jacobian Vol;  }

      Galerkin { [ rho[{d h}] * {d h} , {d h} ];
        In Filaments; Integration Int; Jacobian Vol;  }
      Galerkin { [ $relax * dEdJ[{d h}] * Dof{d h} , {d h} ];
        In Filaments; Integration Int; Jacobian Vol;  }
      Galerkin { [ - $relax * dEdJ[{d h}] * {d h} , {d h} ];
        In Filaments ; Integration Int; Jacobian Vol;  }

      GlobalTerm { [ Dof{V1} , {I1} ] ; In Cut ; }
    }
  }
}

Resolution {
  { Name MagDynHTime;
    System {
      { Name A; NameOfFormulation MagDynH; }
    }
    Operation {
      CreateDirectory["res"];
      InitSolution[A];
      Evaluate[ $relax = 1 ];
      TimeLoopTheta[time0, time1, dt, theta] {
        Generate[A]; Solve[A];
        Generate[A]; GetResidual[A, $res0]; Evaluate[ $res = $res0, $it = 0 ];
        Print[{$it, $res, $res / $res0},
              Format "Residual %03g: abs %14.12e rel %14.12e"];
        While[$res > tol_abs && $res / $res0 > tol_rel]{
          Solve[A];
          Generate[A]; GetResidual[A, $res]; Evaluate[ $it = $it + 1 ];
          Print[{$it, $res, $res / $res0},
                Format "Residual %03g: abs %14.12e rel %14.12e"];
        }
        SaveSolution[A];
        Test[ GetNumberRunTime[visu]{"Input/Solver/Visu"} ]{ PostOperation[MagDynH]; }
      }
    }
  }

  { Name MagDynHComplex;
    System {
      { Name A; NameOfFormulation MagDynH; Type ComplexValue; Frequency Freq;}
    }
    Operation {
      CreateDirectory["res"];
      Generate[A]; Solve[A]; SaveSolution[A];
    }
  }
}

PostProcessing {
  { Name MagDynH; NameOfFormulation MagDynH;
    Quantity {
      { Name phi; Value{ Local{ [ {dInv h} ] ;
	    In Omega; Jacobian Vol; } } }
      { Name h; Value{ Local{ [ {h} * Scaling ] ;
	    In Omega; Jacobian Vol; } } }
      { Name j; Value{ Local{ [ {d h} * Scaling^2 ] ;
	    In OmegaC; Jacobian Vol; } } }
      { Name b; Value{ Local{ [ mu[]*{h} * Scaling] ;
            In Omega; Jacobian Vol; } } }
      { Name dtb; Value{ Local{ [ mu[]* Dt[{h}] * Scaling ] ;
            In Omega; Jacobian Vol; } } }
      { Name I1 ; Value { Term { [ {I1} ] ;
            In Cut ; } } }
      { Name V1 ; Value { Term { [ {V1} ] ;
            In Cut ; } } }
      { Name Z1 ; Value { Term { [ {V1} / {I1} ] ;
            In Cut ; } } }
      { Name Losses ; Value { Integral { [ rho[{d h}] * {d h} * {d h}];
            In OmegaC ; Integration Int; Jacobian Vol; } } }
    }
  }
}

PostOperation {
  { Name MagDynH ; NameOfPostProcessing MagDynH ; LastTimeStepOnly ;
    Operation {
      Echo["General.Verbosity=3;", File "res/option.pos"];
      Print[ h, OnElementsOf Omega , File "res/h.pos", Name "h [Am⁻1]" ];
      Print[ j, OnElementsOf OmegaC , File "res/j.pos", Name "j [Am⁻²]" ];
      Print[ Losses[OmegaC],  OnGlobal, Format TimeTable,
        File > "res/losses_total.txt", SendToServer "Output/Losses [W]"] ;
      Print[ Losses[Filaments], OnGlobal, Format TimeTable,
        File > "res/losses_filaments.txt"] ;
      Print[ Losses[Matrix], OnGlobal, Format TimeTable,
        File > "res/losses_matrix.txt"] ;
      Print[I1, OnRegion Cut, Format TimeTable, File "res/I1.pos"];
      Print[V1, OnRegion Cut, Format TimeTable, File "res/V1.pos"];
      Print[Z1, OnRegion Cut, Format TimeTable, File "res/Z1.pos"];
      Echo["General.Verbosity=5;", File "res/option.pos"];
    }
  }
}

DefineConstant[
  R_ = {"MagDynHTime", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -bin -v 3 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = { "", Name "GetDP/2PostOperationChoices", Visible 0}
];
