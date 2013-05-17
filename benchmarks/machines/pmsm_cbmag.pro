//
// Permanent Magnet Synchronous Generator
//

Include "pmsm_cbmag_data.geo";


DefineConstant[ Flag_NL = {0, Choices{0="Linear",
                                      1="Nonlinear BH curve"},
                           Label "Fe magnetic law",
                           Path "Input/3", Highlight "Blue"} ] ;

DefineConstant[ Flag_SrcType_Stator = {1, Choices{0="None",
                                           1="Current"},
                                Label "Source Type in Stator",
                                Path "Input/4", Highlight "Blue", Visible 1} ] ;

DefineConstant[ Flag_Cir = {!Flag_SrcType_Stator, Choices{0,1},
    Label "Use circuit in Stator", ReadOnly 1, Visible 0} ] ;

Group {
  Stator_Fe     = #STATOR_FE ;
  Stator_Al     = #{};
  Stator_Cu     = #{};
  Stator_Air    = #STATOR_AIR ;
  Stator_Airgap = #STATOR_AIRGAP ;
  Stator_Bnd_MB = #STATOR_BND_MOVING_BAND ;
  Stator_Bnd_A0 = #STATOR_BND_A0 ;
  Stator_Bnd_A1 = #STATOR_BND_A1 ;

  Rotor_Fe     = #ROTOR_FE ;
  Rotor_Al     = #{};
  Rotor_Cu     = #{};
  Stator_Air    = #STATOR_AIR ;
  Stator_Airgap = #STATOR_AIRGAP ;
  Stator_Bnd_MB = #STATOR_BND_MOVING_BAND ;
  Stator_Bnd_A0 = #STATOR_BND_A0 ;
  Stator_Bnd_A1 = #STATOR_BND_A1 ;

  Rotor_Fe     = #ROTOR_FE ;

  Rotor_Air    = #ROTOR_AIR ;
  Rotor_Airgap = #ROTOR_AIRGAP ;
  Rotor_Bnd_MB = #ROTOR_BND_MOVING_BAND ;
  Rotor_Bnd_A0 = #ROTOR_BND_A0 ;
  Rotor_Bnd_A1 = #ROTOR_BND_A1 ;

  MovingBand_PhysicalNb = #MOVING_BAND ;  // Fictitious number for moving band, not in the geo file
  Surf_Inf = #SURF_EXT ;
  Surf_bn0 = #SURF_INT ;
  Surf_cutA0 = #{STATOR_BND_A0, ROTOR_BND_A0};
  Surf_cutA1 = #{STATOR_BND_A1, ROTOR_BND_A1};

  nbMagnets = NbrPolesTot/SymmetryFactor ;
  For k In {1:nbMagnets}
    Rotor_Magnet~{k} = Region[ (ROTOR_MAGNET+k-1) ];
    Rotor_Magnets += Region[ Rotor_Magnet~{k} ];
  EndFor

  nbInds = (Flag_Symmetry) ? NbrPoles*NbrSectTotStator/NbrPolesTot : NbrSectTot ;
  Printf("NbrPoles=%g, nbInds=%g SymmetryFactor=%g", NbrPoles, nbInds, SymmetryFactor);

  /*
  For k In {1:nbInds}
    Stator_Ind~{k} = Region[ (STATOR_IND+k-1) ];
    Stator_Inds += Region[ Stator_Ind~{k} ];
  EndFor

  For k In {1:nbInds:3}
    PhaseA += Region[{ Stator_Ind~{k+0} }];
    PhaseB += Region[{ Stator_Ind~{k+1} }];
    PhaseC += Region[{ Stator_Ind~{k+2} }];
  EndFor
  For k In {1:nbInds:2}
    Stator_IndsP += Region[{ Stator_Ind~{k} }];
  EndFor
  For k In {2:nbInds:2}
    Stator_IndsN += Region[{ Stator_Ind~{k} }];
  EndFor

  // Alternative way of defining regions
  PhaseA = Region[ @ STATOR_IND+0:STATOR_IND+nbInds-3:3 @ ];
  PhaseB = Region[ @ STATOR_IND+1:STATOR_IND+nbInds-2:3 @ ];
  PhaseC = Region[ @ STATOR_IND+2:STATOR_IND+nbInds-1:3 @ ];

  Stator_IndsP = Region[ @ STATOR_IND+0:STATOR_IND+nbInds-1:2 @ ];
  Stator_IndsN = Region[ @ STATOR_IND+1:STATOR_IND+nbInds-1:2 @ ];
  */

  Stator_Ind_Ap = #{};              Stator_Ind_Am = #{STATOR_IND_AM};
  Stator_Ind_Bp = #{};              Stator_Ind_Bm = #{STATOR_IND_BM};
  Stator_Ind_Cp = #{STATOR_IND_CP}; Stator_Ind_Cm = #{};
  If(NbrPoles > 1)
    Stator_Ind_Ap += #STATOR_IND_AP;
    Stator_Ind_Bp += #STATOR_IND_BP;
    Stator_Ind_Cm += #STATOR_IND_CM;
  EndIf

  PhaseA = Region[{ Stator_Ind_Ap, Stator_Ind_Am }];
  PhaseB = Region[{ Stator_Ind_Bp, Stator_Ind_Bm }];
  PhaseC = Region[{ Stator_Ind_Cp, Stator_Ind_Cm }];

  // Provisional: Just one physical region for nice graph in Onelab
  PhaseA_pos = Region[{ Stator_Ind_Am }];
  PhaseB_pos = Region[{ Stator_Ind_Bm }];
  PhaseC_pos = Region[{ Stator_Ind_Cp }];


  Stator_IndsP = Region[{ Stator_Ind_Ap, Stator_Ind_Bp, Stator_Ind_Cp }];
  Stator_IndsN = Region[{ Stator_Ind_Am, Stator_Ind_Bm, Stator_Ind_Cm }];

  Stator_Inds = Region[ {PhaseA, PhaseB, PhaseC} ] ;
  Rotor_Inds  = Region[ {} ] ;

  StatorC  = Region[{ }] ;
  StatorCC = Region[{ Stator_Fe }] ;
  RotorC   = Region[{ }] ;
  RotorCC  = Region[{ Rotor_Fe, Rotor_Magnets }] ;

  // Moving band:  with or without symmetry, these BND lines must be complete

  Stator_Bnd_MB = #STATOR_BND_MOVING_BAND;
  For k In {1:SymmetryFactor}
    Rotor_Bnd_MB~{k} = Region[ (ROTOR_BND_MOVING_BAND+k-1) ];
    Rotor_Bnd_MB += Region[ Rotor_Bnd_MB~{k} ];
  EndFor
  Rotor_Bnd_MBaux = Region[ {Rotor_Bnd_MB, -Rotor_Bnd_MB~{1}}];

  Dummy = #NICEPOS ;
}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Function {
  NbrPhases = 3 ;

  DefineConstant[ b_remanent = {1.03, Label "Remanent induction",
      Path "Input/5", Highlight "AliceBlue"} ] ;
  // For a radial remanent b
  For k In {1:nbMagnets}
    br[ Rotor_Magnet~{k} ] = (-1)^(k-1) * b_remanent * Vector[ Cos[Atan2[Y[],X[]]], Sin[Atan2[Y[],X[]]], 0 ];
  EndFor

  //Data for modeling a stranded inductor
  NbWires[]  = 104 ; // Number of wires
  nbSlots[] = Ceil[nbInds/NbrPhases/2] ;
  SurfCoil[] = SurfaceArea[]{STATOR_IND_AM}/nbSlots[];//==2.288642e-05 All inductors have the same surface

  R_StatorPhase = 2.1713 ; // estimation of resistance of stator phase (now included in machines_mag...pro)

  // supply at fixed position
  DefineConstant[ rpm = {1000,
                         Label "speed in rpm",
                         Path "Input", Highlight "AliceBlue"} ]; // speed in rpm
  wr = rpm/60*2*Pi ; // speed in rad_mec/s
  NbrPolePairs = NbrPolesTot/2 ;

  // supply at fixed position
  DefineConstant[ Freq = {wr*NbrPolePairs/(2*Pi), ReadOnly 1,
                          Path "Output/1", Highlight "LightYellow" } ];

  Omega = 2*Pi*Freq ;
  T = 1/Freq ;

  DefineConstant[ thetaMax_deg = { 180, Label "End rotor angle (loop)",
      Path "Input/21", Highlight "AliceBlue" } ];

  theta0   = InitialRotorAngle + 0. ;
  thetaMax = thetaMax_deg * deg2rad ; // end rotor angle (used in doing a loop)

  DefineConstant[ NbTurns  = { (thetaMax-theta0)/(2*Pi), Label "Number of revolutions",
      Path "Input/24", Highlight "LightGrey", ReadOnly 1} ];

  DefineConstant[ delta_theta_deg = { 1., Label "step in degrees",
      Path "Input/22", Highlight "AliceBlue"} ];

  delta_theta[] = delta_theta_deg * deg2rad ;

  time0 = 0 ; // at initial rotor position
  delta_time = delta_theta_deg * deg2rad/wr;
  timemax = thetaMax/wr;

  DefineConstant[ NbSteps = { Ceil[(timemax-time0)/delta_time], Label "Number of steps",
      Path "Input/23", Highlight "LightGrey", ReadOnly 1} ];

  RotorPosition[] = InitialRotorAngle + $Time * wr ;
  RotorPosition_deg[] = RotorPosition[]*180/Pi;

  Flag_ParkTransformation = 1 ;
  Theta_Park[] = ((RotorPosition[] + Pi/8) - Pi/6) * NbrPolePairs;
  Theta_Park_deg[] = Theta_Park[]*180/Pi;

  DefineConstant[ ID = { 0, Path "Input/60", Label "Id stator current", Highlight "AliceBlue"},
                  IQ = { 4, Path "Input/61", Label "Iq stator current", Highlight "AliceBlue"},
                  I0 = { 0, Visible 0} ] ;


  If(Flag_SrcType_Stator==0)
    UndefineConstant["Input/60ID"];
    UndefineConstant["Input/61IQ"];
  EndIf

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

If(Flag_SrcType_Stator==1)
    UndefineConstant["Input/ZR"];
EndIf

If(Flag_Cir)
  Include "pmsm_8p_circuit.pro" ;
EndIf
Include "machine_magstadyn_a.pro" ;

DefineConstant[ ResolutionChoices    = {"TimeDomain", Path "GetDP/1"} ];
DefineConstant[ ComputeCommand       = {"-solve -v 1 -v2", Path "GetDP/9"} ];


