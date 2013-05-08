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

  DefineConstant[ Term_vxb = { 1, Choices {0,1},
                               Label "Term Velocity x Induction",
                               Path "Input", Visible 1 } ] ;

  SurfCoil[] = SurfaceArea[]{STATOR_INDA} ;
  NbWires[]  = NbWiresInd ;

  // phases lag 120 degrees
  pA =  0 ;
  pB = -4*Pi/3 ;
  pC = -2*Pi/3 ;

  DefineConstant[ II = { IA, Path "Input/3", Label "Stator current", Highlight "AliceBlue"} ] ;

  wr_max  = (NbPhases==3) ? 1200 : 358.1416  ;
  wr_step = (NbPhases==3) ? 200  :  39.79351 ;

  DefineConstant[ wr = { 0., Min 0, Max wr_max, Step wr_step, Loop "1",
                         Label "Rotor speed in rad/s", Path "Input/4", Highlight "LightYellow",
                         ReadOnlyRange 1} ]; // ReadOnly

  ws = 2*Pi*Freq ;  // angular speed of stator field
  slip = (ws-wr)/ws ;

  // imposed movement with fixed speed wr
  rotorAngle0 = 0 ;
  theta0 = rotorAngle0*Pi/180 ; // fixed rotor position or inital position (in rad) in case of rotation
  theta1 = (rotorAngle0+180)*Pi/180 ; // end angle (in rad)
  NbThetas = 100 ; // 100 number of angle and time steps
  delta_theta = (theta1-theta0)/NbThetas ; // angle step (in rad)
  delta_time = delta_theta/wr ; // time step

  time0 = 0. ;  timemax = NbThetas * delta_theta ;
}


Include "machine_magstadyn_a.pro" ;

DefineConstant[ ResolutionChoices    = {"FrequencyDomain", Path "GetDP/1"} ];
//DefineConstant[ PostOperationChoices = {"Get_LocalFields, Get_GlobalQuantities", Path "GetDP/2"} ];
DefineConstant[ ComputeCommand       = {"-solve -v 1 -v2", Path "GetDP/9"} ];

