// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Group {
  DefineGroup[
    Domain, DomainCC, DomainC, DomainL, DomainNL,
    DomainS, DomainB, DomainInf,
    SkinDomainC,
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
    po = "Output/"
  ] ;

}
Include "BH.pro"; // nonlinear BH caracteristic of magnetic material

Group {

  DomainCC = Region[ {Air, AirInf, Core} ];

  //--------------------------------------------------------------
  Nbr_DomainB = 1 ; // Number of stranded inductors
  // Domains for source field computation
  For k In {1:Nbr_DomainB}
    DomainB~{k}     = Region[ {Ind~{k}} ];
    SurfaceCutB~{k} = Region[ {CutInd~{k}} ] ;
    SkinDomainB~{k} = Region[ {SkinInd~{k}} ] ;
    SkinDomainB2~{k}= Region[ {SkinHole~{k}} ] ;
    DomainCC2~{k}   = Region[ {VolInInd~{k}} ] ; // Min=transition layer for cut
    DomainB  += Region[ {Ind~{k}} ];
  EndFor

  DomainS = Region[ {} ];
  DomainCC += Region[ {DomainS, DomainB} ];


  //--------------------------------------------------------------

  If(Flag_Infinity)
    DomainInf = Region[ {AirInf} ];
  EndIf

  DomainC  = Region[ { } ];
  Domain  = Region[ {DomainCC, DomainC} ];

  If(Flag_NL)
    DomainNL = Region[ {Core} ];
    DomainL  = Region[ {Domain,-DomainNL} ];
  EndIf
  DomainDummy = #12345 ; // Dummy region number for postpro with functions

  Surf_FixedMVP = Region[{ Surf_bn0, Surf_Inf }];

}

Function {
  nu [#{Air, AirInf, Inds}]  = 1./mu0 ;

  If(!Flag_NL)
    nu [#{Core}]  = 1/(mur_fe*mu0) ;
  EndIf
  If(Flag_NL)
    nu [ DomainNL ] = nu_EIcore[$1] ;
    dhdb_NL [ DomainNL ] = dhdb_EIcore_NL[$1];
  EndIf

  sigma[#{Inds}] = sigma_coil ;
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

  { Name I_Unit ; // Source field - Unit current - normalizing by the number of turns
    Case {
      { Region CutInd_1 ; Value -NbWires ; }
    }
  }

  // av - formulation
  { Name MVP_3D ;
    Case {
      { Region Surf_bn0 ; Type Assign ; Value 0. ; }
      { Region Surf_Inf ; Type Assign ; Value 0. ; }
    }
  }

  { Name I_3D ;
    Case {
      { Region Ind_1 ; Value II ; TimeFunction IA[]; }
    }
  }

  { Name V_3D ;
    Case {
    }
  }

  { Name MagneticField ;
    Case {
    }
  }
}

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

}

//---------------------------------------------------------------------------------------------

Formulation {

  { Name MagStaDyn_a_3D ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a_3D ; }

      { Name v  ; Type Local ; NameOfSpace Hregion_u_3D ; } //Massive conductor
      { Name U  ; Type Global ; NameOfSpace Hregion_u_3D [U] ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_3D [I] ; }

      { Name hs ; Type Local  ; NameOfSpace Hregion_hs_3D ; } // Stranded
      { Name Ib ; Type Global ; NameOfSpace Hregion_hs_3D [Ib] ; }
      { Name Ub ; Type Global ; NameOfSpace Hregion_hs_3D [Ub] ; }
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
    }
  }

}


Resolution {

  { Name Analysis ;
    System {
      If(Flag_AnalysisType==2)
         { Name Sys ; NameOfFormulation MagStaDyn_a_3D ; Type ComplexValue ; Frequency Freq ; }
      EndIf
      If(Flag_AnalysisType<2)
        { Name Sys ; NameOfFormulation MagStaDyn_a_3D ; }
      EndIf
    }
    Operation {
      CreateDir["res3d/"] ;

      InitSolution[Sys] ;
      PostOperation[Get_Analytical] ; // Values from magnetic circuit

      If(Flag_AnalysisType==0 || Flag_AnalysisType==2)
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
      EndIf // End Flag_AnalysisType==0 (Static) Flag_AnalysisType==2 (Frequency)

      If(Flag_AnalysisType==1)
        TimeLoopTheta[time0, timemax, delta_time, 1.]{ // Euler implicit (1) -- Crank-Nicolson (0.5)
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
      EndIf // End Flag_AnalysisType==1 (Time domain)
    }
  }
}

//-----------------------------------------------------------------------------------------------

PostProcessing {

  { Name MagStaDyn_a_3D ; NameOfFormulation MagStaDyn_a_3D ;
    PostQuantity {
      { Name a ; Value { Term { [ {a} ]          ; In Domain ; Jacobian Vol ; } } }
      { Name b ; Value { Term { [ {d a} ]        ; In Domain ; Jacobian Vol ; } } }
      { Name h ; Value { Term { [ nu[{d a}] * {d a} ] ; In Domain ; Jacobian Vol ; } } }

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

      { Name U ; Value {
          Term { [ {U} ]   ; In Surf_elec ; }
          Term { [ {Ub} ]  ; In DomainB ; } } }
      { Name I ; Value {
          Term { [ {I} ]   ; In Surf_elec ; }
          Term { [ {Ib} ]  ; In DomainB ; } } }

    For k In {0:NbAvailableMagCircuits-1}
      { Name Reluctance~{k} ; Value { Term { Type Global; [ Reluctance~{k}[] ] ; In DomainDummy ; } } }
      { Name Inductance~{k} ; Value { Term { Type Global; [ Inductance~{k}[] ] ; In DomainDummy ; } } }
    EndFor

    { Name Inductance_from_Flux ; Value { Term { Type Global; [ #11*1e3/II ] ; In DomainDummy ; } } } // Flux stored in register #11
    { Name Inductance_from_MagEnergy ; Value { Term { Type Global; [ 2*#22*1e3/(II*II) ] ; In DomainDummy ; } } } // MagEnergy stored in register #22

  }
}
}

//-----------------------------------------------------------------------------------------------
 PostOperation Get_LocalFields UsingPost MagStaDyn_a_3D {
   Print[ js, OnElementsOf DomainB, File StrCat[Dir, StrCat["js",ExtGmsh]], LastTimeStepOnly ] ;
   //Print[ hs, OnElementsOf DomainB, File StrCat[Dir, StrCat["hs",ExtGmsh]], LastTimeStepOnly ] ;
   Print[ b, OnElementsOf Domain, File StrCat[Dir, StrCat["b",ExtGmsh]], LastTimeStepOnly ] ;
 }

 PostOperation Get_Analytical UsingPost MagStaDyn_a_3D {
   For k In {0:NbAvailableMagCircuits-1}
     Print[ Reluctance~{k}, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
       File StrCat[Dir, StrCat[Sprintf("Reluctance%g",k),ExtGnuplot]] ];
     Print[ Inductance~{k}, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
       File StrCat[Dir, StrCat[Sprintf("Inductance%g",k),ExtGnuplot]],
       SendToServer StrCat[po,Sprintf("6%gInductance Magnetic Circuit %g [mH]", k, k)], Color "LightYellow" ];
   EndFor
 }

 PostOperation Get_GlobalQuantities UsingPost MagStaDyn_a_3D {
   Print[ I, OnRegion DomainB, Format Table,
     File > StrCat[Dir, StrCat["I",ExtGnuplot]], LastTimeStepOnly,
     SendToServer StrCat[po,"20I [A]"], Color "LightYellow" ];
   Print[ U, OnRegion DomainB, Format Table,
     File > StrCat[Dir, StrCat["U",ExtGnuplot]], LastTimeStepOnly,
     SendToServer StrCat[po,"30U [V]"], Color "LightYellow" ];

   Print[ Flux[DomainB], OnGlobal, Format TimeTable,
     File > StrCat[Dir, StrCat["Flux",ExtGnuplot]], LastTimeStepOnly, Store 11,
     SendToServer StrCat[po,"40Flux [Wb]"],  Color "LightYellow" ];

   Print[ Inductance_from_Flux, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
    File StrCat[Dir, StrCat["InductanceF",ExtGnuplot]],
    SendToServer StrCat[po,"50Inductance from Flux [mH]"], Color "LightYellow" ];

   Print[ MagEnergy[Domain], OnGlobal, Format TimeTable,
     File > StrCat[Dir, StrCat["ME",ExtGnuplot]], LastTimeStepOnly, Store 22,
     SendToServer StrCat[po,"41Magnetic Energy [W]"],  Color "LightYellow" ];

   Print[ Inductance_from_MagEnergy, OnRegion DomainDummy, Format Table, LastTimeStepOnly,
     File StrCat[Dir, StrCat["InductanceE",ExtGnuplot]],
     SendToServer StrCat[po,"51Inductance from Magnetic Energy [mH]"], Color "LightYellow" ];
}


DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
