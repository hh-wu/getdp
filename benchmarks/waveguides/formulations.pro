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
