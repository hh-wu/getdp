Include "magnetometer_data.geo";

DefineConstant[
  Flag_AnalysisType = {3, Name "Input/0Type of analysis",
    Choices{0="Eigenmodes",
      1="Electrokinetics",
      2="Electro-mechanical (static)",
      3="Electro-mechanical (dynamic)",
      4="Electro-thermal"}}
  DEGRE2 = {0, Choices{0="First order", 1="Second order"},
    Name "Input/1FE scheme"}
];

Group {
  // electrical
  DomainC_Ele = Region[ {BEAM, CONDUCTOR_LEFT, CONDUCTOR_RIGHT} ] ;
  Dirichlet0 = Region[{VOLTAGE_LEFT}];
  Dirichlet1 = Region[{VOLTAGE_RIGHT}];

  // mechanical
  Domain_Disp = Region[{DomainC_Ele}];
  Domain_Force = Region[{Domain_Disp}];

  // thermal
  Domain_The = Region[{DomainC_Ele}];
  SurfaceConv_The = Region[{}];
}

Function {
  // desired fundamental frequency (onelab parameter)
  DefineConstant[
    f0d = {1e5, Name StrCat(pInOpt,"Desired fundamental frequency [Hz]")}
  ];

  // fundamental frequency
  f0[] = $EigenvalueReal/(2*Pi);

  // objective function
  objective[] = SquNorm[ f0[] - f0d];
}

Function {
  // electrical
  DefineConstant[
    sigm = {37e6, Name "Input/Materials/3Electric conductivity",
      Label "Electric conductivity [S/m]",
      Visible (Flag_AnalysisType != 0)},
    b_y = {-1e-6, Name "Input/91B field (y comp.) [T]",
      Visible (Flag_AnalysisType != 0)},
    V_imposed = {0.00181, Name "Input/92Voltage [V]",
      Visible (Flag_AnalysisType != 0)}
  ];
  sigma[DomainC_Ele] = sigm ;
  bext[] = Vector[0, b_y, 0];

  // mechanical
  DefineConstant[
    young = {150e9, Name "Input/Materials/0Young modulus [Pa]",
      Visible (Flag_AnalysisType != 1)},
    poisson = {0.17, Name "Input/Materials/1Poisson coeficient",
      Visible (Flag_AnalysisType != 1)},
    rh = {4400, Name "Input/Materials/2Mass density", Label "Mass density [kg/m^3]",
      Visible (Flag_AnalysisType != 1)},
    Freq = {100e3, Name "Input/93Frequency [Hz]", Min 90e3, Max 120e3, Step 2.5e3,
      Visible (Flag_AnalysisType == 3)},
    target_freq = {0, Name "Input/93Target frequency [Hz]", Min 0, Max 1e7, Step 1e4,
      Visible (Flag_AnalysisType == 0)}
  ];

  //F[] = Vector[0, 0, 10];
  E[Domain_Disp] = young ;
  nu[] = poisson ;
  rho[] = rh; // vol. mas
  gravity[] = 0;

  coef_alpha =  0;
  coef_beta = 0;
  //coef_alpha = 9.889460399076600e-11;
  //coef_beta = 68.413834898694205;
  //coef_beta = 101.1177515907109;

  // thermal
  DefineConstant[
    ambiant_temp = {20, Name "Input/92Ambiant temperature [C]",
      Visible (Flag_AnalysisType == 4)},
    lambda_temp = {237, Name "Input/Materials/Thermal conductivity",
      Visible (Flag_AnalysisType == 4)},
    rchoc_temp = {2e6, Name "Input/Materials/Density * heat capacity",
      Visible (Flag_AnalysisType == 4)}
  ];

  lambda[Domain_The] = lambda_temp;
  rhoc[Domain_The] = rchoc_temp; // vol. mass * heat capacity
  TemperatureConv[] = ambiant_temp; // unused
  h[] = 1.4; // convection coef (unused)
}

Constraint {
  { Name ElectricScalarPotential ;
    Case {
      { Region Dirichlet0 ; Value 0. ; }
      { Region Dirichlet1 ; Value V_imposed ; }
    }
  }
  { Name Displacement_x ;
    Case {
      { Region Dirichlet0 ; Value 0. ; }
      { Region Dirichlet1 ; Value 0. ; }
    }
  }
  { Name Displacement_y ;
    Case {
      { Region Dirichlet0 ; Value 0. ; }
      { Region Dirichlet1 ; Value 0. ; }
    }
  }
  { Name Displacement_z ;
    Case {
      { Region Dirichlet0 ; Value 0. ; }
      { Region Dirichlet1 ; Value 0. ; }
    }
  }
  { Name Temperature ;
    Case {
      { Region Dirichlet0 ; Value ambiant_temp ; }
      { Region Dirichlet1 ; Value ambiant_temp ; }
    }
  }
}

Include "Jacobian_Lib.pro"
Include "Integration_Lib.pro"

Include "Electrokinetics.pro"
Include "Elasticity.pro"
Include "Thermal.pro"

Resolution {
  { Name Analysis ;
    System {
      If(Flag_AnalysisType == 0)
        { Name Sys_Mec; NameOfFormulation Elasticity3D_u_modal;
          //Type Complex;
        }
      EndIf

      If(Flag_AnalysisType == 1)
        { Name Sys_EleKin ; NameOfFormulation Electrokinetics_v ; }
      EndIf

      If(Flag_AnalysisType == 2)
        { Name Sys_EleKin ; NameOfFormulation Electrokinetics_v ; }
        { Name Sys_Mec; NameOfFormulation Elasticity3D_u_coupled_static; }
      EndIf

      If(Flag_AnalysisType == 3)
        { Name Sys_EleKin ; NameOfFormulation Electrokinetics_v ; }
        { Name Sys_Mec; NameOfFormulation Elasticity3D_u_coupled_transient;
	  Type Complex; Frequency Freq;}
      EndIf

      If(Flag_AnalysisType == 4)
        { Name Sys_EleKin ; NameOfFormulation Electrokinetics_v ; }
        { Name Sys_The ; NameOfFormulation Thermal_T ; }
      EndIf
    }
    Operation {
      CreateDir["res/"];

      If(DEGRE2)
        SetGlobalSolverOptions["-petsc_prealloc 400"];
      EndIf

      If(Flag_AnalysisType == 0)
        GenerateSeparate[Sys_Mec]; EigenSolve[Sys_Mec, 10, (2*Pi*target_freq)^2, 0];
        SaveSolutions[Sys_Mec] ;
        PostOperation[Mec] ;
      EndIf

      If(Flag_AnalysisType == 1)
        Generate[Sys_EleKin] ; Solve[Sys_EleKin] ; SaveSolution[Sys_EleKin] ;
        PostOperation[EleKin] ;
      EndIf

      If(Flag_AnalysisType == 2 || Flag_AnalysisType == 3)
        Generate[Sys_EleKin] ; Solve[Sys_EleKin]; SaveSolution[Sys_EleKin];
        Generate[Sys_Mec]; Solve[Sys_Mec]; SaveSolution[Sys_Mec] ;
        PostOperation[EleKin] ;
        PostOperation[Mec] ;
      EndIf

      If(Flag_AnalysisType == 4)
        InitSolution[Sys_The] ;
        InitSolution[Sys_EleKin] ;
        Generate[Sys_EleKin]; Solve[Sys_EleKin]; SaveSolution[Sys_EleKin];
        Generate[Sys_The]; Solve[Sys_The]; SaveSolution[Sys_The];
        PostOperation[EleKin] ;
        PostOperation[The] ;
      EndIf
    }
  }
}

PostOperation {
  { Name EleKin ; NameOfPostProcessing Electrokinetics;
    Operation {
      Print[ v, OnElementsOf DomainC_Ele, File "res/v.pos"] ;
      Print[ j, OnElementsOf DomainC_Ele, File "res/j.pos"] ;
      Print[ f, OnElementsOf DomainC_Ele, File "res/f.pos"] ;
    }
  }

  { Name Mec ; NameOfPostProcessing Elasticity3D;
    Operation {
      If(Flag_AnalysisType == 0)
        Print[ u, OnElementsOf Domain_Disp, File "res/u.pos", EigenvalueLegend];
        Print[ eigenFrequency, OnRegion Domain_Disp, Format Table, TimeStep 0,
          File "res/fundamentaleigenfrequency.txt",
          SendToServer "Output/Fundamental eigen frequency [Hz]" ];
        Print[ eigenFrequency, OnRegion Domain_Disp, Format Table, TimeStep 1,
          File "res/fundamentaleigenfrequency.txt",
          SendToServer "Output/Fundamental eigen frequency 1 [Hz]" ];
        Print[ objective, OnRegion Domain_Disp, Format Table, TimeStep 0,
          File "res/objective.txt",SendToServer "Output/diffEigenFreqNorm" ];
        Echo[ Str["l=PostProcessing.NbViews-1; View[l].VectorType=5; ",
            "View[l].DisplacementFactor = 5e-5;"],
          File "res/tmp.geo", LastTimeStepOnly] ;
      EndIf
      If(Flag_AnalysisType != 0)
        Print[ u, OnElementsOf Domain_Disp, File "res/u.pos"] ;
        Print[ um, OnPoint {l/2,a/2,b/2}, Format Table, File "res/um_middle.txt",
          SendToServer "Output/Middle diplacement [m]", Color "LightYellow" ];
        Echo[ Str["l=PostProcessing.NbViews-1; View[l].VectorType=5; ",
            "View[l].DisplacementFactor = 1e10;"],
          File "res/tmp.geo", LastTimeStepOnly] ;
      EndIf
    }
  }
  { Name The ; NameOfPostProcessing Thermal;
    Operation {
      Print[ T, OnElementsOf Domain_The, File "res/T.pos"] ;
    }
  }
}

DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -slepc", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
