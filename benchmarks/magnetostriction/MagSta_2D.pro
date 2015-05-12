// Magnetic vector potential a formulation (2D)

Constraint {
  { Name a ;
    Case {
      { Region Boundaries_Air ; Value 0. ; }
    }
  }
}

FunctionSpace {
  { Name Hcurl_a ; Type Form1P ;
    BasisFunction {
      { Name se ; NameOfCoef ae ; Function BF_PerpendicularEdge ;
        Support Domain_Mag ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef ae ; EntityType NodesOf ; NameOfConstraint a ; }
    }
  }
}

Formulation {
  { Name MagSta_a ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ] ;
                 In Domain_Mag ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ -js[] , {a} ] ;
                 In Domain_Courant ; Jacobian Vol ; Integration GradGrad ; }
    }
  }
}

Resolution {
  { Name MagSta_a ;
    System {
      { Name A ; NameOfFormulation MagSta_a ; }
    }
    Operation {
      Generate[A] ; Solve[A] ;
      SaveSolution[A];
    }
  }
}

PostProcessing {
  { Name MagSta_a ; NameOfFormulation MagSta_a ;
    Quantity {
      { Name az ; Value { Local { [ CompZ[{a}] ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name b ; Value { Local { [ {d a} ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name bn ; Value { Local { [ Norm[{d a} ]] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name j ; Value { Term { [ CompZ[ js[] ] ] ; In Domain_Courant ; Jacobian Vol ; } } }
      { Name a ; Value { Local { [ {a} ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name h ; Value { Local { [ nu[] * {d a} ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name W ; Value { Term { [ nu[{d a}] * Norm [{d a}]*Norm [{d a}]/2 ] ; In Domain_Mag ; Jacobian Vol ; } } }
    }
  }
}
