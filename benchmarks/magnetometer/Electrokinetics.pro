
eps0 = 8.854187818e-12 ;

Group {
  DefineGroup[ Domain_Ele, DomainC_Ele ] ;
}

Function {
  DefineFunction[ sigma ] ;
}

FunctionSpace {
  { Name Hgrad_v_EleKin ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef vn ; Function BF_Node ;
        Support DomainC_Ele ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef vn ;
        EntityType NodesOf ; NameOfConstraint ElectricScalarPotential ; }
    }
  }
}

Formulation {
  { Name Electrokinetics_v ; Type FemEquation ;
    Quantity {
      { Name v ; Type Local ; NameOfSpace Hgrad_v_EleKin ; }
    }
    Equation {
      Galerkin { [ sigma[] * Dof{d v} , {d v} ] ;
        In DomainC_Ele ; Jacobian Vol ; Integration GradGrad ; }
    }
  }
}

PostProcessing {
  { Name Electrokinetics ; NameOfFormulation Electrokinetics_v ;
    PostQuantity {
      { Name v ; Value { Term { [ {v} ] ;
            In DomainC_Ele ; Jacobian Vol; } } }
      { Name e ; Value { Term { [ -{d v} ] ;
            In DomainC_Ele ; Jacobian Vol; } } }
      { Name j ; Value { Term { [ -sigma[] * {d v} ] ;
            In DomainC_Ele ; Jacobian Vol; } } }
      { Name f ; Value { Term { [ -sigma[] * {d v} /\ bext[] ] ;
            In DomainC_Ele ; Jacobian Vol; } } }
    }
  }
}
