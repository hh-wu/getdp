Group {
  DefineGroup[
    DomainM, DomainB, DomainS, DomainInf,
    DomainL, DomainNL,
    Surf_bn0, Surf_Inf,
    // Circuit coupling
    DomainZt_Cir, DomainSource_Cir,
    Resistance_Cir, Inductance_Cir, Capacitance_Cir, Diode_Cir,
    Capacitance1_Cir, Capacitance2_Cir
  ];

  DummyR = #54321 ; // dummy group (for being able to use Store's)
}

Function{
 DefineConstant[
    Val_Rint, Val_Rext,
    AxialLength = 1,
    SymmetryFactor = 1,
    Nb_max_iter = 50,
    relaxation_factor = 1,
    stop_criterion = 1e-5,
    reltol = 1e-7,
    abstol = 1e-5,
    Freq,
    T = 1/Freq, // Fundamental period in s
    time0 = 0,
    NbT = 1,
    timemax = NbT*T,
    NbSteps = 100,
    delta_time = T/NbSteps,
    FillFactor_Winding = {1, Name "Input/4Coil Parameters/3Fill factor",
      Highlight "AliceBlue", Visible 0},
    Factor_R_3DEffects = {1, Name "Input/4Coil Parameters/9fact", Label "3D factor",
      Highlight "AliceBlue", Visible 0},
    // Increasing the resistance by 50% == 1.5
    Flag_Degree_a=1,
    Flag_DomainCWithI = 0,
    Flag_CircuitCoupling = 0,
    Flag_NL = 0,
    Flag_PrintMaps =1,
    po = "Output/"
  ];

  // Macro myname
  // Return (NEW to define at the highest level)
  // Call in Resolution


  DefineFunction[
    dhdb_NL, dhdb, br, js0
    relaxation_function
    // Circuit coupling
    Resistance, Inductance, Capacitance
  ];

}

Printf("SymmetryFactor %g", SymmetryFactor);

Include "BH.pro"; // nonlinear BH caracteristic of magnetic material
Include "BH_anhysteretic.pro";
If(Flag_NL_law==NL_ENERGHYST)
  Include "param_EnergHyst.pro";
EndIf

Group {
  DomainB   = Region[ {Inds} ];

  If(Flag_Infinity)
    DomainInf = Region[ {AirInf} ];
  EndIf

  DomainCC = Region[ {Air, AirInf, Inds} ];
  DomainC  = Region[ { } ];

  If(!Flag_ConductingCore)
    DomainCC += Region[ {Core} ];
  EndIf
  If(Flag_ConductingCore)
    DomainC += Region[ {Core} ];
  EndIf

  Domain  = Region[ {DomainCC, DomainC} ];

  If(Flag_NL)
    DomainNL = Region[ {Core} ];
    DomainL  = Region[ {Domain,-DomainNL} ];
  EndIf
  DomainDummy = #12345 ; // Dummy region number for postpro with functions
}

Function {
  nu [#{Air, AirInf, Inds}]  = 1./mu0 ;

  If(!Flag_NL)
    nu [#{Core}]  = 1/(mur_fe*mu0) ;
  EndIf
  If(Flag_NL)

    // nu [ DomainNL ]      = nu_EIcore[$1] ;
    // dhdb_NL [ DomainNL ] = dhdb_EIcore_NL[$1];
    // dhdb [ DomainNL ]    = dhdb_EIcore[$1];

    If(Flag_NL_law==NL_ANA ) // Using analytical law
      h[DomainNL]         = h_1a[$1]; // $1 => b ={d a}
      dhdb[DomainNL]      = dhdb_1a[$1];
      nu[DomainNL] = nu_1a[$1] ;
      dhdb_NL[DomainNL]   = dhdb_1a_NL[$1];
    EndIf
    If(Flag_NL_law==NL_ANA_JA) //Using anhysteretic curve from Jiles-Atherton model
      h[DomainNL]    = h_anhys[$1];
      dhdb[DomainNL] = dhdb_anhys[$1];
      nu[DomainNL]   = nu_anhys[$1] ;
      dhdb_NL[DomainNL] = dhdb_anhys_NL[$1];
    EndIf
    // Else hysteresis
  EndIf

  sigma[#{Inds}] = sigma_coil ;
  sigma[#{Core}] = sigma_core ;

  rho[] = 1/sigma[] ;

  Rb[] = Factor_R_3DEffects*FillFactor_Winding*AxialLength*NbWires[]^2/SurfCoil[]/sigma[] ;

  Resistance[#{Inds}] = 2*Rwinding ; // estimation from measurements (otherwise, use Rb)

  relaxation_function[] = ($Iteration < 15) ? 1. : 0.2 ;
  //($TimeStep > nstep_00/10 && $Iteration < 30) ? 1. : 0.2 ;


    //EnergHyst+++------------------------------------------
    relax_max=relaxation_factor ;
    relax_min=0.1;
    relax_numtest=10;
    Flag_AdaptRelax=(relax_max==relax_min)?0:Flag_AdaptRelax;
    relax_step=(relax_numtest>1)?(relax_max-relax_min)/(relax_numtest-1):relax_min;


    Reltol_Mag= stop_criterion; // 0 before with IterativeLoopN
    Abstol_Mag= stop_criterion;
    Reltoldx_Mag= 1e-5*stop_criterion;
    Abstoldx_Mag= 1e-3*stop_criterion;

    RelaxFac_Lin = LinSpace[relax_max,relax_min,relax_numtest];
    RelaxFac_Log = LogSpace[0, -2,10];
    TestAllFactors =  TestAllFactors00; // 0 : garde celui qui fait diminuer le résidu le premier // c'est plutot : s'arrete au moment ou le résidu remonte !!
                                        // 1 : teste toutes les possibilités et cherche optimal

    If (relaxation_factor<=0)
      RF_tuned[]=(0.9/Nb_max_iter)*$Iteration+0.1;
    EndIf
    If (relaxation_factor>0) 
      RF_tuned[]=relaxation_factor;
    EndIf

  If(Flag_NLRes==NLRES_ITERATIVELOOPPRO)
    GetItLoopInfo[]=Tensor[$iter, $res, $res/$res0, $inc, $relax, $relaxcount, $relaxcounttot, $syscount, $dnccount];
  Else
    GetItLoopInfo[]=Tensor[$iter, $res, $resL, $resN, $relax, $relaxcount, $relaxcounttot, $syscount, $dnccount];
  EndIf
  //kj++e------------------------------------------------


}

//-------------------------------------------------------------------------------------

Jacobian {
  { Name Vol;
    Case {
      { Region DomainInf ; Jacobian VolSphShell{Val_Rint, Val_Rext} ; }
      { Region All ; Jacobian Vol; }
    }
  }
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

  { Name I1p ; Case {
      { Type Gauss ;
        Case {
          { GeoElement Triangle   ; NumberOfPoints  1 ; }
	  { GeoElement Quadrangle ; NumberOfPoints  1 ; }
	  { GeoElement Line       ; NumberOfPoints  1 ; }
        }
      }
    }
  }

}

//-------------------------------------------------------------------------------------

Constraint {

  { Name MVP_2D ;
    Case {
      { Region SurfaceGe0  ; Type Assign ; Value 0. ; }
      { Region SurfaceGInf ; Type Assign ; Value 0. ; }
    }
  }

  { Name Current_2D ;
    Case {
      If(!Flag_CircuitCoupling)
        { Region Ind_1 ; Value 1.; TimeFunction I1[];}
        { Region Ind_2 ; Value 1.; TimeFunction I2[];}
      EndIf
    }
  }

  { Name Voltage_2D ;
    Case {
      If(Flag_ConductingCore)
        { Region Core ; Value 0. ; }
      EndIf
    }
  }

}

If (Flag_CircuitCoupling)
Group {
  Ein1 = # 10000 ;
  R1   = # 10001 ;

  Ein2 = # 20000 ;
  R2  =  # 20001 ;

  Resistance_Cir  = Region[ {R1, R2} ] ;

  SourceV_Cir = Region[ {Ein1, Ein2} ] ;
  SourceI_Cir = Region[ {} ] ;


  DomainZ_Cir = Region[ {Resistance_Cir} ] ;
  DomainSource_Cir = Region[ {SourceV_Cir, SourceI_Cir} ] ;
  DomainZt_Cir = Region[ {DomainZ_Cir, DomainSource_Cir} ] ;
}

Function {
  Resistance[R1] = Rp + Rwinding ;
  Resistance[R2] = Rs + Rwinding ;
}


Constraint {

  { Name Current_Cir ;
    Case {
    }
  }

  { Name Voltage_Cir ;
    Case {
      { Region Ein1 ; Value val_Voltage1 ; TimeFunction I1[]; }
      { Region Ein2 ; Value val_Voltage2 ; TimeFunction I2[]; }
    }
  }

  { Name ElectricalCircuit ; Type Network ;
    Case Circuit1 {
      { Region Ein1 ; Branch {1,2} ; }
      { Region R1 ;   Branch {2,3} ; }
      { Region IndB~{1} ; Branch {3,4} ; }
      { Region IndA~{1} ; Branch {4,1} ; }
    }
    Case Circuit2 {
      { Region Ein2 ; Branch {1,2} ; }
      { Region R2   ; Branch {2,3} ; }
      { Region IndB~{2} ; Branch {3,4} ; }
      { Region IndA~{2} ; Branch {4,1} ; }
    }
  }

}

EndIf

//-----------------------------------------------------------------------------------------------

FunctionSpace {
  // Magnetic Vector Potential
  { Name Hcurl_a_2D ; Type Form1P ;
    BasisFunction {
      { Name se1 ; NameOfCoef ae1 ; Function BF_PerpendicularEdge ;
        Support Region[{Domain}] ; Entity NodesOf [ All ] ; }
      If (Flag_Degree_a == 2)
        { Name se2 ; NameOfCoef ae2 ; Function BF_PerpendicularEdge_2E ;
          Support Domain ; Entity EdgesOf[ All ] ; }
      EndIf
   }
    Constraint {
      { NameOfCoef ae1 ; EntityType NodesOf ; NameOfConstraint MVP_2D ; }
      If (Flag_Degree_a == 2)
	{ NameOfCoef ae2 ; // Only OK if homogeneous BC, otherwise specify zero-BC
          EntityType EdgesOf ; NameOfConstraint MagneticVectorPotential_2D ; }
      EndIf
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

  // UZ and IZ for impedances
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
      { NameOfCoef Uz ;
        EntityType Region ; NameOfConstraint Voltage_Cir ; }
      { NameOfCoef Iz ;
        EntityType Region ; NameOfConstraint Current_Cir ; }
    }
  }

  { Name H_hysteresis ; Type Vector;
    BasisFunction {
      { Name sex ; NameOfCoef aex ; Function BF_VolumeX ; Support Domain ; Entity VolumesOf[ Domain ] ; }
      { Name sey ; NameOfCoef aey ; Function BF_VolumeY ; Support Domain ; Entity VolumesOf[ Domain ] ; }
      { Name sez ; NameOfCoef aez ; Function BF_VolumeZ ; Support Domain ; Entity VolumesOf[ Domain ] ; }
    }
  }

// EnergHyst++b
  If(Flag_NL_law==NL_ENERGHYST)
    For iSub In {1:N}
    { Name Vect~{iSub} ; Type Vector;
      BasisFunction {
        { Name sex ; NameOfCoef aex ; Function BF_VolumeX ; Support Domain ; Entity VolumesOf[ Domain ] ; }
        { Name sey ; NameOfCoef aey ; Function BF_VolumeY ; Support Domain ; Entity VolumesOf[ Domain ] ; }
        { Name sez ; NameOfCoef aez ; Function BF_VolumeZ ; Support Domain ; Entity VolumesOf[ Domain ] ; }
      }
    }
    EndFor
  EndIf
// EnergHyst++e

}


//-----------------------------------------------------------------------------------------------

Formulation {

  { Name MagStaDyn_a_2D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a_2D ; }
      { Name ur ; Type Local  ; NameOfSpace Hregion_u_Mag_2D ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_Mag_2D [I] ; }
      { Name U  ; Type Global ; NameOfSpace Hregion_u_Mag_2D [U] ; }

      { Name ir ; Type Local  ; NameOfSpace Hregion_i_Mag_2D ; }
      { Name Ub ; Type Global ; NameOfSpace Hregion_i_Mag_2D [Ub] ; }
      { Name Ib ; Type Global ; NameOfSpace Hregion_i_Mag_2D [Ib] ; }

      If (Flag_CircuitCoupling)
        { Name Uz ; Type Global ; NameOfSpace Hregion_Z [Uz] ; }
        { Name Iz ; Type Global ; NameOfSpace Hregion_Z [Iz] ; }
      EndIf

      { Name h ; Type Local ; NameOfSpace H_hysteresis ; }

      // EnergHyst++b
      If(Flag_NL_law==NL_ENERGHYST)
        For iSub In {1:N}
          { Name J~{iSub}  ; Type Local ; NameOfSpace Vect~{iSub};}
        EndFor
        // EnergHyst++e
      EndIf
    }

    Equation {
      If(Flag_NL_law==NL_LIN || Flag_NL_law==NL_ANA || Flag_NL_law==NL_ANA_JA )
        Galerkin { [ nu[{d a}] * Dof{d a}  , {d a} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d a} ] ;
          In DomainNL ; Jacobian Vol ; Integration I1 ; }
      EndIf

      If(Flag_NL_law==NL_JA) //Hysteretical law with Jiles model
        Galerkin { [ nu[] * Dof{d a}  , {d a} ] ;
          In DomainL ; Jacobian Vol ; Integration I1 ; }

        // update h
        // saving h_Jiles in local quantity h
        // BF is constant per element (Vector + BF_Volume) => 1 integration point is enough
        Galerkin { [ Dof{h} , {h} ]  ;
          In DomainNL ; Jacobian Vol ; Integration I1p ; }
        Galerkin { [ -h_Jiles[ {h}[1]  , 
                               {d a}[1], 
                               {d a}    ]{List[hyst_FeSi]} , {h} ]  ;
          In DomainNL ; Jacobian Vol ; Integration I1p ; }

        // NL part ...
        Galerkin { [ Dof{h}, {d a} ] ; // register of Dof => idem
          In DomainNL ; Jacobian Vol ; Integration I1p ; }
        Galerkin { JacNL[ dhdb_Jiles[ {h}       , 
                                      {d a}     , 
                                      {h}-{h}[1] ]{List[hyst_FeSi]} * Dof{d a} , {d a} ] ;
          In DomainNL ; Jacobian Vol ; Integration I1p ; } // kj modif I1 --> I1p here

      EndIf

      // EnergHyst++b-----------------
      If(Flag_NL_law==NL_ENERGHYST ) //EnergHyst model law

        Galerkin { [ nu[] * Dof{d a} , {d a} ] ; 
          In DomainL ; Jacobian Vol ; Integration I1 ; }

        // update h
        // saving h_Vinch_K in local quantity h
        // BF is constant per element (Vector + BF_Volume) => 1 integration point is enough
        Galerkin { [  Dof{h}  , {h} ] ; 
          In DomainNL  ; Jacobian Vol ; Integration I1p ; } 
        Galerkin { [  - (SetVariable[(h_Vinch_K[  {h}[1]         , 
                                                  {d a}, {d a}[1],
                                                  {J_1}, {J_1}[1], 
                                                  {J_2}, {J_2}[1], 
                                                  {J_3}, {J_3}[1] ]{List[param_EnergHyst]}),
                                      QuadraturePointIndex[]]{$h_Vinch_temp}), {h} ] ; 
          In DomainNL  ; Jacobian Vol ; Integration I1p ; } 

        // update Jk
        // saving Update_Cell_K in local quantity Jk
        // BF is constant per element (Vector + BF_Volume) => 1 integration point is enough
        For iSub In {1:N}
          Galerkin { [ Dof{J~{iSub}} ,{J~{iSub}} ] ; 
            In DomainNL ; Jacobian Vol ; Integration I1p ; }
          Galerkin { [ - Update_Cell_K[ iSub         , 
                                        (GetVariable[QuadraturePointIndex[]]{$h_Vinch_temp}),
                                        {J~{iSub}}   , 
                                        {J~{iSub}}[1] ]{List[param_EnergHyst]}, {J~{iSub}} ] ; 
            In DomainNL ; Jacobian Vol ; Integration I1p ; }
        EndFor

        // NL part ...
        Galerkin { [ (GetVariable[ QuadraturePointIndex[]]{$h_Vinch_temp}), {d a} ];  
          In DomainNL  ; Jacobian Vol ; Integration I1p ; }
        
        If(Flag_NLRes!=NLRES_ITERATIVELOOPPRO)
          Galerkin { JacNL[ (dhdb_Vinch_K[ (GetVariable[ QuadraturePointIndex[]]{$h_Vinch_temp}),
                                            {J_1},{J_1}[1], 
                                            {J_2},{J_2}[1], 
                                            {J_3},{J_3}[1]]{List[param_EnergHyst]}) * Dof{d a} , {d a} ] ;  
            In DomainNL  ; Jacobian Vol ; Integration I1p ; }
        Else
          Galerkin { [ (1/$relax) * (SetVariable[(dhdb_Vinch_K[ (GetVariable[ QuadraturePointIndex[]]{$h_Vinch_temp}),
                                                                  {J_1},{J_1}[1], 
                                                                  {J_2},{J_2}[1], 
                                                                  {J_3},{J_3}[1]]{List[param_EnergHyst]}) , 
                                                  QuadraturePointIndex[]]{$dhdb_Vinch_temp}) * Dof{d a} , {d a} ];  
            In DomainNL  ; Jacobian Vol ; Integration I1p ; }
          Galerkin { [ -(1/$relax) * (GetVariable[QuadraturePointIndex[]]{$dhdb_Vinch_temp}) * {d a} , {d a} ];  
            In DomainNL  ; Jacobian Vol ; Integration I1p ; }     
        EndIf

      EndIf  
      // EnergHyst++e-----------------  

      Galerkin { [ -nu[] * br[] , {d a} ] ;
        In DomainM ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ sigma[] * Dof{ur}, {a} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }

      Galerkin { [ -js0[] , {a} ] ;
        In DomainS ; Jacobian Vol ; Integration I1 ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {ur} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      Galerkin { [ sigma[] * Dof{ur}/ CoefGeos[] , {ur} ] ;
        In DomainC ; Jacobian Vol ; Integration I1 ; }
      GlobalTerm { [ Dof{I}*(CoefGeos[]/Fabs[CoefGeos[]]) , {U} ] ; In DomainC ; }

      Galerkin { [ -NbWires[]/SurfCoil[] * Dof{ir} , {a} ] ;
        In DomainB ; Jacobian Vol ; Integration I1 ; }
      Galerkin { DtDof [ AxialLength * NbWires[]/SurfCoil[] * Dof{a} , {ir} ] ;
        In DomainB ; Jacobian Vol ; Integration I1 ; }
      GlobalTerm { [ Dof{Ub}/SymmetryFactor , {Ib} ] ; In DomainB ; }

      // Resistance of the winding
      //Galerkin { [ Rb[]/SurfCoil[]* Dof{ir} , {ir} ] ;
      //  In DomainB ; Jacobian Vol ; Integration I1 ; } // Resistance term

      // GlobalTerm { [ Resistance[]  * Dof{Ib} , {Ib} ] ; In DomainB ; } //=> included directly in circuit
      // The above term can replace the resistance term:
      // if we have an estimation of the resistance of DomainB, via e.g. measurements
      // which is better to account for the end windings...

      If (Flag_CircuitCoupling)
	GlobalTerm { NeverDt[ Dof{Uz}                , {Iz} ] ; In Resistance_Cir ; }
        GlobalTerm { NeverDt[ Resistance[] * Dof{Iz} , {Iz} ] ; In Resistance_Cir ; }

	GlobalTerm { [ Dof{Uz}                      , {Iz} ] ; In Inductance_Cir ; }
	GlobalTerm { DtDof [ Inductance[] * Dof{Iz} , {Iz} ] ; In Inductance_Cir ; }

	GlobalTerm { [ Dof{Iz}        , {Iz} ] ; In Capacitance1_Cir ; }
        GlobalTerm { NeverDt[ Dof{Iz} , {Iz} ] ; In Capacitance2_Cir ; } // Attention
	GlobalTerm { DtDof [ Capacitance[] * Dof{Uz} , {Iz} ] ; In Capacitance_Cir ; }

	GlobalTerm { NeverDt[ Dof{Uz}             , {Iz} ] ; In Diode_Cir ; }
	GlobalTerm { NeverDt[ Resistance[{Uz}] * Dof{Iz} , {Iz} ] ; In Diode_Cir ; }

	GlobalTerm { [ 0. * Dof{Iz} , {Iz} ] ; In DomainSource_Cir ; }

	GlobalEquation {
	  Type Network ; NameOfConstraint ElectricalCircuit ;
	  { Node {I};  Loop {U};  Equation {I};  In DomainC ; }
	  { Node {Ib}; Loop {Ub}; Equation {Ub}; In DomainB ; }
	  { Node {Iz}; Loop {Uz}; Equation {Uz}; In DomainZt_Cir ; }
	}
      EndIf
    }
  }

}

//-----------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

Resolution {

  { Name Analysis ;
    System {
      If(Flag_AnalysisType==AN_FREQUENCY)
        { Name A ; NameOfFormulation MagStaDyn_a_2D ; Type ComplexValue ; Frequency Freq ; }
      EndIf
      If(Flag_AnalysisType==AN_STATIC || Flag_AnalysisType==AN_TIME )
        { Name A ; NameOfFormulation MagStaDyn_a_2D ; }
      EndIf
    }
    Operation {
      CreateDir["res/"];
       For k In{1:2}
        DeleteFile[StrCat[Dir,"I1",ExtGnuplot]];
        DeleteFile[StrCat[Dir,"I2",ExtGnuplot]];
        DeleteFile[StrCat[Dir,Sprintf("hbp_%g",k),ExtGnuplot]];
        DeleteFile[StrCat[Dir,Sprintf("bx_%g",k),ExtGnuplot]];
        DeleteFile[StrCat[Dir,Sprintf("by_%g",k),ExtGnuplot]];
        DeleteFile[StrCat[Dir,Sprintf("hx_%g",k),ExtGnuplot]];
        DeleteFile[StrCat[Dir,Sprintf("hy_%g",k),ExtGnuplot]];
        DeleteFile[StrCat[Dir, StrCat["ItLoopInfo",ExtGnuplot]]];
      EndFor

    // set some runtime variables
    Evaluate[$syscount = 0];
    Evaluate[$relaxcounttot=0];
    Evaluate[$relaxcount=0];
    Evaluate[$dnccount=0];

    // initialize the solution (initial condition)
    InitSolution[A] ; 
    
    If(Flag_AnalysisType==AN_TIME )
      SaveSolution A ; 

      // enter implicit Euler time-stepping loop
      TimeLoopTheta[time0, timemax, delta_time, 1.]{ // Euler implicit (1) -- Crank-Nicolson (0.5)
    EndIf
     
    If(!Flag_NL)
      Generate[A] ; Solve[A] ; Evaluate[ $syscount = $syscount + 1 ]; SaveSolution[A] ;
    EndIf
    
    If(Flag_NL) 

      Evaluate[$relax=relax_max];

        //***************************************
        // I T E R A T I V E . L O O P . P R O
        //***************************************
        If(Flag_NLRes==NLRES_ITERATIVELOOPPRO)

          // Initializing registers to zero (no more use)
          //Evaluate[Vector[0.,0.,0.]#66]; 
          //Evaluate[Tensor[0.,0.,0.,0.,0.,0.,0.,0.,0.]#135]; 

          // Initialized dummy values to start the while loop
          Evaluate[ $res0 = 1e10*Abstol_Mag ,
                    $res  = $res0,  
                    $inc  = 1e10*Abstoldx_Mag ,
                    $sol  = $inc, 
                    $iter = 0]; // Iter starts at 1 with IterativeLoop and IterativeLoopN 

          Test[Flag_AdaptRelax==1]{
            CopySolution[A,'x_Prev']; //SET : save solution from the previous converged time step at iter 0
            Evaluate[ $res_Prev=$res,
                      $relax_Opt=$relax];   
          }
          {
            // generate needed before solve in the loop
            // needed here in the case when Flag_AdaptRelax==0 because not in the loop
            // but not needed here in the case when Flag_AdaptRelax==1 because generate is in the loop to take the change of $relax into account
            Generate[A]; 
          }
          // iterate until convergence
          While[  $res > Abstol_Mag && 
                  $res / $res0 > Reltol_Mag &&
                  $res / $res0 <= 1 &&
                  $inc > Abstoldx_Mag &&
                  $inc/$sol > Reltoldx_Mag &&
                  $iter < Nb_max_iter ]
          {
            Evaluate[ $iter = $iter + 1 ]; // Iter starts at 1 with IterativeLoop and IterativeLoopN so +1 needed here
            // if adapted relaxation is activated 
            Test[Flag_AdaptRelax==1]
            {
              Evaluate[$redo=1, $relax=relax_max, $res_Prev=$res, $relaxcount=0];

              While[ $relax>relax_min-relax_step/2 &&
                     $redo>0 ]
              // while all relaxation factor have not been tested yet 
              {
                CopySolution['x_Prev',A]; //RESET: reload solution from the previous converged iteration
                Generate[A]; // absolutely needed to take the change of $relax into account!
                Solve[A]; Evaluate[ $syscount = $syscount + 1, $relaxcount=$relaxcount+1, $relaxcounttot=$relaxcounttot+1 ];
                Generate[A]; 
                GetResidual[A, $res]; //Check the new residual 

                // compute first residual at step $TimeStep
                Test[$iter==0 && $relax==relax_max]{
                  Evaluate[ $res0=$res, 
                            $res_Prev=$res, 
                            $relax_Opt=$relax ];
                  CopySolution[A,'x_Opt']; //SET : save actual solution as the optimal one}  
                }             
                           
                /* // If one wants to be more verbose
                Print[{$TimeStep, $iter, $res, $res/$res0, $inc, $relax, ($res < $res_Prev ), $relaxcount}, Format
                  "ts=%05g, it=%03g, abs=%1.5e, rel=%1.5e, dx=%1.5e, relax = %1.1g, (better? %g), relaxcount=%02g"];
                //*/

                // if the residual has decreased
                Test[ ($res < $res_Prev ) || $relax>relax_max-relax_step/2 ]{    
                  CopySolution[A,'x_Opt']; //SET : save actual solution as the optimal one
                  Evaluate[$res_Prev=$res];
                  Evaluate[$relax_Opt=$relax];                     
                }
                { // otherwise, if the residual has not decreased... 
                  // and if you don't want to check All Factors: Break the try loop prematurely
                  Test[  TestAllFactors==0 ] { Evaluate[$redo=0]; }
                }
                // try with another relaxation factor ... 
                Evaluate[$relax=$relax-relax_step];
              }
              CopySolution['x_Opt',A]; //RESET : reload optimal solution
              CopySolution[A,'x_Prev']; //SET : save solution from the previous converged iteration              
              Evaluate[$relax=$relax_Opt];
              Evaluate[$res=$res_Prev];
            }

            // ... otherwise, if adapted relaxation is not activated 
            {
              Solve[A]; 
              Evaluate[ $syscount = $syscount + 1, $relaxcount=1, $relaxcounttot=$relaxcounttot+1 ];
              Generate[A]; GetResidual[A, $res]; 
              // compute first residual at step $TimeStep
              Test[$iter==0]{Evaluate[$res0=$res];} 
            }

            GetNormIncrement[A, $inc]; //Check the new increment
            GetNormSolution[A, $sol]; //Check the new solution
            Print[{$TimeStep, $iter, $res, $res/$res0, $inc, $relax, $relaxcount}, Format
              "*** ts=%05g, it=%03g, abs=%1.5e, rel=%1.5e, dx=%1.5e, relaxopt = %1.3g, relaxcount=%02g ***"];
            PostOperation[PostOpItLoop_a];
          }
        //***************************************
        //***************************************
        Else
          // iterate until convergence
          //***************************************
          // I T E R A T I V E . L O O P 
          //***************************************
          If(Flag_NLRes==NLRES_ITERATIVELOOP)
            IterativeLoop[ Nb_max_iter, stop_criterion, RF_tuned[]] {
          EndIf
          //***************************************
          // I T E R A T I V E . L O O P . N
          //***************************************
          If(Flag_NLRes==NLRES_ITERATIVELOOPN)
            IterativeLoopN[ Nb_max_iter, RF_tuned[],
              //*****Choose between one of the 3 following possibilities:*****
              //System { { A , Reltol_Mag, Abstol_Mag, Residual MeanL2Norm }} ]{ //1)
              //PostOperation { { a_only , Reltol_Mag, Abstol_Mag,  MeanL2Norm }} ]{ //2)
              //PostOperation { { b_only , Reltol_Mag, Abstol_Mag,  MeanL2Norm }} ]{ //3) b_only seems better
              PostOperation { { a_h_only , Reltol_Mag, Abstol_Mag,  MeanL2Norm }} ]{ //4) 
              //**************************************************************

                // NB: Residual is calculated in ItLoopN with ItLoopN 
                // and calculated in SolveJac(Adapt) with clasical ItLoop so we need to seperate the case like that:         
                Evaluate[$res  = $ResidualN_kj, $resL = $Residual,$resN = $ResidualN_kj,$iter = $Iteration-1]; 
                Test[ $iter>0]{
                  Print[{$TimeStep, $iter, $res, $resL, $resN, $relax, $relaxcount,$relaxcounttot, $syscount}, Format
                  "*** ts=%05g, it=%03g, res_used=%1.5e, (res = %1.5e, resN=%1.5e), relaxopt = %1.3g, relaxcount=%02g ***"];
                  PostOperation[PostOpItLoop_a];
                }
          EndIf
          //***************************************
              GenerateJac[A] ; 

              //*****Choose between one of the 2 following possibilities:*****
              If (!Flag_AdaptRelax)
                SolveJac[A] ;                                                //1) 
                Evaluate[$relaxcount=1];
              Else
                SolveJac_AdaptRelax[A, List[RelaxFac_Lin],TestAllFactors ] ; //2)
                Evaluate[$relaxcount=$NbrTestedFac_kj];
              EndIf
              //************************************************************** 

              /*//*///-----------  Print Residual Map ----------- 
              /*//*/ Test[ (Flag_IterPrintRes && $iter > Flag_IterPrintRes) ] {   
              /*//*/  Evaluate[$monindex=$TimeStep*100+$iter];
              /*//*/  //GetResidual[A,$dumbres]; Print[{$dumbres}, Format "*** dumbres=%1.5e ***"];                   
              /*//*/  SwapSolutionAndResidual[A];                     
              /*//*/  SaveSolution[A];                                 
              /*//*/  PostOperation[postop_res];                      
              /*//*/  SwapSolutionAndResidual[A];
              /*//*/ }                 
              /*//*/ //--------------------------------------------

              
              Evaluate[ $syscount = $syscount + 1 ];
              Evaluate[ $relaxcounttot=$relaxcounttot+$relaxcount];
              Evaluate[$relax= $RelaxFac_kj];
              // NB: Residual is calculated in ItLoopN with ItLoopN 
              // and calculated in SolveJac(Adapt) with clasical ItLoop so we need to seperate the case like that:
              If(Flag_NLRes==NLRES_ITERATIVELOOP)
                  Evaluate[$res  = $Residual, $resL = $Residual,$resN = $ResidualN_kj, $iter = $Iteration];
                  Print[{$TimeStep, $iter, $res, $resL, $resN, $relax, $relaxcount,$relaxcounttot, $syscount}, Format
                  "*** ts=%05g, it=%03g, res_used=%1.5e, (res = %1.5e, resN=%1.5e), relaxopt = %1.3g, relaxcount=%02g ***"];
                  PostOperation[PostOpItLoop_a];
              EndIf
              Test[ $iter==1]{ Evaluate[$res0=$res]; } 
            }
          // NB: Residual is calculated in ItLoopN with ItLoopN 
          // and calculated in SolveJac(Adapt) with clasical ItLoop so we need to seperate the case like that:
          If(Flag_NLRes==NLRES_ITERATIVELOOPN)
            Evaluate[$res  = $ResidualN_kj, $resL = $Residual, $resN = $ResidualN_kj, $iter = $iter+1];           
            Print[{$TimeStep, $iter, $res, $resL, $resN, $relax, $relaxcount,$relaxcounttot, $syscount}, Format
            "*** ts=%05g, it=%03g, res_used=%1.5e, (res = %1.5e, resN=%1.5e), relaxopt = %1.3g, relaxcount=%02g ***"];
            PostOperation[PostOpItLoop_a];            
          EndIf
        EndIf
        //***************************************
        //***************************************

        If(!Flag_FlexibleDT)
          Test[ !($iter < Nb_max_iter) ]{
            Print[{$Time, $TimeStep, $DTime, $relax, $iter}, Format
              "*** Non convergence at Theta Time = %g s (TimeStep %g, DTime %g, relax %g) (iter %g)"];
            Print["--> Save bad solution and move to the next time step"];
            Evaluate[$dnccount=$dnccount+1];
          }
          SaveSolution[A] ;
          //PostOperation[Map_Vinch2D_per_timestep];
        EndIf

        If(Flag_FlexibleDT)
          // save and visualize the solution if converged...
          Test[ $iter < Nb_max_iter && $res / $res0 <= 1 ]{
            SaveSolution[A];

            // increase the step if we converged sufficiently "fast"
            Test[ $iter < Nb_max_iter / 4 && $DTime < val_stepMax  ]{ //when the convergence is sufficiently "fast"
              Evaluate[ $dt_new = Min[$DTime * 1.5, val_stepMax] ];
              Print[{$dt_new}, 
                Format "*** Fast convergence: increasing time step to %g"];
              SetDTime[$dt_new];
            }
          }
          // ...otherwise reduce the time step if not too small and try again
          {
            Print[{$Time, $TimeStep, $DTime, $relax, $iter}, Format
              "*** Non convergence at Theta Time = %g s (TimeStep %g, DTime %g, relaxfac %g) (iter %g)"];
            Evaluate[ $dt_new = $DTime / 3 ];
            Test [$dt_new > val_stepMin]
            {
              Print[{$dt_new}, Format
                ">>> Recomputing with reduced time step %g"];
              SetTime[$Time - $DTime];
              SetTimeStep[$TimeStep - 1];
              RemoveLastSolution[A];
              SetDTime[$dt_new];
            }
            {
              Print[">>> DTime is already too small --> Save bad solution and move to the next time step"];
              Evaluate[$dnccount=$dnccount+1];
              SaveSolution[A];
            }
          }
        EndIf

    EndIf
    

      If(Flag_AnalysisType==AN_TIME)
          PostOperation[Get_LocalFields] ;
          Test[ $TimeStep > 1 ]{
            PostOperation[Get_GlobalQuantities];
          }
      }
      Print[{$syscount}, Format "Total number of linear systems solved: %g"];
      Print[{$relaxcounttot}, Format "Total number of relaxation factor tested: %g"];
      Print[{$dnccount}, Format "Total number of non converged TimeStep: %g"];
      Else
        PostOperation[Get_LocalFields] ;
        PostOperation[Get_GlobalQuantities] ;
      EndIf

/*
// OLD VERSION----------------------------------------------------------------
      InitSolution[A] ;
      If(Flag_AnalysisType==AN_STATIC || Flag_AnalysisType==AN_FREQUENCY )
        If(!Flag_NL)
          Generate[A] ; Solve[A] ;
        EndIf
        If(Flag_NL)
          IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
            GenerateJac[A] ; SolveJac[A] ; }
        EndIf
        SaveSolution[A] ;
        PostOperation[Get_LocalFields] ;
        PostOperation[Get_GlobalQuantities] ;
      EndIf // End Flag_AnalysisType==0 (Static) Flag_AnalysisType==2 (Frequency)

      If(Flag_AnalysisType==AN_TIME)
        InitSolution[A] ;
        TimeLoopTheta[time0, timemax, delta_time, 1.]{ // Euler implicit (1) -- Crank-Nicolson (0.5)
          If(!Flag_NL)
            Generate[A]; Solve[A];
          EndIf
          If(0&&Flag_NL)
            IterativeLoop[Nb_max_iter, stop_criterion, relaxation_function[]] {
              GenerateJac[A] ; SolveJac[A] ; }
          EndIf
          If(Flag_NL)
              GenerateJac[A] ;
              SolveNL[A] ;
          EndIf
          SaveSolution[A];

          PostOperation[Get_LocalFields] ;
          Test[ $TimeStep > 1 ]{
            PostOperation[Get_GlobalQuantities];
          }
        }
      EndIf // End Flag_AnalysisType==1 (Time domain)
//---------------------------------------------------------------------------
*/

    }
  }
}

//-----------------------------------------------------------------------------------------------

PostProcessing {

  { Name MagStaDyn_a_2D ; NameOfFormulation MagStaDyn_a_2D ;
    PostQuantity {
      { Name a  ; Value { Term { [ {a} ] ; In Domain ; Jacobian Vol ; } } }
      { Name az ; Value { Term { [ CompZ[{a}] ] ; In Domain ; Jacobian Vol ; } } }

      { Name b  ; Value { Term { [ {d a} ] ; In Domain ; Jacobian Vol ; } } }
      { Name bx ; Value { Term { [ CompX[{d a}] ]   ; In Domain ;  Jacobian Vol ;} } }
      { Name by ; Value { Term { [ CompY[{d a}] ]   ; In Domain ;  Jacobian Vol ;} } }

      { Name nb  ; Value { Term { [ Norm[{d a}] ] ; In Domain ; Jacobian Vol ; } } }
      { Name br ; Value { Term { [ br[] ] ; In DomainM ; Jacobian Vol ; } } }

      If(Flag_NL_law < 3)
        { Name h ; Value { Term { [ nu[{d a}] * {d a} ] ; In Domain ; Jacobian Vol ; } } }
      EndIf
      If(Flag_NL_law >= 3 )
        { Name h ; Value {
            Term { [ nu[{d a}] * {d a} ] ; In DomainL ; Jacobian Vol ; }
            Term { [ {h} ] ; In DomainNL ; Jacobian Vol ; }
          }
        }

        { Name hx ; Value { Term { [ CompX[{h}] ]   ; In DomainNL ;  Jacobian Vol ;} } }
        { Name hy ; Value { Term { [ CompY[{h}] ]   ; In DomainNL ;  Jacobian Vol ;} } }
        { Name hb ; Value { Term { [ TensorSym[
                  CompX[{h}],  CompY[{h}],  0.,
                  CompX[{d a}],CompY[{d a}],0.] ]  ; In DomainNL ;  Jacobian Vol ;} } }
      EndIf

      { Name js0 ; Value { Term { [ js0[] ] ; In DomainS ; Jacobian Vol ; } } }

      { Name j  ; Value {
          Term { [ -sigma[]*(Dt[{a}]+{ur}) ]        ; In DomainC ; Jacobian Vol ; }
        }
      }

      { Name ir ; Value { Term { [ {ir} ] ; In Inds ; Jacobian Vol ; } } }

      { Name jz ; Value {
          Term { [ CompZ[-sigma[]*(Dt[{a}]+{ur})] ]       ; In DomainC ; Jacobian Vol ; }
        }
      }

      { Name dhdb ; Value {
          Term { [ dhdb[{d a}] ] ; In DomainNL ; Jacobian Vol ; }
        }
      }

      { Name rhoj2 ;
        Value {
          Term { [ sigma[]*SquNorm[ Dt[{a}]+{ur}] ] ; In Region[{DomainC}] ; Jacobian Vol ; }
          // Term { [ 1./sigma[]*SquNorm[ IA[]*{ir} ] ] ; In Inds  ; Jacobian Vol ; }
        }
      }

      { Name JouleLosses ;
        Value {
          Integral { [ SymmetryFactor*AxialLength*sigma[] * SquNorm[ Dt[{a}]+{ur} ] ];
            In Region[{DomainC}] ; Jacobian Vol ; Integration I1 ; }
          // Integral { [ SymmetryFactor*AxialLength/sigma[]*SquNorm[ IA[]*{ir} ] ];
          //  In Inds  ; Jacobian Vol ; Integration I1 ; }
        }
      }

      { Name MagEnergy ; Value {
          If(Flag_NL_law != 3)
            Integral { [ SymmetryFactor*AxialLength* 1/2 *nu[{d a}]*{d a}*{d a} ] ;
              In Domain ; Jacobian Vol ; Integration I1 ; }
          EndIf
          If(Flag_NL_law == 3)
            Integral { [ SymmetryFactor*AxialLength* 1/2 *nu[]*{d a}*{d a} ] ;
              In DomainL ; Jacobian Vol ; Integration I1 ; }
            Integral { [ SymmetryFactor*AxialLength* 1/2 * {h} *{d a} ] ;
              In DomainNL ; Jacobian Vol ; Integration I1 ; }
          EndIf
        } }

      { Name Flux ; Value {
          Integral { [ SymmetryFactor*AxialLength*Idir[]*NbWires[]/SurfCoil[]* CompZ[{a}] ] ;
            In Inds  ; Jacobian Vol ; Integration I1 ; }
        }
      }

      { Name ComplexPower ; // S = P + i*Q
        Value {
          Integral { [ Complex[ sigma[]*SquNorm[Dt[{a}]+{ur}], nu[]*SquNorm[{d a}] ] ] ;
            In Region[{DomainC}] ; Jacobian Vol ; Integration I1 ; }
        }
      }

      { Name U ; Value {
          Term { [ {U} ]   ; In DomainC ; }
          Term { [ {Ub} ]  ; In DomainB ; }
          If(Flag_CircuitCoupling)
            Term { [ {Uz} ]  ; In DomainZt_Cir ; }
          EndIf
        }
      }

      { Name I ; Value {
          Term { [ {I} ]   ; In DomainC ; }
          Term { [ {Ib} ]  ; In DomainB ; }
          If(Flag_CircuitCoupling)
            Term { [ {Iz} ]  ; In DomainZt_Cir ; }
          EndIf
        }
      }

      { Name S ; Value {
          Term { [ {U}*Conj[{I}] ]    ; In DomainC ; }
          Term { [ {Ub}*Conj[{Ib}] ]  ; In DomainB ; }
          If(Flag_CircuitCoupling)
            Term { [ {Uz}*Conj[{Iz}] ]   ; In DomainZt_Cir ; }
          EndIf
        }
      }

    }//PostQuantity
  }// MagStaDyn_a_2D
}// PostProcessing


//-----------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

PostOperation Get_LocalFields UsingPost MagStaDyn_a_2D {
  If(Flag_PrintMaps)
    //Print[ ir, OnElementsOf Inds,   File StrCat[Dir,"ir",ExtGmsh], LastTimeStepOnly ] ;
    Print[ az, OnElementsOf Domain, File StrCat[Dir,"a",ExtGmsh], LastTimeStepOnly ];
    Print[ b,  OnElementsOf Domain, File StrCat[Dir,"b",ExtGmsh], LastTimeStepOnly ] ;
    //Print[ nb,  OnElementsOf Domain, File StrCat[Dir,"nb",ExtGmsh], LastTimeStepOnly ] ;
    //Print[ dhdb, OnElementsOf DomainNL, File StrCat[Dir,"dhdb",ExtGmsh], LastTimeStepOnly ];
  EndIf
  If(Flag_NL_law == 3)

    For k In {1:2}
      Print[ bx, OnPoint {0,ypos~{k},0}, Format TimeTable, LastTimeStepOnly,
        File > StrCat[Dir,Sprintf("bx_%g",k),ExtGnuplot], SendToServer StrCat[po,"bx [T]"], Color "LightYellow" ];
      Print[ by, OnPoint {0,ypos~{k},0}, Format TimeTable, LastTimeStepOnly,
        File > StrCat[Dir,Sprintf("by_%g",k),ExtGnuplot], SendToServer StrCat[po,"by [T]"], Color "LightYellow" ];
      Print[ hx, OnPoint {0,ypos~{k},0}, Format TimeTable, LastTimeStepOnly,
        File > StrCat[Dir,Sprintf("hx_%g",k),ExtGnuplot], SendToServer StrCat[po,"hx [A\m]"], Color "LightYellow" ];
      Print[ hy, OnPoint {0,ypos~{k},0}, Format TimeTable, LastTimeStepOnly,
        File > StrCat[Dir,Sprintf("hy_%g",k),ExtGnuplot], SendToServer StrCat[po,"hy [A\m]"], Color "LightYellow" ];

      Print[ hb, OnPoint {0,ypos~{k},0}, Format TimeTable, LastTimeStepOnly,
        File > StrCat[Dir,Sprintf("hbp_%g",k),ExtGnuplot] ];
    EndFor

  EndIf
}

PostOperation Get_GlobalQuantities UsingPost MagStaDyn_a_2D {
  Print[ I, OnRegion IndA_1, Format Table,
    File > StrCat[Dir,"I1",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"20I1 [A]"], Color "LightYellow" ];
  Print[ I, OnRegion IndA_2, Format Table,
    File > StrCat[Dir,"I2",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"20I2 [A]"], Color "LightYellow" ];

   Print[ U, OnRegion IndA_1, Format Table,
    File > StrCat[Dir,"U1",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"30U1 [V]"], Color "LightYellow" ];
  Print[ U, OnRegion IndA_2, Format Table,
    File > StrCat[Dir,"U2",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"30U2 [V]"], Color "LightYellow" ];

  /*
  Print[ I, OnRegion R1, Format Table,
    File > StrCat[Dir,"I1r",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"20I1 [A]"], Color "LightYellow" ];
  Print[ I, OnRegion R2, Format Table,
    File > StrCat[Dir,"I2r",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"20I2 [A]"], Color "LightYellow" ];

  Print[ Flux[Inds], OnGlobal, Format TimeTable,
    File > StrCat[Dir,"Flux",ExtGnuplot], LastTimeStepOnly, Store 11,
    SendToServer StrCat[po,"40Flux [Wb]"],  Color "LightYellow" ];

  Print[ MagEnergy[Domain], OnGlobal, Format TimeTable,
    File > StrCat[Dir,"ME",ExtGnuplot], LastTimeStepOnly, Store 22,
    SendToServer StrCat[po,"41Magnetic Energy [W]"],  Color "LightYellow" ];
    */
  }


PostOperation Get_AllTS UsingPost MagStaDyn_a_2D {
  Print[ az, OnElementsOf Domain, File StrCat[Dir,"a_all",ExtGmsh] ];
  Print[ b,  OnElementsOf Domain, File StrCat[Dir,"b_all",ExtGmsh] ];
  Print[ h,  OnElementsOf Domain, File StrCat[Dir,"h_all",ExtGmsh] ];

  If(Flag_NL_law == 3)
    For k In {1:2}
      Print[ hb, OnPoint {0,ypos~{k},0}, Format TimeTable, File StrCat[Dir,Sprintf("hbp_%g_all",k),ExtGnuplot] ];
    EndFor
  EndIf

  Print[ I, OnRegion IndA_1, Format Table, File StrCat[Dir,"I1_all",ExtGnuplot] ];
  Print[ I, OnRegion IndA_2, Format Table, File StrCat[Dir,"I2_all",ExtGnuplot] ];
}

PostOperation {

  { Name postop_res ; NameOfPostProcessing MagStaDyn_a_2D ; LastTimeStepOnly;
    Operation {
        Print[ az,  OnElementsOf Domain, File StrCat[Dir, "map_res/snap"], AppendExpressionToFileName $monindex, AppendExpressionFormat "%07g.pos"] ;
     }
  } 

  { Name az_only ; NameOfPostProcessing MagStaDyn_a_2D ;
    Operation {
        Print[ az,  OnElementsOf Domain, File StrCat[Dir, "az_only", ExtGmsh] ] ;
     }
  } 

  { Name b_only ; NameOfPostProcessing MagStaDyn_a_2D ;
    Operation {
        Print[ b,  OnElementsOf Domain, File StrCat[Dir, "b_only", ExtGmsh] ] ;
     }
  } 

  { Name a_h_only ; NameOfPostProcessing MagStaDyn_a_2D ;
    Operation {
        Print[ h,  OnElementsOf Domain, File StrCat[Dir, "a_h_only", ExtGmsh] ] ;
     }
  }
}


// To Print Info about Convergence 
PostProcessing {

  { Name MonPostPro_ItLoop_a ; NameOfFormulation MagStaDyn_a_2D ; 
    PostQuantity {
      { Name ItLoop_a ; Value { Term { Type Global; [  GetItLoopInfo[]];  In DummyR ;  } } }
    }
  }
}
   
PostOperation {

  { Name PostOpItLoop_a ; NameOfPostProcessing MonPostPro_ItLoop_a ; LastTimeStepOnly ;
    Operation {
      Print[ ItLoop_a, OnRegion DummyR, Format Table, 
              File > StrCat[Dir, StrCat["ItLoopInfo",ExtGnuplot]] ] ;  
    }
  }
}


DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
