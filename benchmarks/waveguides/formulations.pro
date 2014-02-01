//========================================================
// GetDP code for simulation of EM WAVEGUIDES
//   - Time-harmonic e/h-formulation (2D/3D)
//   - Edge finite-elements (Form1 for e/h)
// Contributors: C. Geuzaine, A. Modave, R. Sabariego
// Convention: Vec(t,x,y,z) = exp(-i\omega t) vec(x,y,z)
//========================================================

Group {
  DefineGroup[ Domain, BndABC, BndPEC, BndPMC ] ;
  SurAll = Region[{BndPEC, BndABC}] ;
  VolAll = Region[{Domain}] ;
  TotAll = Region[{VolAll, SurAll}] ;
}

Function {
  DefineFunction[ epsR, muR, eInc, hInc ] ;
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
          { GeoElement Line ; NumberOfPoints 4 ; }
          { GeoElement Triangle ; NumberOfPoints 4 ; }
          { GeoElement Quadrangle ; NumberOfPoints 4 ; }
          { GeoElement Tetrahedron ; NumberOfPoints 4 ; }
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
  If ((DIM==1) || (DIM==2))
    { Name eSpace ; Type Form1P ;
      BasisFunction {
        { Name sn ; NameOfCoef en ; Function BF_PerpendicularEdge ; Support TotAll ; Entity NodesOf[All] ; }
      }
      Constraint {
        { NameOfCoef en ; EntityType NodesOf ; NameOfConstraint eConstraint ; }
      }
    }
    { Name hSpace ; Type Form1P ;
      BasisFunction {
        { Name sn ; NameOfCoef en ; Function BF_PerpendicularEdge ; Support TotAll ; Entity NodesOf[All] ; }
      }
      Constraint {
        { NameOfCoef en ; EntityType NodesOf ; NameOfConstraint hConstraint ; }
      }
    }
  EndIf
  If (DIM==3)
    { Name eSpace ; Type Form1 ;
      BasisFunction {
        { Name sn ; NameOfCoef en ; Function BF_Edge ; Support TotAll ; Entity EdgesOf[All] ; }
      }
      Constraint {
        { NameOfCoef en ; EntityType EdgesOf ; NameOfConstraint eConstraint ; }
      }
    }
    { Name hSpace ; Type Form1 ;
      BasisFunction {
        { Name sn ; NameOfCoef en ; Function BF_Edge ; Support TotAll ; Entity EdgesOf[All] ; }
      }
      Constraint {
        { NameOfCoef en ; EntityType EdgesOf ; NameOfConstraint hConstraint ; }
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
      Galerkin { [ -k0^2 * epsR[] * Dof{e} , {e} ] ;
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
  { Name eFormulation ;
    System {
      { Name A ; NameOfFormulation eFormulation ; Type ComplexValue ; }
    }
    Operation {
      CreateDir[Str[myDir]] ;
      Generate[A] ; Solve[A] ; SaveSolution[A] ;
    }
  }
  { Name hFormulation ;
    System {
      { Name A ; NameOfFormulation hFormulation ; Type ComplexValue ; }
    }
    Operation {
      CreateDir[Str[myDir]] ;
      Generate[A] ; Solve[A] ; SaveSolution[A] ;
    }
  }
}

DefineConstant[
  SParameters_Format = {1, Choices{1="Norm in [dec]", 2="Norm in [dB]", 3="Square of the norm [dec]"},
    Name "Input/2Format of S-parameters (if any)", Highlight "Black"}
] ;

PostProcessing {
  { Name postPro_Field ; NameOfFormulation eFormulation ;
    Quantity {
      If (DIM==2)
        { Name eZ ; Value { Local{ [ CompZ[{e}] ] ; In Domain ; Jacobian Jac ; } } }
      EndIf
      If (DIM==3)
        { Name e ; Value { Local{ [ {e} ] ; In Domain ; Jacobian Jac ; } } }
      EndIf
    }
  }
  { Name postPro_FieldsBnd ; NameOfFormulation eFormulation ;
    Quantity {
      { Name eBnd ; Value { Local{ [ {e} ] ; In SurAll ; Jacobian Jac ; } } }
      For n In {1:NbPorts}
        { Name ePort~{n} ; Value { Local{ [ ePort~{n}[] ] ; In Port~{n} ; Jacobian Jac ; } } }
      EndFor
      { Name eInc ; Value { Local{ [ eInc[] ] ; In BndABC ; Jacobian Jac ; } } }
      { Name normal ; Value { Local{ [ Normal[] ] ; In SurAll ; Jacobian Jac ; } } }
    }
  }
  { Name postPro_SParameters ; NameOfFormulation eFormulation ;
    Quantity {
      For n In {1:NbPorts}
        { Name intPort~{n} ; Value { Integral { [ ePort~{n}[]*Conj[ePort~{n}[]] ] ; In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        If ( n == ActivePort )
          { Name xS~{(n*10+ActivePort)} ; Value { Integral { [ ({e}-ePort~{n}[])*Conj[ePort~{n}[]] / #(n) ] ; In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If ( n != ActivePort )
          { Name xS~{(n*10+ActivePort)} ; Value { Integral { [ {e}*Conj[ePort~{n}[]] / #(n) ] ; In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If ( SParameters_Format == 1 )
          { Name S~{(n*10+ActivePort)} ; Value { Local { [ Norm[#(n*10+ActivePort)] ] ; In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If ( SParameters_Format == 2 )
          { Name S~{(n*10+ActivePort)} ; Value { Local { [ -20*Log10[Norm[#(n*10+ActivePort)]] ] ; In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
        If ( SParameters_Format == 3 )
          { Name S~{(n*10+ActivePort)} ; Value { Local { [ Norm[#(n*10+ActivePort)]^2 ] ; In Port~{n} ; Jacobian Jac ; Integration I1 ; } } }
        EndIf
      EndFor
    }
  }
}

PostOperation {
  { Name Get_Field ; NameOfPostProcessing postPro_Field ;
    Operation {
      If (DIM==2)
        Print [ eZ, OnElementsOf Domain, File StrCat[myDir, "eZ.pos"]] ;
      EndIf
      If (DIM==3)
        Print [ e, OnElementsOf Domain, File StrCat[myDir, "e.pos"]] ;
      EndIf
    }
  }
  { Name Get_FieldsBnd ; NameOfPostProcessing postPro_FieldsBnd ;
    Operation {
      Print [ normal, OnElementsOf SurAll, File StrCat[myDir, "normal.pos"]] ;
      Print [ eBnd, OnElementsOf SurAll, File StrCat[myDir, "eBnd.pos"]] ;
      Print [ eInc, OnElementsOf BndABC, File StrCat[myDir, "eInc.pos"]] ;
      For n In {1:NbPorts}
        Print [ ePort~{n}, OnElementsOf Port~{n}, File StrCat[myDir,StrCat["ePort",StrCat[Sprintf("%g",n),".pos"]]]] ;
      EndFor
    }
  }
  { Name Get_SParameters ; NameOfPostProcessing postPro_SParameters ;
    Operation {
      For n In {1:NbPorts}
        Print [ intPort~{n}[Port~{n}], OnRegion Port~{n}, StoreInRegister (n),
          Format Table, File StrCat[myDir, StrCat["temp~{n}",ExtGnuplot]] ] ;
        Print [ xS~{(n*10+ActivePort)}[Port~{n}], OnRegion Port~{n}, StoreInRegister (n*10+ActivePort),
          Format Table, File StrCat[myDir, StrCat["temp~{(n*10+ActivePort)}",ExtGnuplot]] ] ;
        Print [ S~{(n*10+ActivePort)}[Port~{n}], OnRegion Port~{n}, SendToServer StrCat(catOutput,StrCat("0S",Sprintf("%g",n*10+ActivePort))),
          Format Table, File StrCat[myDir, StrCat["temp",Sprintf("%g",n*10+ActivePort)]] ] ;
      EndFor
    }
  }
}

DefineConstant[
  MyPostOp = {" Get_Field, Get_SParameters", Choices{"Get_Field", "Get_FieldsBnd", "Get_SParameters"},
    Name "Input/1Post-processing", MultipleSelection "101"}
] ;

DefineConstant[
  R_ = {"eFormulation", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = { Str[MyPostOp], Name "GetDP/2PostOperationChoices", Visible 0, ReadOnly 1}
] ;
