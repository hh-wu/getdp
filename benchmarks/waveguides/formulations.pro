//========================================================
// GetDP code for simulation of EM WAVEGUIDES
//   - Time-harmonic e/h-formulation (2D/3D)
//   - Edge finite-elements (Form1 for e/h)
// Contributors: C. Geuzaine, A. Modave, R. Sabariego
// Convention: Vec(t,x,y,z) = exp(-i\omega t) vec(x,y,z)
// Modified: B. Klein (March 2015)
//========================================================

Group {
  DefineGroup[ Domain, BndABC, BndPEC, BndPMC ] ;
  SurAll = Region[{BndPEC, BndABC}] ;
  VolAll = Region[{Domain}] ;
  TotAll = Region[{VolAll, SurAll}] ;
}

Function {
  DefineConstant[
    Excitation = {1,Name "Input/3Signal/1Excitation Type",
      Choices{1="TE", 2="TM"}},
    SParameters_Format = {3,
      Choices{1="Norm in [dec]", 2="Norm in [dB]", 3="Square of the norm [dec]"},
      Name "Input/2Format of S-parameters (if any)", Highlight "Black"},
    FE_ORDER = {1, Name "Input/4Discretization/Order of elements",
      Choices {1="First order", 2="Second order"}}
  ];
  DefineFunction[ epsR, muR, eInc, hInc ] ;

  // FIXME: syntax only available in GetDP 2.5.1
  //For n In {1:NbPorts}
  //  DefineFunction[ ePort~{n}, hPort~{n} ];
  //EndFor
  DefineFunction[ ePort{NbPorts}, hPort{NbPorts} ];
}

Jacobian {
  { Name Jac ;
    Case {
      { Region SurAll ; Jacobian Sur ; }
      { Region VolAll ; Jacobian Vol ; }
    }
  }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
          { GeoElement Point ; NumberOfPoints  1 ; }
          { GeoElement Line ; NumberOfPoints 8 ; }
          { GeoElement Triangle ; NumberOfPoints 6 ; }
          { GeoElement Quadrangle ; NumberOfPoints 4 ; }
          { GeoElement Tetrahedron ; NumberOfPoints 15 ; }
          { GeoElement Hexahedron ; NumberOfPoints 6 ; }
          { GeoElement Prism ; NumberOfPoints 9 ; }
        }
      }
    }
  }
}

Constraint {
  { Name eConstraint ; Type Assign ;
    Case {
      { Region BndPEC ; Value 0. ; }
    }
  }
  { Name hConstraint ; Type Assign ;
    Case {
      { Region BndPMC ; Value 0. ; }
    }
  }
}

FunctionSpace {
  If ((DIM == 1) || (DIM == 2))
    { Name eSpace ; Type Form1P ;
      BasisFunction {
        { Name sn ; NameOfCoef en ; Function BF_PerpendicularEdge ;
          Support TotAll ; Entity NodesOf[All] ; }
        If (FE_ORDER == 2)
          { Name sn2 ; NameOfCoef en2 ; Function BF_PerpendicularEdge_2E ;
            Support TotAll ; Entity EdgesOf[All] ; }
        EndIf
      }
      Constraint {
        { NameOfCoef en ; EntityType NodesOf ; NameOfConstraint eConstraint ; }
        If (FE_ORDER == 2)
          { NameOfCoef en2 ; EntityType EdgesOf ; NameOfConstraint eConstraint ; }
        EndIf
      }
    }
    { Name hSpace ; Type Form1P ;
      BasisFunction {
        { Name sn ; NameOfCoef en ; Function BF_PerpendicularEdge ;
          Support TotAll ; Entity NodesOf[All] ; }
        If (FE_ORDER == 2)
          { Name sn2 ; NameOfCoef en2 ; Function BF_PerpendicularEdge_2E ;
            Support TotAll ; Entity EdgesOf[All] ; }
        EndIf
      }
      Constraint {
        { NameOfCoef en ; EntityType NodesOf ; NameOfConstraint hConstraint ; }
        If (FE_ORDER == 2)
          { NameOfCoef en2 ; EntityType EdgesOf ; NameOfConstraint hConstraint ; }
        EndIf
      }
    }
  EndIf
  If (DIM == 3)
    { Name eSpace ; Type Form1 ;
      BasisFunction {
        { Name sn ; NameOfCoef en ; Function BF_Edge ;
          Support TotAll ; Entity EdgesOf[All] ; }
        If (FE_ORDER == 2)
          { Name sn2 ; NameOfCoef en2 ; Function BF_Edge_2E ;
            Support TotAll ; Entity EdgesOf[All] ; }
        EndIf
      }
      Constraint {
        { NameOfCoef en ; EntityType EdgesOf ; NameOfConstraint eConstraint ; }
        If (FE_ORDER == 2)
          { NameOfCoef en2 ; EntityType EdgesOf ; NameOfConstraint eConstraint ; }
        EndIf
      }
    }
    { Name hSpace ; Type Form1 ;
      BasisFunction {
        { Name sn ; NameOfCoef en ; Function BF_Edge ;
          Support TotAll ; Entity EdgesOf[All] ; }
        If (FE_ORDER == 2)
          { Name sn2 ; NameOfCoef en2 ; Function BF_Edge_2E ;
            Support TotAll ; Entity EdgesOf[All] ; }
        EndIf
      }
      Constraint {
        { NameOfCoef en ; EntityType EdgesOf ; NameOfConstraint hConstraint ; }
        If (FE_ORDER == 2)
          { NameOfCoef en2 ; EntityType EdgesOf ; NameOfConstraint hConstraint ; }
        EndIf
      }
    }
  EndIf
}

Formulation {
  { Name eFormulation ; Type FemEquation ;
    Quantity {
      { Name e ; Type Local ; NameOfSpace eSpace ; }
    }
    Equation {
      Galerkin { [ (1/muR[]) * Dof{d e} , {d e} ] ;
                 In Domain ; Integration I1 ; Jacobian Jac ; }
               Galerkin { [ -k0^2 * epsR[] * Dof{e}, {e} ] ;
                 In Domain ; Integration I1 ; Jacobian Jac ; }

//      Galerkin { [ Normal[] /\ ( (1/muR[]) * Dof{d e} ) , {e} ] ;
//                 In BndABC ; Integration I1 ; Jacobian Jac ; }

      Galerkin { [ -2*I[]*k0 * (1/muR[]) * Normal[] /\ ( Normal[] /\ eInc[] ) , {e} ] ;
                 In BndABC ; Integration I1 ; Jacobian Jac ; }
      Galerkin { [ I[]*k0 * (1/muR[]) * Normal[] /\ ( Normal[] /\ Dof{e} ) , {e} ] ;
                 In BndABC ; Integration I1 ; Jacobian Jac ; }
    }
  }
  { Name hFormulation ; Type FemEquation ;
    Quantity {
      { Name h ; Type Local ; NameOfSpace hSpace ; }
    }
    Equation {
      Galerkin { [ (1/epsR[]) * Dof{d h} , {d h} ] ;
                 In Domain ; Integration I1 ; Jacobian Jac ; }
      Galerkin { [ -k0^2 * muR[] * Dof{h} , {h} ] ;
                 In Domain ; Integration I1 ; Jacobian Jac ; }

      Galerkin { [ -2*I[]*k0 * (1/epsR[]) * Normal[] /\ ( Normal[] /\ hInc[] ) , {h} ] ;
                 In BndABC ; Integration I1 ; Jacobian Jac ; }
      Galerkin { [ I[]*k0 * (1/epsR[]) * Normal[] /\ ( Normal[] /\ Dof{h} ) , {h} ] ;
                 In BndABC ; Integration I1 ; Jacobian Jac ; }
    }
  }
}

Resolution {
  { Name Analysis ;
    System {
      If (Excitation == 1)
        { Name A ; NameOfFormulation eFormulation ; Type ComplexValue ; }
      EndIf
      If (Excitation == 2)
        { Name A ; NameOfFormulation hFormulation ; Type ComplexValue ; }
      EndIf
    }
    Operation {
      CreateDir[Str[myDir]] ;
      Generate[A] ; Solve[A] ; SaveSolution[A] ;
    }
  }
}

PostProcessing {
  { Name postPro_eField ; NameOfFormulation eFormulation;
    Quantity {
      If (DIM == 2)
        { Name eZ ; Value { Local{ [ CompZ[{e}] ] ; In Domain ; Jacobian Jac ; } } }
      EndIf
      If (DIM == 3)
        { Name e ; Value { Local{ [ {e} ] ; In Domain ; Jacobian Jac ; } } }
        { Name eNorm ; Value { Local{ [ Norm[{e}] ] ; In Domain ; Jacobian Jac ; } } }
      EndIf
      { Name h ; Value{ Local{ [ I[]/(mu0*muR[])*{d e}/(2*Pi*FREQ) ] ;
            In Domain; Jacobian Jac; } } }
      { Name s ; Value{ Local{ [ {e} /\ Conj[ I[]/(mu0*muR[])*{d e}/(2*Pi*FREQ)]] ;
            In Domain ;  Jacobian Jac; } } }
    }
  }
  { Name postPro_hField ; NameOfFormulation hFormulation ;
    Quantity {
      If (DIM == 2)
        { Name hZ ; Value { Local{ [ CompZ[{h}] ] ; In Domain ; Jacobian Jac ; } } }
      EndIf
      If (DIM == 3)
        { Name h ; Value { Local{ [ {h} ] ; In Domain ; Jacobian Jac ; } } }
        { Name hNorm ; Value { Local{ [ Norm[{h}] ] ; In Domain ; Jacobian Jac ; } } }
      EndIf
      { Name e ; Value{ Local{ [ I[]/(eps0*epsR[])*{d h}/(2*Pi*FREQ) ] ;
            In Domain; Jacobian Jac; } } }
      { Name s ; Value{ Local{ [ {h} /\ Conj[ I[]/(mu0*muR[])*{d h}/(2*Pi*FREQ)]] ;
            In Domain ;  Jacobian Jac; } } }
    }
  }
  { Name postPro_eFieldsBnd ; NameOfFormulation eFormulation ;
    Quantity {
      { Name eBnd ; Value { Local{ [ {e} ] ; In SurAll ; Jacobian Jac ; } } }
      For n In {1:NbPorts}
        { Name ePort~{n} ; Value { Local{ [ ePort~{n}[] ] ;
              In Port~{n} ; Jacobian Jac ; } } }
      EndFor
      { Name eInc ; Value { Local{ [ eInc[] ] ; In BndABC ; Jacobian Jac ; } } }
      { Name normal ; Value { Local{ [ Normal[] ] ; In SurAll ; Jacobian Jac ; } } }
    }
	}
  { Name postPro_hFieldsBnd ; NameOfFormulation hFormulation ;
    Quantity {
      { Name hBnd ; Value { Local{ [ {h} ] ; In SurAll ; Jacobian Jac ; } } }
      For n In {1:NbPorts}
        { Name hPort~{n} ; Value { Local{ [ hPort~{n}[] ] ;
              In Port~{n} ; Jacobian Jac ; } } }
      EndFor
      { Name hInc ; Value { Local{ [ hInc[] ] ; In BndABC ; Jacobian Jac ; } } }
      { Name normal ; Value { Local{ [ Normal[] ] ; In SurAll ; Jacobian Jac ; } } }
    }
  }
  { Name postPro_eSParameters ; NameOfFormulation eFormulation ;
    Quantity {
      For n In {1:NbPorts}
        { Name intPort~{n} ;
          Value { Integral { [ ePort~{n}[]*Conj[ePort~{n}[]] ] ;
              In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        If (n == ActivePort)
          { Name xS~{(n*10+ActivePort)} ;
            Value { Integral { [ ({e}-ePort~{n}[])*Conj[ePort~{n}[]] / #(n) ] ;
                In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If (n != ActivePort)
          { Name xS~{(n*10+ActivePort)} ;
            Value { Integral { [ {e}*Conj[ePort~{n}[]] / #(n) ] ;
                In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If (SParameters_Format == 1)
          { Name S~{(n*10+ActivePort)} ;
            Value { Local { [ Norm[#(n*10+ActivePort)] ] ;
                In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If (SParameters_Format == 2)
          { Name S~{(n*10+ActivePort)} ;
            Value { Local { [ -20*Log10[Norm[#(n*10+ActivePort)]] ] ;
                In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If (SParameters_Format == 3)
          { Name S~{(n*10+ActivePort)} ;
            Value { Local { [ Norm[#(n*10+ActivePort)]^2 ] ;
                In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
      EndFor
    }
  }
  { Name postPro_hSParameters ; NameOfFormulation hFormulation ;
    Quantity {
      For n In {1:NbPorts}
        { Name intPort~{n} ;
          Value { Integral { [ hPort~{n}[]*Conj[hPort~{n}[]] ] ;
              In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        If (n == ActivePort)
          { Name xS~{(n*10+ActivePort)} ;
            Value { Integral { [ ({h}-hPort~{n}[])*Conj[hPort~{n}[]] / #(n) ] ;
                In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If (n != ActivePort)
          { Name xS~{(n*10+ActivePort)} ;
            Value { Integral { [ {h}*Conj[hPort~{n}[]] / #(n) ] ;
                In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If (SParameters_Format == 1)
          { Name S~{(n*10+ActivePort)} ;
            Value { Local { [ Norm[#(n*10+ActivePort)] ] ;
                In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If (SParameters_Format == 2)
          { Name S~{(n*10+ActivePort)} ;
            Value { Local { [ -20*Log10[Norm[#(n*10+ActivePort)]] ] ;
                In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If (SParameters_Format == 3)
          { Name S~{(n*10+ActivePort)} ;
            Value { Local { [ Norm[#(n*10+ActivePort)]^2 ] ;
                In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
      EndFor
    }
  }
}

PostOperation {
  If (Excitation==1)
    { Name Get_Field ; NameOfPostProcessing postPro_eField ;
      Operation {
        If (DIM == 2)
          Print [ eZ, OnElementsOf Domain, File StrCat[myDir, "eZ.pos"]] ;
        EndIf
        If (DIM == 3)
          Print [ e, OnElementsOf Domain, File StrCat[myDir, "e.pos"]] ;
          Print [ eNorm, OnElementsOf Domain, File StrCat[myDir, "eNorm.pos"]] ;
        EndIf
        //Print [ h, OnElementsOf Domain, File StrCat[myDir, "h.pos"]] ;
        //Print [ s, OnElementsOf Domain, File StrCat[myDir, "s.pos"]] ;
      }
    }
    { Name Get_FieldsBnd ; NameOfPostProcessing postPro_eFieldsBnd ;
      Operation {
        Print [ normal, OnElementsOf SurAll, File StrCat[myDir, "normal.pos"]] ;
        Print [ eBnd, OnElementsOf SurAll, File StrCat[myDir, "eBnd.pos"]] ;
        Print [ eInc, OnElementsOf BndABC, File StrCat[myDir, "eInc.pos"]] ;
        For n In {1:NbPorts}
          Print [ ePort~{n}, OnElementsOf Port~{n},
            File StrCat[myDir, StrCat["ePort", StrCat[Sprintf("%g",n), ".pos"]]] ] ;
        EndFor
      }
    }
  EndIf
  If (Excitation==2)
    { Name Get_Field ; NameOfPostProcessing postPro_hField ;
      Operation {
        If (DIM == 2)
          Print [ hZ, OnElementsOf Domain, File StrCat[myDir, "hZ.pos"]] ;
        EndIf
        If (DIM == 3)
          Print [ h, OnElementsOf Domain, File StrCat[myDir, "h.pos"]] ;
          Print [ hNorm, OnElementsOf Domain, File StrCat[myDir, "hNorm.pos"]] ;
        EndIf
        //Print [ h, OnElementsOf Domain, File StrCat[myDir, "h.pos"]] ;
        //Print [ s, OnElementsOf Domain, File StrCat[myDir, "s.pos"]] ;
      }
    }
    { Name Get_FieldsBnd ; NameOfPostProcessing postPro_hFieldsBnd ;
      Operation {
        Print [ normal, OnElementsOf SurAll, File StrCat[myDir, "normal.pos"]] ;
        Print [ hBnd, OnElementsOf SurAll, File StrCat[myDir, "hBnd.pos"]] ;
        Print [ hInc, OnElementsOf BndABC, File StrCat[myDir, "hInc.pos"]] ;
        For n In {1:NbPorts}
          Print [ hPort~{n}, OnElementsOf Port~{n},
            File StrCat[myDir, StrCat["hPort", StrCat[Sprintf("%g",n), ".pos"]]] ] ;
        EndFor
      }
    }
  EndIf

  { Name Get_SParameters ;
    If (Excitation == 1)
      NameOfPostProcessing postPro_eSParameters ;
    EndIf
    If (Excitation == 2)
      NameOfPostProcessing postPro_hSParameters ;
    EndIf
    Operation {
      For n In {1:NbPorts}
        Print [ intPort~{n}[Port~{n}], OnRegion Port~{n},
          StoreInRegister (n) ,
          Format Table , File StrCat[myDir, "tmp.dat"]] ;
        Print [ xS~{(n*10+ActivePort)}[Port~{n}], OnRegion Port~{n},
          StoreInRegister (n*10+ActivePort),
          Format Table , File StrCat[myDir, "tmp.dat"]] ;
        Print [ S~{(n*10+ActivePort)}[Port~{n}], OnRegion Port~{n},
          SendToServer StrCat[catOutput,StrCat["0S",Sprintf("%g",n*10+ActivePort)]] {0},
          Format Table , File StrCat[myDir, "tmp.dat"]] ;
      EndFor
    }
  }
}

DefineConstant[
  MyPostOp = {" Get_Field, Get_SParameters",
    Choices{"Get_Field", "Get_FieldsBnd", "Get_SParameters"},
    Name "Input/1Post-processing", MultipleSelection "101"}
] ;

DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0}
  C_ = {"-solve -pos -bin -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = { Str[MyPostOp], Name "GetDP/2PostOperationChoices", Visible 0, ReadOnly 1}
] ;
