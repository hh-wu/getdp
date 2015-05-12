// Common parameters
Include "choke_data.geo";

// Solver parameters
DefineConstant[
  Flag_AnalysisType = { 0,
    Choices{0="Magnetostatic solver",
      1="MagnetoMechanical solver",
      2="Mechanical natural frequencies"},
    Name "Input/1Type of analysis", // Highlight "Blue",
    Help Str[ "- Use 'Magnetostatic solver' to compute the magnetic fields on the inductor",
      "- Use 'MagnetoMechanical solver' to compute the deflection due to magnetostriction and/or maxwell stress tensor",
      "- Use 'Mechanical natural frequencies' to compute the modal frequencies of the inductor"]},

  is_Magnetostriction = {1,
    Choices{0,1},
    Name "Input/Magnetic Forces/Compute Magnetostriction",
    Visible (Flag_AnalysisType==1)},

  is_Maxwell = {1,
    Choices{0,1},
    Name "Input/Magnetic Forces/Compute Maxwell stress tensor",
    Visible (Flag_AnalysisType==1)},

  freq = { 0,
    Name "Input/2Frequency",Highlight "LightSkyBlue",
    Visible (Flag_AnalysisType==1)},

  x_measurement = {0,
    Name "Input/Measurement point/x [m]",Highlight "LightSkyBlue",
    Visible (Flag_AnalysisType==1),
    ReadOnly 1},

  y_measurement = {nb_sheet*H_sheet+(nb_sheet+1)*airgap+H_yoke,
    Name "Input/Measurement point/y [m]",Highlight "LightSkyBlue",
    Visible (Flag_AnalysisType==1),
    ReadOnly 1},

  Res_dir = "solutions/"
];

// Material parameters
DefineConstant[
  mur_sheet = {1000,
    Name "Input/Core parameters/sheet material/relative permeability µr",Closed 1} ,
  young_sheet = {220e9,
    Name "Input/Core parameters/sheet material/Young modulus [Pa]",Closed 1} ,
  poisson_sheet = {0.3,
    Name "Input/Core parameters/sheet material/Poisson's ratio",Closed 1} ,
  m_vol_sheet = {7.7e3,
    Name "Input/Core parameters/sheet material/Density [kg.m-3]",Closed 1} ,
  // Vetronit SGS
  mur_airgap = {1,
    Name "Input/Core parameters/airgap material/relative permeability µr",Closed 1} ,
  young_airgap = {15e9,
    Name "Input/Core parameters/airgap material/Young modulus [Pa]",Closed 1} ,
  poisson_airgap = {0.3,
    Name "Input/Core parameters/airgap material/Poisson's ratio",Closed 1} ,
  m_vol_airgap = {1.85e3,
    Name "Input/Core parameters/airgap material/Density [kg.m-3]",Closed 1}
];

// Electric source parameters
DefineConstant[
  current = {220,
    Name "Input/Winding parameters/Current [A]"} ,
  turn = {100,
    Name "Input/Winding parameters/Total number of turns"}
];

Group {
  Sheet = Region[ {2} ];
  Airgap= Region[ {1} ];
  Coil_pos = Region[ {3} ];
  Coil_neg = Region[ {4} ];
  Coil = Region[ {3,4} ];
  Air = Region[ {5} ];
  Ground = Region[ {7} ];
  Circuit_mag = Region[ {Sheet,Airgap}];
  Boundaries_Air = Region[ {6} ];

  Domain_Mag = Region[ {Coil,Air,Airgap,Sheet}];
  Domain_Mag_nlin = Region[ {Sheet}];
  Domain_Courant=Region[ {Coil }];

  Domain_Force_Sur = Region[ {Sheet }];
  Domain_Disp = Region[ {Airgap,Sheet} ];
  Domain_Force = Region[ Domain_Force_Sur ];
}

Function {
  mu0  = 4.e-7 * Pi ;

  // Mechanical properties
  young[Sheet] = young_sheet;
  poisson[Sheet] = poisson_sheet;
  rho[Sheet] = m_vol_sheet;

  young[Airgap] = young_airgap;
  poisson[Airgap] = poisson_airgap;
  rho[Airgap] = m_vol_airgap;

  // magnetostrictif properties
  lambdalist = ListFromFile["magnetostriction.txt"];

  lambdap[] = InterpolationLinear[$1]{ lambdalist() }*1e-6;
  lambdaper[] = -lambdap[$1]/2;

  // Coil parameters
  //js[Coil_pos]=Vector[0,0,1.433e6];
  //js[Coil_neg]=Vector[0,0,-1.433e6];
  js[Coil_pos] = Vector[0,0,current*turn/SurfaceArea[]{3}];
  js[Coil_neg] = Vector[0,0,-current*turn/SurfaceArea[]{4}];

  // Solver parameters
  NL_NbrMaxIter = 5;   // Max nbr iterations for iteractive loop
  NL_Eps = 1.e-2;        // Convergence criterium for iteractive loop
  NL_Relax = 1;         // Relaxation Factor for iteractive loop

  // magnetic properties
  nu [ Region[{Air, Coil}] ]  = 1. / mu0 ;
  nu [ Sheet ] = 1/(mu0*mur_sheet);
  nu [ Airgap ] = 1/(mu0*mur_airgap);
}

Include "Jacobian.pro"
Include "MagSta_2D.pro"
Include "Elasticity_2D.pro"

Resolution {
  { Name Analysis ;
    System {
      If (Flag_AnalysisType == 0)
        { Name A ; NameOfFormulation MagSta_a ; }
      EndIf
      If(Flag_AnalysisType == 1)
        { Name A ; NameOfFormulation MagSta_a ; }
        { Name Sys_Mec ; NameOfFormulation Mec_Mag_dyn_2D;  Frequency {freq}; }
      EndIf
      If(Flag_AnalysisType == 2)
        { Name Sys_Mec_eigen; NameOfFormulation Mec_eigen; /* Type Complex; */  }
      EndIf
    }
    Operation {
      CreateDir[Res_dir];
      If (Flag_AnalysisType == 0)
        Generate[A] ; Solve[A] ; SaveSolution[A];
      EndIf
      If(Flag_AnalysisType == 1)
        Generate[A] ; Solve[A] ; SaveSolution[A];
        InitSolution [Sys_Mec];
        IterativeLoop[1, NL_Eps, NL_Relax] { GenerateJac[Sys_Mec]; SolveJac[Sys_Mec]; }
      EndIf
      If(Flag_AnalysisType == 2)
        GenerateSeparate[Sys_Mec_eigen];
        EigenSolve[Sys_Mec_eigen, 40, 0, 0];
        SaveSolutions[Sys_Mec_eigen] ;
      EndIf
    }
  }
}

PostOperation {
  If (Flag_AnalysisType == 0)
    { Name Maps ; NameOfPostProcessing MagSta_a;
      Operation {
        Print[ az, OnElementsOf Domain_Mag, File StrCat [Res_dir,"az.pos"]] ;
        // Print[ b, OnElementsOf Domain_Mag, File StrCat [Res_dir,"b_a.pos"]] ;
        Print[ bn, OnElementsOf Domain_Mag, File StrCat [Res_dir,"bn_a.pos"]] ;
        Print[ j, OnElementsOf Domain_Courant, File StrCat [Res_dir,"j_a.pos"]] ;
        Print[ W, OnElementsOf Domain_Mag, File StrCat [Res_dir,"w.pos"]] ;
        Print[ h, OnElementsOf Domain_Mag, File StrCat [Res_dir,"h_a.pos"], Depth 0 ] ;
      }
    }
  EndIf
  If (Flag_AnalysisType == 1)
    { Name Maps ; NameOfPostProcessing Mec2D_u;
      Operation {
        Print [ u,  OnElementsOf Domain_Disp, File StrCat [Res_dir,"u.pos" ]] ;
        Echo[ Str["View[PostProcessing.NbViews-1].VectorType=5;",
            "View[PostProcessing.NbViews-1].DisplacementFactor = 2e5;"],
          LastTimeStepOnly, File StrCat [Res_dir,"tmp.pos"]] ;
        // Print [ eps,  OnElementsOf Domain_Disp, File StrCat [Res_dir,"eps.pos" ]] ;
        // Print [ eps_N,  OnElementsOf Domain_Disp, File StrCat [Res_dir,"eps_N.pos" ]] ;
        // Print [ Fmaxwell,  OnElementsOf Domain_Disp, File StrCat [Res_dir,"Fmaxwell.pos" ]] ;
        Print[ bn, OnElementsOf Domain_Mag, File StrCat [Res_dir,"bn.pos" ]] ;
        Print [ u_N, OnPoint {x_measurement,y_measurement-1e-3,0},
          LastTimeStepOnly,
          File StrCat [Res_dir,"u_measurement_N.dat"],
          SendToServer "Output/displacement |u| [m]", Color "Ivory"];
        Print [ u_x, OnPoint {x_measurement,y_measurement-1e-3,0},
          LastTimeStepOnly,
          File StrCat [Res_dir,"u_measurement_x.dat" ],
          SendToServer "Output/Displacement X |u_x| [m]", Color "Ivory"];
        Print [ u_y, OnPoint {x_measurement,y_measurement-1e-3,0},
          LastTimeStepOnly,
          File StrCat [Res_dir,"u_measurement_y.dat" ],
          SendToServer "Output/displacement Y |u_y| [m]", Color "Ivory"];
      }
    }
  EndIf
  If (Flag_AnalysisType == 2)
    { Name Maps; NameOfPostProcessing Mec_eigen;
      Operation {
        Print [ u,  OnElementsOf Domain_Disp, File StrCat [Res_dir,"u_eigen.pos"],
          EigenvalueLegend ] ;
        Echo[ Str["View[PostProcessing.NbViews-1].VectorType=5;",
            "View[PostProcessing.NbViews-1].DisplacementFactor = 0.05;"],
          LastTimeStepOnly, File StrCat[Res_dir, "tmp.pos"]] ;
      }
    }
  EndIf
}

DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -slepc -bin", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"Maps", Name "GetDP/2PostOperationChoices", Visible 0}
];
