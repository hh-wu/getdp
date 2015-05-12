DefineConstant[ Flag_AnalysisType = 0 ];

Jacobian {
  { Name JVol ;
    Case {
      { Region All ; Jacobian Vol ; }
    }
  }
  { Name JSur ;
    Case {
      { Region All ; Jacobian Sur ; }
    }
  }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
	  { GeoElement Point       ; NumberOfPoints  1 ; }
	  { GeoElement Line        ; NumberOfPoints  3 ; }
	  { GeoElement Triangle    ; NumberOfPoints  4 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
	  { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
	  { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
	  { GeoElement Prism       ; NumberOfPoints  6 ; }
	}
      }
    }
  }
}

FunctionSpace {
  { Name Hgrad_T; Type Form0;
    BasisFunction {
      { Name sn; NameOfCoef Tn; Function BF_Node; Support Tot_The;
        Entity NodesOf[All]; }
    }
    Constraint {
      { NameOfCoef Tn; EntityType NodesOf ; NameOfConstraint Temperature; }
    }
  }

}

Function{
  DefineFunction[Flux,qVol,h,hr,TConv];
}
Group{
  DefineGroup[SurConv_The,SurRad_The];
}

Formulation {

  { Name The_T ; Type FemEquation;
    Quantity {
      { Name T;  Type Local; NameOfSpace Hgrad_T; }
    }
    Equation {
      Galerkin { [ k[] * Dof{d T} , {d T} ];
                 In Vol_The; Integration I1; Jacobian JVol;  }

      Galerkin { DtDof [ rhoc[] * Dof{T} , {T} ];
                 In Vol_The; Integration I1; Jacobian JVol;  }

      Galerkin { [ -qVol[] , {T} ];
                 In Vol_The; Integration I1; Jacobian JVol;  }

      Galerkin { [ -Flux[] , {T} ]; // - sign for incoming flux
                 In Sur_The; Integration I1; Jacobian JSur;  }

      Galerkin { [ h[] * Dof{T} , {T} ] ;
                 In SurConv_The ; Integration I1; Jacobian JSur;  }

      Galerkin { [ -h[] * TConv[] , {T} ] ;
                 In SurConv_The ; Integration I1; Jacobian JSur;  }

      Galerkin { [ hr[{T}] * (({T}+273.)^4-(TConv[]+273.)^4) , {T} ] ;
                 In SurRad_The ; Integration I1; Jacobian JSur;  }
    }
  }

}

Resolution {
  { Name analysis;
    System {
      { Name T; NameOfFormulation The_T; }
    }
    Operation {
      If(Flag_AnalysisType == 0) // steady state
        Generate[T] ; Solve T ; SaveSolution T;
      EndIf
      If(Flag_AnalysisType == 1) // transient general
        InitSolution[T] ; SaveSolution[T] ;
        TimeLoopTheta [t0, t1, dt, 1.0] {
          Generate[T] ; Solve[T];
          Test[SaveFct[]] {
            SaveSolution[T];
          }
        }
      EndIf
      If(Flag_AnalysisType == 2) // transient linear fast
        InitSolution[T] ;  SaveSolution[T] ;
        GenerateSeparate[T] ;
        TimeLoopTheta [t0, t1, dt, 1.0] {
	  Update[T, TimeFct[]] ;
          SolveAgain[T] ;
	  Test[SaveFct[]] {
            SaveSolution[T];
          }
	}
      EndIf
    }
  }
}


PostProcessing {
  { Name The; NameOfFormulation The_T;
    Quantity {
      { Name T; Value{ Local{ [ {T} ] ; In Vol_The; Jacobian JVol; } } }
    }
  }

}
