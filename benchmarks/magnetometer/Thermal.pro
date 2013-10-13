FunctionSpace {
  { Name Hgrad_T; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef Tn ; Function BF_Node ;
        Support Domain_The ; Entity NodesOf[All] ; }
    }
    Constraint {
      { NameOfCoef Tn ; EntityType NodesOf ; NameOfConstraint Temperature ; }
    }
  }
}

Formulation {
  { Name Thermal_T ; Type FemEquation ;
    Quantity {
      { Name T ; Type Local ; NameOfSpace Hgrad_T ; }
      { Name v ; Type Local ; NameOfSpace Hgrad_v_EleKin ; }
    }
    Equation {

      Galerkin { [ lambda[]  * Dof{d T} , {d T} ] ;
                 In Domain_The; Integration GradGrad ; Jacobian Vol ; }

      Galerkin { DtDof[ rhoc[]  * Dof{T} , {T} ] ;
                 In Domain_The; Integration GradGrad ; Jacobian Vol ; }

      Galerkin { [ - /* 0.5 * */ 1/sigma[] * SquNorm[sigma[]*{d v}] , {T} ] ;
                 In Domain_The ; Integration GradGrad ; Jacobian Vol ; }
      /*
      Galerkin { [ h[] * Dof{T} , {T} ] ; // Convection boundary condition
                 In SurfaceConv_The ; Integration GradGrad ; Jacobian Sur ; }
      Galerkin { [ -h[] * TemperatureConv[] , {T} ] ;
                 In SurfaceConv_The ; Integration GradGrad ; Jacobian Sur ; }
      */
      /*
      Galerkin { [ rad[] * {T}^4 , {T} ] ; // Convection boundary condition
                 In SurfaceConv_The ; Integration GradGrad ; Jacobian Sur ; }
      Galerkin { [ -rad[] * TemperatureConv[]^4 , {T} ] ;
                 In SurfaceConv_The ; Integration GradGrad ; Jacobian Sur ; }
      */
    }
  }
}

PostProcessing {
  { Name Thermal ; NameOfFormulation Thermal_T ;
    PostQuantity {
      { Name T ; Value { Term { [ {T} ] ;
            In Domain_The; Jacobian Vol ; } } }
   }
  }
}
