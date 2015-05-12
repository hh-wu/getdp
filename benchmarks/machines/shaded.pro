Include "shaded_data.geo";

DefineConstant[
  Flag_AnalysisType = {1,
    Choices{
      0="Static",
      1="Time domain",
      2="Frequency domain"},
    Name "Input/19Type of analysis", Highlight "Blue", Visible 1,
    Help Str["- Use 'Static' to compute static fields created in the machine",
      "- Use 'Time domain' to compute the dynamic response of the machine",
      "- Use 'Frequency domain' to compute steady-state phasors depending on the slip"]} ,
  Flag_Case = {0,
    Choices{
      0="Conducting rotor and rings",
      1="Only conducting rings",
      2="No conducting parts"},
    Name "Input/29Conducting regions", Highlight "Blue", Visible 1},
  Flag_SrcType_Stator = { 2, Choices{1="Current", 2="Voltage"},
    Name "Input/41Source type in stator", Highlight "Blue", Visible 1},
  Flag_NL = { 1, Choices{0,1},
    Name "Input/90Nonlinear BH-curve", ReadOnly 0, Visible 1},
  Flag_NL_law_Type = { 0, Choices{
      0="Analytical", 1="Interpolated",
      2="Analytical VH800-65D", 3="Interpolated VH800-65D"},
    Name "Input/91BH-curve", Highlight "Blue", Visible Flag_NL}
];

Flag_Cir = (Flag_SrcType_Stator==2);

Group {
  Stator_Fe     = Region[STATOR_FE] ;
  Stator_Al     = Region[{}];
  Stator_Air    = Region[STATOR_AIR] ;
  Stator_Airgap = Region[STATOR_AIRGAP] ;
  Stator_Bnd_A0 = Region[STATOR_BND_A0] ;
  Stator_Bnd_A1 = Region[STATOR_BND_A1] ;

  For k In {0:3}
    Stator_Ring~{k} = Region[{(STATOR_RING+k)}]; // Up: 0 left, 1 right; Down: 2 left, 3 right
    Stator_Rings   += Region[{(STATOR_RING+k)}];
  EndFor
  Stator_Cu = Region[{Stator_Rings}];


  Rotor_Fe     = Region[ROTOR_FE] ;
  Rotor_Al     = Region[{}];
  Rotor_Cu     = Region[{}];
  Rotor_Air    = Region[ROTOR_AIR] ;
  Rotor_Airgap = Region[ROTOR_AIRGAP] ;
  Rotor_Bnd_A0 = Region[ROTOR_BND_A0] ;
  Rotor_Bnd_A1 = Region[ROTOR_BND_A1] ;

  MovingBand_PhysicalNb = Region[MOVING_BAND] ;  // Fictitious number for moving band, not in the geo file
  Surf_Inf = Region[SURF_EXT] ;

  Dummy = Region[NICEPOS];

  nbInds = 1;
  Stator_Ind_Ap = Region[STATOR_IND_AP]; Stator_Ind_Am = Region[STATOR_IND_AM]; // right
  Stator_Ind_Bp = Region[{}];            Stator_Ind_Bm = Region[{}];
  Stator_Ind_Cp = Region[{}];            Stator_Ind_Cm = Region[{}];

  PhaseA = Region[{Stator_Ind_Ap, Stator_Ind_Am}];
  PhaseB = Region[{}];
  PhaseC = Region[{}];

 // FIXME: Just one physical region for nice graph in Onelab
  PhaseA_pos = Region[Stator_Ind_Ap];
  PhaseB_pos = Region[{}];
  PhaseC_pos = Region[{}];

  // For PostProcessing (only phase A)
  Flag_SrcType_StatorB = 99;
  Flag_SrcType_StatorC = 99;
  NbPhases=1;

  Stator_IndsP = Region[Stator_Ind_Ap];
  Stator_IndsN = Region[Stator_Ind_Am];

  Stator_Inds = Region[{PhaseA, PhaseB, PhaseC}] ;
  Rotor_Inds  = Region[{}] ;

  StatorCC = Region[Stator_Fe] ;
  RotorCC  = Region[{}] ;
  StatorC  = Region[{}] ;
  RotorC   = Region[{}] ;

  If(Flag_Case==0) // conducting rotor and rings
    StatorC += Region[Stator_Rings];
    RotorC  += Region[Rotor_Fe];
  EndIf
   If(Flag_Case==1) // only conducting rings
    StatorC += Region[Stator_Rings];
    RotorCC += Region[Rotor_Fe];
  EndIf
  If(Flag_Case==2) // non-conducting rotor and rings
    StatorCC += Region[Stator_Rings];
    RotorCC += Region[Rotor_Fe];
  EndIf

  // Moving band:  with or without symmetry, these BND lines must be complete
  Stator_Bnd_MB = Region[STATOR_BND_MOVING_BAND];
  Rotor_Bnd_MB  = Region[ROTOR_BND_MOVING_BAND];
}

Function {
  Freq = 50;
  T = 1/Freq;

  DefineConstant[
    Flag_ImposedSpeed = { 2, Choices{0="None", 1="Synchronous speed (no load)",
        2="Choose speed"}, Name "Input/30Imposed rotor speed [rpm]",
      Highlight "Blue", Visible Flag_AnalysisType!=2},
    myrpm = { rpm, Name "Input/31Speed [rpm]",
      Highlight "AliceBlue", ReadOnlyRange 1, Visible (Flag_ImposedSpeed==2 && Flag_AnalysisType!=2)},
    Tmec = { 0, Name "Input/32Mechanical torque [Nm]",
      Highlight "AliceBlue", Visible (!Flag_ImposedSpeed && Flag_AnalysisType!=2) },
    Frict = { 0, Name "Input/33Friction torque [Nm]",
      Highlight "AliceBlue", Visible (!Flag_ImposedSpeed && Flag_AnalysisType!=2) },
    NbT = {10, Name "Input/61Total number of periods",
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1)},
    NbSteps = {100, Name "Input/60Number of time steps per period",
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1)}
  ];

  wr = rpm/60*2*Pi ; // angular rotor speed in rad_mec/s

  // imposed movement with fixed speed wr
  delta_time = T/NbSteps; // time step in s
  delta_theta[] = (Flag_ImposedSpeed) ? (-delta_time*wr) : ($Position-$PreviousPosition); // angle step (in rad)
  time0 = 0.;                 // initial time in s
  timemax = NbT*T;  // final time  in s

  Stator_PhaseArea[] = SurfaceArea[]{STATOR_IND_AP} + SurfaceArea[]{STATOR_IND_AM};
  NbWires[]  = 2*Ns; // Number of wires in series per phase
  SurfCoil[] = Stator_PhaseArea[];

 DefineConstant[
    Irms = { IA, Name "Input/50Stator current (rms) [A]",
      Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1)},
    Vrms = { VA, Name "Input/50Stator voltage (rms) [V]",
      Highlight "AliceBlue", Visible (Flag_SrcType_Stator==2)}
  ] ;

  VV = Vrms * Sqrt[2] ;
  II = Irms * Sqrt[2] ;

  Va = VV ;
  Vb = 0 ; Vc = 0 ;

  pA = Pi/2 ;

  Frelax[] = 1;

  //Resistance[ DomainB ] = 0. ;
}


// --------------------------------------------------------------------------
// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Dir="res/";
ExtGmsh     = ".pos";
ExtGnuplot  = ".dat";

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------
// --------------------------------------------------------------------------


If(Flag_Cir)
  Flag_Cir_StatorRings = (Flag_Case<2);
  Include "shaded_circuit.pro" ;
EndIf
Include "machine_magstadyn_a.pro" ;

// Choosing the order of resolution in OneLab
// DefineConstant[ ResolutionChoices = {"MagDyn_a_2D_time", Name "GetDP/1"} ];
// DefineConstant[ ComputeCommand = {"-solve -v 1", Name "GetDP/9"} ];
