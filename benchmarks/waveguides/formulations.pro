//========================================================
// GetDP code for simulation of EM WAVEGUIDES
//   - Time-harmonic e-formulation (2D/3D)
//   - Edge finite-elements (Form1 for e)
// Contributors: C. Geuzaine, A. Modave
//========================================================

Group{
  DefineGroup[ Domain, BndPEC, Port1, Port2, Port3, Port4, Port5, Port6, Ports ] ;
  SurAll = Region[{BndPEC, Ports}] ;
  VolAll = Region[{Domain}] ;
  TotAll = Region[{VolAll, SurAll}] ;
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

FunctionSpace {
  { Name eSpace2D ; Type Form1P ;
    BasisFunction {
      { Name sn ; NameOfCoef en ; Function BF_PerpendicularEdge ; Support TotAll ; Entity NodesOf[All] ; }
    }
    Constraint {
      { NameOfCoef en ; EntityType NodesOf ; NameOfConstraint eConstraint ; }
    }
  }
  { Name eSpace3D ; Type Form1 ;
    BasisFunction {
      { Name sn ; NameOfCoef en ; Function BF_Edge ; Support TotAll ; Entity EdgesOf[All] ; }
    }
    Constraint {
      { NameOfCoef en ; EntityType EdgesOf ; NameOfConstraint eConstraint ; }
    }
  }
}

Formulation {
  { Name form ; Type FemEquation ;
    Quantity {
      If(DIM==2)
        { Name e ; Type Local ; NameOfSpace eSpace2D ; }
      EndIf
      If(DIM==3)
        { Name e ; Type Local ; NameOfSpace eSpace3D ; }
      EndIf
    }
    Equation {
      
      Galerkin { [ Dof{d e} , {d e} ] ;
                 In Domain ; Integration I1 ; Jacobian Jac ; }
      Galerkin { [ -k0^2*Dof{e} , {e} ] ;
                 In Domain ; Integration I1 ; Jacobian Jac ; }
      
      Galerkin { [ 2*I[]*k0 * Normal[] /\ ( Normal[] /\ eInc[] ) , {e} ] ;
                 In Ports ; Integration I1 ; Jacobian Jac ; }
      Galerkin { [ -I[]*k0 * Normal[] /\ ( Normal[] /\ Dof{e} ) , {e} ] ;
                 In Ports ; Integration I1 ; Jacobian Jac ; }
      
    }
  }
}

Resolution {
  { Name Analysis ;
    System {
      { Name A ; NameOfFormulation form ; Type ComplexValue ; }
    }
    Operation {
      CreateDir[Str[myDir]] ;
      Generate[A] ; Solve[A] ; SaveSolution[A] ;
    }
  }
}

PostProcessing {
  { Name postPro_Field ; NameOfFormulation form ;
    Quantity {
      { Name e ; Value { Local{ [ {e} ] ; In Domain ; Jacobian Jac ; } } }
    }
  }
  { Name postPro_FieldsBnd ; NameOfFormulation form ;
    Quantity {
      { Name eBnd ; Value { Local{ [ {e} ] ; In SurAll ; Jacobian Jac ; } } }
      { Name ePort1 ; Value { Local{ [ ePort1[] ] ; In Port1 ; Jacobian Jac ; } } }
      { Name ePort2 ; Value { Local{ [ ePort2[] ] ; In Port2 ; Jacobian Jac ; } } }
      { Name eInc ; Value { Local{ [ eInc[] ] ; In Ports ; Jacobian Jac ; } } }
      { Name normal ; Value { Local{ [ Normal[] ] ; In SurAll ; Jacobian Jac ; } } }
    }
  }
  { Name postPro_SParameters ; NameOfFormulation form ;
    Quantity {
      If (Flag_ActivePort==1)
        { Name S11 ; Value { Integral{ [ ({e}-ePort1[])*Conj[ePort1[]] / intPort1 ] ; In Port1 ; Jacobian Jac ; Integration I1 ; } } }
        { Name S21 ; Value { Integral{ [ ({e})         *Conj[ePort2[]] / intPort2 ] ; In Port2 ; Jacobian Jac ; Integration I1 ; } } }
        { Name NormS11 ; Value { Local{ [ Norm[#11]^2 ] ; In Port1 ; Jacobian Jac ; } } }
        { Name NormS21 ; Value { Local{ [ Norm[#21]^2 ] ; In Port2 ; Jacobian Jac ; } } }
      EndIf
      If (Flag_ActivePort==2)
        { Name S12 ; Value { Integral{ [ ({e})         *Conj[ePort1[]] / intPort1 ] ; In Port1 ; Jacobian Jac ; Integration I1 ; } } }
        { Name S22 ; Value { Integral{ [ ({e}-ePort2[])*Conj[ePort2[]] / intPort2 ] ; In Port2 ; Jacobian Jac ; Integration I1 ; } } }
        { Name NormS12 ; Value { Local{ [ Norm[#12]^2 ] ; In Port1 ; Jacobian Jac ; } } }
        { Name NormS22 ; Value { Local{ [ Norm[#22]^2 ] ; In Port2 ; Jacobian Jac ; } } }
      EndIf
    }
  }
}

PostOperation {
  { Name Get_Field ; NameOfPostProcessing postPro_Field ;
    Operation {
      Print [ e, OnElementsOf Domain, File StrCat[myDir, "e.pos"]] ;
    }
  }
  { Name Get_FieldsBnd ; NameOfPostProcessing postPro_FieldsBnd ;
    Operation {
      Print [ eBnd, OnElementsOf SurAll, File StrCat[myDir, "eBnd.pos"]] ;
      Print [ ePort1, OnElementsOf Port1, File StrCat[myDir, "ePort1.pos"]] ;
      Print [ ePort2, OnElementsOf Port2, File StrCat[myDir, "ePort2.pos"]] ;
      Print [ eInc, OnElementsOf Ports, File StrCat[myDir, "eInc.pos"]] ;
      Print [ normal, OnElementsOf SurAll, File StrCat[myDir, "normal.pos"]] ;
    }
  }
  { Name Get_SParameters ; NameOfPostProcessing postPro_SParameters ;
    Operation {
      If (Flag_ActivePort==1)
        Print [ S11[Port1], OnRegion Port1, StoreInRegister 11,
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print [ S21[Port2], OnRegion Port2, StoreInRegister 21,
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
        Print [ NormS11[Port1], OnRegion Port1, SendToServer StrCat(catOutput,"0S11"),
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print [ NormS21[Port2], OnRegion Port2, SendToServer StrCat(catOutput,"1S21"),
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
      EndIf
      If (Flag_ActivePort==2)
        Print [ S12[Port1], OnRegion Port1, StoreInRegister 12,
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print [ S22[Port2], OnRegion Port2, StoreInRegister 22,
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
        Print[ NormS12[Port1], OnRegion Port1, SendToServer StrCat(catOutput,"2S12"),
          Format Table, File StrCat[myDir, StrCat["temp1",ExtGnuplot]] ] ;
        Print[ NormS22[Port2], OnRegion Port2, SendToServer StrCat(catOutput,"3S22"),
          Format Table, File StrCat[myDir, StrCat["temp2",ExtGnuplot]] ] ;
      EndIf
    }
  }
}

DefineConstant[
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0},
  MyPostOp = {"Get_Field", Name "Input/1Post-processing",
    Choices{"Get_Field", "Get_FieldsBnd", "Get_SParameters"}, MultipleSelection "1000"},
  P_ = { Str[MyPostOp], Name "GetDP/2PostOperationChoices", Visible 0, ReadOnly 1}
] ;
