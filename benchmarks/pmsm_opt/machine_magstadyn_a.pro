
DefineConstant[

  // main fields
  Flag_SolveStateVar = {0, Name "Input/OptParam/SolveStateVar",
                           Label "Get State Variable", Choices {0,1}, Visible 1},

  Flag_SolveAdjointVar = {0, Name "Input/OptParam/SolveAdjointVar",
                             Label "Get Adjoint Variable",Choices {0,1}, Visible 1},

  Flag_PerfType = {TORQUE_VAR, Name "Input/OptParam/PerfType",
                               Label "performance function type",
                               Choices {NO_PERF="No performance function",
                                        BFIELD_ERROR="air gap B field error",
                                        TORQUE_VAR="torque variance",
				        IRON_LOSSES="losses",
                                        COMPLIANCE="compliance",
                                        TORQUE="torque"},Visible Flag_SolveAdjointVar},
  // Sensitivity analysis method --> replace by 1 variable!!!
  Flag_SemiAnalyticAvmSens = {0, Name "Input/OptParam/SemiAnalyticAvmSensQuantitys",
                                 Label "Semi analytic quantitys (avm)",
                                 Choices {0,1}, Visible 1},

//  Flag_SemiAnalyticDirSens = {0, Name "Input/OptParam/SemiAnalyticDirQuantitys",
//                                 Label "Semi analytic quantitys (direct)", 
//                                 Choices {0,1}, Visible 1},

  Flag_AvmFixedDomSens = {0, Name "Input/OptParam/AdjointMethodSensFixedDom",
                             Label "fixed domain derivative (avm)", 
                             Choices {0,1}, Visible 1},

//  Flag_DirFixedDomSens = {0, Name "Input/OptParam/DirMethodSensFixedDom",
//                            Label "fixed domain derivative (direct)", 
//                            Choices {0,1}, Visible 1},

//  Flag_AvmVarDomSens = {0, Name "Input/OptParam/AdjointMethodSensVarDom",
//                           Label "continuum derivative (avm)",
//                           Choices {0,1}, Visible 1},

//  Flag_DirVarDomSens = {0, Name "Input/OptParam/DirectMethodSensVarDom",
//                           Label "continuum derivative (direct)",
//                           Choices {0,1}, Visible 1},
  
  NbSubDom = {2, Name "Input/OptParam/NbDomain", Label "Nbr of regions", Visible 0},

  //Tnom = {90, Name "Input/OptParam/TorqueNominal", Visible 1},
  Tnom = {90.0, Name "Input/OptParam/TorqueNominal",
                Label "Nominal desired torque",
                Visible (Flag_PerfType==TORQUE_VAR)},
  // Filter
  Flag_filterSensitivity = {0, Name "Input/OptParam/filterSens", 
                               Label "Filter Derivatives?",
                               Choices {0, 1}, Visible (Flag_topopt==1)}, 

  Rmin = {0.001*10, Name "Input/OptParam/RadiusSensFilter",
                    Label "Sensitivity Filter Radius", 
                    Visible 1/*(Flag_filterSensitivity==1)*/},

  Flag_filterMeshCoordinates = {0, Name "Input/OptParam/filterMeshCoord", 
                                   Label "Filter mesh nodes coordinates?", 
                                   Choices {0, 1}, Visible 1}, 

  regionVar = {ROTOR_FE, Name "Input/OptParam/regionVar",
                     Label "Region of design variables", 
                     Choices {ROTOR_FE="Rotor Fe",STATOR_FE="Stator Fe"},
                     Visible (Flag_topopt)},

  Flag_InterpLaw = {0, Name "Input/OptParam/MaterialInterpLaw",
                       Label "material interpolation law",
                       Choices {0="SIMP",1="RAMP"},Visible (Flag_topopt==1)},

  degree_SIMP = {3.0, Name "Input/OptParam/SimpPenalDegree",
                      Label "Degree SIMP", Visible (Flag_topopt==1)},

  //--------------------------------------------------------------


  PhaseAngle=0

];

DefineConstant[
  R_ = {"OptimStep", Name "GetDP/1ResolutionChoices",Choices {"Analysis", "OptimStep"}, Visible 0},
  C_ = {"-solve -v 5 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];

Group {
   DefineGroup[
    DomainM, DomainB, DomainS,
    DomainL, DomainNL, Dummy,torqueVar,
    Rotor_Inds, Rotor_IndsP, Rotor_IndsN, Rotor_Magnets, Rotor_Bars,
    Surf_bn0, Point_ref, Rotor_Bnd_MBaux,
    Resistance_Cir, Inductance_Cir, Capacitance_Cir, DomainZt_Cir, DomainSource_Cir
  ];
}

Function{

  DefineConstant[
    Flag_Cir,
    Flag_NL,
    Flag_ParkTransformation,
    Flag_ConstantSource,
    Flag_ComputeLosses,
    Flag_ImposedSpeed = 1,
    Flag_SolveFrequencyDomain = 0,
    Term_vxb = 0,
    NbPhases = 3,
    AxialLength        = 1,
    FillFactor_Winding = 1,
    Factor_R_3DEffects = 1,
    SymmetryFactor     = 1, 
    Nb_max_iter        = 30,
    relaxation_factor  = 1, 
    stop_criterion     = 1e-5, 
    reltol             = 1e-7, 
    abstol             = 1e-5,
    T = 1/Freq, // Fundamental period in s
    time0      = 0, 
    NbT        = 1,
    timemax    = NbT*T,
    NbSteps    = 100,
    delta_time = T/NbSteps,
    II, VV, 
    pA = 0,
    pB = -2*Pi/3,
    pC = -4*Pi/3,
    Ie, ID, IQ, I0, wr, slip,
    Ia      = II,
    Ib      = II, 
    Ic      = II, 
    Va      = VV,
    Vb      = VV, 
    Vc      = VV, 
    variableFrequencyLoop = wr,
    initialvalue = 0,
    Inertia,
    Flag_NL_law_Type,
    Flag_SrcType_StatorA = Flag_SrcType_Stator,
    Flag_SrcType_StatorB = Flag_SrcType_Stator, 
    Flag_SrcType_StatorC = Flag_SrcType_Stator,
    Flag_SrcType_Rotor, Flag_Cir_RotorCage,
    Clean_Results={1,Choices {0,1},Name "Input/Remove previous result files",Visible 1},
    Flag_SaveAllSteps = {0, Name "Input/Save all time steps", Choices {0,1}},

    my_output= "Output - Mechanics/0Torque [Nm]/rotor",
    my_output2= "Output - Mechanics/1B [Tesla]/AirGap" //nouveau
  ];

  DefineFunction[
    Frelax,
    dhdb_NL, br, js, Resistance, Inductance, Capacitance,nbrWires,
    Theta_Park, Theta_Park_deg, RotorPosition, RotorPosition_deg,
    Friction, Torque_mec,volDensity,IronLossDensity,
    rmin2, prod_x_dC, designVar, nu_r_inv, bField, pseudoLoad,
    velocityField_0,velocityField0,velocityField
  ];

  Flag_Symmetry = (SymmetryFactor==1) ? 0 : 1 ;

}


Include "BH.pro"; // nonlinear BH caracteristic of magnetic material

Group {

  Inds = Region[ {Stator_Inds, Rotor_Inds} ] ;

//  DomainB = Region[ {Inds} ] ;
  DomainM = Region[ {Rotor_Magnets} ] ;

  If(!Flag_ImposedCurrentDensity)
    DomainB = Region[ {Inds} ] ;
    DomainS = Region[{}];
  EndIf
  If(Flag_ImposedCurrentDensity)
    DomainB = Region[ {} ] ;
    DomainS = Region[{Inds}];
  EndIf

  Stator  = Region[{ StatorC, StatorCC }] ;
  Rotor   = Region[{ RotorC,  RotorCC }] ;

  Rotor_Moving = Region[{ Rotor,Rotor_Air,Rotor_Airgap,Rotor_Inds,Rotor_Bnd_MBaux}]; 

  MB  = MovingBand2D[ MovingBand_PhysicalNb, Stator_Bnd_MB, Rotor_Bnd_MB, SymmetryFactor] ;
  Air = Region[{ Rotor_Air, Rotor_Airgap, Stator_Air, Stator_Airgap, MB } ] ;
  Inds = Region[{ Rotor_Inds, Stator_Inds } ] ;

  DomainV = Region[{}]; // Speed considered either with term v/\b
  If(Term_vxb) // or not dynamics in time domain + mechanics
    DomainV = Region[{ RotorC }];
  EndIf

  DomainCC = Region[{ Air, Inds, StatorCC, RotorCC }];
  DomainC  = Region[{ StatorC, RotorC }];
  Domain  = Region[{ DomainCC, DomainC }] ;

  If(Flag_NL)
    DomainNL = Region[ {Stator_Fe, Rotor_Fe } ];
    DomainL  = Region[ {Domain,-DomainNL} ];
  EndIf

  DomainKin = #1234 ; // Dummy region number for mechanical equation
  DomainDummy = #12345 ; // Dummy region number for postpro with functions

  // TO domain
  If(!Flag_topopt)
    DomainOpt = Region[{}];
  EndIf
  If(Flag_topopt)
    If(regionVar == ROTOR_FE)
      DomainOpt = Region[{Rotor_Fe}];
    EndIf 
    If(regionVar == STATOR_FE)
      DomainOpt = Region[{Stator_Fe}];
    EndIf 
  EndIf
  DomCompliance = Region[{Rotor_Airgap}];
  DomBradError  = Region[{Rotor_Airgap}];
  DomTorqueVar = Region[{Rotor_Airgap}];
}

Function {
  mur_fe = 1000.0;
  mu0 = 4.e-7 * Pi ;
  nu0 = 1. / mu0 ;
 //NbWires[]  = 104 ;

  sigma_al = 3.72e7 ; // conductivity of aluminum [S/m]
  sigma_cu = 5.9e7  ; // conductivity of copper [S/m]

  nu [#{Air, Inds, Stator_Al, Rotor_Al, Stator_Cu, Rotor_Cu, Rotor_Magnets, Rotor_Bars}]  = 1. / mu0 ;
  RotateZ_desVar[] = Rotate[ XYZ[], 0, 0, -RotorPosition[] ] ; 

  If(!Flag_NL) //linear ferro
    If(!Flag_topopt) //no top opt
      nu [#{ Stator_Fe, Rotor_Fe }]  = 1 / (mur_fe * mu0) ;
      nu_prime[#{Stator_Fe, Rotor_Fe }] = 0.;
      dhdb_NL [] = 0;
    EndIf 
    If(Flag_topopt)
      Printf["------- TO: Lin TO -------"];
      p = degree_SIMP;//penalty factor
      
      If(regionVar==ROTOR_FE)
        //design variables in rotor
        designVar[#Rotor_Fe]  = ScalarField[RotateZ_desVar[],0,1]{DES_VAR_FIELD};   
        nu [#Stator_Fe]  = 1 / (mur_fe * mu0) ;
        nu [#Rotor_Fe]  = (1 / (mur_fe * mu0) - nu0)*designVar[]^p  +  nu0; //linear
        nu_prime [#Rotor_Fe]  = p*(1 / (mur_fe * mu0) - nu0)*designVar[]^(p-1.0); //linear
      EndIf
      If(regionVar==STATOR_FE)
        //design variables in stator
	designVar[#Stator_Fe]  = ScalarField[XYZ[],0,1]{DES_VAR_FIELD};//stator 
        nu [#Stator_Fe]  = (1 / (mur_fe * mu0) - nu0)*designVar[]^p  +  nu0; //linear
	nu [#Rotor_Fe]  = 1 / (mur_fe * mu0) ;        
        nu_prime [#Stator_Fe]  = p*(1 / (mur_fe * mu0) - nu0)*designVar[]^(p-1.0); //linear
      EndIf
      dhdb_NL [] = 0;
    EndIf
  EndIf

  If(Flag_NL)
    If(Flag_NL_law_Type==0 ) //analytic nu-law
        Printf["Compute Nu map, Nltype=%g",Flag_NL_law_Type];
	If(!Flag_topopt)
          nu [#{Stator_Fe, Rotor_Fe }] = nu_1a[$1] ;
      	  dhdb_NL [ DomainNL ] = dhdb_1a_NL[$1]; //Vérifier la formule !!!!
	  nu_prime[#{Stator_Fe, Rotor_Fe }] = 0.;
	EndIf
	If(Flag_topopt)
          // pas besoin d'utiliser un facteur p pour un mapping par rélectivité !!!
	  p = degree_SIMP; 
	  //define stator nu
	  nu [#Stator_Fe] = nu_1a[$1] ; 
	
	  // define rotor nu      		
	  //RotateZ_desVar[] = Rotate[ XYZ[], 0, 0, -RotorPosition[] ] ; 
      	  designVar[#Rotor_Fe]  = ScalarField[XYZ[],0,1]{DES_VAR_FIELD}; //design variables (read from view of .pos)  
          nu [#Rotor_Fe] = (nu_1a[$1]-nu0)*designVar[]^p + nu0; //non-linear SIMP law 
			
	  // define derivartive of nu 
          dhdb_NL [ Stator_Fe ] = dhdb_1a_NL[$1]; //stator
      	  dhdb_NL [ Rotor_Fe ] = dhdb_1a_NL[$1]*designVar[]^p; //rotor
	  nu_prime [#Rotor_Fe]  = nu_1a[$1]-nu0; //linear
	EndIf
    EndIf
    If(Flag_NL_law_Type==1) //interpolated nu-law
      Printf["Compute Nu map, Nltype=%g",Flag_NL_law_Type];
      nu [#{Stator_Fe, Rotor_Fe }] = nu_1[$1] ;
      dhdb_NL [#{Stator_Fe, Rotor_Fe } ] = dhdb_1_NL[$1];
      nu_prime[#{Stator_Fe, Rotor_Fe } ] = 0.;
    EndIf
    If(Flag_NL_law_Type==2)
       nu [#{Stator_Fe, Rotor_Fe }] = nu_3kWa[$1] ;
       dhdb_NL [ DomainNL ] = dhdb_3kWa_NL[$1];
    EndIf
    If(Flag_NL_law_Type==3)
       nu [#{Stator_Fe, Rotor_Fe }] = nu_3kW[$1] ;
       dhdb_NL [ DomainNL ] = dhdb_3kW_NL[$1];
    EndIf
  EndIf

  sigma[#{Rotor_Fe, Stator_Fe}] = sigma_fe ;
  sigma[#{Rotor_Al, Stator_Al}] = sigma_al ;
  sigma[#{Rotor_Cu, Stator_Cu}] = sigma_cu ;
  sigma[#{Inds}] = sigma_cu ;

  rho[] = 1/sigma[] ;

  Rb[] = Factor_R_3DEffects*AxialLength*FillFactor_Winding*NbrWires[]^2/SurfCoil[]/sigma[] ;
  Resistance[#{Stator_Inds, Rotor_Inds}] = Rb[] ;

  Idir[#{Stator_IndsP, Rotor_IndsP}] =  1 ;
  Idir[#{Stator_IndsN, Rotor_IndsN}] = -1 ;
// -------------------------------------------------
// !!! change this !!!
  // Functions for Park transformation
//  Idq0[] = Vector[ ID, IQ, I0 ] ;
//  Pinv[] = Tensor[ Sin[Theta_Park[]],        Cos[Theta_Park[]],        1,
//                   Sin[Theta_Park[]-2*Pi/3], Cos[Theta_Park[]-2*Pi/3], 1,
//                   Sin[Theta_Park[]+2*Pi/3], Cos[Theta_Park[]+2*Pi/3], 1 ];

//  P[] = 2/3 * Tensor[ Sin[Theta_Park[]], Sin[Theta_Park[]-2*Pi/3], Sin[Theta_Park[]+2*Pi/3],
//                      Cos[Theta_Park[]], Cos[Theta_Park[]-2*Pi/3], Cos[Theta_Park[]+2*Pi/3],
//                      1/2, 1/2, 1/2 ] ;

//  Iabc[]     = Pinv[] * Idq0[] ;
//  Flux_dq0[] = P[] * Vector[#11, #22, #33] ;

//  If(Flag_ParkTransformation)
//    II = 1. ;
//    IA[] = CompX[ Iabc[] ] ;
//    IB[] = CompY[ Iabc[] ] ;
//    IC[] = CompZ[ Iabc[] ] ;
//  EndIf
//  If(!Flag_ParkTransformation)
//    If(!Flag_ConstantSource)
//      //+++
//      pA=0; pB= -2*Pi/3; pC= -4*Pi/3;
//      Ia=1; Ib=1; Ic=1;
//      IA[] = F_Sin_wt_p[]{2*Pi*Freq, pA} ;
//      IB[] = F_Sin_wt_p[]{2*Pi*Freq, pB} ;
//      IC[] = F_Sin_wt_p[]{2*Pi*Freq, pC} ;
//    EndIf
//    If(Flag_ConstantSource)
//      IA[] = 1. ;
//      IB[] = 1. ;
//      IC[] = 1. ;
//      Frelax[] =1;
//    EndIf
//    WaveFormA[] = IA[];
//    WaveFormB[] = IB[]; 
//    WaveFormC[] = IC[];

//    js[PhaseA] = II * NbrWires[]/SurfCoil[] * IA[] * Idir[] * Vector[0, 0, 1] ;
//    js[PhaseB] = II * NbrWires[]/SurfCoil[] * IB[] * Idir[] * Vector[0, 0, 1] ;
//    js[PhaseC] = II * NbrWires[]/SurfCoil[] * IC[] * Idir[] * Vector[0, 0, 1] ;
//  EndIf

// -------------------------------------------------

  // Functions for Park transformation
  Idq0[] = Vector[ ID, IQ, I0 ] ;
  Pinv[] = Tensor[ Sin[Theta_Park[]],        Cos[Theta_Park[]],        1,
                   Sin[Theta_Park[]-2*Pi/3], Cos[Theta_Park[]-2*Pi/3], 1,
                   Sin[Theta_Park[]+2*Pi/3], Cos[Theta_Park[]+2*Pi/3], 1 ];

  P[] = 2/3 * Tensor[ Sin[Theta_Park[]], Sin[Theta_Park[]-2*Pi/3], Sin[Theta_Park[]+2*Pi/3],
                      Cos[Theta_Park[]], Cos[Theta_Park[]-2*Pi/3], Cos[Theta_Park[]+2*Pi/3],
                      1/2, 1/2, 1/2 ] ;

  Iabc[]     = Pinv[] * Idq0[] ;
  Flux_dq0[] = P[] * Vector[#11, #22, #33] ;


  If(Flag_ParkTransformation)
    Printf("source:1");
    II = 1. ;
    IA[] = CompX[ Iabc[] ] ;
    IB[] = CompY[ Iabc[] ] ;
    IC[] = CompZ[ Iabc[] ] ;
  EndIf
  If(!Flag_ParkTransformation)
    If(!Flag_ConstantSource)
      Printf("source:2");
      pA = PhaseAngle; 
      pB = pA - 2.*Pi/3. ;
      pC = pB - 2.*Pi/3. ;
      Printf("pA:%g",pA);
      Printf("pB:%g",pB);
      Printf("pC:%g",pC);
      IA[] = F_Sin_wt_p[]{2*Pi*Freq, pA} ;
      IB[] = F_Sin_wt_p[]{2*Pi*Freq, pB} ;
      IC[] = F_Sin_wt_p[]{2*Pi*Freq, pC} ;
      WaveFormA[] = IA[];
      WaveFormB[] = IB[];
      WaveFormC[] = IC[];
    EndIf
    If(Flag_ConstantSource)
      Printf("source:3");
      IA[] = 1. ;
      IB[] = 1. ;
      IC[] = 1. ;
      Frelax[] = 1;
    EndIf
    Printf("source:4");
    js[PhaseA] = 0.0*II * NbrWires[]/SurfCoil[] * IA[] * Idir[] * Vector[0, 0, 1] ;
    js[PhaseB] = 0.0*II * NbrWires[]/SurfCoil[] * IB[] * Idir[] * Vector[0, 0, 1] ;
    js[PhaseC] = 0.0*II * NbrWires[]/SurfCoil[] * IC[] * Idir[] * Vector[0, 0, 1] ;
  EndIf

/*
  Flag_ParkTransformation = 1.0;

  If(!Flag_ParkTransformation)
    Printf["-- no Park Transform --"];
    PhaseAngleA = PhaseAngle ;
    PhaseAngleB = PhaseAngleA - 2.*Pi/3. ;
    PhaseAngleC = PhaseAngleB - 2.*Pi/3. ;
    WaveFormA[] = F_Cos_wt_p[]{2*Pi*Freq, -PhaseAngleA} ;
    WaveFormB[] = F_Cos_wt_p[]{2*Pi*Freq, -PhaseAngleB} ;
    WaveFormC[] = F_Cos_wt_p[]{2*Pi*Freq, -PhaseAngleC} ;
    Ia = II ;
    Ib = II ;
    Ic = II ;
  EndIf
  If(Flag_ParkTransformation) // Imposed currents calculated from given ID, IQ and I0
    Printf["-- Park transform --"];
    II = 1. ; Ia = II; Ib = II; Ic = II;
    WaveFormA[] = CompX[ Iabc[] ] ;
    WaveFormB[] = CompY[ Iabc[] ] ;
    WaveFormC[] = CompZ[ Iabc[] ] ;
  EndIf

  // do not use j[s] when a coils system is present
  If(Flag_ImposedCurrentDensity)
    Printf["-- ImposedCurrentDensity --"];
    Printf["II=%g",II];
    js[PhaseA] = II * NbrWires[]/SurfCoil[] * WaveFormA[] * Idir[] * Vector[0, 0, 1] ;
    js[PhaseB] = II * NbrWires[]/SurfCoil[] * WaveFormB[] * Idir[] * Vector[0, 0, 1] ;
    js[PhaseC] = II * NbrWires[]/SurfCoil[] * WaveFormC[] * Idir[] * Vector[0, 0, 1] ;
  EndIf
*/
  Velocity[] = wr*XYZ[]/\Vector[0,0,-1] ;

  // Maxwell stress tensor
  T_max[] = ( SquDyadicProduct[$1] - SquNorm[$1] * TensorDiag[0.5, 0.5, 0.5] ) / mu0 ;
  T_max_cplx[] = Re[0.5*(TensorV[CompX[$1]*Conj[$1], CompY[$1]*Conj[$1], CompZ[$1]*Conj[$1]] - $1*Conj[$1] * TensorDiag[0.5, 0.5, 0.5] ) / mu0] ;
  T_max_cplx_2f[] = 0.5*(TensorV[CompX[$1]*$1, CompY[$1]*$1, CompZ[$1]*$1] - $1*$1 * TensorDiag[0.5, 0.5, 0.5] ) / mu0 ;// To check ????

  
  AngularPosition[] = (Atan2[ Y[],X[] ]#7 >= 0.)? #7 : #7+2*Pi ; 

  RotatePZ[] = Rotate[ XYZ[]/*Vector[$X,$Y,$Z]*/, 0, 0, $1 ] ;//Watch out: Do not use XYZ[]!

  Torque_mag[] = #55 ; // Torque computed in postprocessing (Trotor in #54, Tstator in #55, Tmb in #56)

  // Functions used for optimization
  // Target B in air-gap
  Btarget[] = Sqrt[2]*0.502*Sin[(AngularPosition[]-RotorPosition[]+Pi/8)*NbrPolesTot/2.0];

  // Target Torque
  Ttarget[] = Tnom;//Nm 
  torqueVar[] = ScalarField[XYZ[],0,1]{TORQUE_VAR_FIELD};
  torqueCoeff[] = XYZ[]*XYZ[]*2*Pi*AxialLength/SurfaceArea[]; 
  er[] = Unit[XYZ[]];
  et[] = Unit[Vector[-Sin[ Atan2[Y[],X[]] ], Cos[ Atan2[Y[],X[]] ], 0]];

  If(Flag_filterSensitivity)
    rmin2[] = Rmin*Rmin;
    prod_x_dC[] = ScalarField[RotateZ_desVar[],0,1]{SENS_FIELD};
  EndIf


  volDensity[#{Rotor_Fe,Stator_Fe}] = 7874; //acier
  volDensity[#{DomainM}] = 7400; //PM

  // -- velocity field --
  //velocityField0_0[] = VectorField[$1,0,1]{0};
  velocityField_0[] = VectorField[RotateZ_desVar[],0,1]{0};
  velocityField0[] = VectorField[$1,0,1]{VELOCITY_FIELD};
  velocityField[] = VectorField[RotateZ_desVar[],0,1]{VELOCITY_FIELD};

}

//-------------------------------------------------------------------------------------

Jacobian {
  { Name Vol; Case { { Region All ; Jacobian Vol; } } }
}

Integration {
  { Name I1 ; Case {
      { Type Gauss ;
        Case {
          { GeoElement Triangle   ; NumberOfPoints  6 ; }
	  { GeoElement Quadrangle ; NumberOfPoints  4 ; }
	  { GeoElement Line       ; NumberOfPoints  13 ; }
        }
      }
    }
  }
}

//-------------------------------------------------------------------------------------

Constraint {
  { Name MVP_2D ;
    Case {
      { Region Surf_Inf ; Type Assign; Value 0. ; }
      { Region Surf_bn0 ; Type Assign; Value 0. ; }

      If(Flag_Symmetry)
        { Region Surf_cutA1; SubRegion Region[{Surf_Inf,Surf_bn0, Point_ref}]; Type Link;
          RegionRef Surf_cutA0; SubRegionRef Region[{Surf_Inf,Surf_bn0, Point_ref}];
          Coefficient ((NbrPoles%2)?-1:1) ; Function RotatePZ[-NbrPoles*2*Pi/NbrPolesTot]; }
        { Region Surf_cutA1; Type Link; RegionRef Surf_cutA0;
          Coefficient (NbrPoles%2)?-1:1 ; Function RotatePZ[-NbrPoles*2*Pi/NbrPolesTot]; }

        //For the moving band
        For k In {1:SymmetryFactor-1}
        { Region Rotor_Bnd_MB~{k+1} ; SubRegion Rotor_Bnd_MB~{(k!=SymmetryFactor-1)?k+2:1}; Type Link;
          RegionRef Rotor_Bnd_MB_1; SubRegionRef Rotor_Bnd_MB_2;
          Coefficient ((NbrPoles%2)?-1:1)^(k); Function RotatePZ[-k*NbrPoles*2*Pi/NbrPolesTot]; }
        EndFor

      EndIf

    }
  }
  //-----------------------------------------------------------------
//  { Name DirichletBCx; Type Assign;
//      Case{
//        {Region SkinDomain~{1};  Value CompX[velocityField_0[]]; }
//        {Region Gama;  Value 0; }
//      }
//  }
//  { Name DirichletBCy; Type Assign;
//      Case{
//        {Region SkinDomain~{1};  Value CompY[velocityField_0[]]; }
//        {Region Gama;  Value 0; }
//      }
//  }
//  { Name DirichletBCz; Type Assign;
//      Case{
//        {Region SkinDomain~{1};  Value CompZ[velocityField_0[]]; }
//        {Region Gama;  Value 0; }
//      }
//  }
  //-----------------------------------------------------------------
  { Name Current_2D ;
    Case {
      If(Flag_SrcType_Stator!= 2)
        { Region PhaseA     ; Value Ia*Idir[] ; TimeFunction WaveFormA[]; }
        { Region PhaseB     ; Value Ib*Idir[] ; TimeFunction WaveFormB[]; }
        { Region PhaseC     ; Value Ic*Idir[] ; TimeFunction WaveFormC[]; }
      EndIf
      If(Flag_SrcType_Rotor==1)
        { Region Rotor_Inds ; Value Ie*Idir[] ; }
      EndIf
    }
  }
  //-----------------------------------------------------------------
  { Name Voltage_2D ;
    Case {
      If(!Flag_Cir_RotorCage)
        { Region RotorC  ; Value 0. ; }
      EndIf
      { Region StatorC ; Value 0. ; }
    }
  }
  //-----------------------------------------------------------------
  { Name Current_Cir ;
    Case {
      If(Flag_Cir && Flag_SrcType_Stator==1)
        { Region Input1  ; Value Ia  ; TimeFunction WaveFormA[]; }
        { Region Input2  ; Value Ib  ; TimeFunction WaveFormB[]; }
        { Region Input3  ; Value Ic  ; TimeFunction WaveFormC[]; }
      EndIf
    }
  }
  //-----------------------------------------------------------------
  { Name Voltage_Cir ;
    Case {
      If(Flag_Cir && Flag_SrcType_Stator==2)
        { Region Input1  ; Value Va  ; TimeFunction WaveFormA[]*Frelax[]; }
        { Region Input2  ; Value Vb  ; TimeFunction WaveFormB[]*Frelax[]; }
        { Region Input3  ; Value Vc  ; TimeFunction WaveFormC[]*Frelax[]; }
      EndIf
    }
  }
  //-----------------------------------------------------------------
  //Kinetics
  { Name CurrentPosition ; // [m]
    Case {
      { Region DomainKin ; Type Init ; Value 0.#66 ; }
    }
  }
  //-----------------------------------------------------------------
  { Name CurrentVelocity ; // [rad/s]
    Case {
      { Region DomainKin ; Type Init ; Value 0. ; }
    }
  }

}

//-----------------------------------------------------------------------------------------------
FunctionSpace {
  //-----------------------------------------------------------------
  // Magnetic Vector Potential
  //-----------------------------------------------------------------
  { Name Hcurl_a_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[{ Domain, Rotor_Bnd_MBaux }] ; Entity NodesOf [ All ] ; }
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
    }
  }
  //-----------------------------------------------------------------
  //  Adjoint var --> same constraints as A
  //-----------------------------------------------------------------
  { Name Hcurl_lambda_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[{ Domain , Rotor_Bnd_MBaux }] ; Entity NodesOf [ All ] ; }
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D; }
    }

  }
  //-----------------------------------------------------------------
  // Filtered sensitivity
  //-----------------------------------------------------------------
  { Name H_psi ; Type Form0 ;
    BasisFunction {
      { Name sPsi ; NameOfCoef psi ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
  }
  //-----------------------------------------------------------------
//  { Name H_velocityX; Type Form0;
//    BasisFunction{
//      {Name wn; NameOfCoef vn; Function BF_Node;
//       Support Domain; Entity NodesOf[All];}
//    }
//    // Contrary to Neumann case, we had here the constraint :
//	Constraint{
//	{NameOfCoef vn; EntityType NodesOf;
//	 NameOfConstraint DirichletBCx;}
//	}
//  }
//  { Name H_velocityY; Type Form0;
//    BasisFunction{
//      {Name wn; NameOfCoef vn; Function BF_Node;
//    Support Domain; Entity NodesOf[All];}
//    }
//    // Contrary to Neumann case, we had here the constraint :
//	Constraint{
//	{NameOfCoef vn; EntityType NodesOf;
//	 NameOfConstraint DirichletBCy;}
//	}
//  }
//  { Name H_velocityZ; Type Form0;
//    BasisFunction{
//      {Name wn; NameOfCoef vn; Function BF_Node;
//    Support Domain; Entity NodesOf[All];}
//    }
//    // Contrary to Neumann case, we had here the constraint :
//	Constraint{
//	{NameOfCoef vn; EntityType NodesOf;
//	 NameOfConstraint DirichletBCz;}
//	}
//  }
  //-----------------------------------------------------------------
  // Gradient of Electric scalar potential (2D)
  //-----------------------------------------------------------------
  { Name Hregion_u_Mag_2D ; Type Form1P ;
    BasisFunction {
      { Name sr ; NameOfCoef ur ; Function BF_RegionZ ;
        Support DomainC ; Entity DomainC ; }
    }
    GlobalQuantity {
      { Name U ; Type AliasOf        ; NameOfCoef ur ; }
      { Name I ; Type AssociatedWith ; NameOfCoef ur ; }
    }
    Constraint {
      { NameOfCoef U ; EntityType GroupsOfNodesOf ; NameOfConstraint Voltage_2D ; }
      { NameOfCoef I ; EntityType GroupsOfNodesOf ; NameOfConstraint Current_2D ; }
    }
  }

  { Name Hregion_i_Mag_2D ; Type Vector ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_RegionZ ;
        Support DomainB ; Entity DomainB ; }
    }
    GlobalQuantity {
      { Name Ib ; Type AliasOf        ; NameOfCoef ir ; }
      { Name Ub ; Type AssociatedWith ; NameOfCoef ir ; }
    }
    Constraint {
      { NameOfCoef Ub ; EntityType Region ; NameOfConstraint Voltage_2D ; }
      { NameOfCoef Ib ; EntityType Region ; NameOfConstraint Current_2D ; }
    }
  }

  // For circuit equations
  { Name Hregion_Z ; Type Scalar ;
    BasisFunction {
      { Name sr ; NameOfCoef ir ; Function BF_Region ;
        Support DomainZt_Cir ; Entity DomainZt_Cir ; }
    }
    GlobalQuantity {
      { Name Iz ; Type AliasOf        ; NameOfCoef ir ; }
      { Name Uz ; Type AssociatedWith ; NameOfCoef ir ; }
    }
    Constraint {
      { NameOfCoef Uz ; EntityType Region ; NameOfConstraint Voltage_Cir ; }
      { NameOfCoef Iz ; EntityType Region ; NameOfConstraint Current_Cir ; }
    }
  }

  // For mechanical equation
  { Name Position ; Type Scalar ;
    BasisFunction {
      { Name sr ; NameOfCoef pr ; Function BF_Region ;
        Support DomainKin ; Entity DomainKin ; }
    }
    GlobalQuantity {
      { Name P ; Type AliasOf  ; NameOfCoef pr ; }
    }
    Constraint {
      { NameOfCoef P ; EntityType Region ; NameOfConstraint CurrentPosition ; }
    }
  }


  { Name Velocity ; Type Scalar ;
    BasisFunction {
      { Name sr ; NameOfCoef vr ; Function BF_Region ;
        Support DomainKin ; Entity DomainKin ; } }
    GlobalQuantity {
      { Name V ; Type AliasOf ; NameOfCoef vr ; }
    }
    Constraint {
      { NameOfCoef V ; EntityType Region ; NameOfConstraint CurrentVelocity ; }
    }
  }

}
//-----------------------------------------------------------------------------------------------
Formulation {
  //---------------------------------------------------------------------------------
  // Primary system
  //---------------------------------------------------------------------------------
  { Name MagStaDyn_a_2D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
      { Name ur ; Type Local  ; NameOfSpace Hregion_u_Mag_2D ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_Mag_2D [I] ; }
      { Name U  ; Type Global ; NameOfSpace Hregion_u_Mag_2D [U] ; }

      { Name ir ; Type Local  ; NameOfSpace Hregion_i_Mag_2D ; }
      { Name Ub ; Type Global ; NameOfSpace Hregion_i_Mag_2D [Ub] ; }
      { Name Ib ; Type Global ; NameOfSpace Hregion_i_Mag_2D [Ib] ; }

      { Name Uz ; Type Global ; NameOfSpace Hregion_Z [Uz] ; }
      { Name Iz ; Type Global ; NameOfSpace Hregion_Z [Iz] ; }
    }
    Equation {
      Galerkin { [nu[{d a}] * Dof{d a}  , {d a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d a} ] ;
        In DomainNL ; Jacobian Vol ; Integration I1 ; }

     // DO NOT REMOVE!!! - Keeping track of Dofs in auxiliar line of MB if Symmetry==1
      Galerkin {  [  0*Dof{d a} , {d a} ]  ; 
        In Rotor_Bnd_MBaux; Jacobian Vol; Integration I1; }

      Galerkin { [ -nu[{d a}] * br[] , {d a} ] ;
        In DomainM ; Jacobian Vol ; Integration I1 ; }
 
      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ sigma[] * Dof{ur}, {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ -sigma[] * (Velocity[] *^ Dof{d a}) , {a} ] ;
        In DomainV ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ -js[] , {a} ] ;
        In DomainS ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {ur} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ sigma[] * Dof{ur} , {ur} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      GlobalTerm { [ Dof{I} , {U} ] ; In DomainC ; }

      Galerkin { [ -NbrWires[]/SurfCoil[] * Dof{ir} , {a} ] ;
        In DomainB ; Jacobian Vol ; Integration I1 ; }
      Galerkin { DtDof [ AxialLength * NbrWires[]/SurfCoil[] * Dof{a} , {ir} ] ;
        In DomainB ; Jacobian Vol ; Integration I1 ; }
      GlobalTerm { [ Dof{Ub}/SymmetryFactor , {Ib} ] ; In DomainB ; }
      Galerkin { [ Rb[]/SurfCoil[]* Dof{ir} , {ir} ] ;
        In DomainB ; Jacobian Vol ; Integration I1 ; } // Resistance term

      // GlobalTerm { [ Resistance[]  * Dof{Ib} , {Ib} ] ; In DomainB ; }
      // The above term can replace the resistance term:
      // if we have an estimation of the resistance of DomainB, via e.g. measurements
      // which is better to account for the end windings...

      If(Flag_Cir)
	GlobalTerm { NeverDt[ Dof{Uz}                , {Iz} ] ; In Resistance_Cir ; }
        GlobalTerm { NeverDt[ Resistance[] * Dof{Iz} , {Iz} ] ; In Resistance_Cir ; }

	GlobalTerm { [ Dof{Uz}                      , {Iz} ] ; In Inductance_Cir ; }
	GlobalTerm { DtDof [ Inductance[] * Dof{Iz} , {Iz} ] ; In Inductance_Cir ; }

	GlobalTerm { NeverDt[ Dof{Iz}        , {Iz} ] ; In Capacitance_Cir ; }
	GlobalTerm { DtDof [ Capacitance[] * Dof{Uz} , {Iz} ] ; In Capacitance_Cir ; }

	GlobalTerm { [ 0. * Dof{Iz} , {Iz} ] ; In DomainZt_Cir ; }
        GlobalTerm { [ 0. * Dof{Uz} , {Iz} ] ; In DomainZt_Cir ; }

        GlobalEquation {
          Type Network ; NameOfConstraint ElectricalCircuit ;
          { Node {I};  Loop {U};  Equation {I};  In DomainC ; }
          { Node {Ib}; Loop {Ub}; Equation {Ub}; In DomainB ; }
          { Node {Iz}; Loop {Uz}; Equation {Uz}; In DomainZt_Cir ; }
         }
      EndIf
    }
  }

  //---------------------------------------------------------------------------------
  // Mechanics
  //---------------------------------------------------------------------------------
  { Name Mechanical ; Type FemEquation ;
    Quantity {
      { Name V ; Type Global ; NameOfSpace Velocity [V] ; } // velocity
      { Name P ; Type Global ; NameOfSpace Position [P] ; } // position
    }
    Equation {
      GlobalTerm { DtDof [ Inertia * Dof{V} , {V} ] ; In DomainKin ; }
      GlobalTerm { [ Friction[] * Dof{V} , {V} ] ; In DomainKin ; }
      GlobalTerm { [        Torque_mec[] , {V} ] ; In DomainKin ; }
      GlobalTerm { [       -Torque_mag[] , {V} ] ; In DomainKin ; }

      GlobalTerm { DtDof [ Dof{P} , {P} ] ; In DomainKin ; }
      GlobalTerm {       [-Dof{V} , {P} ] ; In DomainKin ; }
    }
  }

  //---------------------------------------------------------------------------------
  // Adjoint weak formulation
  //---------------------------------------------------------------------------------
 { Name AdjointFormulation ; Type FemEquation ;
    Quantity {
      { Name a ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
      { Name lambda ; Type Local  ; NameOfSpace Hcurl_lambda_2D ; }
    }
    Equation {
      Galerkin { [ nu[ {d a} ]* Dof{d lambda}  , {d lambda} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ dhdb_NL[ {d a} ] * Dof{d lambda} , {d lambda} ] ; 
        In DomainNL ; Jacobian Vol ; Integration I1 ; }

      // DO NOT REMOVE!!!
      // Keeping track of Dofs in auxiliar line of MB if Symmetry==1
      Galerkin {  [  0*Dof{d lambda} , {d lambda} ]  ;
        In Rotor_Bnd_MBaux; Jacobian Vol; Integration I1; }

      If(Flag_PerfType == BFIELD_ERROR) // F = Int((Br - Bref)^2)
        Printf["-- Radial Field Pseudoload --"];
        Galerkin { [ -2.0*({d a}*er[] - Btarget[])*er[], {d lambda}] ;
                 In DomBradError ; Jacobian Vol ; Integration I1 ; }
      EndIf
      If(Flag_PerfType == TORQUE_VAR) // F = (T/Tref - 1)^2
       Printf["-- TORQUE VAR Pseudoload --"];
       Galerkin {[-2.0*torqueVar[]*nu[{d a}]*torqueCoeff[]/Ttarget[]*(et[]*({d a}*er[]) ), {d lambda} ];
         In DomTorqueVar ; Jacobian Vol ; Integration I1 ; } 
       Galerkin { [ -2.0*torqueVar[]*nu[{d a}]*torqueCoeff[]/Ttarget[]*( er[]*({d a}*et[]) ), {d lambda} ];
         In DomTorqueVar ; Jacobian Vol ; Integration I1 ; } 
      EndIf
      If(Flag_PerfType == COMPLIANCE) // F = Int_DO{nu*curl(A)^2}
        Printf["-- Compliance Pseudoload --"];
        Galerkin { [ -2.0*nu[{d a}]*{d a}, {d lambda} ] ;
         In DomCompliance ; Jacobian Vol ; Integration I1 ; }
      EndIf

   }
  }
  //---------------------------------------------------------------------------------
  // Sensitivity filtering
  //--------------------------------------------------------------------------------- 
 { Name Filt_sens ; Type FemEquation ;
    Quantity {
       { Name psi ; Type Local ; NameOfSpace H_psi;}
      }
    Equation {
       Galerkin { [ rmin2[] * Dof{d psi}, {d psi} ] ; 
                   In DomainOpt; Jacobian Vol ; Integration I1 ; }

       Galerkin { [ Dof{psi}, {psi} ] ; 
                   In DomainOpt; Jacobian Vol; Integration I1; }

       Galerkin { [ -prod_x_dC[], {psi} ] ; 
                   In DomainOpt; Jacobian Vol; Integration I1; }
      }
  }
  //-----------------------------------------------------------------
  // Velocity field filtering 
  //-----------------------------------------------------------------
// { Name FiltLaplace_DeltaMeshCoord_x ; Type FemEquation ;
//   Quantity {
//       { Name uX ; Type Local ; NameOfSpace H_velocityX;}
//   }
//   Equation {
//      Galerkin{ [Dof{Grad uX}, {Grad uX}];
//        In Domain; Jacobian Vol; Integration I1;}
//   }
// }
// { Name FiltLaplace_DeltaMeshCoord_y ; Type FemEquation ;
//   Quantity {
//       { Name uY ; Type Local ; NameOfSpace H_velocityY;}
//   }
//   Equation {
//      Galerkin{ [Dof{Grad uY}, {Grad uY}];
//        In Domain; Jacobian Vol; Integration I1;}
//   }
// }

// { Name FiltLaplace_DeltaMeshCoord_z ; Type FemEquation ;
//   Quantity {
//       { Name uZ ; Type Local ; NameOfSpace H_velocityZ;}
//   }
//   Equation {
//      Galerkin{ [Dof{Grad uZ}, {Grad uZ}];
//        In Domain; Jacobian Vol; Integration I1;}
//   }
// }
}
//-----------------------------------------------------------------------------------------------
Resolution {

  { Name Analysis ;
    System {
      If(Flag_AnalysisType==2)
        { Name A ; NameOfFormulation MagStaDyn_a_2D ; Type ComplexValue ; Frequency Freq ; }
      EndIf
      If(Flag_AnalysisType<2)
        { Name A ; NameOfFormulation MagStaDyn_a_2D ; }
        If(!Flag_ImposedSpeed) // Full dynamics
          { Name M ; NameOfFormulation Mechanical ; }
        EndIf
      EndIf
    }
    Operation {
      CreateDir["res/"];
      If(Clean_Results==1 && variableFrequencyLoop == initialvalue) // FIXME == > variable controlling loop in Onelab
        DeleteFile["res/temp.dat"];
        DeleteFile["res/Tr.dat"]; DeleteFile["res/Ts.dat"]; DeleteFile["res/Tmb.dat"];
        DeleteFile["res/Position.dat"];
        DeleteFile["res/Ua.dat"]; DeleteFile["res/Ub.dat"]; DeleteFile["res/Uc.dat"];
        DeleteFile["res/Ia.dat"]; DeleteFile["res/Ib.dat"]; DeleteFile["res/Ic.dat"];
        DeleteFile["res/Flux_a.dat"]; DeleteFile["res/Flux_b.dat"]; DeleteFile["res/Flux_c.dat"];
        DeleteFile["res/Flux_d.dat"]; DeleteFile["res/Flux_q.dat"]; DeleteFile["res/Flux_0.dat"];
        DeleteFile["res/JL.dat"]; DeleteFile["res/JL_Fe.dat"];
        DeleteFile["res/P.dat"]; DeleteFile["res/V.dat"];
        DeleteFile["res/Irotor.dat"];
      EndIf

      If(Flag_AnalysisType==0 || Flag_AnalysisType==2)
        If(Flag_AnalysisType==2)
          SetTime[variableFrequencyLoop];
        EndIf

        InitMovingBand2D[MB] ;
        MeshMovingBand2D[MB] ;
        InitSolution[A] ;

        If(Flag_ParkTransformation && Flag_SrcType_Stator==1)
          PostOperation[ThetaPark_IABC] ;
        EndIf
        If(!Flag_NL)
          Generate[A] ; Solve[A] ;
        EndIf
        If(Flag_NL)
          //IterativeLoopN[ Nb_max_iter, relaxation_factor, System { {A, reltol, abstol, Solution MeanL2Norm}}]{
          IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
            GenerateJac[A] ; SolveJac[A] ; }
        EndIf
        SaveSolution[A] ;

        PostOperation[Get_LocalFields] ;
        PostOperation[Get_GlobalQuantities] ;

        If(Flag_AnalysisType==0)
          PostOperation[Get_Torque];
        EndIf

        If(Flag_AnalysisType==2)
          PostOperation[Get_Torque_cplx];
        EndIf

      EndIf // End Flag_AnalysisType==0 (Static) Flag_AnalysisType==2 (Frequency)

      If(Flag_AnalysisType==1)
        InitMovingBand2D[MB];
        MeshMovingBand2D[MB];
        InitSolution[A];

        If(!Flag_ImposedSpeed) // Full dynamics
          InitSolution[M]; InitSolution[M]; // Twice for avoiding warning (a = d_t^2 x)
        EndIf

        TimeLoopTheta[time0, timemax, delta_time, 1.]{ // Euler implicit (1) -- Crank-Nicolson (0.5)
          If(Flag_ParkTransformation && Flag_SrcType_Stator==1)
            PostOperation[ThetaPark_IABC];
          EndIf
          If(!Flag_NL)
            Generate[A]; Solve[A];
          EndIf
          If(Flag_NL)
            //IterativeLoopN[ Nb_max_iter, relaxation_factor, System { {A, reltol, abstol, Solution MeanL2Norm}} ]{
            IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor] {
              GenerateJac[A] ; SolveJac[A] ; }
          EndIf
          SaveSolution[A];

          PostOperation[Get_LocalFields] ;
          Test[ $TimeStep > 1 ]{
            PostOperation[Get_GlobalQuantities];
            PostOperation[Get_Torque] ;
          }

          If(!Flag_ImposedSpeed)
            Generate[M]; Solve[M]; SaveSolution[M];
            PostOperation[Mechanical] ;
          EndIf

          ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[delta_theta[]]];

	  /* -- Nouveau -- */
	  // ChangeOfCoordinates[ NodesOf[Permanent_Magnet], perturb[]];
	  // - RotatePZ: rotation selon Z dans le sens positif --> pas besoin dans mon cas?
	  // - perturb serait une fonction constante dans un premier temps
	  //   -> utiliser une carte de post-process générée par le script python 
	  //   -> lire la carte pour générer la fonction 'perturb'
          //   -> Question: quels noeds perturber, puisque la spline est perturbée? Discuter avec Pierre Duysinx

          If(!Flag_ImposedSpeed)
            Evaluate[ #77#66 ]; //Keep track of previous angular position
          EndIf
          MeshMovingBand2D[MB];
        }
      EndIf // End Flag_AnalysisType==1 (Time domain)
    }
  }
  { Name OptimStep ;
    System {
        { Name A ; NameOfFormulation MagStaDyn_a_2D ; } //solve for A
        { Name B ; NameOfFormulation AdjointFormulation ; } // solve for lambda
        { Name D ; NameOfFormulation Filt_sens ; }
//        If(Flag_filterMeshCoordinates)
//	  { Name I ; NameOfFormulation FiltLaplace_DeltaMeshCoord_x ; }
//          { Name J ; NameOfFormulation FiltLaplace_DeltaMeshCoord_y ; }
//          { Name K ; NameOfFormulation FiltLaplace_DeltaMeshCoord_z ; }
//        EndIf
    }
    Operation {
     CreateDir["res/"];
     //-------------------------------------------------------------------
     If(Flag_SolveStateVar) //Solve for A ?
       Printf["--------- Get state variable ---------"];
       If(Flag_AnalysisType==0) // --- stationnary ---
         ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
         If(Flag_topopt)
           GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
         EndIf
         InitMovingBand2D[MB];
         MeshMovingBand2D[MB];
         InitSolution[A] ;
         If(!Flag_NL)
           Generate[A] ;
           Solve[A] ;
         EndIf
         If(Flag_NL)
           IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
             GenerateJac[A] ; SolveJac[A] ; }
         EndIf 
         SaveSolution[A];
         PostOperation[Get_PrimalSystem]; 
         ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
       EndIf
     EndIf
     //-------------------------------------------------------------------
     If(Flag_SolveAdjointVar) 
       Printf["-- Compute Adjoint Variable --"];
       // Compute adjoint variable (independent of design variables) 
       // --> choose this method if #PerfFunc << #var 
       // --> Same system for shape and topology optimization
       // --> 1 system per performance function
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
       InitMovingBand2D[MB];
       MeshMovingBand2D[MB];
       ReadSolution[A]; //Load state variable (potential vector)
       If(Flag_topopt)
         GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
       EndIf
       GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];
       InitSolution[B]; Generate[B]; Solve[B]; SaveSolution[A]; SaveSolution[B]; 
       PostOperation[Get_AdjointSystem];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
     //-------------------------------------------------------------------
     If(Flag_AvmFixedDomSens) // adjoint method sens. - fixed mesh
       Printf["-- Compute AVM sensitivity analysis (fixed domain) --"];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
       ReadSolution[A];ReadSolution[B];//A and Lambda   
       GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
       GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];
       PostOperation[Get_AvmFixedDomSens];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
     //-------------------------------------------------------------------
     If(Flag_SemiAnalyticAvmSens)
       Printf["-- Compute AVM Semi-Analytic quantitys --"];
       // grandeurs sauvées à la bonne position angulaire du rotor
       If(Flag_topopt)
         GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
       EndIf
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
       InitMovingBand2D[MB];
       MeshMovingBand2D[MB];
       ReadSolution[A];ReadSolution[B]; // load A and Lambda
       PostOperation[Get_SemiAnalyticAvmQuantitys]; // Compute Lambda*K*A and Lambda*g
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
     //-------------------------------------------------------------------
     If(Flag_filterSensitivity) // Filter sensitivity (only if TO)
       Printf["-- Filter Sensitivity --"];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
       //GmshRead["res/designVariable.pos", DES_VAR_FIELD]; 
       //GmshRead["res/SensPerfAvmFixedDom.pos", SENS_FIELD]; 
       GmshRead[StrCat[ResDir,"Sensitivity_DesVar.pos"], SENS_FIELD]; 
       Generate[D]; Solve[D]; SaveSolution[D];
       PostOperation[Get_FilteredSens];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
    }
  }
}



