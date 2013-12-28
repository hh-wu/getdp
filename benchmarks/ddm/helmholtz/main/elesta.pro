
Jacobian {
  { Name JVol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name JSur ; Case { { Region All ; Jacobian Sur ; } } }
  { Name JLin ; Case { { Region All ; Jacobian Lin ; } } }
}

Integration {
  { Name I1 ;
    Case { { Type Gauss ; Case {
          { GeoElement Point ; NumberOfPoints  1 ; }
          { GeoElement Line ; NumberOfPoints  2 ; }
          { GeoElement Triangle ; NumberOfPoints  6 ; }
          { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
          { GeoElement Quadrangle ; NumberOfPoints  4 ; }
          { GeoElement Hexahedron ; NumberOfPoints  6 ; }
        } } }
  }
}

Constraint{
  { Name Dirichlet_uinc ; Case { { Region GammaD ; Value uinc[]; } } }
}

FunctionSpace {
  { Name Hgrad_u; Type Form0 ;
    BasisFunction { { Name sn ; NameOfCoef un ; Function BF_Node ;
      Support Region[ {Omega, Sigma, GammaD, GammaN} ] ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet_uinc ; }
    }
  }
}

Formulation {
//FULL
  { Name Full ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace Hgrad_u; }
    }
    Equation {
      Galerkin { [ Dof{Grad u} , {Grad u} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -V_SOURCE[] , {u} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }
    }
  }
}

Resolution {
  {Name Full;
    System { { Name elesta ; NameOfFormulation Full ; Type Complex; NameOfMesh StrCat[MshName, ".msh"];} }
    Operation {
      Generate[elesta] ;
      Solve[elesta] ;
      PostOperation[Full] ;
    }
  }
}

PostProcessing {
  { Name Full ; NameOfFormulation Full ;
    PostQuantity {
      { Name u ; Value { Term { [ {u} ] ; In Region[ {Omega} ]; Jacobian JVol ; } } }
    }
  }
}

PostOperation {
  { Name Full ; NameOfPostProcessing Full;
    Operation {
      Print[ u, OnElementsOf Omega, File "u.pos"] ;
    }
  }
}

Include "DDM_elesta.pro";
