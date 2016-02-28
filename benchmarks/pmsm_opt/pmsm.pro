/*
  Permanent Magnet Synchronous Generator
*/

Include "pmsm_data.geo";

Include "BH.pro"; // nonlinear BH caracteristic of magnetic material

DefineConstant[
  Flag_AnalysisType = {0,Name "Input/Finite Element/Type of analysis",
    Choices{0="Static",  1="Time domain"},Highlight "Blue", Visible 1},
  Flag_orderFE = {1, Name "Input/Finite Element/FE order",
    Choices {1="order 1 FE",2="order 2 FE"}, Highlight "Blue"},  
  Flag_SrcType_Stator = { 1, Name "Input/Finite Element/Source type in stator",
    Choices{0="None",1="Current"}, Highlight "Blue", Visible 1},
  Flag_ConstantSource = 0,
  //!!! impose current density directly, instead of voltage or current
  Flag_ImposedCurrentDensity = Flag_SrcType_Stator,
  ID = { 0, Name "Input/Finite Element/50Id stator current",
    Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1)},
  IQ = { Inominal, Name "Input/Finite Element/51Iq stator current",
    Highlight "AliceBlue", Visible (Flag_SrcType_Stator==1)},
  II = Inominal,
  Flag_Cir = !Flag_SrcType_Stator,
  Flag_NL = { 0, Name "Input/Finite Element/NonlinearSystem", Choices{0,1} },
  Flag_NL_law_Type = { 1, Name "Input/Finite Element/NonlinearCurve",  
    Choices{0="Analytical",1="Interpolated",
      2="Analytical VH800-65D", 3="Interpolated VH800-65D"},
    Highlight "Blue", Visible Flag_NL }
  rpm = { rpm_nominal, Name "Input/Finite Element/speed in rpm",
    Highlight "AliceBlue", Visible (Flag_AnalysisType==1)},
  wr = rpm/60*2*Pi, 
  Freq = { wr*NbrPolePairs/(2*Pi), ReadOnly 1,
    Name "Output/Frequency", Highlight "LightYellow" },
  thetaMax_deg = { 180, 
    Name "Input/End rotor angle (loop)",
    Highlight "AliceBlue", Visible (Flag_AnalysisType==1) },
  thetaMax = thetaMax_deg * deg,
  theta0   = InitialRotorAngle + 0.,
  NbTurns  = { (thetaMax-theta0)/(2*Pi), 
    Name "Input/Number of revolutions",
    Highlight "LightGrey", ReadOnly 1, Visible (Flag_AnalysisType==1)}, 
  delta_theta_deg = { 0, 
    Name StrCat["Input/", "ShiftMeshRotorPosition"],
    Highlight "AliceBlue", Min 0, Max 45, Step 0.5,Visible (Flag_AnalysisType==0)},
  timemax = thetaMax/wr,
  time0 = 0,
  delta_time = delta_theta_deg * deg/wr,
  NbSteps = { Ceil[(timemax-time0)/delta_time], 
  Name "Input/Number of steps",
    Highlight "LightGrey", ReadOnly 1, Visible (Flag_AnalysisType==1)}
];

Group {
   DefineGroup[
    DomainM, DomainB, DomainS,DomainFunc,
    DomainL, DomainNL, Dummy,torqueVar,
    Rotor_Inds, Rotor_IndsP, Rotor_IndsN, Rotor_Magnets, Rotor_Bars,
    Surf_bn0, Point_ref, Rotor_Bnd_MBaux,
    Resistance_Cir, Inductance_Cir, Capacitance_Cir, DomainZt_Cir, DomainSource_Cir
  ];
  Stator_Fe     = #STATOR_FE ;
  Stator_Al     = #{};
  Stator_Cu     = #{};
  Stator_Air    = #STATOR_AIR ;
  Stator_Airgap = #STATOR_AIRGAP ;
  Stator_Bnd_A0 = #STATOR_BND_A0 ;
  Stator_Bnd_A1 = #STATOR_BND_A1 ;
  If(!Flag_IPM)
    Rotor_Fe = #ROTOR_FE;
  Else
    Rotor_Fe = #{ROTOR_FE,ROTOR_FE_PM};
  EndIf
  Rotor_Al     = #{};
  Rotor_Cu     = #{};
  Rotor_Fe     = #ROTOR_FE ;
  Rotor_Air    = #ROTOR_AIR ;
  Rotor_Airgap = #ROTOR_AIRGAP ;
  Rotor_Bnd_A0 = #ROTOR_BND_A0 ;
  Rotor_Bnd_A1 = #ROTOR_BND_A1 ;

  // Fictitious number for moving band, not in the geo file
  MovingBand_PhysicalNb = #MOVING_BAND ;
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
  DomainM = Region[ {Rotor_Magnets} ] ;
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
  Inds = Region[ {Stator_Inds, Rotor_Inds} ] ;

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
  //  DomainB = Region[ {Inds} ] ;
  If(!Flag_ImposedCurrentDensity)
    DomainB = Region[ {Inds} ] ;
    DomainS = Region[{}];
  ElseIf(Flag_ImposedCurrentDensity)
    DomainB = Region[ {} ] ;
    DomainS = Region[{Inds}];
  EndIf
  Stator  = Region[{ StatorC, StatorCC }] ;
  Rotor   = Region[{ RotorC,  RotorCC }] ;
  Rotor_Moving = Region[{ Rotor,Rotor_Air,Rotor_Airgap,Rotor_Inds,Rotor_Bnd_MBaux}]; 
  MB=MovingBand2D[MovingBand_PhysicalNb, Stator_Bnd_MB, Rotor_Bnd_MB, SymmetryFactor];
  Air = Region[{ Rotor_Air, Rotor_Airgap, Stator_Air, Stator_Airgap, MB } ] ;
  Inds = Region[{ Rotor_Inds, Stator_Inds } ] ;
  DomainV = Region[{}]; // Speed considered either with term v/\b
  //If(Term_vxb) // or not dynamics in time domain + mechanics
  //  DomainV = Region[{ RotorC }];
  //EndIf
  DomainCC = Region[{ Air, Inds, StatorCC, RotorCC }];
  DomainC  = Region[{ StatorC, RotorC }];
  Domain  = Region[{ DomainCC, DomainC }] ;
  DomainFe = Region[ {Stator_Fe, Rotor_Fe } ];
  If(Flag_NL)
    DomainNL = Region[ {Stator_Fe, Rotor_Fe } ];
    DomainL  = Region[ {Domain,-DomainNL} ];
  EndIf
  DomainKin = #1234 ; // Dummy region number for mechanical equation
  DomainDummy = #12345 ; // Dummy region number for postpro with functions
}

Function {
  DefineFunction[dhdb_NL,d_nu,velocity~{1},velocity~{2},velocity~{3}];

  er[] = Unit[XYZ[]];
  et[] = Unit[ Vector[ -Y[], X[],0] ];

  //mur_fe = 1000;
  NbrPhases = 3 ;

  // For a radial remanent b
  For k In {1:nbMagnets}
    br_mag[Rotor_Magnet~{k}] = (-1)^(k-1) * b_remanent;
    //br_dir[Rotor_Magnet~{k}] = Vector[ Cos[Atan2[Y[],X[]]], Sin[Atan2[Y[],X[]]], 0 ];
    br[ Rotor_Magnet~{k} ] = br_mag[] * er[]; //br_dir[];
  EndFor

  //Data for modeling a stranded inductor
  NbrWires[]  = 104 ; // Number of wires per slot
  // STATOR_IND_AM comprises all the slots in that phase, 
  // we need thus to divide by the number of slots
  nbSlots[] = Ceil[nbInds/NbrPhases/2] ;
  // All inductors have the same surface
  SurfCoil[] = SurfaceArea[]{STATOR_IND_AM}/nbSlots[];

  FillFactor_Winding = 0.5 ; // percentage of Cu in the surface coil side,smaller than 1
  Factor_R_3DEffects = 1.5 ; // bigger than Adding 50% of resistance

  // speed in rpm  
  Omega = 2*Pi*Freq ;
  T = 1/Freq ;
  //theta0   = InitialRotorAngle + 0. ;
  //thetaMax = thetaMax_deg * deg ; // end rotor angle (used in doing a loop)
  delta_theta[] = delta_theta_deg * deg ; //fonction utilisée dans changeOfCoordinates
  //time0 = 0 ; // at initial rotor position
  //delta_time = delta_theta_deg * deg/wr;
  //timemax = thetaMax/wr;

  If(Flag_AnalysisType==0)
    II_phase = 0.0;
    Flag_RotatingField = 1.0;
    RotorPosition[] = ( /* InitialRotorAngle_deg +*/ delta_theta_deg ) * deg ;
    PhaseAngle = II_phase * deg  
      +(InitialRotorAngle_deg+delta_theta_deg)*NbrPolePairs*Flag_RotatingField*deg;
    Printf("PhaseAngle:%g",PhaseAngle);
  ElseIf(Flag_AnalysisType==1)
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
  Flag_ParkTransformation = 0 ;
  Theta_Park[] = ((RotorPosition[] + Pi/8) - Pi/6) * NbrPolePairs; // electrical degrees
  Theta_Park_deg[] = Theta_Park[]*180/Pi;
  RotateZ_desVar[] = Rotate[ XYZ[], 0, 0, -RotorPosition[] ] ;

  mur_fe = 1000.0;
  mu0 = 4.e-7 * Pi ;
  nu0 = 1. / mu0 ;
  sigma_al = 3.72e7 ; // conductivity of aluminum [S/m]
  sigma_cu = 5.9e7  ; // conductivity of copper [S/m]
  nu[#{Air,Inds,Stator_Al,Rotor_Al,Stator_Cu,Rotor_Cu,Rotor_Magnets,Rotor_Bars}]=
    1./ mu0;
  
  If(!Flag_NL) // linear b(h) curve
    If(StrCmp(Flag_optType,"topology"))  
      Printf["Linear ferromagnetic material"];
      nu [#{ Stator_Fe, Rotor_Fe }]  = 1 / (mur_fe * mu0) ;
      nu_prime[#{Stator_Fe, Rotor_Fe }] = 0.;
    Else
      Printf["Linear ferromagnetic material, topology simp"];
      p = degree_SIMP; //penalty factor
      designVar[#{DomainOptMV}]  = ScalarField[RotateZ_desVar[],0,1]{DES_VAR_FIELD};
      designVar[#{DomainOptFix}] = ScalarField[XYZ[],0,1]{DES_VAR_FIELD};    
      nu[#{DomainFe,-DomainOpt}]  = 1 / (mur_fe * mu0) ;
      nu[#{DomainOpt}]  = (1/(mur_fe * mu0)-nu0)*designVar[]^p + nu0; 
      nu_prime[#{DomainOpt}]  = p*(1 / (mur_fe * mu0) - nu0)*designVar[]^(p-1.0); 
    EndIf
  Else  // non-linear b(h) curve
    If(Flag_NL_law_Type==0) //analytic nu-law
      Printf["Compute Nu map, Nltype=%g",Flag_NL_law_Type];
      //nu [#{DomainFe}] = nu_1a[$1] ;
      //dhdb_NL [#{DomainFe}] = dhdb_1a_NL[$1]; //Vérifier la formule !!!!
      nu [#{DomainFe}] = nu_2a[$1] ;
      //dhdb_NL [#{DomainFe}] = dhdb_2a[$1];
      dhdb_NL [#{DomainFe}] = dhdb_2a_NL[$1];  
    ElseIf(Flag_NL_law_Type==1) //interpolated nu-law
      If(StrCmp(Flag_optType,"topology"))
        nu [#{DomainFe}] = nu_1[$1] ;
        dhdb_NL[#{DomainFe} ] = dhdb_1_NL[$1];
      Else
        p = degree_SIMP;
        nu[#{DomainFe,-DomainOpt}] = nu_1[$1];
        dhdb_NL[#{DomainFe,-DomainOpt}] = dhdb_1_NL[$1]; //stator
        designVar[#{DomainOptMV}]=ScalarField[RotateZ_desVar[],0,1]{DES_VAR_FIELD};
        designVar[#{DomainOptFix}]=ScalarField[XYZ[],0,1]{DES_VAR_FIELD};  
        If(!StrCmp(Flag_InterpLaw,"simp")) 
          Printf["Compute SIMP Nu map, Nltype=%g",Flag_NL_law_Type];
	  nu[#{DomainOpt}] = nu0*(1.0 + (nu_1[$1]/nu0 - 1.0)*designVar[]^p);
          nu_prime[#{DomainOpt}] = p*nu0*(nu_1[$1]/nu0 - 1.0)*designVar[]^(p-1.0);
	  dhdb_NL[#{DomainOpt}] = dhdb_1_NL[$1]*designVar[]^p; 
        ElseIf(!StrCmp(Flag_InterpLaw,"ramp"))
          Printf["Compute RAMP Nu map, Nltype=%g",Flag_NL_law_Type];	    
          nu[#{DomainOpt}]=(designVar[]/(1.0 + p*(1 - designVar[])))*nu_1[$1];
          nu_prime[#{DomainOpt}]=((1.0+p)/(1.0+p*(1-designVar[]))^2.0)*nu_1[$1];
      	  dhdb_NL[#{DomainOpt}]=dhdb_1_NL[$1]*(designVar[]/(1.0+p*(1-designVar[]))); 
        EndIf
      EndIf
    ElseIf(Flag_NL_law_Type==2)
       nu [#{Stator_Fe, Rotor_Fe }] = nu_3kWa[$1] ;
       dhdb_NL [ DomainNL ] = dhdb_3kWa_NL[$1];
    ElseIf(Flag_NL_law_Type==3)
       nu [#{Stator_Fe, Rotor_Fe }] = nu_3kW[$1] ;
       dhdb_NL [ DomainNL ] = dhdb_3kW_NL[$1];
    EndIf
  EndIf

  sigma[#{Rotor_Fe, Stator_Fe}] = sigma_fe ;
  sigma[#{Rotor_Al, Stator_Al}] = sigma_al ;
  sigma[#{Rotor_Cu, Stator_Cu}] = sigma_cu ;
  sigma[#{Inds}] = sigma_cu ;

  rho[] = 1/sigma[] ;

  Rb[] = Factor_R_3DEffects*AxialLength*FillFactor_Winding*NbrWires[]^2
         /(SurfCoil[]*sigma[]);
  Resistance[#{Stator_Inds, Rotor_Inds}] = Rb[] ;

  Idir[#{Stator_IndsP, Rotor_IndsP}] =  1 ;
  Idir[#{Stator_IndsN, Rotor_IndsN}] = -1 ;

  // Functions for Park transformation
  I0 = 1;
  Idq0[] = Vector[ ID, IQ, I0 ] ;
  Pinv[] = Tensor[ Sin[Theta_Park[]],        Cos[Theta_Park[]],        1,
                   Sin[Theta_Park[]-2*Pi/3], Cos[Theta_Park[]-2*Pi/3], 1,
                   Sin[Theta_Park[]+2*Pi/3], Cos[Theta_Park[]+2*Pi/3], 1 ];

  P[] = 2/3*Tensor[Sin[Theta_Park[]],Sin[Theta_Park[]-2*Pi/3],Sin[Theta_Park[]+2*Pi/3],
                   Cos[Theta_Park[]],Cos[Theta_Park[]-2*Pi/3],Cos[Theta_Park[]+2*Pi/3],
                   1/2, 1/2, 1/2 ] ;
  Iabc[]     = Pinv[] * Idq0[] ;
  Flux_dq0[] = P[] * Vector[#11, #22, #33];
  If(Flag_ParkTransformation)
    II = 1. ;
    IA[] = CompX[ Iabc[] ]; IB[] = CompY[ Iabc[] ] ;IC[] = CompZ[ Iabc[] ];
  Else
    If(!Flag_ConstantSource)
      pA = PhaseAngle; pB = pA - 2.*Pi/3.;pC = pB - 2.*Pi/3.;
      IA[] = F_Sin_wt_p[]{2*Pi*Freq, pA} ;
      IB[] = F_Sin_wt_p[]{2*Pi*Freq, pB} ;
      IC[] = F_Sin_wt_p[]{2*Pi*Freq, pC} ;
      WaveFormA[] = IA[];WaveFormB[] = IB[];WaveFormC[] = IC[];
    Else
      IA[] = 1.; IB[] = 1.; IC[] = 1.; Frelax[] = 1;
    EndIf
    js[PhaseA] = II * NbrWires[]/SurfCoil[] * IA[] * Idir[] * Vector[0, 0, 1] ;
    js[PhaseB] = II * NbrWires[]/SurfCoil[] * IB[] * Idir[] * Vector[0, 0, 1] ;
    js[PhaseC] = II * NbrWires[]/SurfCoil[] * IC[] * Idir[] * Vector[0, 0, 1] ;
  EndIf
  Velocity[] = wr*XYZ[]/\Vector[0,0,-1] ;
}


If(Flag_SrcType_Stator)
  UndefineConstant["Input/Load resistance"];
EndIf

DefineConstant[
  R_ = {"MagStaDyn_a_2D", Name "GetDP/1ResolutionChoices", Visible 1},
  C_ = {"-solve -v 5 -v2", Name "GetDP/9ComputeCommand", Visible 1},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 1}
];

// Physical groups, performance functions and sensitivity 
// for both shape and topology optimization 
Function {
  // shape variation velocity field
  If(StrCmp(Flag_optType,"shape") && StrCmp(Flag_optType,"topology") )
    For i In {1:3}
      velocity~{i}[] = 1.0;
    EndFor  
  Else
    For i In {1:3}
      If (Flag_projFuncSpace_v)
        l_v~{i} = ListFromFile[Sprintf("res/velocity_%g.txt",i)];
        velocity~{i}[] = ValueFromIndex[]{l_v~{i}()};
      Else
        velocity~{i}[] = 1.0;
      EndIf
    EndFor  
  EndIf
}

If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology") )
  Group {
    DefineGroup[SkinPerturb,SkinNonPerturb];
    DomainOpt = Region[{}];
    If(!StrCmp(Flag_optType,"shape"))
      DomainOpt = Region[{}];
    ElseIf(!StrCmp(Flag_optType,"topology"))
      If(regionVar == 0)
        DomainOpt = Region[{Rotor_Fe}];
        DomainOptFix = Region[{}];
        DomainOptMV = Region[{Rotor_Fe}];
      ElseIf(regionVar == 1)
        DomainOpt = Region[{Stator_Fe}];
        DomainOptFix = Region[{Stator_Fe}];
        DomainOptMV = Region[{}];
      ElseIf(regionVar == 2)
        DomainOpt = Region[{Rotor_Fe,Stator_Fe}];
        DomainOptFix = Region[{Stator_Fe}];
        DomainOptMV = Region[{Rotor_Fe}];
      EndIf
    EndIf  
    // specified by user !!!
    DomainFunc = Region[{Rotor_Airgap}];    
  }

  // performance functions and their sensitivity analysis wrt design variables
  Function {
    DefineFunction[dFdb,dF_adjoint_lie,torqueCoeff
      br_mag,dhdb_NL,ETA,LV1,LV2,LV3,dot_er,d_nu];
    
    // Functions used for optimization
    Btarget[] = Sqrt[2]*0.502*Sin[(/*AngularPosition[]-*/RotorPosition[]
              + Pi/8)*NbrPolesTot/2.0];
    BradCoeff[] = 2*Pi*AxialLength/SurfaceArea[];

    // Target Torque
    Ttarget[] = Tnom;//Nm 
    torqueVar[] = ScalarField[XYZ[],0,1]{TORQUE_VAR_FIELD};
    torqueCoeff[] = XYZ[]*XYZ[]*2*Pi*AxialLength/SurfaceArea[]; 

    velocity[] = Vector[$1,$2,$3];
    velocityField[] = Rotate[ VectorField[RotateZ_desVar[],0,1]{VELOCITY_FIELD}, 
                            0, 0, RotorPosition[] ] ;
//    dV[] = Rotate[ Transpose[GradVectorField[RotateZ_desVar[], 0 , 1]{VELOCITY_FIELD}], 
//                            0, 0, -RotorPosition[] ];
    dV[] = Tensor[CompX[$1],CompX[$2],CompX[$3],
                  CompY[$1],CompY[$2],CompY[$3],
                  CompZ[$1],CompZ[$2],CompZ[$3]];
    ETA2[] = dV[$1,$2,$3]#1+Transpose[#1]-TTrace[#1]*TensorDiag[1,1,1];
    ETA[] = $1 + Transpose[$1] - TTrace[$1]*TensorDiag[1,1,1];
    LV1[] = $2 * $1 ;//$2:dV
    LV2[] = TTrace [ $2 ] * $1 - Transpose [ $2 ] * $1 ; //$2:dV
    LV3[] = Transpose [ $1 ] - TTrace [ $1 ] * TensorDiag[1,1,1];

    dot_er[] = (et[] * velocity[$1,$2,$3])/Norm[XYZ[]] * et[];
    d_bilin_lie[] = nu[$1] * $1 * ( ETA[dV[$3,$4,$5]] * $2 ) ; 
    d_bilin_lie_NL[] = $2 * (( dhdb_NL[$1] * LV3[dV[$3,$4,$5]] ) * $1);
    d_bilin[] = (d_nu[$1] * $1) * $2;
    d_M_lie[] = nu[$1] * ( LV1[ br[], dV[$3,$4,$5] ] ) * $2 
              + nu[$1] * br_mag[] * (dot_er[$6,$7,$8]*$2); 
    d_J_lie[] = LV2[js[],dV[$2,$3,$4]]* $1;//-( LV3[] * js[] ) * $1 ;
  
  
    If(!StrCmp[Flag_PerfType,"Compliance"])
      Func[] = 0.5 * nu[$1] * SquNorm[$1]; //F = nu*B^2, alpha=nu*{d a},beta={d a} 
      dFdb[] = nu[$1] * $1; //dF/db = 2*nu*B
      dFdb_TO[] = 0.5 * d_nu[$1] * SquNorm[$1];
      dF_adjoint_lie[] =  0.5 * nu[$1#2] * #2 * ( ETA[dV[$2,$3,$4]] * #2 ) ;
    ElseIf(!StrCmp[Flag_PerfType,"Torque"])
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
    ElseIf(!StrCmp[Flag_PerfType,"TorqueVariance"])
      Func[] = (nu[$1]*torqueCoeff[]*( $1*er[] )*( $1*et[] ))/Ttarget[] - 1.0; 
      dFdb[] = 2.0 * torqueVar[] * nu[$1] * torqueCoeff[] / Ttarget[]*
            ( et[] * ( $1 * er[] )   +  er[] * ( $1 * et[] ) );
//    dFdb[] = 2.0 * Func[$1] * nu[$1] * torqueCoeff[] / Ttarget[]*
//            ( et[] * ( $1 * er[] )   +  er[] * ( $1 * et[] ) );
    ElseIf(!StrCmp[Flag_PerfType,"BradialErrorInt"])
      Func[] = nu[$1] * SquNorm[$1]; 
      dFdb[] = 2.0 * BradCoeff[] * ( $1 * er[] - Btarget[] ) * er[];
    EndIf
    dF_direct_lie[] = dFdb[$1]*$2 + dF_adjoint_lie[$1,$3,$4,$5,$6,$7,$8];
  }
EndIf

// physical problem formulation (and sensitivity analysis)
Include "machine_magstadyn_a.pro" ;

If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology") )
  Include "machine_magstadyn_a_post.pro" ;
EndIf

