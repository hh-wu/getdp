// Common to 2D and 3D

Include "inductor_data.geo";

If(Flag_3Dmodel==0)
  Dir="res/";
EndIf
If(Flag_3Dmodel==1)
  Dir="res3d/";
EndIf

ExtGmsh     = ".pos";
ExtGnuplot  = ".dat";

DefineConstant[
  Flag_AnalysisType = { 0,  Choices{0="Static",  1="Time domain"},
    Name "Input/02Type of analysis",  Highlight "Blue",
    Help Str["- Use 'Static' to compute static fields created in the inductor",
      "- Use 'Time domain' to compute the dynamic response of the inductor"]},

  Flag_BC_Type = {1, Choices{0="Neumann",1="Dirichlet"}, ReadOnly (Flag_Infinity==1),
    Name "Input/20Boundary condition at infinity",
    Highlight "Blue"},

  Flag_NL = {0, Choices{0,1},Name "Input/NonlinearSystem",Label "Nonlinear BH-curve"},
  Flag_NL_Curve = {0,Choices{0="EIcore",1="park"},Name "Input/NonlinearCurve",Label "BH"}
];

DefineConstant[
  //-------------------------------------------------------------
  // optimization stuff ...
  //-------------------------------------------------------------
  ResId = "",
  ResDir = StrCat["res/", ResId],

  Flag_SolveStateVar = {1, Name "Input/OptParam/SolveStateVar",
                           Label "Get State Variable", Choices {0,1}, Visible 1},
  
  Flag_SolveEigSys = {0, Name "Input/OptParam/SolveStateVarEig",
                           Label "Get State Variable Eig", Choices {0,1}, Visible 1},

  Flag_SolveAdjointVar = {1, Name "Input/OptParam/SolveAdjointVar",
                             Label "Get Adjoint Variable",Choices {0,1}, Visible 1},

  Flag_PerfType = {COMPLIANCE, Name "Input/OptParam/PerfType",
                               Label "performance function type",
                               Choices {NO_PERF="No performance function",
                                        BFIELD_ERROR="air gap B field error",
                                        TORQUE_VAR="torque variance",
				        IRON_LOSSES="losses",
                                        COMPLIANCE="compliance",
                                        TORQUE="torque"},Visible Flag_SolveAdjointVar},
  // Sensitivity analysis method --> replace by 1 variable!!!
  Flag_SemiAnalyticAvmSens = {0, Name "Input/OptParam/SemiAnalyticAvmSensQuantitys",
                                 Label "Semi analytic quantitys (avm)",
                                 Choices {0,1}, Visible 1},

  Flag_velocity_vol = {0, Name "Input/OptParam/FlagVelocityVol",
                      Label "Volume Velocity?", Choices {0,1},Visible 1},

  Flag_SemiAnalyticDirSens = {0, Name "Input/OptParam/SemiAnalyticDirQuantitys",
                                 Label "Semi analytic quantitys (direct)", 
                                 Choices {0,1}, Visible 0},

  Flag_AvmFixedDomSens = {0, Name "Input/OptParam/AdjointMethodSensFixedDom",
                             Label "fixed domain derivative (avm)", 
                             Choices {0,1}, Visible 1},

  Flag_FixedDomSensEig = {0, Name "Input/OptParam/SensFixedDomEig",
                             Label "fixed domain derivative (eig)", 
                             Choices {0,1}, Visible 1},

  Flag_DirFixedDomSens = {0, Name "Input/OptParam/DirMethodSensFixedDom",
                            Label "fixed domain derivative (direct)", 
                            Choices {0,1}, Visible 0},

  Flag_AvmVarDomSens = {0, Name "Input/OptParam/AdjointMethodSensVarDom",
                           Label "continuum derivative (avm)",
                           Choices {0,1}, Visible 1},

  Flag_LieAvmVarDomSens = {1, Name "Input/OptParam/AdjointMethodSensLie",
                           Label "continuum derivative (avm)",
                           Choices {0,1}, Visible 1},

  Flag_DirVarDomSens = {0, Name "Input/OptParam/DirectMethodSensVarDom",
                           Label "continuum derivative (direct)",
                           Choices {0,1}, Visible 0},
  
  NbSubDom = {2, Name "Input/OptParam/NbDomain", Label "Nbr of regions", Visible 0},

  //Tnom = {90, Name "Input/OptParam/TorqueNominal", Visible 1},
  Tnom = {90.0, Name "Input/OptParam/TorqueNominal",
                Label "Nominal desired torque",
                Visible (Flag_PerfType==TORQUE_VAR)},
  // Filter
  Flag_filterSensitivity = {0, Name "Input/OptParam/filterSens", 
                               Label "Filter Derivatives?",
                               Choices {0, 1}, Visible (Flag_topopt==1)}, 

  Rmin = {0.001*10, Name "Input/OptParam/RadiusSensFilter",
                    Label "Sensitivity Filter Radius", 
                    Visible (Flag_filterSensitivity==1)},

  Flag_filterMeshCoordinates = {0, Name "Input/OptParam/filterMeshCoord", 
                                   Label "Filter mesh nodes coordinates?", 
                                   Choices {0, 1}, Visible 0}, 

  regionVar = {0, Name "Input/OptParam/regionVar",
                  Label "Region of design variables", 
                  Choices {0="E-core",1="E+I-core"},
                  Visible (Flag_topopt)},

  Flag_InterpLaw = {0, Name "Input/OptParam/MaterialInterpLaw",
                       Label "material interpolation law",
                       Choices {0="SIMP",1="RAMP"},Visible (Flag_topopt==1)},

  degree_SIMP = {3.0, Name "Input/OptParam/SimpPenalDegree",
                      Label "Degree SIMP", Visible (Flag_topopt==1)}
  //-------------------------------------------------------------

];


Group {
  Core = Region[ {ECORE, ICORE} ];
  Ind_1      = Region[{COIL}] ;

  If (Flag_3Dmodel==0)
    Ind_1_ = Region[{(COIL+1)}] ;
    Inds   = Region[ {Ind_1, Ind_1_} ];
    //Inds   = Region[ {Ind_1} ];
  EndIf
  If (Flag_3Dmodel==1)
    SkinInd_1  = Region[{SKINCOIL}] ;
    SkinHole_1 = Region[{SKINCOIL_}] ;
    ElecInd_1 = Region[{SURF_ELEC0}] ;
    CutInd_1  = Region[{CUTCOIL}] ;
    VolInInd_1  = Region[{LEG_INCOIL}] ;

    SkinInds = Region[ {SkinInd_1} ];
    Inds  = Region[ {Ind_1} ];
  EndIf

  AirGap = Region[ {AIRGAP_C,AIRGAP_I}];

  Air  = Region[ AIR ];
  AirInf = Region[ AIRINF ];

  If(Flag_OpenCore)
    Air  += Region[ {AirGap} ];
  EndIf
  If(!Flag_OpenCore)
    Core += Region[ {AirGap} ];
  EndIf

 // Surfaces for imposing boundary conditions
 If(Flag_BC_Type==1)
   Surf_Inf = Region[ SURF_AIROUT ];
 EndIf
 If(Flag_Symmetry)
   If(Flag_3Dmodel==0)
     Surf_bn0 = Region[ {AXIS_Y} ];
   EndIf
   If(Flag_3Dmodel==1)
     Surf_bn0 = Region[ {CUT_YZ, CUT_XY} ];
   EndIf
 EndIf
}

Function {
  Freq = 50. ;
  // remarque: 
  //  -> Irms = 0.4 --> légère saturation => NL 
  //                => diminuer le courant pour être lin
  DefineConstant[
    Irms = { 3.0/*.005*//*IA*/, Min 1, Max 4*IA, Step 2,
        Name "Input/4Coil Parameters/0Current (rms) [A]", Highlight "AliceBlue"},
    NbWires = { 400/*Nw*/,
      Name "Input/4Coil Parameters/1Number of turns", Highlight "AliceBlue"}
  ];

  II = Irms *Sqrt[2] ;

  NbWires[]  = NbWires ;

  If(Flag_3Dmodel==0)
    SurfCoil[] = SurfaceArea[]{COIL} ;
    Idir[#{COIL}]     =  1. ;
    Idir[#{(COIL+1)}] = -1. ;
    Idir[#{Air,Inds,Core,-COIL,-(COIL+1)}]     =  0. ;
    vDir[]   = Vector[ 0, 0, Idir[]] ;
  EndIf
  If(Flag_3Dmodel==1)
    SurfCoil[] = SurfaceArea[]{SURF_ELEC0} ;
    vDir[] = (
      (Fabs[X[]]<=wcoreE && Z[]>= Lz/2) ? Vector [1, 0, 0]:
      (Fabs[X[]]<=wcoreE && Z[]<=-Lz/2) ? Vector [ -1, 0, 0]:
      (Fabs[Z[]]<=Lz/2   && X[]>= wcoreE) ? Vector [ 0, 0, -1]:
      (Fabs[Z[]]<=Lz/2   && X[]<=-wcoreE) ? Vector [ 0, 0,  1]:
      (X[]>wcoreE && Z[]>Lz/2)?Vector [Sin[Atan2[Z[]-Lz/2,X[]-wcoreE]#1], 0, -Cos[#1]]:
      (X[]>wcoreE && Z[]<-Lz/2)?Vector [Sin[Atan2[Z[]+Lz/2,X[]-wcoreE]#1], 0, -Cos[#1]]:
      (X[]<-wcoreE && Z[]>Lz/2)?Vector [Sin[Atan2[Z[]-Lz/2,X[]+wcoreE]#1], 0, -Cos[#1]]:
      Vector [Sin[Atan2[Z[]+Lz/2,X[]+wcoreE]#1], 0, -Cos[#1]] );
  EndIf

  pA = (Flag_AnalysisType==0) ? Pi/2: 0.;
  IA[] = F_Sin_wt_p[]{2*Pi*Freq, pA}; // DomainB
  js0[] = NbWires[]/SurfCoil[] * vDir[] ;

  // Material properties
  mu0 = 4.e-7 * Pi ;

  // Use if linear problem
  DefineConstant[
    sigma_coil = { sigma_cu, Label "Conductivity [S/m]",
      Name "Input/4Coil Parameters/5Conductivity", Highlight "AliceBlue"},
    mur_fe = { 2000., Min 100, Max 2000, Step 100,
      Name "Input/42Core relative permeability", Highlight "AliceBlue",
      Visible (!Flag_NL)}
  ];

  // Reluctance of the simplified magnetic circuit (neglecting leakage and frindging)
  For k In {0:2}
    Reluctance~{k}[] = Rm~{k};// [A/Wb]
    Inductance~{k}[] = NbWires[]*NbWires[]/Reluctance~{k}[]*1e3;// [mH]
  EndFor
 }

 // model
 If(Flag_3Dmodel==0)
   Include "magstadyn_a.pro" ;
 EndIf
 If(Flag_3Dmodel==1)
   Include "magstadyn_avs_3d.pro" ;
 EndIf

 // optimization post-pro
 Include "optim_post.pro" ;





