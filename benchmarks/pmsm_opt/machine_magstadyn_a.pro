
DefineConstant[
  // Optimization flag 
/*
  Flag_topopt = {0, Name "Input/OptParam/optType",Label "Optimization Type",
                 Choices {0="Structural Optimization",1="Topology Optimization"}, Visible 1},

*/
  Flag_SolveA = {0, Name "Input/OptParam/SolveA",Label "Solve for A", Choices {0,1}, Visible 1},

  Flag_SemiAnalyticSens = {0, Name "Input/OptParam/SemiAnalyticSens",Label "Discretize weak formulation", 
                           Choices {0,1}, Visible 1},

  // Il peut y avoir plus d'une fonction de perf (obj + contraintes)!!! Comment tenir compte de ça? 
  Flag_AdjointVariable = {0, Name "Input/OptParam/AdjointVariable",Label "adjoint variable computation", 
                           Choices {0,1}, Visible 1},

  Flag_PerfType = {0, Name "Input/OptParam/PerfType",Label "performance function type", 
                           Choices {0="No performance function",1="air gap B field error",
                                    2="torque variance",3="losses"},Visible Flag_AdjointVariable},

  Flag_AdjointMethodSens = {0, Name "Input/OptParam/AdjointMethodSens",
                            Label "sensitivity analysis computation", Choices {0,1}, Visible (!Flag_AdjointVariable)},   

  Tnom = {90.0, Name "Input/OptParam/TorqueNominal",Label "Nominal desired torque", Visible (Flag_PerfType==2)},

  Flag_filterSensitivity = {0, Name "Input/OptParam/filterSens", Label "Filter sensitivities?", 
                            Choices {0, 1}, Visible Flag_topopt}, 
  
  Rmin = {0.001, Name "OptParam/rmin",Label "Sensitivity Filter Radius", Visible (Flag_filterSensitivity==1)}

];

DefineConstant[
  R_ = {"OptimStep", Name "GetDP/1ResolutionChoices",Choices {"Analysis", "OptimStep"}, Visible 0},
  C_ = {"-solve -v 3 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];

Group {
   DefineGroup[
    DomainM, DomainB, DomainS,
    DomainL, DomainNL, Dummy,
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
    II, VV, pA, pB, pC, Ie, ID, IQ, I0, wr, slip,
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
    Clean_Results = { 1, Choices {0,1}, Name "Input/Remove previous result files",Visible 1 },
    Flag_SaveAllSteps = {0, Name "Input/Save all time steps", Choices {0,1}},

    my_output= "Output - Mechanics/0Torque [Nm]/rotor",
    my_output2= "Output - Mechanics/1B [Tesla]/AirGap" //nouveau
  ];

  DefineFunction[
    Frelax,
    dhdb_NL, br, js, Resistance, Inductance, Capacitance,
    Theta_Park, Theta_Park_deg, RotorPosition, RotorPosition_deg,
    Friction, Torque_mec,
    rmin2, prod_x_dC, designVar, nu_r_inv, bField, pseudoLoad
  ];

  Flag_Symmetry = (SymmetryFactor==1) ? 0 : 1 ;

}

// Onelab parameter tree structure
po      = StrCat["Output - Electromagnetics/", ResId];
poI     = StrCat[po,"0Current [A]/"];
poV     = StrCat[po,"1Voltage [V]/"];
poF     = StrCat[po,"2Flux linkage [Vs]/"];
poJL    = StrCat[po,"3Joule Losses [W]/"];

po_mec  = StrCat["Output - Mechanics/", ResId];
po_mecT = StrCat[po_mec,"0Torque [Nm]/"];
po_mecP  = StrCat(po_mec,"1Autres/");
po_opt  = StrCat["Output - Optimization/", ResId];
po_min  = StrCat["Output/", ResId];


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

  Rotor_Moving = Region[{ Rotor, Rotor_Air, Rotor_Airgap, Rotor_Inds, Rotor_Bnd_MBaux} ] ; // Use in ChangeOfCoordinates

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
}

Function {
  mu0 = 4.e-7 * Pi ;
  nu0 = 1. / mu0 ;

  sigma_al = 3.72e7 ; // conductivity of aluminum [S/m]
  sigma_cu = 5.9e7  ; // conductivity of copper [S/m]

  nu [#{Air, Inds, Stator_Al, Rotor_Al, Stator_Cu, Rotor_Cu, Rotor_Magnets, Rotor_Bars}]  = 1. / mu0 ;
  RotateZ_desVar[] = Rotate[ XYZ[], 0, 0, -RotorPosition[] ] ; 

  If(!Flag_NL) //linear ferro
    If(!Flag_topopt || Flag_initOpt) //no top opt
      nu [#{ Stator_Fe, Rotor_Fe }]  = 1 / (mur_fe * mu0) ;
      nu_prime[#{Stator_Fe, Rotor_Fe }] = 0.;
      dhdb_NL [] = 0;
    EndIf
    If(Flag_topopt && !Flag_initOpt)
        Printf["------- TO: Lin TO -------"];
        // define stator nu
        nu [#Stator_Fe]  = 1 / (mur_fe * mu0) ;
        // define rotor nu 
        p = 1.0;
        //RotateZ_desVar[] = Rotate[ XYZ[], 0, 0, -RotorPosition[] ] ; 
        designVar[#Rotor_Fe]  = ScalarField[RotateZ_desVar[],0,1]{1}; //design variables (read from view of .pos)  
        nu [#Rotor_Fe]  = (1 / (mur_fe * mu0) - nu0)*designVar[]^p  +  nu0; //linear
        nu_prime [#Rotor_Fe]  = p*(1 / (mur_fe * mu0) - nu0)*designVar[]^(p-1.0); //linear
        dhdb_NL [] = 0;
    EndIf
  EndIf

  If(Flag_NL)
    If(Flag_NL_law_Type==0 ) //analytic nu-law
        Printf["Compute Nu map, Nltype=%g",Flag_NL_law_Type];
	If(!Flag_topopt || Flag_initOpt)
          nu [#{Stator_Fe, Rotor_Fe }] = nu_1a[$1] ;
      	  dhdb_NL [ DomainNL ] = dhdb_1a_NL[$1]; //Vérifier la formule !!!!
	  nu_prime[#{Stator_Fe, Rotor_Fe }] = 0.;
	EndIf
	If(Flag_topopt && !Flag_initOpt)
          // pas besoin d'utiliser un facteur p pour un mapping par rélectivité !!!
	  p = 1.0; 
	  //define stator nu
	  nu [#Stator_Fe] = nu_1a[$1] ; 
	
	  // define rotor nu      		
	  //RotateZ_desVar[] = Rotate[ XYZ[], 0, 0, -RotorPosition[] ] ; 
      	  designVar[#Rotor_Fe]  = ScalarField[XYZ[],0,1]{1}; //design variables (read from view of .pos)  
          nu [#Rotor_Fe] = (nu_1a[$1]-nu0)*designVar[]^p + nu0; //non-linear SIMP law 
			
	  // define derivartive of nu 
          dhdb_NL [ Stator_Fe ] = dhdb_1a_NL[$1]; //stator
      	  dhdb_NL [ Rotor_Fe ] = dhdb_1a_NL[$1]*designVar[]^p; //rotor
	  nu_prime [#Rotor_Fe]  = nu_1a[$1]-nu0; //linear
	EndIf
    EndIf
    If(Flag_NL_law_Type==1) //interpolated nu-law
        Printf["Compute Nu map, Nltype=%g",Flag_NL_law_Type];
     	If(!Flag_topopt || Flag_initOpt)
	  nu [#{Stator_Fe, Rotor_Fe }] = nu_1[$1] ;
      	  dhdb_NL [#{Stator_Fe, Rotor_Fe } ] = dhdb_1_NL[$1];
	  nu_prime[#{Stator_Fe, Rotor_Fe }] = 0.;
     	EndIf
      	If(Flag_topopt && !Flag_initOpt)
      	  p = 2.0;
	  //define stator nu
      	  nu [#Stator_Fe] = nu_1[$1] ; 
	  // define rotor nu      		
	  //RotateZ_desVar[] = Rotate[ XYZ[], 0, 0, -RotorPosition[] ] ; 
      	  designVar[#Rotor_Fe ]  = ScalarField[RotateZ_desVar[],0,1]{1}; //design variables (read from view of .pos) 
	  // simp 1 ?? --> on ne peut pas l'écrire tel quel en nu ???      		
	  //nu [#Rotor_Fe ]  = (nu_1[$1]-nu0)*designVar[]^p + nu0;  //non-linear SIMP law 
	  //nu_prime [#Rotor_Fe]  = p*(nu_1[$1]-nu0)*designVar[]^(p-1.0); //linear
	        
	  //simp 2:??? (choi and yoo)
	  nu[#Rotor_Fe] = (1.0 + (nu_1[$1]/nu0 - 1.0)*designVar[]^p)*nu0;  //non-linear SIMP law
	  nu_prime [#Rotor_Fe]  = p*(nu_1[$1]/nu0 - 1.0)*nu0*designVar[]^(p-1.0);		
	
          // simp3: buyn and al
          //nu_r_inv[#Rotor_Fe] = nu0/nu_1[$1];
	  //nu[#Rotor_Fe ] = 1.0/(1+(nu_r_inv[$1]-1.0)*designVar[]^p);
          //nu_prime[#Rotor_Fe] = (-p*nu0*(nu_r_inv[$1] - 1.0)*designVar[]^(p-1.0))/(1+(nu_r_inv[$1]-1.0)*designVar[]^p)^2.0;
		
          //nu[#Rotor_Fe ] = nu0/(1+(nu0/nu_1[$1]-1.0)*designVar[]^p);
          //nu_prime[#Rotor_Fe] = (-p*nu0*(nu0/nu_1[$1] - 1.0)*designVar[]^(p-1.0))/(1+(nu0/nu_1[$1]-1.0)*designVar[]^p)^2.0;
          // define derivartive of nu 
      	  dhdb_NL [ Stator_Fe ] = dhdb_1_NL[$1]; //stator
          dhdb_NL [ Rotor_Fe ] = dhdb_1_NL[$1]*designVar[]^p; //rotor ??????
      	EndIf
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

  Rb[] = Factor_R_3DEffects*AxialLength*FillFactor_Winding*NbWires[]^2/SurfCoil[]/sigma[] ;
  Resistance[#{Stator_Inds, Rotor_Inds}] = Rb[] ;

  Idir[#{Stator_IndsP, Rotor_IndsP}] =  1 ;
  Idir[#{Stator_IndsN, Rotor_IndsN}] = -1 ;

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
    II = 1. ;
    IA[] = CompX[ Iabc[] ] ;
    IB[] = CompY[ Iabc[] ] ;
    IC[] = CompZ[ Iabc[] ] ;
  EndIf
  If(!Flag_ParkTransformation)
    If(!Flag_ConstantSource)
      //+++
      pA=0; pB= -2*Pi/3; pC= -4*Pi/3;
      Ia=1; Ib=1; Ic=1;
      IA[] = F_Sin_wt_p[]{2*Pi*Freq, pA} ;
      IB[] = F_Sin_wt_p[]{2*Pi*Freq, pB} ;
      IC[] = F_Sin_wt_p[]{2*Pi*Freq, pC} ;
    EndIf
    If(Flag_ConstantSource)
      IA[] = 1. ;
      IB[] = 1. ;
      IC[] = 1. ;
      Frelax[] =1;
    EndIf
    If(Flag_ImposedCurrentDensity)
      js[PhaseA] = II * NbWires[]/SurfCoil[] * IA[] * Idir[] * Vector[0, 0, 1] ;
      js[PhaseB] = II * NbWires[]/SurfCoil[] * IB[] * Idir[] * Vector[0, 0, 1] ;
      js[PhaseC] = II * NbWires[]/SurfCoil[] * IC[] * Idir[] * Vector[0, 0, 1] ;
    EndIf
  EndIf

  Velocity[] = wr*XYZ[]/\Vector[0,0,-1] ;

  // Maxwell stress tensor
  T_max[] = ( SquDyadicProduct[$1] - SquNorm[$1] * TensorDiag[0.5, 0.5, 0.5] ) / mu0 ;
  T_max_cplx[] = Re[0.5*(TensorV[CompX[$1]*Conj[$1], CompY[$1]*Conj[$1], CompZ[$1]*Conj[$1]] - $1*Conj[$1] * TensorDiag[0.5, 0.5, 0.5] ) / mu0] ;
  T_max_cplx_2f[] = 0.5*(TensorV[CompX[$1]*$1, CompY[$1]*$1, CompZ[$1]*$1] - $1*$1 * TensorDiag[0.5, 0.5, 0.5] ) / mu0 ;// To check ????

  AngularPosition[] = (Atan2[$Y,$X]#7 >= 0.)? #7 : #7+2*Pi ;

  RotatePZ[] = Rotate[ Vector[$X,$Y,$Z], 0, 0, $1 ] ;//Watch out: Do not use XYZ[]!

  Torque_mag[] = #55 ; // Torque computed in postprocessing (Trotor in #54, Tstator in #55, Tmb in #56)

  // Functions used for optimization
  // Target B in air-gap
  Btarget[] = Sqrt[2]*0.7*Sin[(AngularPosition[]-RotorPosition[])*NbrPolesTot/2.0];

  // Target Torque
  Ttarget[] = Tnom;//Nm 
  torqueCoeff[] = XYZ[]*XYZ[]*2*Pi*AxialLength/SurfaceArea[]; 
  er[] = Unit[XYZ[]];
  et[] = Unit[Vector[-Sin[ Atan2[Y[],X[]] ], Cos[ Atan2[Y[],X[]] ], 0]];

  If(Flag_filterSensitivity)
    rmin2[] = Rmin*Rmin;
    sensitivityMap[] = ScalarField[RotatePZ[RotorPosition[]],0,1]{2}; 
    prod_x_dC[] = designVar[] * sensitivityMap[];
  EndIf

  If(Flag_AdjointVariable || Flag_SemiAnalyticSens)
    bField[] = VectorField[RotatePZ[RotorPosition[]],0,1]{3};//????
    pseudoLoad[] = #59; 
  EndIf

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

  { Name Current_2D ;
    Case {
      If(Flag_SrcType_Stator==1)
        { Region PhaseA     ; Value Ia*Idir[] ; TimeFunction IA[]; }
        { Region PhaseB     ; Value Ib*Idir[] ; TimeFunction IB[]; }
        { Region PhaseC     ; Value Ic*Idir[] ; TimeFunction IC[]; }
      EndIf
      If(Flag_SrcType_Rotor==1)
        { Region Rotor_Inds ; Value Ie*Idir[] ; }
      EndIf
    }
  }

  { Name Voltage_2D ;
    Case {
      If(!Flag_Cir_RotorCage)
        { Region RotorC  ; Value 0. ; }
      EndIf
      { Region StatorC ; Value 0. ; }
    }
  }

  { Name Current_Cir ;
    Case {
      If(Flag_Cir && Flag_SrcType_Stator==1)
        { Region Input1  ; Value Ia  ; TimeFunction IA[]; }
        { Region Input2  ; Value Ib  ; TimeFunction IB[]; }
        { Region Input3  ; Value Ic  ; TimeFunction IC[]; }
      EndIf
    }
  }

  { Name Voltage_Cir ;
    Case {
      If(Flag_Cir && Flag_SrcType_Stator==2)
        { Region Input1  ; Value Va  ; TimeFunction IA[]*Frelax[]; }
        { Region Input2  ; Value Vb  ; TimeFunction IB[]*Frelax[]; }
        { Region Input3  ; Value Vc  ; TimeFunction IC[]*Frelax[]; }
      EndIf
    }
  }


  //Kinetics
  { Name CurrentPosition ; // [m]
    Case {
      { Region DomainKin ; Type Init ; Value 0.#66 ; }
    }
  }

  { Name CurrentVelocity ; // [rad/s]
    Case {
      { Region DomainKin ; Type Init ; Value 0. ; }
    }
  }

}

//-----------------------------------------------------------------------------------------------

FunctionSpace {
  // Magnetic Vector Potential
  { Name Hcurl_a_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[{ Domain, Rotor_Bnd_MBaux }] ; Entity NodesOf [ All ] ; }
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
    }
  }
 
  //  Adjoint var --> same constraints as A
  { Name Hcurl_lambda_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[{ Domain, Rotor_Bnd_MBaux }] ; Entity NodesOf [ All ] ; }
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
    }
  }

  // Filtered sensitivity
  { Name H_psi ; Type Form0 ;
    BasisFunction {
      { Name sPsi ; NameOfCoef psi ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
  }

  // Gradient of Electric scalar potential (2D)
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
     If(Flag_SemiAnalyticSens==0)
      Galerkin { [ nu[{d a}] * Dof{d a}  , {d a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
      Galerkin { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d a} ] ;
        In DomainNL ; Jacobian Vol ; Integration I1 ; }
     EndIf
     If(Flag_SemiAnalyticSens==1) //compute nu for a given b (bField)
      Galerkin { [ nu[bField[]] * Dof{d a}  , {d a} ] ;
        In Domain ; Jacobian Vol ; Integration I1 ; }
     EndIf

      Galerkin {  [  0*Dof{d a} , {d a} ]  ; // DO NOT REMOVE!!! - Keeping track of Dofs in auxiliar line of MB if Symmetry==1
        In Rotor_Bnd_MBaux; Jacobian Vol; Integration I1; }

    If(Flag_SemiAnalyticSens==0)
      Galerkin { [ -nu[{d a}] * br[] , {d a} ] ;
        In DomainM ; Jacobian Vol ; Integration I1 ; }
    EndIf
    If(Flag_SemiAnalyticSens==1)
      Galerkin { [ -nu[bField[]] * br[] , {d a} ] ;
        In DomainM ; Jacobian Vol ; Integration I1 ; }
    EndIf

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

      Galerkin { [ -NbWires[]/SurfCoil[] * Dof{ir} , {a} ] ;
        In DomainB ; Jacobian Vol ; Integration I1 ; }
      Galerkin { DtDof [ AxialLength * NbWires[]/SurfCoil[] * Dof{a} , {ir} ] ;
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
 { Name AdjointSystem ; Type FemEquation ;//for Int_(Brad-Bref)2
    Quantity {
	{ Name a  ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
	{ Name lambda ; Type Local ; NameOfSpace Hcurl_lambda_2D ; }
        //{ Name dummy  ; Type Local  ; NameOfSpace dummy ; }    
    }
    Equation {

      Galerkin { [ nu[{d a}] * Dof{d lambda}  , {d lambda} ] ; 
        In Domain ; Jacobian Vol ; Integration I1 ; } 

      Galerkin { [ dhdb_NL[{d a}] * Dof{d lambda} , {d lambda} ] ; //OK!!!
        In DomainNL ; Jacobian Vol ; Integration I1 ; } 

      Galerkin { [ -2.0*({d a}*Unit[XYZ[]] - Btarget[])*Unit[XYZ[]], {d lambda}] ; 
        In Rotor_Airgap ; Jacobian Vol ; Integration I1 ; }  
   }
 }
  //---------------------------------------------------------------------------------
  // Sensitivity filtering
  //--------------------------------------------------------------------------------- 
 { Name Filt_sens ; Type FemEquation ;
    Quantity {
       { Name psi ; Type Local ; NameOfSpace H_psi;}
       //{ Name dummy  ; Type Local  ; NameOfSpace dummy ; }
      }
    Equation {
       Galerkin { [ rmin2[] * Dof{d psi}, {d psi} ] ; 
                   In Rotor_Fe; Jacobian Vol ; Integration I1 ; }

       Galerkin { [ Dof{psi}, {psi} ] ; 
                   In Rotor_Fe; Jacobian Vol; Integration I1; }
       Galerkin { [ -prod_x_dC[], {psi} ] ; 
                   In Rotor_Fe; Jacobian Vol; Integration I1; }
      }
  }

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


        If(Flag_Bradial)
          PostOperation[Get_Bradial] ;
        EndIf

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
        { Name B ; NameOfFormulation AdjointSystem ; } // solve for lambda
        { Name D ; NameOfFormulation Filt_sens ; }
    }
    Operation {
      CreateDir["res/"];
     //-------------------------------------------------------------------
      If(Flag_SolveA) //Solve for A ?
          Printf["---------Flag_SolveA---------"];
          If(Flag_topopt)
             GmshRead["res/designVar.pos",1]; //!!!!!!!!!!!!! Change to ResDir
          EndIf
          If(Flag_AnalysisType==0) // --- stationnary ---
            ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
            InitMovingBand2D[MB];
            MeshMovingBand2D[MB];
            InitSolution[A] ;
            If(!Flag_NL)
              Generate[A] ;Solve[A] ; Print[A,File "primal"]; //save K and g in case of linear system
            EndIf
            If(Flag_NL)
              IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
                GenerateJac[A] ; SolveJac[A] ; }
                //save K (not K + (dK/dA)*A !!!!)  and g in case of non-linear system
		Print[A,File "primal"];
            EndIf
            SaveSolution[A] ;
          EndIf
	  //PostOperation[Get_LocalFields];
          //PostOperation[Get_GlobalQuantities];
          PostOperation[Get_PostOptimPlot] ;	
	  PostOperation[Get_PostOptim] ; //maps
      EndIf
     //-------------------------------------------------------------------
      If(Flag_AdjointVariable) // Solve Adjoint system for performance function: Int_gap[ (Br-Bref)^2 ] ?
        Printf["---------Flag_AdjointVariable---------"];
        //GmshRead["res/b.pos", 3]; //read the post containing the A solution!!
        ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
        InitMovingBand2D[MB];
        MeshMovingBand2D[MB];
        InitSolution[B] ;Generate[B]; Solve[B]; SaveSolution[B];
        Print[B,File "adjVar"];
        PostOperation[Get_PostOptim_AdjointMethod];
      EndIf

      If(Flag_AdjointMethodSens)
         // Compute the sensitivity based on adjoint method?
         // Avalaible for Topology Opt and Shape Opt !!!
          Printf["---------Flag_AdjointMethodSens---------"];
      	  If(!Flag_initOpt)
	    PostOperation[Get_PostOptimSensitivity_AdjointMethod];
          EndIf
      EndIf
     //-------------------------------------------------------------------
     If(Flag_SemiAnalyticSens)
        Printf["---------Flag_SemiAnalyticSens---------"];
        GmshRead["res/b.pos", 3]; //read the post containing the A solution!!
        ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[]] ];
        InitMovingBand2D[MB];
        MeshMovingBand2D[MB];
        InitSolution[A] ; Generate[A] ; Print[A,File "primal"];
     EndIf 
      //-------------------------------------------------------------------
     If(Flag_filterSensitivity) // Filter sensitivity (only if TO)
	// Load the sensitivity view (.pos file)
        GmshRead["res/designVar.pos", 1]; //!!!!!!!!!!!!! Change to ResDir
        // Load the density view
        GmshRead["res/SensitivityObj_AdjointMethod.pos", 2]; //!!!!!!!!!!!!! Change to ResDir
        // Filter dF/dx 
        Generate[D] ; Solve[D] ; SaveSolution[D] ;
        PostOperation[FilteredSens];
     EndIf
    }
  }

}

//-----------------------------------------------------------------------------------------------
// Post-Processing
//-----------------------------------------------------------------------------------------------
PostProcessing {
  { Name MagStaDyn_a_2D ; NameOfFormulation MagStaDyn_a_2D ;
   PostQuantity {
     { Name a  ; Value { Term { [ {a} ] ; In Domain ; Jacobian Vol ; } } }
     { Name az ; Value { Term { [ CompZ[{a}] ] ; In Domain ; Jacobian Vol ; } } }

     { Name b  ; Value { Term { [ {d a} ] ; In Domain ; Jacobian Vol ; } } }
/*
     { Name mur; Value { Term { [ 1./nu[{d a}]/mu0 ] ; In Domain ; Jacobian Vol ; } } }
*/
     { Name boundary  ; Value { Term { [ 1 ] ; In Dummy ; Jacobian Vol ; } } } // Dummy quantity - for visualization
     { Name b_radial  ; Value { Term { [ {d a}* Vector[  Cos[AngularPosition[]#4], Sin[#4], 0.] ] ; In Domain ; Jacobian Vol ; } } }
     { Name b_tangent ; Value { Term { [ {d a}* Vector[ -Sin[AngularPosition[]#4], Cos[#4], 0.] ] ; In Domain ; Jacobian Vol ; } } }

//-----------------------------------------------------------------------------------------------------
    { Name b_radial_airgap;
	Value {
        Term{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.]) ];
          In Domain; Jacobian Vol;
        }
        }
    }
/*
    { Name b_radialFund_airgap;
	Value {
        Term{ [ (Sqrt[2]*#1*Sin[(AngularPosition[]-RotorPosition[]+Pi/8)*NbrPolesTot/2])  ];
          In Domain; Jacobian Vol;
        }
        }
    }
*/
// b_radial_rms is fixed for the initial layout
    { Name b_radialFund_airgap;
	Value {
        Term{ [ (Sqrt[2]*0.502*Sin[(AngularPosition[]-RotorPosition[]+Pi/8)*NbrPolesTot/2])  ];
          In Domain; Jacobian Vol;
        }
        }
    }

    { Name b_radial_rms;
	Value {
        Integral{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.])^2 / SurfaceArea[]  ];
          In Domain; Jacobian Vol; Integration I1;
        }
        }
    }
/*
    { Name f_obj;
	Value {
        Integral{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.] - Sqrt[2]*#1*Sin[(AngularPosition[]-RotorPosition[]+Pi/8)*NbrPolesTot/2])^2  ];
          In Domain; Jacobian Vol; Integration I1;
        }
        }
    }
*/
// B_target est fixée une bonne fois pour toutes !!!!
    { Name f_obj;
	Value {
        Integral{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.] - Sqrt[2]*0.502*Sin[(AngularPosition[]-RotorPosition[]+Pi/8)*NbrPolesTot/2])^2  ];
          In Domain; Jacobian Vol; Integration I1;
        }
        }
    }

   { Name surfacePM;
	Value {
        Integral{ [ 1 ];
          In Domain; Jacobian Vol; Integration I1;
        }
        }
    }	 
//-----------------------------------------------------------------------------------------------------

     { Name js ; Value { Term { [ js[] ] ; In DomainS ; Jacobian Vol ; } } }
     { Name br ; Value { Term { [ br[] ] ; In DomainM ; Jacobian Vol ; } } }

     { Name j  ; Value {
         Term { [ -sigma[]*(Dt[{a}]+{ur}) ]        ; In DomainC ; Jacobian Vol ; }
         Term { [  sigma[]*(Velocity[] *^ {d a}) ] ; In DomainV ; Jacobian Vol ; }
       }
     }
     { Name ir ; Value { Term { [ {ir} ] ; In Inds ; Jacobian Vol ; } } }

     { Name jz ; Value {
         Term { [ CompZ[-sigma[]*(Dt[{a}]+{ur})] ]       ; In DomainC ; Jacobian Vol ; }
         Term { [ CompZ[ sigma[]*(Velocity[]*^{d a}) ] ] ; In DomainV ; Jacobian Vol ; }
       }
     }

     { Name rhoj2 ;
       Value {
         Term { [ sigma[]*SquNorm[ Dt[{a}]+{ur}] ] ; In Region[{DomainC,-DomainV}] ; Jacobian Vol ; }
         Term { [ sigma[]*SquNorm[ Dt[{a}]+{ur}-Velocity[]*^{d a} ] ] ; In DomainV ; Jacobian Vol ; }
         Term { [ 1./sigma[]*SquNorm[ IA[]*{ir} ] ] ; In PhaseA  ; Jacobian Vol ; }
         Term { [ 1./sigma[]*SquNorm[ IB[]*{ir} ] ] ; In PhaseB  ; Jacobian Vol ; }
         Term { [ 1./sigma[]*SquNorm[ IC[]*{ir} ] ] ; In PhaseC  ; Jacobian Vol ; }
       }
     }

     { Name JouleLosses ;
       Value {
         Integral { [ sigma[] * SquNorm[ Dt[{a}]+{ur} ] ]   ; In Region[{DomainC,-DomainV}] ; Jacobian Vol ; Integration I1 ; }
         Integral { [ sigma[] * SquNorm[ Dt[{a}]+{ur}-Velocity[]*^{d a} ] ]   ; In DomainV ; Jacobian Vol ; Integration I1 ; }
         Integral { [ 1./sigma[]*SquNorm[ IA[]*{ir} ] ] ; In PhaseA  ; Jacobian Vol ; Integration I1 ; }
         Integral { [ 1./sigma[]*SquNorm[ IB[]*{ir} ] ] ; In PhaseB  ; Jacobian Vol ; Integration I1 ; }
         Integral { [ 1./sigma[]*SquNorm[ IC[]*{ir} ] ] ; In PhaseC  ; Jacobian Vol ; Integration I1 ; }
       }
     }

     { Name Flux ; Value { Integral { [ SymmetryFactor*AxialLength*Idir[]*NbWires[]/SurfCoil[]* CompZ[{a}] ] ;
           In Inds  ; Jacobian Vol ; Integration I1 ; } } }

     { Name Force_vw ; // Force computation by Virtual Works
       Value {
         Integral {
           Type Global ; [ 0.5 * nu[] * VirtualWork [{d a}] * AxialLength ];
           In ElementsOf[Rotor_Airgap, OnOneSideOf Rotor_Bnd_MB]; Jacobian Vol ; Integration I1 ; }
       }
     }

     { Name Position ; // Torque computation via Maxwell stress tensor
       Value {
         Term { Type Global ; [ RotorPosition_deg[] ]   ; In Domain ; }
       }
     }

     { Name Torque_vw ; Value { // Torque computation via Virtual Works
         Integral { Type Global ;
           [ CompZ[ 0.5 * nu[] * XYZ[] /\ VirtualWork[{d a}] ] * AxialLength ];
           In ElementsOf[Rotor_Airgap, OnOneSideOf Rotor_Bnd_MB]; Jacobian Vol ; Integration I1 ; }
       }
     }

     { Name Torque_Maxwell ; // Torque computation via Maxwell stress tensor
       Value {
         Integral {
           [ CompZ [ XYZ[] /\ (T_max[{d a}] * XYZ[]) ] * 2*Pi*AxialLength/SurfaceArea[] ] ;
           In Domain ; Jacobian Vol  ; Integration I1; }
       }
     }

     { Name Torque_Maxwell_cplx ; // Torque computation via Maxwell stress tensor - frequency domain
       Value {
         Integral {
           [ CompZ [ XYZ[] /\ (T_max_cplx[{d a}] * XYZ[]) ] * 2*Pi*AxialLength/SurfaceArea[] ] ;
           In Domain ; Jacobian Vol  ; Integration I1; }
       }
     }

     { Name Torque_Maxwell_cplx_2f ; // Torque computation via Maxwell stress tensor, component at twice the frequency
       Value {
         Integral {
           [ CompZ [ XYZ[] /\ (T_max_cplx_2f[{d a}] * XYZ[]) ] * 2*Pi*AxialLength/SurfaceArea[] ] ;
           In Domain ; Jacobian Vol  ; Integration I1; }
       }
     }

     { Name ComplexPower ; // S = P + i*Q
       Value {
         Integral { [ Complex[ sigma[]*SquNorm[Dt[{a}]+{ur}], nu[]*SquNorm[{d a}] ] ] ;
           In Region[{DomainC,-DomainV}] ; Jacobian Vol ; Integration I1 ; }
         Integral { [ Complex[ sigma[]*SquNorm[Dt[{a}]+{ur}-Velocity[]*^{d a}], nu[]*SquNorm[{d a}] ] ] ;
           In DomainV ; Jacobian Vol ; Integration I1 ; }
       }
     }

     { Name U ; Value {
         Term { [ {U} ]   ; In DomainC ; }
         Term { [ {Ub} ]  ; In DomainB ; }
         Term { [ {Uz} ]  ; In DomainZt_Cir ; }
     } }

     { Name I ; Value {
         Term { [ {I} ]   ; In DomainC ; }
         Term { [ {Ib} ]  ; In DomainB ; }
         Term { [ {Iz} ]  ; In DomainZt_Cir ; }
     } }

     { Name S ; Value {
         Term { [ {U}*Conj[{I}] ]    ; In DomainC ; }
         Term { [ {Ub}*Conj[{Ib}] ]  ; In DomainB ; }
         Term { [ {Uz}*Conj[{Iz}] ]  ; In DomainZt_Cir ; }
     } }

     { Name Velocity  ; Value {
         Term { [ Velocity[] ] ; In Domain ; Jacobian Vol ; }
       }
     }

     // Getting the value of some functions
     { Name RotorPosition_deg ; Value { Term { Type Global; [ RotorPosition_deg[] ] ; In DomainDummy ; } } }
     { Name Theta_Park_deg    ; Value { Term { Type Global; [ Theta_Park_deg[] ] ; In DomainDummy ; } } }
     { Name IA  ; Value { Term { Type Global; [ IA[] ] ; In DomainDummy ; } } }
     { Name IB  ; Value { Term { Type Global; [ IB[] ] ; In DomainDummy ; } } }
     { Name IC  ; Value { Term { Type Global; [ IC[] ] ; In DomainDummy ; } } }

     { Name Flux_d  ; Value { Term { Type Global; [ CompX[Flux_dq0[]] ] ; In DomainDummy ; } } }
     { Name Flux_q  ; Value { Term { Type Global; [ CompY[Flux_dq0[]] ] ; In DomainDummy ; } } }
     { Name Flux_0  ; Value { Term { Type Global; [ CompZ[Flux_dq0[]] ] ; In DomainDummy ; } } }
   }
 }

 { Name Mechanical ; NameOfFormulation Mechanical ;
   PostQuantity {
     { Name P ; Value { Term { [ {P} ]  ; In DomainKin ; } } } // Position [rad]
     { Name Pdeg ; Value { Term { [ {P}*180/Pi ]  ; In DomainKin ; } } } // Position [deg]
     { Name V ; Value { Term { [ {V} ]  ; In DomainKin ; } } } // Velocity [rad/s]
     { Name Vrpm ; Value { Term { [ {V}*30/Pi ]  ; In DomainKin ; } } } // Velocity [rpm]
   }
 }

}

//-----------------------------------------------------------------------------------------------
// Optimization Post-Processing
//-----------------------------------------------------------------------------------------------
PostProcessing {
  { Name PostOptim ; NameOfFormulation MagStaDyn_a_2D ;
    PostQuantity {

      { Name mur; 
	Value { Term { [ nu0/nu[{d a}] ] ; In Domain ; Jacobian Vol ; } } 
      }

      { Name initDesignVar; 
	Value { Term { [ volfrac ] ; In Domain ; Jacobian Vol ; } } 
      }

      { Name a  ; Value { Term { [ {a} ] ; In Domain ; Jacobian Vol ; } } }
       
      { Name az  ; Value { Term { [ CompZ[{a}] ] ; In Domain ; Jacobian Vol ; } } }

      { Name b  ; Value { Term { [{d a}] ; In Domain ; Jacobian Vol ; } } }
 
      { Name RotorPosition_deg ;
	Value { Term { Type Global; [ RotorPosition[] * 180/Pi ] ; In DomainDummy ; } } 
      }
      
      { Name Torque_vw ; // Torque computation via Virtual Works
	Value { 
	  Integral { Type Global ;
	    [ CompZ[ 0.5 * nu[] * XYZ[] /\ VirtualWork[{d a}] ] * AxialLength ];
	    In ElementsOf[Rotor_Airgap, OnOneSideOf Rotor_Bnd_MB];
	    Jacobian Vol ; Integration I1 ; }
	}
      }

      { Name Torque_Maxwell; // Torque computation via Maxwell stress tensor
      	Value {
      	  Integral {
	    [ CompZ [ XYZ[] /\ (T_max[{d a}] * XYZ[] ) ] * 2*Pi*AxialLength/SurfaceArea[]  ];
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }

      { Name BradInt; 
        Value { 
          Integral {
	    [ -2.0*({d a}*Unit[XYZ[]] - Btarget[])*Unit[XYZ[]]/ElementVol[] ];
	    In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }
    
      { Name Energy; // W = Int(B*H)
      	Value {
      	  Integral {
            [(nu[{d a}]*{d a})*{d a}];
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }
	
      { Name Torque_simple; // Torque computation via Maxwell stress tensor
      	Value {
      	  Integral {
            /*[nu[]* XYZ[]*XYZ[]*({d a}*er[]) * ({d a}*et[]) *2*Pi*AxialLength/SurfaceArea[]];*/
            [nu[]*torqueCoeff[]*({d a}*er[])*({d a}*et[])];
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }
      { Name Torque_var1; // T/Tref - 1
      	Value {
      	  Integral {
            [  (#58 / Ttarget[] - 1.0)/SurfaceArea[] ];
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }
      { Name Torque_var2; // (T/Tref-1)^2
      	Value {
      	  Integral { [#60*#60/SurfaceArea[]];
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }
      { Name Torque_var3; // Torque computation via Maxwell stress tensor
      	Value {
      	  Integral { [nu[{d a}]*torqueCoeff[]*( et[]*({d a}*er[]) + er[]*({d a}*et[]) ) ];
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }
     
      { Name Torque_var4; // Torque computation via Maxwell stress tensor
      	Value { Term { Type Global; [ 2.0*#60*#62 ]; In Domain; }
      	}
      }
     
      { Name Surf1; // Torque computation via Maxwell stress tensor
      	Value {
      	  Integral {[1.0/SurfaceArea[]];
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }
/*
      { Name Iron_Loss_Density ;
	Value { Term { [IronLossDensity[{d a}] ] ; In Domain ; Jacobian Vol ; } } 
      }
*/
/*
      { Name Iron_Losses ;
      	Value {
      	  Integral {
	    [ IronLossDensity[{d a}] ];
	    In Domain ; Jacobian Vol  ; Integration I1; }
      	}
      }
*/
      // b_radial_rms is fixed for the initial layout
      { Name b_radial_rms;
	Value {
	  Integral{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.])^2/SurfaceArea[]];
	    In Domain; Jacobian Vol; Integration I1; }
        }
      }
      { Name b_radial_airgap2; 
	Value {
	  Term{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.]) ];
	    In Domain; Jacobian Vol; }
        }
      }
      { Name b_radial_airgap; 
	Value {
	  Term{ [ ({d a}*er[]) ];
	    In Domain; Jacobian Vol; }
        }
      } 
      { Name b_radialFund_airgap;
	Value {
	  Term{ [ Btarget[]  ];
	    In Domain; Jacobian Vol; }
        }
      }
      { Name error_b_radial_airgap2;
	Value {
	  Term{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.]) - Btarget[]  ];
	    In Domain; Jacobian Vol; }
        }
      }
      { Name error_b_radial_airgap;
	Value {
	  Term{ [ ({d a}*er[] - Btarget[]) ];
	    In Domain; Jacobian Vol; }
        }
      }
      { Name f_obj2;
	Value {
	  Integral{ [ ({d a} * Vector[ Cos[AngularPosition[]#4], Sin[#4], 0.] - Btarget[])^2.0  ];
	    In Domain; Jacobian Vol; Integration I1; }
        }
      }
      { Name f_obj;
	Value {
	  Integral{ [ ({d a}*er[] - Btarget[])^2.0  ];
	    In Domain; Jacobian Vol; Integration I1; }
        }
      }
      { Name dF_dB ; 
        Value { 
           Integral { [2*({d a}*Unit[XYZ[]] - Btarget[])];//??? 
            In Domain ; Jacobian Vol  ; Integration I1; }
        }
      }
      { Name surfacePM;
	Value {
	  Integral{ [ 1 ];
	    In Domain; Jacobian Vol; Integration I1; }
	}
      }
    }
  }
}

PostProcessing { //Adjoint system
  { Name MagStaDyn_lambda_2D ; NameOfFormulation AdjointSystem ;
    PostQuantity {
      // Field quantities
      { Name lambda  ; Value { Term { [ {lambda} ] ; In Domain ; Jacobian Vol ; }}}
      { Name lambdaZ ; Value { Term { [ CompZ[{lambda}] ] ; In Domain ; Jacobian Vol ; }}}

      If(Flag_topopt && Flag_PerfType==1) //sensitivity of Int_gap[ (Br-Bref)^2 ]
        // change
        { Name Sensitivity_AdjointMethod1 ; 
          Value { 
            Integral { [(-1.0*nu_prime[bField[]]*bField[])*{d lambda}]; 
                       In Domain ; Jacobian Vol  ; Integration I1; }
           }
        }
      EndIf
      If(Flag_topopt && Flag_PerfType==2) //sensitivity of (T/T_nom - 1)^2
        //change
        { Name Sensitivity_AdjointMethod2 ; 
          Value { 
                 Integral { [(-1.0*nu_prime[bField[]]*bField[])*{d lambda}]; 
                             In Domain ; Jacobian Vol  ; Integration I1; }
          }
        }
      EndIf
      If(Flag_topopt && Flag_PerfType==1) //sensitivity of (Losses)^2
        //change
        { Name Sensitivity_AdjointMethod3 ; 
          Value { 
                 Integral { [(-1.0*nu_prime[bField[]]*bField[])*{d lambda}]; 
                            In Domain ; Jacobian Vol  ; Integration I1; }
          }
        }
      EndIf
    }
  }
}

PostProcessing { // Get filter sensitivity
  { Name FilteredSens; NameOfFormulation Filt_sens ;
    PostQuantity {
      // Field quantities
      //{ Name psi0_moy; Value { Integral { [ prod_x_dC[]/ElementVol[] ] ; In Rotor_Fe ; Jacobian Vol ; Integration I1; }}}
      //{ Name psi0; Value { Term { [ prod_x_dC[] ] ; In Rotor_Fe ; Jacobian Vol ; }}}
      //{ Name psi; Value { Term { [ {psi} ] ; In Rotor_Fe ; Jacobian Vol ; }}}
      { Name objFuncSensFilt; Value { Term { [ {psi}/designVar[] ] ; In Rotor_Fe ; Jacobian Vol ; }}}
      //{ Name dV; Value { Term { [ designVar[] ] ; In Rotor_Fe ; Jacobian Vol ; }}}
    }
  }
}
//-----------------------------------------------------------------------------------------------
// Post-Operations
//-----------------------------------------------------------------------------------------------

If (Flag_ParkTransformation)
PostOperation ThetaPark_IABC UsingPost MagStaDyn_a_2D {
  Print[ RotorPosition_deg, OnRegion DomainDummy, Format Table, LastTimeStepOnly, File StrCat[Dir, StrCat["temp",ExtGnuplot]],
    SendToServer StrCat[po,"10Rotor position"], Color "LightYellow" ];
  Print[ Theta_Park_deg, OnRegion DomainDummy, Format Table, LastTimeStepOnly, File StrCat[Dir, StrCat["temp",ExtGnuplot]],
    SendToServer StrCat[po,"11Theta park"], Color "LightYellow" ];
  Print[ IA, OnRegion DomainDummy, Format Table, LastTimeStepOnly, File StrCat[Dir, StrCat["temp",ExtGnuplot]], SendToServer StrCat[poI,"A"], Color "Pink" ];
  Print[ IB, OnRegion DomainDummy, Format Table, LastTimeStepOnly, File StrCat[Dir, StrCat["temp",ExtGnuplot]], SendToServer StrCat[poI,"B"], Color "Yellow" ];
  Print[ IC, OnRegion DomainDummy, Format Table, LastTimeStepOnly, File StrCat[Dir, StrCat["temp",ExtGnuplot]], SendToServer StrCat[poI,"C"], Color "LightGreen"  ];
}
EndIf

PostOperation Get_LocalFields UsingPost MagStaDyn_a_2D {
  Print[ ir, OnElementsOf Stator_Inds, File StrCat[Dir, StrCat["ir_stator",ExtGmsh]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps] ;
  Print[ ir, OnElementsOf Rotor_Inds,  File StrCat[Dir, StrCat["ir_rotor",ExtGmsh]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps] ;
  Print[ jz, OnElementsOf DomainC, File StrCat[Dir, StrCat["jz",ExtGmsh]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps ] ;
  //Print[ br,  OnElementsOf #{DomainM}, File StrCat[Dir, StrCat["b",ExtGmsh]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps] ;
  Print[ b,  OnElementsOf Domain, File StrCat[Dir, StrCat["b",ExtGmsh]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps, SendToServer my_output2] ;
  //  Print[ b,  OnElementsOf MB, Depth 0, File StrCat[Dir, StrCat["b",ExtGmsh]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps] ;
  Print[ boundary, OnElementsOf Dummy,  File StrCat[Dir, StrCat["bnd",ExtGmsh]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps] ;
  Print[ az, OnElementsOf Domain, File StrCat[Dir, StrCat["a",ExtGmsh]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps ] ;
/*  
Print[ mur,  OnElementsOf Rotor_Fe, File StrCat[Dir, StrCat["mur",ExtGmsh]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps, SendToServer my_output2] ;
*/
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Composante radiale du champ B dans l'entrefer
//r_Bradial = rR5+Gap*5/6-; r_Bradial_fin = rR5+Gap*5/6-dr_Bradial; theta_Bradial = A0;

r_Bradial = rR5+Gap/10; r_Bradial_end = rS1-Gap/10; dr_Bradial = (r_Bradial_end-r_Bradial)/3.; theta_Bradial = A0;//theta_Bradial = Pi;

//nb_Bradial = 37;
nb_Bradial = 101;

PostOperation Get_Bradial UsingPost MagStaDyn_a_2D {
  	Print[ b_radial, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r_Bradial:r_Bradial_end:dr_Bradial , 0:theta_Bradial-0e-8:(theta_Bradial-0e-8)/nb_Bradial-0e-10, 0.}, File StrCat[Dir, StrCat["Bradial",ExtGnuplot]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps, Format Gnuplot, Store 2] ;

	//Grandeurs d'intêrét
	Print[ b_radial_rms[Stator_Airgap], OnGlobal, Format TimeTable,File > StrCat[Dir, StrCat["b_radial_rms",ExtGmsh]], LastTimeStepOnly, Store 1, SendToServer StrCat[po_opt, "1b_radial_rms"], Color "LightYellow" ];
	Print[ f_obj[Stator_Airgap], OnGlobal, Format TimeTable, File > StrCat[Dir, StrCat["f_obj",ExtGmsh]], LastTimeStepOnly, SendToServer StrCat[po_opt, "2f_obj"], Color "LightYellow" ];
	Print[ surfacePM[Rotor_Magnets], OnGlobal, Format TimeTable, File > StrCat[Dir, StrCat["surf_PM",ExtGmsh]], LastTimeStepOnly, SendToServer StrCat[po_opt, "3surf_PM"], Color "LightYellow" ];

	Print[b_radial_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r_Bradial:r_Bradial_end:dr_Bradial , 0:theta_Bradial-0e-8:(theta_Bradial-0e-8)/nb_Bradial-0e-10, 0.}, File StrCat[Dir, StrCat["b_radial_airgap",ExtGnuplot]], 	         LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps, Format Gnuplot] ;  

	Print[ b_radialFund_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r_Bradial:r_Bradial_end:dr_Bradial , 0:theta_Bradial-0e-8:(theta_Bradial-0e-8)/nb_Bradial-0e-10, 0.}, File StrCat[Dir, StrCat		      
	     ["b_radialFund_airgap",ExtGnuplot]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps, Format Gnuplot] ;


	Print[ b_radialFund_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r_Bradial:r_Bradial_end:dr_Bradial , 0:theta_Bradial-0e-8:(theta_Bradial-0e-8)/nb_Bradial-0e-10, 0.}, File StrCat[Dir, StrCat		      
	     ["b_radialFund_airgap",ExtGmsh]], LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps, Format Gmsh] ;

	Print[b_radial_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r_Bradial:r_Bradial_end:dr_Bradial , 0:theta_Bradial-0e-8:(theta_Bradial-0e-8)/nb_Bradial-0e-10, 0.}, File StrCat[Dir, StrCat["b_radial_airgap",ExtGmsh]], 	      LastTimeStepOnly, AppendTimeStepToFileName Flag_SaveAllSteps, Format Gmsh] ;  
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
PostOperation Get_GlobalQuantities UsingPost MagStaDyn_a_2D {
  If(!Flag_Cir)
    If(!Flag_ParkTransformation)
      Print[ I, OnRegion PhaseA_pos, Format Table,
        File > StrCat[Dir, StrCat["Ia",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poI,"A"], Color "Pink" ];
      If(NbPhases==3)
        Print[ I, OnRegion PhaseB_pos, Format Table,
          File > StrCat[Dir, StrCat["Ib",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poI,"B"], Color "Yellow" ];
        Print[ I, OnRegion PhaseC_pos, Format Table,
          File > StrCat[Dir, StrCat["Ic",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poI,"C"], Color "LightGreen" ];
      EndIf
    EndIf

    Print[ U, OnRegion PhaseA_pos, Format Table,
      File > StrCat[Dir, StrCat["Ua",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poV,"A"], Color "Pink" ];
    If(NbPhases==3)
      Print[ U, OnRegion PhaseB_pos, Format Table,
        File > StrCat[Dir, StrCat["Ub",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poV,"B"], Color "Yellow" ];
      Print[ U, OnRegion PhaseC_pos, Format Table,
        File > StrCat[Dir, StrCat["Uc",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poV,"C"], Color "LightGreen" ];
    EndIf
  EndIf
  If(Flag_Cir && Flag_SrcType_StatorA==2)
    Print[ I, OnRegion Input1, Format Table,
      File > StrCat[Dir, StrCat["Ia",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poI,"A"], Color "Pink" ];
    Print[ U, OnRegion Input1, Format Table,
      File > StrCat[Dir, StrCat["Ua",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poV,"A"], Color "Pink" ];
  EndIf
  If(Flag_Cir && Flag_SrcType_StatorB==2)
    Print[ I, OnRegion Input2, Format Table,
      File > StrCat[Dir, StrCat["Ib",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poI,"B"], Color "Yellow" ];
    Print[ U, OnRegion Input2, Format Table,
      File > StrCat[Dir, StrCat["Ub",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poV,"B"], Color "Yellow" ];
  EndIf
  If(Flag_Cir && Flag_SrcType_StatorB==2)
    Print[ I, OnRegion Input3, Format Table,
      File > StrCat[Dir, StrCat["Ic",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poI,"C"], Color "LightGreen" ];
    Print[ U, OnRegion Input3, Format Table,
      File > StrCat[Dir, StrCat["Uc",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poV,"C"], Color "LightGreen" ];
  EndIf
  If(Flag_Cir && Flag_SrcType_StatorA==0)
    Print[ I, OnRegion R1, Format Table,
      File > StrCat[Dir, StrCat["Ia",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poI,"A"], Color "Pink" ];
    Print[ U, OnRegion R1, Format Table,
      File > StrCat[Dir, StrCat["Ua",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poV,"A"], Color "Pink" ];
  EndIf
  If(Flag_Cir && Flag_SrcType_StatorB==0)
    Print[ I, OnRegion R2, Format Table,
      File > StrCat[Dir, StrCat["Ib",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poI,"B"], Color "Yellow" ];
    Print[ U, OnRegion R2, Format Table,
      File > StrCat[Dir, StrCat["Ub",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poV,"B"], Color "Yellow" ];
  EndIf
  If(Flag_Cir && Flag_SrcType_StatorC==0)
    Print[ I, OnRegion R3, Format Table,
      File > StrCat[Dir, StrCat["Ic",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poI,"C"], Color "LightGreen" ];
    Print[ U, OnRegion R3, Format Table,
      File > StrCat[Dir, StrCat["Uc",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poV,"C"], Color "LightGreen" ];
  EndIf

  Print[ I, OnRegion RotorC, Format Table,
    File > StrCat[Dir, StrCat["Irotor",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poI,"rotor"], Color "LightCyan" ];

  If(Flag_SrcType_Stator)
    Print[ Flux[PhaseA], OnGlobal, Format TimeTable,
      File > StrCat[Dir, StrCat["Flux_a",ExtGnuplot]], LastTimeStepOnly, Store 11, SendToServer StrCat[poF,"A"],  Color "Pink" ];
    If(NbPhases==3)
      Print[ Flux[PhaseB], OnGlobal, Format TimeTable,
        File > StrCat[Dir, StrCat["Flux_b",ExtGnuplot]], LastTimeStepOnly, Store 22, SendToServer StrCat[poF,"B"],  Color "Yellow" ];
      Print[ Flux[PhaseC], OnGlobal, Format TimeTable,
        File > StrCat[Dir, StrCat["Flux_c",ExtGnuplot]], LastTimeStepOnly, Store 33, SendToServer StrCat[poF,"C"], Color "LightGreen"];
    EndIf
    If(Flag_ParkTransformation && Flag_SrcType_Stator)
      Print[ Flux_d, OnRegion DomainDummy, Format TimeTable,
        File > StrCat[Dir, StrCat["Flux_d",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poF,"d"], Color "LightYellow" ];
      Print[ Flux_q, OnRegion DomainDummy, Format TimeTable,
        File > StrCat[Dir, StrCat["Flux_q",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poF,"q"], Color "LightYellow" ];
      Print[ Flux_0, OnRegion DomainDummy, Format TimeTable,
        File > StrCat[Dir, StrCat["Flux_0",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poF,"0"], Color "LightYellow" ];
    EndIf
  EndIf

  If(Flag_ComputeLosses)
    Print[ JouleLosses[Rotor], OnGlobal, Format TimeTable,
      File > StrCat[Dir, StrCat["JL",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poJL,"rotor"], Color "LightYellow" ];
    Print[ JouleLosses[Rotor_Fe], OnGlobal, Format TimeTable,
      File > StrCat[Dir, StrCat["JL_Fe",ExtGnuplot]], LastTimeStepOnly, SendToServer StrCat[poJL,"rotor_fe"], Color "LightYellow" ];
  EndIf
}

PostOperation Get_Torque UsingPost MagStaDyn_a_2D {
  Print[ Torque_Maxwell[Rotor_Airgap], OnGlobal, Format TimeTable,
    File > StrCat[Dir, StrCat["Tr",ExtGnuplot]], LastTimeStepOnly, Store 54, SendToServer my_output, Color "Ivory" ];
  Print[ Torque_Maxwell[Stator_Airgap], OnGlobal, Format TimeTable,
    File > StrCat[Dir, StrCat["Ts",ExtGnuplot]], LastTimeStepOnly, Store 55, SendToServer StrCat[po_mecT, "stator"], Color "Ivory" ];
  Print[ Position, OnRegion Domain, Format TimeTable,
    File > StrCat[Dir, StrCat["Position",ExtGnuplot]], LastTimeStepOnly, Store 59, SendToServer StrCat[po_mecP, "0Position [deg]"], Color "Ivory" ];
  //Print[ Torque_Maxwell[MB], OnGlobal, Format TimeTable,
  //  File > StrCat[Dir, StrCat["Tmb",ExtGnuplot]], LastTimeStepOnly, Store 56, SendToServer StrCat[po_mecT, "mb"], Color "Ivory" ];
 //Print[ Torque_vw, OnRegion NodesOf[Rotor_Bnd_MB], Format RegionValue,
 //       File > StrCat[Dir, StrCat["Tr_vw",ExtGnuplot]], LastTimeStepOnly, Store 54, SendToServer StrCat[po_mecT,"rotor_vw"] ];
}

PostOperation Get_Torque_cplx UsingPost MagStaDyn_a_2D {
  Print[ Torque_Maxwell_cplx[Rotor_Airgap], OnGlobal, Format TimeTable,
    File > StrCat[Dir, StrCat["Tr",ExtGnuplot]], Store 54, SendToServer my_output, Color "Ivory" ];
  Print[ Torque_Maxwell_cplx[Stator_Airgap], OnGlobal, Format TimeTable,
    File > StrCat[Dir, StrCat["Ts",ExtGnuplot]], Store 55, SendToServer StrCat[po_mecT,"stator"], Color "Ivory" ];
  //Print[ Torque_Maxwell_cplx[MB], OnGlobal, Format TimeTable,
  //  File > StrCat[Dir, StrCat["Tmb",ExtGnuplot]], Store 56, SendToServer StrCat[po_mecT,"mb"], Color "Ivory" ];

  /* TESTING
  Print[ Torque_Maxwell_cplx_2f[Rotor_Airgap], OnGlobal, Format TimeTable, HarmonicToTime 24,
    File > StrCat[Dir, StrCat["Tr_2f_time",ExtGnuplot]], Color "Ivory" ];
  Print[ Torque_Maxwell_cplx_2f[Rotor_Airgap], OnGlobal, Format TimeTable,
  File > StrCat[Dir, StrCat["Tr_2f",ExtGnuplot]], SendToServer StrCat[po_mec,"44T2f_rotor"], Color "Ivory" ];
  Print[ Torque_Maxwell_cplx_2f[Stator_Airgap], OnGlobal, Format TimeTable,
  File > StrCat[Dir, StrCat["Ts_2f",ExtGnuplot]], SendToServer StrCat[po_mec,"45T2f_stator"], Color "Ivory" ];
  */
}

PostOperation Mechanical UsingPost Mechanical {
  Print[ P, OnRegion DomainKin, File > StrCat[Dir, StrCat["P", ExtGnuplot]],
    Format Table, Store 77, LastTimeStepOnly, SendToServer StrCat[po_mec,"11Position [rad]"], Color "Ivory"] ;
  Print[ Pdeg, OnRegion DomainKin, File > StrCat[Dir, StrCat["P_deg", ExtGnuplot]],
    Format Table, LastTimeStepOnly, SendToServer StrCat[po_mec,"10Position [deg]"], Color "Ivory"] ;
  Print[ V, OnRegion DomainKin, File > StrCat[Dir, StrCat["V", ExtGnuplot]],
    Format Table, LastTimeStepOnly, SendToServer StrCat[po_mec,"21Velocity [rad\s]"], Color "Ivory"] ;//MediumPurple1
  Print[ Vrpm, OnRegion DomainKin, File > StrCat[Dir, StrCat["Vrpm", ExtGnuplot]],
    Format Table, LastTimeStepOnly, SendToServer StrCat[po_mec,"20Velocity [rpm]"], Color "Ivory"] ;//MediumPurple1
}

// --------------------------------------------------------------------------
// Optimization Post-Op
// --------------------------------------------------------------------------
PostOperation {
  // --------------------------------------------------------------------------
  // Get adjoint vector
  // --------------------------------------------------------------------------
  { Name Get_PostOptim_AdjointMethod; NameOfPostProcessing MagStaDyn_lambda_2D;
    Operation{
         Print[ lambdaZ, OnElementsOf Domain,//on ne met que la composante selon z de lambda --> champ continu
	        File StrCat[ResDir, StrCat["lambda",ExtGmsh]], LastTimeStepOnly] ;
    }
  }
  // --------------------------------------------------------------------------
  // Get sensitivity 
  // --------------------------------------------------------------------------
  { Name Get_PostOptimSensitivity_AdjointMethod;NameOfPostProcessing MagStaDyn_lambda_2D;
    Operation{
          If(Flag_topopt)
    	    If(Flag_PerfType==1)
              Print[ Sensitivity_AdjointMethod1, OnElementsOf Rotor_Fe,//intégration par éléments
	             File StrCat[ResDir, StrCat["SensitivityObj_AdjointMethod",ExtGmsh]], LastTimeStepOnly] ;
            EndIf
            If(Flag_PerfType==2)
              Print[ Sensitivity_AdjointMethod2, OnElementsOf Rotor_Fe,//intégration par éléments
	             File StrCat[ResDir, StrCat["SensitivityObj_AdjointMethod",ExtGmsh]], LastTimeStepOnly] ;
            EndIf
            If(Flag_PerfType==3)
              Print[ Sensitivity_AdjointMethod3, OnElementsOf Rotor_Fe,//intégration par éléments
	             File StrCat[ResDir, StrCat["SensitivityObj_AdjointMethod",ExtGmsh]], LastTimeStepOnly] ;
            EndIf
          EndIf
    }
  }
  // --------------------------------------------------------------------------
  // Get Filtered Sensitivity
  // --------------------------------------------------------------------------
  { Name FilteredSens; NameOfPostProcessing FilteredSens;
    Operation {
	  Print [ objFuncSensFilt, OnElementsOf Rotor_Fe, File StrCat["res/SensitivityObjFiltered",".pos"] ];
    }
  }
  // --------------------------------------------------------------------------
  // Get optimization details
  // --------------------------------------------------------------------------
  { Name Get_PostOptimPlot; NameOfPostProcessing PostOptim;
    Operation{
        Print[ az, OnElementsOf Domain,
	            File StrCat[ResDir, StrCat["az",ExtGmsh]], LastTimeStepOnly] ;

  	Print[ b, OnElementsOf Domain,
	 	    File StrCat[ResDir, StrCat["b",ExtGmsh]], LastTimeStepOnly] ;
 	     /*
  	     Print[ Iron_Loss_Density,  OnElementsOf Stator_Fe,
	 	    File StrCat[ResDir, StrCat["Losses",ExtGmsh]], LastTimeStepOnly] ;
	     */
  	//Gap = Ef;
 	//rR5 = Drotor/2.;
  	rS1 = rR5 + Gap;
  	A0 =  45 * deg2rad ;
  	r_Bradial = rR5+Gap/10; r_Bradial_end = rS1-Gap/10; dr_Bradial = (r_Bradial_end-r_Bradial)/3.; 
  	r = r_Bradial_end;
  	theta_Bradial = A0;
  	nb_Bradial = 1001;

  	Print[ b_radial_rms[Rotor_Airgap], OnGlobal, Format TimeTable,
        	 File > StrCat[ResDir, StrCat["b_radial_rms",ExtGmsh]], LastTimeStepOnly, 
       		  Store 1, SendToServer StrCat[po_opt,"1b_radial_rms"], Color "LightYellow" ];
/*
  	Print[ surfacePM[Rotor_Magnets], OnGlobal, Format TimeTable, 
         	File > StrCat[ResDir, StrCat["surf_PM",ExtGmsh]], LastTimeStepOnly, 
         	SendToServer StrCat[po_opt,"3surf_PM"], Color "LightYellow" ];
*/
  	Print[b_radial_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.}, 
        	File StrCat[ResDir,StrCat["b_radial_airgap",ExtGnuplot]], Format Gnuplot] ;  

  	Print[b_radial_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.}, 
       		 File StrCat[ResDir, StrCat["b_radial_airgap",ExtGmsh]],LastTimeStepOnly, Format Gmsh];  
/*
  	Print[b_radial_airgap2, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.}, 
        	File StrCat[ResDir, StrCat["b_radial_airgap2",ExtGmsh]],LastTimeStepOnly, Format Gmsh];  
*/
  	Print[ b_radialFund_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.},    
        	File StrCat[ResDir, StrCat["b_radialFund_airgap",ExtGnuplot]], Format Gnuplot] ;

  	Print[ b_radialFund_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.}, 
         	File StrCat[ResDir, StrCat["b_radialFund_airgap",ExtGmsh]], LastTimeStepOnly, Format Gmsh];
/*
  	Print[ error_b_radial_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.},    
        	File StrCat[ResDir, StrCat["error_b_radial_airgap",ExtGnuplot]], Format Gnuplot] ;

  	Print[ error_b_radial_airgap, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.}, 
         	File StrCat[ResDir, StrCat["error_b_radial_airgap",ExtGmsh]], LastTimeStepOnly, Format Gmsh];


  	Print[ error_b_radial_airgap2, OnGrid {$A*Cos[$B], $A*Sin[$B], $C} { r, 0:theta_Bradial:(theta_Bradial)/nb_Bradial, 0.}, 
         	File StrCat[ResDir, StrCat["error_b_radial_airgap2",ExtGmsh]], LastTimeStepOnly, Format Gmsh];
*/
    }
  }
  // --------------------------------------------------------------------------
  // Get optimization 
  // --------------------------------------------------------------------------
  { Name Get_PostOptim; NameOfPostProcessing PostOptim;
    Operation{
  	Print[ f_obj[Rotor_Airgap], OnGlobal, Format Table, 
           	File StrCat[ResDir, StrCat["f_obj",ExtGmsh]], LastTimeStepOnly, 
                SendToServer StrCat[po_opt,"2f_obj"], Color "LightYellow" ];

  	Print[ RotorPosition_deg, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
   	 	File StrCat[ResDir, StrCat["temp",ExtGnuplot]],
   	 	SendToServer StrCat[po_min,"Rotor position [mech. deg]"], Color "LightYellow" ];

  	Print[ Torque_Maxwell[Rotor_Airgap], OnGlobal, Format Table,
	 	File StrCat[ResDir, StrCat["Tr",ExtGnuplot]], LastTimeStepOnly,
	 	SendToServer StrCat[po_min,"Torque [Nm]"], Color "LightYellow" ];

  	Print[ Energy[Rotor_Airgap], OnGlobal, Format Table,
	 	File StrCat[ResDir, StrCat["Energy",ExtGnuplot]], LastTimeStepOnly,
	 	SendToServer StrCat[po_min,"Energy [J]"], Color "LightYellow" ];

  	Print[ Torque_simple[Rotor_Airgap], OnGlobal, Format Table,
	 	Store 58,File StrCat[ResDir, StrCat["Tr_simple",ExtGnuplot]], LastTimeStepOnly,
	 	SendToServer StrCat[po_min,"Torque simple [Nm]"], Color "LightYellow" ];

  	Print[ BradInt, OnElementsOf Rotor_Airgap, Format Table,
	 	Store 59, File StrCat[ResDir, StrCat["BrInt",ExtGnuplot]], LastTimeStepOnly];

  	Print[ Torque_var1[Rotor_Airgap], OnGlobal, Format Table,
	 	Store 60, File StrCat[ResDir, StrCat["Tr_var1",ExtGnuplot]], LastTimeStepOnly,
	 	SendToServer StrCat[po_min,"Torque variance [Nm]"], Color "LightYellow" ];

  	Print[ Torque_var2[Rotor_Airgap], OnGlobal, Format Table,
	 	Store 61, File StrCat[ResDir, StrCat["Tr_var2",ExtGnuplot]], LastTimeStepOnly,
	 	SendToServer StrCat[po_min,"Torque variance 2 [Nm]"], Color "LightYellow" ];

  	Print[ Torque_var3[Rotor_Airgap], OnGlobal, Format Table,
	 	Store 62, File StrCat[ResDir, StrCat["Tr_var3",ExtGmsh]], LastTimeStepOnly];
/*
	Print[ Iron_Losses[Stator_Fe], OnGlobal, Format Table,
	 	File StrCat[ResDir, StrCat["Losses",ExtGnuplot]], LastTimeStepOnly,
	 	SendToServer StrCat[po_min,"Iron losses [W]"], Color "LightYellow" ];
*/
   	If(Flag_topopt)
   	  If(!Flag_initOpt)
    	     // Generate the map of mur ( mur = mu/mu0 = 1/(nu*mu0) )
    	     Print[ mur,  OnElementsOf Rotor_Fe, 
           	    File StrCat[ResDir, StrCat["mur",ExtGmsh]], LastTimeStepOnly] ;
    	  EndIf
    	  If(Flag_initOpt)
      	    // genrate the initial map(.pos) for the optimization design variables 
      	    Print[ initDesignVar,  OnElementsOf Rotor_Fe, 
                   File StrCat[ResDir, StrCat["designVar",ExtGmsh]], LastTimeStepOnly] ;
    	  EndIf
       EndIf
    }
  }

}


