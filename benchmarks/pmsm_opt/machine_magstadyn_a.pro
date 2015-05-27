
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
    PhaseAngle=0,
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
    prod_x_dC, designVar, nu_r_inv, bField, pseudoLoad,nu_prime,
    velocityField_0,velocityField0,velocityField,BradCoeff
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

  MB=MovingBand2D[MovingBand_PhysicalNb, Stator_Bnd_MB, Rotor_Bnd_MB, SymmetryFactor] ;
  Air = Region[{ Rotor_Air, Rotor_Airgap, Stator_Air, Stator_Airgap, MB } ] ;
  Inds = Region[{ Rotor_Inds, Stator_Inds } ] ;

  DomainV = Region[{}]; // Speed considered either with term v/\b
  If(Term_vxb) // or not dynamics in time domain + mechanics
    DomainV = Region[{ RotorC }];
  EndIf

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

//  // TO domain
//  If(!Flag_topopt)
//    DomainOpt = Region[{}];
//  EndIf
//  If(Flag_topopt)
//    If(regionVar == 0)
//      DomainOpt = Region[{Rotor_Fe}];
//      DomainOptFix = Region[{}];
//      DomainOptMV = Region[{Rotor_Fe}];
//    EndIf 
//    If(regionVar == 1)
//      DomainOpt = Region[{Stator_Fe}];
//      DomainOptFix = Region[{Stator_Fe}];
//      DomainOptMV = Region[{}];
//    EndIf
//    If(regionVar == 2)
//      DomainOpt = Region[{Rotor_Fe,Stator_Fe}];
//      DomainOptFix = Region[{Stator_Fe}];
//      DomainOptMV = Region[{Rotor_Fe}];
//    EndIf
//  EndIf  
//  DomCompliance = Region[{Rotor_Airgap}];
//  DomBradError  = Region[{Rotor_Airgap}];
//  DomTorqueVar = Region[{Rotor_Airgap}];
}

Function {
  mur_fe = 1000.0;
  mu0 = 4.e-7 * Pi ;
  nu0 = 1. / mu0 ;
 //NbWires[]  = 104 ;

  sigma_al = 3.72e7 ; // conductivity of aluminum [S/m]
  sigma_cu = 5.9e7  ; // conductivity of copper [S/m]

  nu[#{Air,Inds,Stator_Al,Rotor_Al,Stator_Cu,Rotor_Cu,Rotor_Magnets,Rotor_Bars}]=1./ mu0;
  RotateZ_desVar[] = Rotate[ XYZ[], 0, 0, -RotorPosition[] ] ; 

  If(!Flag_NL) //linear ferromagnetic material -> fixme !!!
    If(!Flag_topopt) //shape opt 
      Printf["------- Lin Ferro -------"];
//      nu[#{DomainFe}]  = 1 / (mur_fe * mu0) ;
//      nu_prime[#{DomainFe}] = 0.;
//      dhdb_NL[] = 0;
      nu [#{ Stator_Fe, Rotor_Fe }]  = 1 / (mur_fe * mu0) ;
      nu_prime[#{Stator_Fe, Rotor_Fe }] = 0.;
    EndIf
    If(Flag_topopt) //if shape opt or initialize topology opt
      Printf["------- TO: Lin TO -------"];
      p = degree_SIMP; //penalty factor
      designVar[#{DomainOptMV}]  = ScalarField[RotateZ_desVar[],0,1]{DES_VAR_FIELD};
      designVar[#{DomainOptFix}] = ScalarField[XYZ[],0,1]{DES_VAR_FIELD};    
      nu[#{DomainFe,-DomainOpt}]  = 1 / (mur_fe * mu0) ;
      nu[#{DomainOpt}]  = (1/(mur_fe * mu0)-nu0)*designVar[]^p + nu0; 
      nu_prime[#{DomainOpt}]  = p*(1 / (mur_fe * mu0) - nu0)*designVar[]^(p-1.0); 
    EndIf
  EndIf
  If(Flag_NL)
    If(Flag_NL_law_Type==0) //analytic nu-law
      Printf["Compute Nu map, Nltype=%g",Flag_NL_law_Type];
      //nu [#{DomainFe}] = nu_1a[$1] ;
      //dhdb_NL [#{DomainFe}] = dhdb_1a_NL[$1]; //Vérifier la formule !!!!
      nu [#{DomainFe}] = nu_2a[$1] ;
      //dhdb_NL [#{DomainFe}] = dhdb_2a[$1];
      dhdb_NL [#{DomainFe}] = dhdb_2a_NL[$1];  
//      coen[ DomainNL ] = SquNorm[$1]/2.*(p0 + p1*(2-1./(p2+1.)) 
//				       * Exp[ p2 * Log[ SquNorm [$1]]]) ;

    EndIf
    If(Flag_NL_law_Type==1) //interpolated nu-law
      If(!Flag_topopt)
        nu [#{DomainFe}] = nu_1[$1] ;
        dhdb_NL[#{DomainFe} ] = dhdb_1_NL[$1];
      EndIf
      If(Flag_topopt)
        p = degree_SIMP;
        nu[#{DomainFe,-DomainOpt}] = nu_1[$1];
        dhdb_NL[#{DomainFe,-DomainOpt}] = dhdb_1_NL[$1]; //stator
        designVar[#{DomainOptMV}]=ScalarField[RotateZ_desVar[],0,1]{DES_VAR_FIELD};
        designVar[#{DomainOptFix}]=ScalarField[XYZ[],0,1]{DES_VAR_FIELD};  
        If(Flag_InterpLaw == 0) // SIMP
          Printf["Compute SIMP Nu map, Nltype=%g",Flag_NL_law_Type];
	  nu[#{DomainOpt}] = nu0*(1.0 + (nu_1[$1]/nu0 - 1.0)*designVar[]^p);
          nu_prime[#{DomainOpt}] = p*nu0*(nu_1[$1]/nu0 - 1.0)*designVar[]^(p-1.0);
	  dhdb_NL[#{DomainOpt}] = dhdb_1_NL[$1]*designVar[]^p; 
        EndIf
        If(Flag_InterpLaw == 1) // RAMP
          Printf["Compute RAMP Nu map, Nltype=%g",Flag_NL_law_Type];	    
          nu[#{DomainOpt}]=(designVar[]/(1.0 + p*(1 - designVar[])))*nu_1[$1];
          nu_prime[#{DomainOpt}]=((1.0+p)/(1.0+p*(1-designVar[]))^2.0)*nu_1[$1];
      	  dhdb_NL[#{DomainOpt}]=dhdb_1_NL[$1]*(designVar[]/(1.0+p*(1-designVar[]))); 
        EndIf
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

  Rb[]=Factor_R_3DEffects*AxialLength*FillFactor_Winding*NbrWires[]^2/SurfCoil[]/sigma[] ;
  Resistance[#{Stator_Inds, Rotor_Inds}] = Rb[] ;

  Idir[#{Stator_IndsP, Rotor_IndsP}] =  1 ;
  Idir[#{Stator_IndsN, Rotor_IndsN}] = -1 ;
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

  Velocity[] = wr*XYZ[]/\Vector[0,0,-1] ;

  // Maxwell stress tensor
  T_max[] = ( SquDyadicProduct[$1] - SquNorm[$1] * TensorDiag[0.5, 0.5, 0.5] ) / mu0 ;
//  T_max[ Region[ {Air, Inds, DomainL}] ] = 
//    ( SquDyadicProduct[$1] - SquNorm[$1]/2.*TensorDiag[1.,1.,1.] ) * nu[$1] ;
//  T_max[ DomainNL ] = 
//    ( nu[$1] * SquDyadicProduct[$1] - coen[$1]*TensorDiag[1,1,1] ) ;

  T_max_cplx[] = Re[0.5*(TensorV[CompX[$1]*Conj[$1], CompY[$1]*Conj[$1], CompZ[$1]*Conj[$1]] - $1*Conj[$1] * TensorDiag[0.5, 0.5, 0.5] ) / mu0] ;
  T_max_cplx_2f[] = 0.5*(TensorV[CompX[$1]*$1, CompY[$1]*$1, CompZ[$1]*$1] - $1*$1 * TensorDiag[0.5, 0.5, 0.5] ) / mu0 ;// To check ????

  
  AngularPosition[] = (Atan2[ Y[],X[] ]#7 >= 0.)? #7 : #7+2*Pi ; 

  RotatePZ[] = Rotate[ XYZ[]/*Vector[$X,$Y,$Z]*/, 0, 0, $1 ] ;//Watch out: Do not use XYZ[]!

  Torque_mag[] = #55 ; // Torque computed in postprocessing (Trotor in #54, Tstator in #55, Tmb in #56)

}

//-------------------------------------------------------------------------------------

Jacobian {
  { Name Vol; Case { { Region All ; Jacobian Vol; } } }
  { Name Sur; Case { { Region All ; Jacobian Sur; } } }
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
        { Region Surf_cutA1; SubRegion Region[{Surf_Inf,Surf_bn0, Point_ref}]; 
          Type Link;
          RegionRef Surf_cutA0; SubRegionRef Region[{Surf_Inf,Surf_bn0, Point_ref}];
          Coefficient ((NbrPoles%2)?-1:1) ; 
          Function RotatePZ[-NbrPoles*2*Pi/NbrPolesTot]; }
        { Region Surf_cutA1; Type Link; RegionRef Surf_cutA0;
          Coefficient (NbrPoles%2)?-1:1 ; 
          Function RotatePZ[-NbrPoles*2*Pi/NbrPolesTot]; }

        //For the moving band
        For k In {1:SymmetryFactor-1}
        { Region Rotor_Bnd_MB~{k+1} ; 
          SubRegion Rotor_Bnd_MB~{(k!=SymmetryFactor-1)?k+2:1}; Type Link;
          RegionRef Rotor_Bnd_MB_1; SubRegionRef Rotor_Bnd_MB_2;
          Coefficient ((NbrPoles%2)?-1:1)^(k); 
          Function RotatePZ[-k*NbrPoles*2*Pi/NbrPolesTot]; }
        EndFor

      EndIf

    }
  }
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
	If (Flag_Degree)
         { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ;
           Support Region[{ Domain, Rotor_Bnd_MBaux}] ; Entity EdgesOf [All];}
	EndIf
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
      If (Flag_Degree)
       { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint MVP_2D ; }
      EndIf

    }
  }
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
        In Rotor_Bnd_MBaux; Jacobian Sur; Integration I1; }

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

          If(!Flag_ImposedSpeed)
            Evaluate[ #77#66 ]; //Keep track of previous angular position
          EndIf
          MeshMovingBand2D[MB];
        }
      EndIf // End Flag_AnalysisType==1 (Time domain)
    }
  }

}


