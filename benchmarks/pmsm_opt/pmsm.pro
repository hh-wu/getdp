//
// Permanent Magnet Synchronous Generator
//

Include "pmsm_data.geo";

// performance function type
NO_PERF = 0;
BFIELD_ERROR = 1;
TORQUE_VAR = 2;
IRON_LOSSES = 3;
COMPLIANCE = 4;
VOLUME = 5;
TORQUE = 6;

// postpro views tag
TORQUE_VAR_FIELD = 20;
VELOCITY_FIELD = 7;//pour que ça marche avec -gmshread il faut mettre à 0

DefineConstant[
  //!!! impose current density directly, instead of voltage or current
  //Flag_ImposedCurrentDensity = 1,

  Flag_AnalysisType = {0,Name "Input/02Type of analysis",
                         Label "Input/Type of analysis",
                         Choices{0="Static",  1="Time domain"},
                         Highlight "Blue", Visible 1},
  Flag_SrcType_Stator = { 1, Name "Input/Source type in stator",
                             Choices{0="None",1="Current"}, Highlight "Blue", Visible 1},
  Flag_NL = { 0, Name "Input/NonlinearSystem",
                 Label "Nonlinear BH-curve", Choices{0,1}},

  Flag_NL_law_Type = { 1, Name "Input/NonlinearCurve", Label "BH-curve", 
		       Choices{0="Analytical", 1="Interpolated",
			       2="Analytical VH800-65D", 3="Interpolated VH800-65D"},
		       Highlight "Blue", Visible Flag_NL}

  // sensitivity analysis input
  Flag_PerfType = {TORQUE, 
    Choices {
      NO_PERF="No performance function",  
      BFIELD_ERROR="air gap B field error",
      TORQUE_VAR="torque variance",
      IRON_LOSSES="losses",
      COMPLIANCE="compliance",
      TORQUE="torque"
    },
   Name "Input/OptParam/PerfType",Label "performance function type", Visible 1},

  Tnom = {90.0, 
    Name "Input/OptParam/TorqueNominal", Label "Nominal desired torque",
    Visible (Flag_PerfType==TORQUE_VAR)},

  regionVar = {0, Name "Input/OptParam/regionVar",
                  Label "Region of design variables", 
                  Choices {0="Rotor Fe",1="Stator Fe",2="Rotor/Stator Fe"},
                  Visible (Flag_topopt)},

  Flag_InterpLaw = {0, Name "Input/OptParam/MaterialInterpLaw",
                       Label "material interpolation law",
                       Choices {0="SIMP",1="RAMP"},Visible (Flag_topopt)},

  degree_SIMP = {3.0, Name "Input/OptParam/SimpPenalDegree",
                      Label "Degree SIMP", Visible (Flag_topopt)}

];

Flag_Cir = !Flag_SrcType_Stator ;
Flag_ImposedCurrentDensity = Flag_SrcType_Stator ;

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
  //mur_fe = 1000;
  NbrPhases = 3 ;

  // For a radial remanent b
  For k In {1:nbMagnets}
    br_mag[Rotor_Magnet~{k}] = (-1)^(k-1) * b_remanent;
    br_dir[Rotor_Magnet~{k}] = Vector[ Cos[Atan2[Y[],X[]]], Sin[Atan2[Y[],X[]]], 0 ];
    br[ Rotor_Magnet~{k} ] = br_mag[]*br_dir[];
  EndFor


  //Data for modeling a stranded inductor
  NbrWires[]  = 104 ; // Number of wires per slot
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
  thetaMax = thetaMax_deg * deg ; // end rotor angle (used in doing a loop)

  DefineConstant[
    NbTurns  = { (thetaMax-theta0)/(2*Pi), Name "Input/Number of revolutions",
                  Highlight "LightGrey", ReadOnly 1, Visible (Flag_AnalysisType==1)},

//    delta_theta_deg = { 0., Name "Input/Step [deg]",
//                        Highlight "AliceBlue", Visible (Flag_AnalysisType==1)}
  
    delta_theta_deg = { 0, Name StrCat["Input/", StrCat[ResId,"ShiftMeshRotorPosition"]],
                         Label "Shift rotor position (no remesh) [mech. deg]",
                         Highlight "AliceBlue", Min 0, Max 45, Step 0.5, 
                         Visible (Flag_AnalysisType==0)}

];

  delta_theta[] = delta_theta_deg * deg ; //fonction utilisée dans changeOfCoordinates

  time0 = 0 ; // at initial rotor position
  delta_time = delta_theta_deg * deg/wr;
  timemax = thetaMax/wr;

  DefineConstant[
    NbSteps = { Ceil[(timemax-time0)/delta_time], Name "Input/Number of steps",
                Highlight "LightGrey", ReadOnly 1, Visible (Flag_AnalysisType==1)}
  ];

//    RotorPosition[] = InitialRotorAngle + $Time * wr ;
//    RotorPosition_deg[] = RotorPosition[]*180/Pi;

  If(Flag_AnalysisType==0)
    II_phase = 0.0;
    Flag_RotatingField = 1.0;
    RotorPosition[] = ( /* InitialRotorAngle_deg +*/ delta_theta_deg ) * deg ;
    PhaseAngle = II_phase * deg  
      +(InitialRotorAngle_deg+delta_theta_deg)*NbrPolePairs*Flag_RotatingField*deg;
    Printf("PhaseAngle:%g",PhaseAngle);
  EndIf

  If(Flag_AnalysisType==1)
    RotorPosition[] = InitialRotorAngle_deg * deg + wr * $Time#11 ;
    PhaseAngle = II_phase * deg ;
  EndIf

  //-- new --
  InitialRotorAngle_deg = InitialRotorAngle/deg;
  II_phase = 30.0;
  PhaseAngle = II_phase * deg  
      + ( InitialRotorAngle_deg + delta_theta_deg ) * NbrPolePairs*deg;
  Printf("PhaseAngle:%g",PhaseAngle);
  //-- end new --
//+++
  Flag_ParkTransformation = 0 ;
  Theta_Park[] = ((RotorPosition[] + Pi/8) - Pi/6) * NbrPolePairs; // electrical degrees
  Theta_Park_deg[] = Theta_Park[]*180/Pi;

  DefineConstant[
    ID = { 0, Name "Input/50Id stator current",
      Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1)},
    IQ = { Inominal, Name "Input/51Iq stator current",
      Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1)}
  ] ;

  II = Inominal;
}


If(Flag_SrcType_Stator)
  UndefineConstant["Input/Load resistance"];
EndIf

//If(Flag_Cir)
//  Include "pmsm_8p_circuit.pro" ;
//EndIf

DefineConstant[
  R_ = {"OptimStep", Name "GetDP/1ResolutionChoices",Choices {"Analysis", "OptimStep"}, Visible 0},
  C_ = {"-solve -v 5 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];

// physical problem formulation
Include "machine_magstadyn_a.pro" ;


// sensitivity analysis formulation
Group {
  // TO domain
  If(!Flag_topopt)
    DomainOpt = Region[{}];
  EndIf
  If(Flag_topopt)
    If(regionVar == 0)
      DomainOpt = Region[{Rotor_Fe}];
      DomainOptFix = Region[{}];
      DomainOptMV = Region[{Rotor_Fe}];
    EndIf 
    If(regionVar == 1)
      DomainOpt = Region[{Stator_Fe}];
      DomainOptFix = Region[{Stator_Fe}];
      DomainOptMV = Region[{}];
    EndIf
    If(regionVar == 2)
      DomainOpt = Region[{Rotor_Fe,Stator_Fe}];
      DomainOptFix = Region[{Stator_Fe}];
      DomainOptMV = Region[{Rotor_Fe}];
    EndIf
  EndIf  

  // specified by user !!!
  DomainFunc = Region[{}];
  If(Flag_PerfType == COMPLIANCE 
     || Flag_PerfType == TORQUE
     || Flag_PerfType == TORQUE_VAR
     || Flag_PerfType == BFIELD_ERROR)
    DomainFunc = Region[{Rotor_Airgap}];    
  EndIf 
}

Function {
  // Functions used for optimization
  // Target B in air-gap
  Btarget[] = Sqrt[2]*0.502*Sin[(AngularPosition[]-RotorPosition[]
                                + Pi/8)*NbrPolesTot/2.0];
  BradCoeff[] = 2*Pi*AxialLength/SurfaceArea[];

  // Target Torque
  Ttarget[] = Tnom;//Nm 
  torqueVar[] = ScalarField[XYZ[],0,1]{TORQUE_VAR_FIELD};
  torqueCoeff[] = XYZ[]*XYZ[]*2*Pi*AxialLength/SurfaceArea[]; 
  er[] = Unit[XYZ[]];
  et[] = Unit[ Vector[ -Y[], X[],0] ];

//  If(Flag_FilterMethod == SENS_FILT)
//    //rmin2 = Rmin*Rmin;
//    prod_x_dC[#{DomainOptMV}] = ScalarField[RotateZ_desVar[],0,1]{SENS_FIELD};
//    prod_x_dC[#{DomainOptFix}] = ScalarField[XYZ[],0,1]{SENS_FIELD};
//  EndIf

  // operators used for lie derivative
  velocityField[] = Rotate[ VectorField[RotateZ_desVar[],0,1]{VELOCITY_FIELD}, 
                            0, 0, RotorPosition[] ] ;
  dV[] = Rotate[ Transpose[GradVectorField[RotateZ_desVar[], 0 , 1]{VELOCITY_FIELD}], 
                            0, 0, -RotorPosition[] ];

  ETA[] = dV[]#1 + Transpose [ #1 ] - TTrace [ #1 ] * TensorDiag[1,1,1];
  LV1[] = dV[] * $1 ;
  LV2[] = TTrace [ dV[]#1 ] * $1 - Transpose [ #1 ] * $1 ;
  LV3[] = Transpose [ dV[]#1 ] - TTrace [ #1 ] * TensorDiag[1,1,1];
  dot_er[] = (et[] * velocityField[])/Norm[XYZ[]] * et[];
  
  If(Flag_PerfType == COMPLIANCE)
    Func[] = nu[$1] * SquNorm[$1]; //F = nu*B^2, alpha=nu*{d a},beta={d a} 
    dFdb[] = 2. * nu[$1] * $1; //dF/db = 2*nu*B
    dF_adjoint_lie[] = nu[$1#2] * #2 * ( ETA[] * #2 ) ;//fixme #1 != #2 !!!
  EndIf
  If(Flag_PerfType == TORQUE)
    Func[] = nu[$1]*torqueCoeff[]*( $1*er[] )*( $1*et[] );
    dFdb[] = nu[$1]*torqueCoeff[]*(er[]*($1*et[]) + et[]*($1*er[]));
    d_torqueCoeff[] = (er[]*velocityField[])*2*Pi*AxialLength/SurfaceArea[];
//    dF_adjoint_lie[]= nu[$1#2]*d_torqueCoeff[] * ( #2 * er[] ) * ( #2 * et[] )
//                     -nu[#2]*torqueCoeff[]*(
//                       ( LV2[#2] * er[] ) * ( #2 * et[] )
//                      +( #2 * er[] ) * ( LV2[#2] * et[] )
//                      -( #2 * er[] ) * ( #2 * et[] ) * TTrace [#1]);  
    dF_adjoint_lie[]= nu[$1#2]*d_torqueCoeff[] * ( #2 * er[] ) * ( #2 * et[] )
                     -nu[$1]*torqueCoeff[]*(
                       ( LV2[#2] * er[] ) * ( #2 * et[] )#3
                      +( LV2[#2] * et[] ) * ( #2 * er[] )#4
		      + ((#3*#3) - (#4*#4))*(velocityField[]*et[])/Norm[XYZ[]]
                      -( #2 * er[] ) * ( #2 * et[] ) * TTrace [#1]);  
  EndIf
  If(Flag_PerfType == TORQUE_VAR)
    Func[] = (nu[$1]*torqueCoeff[]*( $1*er[] )*( $1*et[] ))/Ttarget[] - 1.0; 
    dFdb[] = 2.0 * torqueVar[] * nu[$1] * torqueCoeff[] / Ttarget[]*
            ( et[] * ( $1 * er[] )   +  er[] * ( $1 * et[] ) );
//    dFdb[] = 2.0 * Func[$1] * nu[$1] * torqueCoeff[] / Ttarget[]*
//            ( et[] * ( $1 * er[] )   +  er[] * ( $1 * et[] ) );

  EndIf
  If(Flag_PerfType == BFIELD_ERROR)
    Func[] = nu[$1] * SquNorm[$1]; 
    dFdb[] = 2.0 * BradCoeff[] * ( $1 * er[] - Btarget[] ) * er[];
  EndIf

  dF_direct_lie[] = dFdb[$1#1]*$2 + dF_adjoint_lie[#1];


//  // derivative of linear load
////  d_M_lie[] = nu[$1]*br[] * (Transpose [ dV[] ]   * $2) 
////             + nu[$1] * br_mag[]*(et[]*velocityField[])*(et[]*$2)/Norm[XYZ[]]; 
//  d_M_lie[] = nu[$1] * br[] * (Transpose [ dV[] ] * $2) 
//            + nu[$1] * br_mag[] * (dot_er[]*$2); 
//  //d_M_lie[] = nu[$1] * br[] * ( ETA[] * $2 ) ; 
////  d_J_lie[] = LV2[js[]]* $1;//-( LV3[] * js[] ) * $1 ;

//  // derivative of bilinear form
//  d_bilin_lie[] = nu[$1] * $1 * ( ETA[] * $2 ) ; 
//  d_bilin_lie_NL[] = $2 * (( dhdb_NL[$1] * LV3[] ) * $1);

}

Include "../optimization/sensitivity.pro"; //FIXME




