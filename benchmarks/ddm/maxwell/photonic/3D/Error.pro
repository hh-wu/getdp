
Jacobian {
  { Name JVol ; Case{ { Region All ; Jacobian Vol ; } } }
  { Name JSur ; Case { { Region All ; Jacobian Sur ; } } }
  { Name JLin ; Case { { Region All ; Jacobian Lin ; } } }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
          { GeoElement Point ; NumberOfPoints  1 ; }
          { GeoElement Line ; NumberOfPoints  4 ; }
          { GeoElement Triangle ; NumberOfPoints 12 ; }
          { GeoElement Quadrangle ; NumberOfPoints 7 ; }
          { GeoElement Tetrahedron ; NumberOfPoints 15 ; }
          { GeoElement Hexahedron ; NumberOfPoints 34 ; }
        }
      }
    }
  }
}


FunctionSpace {
  { Name Herror; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef ee; Function BF_Edge;
        Support Region[{Omega}] ; Entity EdgesOf[All]; }
    }
  }
}
Formulation {
  { Name error;
    Quantity {
      { Name e; Type Local; NameOfSpace Herror; }
    }
    Equation {
      Galerkin { [ Dof{e} , {e} ];
        In Omega; Integration I1; Jacobian JVol;  }
    }
  }
}

Resolution {
  { Name Error ;
    System {
      { Name A ; NameOfFormulation error ; Type Complex; }
    }
    Operation {
      Generate[A];
      GmshRead[Sprintf[PosRef]];
      GmshRead[Sprintf[PosCheck]];
      PostOperation[Error];
    }
  }
}

PostProcessing {
  {Name Error ; NameOfFormulation error ;
    Quantity{
      { Name error ; Value {
          Integral { [ Norm[Field[XYZ[]]{0} - Field[XYZ[]]{1}] / #1 ] ;
            In Where; Jacobian JVol ; Integration I1; } } }
      { Name errorDenom ; Value {
          Integral { [ Norm[Field[XYZ[]]{0}] ] ;
            In Where; Jacobian JVol ; Integration I1; } } }
    }
  }
}

PostOperation {
  { Name Error ; NameOfPostProcessing Error;
    Operation {
      Print[ errorDenom[Omega], OnGlobal, Store 1 ] ;
      Print[ error[Omega], OnGlobal ] ;
    }
  }
}
