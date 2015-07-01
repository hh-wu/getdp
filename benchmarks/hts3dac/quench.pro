//
// ideas for future work: for the quench
//
// - start from Antti's chapter and implement the 1D problem (cf. Matlab code)
//
// - investigate propagation or not of the quench based on the energy; implement
// an automatic loop to detect the quench
//

Group {

}

Function {

}

Jacobian {
  { Name Vol ;
    Case { { Region All ; Jacobian Vol ; } }
  }
  { Name Sur ;
    Case { { Region All ; Jacobian Sur ; } }
  }
  { Name Lin ;
    Case { { Region All ; Jacobian Lin ; } }
  }
}

Integration {
  { Name Int ;
    Case { { Type Gauss ;
	Case {
	  { GeoElement Point       ; NumberOfPoints  1 ; }
	  { GeoElement Line        ; NumberOfPoints  3 ; }
	  { GeoElement Triangle    ; NumberOfPoints  4 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
	  { GeoElement Tetrahedron ; NumberOfPoints  5 ; }
	  { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
	  { GeoElement Prism       ; NumberOfPoints  6 ; }
	}
      } }
  }
}

Constraint {
  { Name InitTemp ;
    Case {
      { Region Omega ; Type Init; Value 4.2 ; }
    }
  }
}

FunctionSpace {
  { Name TSpace; Type Form0;
    BasisFunction {
      { Name sn; NameOfCoef Tn; Function BF_Node;
        Support Omega; Entity NodesOf[All]; }
    }
    Constraint {
      { NameOfCoef Tn; EntityType NodesOf ; NameOfConstraint InitTemp; }
    }
  }

}

Formulation {
  { Name TheDyn; Type FemEquation;
    Quantity {
      { Name T; Type Local; NameOfSpace TSpace; }
    }
    Equation {
      Galerkin { [ - lambda[{T}] * Dof{d T} , {d T} ];
	In Omega; Integration Int; Jacobian Vol;  }
      Galerkin { DtDof [ - gamma[] * C[{T}] * Dof{T} , {T} ];
	In Omega; Integration Int; Jacobian Vol;  }
      Galerkin { [ Q[{T}], {T} ];
	In Omega; Integration Int; Jacobian Vol;  }
    }
  }
}

Resolution {
  { Name TheDyn;
    System {
      { Name A; NameOfFormulation TheDyn; }
    }
    Operation {
      InitSolution[A];
      TimeLoopTheta[time0t, time1t, dtimet[], theta] {
	IterativeLoop[NL_NbrMax, NL_Eps, NL_Relax] {
	  GenerateJac[A]; SolveJac[A];
	}
	SaveSolution[A];
      }
    }
  }

}

PostProcessing {
  { Name TheDyn; NameOfFormulation TheDyn;
    Quantity {
      { Name T; Value{ Local{ [ {T} ] ;
            In Omega; Jacobian Vol; } } }
      { Name q; Value{ Local{ [ - lambda[{T}] * {d T} ] ;
	    In Omega; Jacobian Vol; } } }
    }
  }
}

PostOperation {
  { Name TheDyn ; NameOfPostProcessing TheDyn ;
    Operation {
      Print[ t, OnElementsOf Omega_c2 , File "tThe.pos"] ;
      Print[ q, OnElementsOf Omega_c2 , File "qThe.pos"] ;
      Print[ p, OnElementsOf Omega_c2 , File "pThe.pos"] ;
    }
  }
}
