Group {
  DefineGroup[
    Domain, DomainCC, DomainC, DomainL, DomainNL,
    DomainS, DomainInf,
    SkinDomainS, SkinDomainC,
    Surf_elec, Surf_bn0, Surf_Inf, Surf_FixedMVP
  ] ;
}


Function {
  DefineFunction[
    mu, nu, sigma, rho, js, dhdb_NL
  ] ;

  DefineConstant[
    Val_Rint, Val_Rext,
    SymmetryFactor = 1,
    Nb_max_iter = 30,
    relaxation_factor = 1,
    stop_criterion = 1e-5,
    reltol = 1e-7,
    abstol = 1e-5,
    Freq, T = 1/Freq, // Fundamental period in s
    time0 = 0,
    NbT = 1,
    timemax = NbT*T,
    NbSteps = 100,
    delta_time = T/NbSteps,
    II, VV,
    Flag_NL = 0,
    Flag_NL_Newton_Raphson = {1, Choices{0,1}, Name "Input/41Newton-Raphson iteration",
      Visible Flag_NL},
    po = "Output 3D/"
  ] ;

}
Include "BH.pro"; // nonlinear BH caracteristic of magnetic material

Group {


  If(!Flag_ConductingCore)
    DomainCC = Region[ {Air, AirInf, Core} ];
    DomainC  = Region[ { } ];
  Else
    DomainCC = Region[ {Air, AirInf} ];
    DomainC  = Region[ {Core} ];
    SkinDomainC = Region[ {SkinCore} ];
  EndIf

  //--------------------------------------------------------------

  DomainS = Region[ {Inds} ];
  SkinDomainS = Region[ {SkinInds} ];

  DomainCC += Region[ {DomainS} ];

  //--------------------------------------------------------------

  If(Flag_Infinity)
    DomainInf = Region[ {AirInf} ];
  EndIf

  Domain  = Region[ {DomainCC, DomainC} ];

  If(Flag_NL)
    DomainNL = Region[ {Core} ];
    DomainL  = Region[ {Domain,-DomainNL} ];
  EndIf
  DomainDummy = Region[ 12345 ] ; // Dummy region number for postpro with functions

  Surf_FixedMVP = Region[{ Surf_bn0, Surf_Inf}];

}

Function {
  nu [ Region[{Air, AirInf, Inds}] ]  = 1./mu0 ;

  If(!Flag_NL)
    nu [Core]  = 1/(mur_fe*mu0) ;
  Else
    nu [ DomainNL ] = nu_EIcore[$1] ;
    dhdb_NL [ DomainNL ] = dhdb_EIcore_NL[$1];
  EndIf

  sigma[Inds] = sigma_coil ;
  sigma[Core] = sigma_core ;
  rho[] = 1/sigma[] ;
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
}

// --------------------------------------------------------------------------

Constraint {

  { Name MVP_3D ;
    Case {
      { Region Surf_bn0 ; Type Assign ; Value 0. ; }
      { Region Surf_Inf ; Type Assign ; Value 0. ; }
    }
  }

  { Name V_3D ;
    Case {
    }
  }

  { Name I_3D ;
    Case {
    }
  }

}

Group {
  Surf_a_NoGauge = Region [ {Surf_FixedMVP, SkinDomainC} ] ;
}

Constraint {

  { Name GaugeCondition_a ; Type Assign ;
    Case {
      If (Flag_GaugeType==TREE_COTREE_GAUGE)
        { Region Region[{DomainCC}] ; SubRegion Surf_a_NoGauge ; Value 0. ; }
      EndIf
    }
  }

  { Name xi_fixed ; Type Assign ;
    Case {
      { Region Surf_FixedMVP ; Value 0. ; }
      { Region SkinDomainC ; Value 0. ; }
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

      If(Flag_GaugeType==TREE_COTREE_GAUGE)
        { NameOfCoef ae  ; EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
          NameOfConstraint GaugeCondition_a ; }
      EndIf
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

  // scalar potential for Coulomb gauge: orthogonal to grad(xi)
  { Name H_xi ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef an ; Function BF_Node ;
        Support Region[{Domain}] ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef an ; EntityType NodesOf ; NameOfConstraint xi_fixed ; }
    }
  }


  // correcting source interpolation js0[] so that (weakly) div j = 0
  { Name H_xi_divj0 ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef an ; Function BF_Node ;
        Support Region[{DomainS, SkinDomainS}] ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef an ; EntityType NodesOf ; NameOfConstraint xi_fixed ; }
    }
  }

}

//---------------------------------------------------------------------------------------------

Formulation {

  { Name DivJ0 ; Type FemEquation ;
    Quantity {
      { Name xi; Type Local ; NameOfSpace H_xi_divj0 ; }
    }
    Equation {
      Galerkin { [ js0[] , {d xi} ] ;
        In Domain ; Jacobian Vol ; Integration II ; }
      Galerkin { [ -Dof{d xi} , {d xi} ] ;
        In Domain ; Jacobian Vol ; Integration II ; }
    }
  }

  { Name MagStaDyn_av_js0_3D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a_3D ; }
      { Name xi ; Type Local ; NameOfSpace H_xi ; } // Coulomb gauge
      { Name xis ; Type Local ; NameOfSpace H_xi_divj0 ; } // div j=0

      { Name v  ; Type Local ; NameOfSpace Hregion_u_3D ; } //Massive conductor
      { Name U  ; Type Global ; NameOfSpace Hregion_u_3D [U] ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_3D [I] ; }
    }

    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ] ;
        In Domain ; Jacobian Vol ; Integration II ; }

      If(Flag_NL_Newton_Raphson)
        Galerkin { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d a} ] ;
          In DomainNL ; Jacobian Vol ; Integration II ; }
      EndIf

      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration II ; }
      Galerkin { [ sigma[] * Dof{d v}/SymmetryFactor , {a} ] ;
        In DomainC ; Jacobian Vol ; Integration II ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {d v} ] ;
        In DomainC ; Jacobian Vol ; Integration II ; }
      Galerkin { [ sigma[] * Dof{d v}/SymmetryFactor , {d v} ] ;
        In DomainC ; Jacobian Vol ; Integration II ; }
      GlobalTerm { [ Dof{I}*SymmetryFactor, {U} ] ; In Surf_elec ; }

      Galerkin { [ -js0[], {a} ] ;
        In DomainS ; Jacobian Vol ; Integration II ; }

      If(Flag_DivJ_Zero == DIVJ0_WEAK)
        Galerkin { [ {d xis}, {a} ] ;
          In Domain ; Jacobian Vol ; Integration II ; }
      EndIf

      If(Flag_GaugeType==COULOMB_GAUGE)
        Galerkin { [ Dof{a}, {d xi} ] ;
          In Domain ; Jacobian Vol ; Integration II ; }
        Galerkin { [ Dof{d xi}, {a} ] ;
          In Domain ; Jacobian Vol ; Integration II ; }
      EndIf
    }
  }

}


Resolution {

  { Name Analysis ;
    System {
      If(Flag_AnalysisType==2)
         { Name Sys ; NameOfFormulation MagStaDyn_av_js0_3D ; Type ComplexValue ; Frequency Freq ; }
         If(Flag_DivJ_Zero == DIVJ0_WEAK)
           { Name Sys_DivJ0 ; NameOfFormulation DivJ0 ; Type ComplexValue ; Frequency Freq ; }
         EndIf
      EndIf
      If(Flag_AnalysisType<2)
        { Name Sys ; NameOfFormulation MagStaDyn_av_js0_3D ; }
        If(Flag_DivJ_Zero == DIVJ0_WEAK)
          { Name Sys_DivJ0 ; NameOfFormulation DivJ0 ; }
        EndIf
      EndIf
    }
    Operation {
      CreateDir["res3d/"] ;

      If(Flag_DivJ_Zero == DIVJ0_WEAK)
        Generate[Sys_DivJ0] ; Solve[Sys_DivJ0] ; SaveSolution[Sys_DivJ0];
      EndIf

      InitSolution[Sys] ;
      If(Flag_AnalysisType==0 || Flag_AnalysisType==2) // Static or Frequency-domain
        If(!Flag_NL)
          Generate[Sys] ; Solve[Sys] ;
        EndIf
        If(Flag_NL)
          IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
            GenerateJac[Sys] ; SolveJac[Sys] ; }
        EndIf
        SaveSolution[Sys] ;

        PostOperation[Get_LocalFields] ;
        PostOperation[Get_GlobalQuantities] ;
      EndIf

      If(Flag_AnalysisType==1)
        TimeLoopTheta[time0, timemax, delta_time, 1.]{ // Implicit Euler (theta=1)
          If(!Flag_NL)
            Generate[Sys]; Solve[Sys];
          EndIf
          If(Flag_NL)
            IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor] {
              GenerateJac[Sys] ; SolveJac[Sys] ; }
          EndIf
          SaveSolution[Sys];

          PostOperation[Get_LocalFields] ;
          Test[ $TimeStep > 1 ]{
            PostOperation[Get_GlobalQuantities];
          }
        }
      EndIf
    }
  }
}

//-----------------------------------------------------------------------------------------------

PostProcessing {

  { Name MagStaDyn_av_js0_3D ; NameOfFormulation MagStaDyn_av_js0_3D ;
    PostQuantity {
      { Name a ; Value { Term { [ {a} ]          ; In Domain ; Jacobian Vol ; } } }
      { Name b ; Value { Term { [ {d a} ]        ; In Domain ; Jacobian Vol ; } } }
      { Name h ; Value { Term { [ nu[{d a}] * {d a} ] ; In Domain ; Jacobian Vol ; } } }

      { Name v ; Value { Term { [ {v} ]          ; In DomainC ; Jacobian Vol ; } } }
      { Name e ; Value { Term { [ -(Dt[{a}]+{d v}) ] ; In DomainC ; Jacobian Vol ; } } }
      { Name j ; Value { Term { [ -sigma[]*(Dt[{a}]+{d v}) ] ; In DomainC ; Jacobian Vol ; } } }
      { Name js ; Value { Term { [ js0[] ]      ; In DomainS ; Jacobian Vol ; } } }

      { Name JouleLosses ;
        Value { Integral {
            [ SymmetryFactor * sigma[]*SquNorm[Dt[{a}]+{d v}] ] ;
            In DomainC ; Jacobian Vol ; Integration II ; }
        }
      }
      { Name MagEnergy ;
        Value { Integral {
            [ SymmetryFactor * 1/2 * nu[{d a}]*{d a} * {d a} ] ;
	    In Domain ; Jacobian Vol ; Integration II ; }
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

      { Name U ; Value { Term { [ {U} ]   ; In Surf_elec ; } } }
      { Name I ; Value { Term { [ {I} ]   ; In Surf_elec ; } } }


      { Name Inductance_from_Flux ; Value { Term { Type Global; [ $Flux * 1e3/II ] ; In DomainDummy ; } } }
      { Name Inductance_from_MagEnergy ; Value { Term { Type Global; [ 2 * $MagEnergy * 1e3/(II*II) ] ; In DomainDummy ; } } }

      { Name xi ; Value { Term { [ {xi} ] ; In Domain ; Jacobian Vol ; } } }
      { Name xis ; Value { Term { [ {xis} ] ; In Domain ; Jacobian Vol ; } } }
      { Name dxis ; Value { Term { [ {d xis} ] ; In Domain ; Jacobian Vol ; } } }
      { Name js0_dxis ; Value { Term { [ js0[]-{d xis} ] ; In Domain ; Jacobian Vol ; } } }

    }
  }
}

//-----------------------------------------------------------------------------------------------
 PostOperation Get_LocalFields UsingPost MagStaDyn_av_js0_3D {
   Print[ js, OnElementsOf DomainS, File StrCat[Dir, "js", ExtGmsh], LastTimeStepOnly ] ;
   Print[ a, OnElementsOf Domain, File StrCat[Dir, "a", ExtGmsh], LastTimeStepOnly ] ;

   If(Flag_DivJ_Zero == DIVJ0_WEAK)
     Print[ xis, OnElementsOf DomainS, File StrCat[Dir, "xis",ExtGmsh ], LastTimeStepOnly ] ;
     Print[ dxis, OnElementsOf DomainS, File StrCat[Dir, "grad_xis",ExtGmsh ], LastTimeStepOnly ] ;
     Print[ js0_dxis, OnElementsOf DomainS, File StrCat[Dir, "js0_corrected",ExtGmsh ], LastTimeStepOnly ] ;
   EndIf

   If(Flag_GaugeType==COULOMB_GAUGE)
     Print[ xi, OnElementsOf Domain, File StrCat[Dir, "xi",ExtGmsh ], LastTimeStepOnly ] ;
   EndIf
   Print[ b, OnElementsOf Domain, File StrCat[Dir,"b",ExtGmsh], LastTimeStepOnly ] ;

   If(Flag_ConductingCore)
     Print[ j, OnElementsOf DomainC, File StrCat[Dir,"j",ExtGmsh], LastTimeStepOnly ] ;
   EndIf
 }

 PostOperation Get_GlobalQuantities UsingPost MagStaDyn_av_js0_3D {
   Print[ Flux[DomainS], OnGlobal, Format TimeTable,
     File > StrCat[Dir,"Flux",ExtGnuplot], LastTimeStepOnly, StoreInVariable $Flux,
     SendToServer StrCat[po,"40Flux [Wb]"],  Color "LightYellow" ];

   Print[ Inductance_from_Flux, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
    File StrCat[Dir,"InductanceF",ExtGnuplot],
    SendToServer StrCat[po,"50Inductance from Flux [mH]"], Color "LightYellow" ];

   Print[ MagEnergy[Domain], OnGlobal, Format TimeTable,
     File > StrCat[Dir,"ME",ExtGnuplot], LastTimeStepOnly, StoreInVariable $MagEnergy,
     SendToServer StrCat[po,"41Magnetic Energy [W]"],  Color "LightYellow" ];

   Print[ Inductance_from_MagEnergy, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
     File StrCat[Dir,"InductanceE",ExtGnuplot],
     SendToServer StrCat[po,"51Inductance from Magnetic Energy [mH]"], Color "LightYellow" ];
}

DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
