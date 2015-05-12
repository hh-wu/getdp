// execution
NONE = 0;
SEMI_AVM = 1;
FIXDOM_AVM = 2;
VARDOM_AVM = 3;
VARDOM_DIR = 4;

STATE = 1;
AVM = 2;
DIR = 3;

SENS_FILT = 1;
VELOCITY_FILT = 2;

// performance function type
NO_PERF = 0;
BFIELD_ERROR = 1;
TORQUE_VAR = 2;
IRON_LOSSES = 3;
COMPLIANCE = 4;
VOLUME = 5;
TORQUE = 6;

// postpro views tag
VELOCITY_FIELD = 7;//pour que ça marche avec -gmshread il faut mettre à 0
DES_VAR_FIELD = 21;
SENS_FIELD = 22;
TORQUE_VAR_FIELD = 20;

ppOpt = "Input/OptParam/";

DefineConstant[
  Flag_AnalysisMethod = {NONE,
    Choices{
      NONE = "none",
      STATE = "state variable",
      AVM = "adjoint varibale",
      DIR = "direct derivative"
    },
    Name StrCat[ppOpt, "analysisMethod"], Label "analysis method" },
  
  Flag_SensitivityMethod = {NONE,
    Choices{
      NONE="none",
      SEMI_AVM="semi-analytic avm",
      FIXDOM_AVM="fixed domain avm",
      VARDOM_AVM="var. domain avm",//lie
      VARDOM_DIR="var. domain direct" //lie
    },
    Name StrCat[ppOpt, "sensMethod"], Label "derivative method" },

  Flag_FilterMethod = {NONE,
    Choices{
      NONE="none",
      SENS_FILT="filter sensitivity",
      VELOCITY_FILT="filter velocity"
    },
    Name StrCat[ppOpt, "Filter"], Label "filter" },

  Flag_PerfType = {TORQUE_VAR, 
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

  Rmin = {0.001*10, 
    Name "Input/OptParam/RadiusSensFilter",Label "Sensitivity Filter Radius", 
    Visible (Flag_FilterMethod==SENS_FILT)},

  Flag_filterMeshCoordinates = {0, 
    Choices {0, 1},
    Name "Input/OptParam/filterMeshCoord", Label "Filter mesh nodes coordinates?", 
    Visible (Flag_FilterMethod==SENS_FILT)}, 

//--------------------------------------------------------------
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
    prod_x_dC, designVar, nu_r_inv, bField, pseudoLoad,dFdb,Func,
    BradCoeff,dF_adjoint_lie
  ];

  Flag_Symmetry = (SymmetryFactor==1) ? 0 : 1 ;

}

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
                                +Pi/8)*NbrPolesTot/2.0];
  BradCoeff[] = 2*Pi*AxialLength/SurfaceArea[];

  // Target Torque
  Ttarget[] = Tnom;//Nm 
  torqueVar[] = ScalarField[XYZ[],0,1]{TORQUE_VAR_FIELD};
  torqueCoeff[] = XYZ[]*XYZ[]*2*Pi*AxialLength/SurfaceArea[]; 
  er[] = Unit[XYZ[]];
  et[] = Unit[Vector[-Sin[ Atan2[Y[],X[]] ], Cos[ Atan2[Y[],X[]] ], 0]];

  If(Flag_FilterMethod == SENS_FILT)
    //rmin2 = Rmin*Rmin;
    prod_x_dC[#{DomainOptMV}] = ScalarField[RotateZ_desVar[],0,1]{SENS_FIELD};
    prod_x_dC[#{DomainOptFix}] = ScalarField[XYZ[],0,1]{SENS_FIELD};
  EndIf

  volDensity[#{Rotor_Fe,Stator_Fe}] = 7874; //acier
  volDensity[#{DomainM}] = 7400; //PM

  // lie derivative
  velocityField[] = VectorField[RotateZ_desVar[],0,1]{VELOCITY_FIELD};
  dV[] = Transpose[ GradVectorField[XYZ[], 0 , 1]{VELOCITY_FIELD} ];
  ETA[] = dV[]#1 + Transpose [ #1 ] - TTrace [ #1 ] * TensorDiag[1,1,1];//(1,2)-form
  LV1[] = dV[] * $1 ;
  LV2[] = TTrace [ dV[]#1 ] * $1 - Transpose [ #1 ] * $1 ;
  
  If(Flag_PerfType == COMPLIANCE)
    Func[] = nu[$1] * SquNorm[$1]; //F = nu*B^2, alpha=nu*{d a},beta={d a} 
    dFdb[] = 2. * nu[$1] * $1; //dF/db = 2*nu*B
    dF_adjoint_lie[] = nu[$1#2] * #2 * ( ETA[] * #2 ) ;//fixme #1 != #2 !!!
  EndIf
  If(Flag_PerfType == TORQUE)
    Func[] = nu[$1]*torqueCoeff[]*( $1*er[] )*( $1*et[] );
    dFdb[] = nu[$1]*torqueCoeff[]*(er[]*($1*et[]) + et[]*($1*er[]));
    d_torqueCoeff[] = (er[]*velocityField[])*2*Pi*AxialLength/SurfaceArea[];
    dF_adjoint_lie[]= nu[$1#2]*d_torqueCoeff[] * ( #2 * er[] ) * ( #2 * et[] )
                     -nu[#2]*torqueCoeff[]*(
                       ( LV2[#2] * er[] ) * ( #2 * et[] )
                      +( #2 * er[] ) * ( LV2[#2] * et[] )
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
  d_bilin_lie[] = nu[$1] * $1 * ( ETA[] * $2 ) ; //2-form
  d_load_lie[] = nu[$1] * ( LV1[ br[] ] ) * $2 ; //1-form equivalent to 2-form

}

Constraint {
  { Name MVP_2D_lambda ;
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
}

FunctionSpace {
  //-----------------------------------------------------------------
  //  Direct differentiation variable 
  //-----------------------------------------------------------------
  { Name Hcurl_d_a_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[{ Domain, Rotor_Bnd_MBaux }] ; Entity NodesOf [ All ] ; }
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
    }
  }
  //-----------------------------------------------------------------
  //  Adjoint variable --> homogenous constraints
  //-----------------------------------------------------------------
  { Name Hcurl_lambda_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[{ Domain , Rotor_Bnd_MBaux }] ; Entity NodesOf [ All ] ; }
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D_lambda; }
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
}

Formulation {
  //-----------------------------------------------------------------
  // Direct sensitivity Formulation 
  //-----------------------------------------------------------------
  // Compute the derivative of the state variable for each design variable
  // design variable:tau -> Velocity
  // Apply this method if the nb. of design function >>> nb. of design variables 

  { Name DirectDerivFormulation ; Type FemEquation ;
    Quantity {
     { Name a ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
     { Name d_a ; Type Local  ; NameOfSpace Hcurl_d_a_2D ; }
   }
   Equation {
     // bilinear(Lambda,Lambda')
     Galerkin { [ nu[ {d a} ] * Dof{d d_a} , {d d_a} ] ;
       In Domain ; Jacobian Vol ; Integration I1 ; }
     Galerkin { [ dhdb_NL[ {d a} ] * Dof{d d_a} , {d d_a} ] ; 
       In DomainNL ; Jacobian Vol ; Integration I1 ; }

     // DO NOT REMOVE!!!
     // Keeping track of Dofs in auxiliar line of MB if Symmetry==1
     Galerkin {  [  0*Dof{d d_a} , {d d_a} ]  ;
       In Rotor_Bnd_MBaux; Jacobian Vol; Integration I1; }

     // vérifier le sign !!!
     // pseudo-load -> depend on design variable (velocity)
     Galerkin { [ nu[ {d a} ] * {d a}, ETA[]*{d d_a} ] ; //fixme: sign
       In Domain ; Jacobian Vol ; Integration I1 ; }

     Galerkin { [ -nu[ {d a} ] * LV1[ br[] ], {d d_a} ] ;
       In DomainM ; Jacobian Vol ; Integration I1 ; }
   }
  }
 //-----------------------------------------------------------------
 // Adjoint weak formulation
 //-----------------------------------------------------------------
 // Compute the adjoint variable for a given design function
 // Apply this method if the nb. of design function <<< nb. of design variables 
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

      // adjoint load
      Galerkin { [ -dFdb[{d a}], {d lambda}] ;
                 In DomainFunc ; Jacobian Vol ; Integration I1 ; }

//      If(Flag_PerfType == BFIELD_ERROR) // F = Int((Br - Bref)^2)
//        Galerkin { [ -2.0*BradCoeff[]*({d a}*er[] - Btarget[])*er[], {d lambda}] ;
//                 In DomainFunc ; Jacobian Vol ; Integration I1 ; }
//      EndIf
//      If(Flag_PerfType == TORQUE_VAR) // F = (T/Tref - 1)^2
//       Galerkin {[-2.0*torqueVar[]*nu[{d a}]*torqueCoeff[]/
//                  Ttarget[]*(et[]*({d a}*er[]) ), {d lambda} ];
//         In DomainFunc ; Jacobian Vol ; Integration I1 ; } 
//       Galerkin { [ -2.0*torqueVar[]*nu[{d a}]*torqueCoeff[]/
//                   Ttarget[]*( er[]*({d a}*et[]) ), {d lambda} ];
//         In DomainFunc ; Jacobian Vol ; Integration I1 ; } 
//      EndIf
//      If(Flag_PerfType == COMPLIANCE) // F = Int_DO{nu*curl(A)^2}
//        Galerkin { [ -2.0*nu[{d a}]*{d a}, {d lambda} ] ;
//         In DomainFunc ; Jacobian Vol ; Integration I1 ; }
//      EndIf

   }
  }
 //-----------------------------------------------------------------
 // Sensitivity filtering
 //-----------------------------------------------------------------
 { Name Filt_sens ; Type FemEquation ;
    Quantity {
       { Name psi ; Type Local ; NameOfSpace H_psi;}
      }
    Equation {
       Galerkin { [ Dof{d psi}*Rmin^2.0, {d psi} ] ; 
                   In DomainOpt; Jacobian Vol ; Integration I1 ; }

       Galerkin { [ Dof{psi}, {psi} ] ; 
                   In DomainOpt; Jacobian Vol; Integration I1; }

       Galerkin { [ -prod_x_dC[], {psi} ] ; 
                   In DomainOpt; Jacobian Vol; Integration I1; }
      }
  }
}

Resolution {

  { Name OptimStep ;
    System {
        { Name A ; NameOfFormulation MagStaDyn_a_2D ; } //state variable
        { Name B ; NameOfFormulation AdjointFormulation ; } //adjoint variable
        { Name C ; NameOfFormulation DirectDerivFormulation ; }  //direct variable
        { Name D ; NameOfFormulation Filt_sens ; }
    }
    Operation {
     CreateDir["res/"];
     //-------------------------------------------------------------------
     If(Flag_AnalysisMethod == STATE) // state variable
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
     If(Flag_AnalysisMethod == AVM) // adjoint variable
       Printf["-- Compute Adjoint Variable --"];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
       InitMovingBand2D[MB];
       MeshMovingBand2D[MB];
       ReadSolution[A]; //Load state variable (potential vector)
       If(Flag_topopt)
         GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD]; 
       EndIf
       GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];
       // solve the adjoint problem for a given performance function
       InitSolution[B]; Generate[B]; Solve[B]; SaveSolution[A]; SaveSolution[B]; 
       PostOperation[Get_AdjointSystem];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
     //-------------------------------------------------------------------
     If(Flag_AnalysisMethod == DIR) // direct derivative of state variable
       Printf["-- Compute derivative of state Variable (velocity) --"];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[]] ];
       InitMovingBand2D[MB];
       MeshMovingBand2D[MB];
       ReadSolution[A]; //Load state variable (potential vector)
       GmshRead["res/velocity.pos", VELOCITY_FIELD];
       //Solve direct problem for a given velocity field (i.e. design variable)
       InitSolution[C]; Generate[C]; Solve[C]; SaveSolution[A];SaveSolution[C];
       PostOperation[Get_DirectVarDomSens_lie0];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
     //-------------------------------------------------------------------
     If(Flag_SensitivityMethod == FIXDOM_AVM) // adjoint method sens. - fixed mesh
       Printf["-- Compute AVM sensitivity analysis (fixed domain) --"];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
       ReadSolution[A];ReadSolution[B];//A and Lambda   
       GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
       GmshRead[StrCat[ResDir,"TorqueVarianceAllDom.pos"], TORQUE_VAR_FIELD];
       PostOperation[Get_AvmFixedDomSens];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
     //-------------------------------------------------------------------
     If(Flag_SensitivityMethod == VARDOM_AVM) //shape optimization derative (avm lie)
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[]] ];
       InitMovingBand2D[MB] ;
       MeshMovingBand2D[MB] ;
       ReadSolution[A];ReadSolution[B];//A and lambda
       GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
       PostOperation[Get_AvmVarDomSens_Lie];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
     //-------------------------------------------------------------------
     If(Flag_SensitivityMethod == VARDOM_DIR) //shape optimization derative (avm lie)
       Printf["-- Compute Direct Sensitivity Analysis --"];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
       InitMovingBand2D[MB];
       MeshMovingBand2D[MB];
       ReadSolution[A];ReadSolution[C];//A and deriv_A
       GmshRead[StrCat[ResDir,"velocity.pos"], VELOCITY_FIELD];
       PostOperation[Get_DirectVarDomSens_lie];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
     //-------------------------------------------------------------------
     If(Flag_SensitivityMethod == SEMI_AVM) // semi-analytic avm quantitys
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
     If(Flag_FilterMethod == SENS_FILT) // Filter sensitivity (only if TO)
       Printf["-- Filter Sensitivity --"];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[RotorPosition[] ]];
       GmshRead[StrCat[ResDir,"Sensitivity_DesVar.pos"], SENS_FIELD]; 
       Generate[D]; Solve[D]; SaveSolution[D];
       PostOperation[Get_FilteredSens];
       ChangeOfCoordinates[ NodesOf[Rotor_Moving], RotatePZ[-RotorPosition[] ]];
     EndIf
    }
  }
}

Include "optim_post.pro" ;




