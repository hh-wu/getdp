Include "hpddm_data.geo";

Group {
  If(N == 1)
    Omega~{1} = Region[ {1} ];
    Pnt = Region[ {2} ];
    Omega = Omega~{1};
  Else
    For i In {1:N}
      Omega~{i} = Region[ (1*1000+i) ];
      Omega += Region[ Omega~{i} ];
    EndFor
    Pnt = Region[ {(2*1000)} ];
  EndIf
}

Jacobian {
  { Name Vol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name Lin ; Case { { Region All ; Jacobian Lin ; } } }
}

Integration {
  { Name Int ; Case { { Type Gauss ;
    Case {
      { GeoElement Tetrahedron ; NumberOfPoints 4 ; }
      { GeoElement Triangle ; NumberOfPoints 4 ; }
      { GeoElement Point ; NumberOfPoints 1 ; }
    } } } }
}

FunctionSpace {
  { Name fs ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef vn ; Function BF_Node ;
        Support Region[{Omega, Pnt}] ; Entity NodesOf[ All ] ; }
    }
  }
}

Formulation {
  { Name f ; Type FemEquation ;
    Quantity {
      { Name v ; Type Local ; NameOfSpace fs ; }
    }
    Equation {
      Galerkin { [ - Dof{d v} , {d v} ] ; In Omega ; Jacobian Vol ; Integration Int ; }
      Galerkin { [ Dof{v} , {v} ] ; In Omega ; Jacobian Vol ; Integration Int ; }
      Galerkin { [ 1, {v} ] ; In Pnt ; Jacobian Lin ; Integration Int ; }
    }
  }
}

Resolution {
  { Name r ;
    System {
      { Name A ; NameOfFormulation f ; }
      For i In {1:N}
        { Name A~{i} ; NameOfFormulation f ; }
      EndFor
    }
    Operation {
      Generate[A]; Print[A]; Solve[A] ; SaveSolution[A] ;
      HPDDMSolve[A];

      For i In {1:N}
        GenerateGroup[A~{i}, Region[ { Omega~{i}, Pnt} ]]; Print[A~{i}];
      EndFor

    }
  }
}

PostProcessing {
  { Name p ; NameOfFormulation f  ; NameOfSystem A;
    Quantity {
      { Name v ; Value { Term { [ {v} ] ; In Omega ; Jacobian Vol; } } }
    }
  }
}

PostOperation{
  { Name po ; NameOfPostProcessing p;
    Operation {
      Print[ v , OnElementsOf Omega , File "v.pos" ] ;
    }
  }
}
