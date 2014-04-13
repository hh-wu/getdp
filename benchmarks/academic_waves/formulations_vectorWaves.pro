//========================================================
// GetDP code for simulations with VECTOR WAVES
//  * Vector-wave equation 2D/3D
//    Edge finite-elements (Form1 for e)
//========================================================

Function{
  DefineFunction[ fNeumann, fDirichlet ] ; 
}

Group{
  DefineGroup[ Omega, GammaD, GammaN, GammaR ] ;
  SurAll = Region[{GammaD, GammaN, GammaR }] ;
  VolAll = Region[{Omega}] ;
  TotAll = Region[{VolAll,SurAll}] ;
}

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
  { Name eSpace ; Type Form1 ;
    BasisFunction {
      { Name se ; NameOfCoef ee ; Function BF_Edge ;
        Support TotAll ; Entity EdgesOf[All] ; }
    }
  }
  { Name eSpace_DirichletBC; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef ee; Function BF_Edge;
        Support GammaD; Entity EdgesOf[GammaD]; }
    }
  }
}

Formulation {
  { Name Form ; Type FemEquation ;
    Quantity {
      { Name e ; Type Local ; NameOfSpace eSpace ; }
      { Name lambda ; Type Local ; NameOfSpace eSpace_DirichletBC ; }
    }
    Equation {
      Galerkin { DtDtDof [ epsilon[] * Dof{e} , {e} ] ;
                 In VolAll ; Integration I1 ; Jacobian JVol ; }
      Galerkin { [ nu[] * Dof{d e} , {d e} ] ;
                 In VolAll ; Integration I1 ; Jacobian JVol ; }
      
      // BC: Dirichlet
      Galerkin { [ Dof{lambda} , {e} ];
                 In GammaD; Integration I1; Jacobian JSur; }
      Galerkin { [ Dof{e} , {lambda} ];
                 In GammaD; Integration I1; Jacobian JSur; }
      Galerkin { [ -fDirichlet[], {lambda} ];
                 In GammaD; Integration I1; Jacobian JSur; }
      
      // BC: Radiation
      Galerkin { [ I[]*k * nu[] * ( extNormal[] /\ Dof{e} ) /\ extNormal[] , {e} ] ;
                 In GammaR ; Integration I1 ; Jacobian JSur ;  }
    }
  }
}

Resolution {
  { Name Reso ;
    System {
      { Name A ; NameOfFormulation Form ; Type Complex ; Frequency Freq ; }
    }
    Operation {
      Generate[A] ;
      Solve[A] ;
      SaveSolution[A] ;
    }
  }
}
