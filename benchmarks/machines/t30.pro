Include "t30_data.geo";

Dir="res/";
ExtGmsh     = ".pos";
ExtGnuplot  = ".dat";
//ExtGmsh     = Str[ Sprintf("%g.pos", NbPhases) ];
//ExtGnuplot  = Str[ Sprintf("%g.dat", NbPhases) ];


DefineConstant[
  Flag_AnalysisType = {2,  Choices{0="Static",  1="Time domain",  2="Frequency domain"},
    Label "Type of analysis",  Path "Input/20", Highlight "Blue", Visible 1,
    Help Str["- Use 'Static' to compute static fields created in the machine",
      "- Use 'Time domain' to compute the dynamic response of the machine",
      "- Use 'Frequency domain' to compute steady-state phasors depending on the imposed speed"]} ,
  Flag_SrcType_Stator = { 1, Choices{1="Current", 2="Voltage"},
    Label "Source type in stator", Path "Input/41", Highlight "Blue", Visible 0},
  Flag_ComputeLosses = { 1, Choices{0,1}, Label "Compute Joule Losses in Rotor",  Path "Input/70"}
];


Group {
  Stator_Fe = #STATOR_FE ;
  Stator_Cu = #{};
  Stator_Al = #{};

  Stator_Air = #STATOR_AIR ;
  Stator_Airgap = #STATOR_AIRGAP ; // Note: air split in two for easing torque computation
  Stator_Bnd_MB = #STATOR_BND_MOVING_BAND ;

  Rotor_Fe = #ROTOR_FE ;
  Rotor_Cu = #{} ;
  Rotor_Al = #ROTOR_AL ;
  Rotor_Magnets = #{} ;
  Rotor_Air = #{} ;
  Rotor_Airgap = #ROTOR_AIRGAP ; // Note: air split in two for easing torque computation
  Rotor_Bnd_MB = #ROTOR_BND_MOVING_BAND ;

  MovingBand_PhysicalNb = #MOVING_BAND ;  // Fictitious number for moving band, not in the geo file
  Surf_Inf = #SURF_INF ;

  // Stator inductors
  Stator_IndA = #STATOR_INDA ; Stator_IndAn = #STATOR_INDAN ;
  Stator_IndB = #STATOR_INDB ; Stator_IndBn = #STATOR_INDBN ;
  Stator_IndC = #STATOR_INDC ; Stator_IndCn = #STATOR_INDCN ;

  PhaseA = Region[ {Stator_IndA, Stator_IndAn} ];
  PhaseB = Region[ {Stator_IndB, Stator_IndBn} ];
  PhaseC = Region[ {Stator_IndC, Stator_IndCn} ];

  // FIXME: Just one physical region for nice graph in Onelab
  PhaseA_pos = Region[ {Stator_IndA, Stator_IndAn} ];
  PhaseB_pos = Region[ {Stator_IndB, Stator_IndBn} ];
  PhaseC_pos = Region[ {Stator_IndC, Stator_IndCn} ];

  Stator_IndsP = Region[ {Stator_IndA, Stator_IndB, Stator_IndC} ];
  Stator_IndsN = Region[ {Stator_IndAn, Stator_IndBn, Stator_IndCn} ];

  Stator_Inds = Region[ {PhaseA, PhaseB, PhaseC} ] ;
  Rotor_Inds  = Region[ {} ] ;

  StatorC  = Region[{ }] ;
  StatorCC = Region[{ Stator_Fe }] ;
  RotorC   = Region[{ Rotor_Al, Rotor_Fe }] ;
  RotorCC  = Region[{ }] ;
}


Function {
  T = 1/Freq ;

  DefineConstant[
    Flag_ImposedSpeed = { 1, Choices{0="None",1="Choose speed"}, Label "Imposed rotor speed",
      Path "Input/40",  Highlight "Blue", Visible Flag_AnalysisType!=2},
    Term_vxb = { (Flag_ImposedSpeed==1 && Flag_AnalysisType==2), Choices {0,1}, Label "Consider term Velocity x Induction",
      Path "Input/41", ReadOnly 1, Visible Flag_ImposedSpeed},
    wr = { 0, Min 0, Max wr_max, Step wr_step, Loop 0, Label "Rotor speed [rad/s]",
           Path "Input/42", Highlight "AliceBlue", ReadOnlyRange (Flag_AnalysisType==2), Visible Flag_ImposedSpeed },
    Tmec = { 0, Label "Mechanical torque [Nm]", Path "Input/43",
      Highlight "AliceBlue", Visible (!Flag_ImposedSpeed && Flag_AnalysisType!=2) },
    Frict = { 0, Label "Friction torque [Nm]", Path "Input/44",
      Highlight "AliceBlue", Visible (!Flag_ImposedSpeed && Flag_AnalysisType!=2) },
    NbT = {50, Label "Total number of periods", Path "Input/50",
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1)},
    NbSteps = {100, Label "Number of time steps per period", Path "Input/51",
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1)}
  ];

  If(Flag_ImposedSpeed==0)
    UndefineConstant["Input/42wr"];
  EndIf

  SurfCoil[] = SurfaceArea[]{STATOR_INDA} ;
  NbWires[]  = NbWiresInd ;

  // phases lag 120 degrees
  pA =  0 ;
  pB = -4*Pi/3 ;
  pC = -2*Pi/3 ;

  DefineConstant[
    Irms = { IA, Path "Input/60", Label "Stator current (rms)",
      Highlight "AliceBlue"}
  ] ;
  II = Irms *Sqrt[2] ;

  w_syn = 2*Pi*Freq ;  // angular speed of stator field
  slip = (w_syn-wr)/w_syn ;

  // imposed movement with fixed speed wr
  rotorAngle0 = 0 ;
  theta0 = rotorAngle0*Pi/180 ; // fixed rotor position or inital position (in rad) in case of rotation
  theta1 = (rotorAngle0+180)*Pi/180 ; // end angle (in rad)

  delta_theta[] = (Flag_ImposedSpeed) ? ((wr>0)?(theta1-theta0)/NbSteps:0) : (#77-#66) ; // angle step (in rad)
  delta_time = (Flag_ImposedSpeed && wr>0) ? (theta1-theta0)/NbSteps/wr : T/NbSteps; // time step

  time0 = 0.;
  timemax = (Flag_ImposedSpeed && wr>0) ? theta1/wr : NbT*T ;

  Friction[] = Frict ;
  Torque_mec[] = Tmec ;
  Inertia = inertia_fe + inertia_al ;

}


Include "machine_magstadyn_a.pro" ;

