Include "magnetometer_data.geo";

DefineConstant[
  Flag_AnalysisType = {2, Name "Input/0Type of analysis",
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
  Encastrement = Region[{CLAMP_LEFT, CLAMP_RIGHT}];
  Domain_Force = Region[{Domain_Disp}];

  // thermal
  Domain_The = Region[{DomainC_Ele}];
  SurfaceConv_The = Region[{}];
}

Function {
  // electrical
  DefineConstant[
    sigm = {37e6, Name "Input/Materials/3Electric conductivity",
      Label "Electric conductivity [S/m]"},
    b_y = {-1e-6, Name "Input/91B field (y comp.) [T]"},
    V_imposed = {0.00181, Name "Input/92Voltage [V]"}
  ];
  sigma[DomainC_Ele] = sigm ;
  bext[] = Vector[0, b_y, 0];

  // mechanical
  DefineConstant[
    young = {150e9, Name "Input/Materials/0Young modulus [Pa]"},
    nu = {0.17, Name "Input/Materials/1Poisson coeficient"},
    rh = {4400, Name "Input/Materials/2Mass density", Label "Mass density [kg/m^3]"},
    Freq = {100e3, Name "Input/93Frequency [Hz]", Min 90e3, Max 120e3, Step 2.5e3}
  ];

  //F[] = Vector[0, 0, 10];
  E[Domain_Disp] = young ;

  //Cij = [ C11   C12
  //        C21   C22];
  //Cij = E/(1+nu)/(1-2nu)*
  //[ 1-nu        nu         nu         0                  0                  0
  //    nu      1-nu         nu         0                  0                  0
  //    nu        nu       1-nu         0                  0                  0
  //     0         0          0      (1-2nu)/2             0                  0
  //     0         0          0         0               (1-2nu)/2             0
  //     0         0          0         0                  0              (1-2nu)/2 ]

  ff[] = E[]/(1+nu)/(1-2*nu);
  c11 = 1-nu ;
  c12 = nu ;
  c44 = (1-2*nu)/2 ;
  C_11[Domain_Disp] = ff[] * TensorSym[ c11, c12, c12, c11, c12, c11 ];
  C_22[Domain_Disp] = ff[] * TensorSym[ c44, 0, 0, c44, 0, c44 ];
  C_12[Domain_Disp] = Tensor[0,0,0, 0,0,0, 0,0,0];
  C_21[Domain_Disp] = Tensor[0,0,0, 0,0,0, 0,0,0];

  rho[] = rh; // vol. mas

  coef_alpha =  0;//9.889460399076600e-11;
  //coef_beta = 68.413834898694205;
  //coef_beta = 101.1177515907109;
  coef_beta = 0;

  // thermal
  lambda[Domain_The] = 237;
  rhoc[Domain_The] = 2.e6; // vol. mass * heat capacity
  h[] = 1.4; // convection coef (unused)
  TemperatureConv[] = 20;
}

Constraint {
  { Name ElectricScalarPotential ;
    Case {
      { Region Dirichlet0 ; Value 0. ; }
      { Region Dirichlet1 ; Value V_imposed ; }
    }
  }
  { Name DeplacementX ;
    Case {
      { Region Encastrement ; Value 0. ; }
    }
  }
  { Name DeplacementY ;
    Case {
      { Region Encastrement ; Value 0. ; }
    }
  }
  { Name DeplacementZ ;
    Case {
      { Region Encastrement ; Value 0. ; }
    }
  }
  { Name Temperature ;
    Case {
      { Region Dirichlet0 ; Value 20. ; }
      { Region Dirichlet1 ; Value 20. ; }
    }
  }
}

Include "Jacobian_Lib.pro"
Include "Integration_Lib.pro"

Include "Electrokinetics.pro"
Include "Elasticity3D.pro"
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
        GenerateSeparate[Sys_Mec]; EigenSolve[Sys_Mec, 10, 0, 0];
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
        Print[ u, OnElementsOf Domain_Disp, File "res/u.pos", EigenvalueLegend] ;
      EndIf
      If(Flag_AnalysisType != 0)
        Print[ um, OnPoint {l/2,a/2,b/2}, Format Table, File "res/um_middle.txt",
          SendToServer "Output/Middle diplacement [m]", Color "LightYellow" ];
        Print[ u, OnElementsOf Domain_Disp, File "res/u.pos"] ;
        Echo[ "View[PostProcessing.NbViews-1].DisplacementFactor = 1e10;",
          File "res/u.pos.opt", LastTimeStepOnly] ;
      EndIf
      Echo[ "View[PostProcessing.NbViews-1].VectorType=5;",
        File "res/u.pos.opt", LastTimeStepOnly] ;
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
  C_ = {"-solve", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
