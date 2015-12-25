// rotor position for 6/4 SRM
// -30 to 0  : phase 1
//   0 to 30 : phase 3
//  30 to 60 : phase 2

Include "srm_data.geo";

// hallo

DefineConstant[
  Flag_AnalysisType = {0,  Choices{0="Static",  1="Time domain"},
    Name "Input/19Type of analysis", Highlight "Blue",
    Help Str["- Use 'Static' to compute static fields created in the machine",
      "- Use 'Time domain' to compute the dynamic response of the machine"]} ,
  Flag_SrcType_Stator = { 1, Choices{1="Current", 2="Voltage"},
    Name "Input/41Source type in stator", Highlight "Blue"},
  Flag_NL = { 0, Choices{0,1},
    Name "Input/60Nonlinear BH-curve", ReadOnly 0},
  Flag_NL_law_Type = { 0, Choices{0="Analytical", 1="Interpolated",
      2="Analytical VH800-65D", 3="Interpolated VH800-65D"},
    Name "Input/61BH-curve", Highlight "Blue", Visible Flag_NL}
];

Flag_Cir = (Flag_SrcType_Stator==2);
Flag_ConstantSource = 1 ; // We are exciting just one phase

Group{
  DefineGroup[ Stator_Al, Stator_Cu, Rotor_Al, Rotor_Cu ];

  Stator_Fe     = #STATOR_FE ;
  Stator_Air    = #STATOR_AIR ;
  Stator_Airgap = #STATOR_AIRGAP ;
  Stator_Bnd_A0 = #STATOR_BND_A0 ;
  Stator_Bnd_A1 = #STATOR_BND_A1 ;

  Rotor_Fe     = #ROTOR_FE ;
  Rotor_Air    = #{ROTOR_AIR, ROTOR_SHAFT} ;
  Rotor_Airgap = #ROTOR_AIRGAP ;
  Rotor_Bnd_A0 = #ROTOR_BND_A0 ;
  Rotor_Bnd_A1 = #ROTOR_BND_A1 ;


  MovingBand_PhysicalNb = #MOVING_BAND ;  // Fictitious number for moving band, not in the geo file
  Surf_Inf = #SURF_EXT ;
  Surf_bn0 =  #{} ;
  Point_ref = #ROTOR_REF_PNT; // Center of the machine, needed for linking the rotor periodicity lines
  Surf_cutA0 = #{STATOR_BND_A0, ROTOR_BND_A0};
  Surf_cutA1 = #{STATOR_BND_A1, ROTOR_BND_A1};

  Dummy = #NICEPOS;

  Stator_Ind_Ap = #STATOR_IND_AP;    Stator_Ind_Am = #STATOR_IND_AM;
  Stator_Ind_Bp = #STATOR_IND_BP;    Stator_Ind_Bm = #STATOR_IND_BM;
  Stator_Ind_Cp = #STATOR_IND_CP;    Stator_Ind_Cm = #STATOR_IND_CM;

  Stator_Ind_Ap_ = #STATOR_IND_AP_;    Stator_Ind_Am_ = #STATOR_IND_AM_;
  Stator_Ind_Bp_ = #STATOR_IND_BP_;    Stator_Ind_Bm_ = #STATOR_IND_BM_;
  Stator_Ind_Cp_ = #STATOR_IND_CP_;    Stator_Ind_Cm_ = #STATOR_IND_CM_;

  PhaseA = Region[{ Stator_Ind_Ap, Stator_Ind_Am }];
  PhaseB = Region[{ Stator_Ind_Bp, Stator_Ind_Bm }];
  PhaseC = Region[{ Stator_Ind_Cp, Stator_Ind_Cm }];
  Stator_IndsP = Region[{ Stator_Ind_Ap, Stator_Ind_Bp, Stator_Ind_Cp }];
  Stator_IndsN = Region[{ Stator_Ind_Am, Stator_Ind_Bm, Stator_Ind_Cm }];

  If(!Flag_Symmetry)
    PhaseA += Region[{ Stator_Ind_Ap_, Stator_Ind_Am_ }];
    PhaseB += Region[{ Stator_Ind_Bp_, Stator_Ind_Bm_ }];
    PhaseC += Region[{ Stator_Ind_Cp_, Stator_Ind_Cm_ }];
    Stator_IndsP += Region[{ Stator_Ind_Ap_, Stator_Ind_Bp_, Stator_Ind_Cp_ }];
    Stator_IndsN += Region[{ Stator_Ind_Am_, Stator_Ind_Bm_, Stator_Ind_Cm_ }];
  EndIf

  // FIXME: Just one physical region for nice graph in Onelab
  PhaseA_pos = Region[{ Stator_Ind_Am }];
  PhaseB_pos = Region[{ Stator_Ind_Bm }];
  PhaseC_pos = Region[{ Stator_Ind_Cp }];

  // For PostProcessing (only phase A)
  Flag_SrcType_StatorB = 0;
  Flag_SrcType_StatorC = 0;

  Stator_Inds = Region[ {PhaseA, PhaseB, PhaseC} ] ;
  Rotor_Inds  = Region[ {} ] ;

  StatorC  = Region[{ }] ;
  StatorCC = Region[{ Stator_Fe }] ;
  RotorC   = Region[{ }] ;
  RotorCC  = Region[{ Rotor_Fe }] ;

  // Moving band:  with or without symmetry, these BND lines must be complete
  Stator_Bnd_MB = #STATOR_BND_MOVING_BAND;
  For k In {1:SymmetryFactor}
    Rotor_Bnd_MB~{k} = Region[ (ROTOR_BND_MOVING_BAND+k-1) ];
    Rotor_Bnd_MB += Region[ Rotor_Bnd_MB~{k} ];
  EndFor
  Rotor_Bnd_MBaux = Region[ {Rotor_Bnd_MB, -Rotor_Bnd_MB~{1}}];
}

Function {
  Freq = 50. ;
  T = 1/Freq ;

  DefineConstant[
    Flag_ImposedSpeed = { !Flag_AnalysisType, Choices{0="None", 1="Choose speed"},
      Name "Input/30Imposed rotor speed [rpm]", Highlight "Blue"},
    myrpm = { 5000, Name "Input/31Speed [rpm]",
      Highlight "AliceBlue", ReadOnlyRange 1, Visible (Flag_ImposedSpeed==1)},
    Tmec = { 0, Name "Input/32Mechanical torque [Nm]",
      Highlight "AliceBlue", Visible (!Flag_ImposedSpeed && Flag_AnalysisType==1) },
    Frict = { 0, Name "Input/33Friction torque [Nm]",
      Highlight "AliceBlue", Visible (!Flag_ImposedSpeed && Flag_AnalysisType==1) },
    EndRotorAngle_deg = {InitialRotorAngle+180, Range {0,180}, Step 10,
      Name "Input/04End rotor angle [deg]",
      Highlight "AliceBlue", Visible (Flag_ImposedSpeed && Flag_AnalysisType==0)},
    NbSteps = {(Flag_ImposedSpeed==1)?90:1000,
      Name "Input/Time loop/Number of time steps",
      Help Str["- If the speed is imposed, it corresponds to the number of angular divisions",
        "- If the speed is calculated, it is just a limit to stop the time loop"] ,
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1)}
  ];

  rpm = (Flag_ImposedSpeed==0) ? 0.: myrpm ;
  wr = rpm/60*2*Pi ; // angular rotor speed in rad_mec/s

  // Imposed movement with fixed wr + time domain
  theta0 = InitialRotorAngle ;
  theta1 = EndRotorAngle_deg*deg2rad;
  If(Flag_ImposedSpeed)
    delta_time =  (theta1-theta0)/NbSteps/wr;
  EndIf
  If(!Flag_ImposedSpeed)
    delta_time = .5e-3;
  EndIf

  delta_theta[] = (Flag_ImposedSpeed) ? (theta1-theta0)/NbSteps : (#77-#66); // angle step (in rad)
  time0 = 0.;                 // initial time in s
  timemax = NbSteps * delta_time ;  // final time  in s

  DefineConstant[
    Vrms = { VA, Name "Input/4Coil Parameters/1Voltage (rms) [V]",
      Highlight "AliceBlue", Visible (Flag_SrcType_Stator==2)},
    Irms = { IA, Name "Input/4Coil Parameters/1Current (rms) [A]",
      Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1)},
    Nw = { 226, Name "Input/4Coil Parameters/2Number of turns",
      Highlight "AliceBlue"}
  ];
  VV = Vrms * Sqrt[2] ;
  II = Irms * Sqrt[2] ;

  Ia = II ; Ib = 0.; Ic = 0.;
  Va = VV ;

  Stator_PhaseArea[] = SurfaceArea[]{STATOR_IND_AP} ;
  NbWires[]  = Nw ; // Number of wires in series per phase
  SurfCoil[] = Stator_PhaseArea[];

  Friction[] = Frict ;
  Torque_mec[] = Tmec ;
  Inertia = inertia_fe ;

  NbrPolesInModel = NbrStatorPoles ;
  NbrPolesTot = NbrStatorPolesTot ;
}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

If(Flag_Cir)
  Include "srm_circuit.pro" ;
EndIf
Include "machine_magstadyn_a.pro" ;
