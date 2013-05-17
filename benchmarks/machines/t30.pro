Include "t30_data.geo";

Dir="res/";
ExtGmsh     = ".pos";
ExtGnuplot  = ".dat";

Flag_SrcType_Stator = 1 ; // Imposed current
Flag_ComputeLosses = 1 ;

//ExtGmsh     = Str[Sprintf("%g.pos", NbPhases) ];
//ExtGnuplot  = Str[Sprintf("%g.dat", NbPhases) ];

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

  // Provisional
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

  DefineConstant[ Flag_ImposedSpeed = { 1, Choices{0,1},
      Label "Imposed rotor speed", Path "Input/40", Visible 1} ];

  DefineConstant[ Term_vxb = { 0, Choices {0,1},
                               Label "Consider term Velocity x Induction",
                               Path "Input/41", Visible Flag_ImposedSpeed } ] ;

  DefineConstant[ Tmec = { 0, Label "Mechanical torque", Path "Input/42",
      Highlight "LightYellow", Visible !Flag_ImposedSpeed} ];

  SurfCoil[] = SurfaceArea[]{STATOR_INDA} ;
  NbWires[]  = NbWiresInd ;

  // phases lag 120 degrees
  pA =  0 ;
  pB = -4*Pi/3 ;
  pC = -2*Pi/3 ;

  DefineConstant[ Irms = { IA, Path "Input/3", Label "Stator current (rms)", Highlight "AliceBlue"} ] ;
  II = Irms *Sqrt[2] ;

  wr_max  = (NbPhases==3) ? 1200 : 358.1416 ;
  wr_step = (NbPhases==3) ? 200  :  39.79351;
  DefineConstant[ wr = { wr_step, Min wr_step, Max wr_max, Step wr_step, Loop "0",
                         Label "Rotor speed in rad/s", Path "Input/42", Highlight "LightYellow",
                         ReadOnlyRange 1, Visible Flag_ImposedSpeed} ]; //ReadOnly

  ws = 2*Pi*Freq ;  // angular speed of stator field
  slip = (ws-wr)/ws ;

  T = 1/Freq ;
  NbSteps = 100/2; // 100 number of angles (imposed speed) or time steps
  NbT = 50;

  // imposed movement with fixed speed wr
  rotorAngle0 = 0 ;
  theta0 = rotorAngle0*Pi/180 ; // fixed rotor position or inital position (in rad) in case of rotation
  theta1 = (rotorAngle0+180)*Pi/180 ; // end angle (in rad)

  delta_theta[] = (Flag_ImposedSpeed) ? (theta1-theta0)/NbSteps : (#77-#66) ; // angle step (in rad)
  delta_time = (Flag_ImposedSpeed) ? (theta1-theta0)/NbSteps/wr : T/NbSteps; // time step

  time0 = 0.;
  timemax = (Flag_ImposedSpeed) ? theta1/wr : NbT*T ;

  Friction[] = 0. ;
  Torque_mec[] = Tmec ;
  Inertia = inertia_fe + inertia_al ;

}


Include "machine_magstadyn_a.pro" ;

DefineConstant[ ResolutionChoices    = {"FrequencyDomain", Path "GetDP/1"} ];
DefineConstant[ ComputeCommand       = {"-solve -v 1 -v2", Path "GetDP/9"} ];
DefineConstant[ PostOperationChoices = {"", Path "GetDP/2", Visible 0} ]; // testing
