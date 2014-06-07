//
// Permanent Magnet Synchronous Generator
//

Include "pmsm_data.geo";

DefineConstant[
  //!!! impose current density directly, instead of voltage or current
  Flag_ImposedCurrentDensity = 1,

  Flag_AnalysisType = {0,Name "Input/Type of analysis",Choices{0="Static",  1="Time domain"}, Highlight "Blue", Visible 1,
                       Help Str["- Use 'Static' to compute static fields created in the machine",
                       "- Use 'Time domain' to compute the dynamic response of the machine"]} ,
  Flag_SrcType_Stator = { 1, Name "Input/Source type in stator",Choices{0="None",1="Current"}, Highlight "Blue", Visible 1},
  Flag_NL = { 0, Choices{0,1}, Name "Input/Nonlinear BH-curve", Visible 1},
  Flag_NL_law_Type = { 0, Name "Input/BH-curve",Choices{0="Analytical", 1="Interpolated",
                                                        2="Analytical VH800-65D", 3="Interpolated VH800-65D"},
                       Highlight "Blue", Visible Flag_NL},
    // impose current density directly, instead of voltage or current
  Flag_ImposedCurrentDensity = 1
];

Flag_Cir = !Flag_SrcType_Stator ;

Group {
  Stator_Fe     = #STATOR_FE ;
  Stator_Al     = #{};
  Stator_Cu     = #{};
  Stator_Air    = #STATOR_AIR ;
  Stator_Airgap = #STATOR_AIRGAP ;
  Stator_Bnd_A0 = #STATOR_BND_A0 ;
  Stator_Bnd_A1 = #STATOR_BND_A1 ;

  Rotor_Fe     = #ROTOR_FE ;
  Rotor_Al     = #{};
  Rotor_Cu     = #{};
  Rotor_Fe     = #ROTOR_FE ;
  Rotor_Air    = #ROTOR_AIR ;
  Rotor_Airgap = #ROTOR_AIRGAP ;
  Rotor_Bnd_A0 = #ROTOR_BND_A0 ;
  Rotor_Bnd_A1 = #ROTOR_BND_A1 ;

  MovingBand_PhysicalNb = #MOVING_BAND ;  // Fictitious number for moving band, not in the geo file
  Surf_Inf = #SURF_EXT ;
  Surf_bn0 = #SURF_INT ;
  Surf_cutA0 = #{STATOR_BND_A0, ROTOR_BND_A0};
  Surf_cutA1 = #{STATOR_BND_A1, ROTOR_BND_A1};

  Dummy = #NICEPOS;

  nbMagnets = NbrPolesTot/SymmetryFactor ;
  For k In {1:nbMagnets}
    Rotor_Magnet~{k} = Region[ (ROTOR_MAGNET+k-1) ];
    Rotor_Magnets += Region[ Rotor_Magnet~{k} ];
  EndFor

  nbInds = (Flag_Symmetry) ? NbrPoles*NbrSectTotStator/NbrPolesTot : NbrSectTotStator ;
  Printf("NbrPoles=%g, nbInds=%g SymmetryFactor=%g", NbrPoles, nbInds, SymmetryFactor);

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

  // FIXME: Just one physical region for nice graph in Onelab
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

}

Function {
  mur_fe = 1000;
  NbrPhases = 3 ;

  // For a radial remanent b
  For k In {1:nbMagnets}
    br[ Rotor_Magnet~{k} ] = (-1)^(k-1) * b_remanent * Vector[ Cos[Atan2[Y[],X[]]], Sin[Atan2[Y[],X[]]], 0 ];
  EndFor


  //Data for modeling a stranded inductor
  NbWires[]  = 104 ; // Number of wires per slot
  // STATOR_IND_AM comprises all the slots in that phase, we need thus to divide by the number of slots
  nbSlots[] = Ceil[nbInds/NbrPhases/2] ;
  SurfCoil[] = SurfaceArea[]{STATOR_IND_AM}/nbSlots[] ;//All inductors have the same surface
  //--------------------------------------------------  
/*
  Surface_PM[] = SurfaceArea[]{ROTOR_MAGNET};

  DefineConstant[ SurfPM = {Surface_PM[ROTOR_MAGNET], ReadOnly 1,
                          Path "Output/2", Highlight "LightYellow" } ];		
*/ 
  //--------------------------------------------------


  FillFactor_Winding = 0.5 ; // percentage of Cu in the surface coil side, smaller than 1
  Factor_R_3DEffects = 1.5 ; // bigger than Adding 50% of resistance

  DefineConstant[ rpm = { rpm_nominal,
                          Name "Input/speed in rpm",
                          Highlight "AliceBlue", Visible (Flag_AnalysisType==1)} ]; // speed in rpm
  wr = rpm/60*2*Pi ; // speed in rad_mec/s

  // supply at fixed position
  DefineConstant[ Freq = { wr*NbrPolePairs/(2*Pi), ReadOnly 1,
                          Name "Output/Frequency", Highlight "LightYellow" } ];
  Omega = 2*Pi*Freq ;
  T = 1/Freq ;

  DefineConstant[
    thetaMax_deg = { 180, Name "Input/End rotor angle (loop)",
                     Highlight "AliceBlue", Visible (Flag_AnalysisType==1) }
  ];

  theta0   = InitialRotorAngle + 0. ;
  thetaMax = thetaMax_deg * deg2rad ; // end rotor angle (used in doing a loop)

  DefineConstant[
    NbTurns  = { (thetaMax-theta0)/(2*Pi), Name "Input/Number of revolutions",
                  Highlight "LightGrey", ReadOnly 1, Visible (Flag_AnalysisType==1)},
/*
    delta_theta_deg = { 1., Name "Input/Step [deg]",
                        Highlight "AliceBlue", Visible (Flag_AnalysisType==1)}
*/  
    delta_theta_deg = { 0, Name StrCat["Input/", StrCat[ResId,"Shift rotor position (no remesh) [mech. deg]"]], Highlight "AliceBlue", Min 0, Max 45, Step 0.5, Visible (Flag_AnalysisType==0)}

];

  delta_theta[] = delta_theta_deg * deg2rad ; //fonction utilisée dans changeOfCoordinates

  time0 = 0 ; // at initial rotor position
  delta_time = delta_theta_deg * deg2rad/wr;
  timemax = thetaMax/wr;

  DefineConstant[
    NbSteps = { Ceil[(timemax-time0)/delta_time], Name "Input/Number of steps",
                Highlight "LightGrey", ReadOnly 1, Visible (Flag_AnalysisType==1)}
  ];
/*
  RotorPosition[] = InitialRotorAngle + $Time * wr ;
  RotorPosition_deg[] = RotorPosition[]*180/Pi;
*/
  If(Flag_AnalysisType==0)
    RotorPosition[] = ( InitialRotorAngle_deg + delta_theta_deg ) * deg2rad ;
  /*
    PhaseAngle = II_phase * deg2rad  
      + ( InitialRotorAngle_deg + delta_theta_deg ) * NbrPolePairs * Flag_RotatingField * deg2rad;
  */
  EndIf

  If(Flag_AnalysisType==1)
    RotorPosition[] = InitialRotorAngle_deg * deg2rad + wr * $Time#11 ;
    PhaseAngle = II_phase * deg2rad ;
  EndIf
//+++
  Flag_ParkTransformation = 0 ;
  Theta_Park[] = ((RotorPosition[] + Pi/8) - Pi/6) * NbrPolePairs; // electrical degrees
  Theta_Park_deg[] = Theta_Park[]*180/Pi;

  DefineConstant[
    ID = { 0, Name "Input/Id stator current", Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1 && !Flag_ImposedCurrentDensity)},
    IQ = { Inominal, Name "Input/Iq stator current",  Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1 && !Flag_ImposedCurrentDensity )}
    //II = Inominal
  ] ;

  /*
  If(!Flag_SrcType_Stator)
    UndefineConstant["Input/50ID"];
    UndefineConstant["Input/51IQ"];
  EndIf
  */
}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Dir = "res/";
ResDir = "res/";
ExtGmsh = ".pos";
ExtGnuplot = ".dat";

/*// Onelab parameter tree structure*/
/*// po      = "Output - Electromagnetics/";*/
/*po      = StrCat["Output - Electromagnetics/", ResId];*/
/*poI     = StrCat[po,"0Current [A]/"];*/
/*poV     = StrCat[po,"1Voltage [V]/"];*/
/*poF     = StrCat[po,"2Flux linkage [Vs]/"];*/
/*poJL    = StrCat[po,"3Joule Losses [W]/"];*/
/*//po_mec  = "Output - Mechanics/";*/
/*po_mec  = StrCat["Output - Mechanics/", ResId];*/
/*po_mecT = StrCat[po_mec,"0Torque [Nm]/"];*/
/*//po_opt  = "Output - Optimization/";*/
/*po_opt  = StrCat["Output - Optimization/", ResId];*/
/*po_min  = StrCat["Output/", ResId];*/

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

If(Flag_SrcType_Stator)
  UndefineConstant["Input/Load resistance"];
EndIf

If(Flag_Cir)
  Include "pmsm_8p_circuit.pro" ;
EndIf
Include "machine_magstadyn_a.pro" ;
