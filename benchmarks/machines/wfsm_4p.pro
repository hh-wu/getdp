// Synchronous machine from Electrimacs'2002 paper:
// Steady-State Finite Element Analysis of a Salient-Pole Synchronous Machine
// in the Frequency Domain
// J. Gyselinck, L. Vandevelde, J. Melkebeek and W. Legros

Include "wfsm_4p_data.geo";

DefineConstant[
  Flag_AnalysisType = {1,  Choices{0="Static",  1="Time domain"},
    Name "Input/19Type of analysis", Highlight "Blue",
    Help Str["- Use 'Static' to compute static fields created in the machine",
      "- Use 'Time domain' to compute the dynamic response of the machine"]} ,
  Flag_SrcType_Stator = { 0, Choices{0="None",1="Current"},
    Name "Input/41Source type in stator", Highlight "Blue"},
  Flag_SrcType_Rotor = 1,
  Flag_NL = { 0, Choices{0,1},
    Name "Input/60Nonlinear BH-curve", ReadOnly 0},
  Flag_NL_law_Type = { 1, Choices{0="Analytical", 1="Interpolated",
      2="Analytical VH800-65D", 3="Interpolated VH800-65D"},
    Name "Input/61BH-curve", Highlight "Blue", Visible Flag_NL}
];

Flag_Cir = !Flag_SrcType_Stator;
my_output = "No";

Group {
  Stator_Fe     = Region[STATOR_FE] ;
  Stator_Al     = Region[{}];
  Stator_Cu     = Region[{}];
  Stator_Air    = Region[STATOR_SLOT_OPENING] ;
  Stator_Airgap = Region[STATOR_AIRGAP] ;
  Stator_Bnd_MB = Region[STATOR_BND_MOVING_BAND]  ;
  Stator_Bnd_A0 = Region[STATOR_PERIOD_REFERENCE] ;
  Stator_Bnd_A1 = Region[STATOR_PERIOD_DEPENDENT] ;

  Rotor_Fe     = Region[{ROTOR_FE, ROTOR_SHAFT}];
  Rotor_Al     = Region[{}];
  Rotor_Cu     = Region[{}];
  Rotor_Air    = Region[ROTOR_AIR] ;
  Rotor_Airgap = Region[ROTOR_AIRGAP] ;
  Rotor_Bnd_MB = Region[ROTOR_BND_MOVING_BAND] ;
  Rotor_Bnd_A0 = Region[ROTOR_PERIOD_REFERENCE] ;
  Rotor_Bnd_A1 = Region[ROTOR_PERIOD_DEPENDENT] ;

  MovingBand_PhysicalNb = Region[MOVING_BAND] ; // Fictitious number for moving band, not in the geo file

  Surf_Inf = Region[SURF_EXT] ;
  Surf_bn0 = Region[{}];
  Surf_cutA0 = Region[{Stator_Bnd_A0, Rotor_Bnd_A0}];
  Surf_cutA1 = Region[{Stator_Bnd_A1, Rotor_Bnd_A1}];

  Rotor_Magnets = Region[ {} ];

  nbInds = NbrPolesInModel*NbrSectStatorTot/NbrPolesTot ;

  Stator_Ind_Ap = Region[STATOR_UP]; Stator_Ind_Am = Region[{}];
  Stator_Ind_Bp = Region[STATOR_VP]; Stator_Ind_Bm = Region[STATOR_VM];
  Stator_Ind_Cp = Region[{}];        Stator_Ind_Cm = Region[STATOR_WM];

  If(NbrPolesInModel>1)
    Stator_Ind_Am = Region[STATOR_UM];
    Stator_Ind_Cp = Region[STATOR_WP];
  EndIf

  PhaseA = Region[{Stator_Ind_Ap, Stator_Ind_Am}];
  PhaseB = Region[{Stator_Ind_Bp, Stator_Ind_Bm}];
  PhaseC = Region[{Stator_Ind_Cp, Stator_Ind_Cm}];

  PhaseA_pos = Region[STATOR_UP];
  PhaseB_pos = Region[STATOR_VP];
  PhaseC_pos = Region[STATOR_WM];

  Stator_IndsP = Region[{Stator_Ind_Ap, Stator_Ind_Bp, Stator_Ind_Cp}];
  Stator_IndsN = Region[{Stator_Ind_Am, Stator_Ind_Bm, Stator_Ind_Cm}];
  Stator_Inds = Region[{PhaseA, PhaseB, PhaseC}] ;

  // Rotor conductors
  Rotor_IndsP = Region[ROTOR_COND1] ;
  Rotor_IndsN = Region[ROTOR_COND2] ;
  Rotor_Inds = Region[{Rotor_IndsP, Rotor_IndsN}];

  StatorC  = Region[{}] ;
  StatorCC = Region[Stator_Fe] ;
  RotorC   = Region[{}] ;
  RotorCC  = Region[Rotor_Fe] ;

  // Moving band:  with or without symmetry, the BND line of the rotor must be complete
  Stator_Bnd_MB = Region[STATOR_BND_MOVING_BAND];
  For k In {1:NbrPolesTot/NbrPolesInModel}
    Rotor_Bnd_MB~{k} = Region[ (ROTOR_BND_MOVING_BAND+k-1) ];
    Rotor_Bnd_MB += Region[ Rotor_Bnd_MB~{k} ];
  EndFor
  For k In {2:NbrPolesTot/NbrPolesInModel}
    Rotor_Bnd_MBaux  += Region[ Rotor_Bnd_MB~{k} ] ;
  EndFor

  Dummy = Region[NICEPOS];
}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Function {

  // Data for modeling a stranded inductor
  Stator_PhaseArea[]    = SurfaceArea[]{STATOR_UP} + SurfaceArea[]{STATOR_UM};
  Rotor_ConductorArea[] = SurfaceArea[]{ROTOR_COND1} + SurfaceArea[]{ROTOR_COND2};

  NbWires[Stator_Inds]  = 160  * NbrPolesInModel/NbrPolesTot; // Number of wires in series per phase
  NbWires[Rotor_Inds]   = 1050 * NbrPolesInModel/NbrPolesTot; // Number of wires in series per phase
  SurfCoil[Stator_Inds] = Stator_PhaseArea[];
  SurfCoil[Rotor_Inds]  = Rotor_ConductorArea[];

  FillFactor_Winding = 0.5 ; // percentage of Cu in the surface coil side, smaller than 1
  Factor_R_3DEffects = 1.5 ; // bigger than Adding 50% of resistance

  DefineConstant[ rpm = { rpm_nominal, Name "Input/7Speed [rpm]",
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1)}];
  wr = rpm/60*2*Pi ; // speed in rad_mec/s

  NbrPolePairs = NbrPolesTot/2 ;

  DefineConstant[ Freq = { wr*NbrPolePairs/(2*Pi), Name "Output/1Frequency", ReadOnly 1,
      Highlight "LightYellow" } ];

  Omega = 2*Pi*Freq ;
  T = 1/Freq ;

  DefineConstant[
    thetaMax_deg = { 180, Name "Input/21End rotor angle (loop)",
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1) }
  ];

  theta0   = InitialRotorAngle + 0. ;
  thetaMax = thetaMax_deg * deg2rad ; // end rotor angle (used in doing a loop)

  DefineConstant[
    NbTurns  = { (thetaMax-theta0)/(2*Pi), Name "Input/22Number of revolutions",
      Highlight "Grey85", ReadOnly 1, Visible (Flag_AnalysisType==1) }
  ];

  NbSteps  = NbrPolesTot*90 ; // 1 degree per step
  delta_theta[] = 2*Pi/NbSteps ;

  DefineConstant[
    delta_theta_deg = { 2*Pi/NbSteps/deg2rad, Name "Input/23Step [deg]",
      Highlight "Grey85", ReadOnly 1, Visible (Flag_AnalysisType==1) }
  ];

  time0 = 0. ; // at initial rotor position
  delta_time = 2*Pi/NbSteps/wr;
  timemax = thetaMax/wr;

  RotorPosition[]     = theta0 + $Time * wr ;
  RotorPosition_deg[] = RotorPosition[]*180/Pi;

  Flag_ParkTransformation = 1 ;
  Theta_Park[] = ( (RotorPosition[] + Pi/NbrPolesTot) + Pi/3) * NbrPolePairs; // electrical degrees
  Theta_Park_deg[] = Theta_Park[]*180/Pi;

  DefineConstant[
    ID = { 0, Name "Input/50Id stator current", Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1)},
    IQ = { 75, Name "Input/51Iq stator current", Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1)},
    I0 = 0.,
    Ie = { 13.1, Name "Input/52Ie rotor excitation current", Highlight "AliceBlue" } ] ;

  If(Flag_SrcType_Stator==0)
    UndefineConstant["Input/50Id stator current"];
    UndefineConstant["Input/51Iq stator current"];
  EndIf

}


// --------------------------------------------------------------------------
// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

If(Flag_SrcType_Stator==1)
    UndefineConstant["Input/8Load resistance"];
EndIf

If(Flag_Cir)
  Include "wfsm_4p_circuit.pro" ;
EndIf
Include "machine_magstadyn_a.pro" ;
