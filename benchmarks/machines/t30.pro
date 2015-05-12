Include "t30_data.geo";

//ExtGmsh     = Str[ Sprintf("%g.pos", NbPhases) ];
//ExtGnuplot  = Str[ Sprintf("%g.dat", NbPhases) ];

DefineConstant[
  Flag_AnalysisType = {2,  Choices{0="Static",  1="Time domain",  2="Frequency domain"},
    Name "Input/20Type of analysis", Highlight "Blue",
    Help Str["- Use 'Static' to compute static fields created in the machine",
      "- Use 'Time domain' to compute the dynamic response of the machine",
      "- Use 'Frequency domain' to compute steady-state phasors depending on the imposed speed"]} ,
  Flag_SrcType_Stator = { 1, Choices{1="Current", 2="Voltage"},
    Name "Input/41Source type in stator", Highlight "Blue", Visible 0},
  Flag_ComputeLosses = { 1, Choices{0,1}, Name "Input/70Compute Joule Losses in Rotor"}
];


Group {
  Stator_Fe = Region[STATOR_FE] ;
  Stator_Cu = Region[{}];
  Stator_Al = Region[{}];

  Stator_Air = Region[STATOR_AIR] ;
  Stator_Airgap = Region[STATOR_AIRGAP] ; // Note: air split in two for easing torque computation
  Stator_Bnd_MB = Region[STATOR_BND_MOVING_BAND] ;

  Rotor_Fe = Region[ROTOR_FE] ;
  Rotor_Cu = Region[{}] ;
  Rotor_Al = Region[ROTOR_AL] ;
  Rotor_Magnets = Region[{}] ;
  Rotor_Air = Region[{}] ;
  Rotor_Airgap = Region[ROTOR_AIRGAP] ; // Note: air split in two for easing torque computation
  Rotor_Bnd_MB = Region[ROTOR_BND_MOVING_BAND] ;

  MovingBand_PhysicalNb = Region[MOVING_BAND] ;  // Fictitious number for moving band, not in the geo file
  Surf_Inf = Region[SURF_INF] ;

  // Stator inductors
  Stator_IndA = Region[STATOR_INDA] ; Stator_IndAn = Region[STATOR_INDAN] ;
  Stator_IndB = Region[STATOR_INDB] ; Stator_IndBn = Region[STATOR_INDBN] ;
  Stator_IndC = Region[STATOR_INDC] ; Stator_IndCn = Region[STATOR_INDCN] ;

  PhaseA = Region[{Stator_IndA, Stator_IndAn}];
  PhaseB = Region[{Stator_IndB, Stator_IndBn}];
  PhaseC = Region[{Stator_IndC, Stator_IndCn}];

  // FIXME: Just one physical region for nice graph in Onelab
  PhaseA_pos = Region[{Stator_IndA, Stator_IndAn}];
  PhaseB_pos = Region[{Stator_IndB, Stator_IndBn}];
  PhaseC_pos = Region[{Stator_IndC, Stator_IndCn}];

  Stator_IndsP = Region[{Stator_IndA, Stator_IndB, Stator_IndC}];
  Stator_IndsN = Region[{Stator_IndAn, Stator_IndBn, Stator_IndCn}];

  Stator_Inds = Region[{PhaseA, PhaseB, PhaseC}] ;
  Rotor_Inds  = Region[{}] ;

  StatorC  = Region[{}] ;
  StatorCC = Region[{Stator_Fe}] ;
  RotorC   = Region[{Rotor_Al, Rotor_Fe}] ;
  RotorCC  = Region[{}] ;
}

Function {
  Period = 1/Freq ;

  DefineConstant[
    Flag_ImposedSpeed = { 1, Choices{0="None",1="Choose speed"},
      Name "Input/40Imposed rotor speed", Highlight "Blue", Visible Flag_AnalysisType!=2},
    Term_vxb = { (Flag_ImposedSpeed==1 && Flag_AnalysisType==2), Choices {0,1},
      Name "Input/41Consider term Velocity x Induction",
      ReadOnly 1, Visible Flag_ImposedSpeed},
    wr = { 0, Min 0, Max wr_max, Step wr_step, Loop 0,
      Name "Input/42Rotor speed", Label "Rotor speed [rad/s]",
      Highlight "AliceBlue", ReadOnlyRange (Flag_AnalysisType==2), Visible Flag_ImposedSpeed },
    Tmec = { 0, Name "Input/43Mechanical torque [Nm]",
      Highlight "AliceBlue", Visible (!Flag_ImposedSpeed && Flag_AnalysisType!=2) },
    Frict = { 0, Name "Input/44Friction torque [Nm]",
      Highlight "AliceBlue", Visible (!Flag_ImposedSpeed && Flag_AnalysisType!=2) },
    NbrPeriod = {50, Name "Input/50Total number of periods",
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1)},
    NbSteps = {100, Name "Input/51Number of time steps per period",
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1)}
  ];

  If(Flag_ImposedSpeed==0)
    UndefineConstant["Input/42Rotor speed"];
  EndIf

  SurfCoil[] = SurfaceArea[]{STATOR_INDA} ;
  NbWires[]  = NbWiresInd ;

  // phases lag 120 degrees
  pA =  0 ;
  pB = -4*Pi/3 ;
  pC = -2*Pi/3 ;

  DefineConstant[
    Irms = { IA, Name "Input/60Stator current (rms)", Highlight "AliceBlue"}
  ] ;
  II = Irms *Sqrt[2] ;

  w_syn = 2*Pi*Freq ;  // angular speed of stator field
  slip = (w_syn-wr)/w_syn ;

  // imposed movement with fixed speed wr
  rotorAngle0 = 0 ;
  theta0 = rotorAngle0*Pi/180 ; // fixed rotor position or inital position (in rad) in case of rotation
  theta1 = (rotorAngle0+180)*Pi/180 ; // end angle (in rad)

  delta_theta[] = (Flag_ImposedSpeed) ? ((wr>0)?(theta1-theta0)/NbSteps:0) : ($Position-$PreviousPosition) ; // angle step (in rad)
  delta_time = (Flag_ImposedSpeed && wr>0) ? (theta1-theta0)/NbSteps/wr : NbrPeriod/NbSteps; // time step

  time0 = 0.;
  timemax = (Flag_ImposedSpeed && wr>0) ? theta1/wr : NbrPeriod*Period ;

  Friction[] = Frict ;
  Torque_mec[] = Tmec ;
  Inertia = inertia_fe + inertia_al ;

}


Include "machine_magstadyn_a.pro" ;
