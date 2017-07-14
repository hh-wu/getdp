// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Group {
  DefineGroup[
    Domain, DomainCC, DomainC, DomainL, DomainNL,
    DomainS, DomainB, DomainInf,
    SkinDomainC,
    Surf_elec, Surf_bn0, Surf_Inf, Surf_FixedMVP
    // Circuit coupling
    DomainZt_Cir, DomainSource_Cir,
    Resistance_Cir, Inductance_Cir, Capacitance_Cir, Diode_Cir,
    Capacitance1_Cir, Capacitance2_Cir
  ] ;
}


Function {
  DefineFunction[
    mu, nu, sigma, rho, js, dhdb_NL
    // Circuit coupling
    Resistance, Inductance, Capacitance
  ] ;

  DefineConstant[
    Val_Rint, Val_Rext,
    SymmetryFactor = 1,
    Nb_max_iter = 100,
    relaxation_factor = 1,
    stop_criterion = 1e-5,
    reltol = stop_criterion/1000, //0.,
    abstol = stop_criterion,
    Freq, T = 1/Freq, // Fundamental period in s
    time0 = 0,
    NbT = 1,
    timemax = NbT*T,
    NbSteps = 100,
    delta_time = T/NbSteps,
    Nbr_DomainB = 0,
    II, VV,
    Flag_NL = 0,
    po = "Output3D/"
  ] ;

}
Include "BH.pro"; // nonlinear BH caracteristic of magnetic material
Include "BH_anhysteretic.pro";
If(Flag_NL_law==NL_ENERGHYST)
  Include "param_EnergHyst.pro";
EndIf

Group {

  DomainB = Region[ {Inds} ];
  DomainS = Region[ {} ];
  DomainCC = Region[ {Air, AirInf, Inds} ];

  //--------------------------------------------------------------
  Nbr_DomainB = 2 ; // Number of stranded inductors
  // Domains for source field computation
  For k In {1:Nbr_DomainB}
    DomainB~{k}     = Region[ {Ind~{k}} ];
    SurfaceCutB~{k} = Region[ {CutInd~{k}} ] ;
    SkinDomainB~{k} = Region[ {SkinInd~{k}} ] ;
    SkinDomainB2~{k}= Region[ {SkinHole~{k}} ] ;
    DomainCC2~{k}   = Region[ {VolInInd~{k}} ] ; // Min=transition layer for cut
  EndFor

  //DomainS = Region[ {} ];
  //DomainCC += Region[ {DomainS, DomainB} ];

  //--------------------------------------------------------------

  If(Flag_Infinity)
    DomainInf = Region[ {AirInf} ];
  EndIf

  DomainC  = Region[ { } ];

  If(!Flag_ConductingCore)
    DomainCC += Region[ {Core} ];
  EndIf
  If(Flag_ConductingCore)
    DomainC += Region[ {Core} ];
  EndIf

  Surf_FixedMVP = Region[{ Surf_bn0, SurfaceGInf }];

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

    If(Flag_NL_law==NL_ANA) // Using analytical law
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
  rho[] = 1/sigma[] ;

  Resistance[#{Inds}] = Rwinding ; // estimation from measurements (otherwise, use Rb)

  relaxation_function[] = ($Iteration < Nb_max_iter/5) ? 0.9 : 0.1 ;
  //($TimeStep > nstep_00/10 && $Iteration < 30) ? 1. : 0.2 ;
}

Function{
/*
    relax_max=relaxation_factor ;
    relax_min=0.1;
    relax_numtest=10;
    Reltol_Mag= stop_criterion; // 0 before with IterativeLoopN
    Abstol_Mag= stop_criterion;
    Reltoldx_Mag= 1e-5*stop_criterion;
    Abstoldx_Mag= 1e-3*stop_criterion;
    TestAllFactors =  TestAllFactors00; // 0 : garde celui qui fait diminuer le résidu le premier // c'est plutot : s'arrete au moment ou le résidu remonte !!
                                        // 1 : teste toutes les possibilités et cherche optimal
*/
    Flag_AdaptRelax=(relax_max==relax_min)?0:Flag_AdaptRelax;
    relax_step=(relax_numtest>1)?(relax_max-relax_min)/(relax_numtest-1):relax_min;
    RelaxFac_Lin = LinSpace[relax_max,relax_min,relax_numtest];
    RelaxFac_Log = LogSpace[0, -2,10];
    If (relaxation_factor<=0)
      RF_tuned[]=(0.9/Nb_max_iter)*$Iteration+0.1;
    EndIf
    If (relaxation_factor>0) 
      RF_tuned[]=relaxation_factor;
    EndIf
}


// --------------------------------------------------------------------------

Jacobian {
  { Name Vol ;
    Case { { Region DomainInf ; Jacobian VolSphShell {Val_Rint, Val_Rext} ; }
           { Region All ;       Jacobian Vol ; }
    }
  }
  { Name Sur ;
    Case { { Region All ; Jacobian Sur ; }
    }
  }
}

Integration {
  { Name II ;
    Case {
      {
	Type Gauss ;
	Case {
	  { GeoElement Triangle    ; NumberOfPoints  4 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
	  { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
	  { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
	  { GeoElement Prism       ; NumberOfPoints  21 ; }
	  { GeoElement Line        ; NumberOfPoints  4 ; }
	}
      }
    }
  }
  { Name II1p ;
    Case {
      {
        Type Gauss ;
        Case {
	  { GeoElement Triangle    ; NumberOfPoints  1 ; }
          { GeoElement Quadrangle  ; NumberOfPoints  1 ; }
          { GeoElement Tetrahedron ; NumberOfPoints  1 ; }
          { GeoElement Hexahedron  ; NumberOfPoints  1 ; }
          { GeoElement Prism       ; NumberOfPoints  1 ; }
	  { GeoElement Line        ; NumberOfPoints  1 ; }
        }
      }
    }
  }

}

// --------------------------------------------------------------------------

Constraint {

  { Name I_Unit ; // Source field - Unit current - normalizing by the number of turns
    Case {
      { Region CutInd_1 ; Value -nb_wires ; }
      { Region CutInd_2 ; Value -nb_wires ; }
    }
  }

  // av - formulation
  { Name MVP_3D ;
    Case {
      { Region Surf_bn0    ; Type Assign ; Value 0. ; }
      { Region SurfaceGInf ; Type Assign ; Value 0. ; }
    }
  }

  { Name I_3D ;
    Case {
      If(!Flag_CircuitCoupling)
        { Region Ind_1 ; Value 1; TimeFunction I1[];}
        { Region Ind_2 ; Value 1; TimeFunction I2[];}
      EndIf
    }
  }

  { Name V_3D ;
    Case {
      If(Flag_ConductingCore)
        { Region Core ; Value 0. ; }
      EndIf
    }
  }

  { Name MagneticField ;
    Case {
    }
  }
}

If (Flag_CircuitCoupling)
  Include "MyCircuit.pro";
EndIf

// --------------------------------------------------------------------------
// Magnetostatics - hs formulation for computing the source

Include "magsta_hs_js0.pro" ;

// --------------------------------------------------------------------------

Group {
  Surf_a_NoGauge = Region [ {Surf_FixedMVP, SkinDomainC} ] ;
}

Constraint {

  { Name GaugeCondition_a ; Type Assign ;
    Case {
      { Region DomainCC ; SubRegion Surf_a_NoGauge ; Value 0. ; }
    }
  }

}

FunctionSpace {

  // Magnetic vector potential a (b = curl a)
  { Name Hcurl_a_3D ; Type Form1 ;
    BasisFunction {// a = a_e * s_e
      { Name se ; NameOfCoef ae ; Function BF_Edge ;
        Support Domain ; Entity EdgesOf[ All, Not SkinDomainC ] ; }
      { Name se2 ; NameOfCoef ae2 ; Function BF_Edge ;
        Support Domain ; Entity EdgesOf[ SkinDomainC ] ; }
    }
    Constraint {
      { NameOfCoef ae  ; EntityType EdgesOf ; NameOfConstraint MVP_3D ; }
      { NameOfCoef ae2 ; EntityType EdgesOf ; NameOfConstraint MVP_3D ; }
      { NameOfCoef ae  ; EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
	NameOfConstraint GaugeCondition_a ; }
    }
  }

  // Electric scalar potential (3D)
  { Name Hregion_u_3D ; Type Form0 ;
    BasisFunction {
      { Name sr ; NameOfCoef ur ; Function BF_GroupOfNodes ;
        Support DomainC ; Entity GroupsOfNodesOf[ Surf_elec ] ; }
    }
    GlobalQuantity {
      { Name U ; Type AliasOf        ; NameOfCoef ur ; }
      { Name I ; Type AssociatedWith ; NameOfCoef ur ; }
    }
    Constraint {
      { NameOfCoef U ; EntityType GroupsOfNodesOf ; NameOfConstraint V_3D ; }
      { NameOfCoef I ; EntityType GroupsOfNodesOf ; NameOfConstraint I_3D ; }
    }
  }

  // Source magnetic field
  { Name Hregion_hs_3D ; Type Form1 ;
    BasisFunction {
      { Name sr ; NameOfCoef ur ;  // Global Basis Function
        Function BF_Global { Quantity hs ;
          Formulation Magnetostatics_hs {Nbr_DomainB} ;
          Group DomainB ; Resolution MagSta_hs {Nbr_DomainB} ; } ;
        Support Domain ; Entity Global [DomainB] ; }
    }
    GlobalQuantity {
      { Name Ib ; Type AliasOf        ; NameOfCoef ur ; }
      { Name Ub ; Type AssociatedWith ; NameOfCoef ur ; }
    }
    Constraint {
      { NameOfCoef Ib ; EntityType Global ; NameOfConstraint I_3D ; }
      { NameOfCoef Ub ; EntityType Global ; NameOfConstraint V_3D ; }
    }
  }

If (Flag_CircuitCoupling)
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
EndIf

  { Name H_hysteresis ; Type Vector;
    BasisFunction {
      { Name sex ; NameOfCoef aex ; Function BF_VolumeX ; Support Domain ; Entity VolumesOf[ Domain ] ; }
      { Name sey ; NameOfCoef aey ; Function BF_VolumeY ; Support Domain ; Entity VolumesOf[ Domain ] ; }
      { Name sez ; NameOfCoef aez ; Function BF_VolumeZ ; Support Domain ; Entity VolumesOf[ Domain ] ; }
    }
  }

  { Name H_hysteresis_test ; Type Form1 ;
    BasisFunction {
      { Name se ; NameOfCoef ae ; Function BF_Edge ;
        Support Domain ; Entity EdgesOf[ All ] ; }
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

//---------------------------------------------------------------------------------------------

Formulation {

  { Name MagStaDyn_a_3D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a_3D ; }
      { Name ap  ; Type Local ; NameOfSpace Hcurl_a_3D ; } // "ap = aprime usefull to avoid auto-symmetrization of JacNL tensor with getdp"

      { Name v  ; Type Local ; NameOfSpace Hregion_u_3D ; } //Massive conductor
      { Name U  ; Type Global ; NameOfSpace Hregion_u_3D [U] ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_3D [I] ; }

      { Name hs ; Type Local  ; NameOfSpace Hregion_hs_3D ; } // Stranded
      { Name Ib ; Type Global ; NameOfSpace Hregion_hs_3D [Ib] ; }
      { Name Ub ; Type Global ; NameOfSpace Hregion_hs_3D [Ub] ; }

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
        Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ] ;
          In Domain ; Jacobian Vol ; Integration II ; }
        If(Flag_NLRes!=NLRES_ITERATIVELOOPPRO)
          Galerkin { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d ap} ] ;
            In DomainNL ; Jacobian Vol ; Integration II ; }
        Else
          Galerkin { [ (1/$relax)  *  (SetVariable[(dhdb_NL[{d a}]), 
                                                    QuadraturePointIndex[]]{$dhdb_any_temp}) * Dof{d a} , {d a} ] ; 
            In DomainNL ; Jacobian Vol ; Integration II ; }
          Galerkin { [ -(1/$relax) *  (GetVariable[ QuadraturePointIndex[]]{$dhdb_any_temp}) *    {d a}  , {d a} ] ; 
            In DomainNL ; Jacobian Vol ; Integration II ; }
        EndIf       
      EndIf

      //***************************************************
      //--------Hysteresis law with Jiles model---------- 
      //***************************************************
      If(Flag_NL_law==NL_JA)  // Jiles model law
        Galerkin { [ nu[] * Dof{d a}  , {d a} ] ;
          In DomainL ; Jacobian Vol ; Integration II ; }

        // update h
        // saving h_Jiles in local quantity h
        // BF is constant per element (Vector + BF_Volume) => 1 integration point is enough
        Galerkin { [ Dof{h} , {h} ]  ;
          In DomainNL ; Jacobian Vol ; Integration II1p ; }
        Galerkin { [ -h_Jiles[{h}[1]  , 
                              {d a}[1], 
                              {d a}    ]{List[hyst_FeSi]} , {h} ]  ;
          In DomainNL ; Jacobian Vol ; Integration II1p ; }

        // NL part ...
        Galerkin { [ Dof{h}, {d a} ] ; // register of Dof => idem
          In DomainNL ; Jacobian Vol ; Integration II ; }
        If(Flag_NLRes!=NLRES_ITERATIVELOOPPRO)
          Galerkin { JacNL[ dhdb_Jiles[{h}       , 
                                       {d a}     , 
                                       {h}-{h}[1] ]{List[hyst_FeSi]} * Dof{d a} , {d ap} ] ;
            In DomainNL ; Jacobian Vol ; Integration II ; }
        Else
          Galerkin { [ (1/$relax)  * (SetVariable[(dhdb_Jiles[{h}       , 
                                                              {d a}     , 
                                                              {h}-{h}[1] ]{List[hyst_FeSi]}), 
                                                   QuadraturePointIndex[]]{$dhdb_Jiles_temp}) * Dof{d a} , {d a} ]; 
            In DomainNL ; Jacobian Vol ; Integration II ; } 
          Galerkin { [ -(1/$relax) * (GetVariable[ QuadraturePointIndex[]]{$dhdb_Jiles_temp}) *    {d a} , {d a} ]; 
            In DomainNL ; Jacobian Vol ; Integration II ; }
        EndIf
      EndIf

      //*******************************************************
      //--------Hysteresis law with EnergHyst model---------- 
      //*******************************************************
      If(Flag_NL_law==NL_ENERGHYST ) //EnergHyst model law

        Galerkin { [ nu[] * Dof{d a} , {d a} ] ; 
          In DomainL ; Jacobian Vol ; Integration II ; }

        // update h
        // saving h_Vinch_K in local quantity h
        // BF is constant per element (Vector + BF_Volume) => 1 integration point is enough
        Galerkin { [  Dof{h}  , {h} ] ; 
          In DomainNL  ; Jacobian Vol ; Integration II1p ; } 
        Galerkin { [  - (SetVariable[(h_Vinch_K[  {h}[1]         , 
                                                  {d a}, {d a}[1],
                                                  {J_1}, {J_1}[1], 
                                                  {J_2}, {J_2}[1], 
                                                  {J_3}, {J_3}[1] ]{List[param_EnergHyst]}),
                                      QuadraturePointIndex[]]{$h_Vinch_temp}), {h} ] ; 
          In DomainNL  ; Jacobian Vol ; Integration II1p ; } 

        // update Jk
        // saving Update_Cell_K in local quantity Jk
        // BF is constant per element (Vector + BF_Volume) => 1 integration point is enough
        For iSub In {1:N}
          Galerkin { [ Dof{J~{iSub}} ,{J~{iSub}} ] ; 
            In DomainNL ; Jacobian Vol ; Integration II1p ; } // Integration with II1p or II ???
          Galerkin { [ - Update_Cell_K[ iSub         , 
                                        (GetVariable[QuadraturePointIndex[]]{$h_Vinch_temp}),
                                        {J~{iSub}}   , 
                                        {J~{iSub}}[1] ]{List[param_EnergHyst]}, {J~{iSub}} ] ; 
            In DomainNL ; Jacobian Vol ; Integration II1p ; } // Integration with II1p or II ???
        EndFor

        // NL part ...
        Galerkin { [ (GetVariable[ QuadraturePointIndex[]]{$h_Vinch_temp}), {d a} ];  
          In DomainNL  ; Jacobian Vol ; Integration II1p ; } // Integration with II1p or II ???
        
        If(Flag_NLRes!=NLRES_ITERATIVELOOPPRO)
          Galerkin { JacNL[ (dhdb_Vinch_K[ (GetVariable[ QuadraturePointIndex[]]{$h_Vinch_temp}),
                                            {J_1},{J_1}[1], 
                                            {J_2},{J_2}[1], 
                                            {J_3},{J_3}[1]]{List[param_EnergHyst]}) * Dof{d a} , {d ap} ] ;  
            In DomainNL  ; Jacobian Vol ; Integration II1p ; } // Integration with II1p or II ???
        Else
          Galerkin { [ (1/$relax) * (SetVariable[(dhdb_Vinch_K[ (GetVariable[ QuadraturePointIndex[]]{$h_Vinch_temp}),
                                                                  {J_1},{J_1}[1], 
                                                                  {J_2},{J_2}[1], 
                                                                  {J_3},{J_3}[1]]{List[param_EnergHyst]}) , 
                                                  QuadraturePointIndex[]]{$dhdb_Vinch_temp}) * Dof{d a} , {d a} ];  
            In DomainNL  ; Jacobian Vol ; Integration II1p ; } // Integration with II1p or II ???
          Galerkin { [ -(1/$relax) * (GetVariable[QuadraturePointIndex[]]{$dhdb_Vinch_temp}) * {d a} , {d a} ];  
            In DomainNL  ; Jacobian Vol ; Integration II1p ; } // Integration with II1p or II ???   
        EndIf
      EndIf  
      //*******************************************************
      //*******************************************************


      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration II ; }
      Galerkin { [ sigma[] * Dof{d v}/SymmetryFactor , {a} ] ;//**** SymmetryFactor ?
        In DomainC ; Jacobian Vol ; Integration II ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {d v} ] ;
        In DomainC ; Jacobian Vol ; Integration II ; }
      Galerkin { [ sigma[] * Dof{d v}/SymmetryFactor , {d v} ] ;//**** SymmetryFactor ?
        In DomainC ; Jacobian Vol ; Integration II ; }
      GlobalTerm { [ Dof{I}*SymmetryFactor, {U} ] ; In Surf_elec ; }

      Galerkin { [ -js0[], {a} ] ;
        In  DomainS ; Jacobian Vol ; Integration II ; }

      // Stranded coil with imposed voltage
      Galerkin { [ -Dof{d hs}, {a} ] ;
        In DomainB ; Jacobian Vol ; Integration II ; }

      Galerkin { DtDof[ Dof{a} , {d hs} ] ;
        In DomainB ; Jacobian Vol ; Integration II ; }
      Galerkin { [ 1/sigma[] * Dof{d hs} , {d hs} ] ;
        In DomainB ; Jacobian Vol ; Integration II ; }
      GlobalTerm { [ Dof{Ub}/SymmetryFactor, {Ib} ] ; In DomainB ; }
      // Value of resistance coming from measurements
      //GlobalTerm { [ Resistance[]  * Dof{Ib} , {Ib} ] ; In DomainB ; }

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
          { Node {I};  Loop {U};  Equation {I};  In Surf_elec ; } // Massive conductors
          { Node {Ib}; Loop {Ub}; Equation {Ub}; In DomainB ; }     // Stranded conductors
	  { Node {Iz}; Loop {Uz}; Equation {Uz}; In DomainZt_Cir ; }
	}
      EndIf

    }
  }

}

//-----------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------
If(Flag_NLRes==NLRES_ITERATIVELOOPPRO)
  Include "MyItLoopPro.pro";
EndIf
//-----------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------


Resolution {

  { Name Analysis ;
    System {
      If(Flag_AnalysisType==AN_FREQUENCY)
         { Name A ; NameOfFormulation MagStaDyn_a_3D ; Type ComplexValue ; Frequency Freq ; }
      EndIf
      If(Flag_AnalysisType==AN_STATIC || Flag_AnalysisType==AN_TIME )
        { Name A ; NameOfFormulation MagStaDyn_a_3D ; }
      EndIf
    }
    Operation {
      CreateDir["res3d/"] ;
      DeleteFile[StrCat[Dir,"I1",ExtGnuplot]];
      DeleteFile[StrCat[Dir,"I2",ExtGnuplot]];
      For k In{1:2}
        DeleteFile[StrCat[Dir,Sprintf("hbp_%g",k),ExtGnuplot]];
        DeleteFile[StrCat[Dir,Sprintf("bx_%g",k),ExtGnuplot]];
        DeleteFile[StrCat[Dir,Sprintf("by_%g",k),ExtGnuplot]];
        DeleteFile[StrCat[Dir,Sprintf("bz_%g",k),ExtGnuplot]];
        DeleteFile[StrCat[Dir,Sprintf("hx_%g",k),ExtGnuplot]];
        DeleteFile[StrCat[Dir,Sprintf("hy_%g",k),ExtGnuplot]];
        DeleteFile[StrCat[Dir,Sprintf("hz_%g",k),ExtGnuplot]];
      EndFor

      // initialize the solution (initial condition)
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
      EndIf // End Flag_AnalysisType==AN_STATIC (Static) Flag_AnalysisType==AN_FREQUENCY (Frequency)

      If(Flag_AnalysisType==AN_TIME)

        // set some runtime variables
        Evaluate[$syscount = 0];
        Evaluate[$relaxcount=0];
        Evaluate[$relaxcounttot=0];
        Evaluate[$dnccount=0];

        //Save TimeStep 0
        SaveSolution[A];
        PostOperation[Get_LocalFields] ;
        PostOperation[Get_GlobalQuantities];

        TimeLoopTheta[time0, timemax, delta_time, 1.]{ // Euler implicit (1) -- Crank-Nicolson (0.5)
          If(!Flag_NL) // Linear case ...
            Generate[A]; Solve[A];
          EndIf

          If(Flag_NL) // NonLinear Case ...
            If(Flag_NLRes==NLRES_ITERATIVELOOP)  
          // I T E R A T I V E . L O O P ...................................
              IterativeLoop[ Nb_max_iter, stop_criterion, RF_tuned[]] {
                GenerateJac[A] ; 
                If (!Flag_AdaptRelax)
                  SolveJac[A] ; 
                  Evaluate[$relaxcount=1];                                      
                Else
                  SolveJac_AdaptRelax[A, List[RelaxFac_Lin],TestAllFactors ] ; 
                  Evaluate[$relaxcount=$NbrTestedFac_kj];
                EndIf    
              }
              Evaluate[$syscount = $syscount + 1 ];
              Evaluate[$relaxcounttot=$relaxcounttot+$relaxcount];
              Evaluate[$relax= $RelaxFac_kj];
          //...............................................................       
            EndIf

            If(Flag_NLRes==NLRES_ITERATIVELOOPN) 
          // I T E R A T I V E . L O O P . N ..............................
              IterativeLoopN[ Nb_max_iter, RF_tuned[],
                //*****Choose between one of the 3 following possibilities:*****
                //System { { A , Reltol_Mag, Abstol_Mag, Residual MeanL2Norm }} ]{ //1)
                //PostOperation { { a_only , Reltol_Mag, Abstol_Mag,  MeanL2Norm }} ]{ //2)
                //PostOperation { { b_only , Reltol_Mag, Abstol_Mag,  MeanL2Norm }} ]{ //3) 
                PostOperation { { h_only , Reltol_Mag, Abstol_Mag,  MeanL2Norm }} ]{ //4) 
                //**************************************************************
                GenerateJac[A] ; 
                If (!Flag_AdaptRelax)
                  SolveJac[A] ;       
                  Evaluate[$relaxcount=1];                                   
                Else
                  SolveJac_AdaptRelax[A, List[RelaxFac_Lin],TestAllFactors ] ; 
                  Evaluate[$relaxcount=$NbrTestedFac_kj];
                EndIf
              }
              Evaluate[$syscount = $syscount + 1 ];
              Evaluate[$relaxcounttot=$relaxcounttot+$relaxcount];
              Evaluate[$relax= $RelaxFac_kj];
          //...............................................................
            EndIf

            If(Flag_NLRes==NLRES_ITERATIVELOOPPRO) 
          // I T E R A T I V E . L O O P . P R O ..........................
              Call MyItLoopPro;
          //...............................................................
            EndIf
          EndIf
          
          SaveSolution[A];
          PostOperation[Get_LocalFields] ;
          //Test[ $TimeStep > 1 ]{
          PostOperation[Get_GlobalQuantities];
          //}
        }
      EndIf // End Flag_AnalysisType==AN_TIME (Time domain)
    }
  }
}

//-----------------------------------------------------------------------------------------------

PostProcessing {

  { Name MagStaDyn_a_3D ; NameOfFormulation MagStaDyn_a_3D ;
    PostQuantity {
      { Name a ; Value { Term { [ {a} ]          ; In Domain ; Jacobian Vol ; } } }
      { Name b ; Value { Term { [ {d a} ]        ; In Domain ; Jacobian Vol ; } } }
      { Name bx ; Value { Term { [ CompX[{d a}] ]   ; In Domain ;  Jacobian Vol ;} } }
      { Name by ; Value { Term { [ CompY[{d a}] ]   ; In Domain ;  Jacobian Vol ;} } }
      { Name bz ; Value { Term { [ CompZ[{d a}] ]   ; In Domain ;  Jacobian Vol ;} } }

      //{ Name h ; Value { Term { [ nu[{d a}] * {d a} ] ; In Domain ; Jacobian Vol ; } } }

      If(Flag_NL_law != NL_JA && Flag_NL_law != NL_ENERGHYST )
        { Name h ; Value { Term { [ nu[{d a}] * {d a} ] ; In Domain ; Jacobian Vol ; } } }

        { Name hx ; Value { Term { [ CompX[ nu[{d a}] * {d a} ]]   ; In Domain ;  Jacobian Vol ;} } }
        { Name hy ; Value { Term { [ CompY[ nu[{d a}] * {d a} ]]   ; In Domain ;  Jacobian Vol ;} } }
        { Name hb ; Value { Term { [ TensorSym[
                  CompX[ nu[{d a}] * {d a} ],  CompY[ nu[{d a}] * {d a} ],  0.,
                  CompX[{d a}],CompY[{d a}],0.] ]  ; In Domain ;  Jacobian Vol ;} } }

      EndIf
      If(Flag_NL_law == NL_JA || Flag_NL_law == NL_ENERGHYST)
        { Name h ; Value {
            Term { [ nu[{d a}] * {d a} ] ; In DomainL ; Jacobian Vol ; }
            Term { [ {h} ] ; In DomainNL ; Jacobian Vol ; }
          }
        }

        { Name hx ; Value { Term { [ CompX[{h}] ]   ; In DomainNL ;  Jacobian Vol ;} } }
        { Name hy ; Value { Term { [ CompY[{h}] ]   ; In DomainNL ;  Jacobian Vol ;} } }
        { Name hz ; Value { Term { [ CompZ[{h}] ]   ; In DomainNL ;  Jacobian Vol ;} } }

        { Name hb ; Value { Term { [ TensorSym[
                  CompX[{h}],  CompY[{h}], CompZ[{h}],
                  CompX[{d a}], CompY[{d a}], CompZ[{d a}]] ] ; In DomainNL ;  Jacobian Vol ;} } }
      EndIf



      { Name v ; Value { Term { [ {v} ]          ; In DomainC ; Jacobian Vol ; } } }
      { Name e ; Value { Term { [ -Dt[{a}]+{d v} ] ; In DomainC ; Jacobian Vol ; } } }
      { Name j ; Value { Term { [ sigma[]*(-Dt[{a}]+{d v}) ] ; In DomainC ; Jacobian Vol ; } } }
      { Name js0 ; Value { Term { [ js0[] ]      ; In DomainS ; Jacobian Vol ; } } }

      { Name js  ; Value { Term { [ {d hs} ]     ; In DomainB  ; Jacobian Vol ; } } }
      { Name hs  ; Value { Term { [ {hs} ]       ; In DomainB  ; Jacobian Vol ; } } }

      { Name JouleLosses ;
        Value { Integral {
            [ SymmetryFactor * sigma[]*SquNorm[-Dt[{a}]+{d v}] ] ;
            In DomainC ; Jacobian Vol ; Integration II ; }
        }
      }
      { Name MagEnergy ;
        Value {
          If(Flag_NL_law != NL_JA && Flag_NL_law != NL_ENERGHYST )
            Integral { [ SymmetryFactor*1/2 *nu[{d a}]*{d a}*{d a} ] ;
              In Domain ; Jacobian Vol ; Integration II ; }
          EndIf
          If(Flag_NL_law == NL_JA || Flag_NL_law == NL_ENERGHYST)
            Integral { [ SymmetryFactor*1/2 *nu[]*{d a}*{d a} ] ;
              In DomainL ; Jacobian Vol ; Integration II ; }
            Integral { [ SymmetryFactor*1/2 * {h} *{d a} ] ;
              In DomainNL ; Jacobian Vol ; Integration II ; }
          EndIf
	}
      }

      { Name Flux ; Value {
          Integral { [ SymmetryFactor*vDir[]*NbWires[]/SurfCoil[]*{a} ] ;
            In Inds  ; Jacobian Vol ; Integration II ; }
        }
      }

      { Name Upos ;
        Value { Integral { Type Global ;
            [ -sigma[] * (Dt[{a}] + {d v}) * BF{d v} ] ;
            In DomainC ; Jacobian Vol ; Integration II ;
          }
        }
      }

      { Name U ; Value {
          Term { [ {U} ]   ; In Surf_elec ; }
          Term { [ {Ub} ]  ; In DomainB ; }
          If(Flag_CircuitCoupling)
            Term { [ {Uz} ]  ; In DomainZt_Cir ; }
          EndIf
        } }

      { Name I ; Value {
          Term { [ {I} ]   ; In Surf_elec ; }
          Term { [ {Ib} ]  ; In DomainB ; }
          If(Flag_CircuitCoupling)
            Term { [ {Iz} ]  ; In DomainZt_Cir ; }
          EndIf
        } }
    }
  }
}

//-----------------------------------------------------------------------------------------------
 PostOperation Get_LocalFields UsingPost MagStaDyn_a_3D {
   If(Flag_AnalysisType!=AN_TIME)
     Print[ js, OnElementsOf DomainB, File StrCat[Dir,"js",ExtGmsh], LastTimeStepOnly ] ;
   //Print[ hs, OnElementsOf DomainB, File StrCat[Dir,"hs",ExtGmsh], LastTimeStepOnly ] ;
   EndIf

   Print[ b, OnElementsOf Domain, File StrCat[Dir,"b",ExtGmsh], LastTimeStepOnly ] ;

   //If(Flag_NL_law == NL_JA)
     For k In {1:3}
      Print[ bx, OnPoint {0,ypos~{k},0}, Format Table, LastTimeStepOnly,
        File > StrCat[Dir,Sprintf("bx_%g",k),ExtGnuplot], SendToServer StrCat[po,Sprintf("Point_%g/",k),"bx [T]"], Color "LightYellow" ];
      Print[ by, OnPoint {0,ypos~{k},0}, Format Table, LastTimeStepOnly,
        File > StrCat[Dir,Sprintf("by_%g",k),ExtGnuplot], SendToServer StrCat[po,Sprintf("Point_%g/",k),"by [T]"], Color "LightYellow" ];
      Print[ hx, OnPoint {0,ypos~{k},0}, Format Table, LastTimeStepOnly,
        File > StrCat[Dir,Sprintf("hx_%g",k),ExtGnuplot], SendToServer StrCat[po,Sprintf("Point_%g/",k),"hx [A\m]"], Color "LightYellow" ];
      Print[ hy, OnPoint {0,ypos~{k},0}, Format Table, LastTimeStepOnly,
        File > StrCat[Dir,Sprintf("hy_%g",k),ExtGnuplot], SendToServer StrCat[po,Sprintf("Point_%g/",k),"hy [A\m]"], Color "LightYellow" ];

      Print[ hb, OnPoint {0,ypos~{k},0}, Format TimeTable, LastTimeStepOnly,
        File > StrCat[Dir,Sprintf("hbp_%g",k),ExtGnuplot] ];
    EndFor
  //EndIf
 }

 PostOperation Get_GlobalQuantities UsingPost MagStaDyn_a_3D {

  If (!Flag_CircuitCoupling)
  Print[ I, OnRegion Ind_1, Format Table,
    File > StrCat[Dir,"I1",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"Circuit_1/","20I1 [A]"], Color "LightYellow" ];
  Print[ I, OnRegion Ind_2, Format Table,
    File > StrCat[Dir,"I2",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"Circuit_2/","30I2 [A]"], Color "Red" ];

   Print[ U, OnRegion Ind_1, Format Table,
    File > StrCat[Dir,"U1",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"Circuit_1/","20U1 [V]"], Color "LightYellow" ];
  Print[ U, OnRegion Ind_2, Format Table,
    File > StrCat[Dir,"U2",ExtGnuplot], LastTimeStepOnly,
    SendToServer StrCat[po,"Circuit_2/","30U2 [V]"], Color "Red" ];
  EndIf

  If (Flag_CircuitCoupling)
    Print[ I, OnRegion Ein1, Format Table,
      File > StrCat[Dir,"I1",ExtGnuplot], LastTimeStepOnly,
      SendToServer StrCat[po,"Circuit_1/","20I1_Ein1 [A]"], Color "LightYellow" ];

    Print[ U, OnRegion Ein1, Format Table,
      File > StrCat[Dir,"U1",ExtGnuplot], LastTimeStepOnly,
      SendToServer StrCat[po,"Circuit_1/","20U1_Ein1 [V]"], Color "LightYellow" ];

    If (Flag_TestCase==3)
      Print[ I, OnRegion Ein2, Format Table, // Iminus because of the sign convention to be in agreement with measurements team 32
        File > StrCat[Dir,"I2",ExtGnuplot], LastTimeStepOnly,
        SendToServer StrCat[po,"Circuit_2/","30I2_Ein2 [A]"], Color "Red" ];

      Print[ U, OnRegion Ein2, Format Table,
        File > StrCat[Dir,"U2",ExtGnuplot], LastTimeStepOnly,
        SendToServer StrCat[po,"Circuit_2/","30U2_Ein2 [V]"], Color "Red" ];
    EndIf

    If (Flag_TestCase==4)
      Print[ I, OnRegion Ind_2, Format Table, // Iminus because of the sign convention to be in agreement with measurements team 32
        File > StrCat[Dir,"I2",ExtGnuplot], LastTimeStepOnly,
        SendToServer StrCat[po,"Circuit_2/","30I2 [A]"], Color "Red" ];
    /*
      Print[ U, OnRegion IndA_2, Format Table,
        File > StrCat[Dir,"U2",ExtGnuplot], LastTimeStepOnly,
        SendToServer StrCat[po,"50U2 [V]"], Color "Red" ];
    */
    EndIf
  EndIf

  /* // OLD VERSION
   Print[ I, OnRegion Ind_1, Format Table,
     File > StrCat[Dir,"I1",ExtGnuplot], LastTimeStepOnly,
     SendToServer StrCat[po,"20I1 [A]"], Color "LightYellow" ];
   Print[ I, OnRegion Ind_2, Format Table,
     File > StrCat[Dir,"I2",ExtGnuplot], LastTimeStepOnly,
     SendToServer StrCat[po,"21I2 [A]"], Color "LightYellow" ];

   Print[ U, OnRegion Ind_1, Format Table,
     File > StrCat[Dir,"U1",ExtGnuplot], LastTimeStepOnly,
     SendToServer StrCat[po,"30U1 [V]"], Color "LightYellow" ];
   Print[ U, OnRegion Ind_2, Format Table,
     File > StrCat[Dir,"U2",ExtGnuplot], LastTimeStepOnly,
     SendToServer StrCat[po,"31U2 [V]"], Color "LightYellow" ];
  */


/*
   Print[ Flux[DomainB], OnGlobal, Format TimeTable,
     File > StrCat[Dir,"Flux",ExtGnuplot], LastTimeStepOnly, Store 11,
     SendToServer StrCat[po,"40Flux [Wb]"],  Color "LightYellow" ];
*/

}


PostOperation Get_LocalFields_ALLTS UsingPost MagStaDyn_a_3D {
   If(Flag_AnalysisType!=AN_TIME)
     Print[ js, OnElementsOf DomainB, File StrCat[Dir,"js",ExtGmsh] ] ;
   //Print[ hs, OnElementsOf DomainB, File StrCat[Dir,"hs",ExtGmsh] ] ;
   EndIf

   Print[ b, OnElementsOf Domain, File StrCat[Dir,"b",ExtGmsh] ] ;
 }

PostOperation {

  { Name a_only ; NameOfPostProcessing MagStaDyn_a_3D ;
    Operation {
        Print[ a,  OnElementsOf Domain, File StrCat[Dir, "a_only", ExtGmsh] ] ;
     }
  } 

  { Name b_only ; NameOfPostProcessing MagStaDyn_a_3D ;
    Operation {
        Print[ b,  OnElementsOf Domain, File StrCat[Dir, "b_only", ExtGmsh] ] ;
     }
  } 

  { Name h_only ; NameOfPostProcessing MagStaDyn_a_3D ;
    Operation {
        Print[ h,  OnElementsOf Domain, File StrCat[Dir, "h_only", ExtGmsh] ] ;
     }
  }
}

DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
