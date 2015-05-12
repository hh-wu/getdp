//
// Permanent Magnet Synchronous Generator - Internal rotor with magnets on surface
//

Include "lomonova_data.geo";

DefineConstant[
  Flag_AnalysisType = {1,  Choices{0="Static",  1="Time domain"},
    Name "Input/19Type of analysis", Highlight "Blue",
    Help Str["- Use 'Static' to compute static fields created in the machine",
      "- Use 'Time domain' to compute the dynamic response of the machine"]} ,
  Flag_SrcType_Stator = { 0, Choices{0="None",1="Current"},
    Name "Input/41Source type in stator", Highlight "Blue"},
  Flag_NL = { 1, Choices{0,1},
    Name "Input/60Nonlinear BH-curve"},
  Flag_NL_law_Type = { 0, Choices{0="Analytical", 1="Interpolated",
      2="Analytical VH800-65D", 3="Interpolated VH800-65D"},
    Name "Input/61BH-curve", Highlight "Blue", Visible Flag_NL}
];

Flag_Cir = !Flag_SrcType_Stator;

Group {
  Stator_Fe     = Region[STATOR_FE] ;
  Stator_Al     = Region[{}];
  Stator_Cu     = Region[{}];
  Stator_Air    = Region[STATOR_AIR] ;
  Stator_Airgap = Region[STATOR_AIRGAP] ;

  Stator_Bnd_A0 = Region[STATOR_BND_A0] ;
  Stator_Bnd_A1 = Region[STATOR_BND_A1] ;

  Rotor_Fe     = Region[ROTOR_FE] ;
  Rotor_Al     = Region[{}];
  Rotor_Cu     = Region[{}];
  Rotor_Air    = Region[ROTOR_AIR] ;
  Rotor_Airgap = Region[ROTOR_AIRGAP] ;

  Rotor_Bnd_A0 = Region[ROTOR_BND_A0] ;
  Rotor_Bnd_A1 = Region[ROTOR_BND_A1] ;

  MovingBand_PhysicalNb = Region[MOVING_BAND] ; // Fictitious number for moving band, not in the geo file
  Surf_Inf = Region[SURF_EXT] ;
  Surf_bn0 = Region[SURF_INT] ;
  Surf_cutA0 = Region[{STATOR_BND_A0, ROTOR_BND_A0}];
  Surf_cutA1 = Region[{STATOR_BND_A1, ROTOR_BND_A1}];

  For k In {1:nbMagnets}
    Rotor_Magnet~{k} = Region[ (ROTOR_MAGNET+k-1) ];
    Rotor_Magnets += Region[ Rotor_Magnet~{k} ];
  EndFor

  nbInds = (Flag_Symmetry) ? NbrPolesInModel*NbrSectTotStator/NbrPolesTot : NbrSectTotStator ;
  Printf("NbrPoleInModels %g, nbInds=%g", NbrPolesInModel, nbInds);

  For k In {1:nbInds}
    Stator_Ind~{k} = Region[ (STATOR_IND+k-1) ];
    Stator_Inds += Region[ Stator_Ind~{k} ];
  EndFor

  If(Flag_Type==0)
    PhaseA += Region[{ Stator_Ind~{18}, Stator_Ind~{1}, Stator_Ind~{2}, Stator_Ind~{3}, Stator_Ind~{4}, Stator_Ind~{5}}];
    PhaseB += Region[{ Stator_Ind~{6},  Stator_Ind~{7}, Stator_Ind~{8}, Stator_Ind~{9}, Stator_Ind~{10}, Stator_Ind~{11}}];
    PhaseC += Region[{ Stator_Ind~{12}, Stator_Ind~{13}, Stator_Ind~{14}, Stator_Ind~{15}, Stator_Ind~{16}, Stator_Ind~{17}}];

    PhaseA_pos = Region[{ Stator_Ind~{18} }];
    PhaseB_pos = Region[{ Stator_Ind~{6} }];
    PhaseC_pos = Region[{ Stator_Ind~{12} }];

    For k In {1:nbInds:2}
      Stator_IndsP += Region[{ Stator_Ind~{k} }];
    EndFor
    For k In {2:nbInds:2}
      Stator_IndsN += Region[{ Stator_Ind~{k} }];
    EndFor

    Stator_Ind_Ap = Region[{Stator_Ind~{1}, Stator_Ind~{3}, Stator_Ind~{5} }];
    Stator_Ind_Am = Region[{Stator_Ind~{18}, Stator_Ind~{2}, Stator_Ind~{4} }];

    Stator_Ind_Bp = Region[{ Stator_Ind~{7}, Stator_Ind~{9}, Stator_Ind~{11}}];
    Stator_Ind_Bm = Region[{ Stator_Ind~{6}, Stator_Ind~{8}, Stator_Ind~{10}}];

    Stator_Ind_Cp = Region[{ Stator_Ind~{13}, Stator_Ind~{15}, Stator_Ind~{17}}];
    Stator_Ind_Cm = Region[{ Stator_Ind~{12}, Stator_Ind~{14}, Stator_Ind~{16}}];
  EndIf

  If(Flag_Type>0)
    For k In {1:nbInds:3}
      PhaseA += Region[Stator_Ind~{k+0}];
      PhaseB += Region[Stator_Ind~{k+1}];
      PhaseC += Region[Stator_Ind~{k+2}];
    EndFor
    PhaseA_pos = Region[Stator_Ind~{1}];
    PhaseB_pos = Region[Stator_Ind~{2}];
    PhaseC_pos = Region[Stator_Ind~{3}];

    For k In {1:nbInds:2}
      Stator_IndsP += Region[Stator_Ind~{k}];
    EndFor
    For k In {2:nbInds:2}
      Stator_IndsN += Region[Stator_Ind~{k}];
    EndFor
  EndIf

  StatorC  = Region[{}] ;
  StatorCC = Region[Stator_Fe] ;
  RotorC   = Region[{}] ;
  RotorCC  = Region[{Rotor_Fe, Rotor_Magnets}] ;

  // Moving band:  with or without symmetry, these BND lines must be complete
  Stator_Bnd_MB = Region[STATOR_BND_MOVING_BAND];
  For k In {1:SymmetryFactor}
    Rotor_Bnd_MB~{k} = Region[ (ROTOR_BND_MOVING_BAND+k-1) ];
    Rotor_Bnd_MB += Region[ Rotor_Bnd_MB~{k} ];
  EndFor
  Rotor_Bnd_MBaux = Region[ {Rotor_Bnd_MB, -Rotor_Bnd_MB~{1}}];

  Dummy = Region[NICEPOS] ;
}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Function {

  // For a radial remanent b
  For k In {1:nbMagnets}
    br[ Rotor_Magnet~{k} ] = (-1)^(k-1) * b_remanent * Vector[ Cos[Atan2[Y[],X[]]], Sin[Atan2[Y[],X[]]], 0 ];
  EndFor

  //Data for modeling a stranded inductor
  NbWires[]  = nw1 ; // Number of wires
  SurfCoil[] = SurfaceArea[]{STATOR_IND};//==2.288642e-05 All inductors have the same surface

  NbrPolePairs = NbrPolesTot/2 ;

  DefineConstant[ rpm = { rpm_nominal,
      Name "Input/7Speed [rpm]",
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1)} ];
  wr = rpm/60*2*Pi ; // speed in rad_mec/s

  // supply at fixed position
  DefineConstant[ Freq = {wr * NbrPolePairs/(2*Pi), ReadOnly 1,
      Name "Output/1Frequency", Highlight "LightYellow" } ];

  Omega = 2*Pi*Freq ;
  T = 1/Freq ;

  DefineConstant[
    thetaMax_deg = { 180, Name "Input/21End rotor angle (loop)",
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1) }
  ];

  theta0   = InitialRotorAngle + 0. ;
  thetaMax = thetaMax_deg * deg2rad ; // end rotor angle (used in doing a loop)

  DefineConstant[
    NbTurns  = { (thetaMax-theta0)/(2*Pi), Name "Input/24Number of revolutions",
      Highlight "LightGrey", ReadOnly 1, Visible (Flag_AnalysisType==1)},
    delta_theta_deg = { 1., Name "Input/22Step [deg]",
      Highlight "AliceBlue", Visible (Flag_AnalysisType==1)}
  ];

  delta_theta[] = delta_theta_deg * deg2rad ;

  time0 = 0 ; // at initial rotor position
  delta_time = delta_theta_deg * deg2rad/wr;
  timemax = thetaMax/wr;

  DefineConstant[
    NbSteps = { Ceil[(timemax-time0)/delta_time], Name "Input/23Number of steps",
      Highlight "LightGrey", ReadOnly 1, Visible (Flag_AnalysisType==1)}
  ];

  RotorPosition[] = InitialRotorAngle + $Time * wr ;
  RotorPosition_deg[] = RotorPosition[]*180/Pi;

  Flag_ParkTransformation = 1;
  Theta_Park[] = ((RotorPosition[] + Pi/8) - Pi/6) * NbrPolePairs;
  Theta_Park_deg[] = Theta_Park[]*180/Pi;


  DefineConstant[
    ID = { 0, Name "Input/50Id stator current",
      Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1)},
    IQ = { I1, Name "Input/51Iq stator current",
      Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1)},
    I0 = 0
  ] ;

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
  Include "lomonova_circuit.pro" ;
EndIf
Include "machine_magstadyn_a.pro" ;
