//
// Induction motor
//

Include "im_data.geo" ;


DefineConstant[ Flag_NL = { 0, Choices{0="Linear",
                                       1="Nonlinear BH curve"},
                            Label "Fe magnetic law",
                            Path "Input/3",
                            Highlight "NavyBlue"} ] ;

DefineConstant[ Flag_SrcType_Stator = {2, Choices{1="Current",
                                           2="Voltage"},
                                Label "Source Type in Stator",
                                Path "Input/40",
                                Highlight "Blue", Visible 1} ] ;

DefineConstant[ Flag_Cir = {(Flag_SrcType_Stator==1)?0:1, Choices{0,1},
    Label "Use circuit in Stator", ReadOnly 1, Visible 0} ] ;


Group{
  DefineGroup[ Stator_Al, Stator_Cu ];
  DefineGroup[ Rotor_Al, Rotor_Cu ];
}

Group{
  Stator_Fe     = #STATOR_FE ;
  Stator_Air    = #STATOR_SLOTOPENING ;
  Stator_Airgap = #STATOR_AIRGAP ;

  Stator_Bnd_A0 = #STATOR_BND_A0 ;
  Stator_Bnd_A1 = #STATOR_BND_A1 ;

  Rotor_Fe     = #{ROTOR_FE, ROTOR_SLOTOPENING} ;
  Rotor_Air    = #{} ;
  Rotor_Airgap = #ROTOR_AIRGAP ;

  nbRotorBars = (Flag_Symmetry) ? NbrPoles*NbrSectTot/NbrPolesTot : NbrSectTot ;
  For k In {1:nbRotorBars}
    Rotor_Bar~{k} = Region[ (ROTOR_BAR+k) ];
    Rotor_Bars += Region[ Rotor_Bar~{k} ];
  EndFor

  Rotor_Bnd_MB = #ROTOR_BND_MOVING_BAND ;
  Rotor_Bnd_A0 = #ROTOR_BND_A0 ;
  Rotor_Bnd_A1 = #ROTOR_BND_A1 ;

  MovingBand_PhysicalNb = #MOVING_BAND ;  // Fictitious number for moving band, not in the geo file
  Surf_Inf = #SURF_EXT ;
  Surf_bn0 = #SURF_INT ;
  Surf_cutA0 = #{STATOR_BND_A0, ROTOR_BND_A0};
  Surf_cutA1 = #{STATOR_BND_A1, ROTOR_BND_A1};

  Stator_Ind_Ap = #{STATOR_IND_AP}; Stator_Ind_Am = #{};
  Stator_Ind_Bp = #{STATOR_IND_BP}; Stator_Ind_Bm = #{};
  Stator_Ind_Cp = #{}             ; Stator_Ind_Cm = #{STATOR_IND_CM};
  If(NbrPoles > 1)
    Stator_Ind_Am += #STATOR_IND_AM;
    Stator_Ind_Bm += #STATOR_IND_BM;
    Stator_Ind_Cp += #STATOR_IND_CP;
  EndIf

  PhaseA = Region[{ Stator_Ind_Ap, Stator_Ind_Am }];
  PhaseB = Region[{ Stator_Ind_Bp, Stator_Ind_Bm }];
  PhaseC = Region[{ Stator_Ind_Cp, Stator_Ind_Cm }];

  // Provisional: Just one physical region for nice graph in Onelab
  PhaseA_pos = Region[{ Stator_Ind_Ap }];
  PhaseB_pos = Region[{ Stator_Ind_Bp }];
  PhaseC_pos = Region[{ Stator_Ind_Cm }];

  Stator_IndsP = Region[{ Stator_Ind_Ap, Stator_Ind_Bp, Stator_Ind_Cp }];
  Stator_IndsN = Region[{ Stator_Ind_Am, Stator_Ind_Bm, Stator_Ind_Cm }];

  Stator_Inds = Region[ {PhaseA, PhaseB, PhaseC} ] ;
  Rotor_Inds  = Region[ {} ] ;

  StatorC  = Region[{ }] ;
  StatorCC = Region[{ Stator_Fe }] ;
  RotorC   = Region[{ Rotor_Bars }] ;
  RotorCC  = Region[{ Rotor_Fe   }] ;


  // Moving band:  with or without symmetry, these BND lines must be complete
  Stator_Bnd_MB = #STATOR_BND_MOVING_BAND;
  For k In {1:SymmetryFactor}
    Rotor_Bnd_MB~{k} = Region[ (ROTOR_BND_MOVING_BAND+k-1) ];
    Rotor_Bnd_MB += Region[ Rotor_Bnd_MB~{k} ];
  EndFor
  Rotor_Bnd_MBaux = Region[ {Rotor_Bnd_MB, -Rotor_Bnd_MB~{1}}];

  Dummy = #NICEPOS;   // boundary between different materials, used for animation
}

Function{
  Freq = 60  ;
  T = 1/Freq ; // Fundamental period in s

  DefineConstant[ Flag_ImposedSpeed = { 1, Choices{0,1},
      Label "Imposed rotor speed", Path "Input/40", Visible 1} ];

  slip = 0; //0.02666 ;	           // slip
  wr = (1-slip)* 2*Pi*Freq/2 ;  // angular rotor speed in rad/s
  time0 = 0. ;                 // initial time in s
  timemax = 2.*T ;          // final time  in s
  delta_time = T/100 ;             // time step in s
  delta_theta[] = wr*delta_time ;

  // relaxation of applied voltage, for reducing the transient
  Trelax = 6*T ;
  Frelax[] = ( $Time < Trelax ) ? 0.5 * (1. - Cos [Pi*$Time/Trelax] ) : 1. ; // smooth step function

  sigma[ Rotor_Bars ] = sigma_bars * Frelax[];

  NbWires[] = Ns;
  SurfCoil[] = SurfaceArea[];

  pA =  0 ;
  pB =  2*Pi/3 ;
  pC =  4*Pi/3 ;

  DefineConstant[ Irms = {  1, Path "Input/3", Label "Stator current (rms)", Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1)} ] ;
  DefineConstant[ Vrms = { VA, Path "Input/3", Label "Stator voltage (rms)", Highlight "AliceBlue", Visible (Flag_SrcType_Stator==2)} ] ;
  VV = Vrms * Sqrt[2] ;
  II = Irms * Sqrt[2] ;

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
  Include "im_circuit.pro" ;
EndIf
Include "machine_magstadyn_a.pro" ;

DefineConstant[ ResolutionChoices    = {"TimeDomain", Path "GetDP/1"} ];
DefineConstant[ ComputeCommand       = {"-solve -v 1 -v2", Path "GetDP/9"} ];
