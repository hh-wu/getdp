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

Constraint {
  { Name Dirichlet_e;
    Case { { Region GammaScat ; Type AssignFromResolution; NameOfResolution Maxwell_e_Dirichlet ; } } 
  }
  { Name Dirichlet_e_homog ;
    // For idom In {0:N_DOM-1}
    //   Case { { Region GammaC~{idom} ; Type AssignFromResolution; NameOfResolution Maxwell_e_Dirichlet ; } } 
    // EndFor
    Case { { Region GammaC ; Type Assign ; Value 0. ; } } 
  }
}

FunctionSpace {
  { Name Hcurl_e; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef ee; Function BF_Edge; 
	Support Region[{Omega, GammaScat, GammaInf, GammaC}] ; Entity EdgesOf[All]; }
    }
    Constraint {
      { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e; }
      { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog; }
    }
  }
  { Name Hcurl_h; Type Form1;
    BasisFunction {
      { Name sh; NameOfCoef he; Function BF_Edge; 
	Support Region[{Omega, GammaScat, GammaInf}] ; Entity EdgesOf[All]; }
    }
    Constraint {
      { NameOfCoef he; EntityType EdgesOf ; NameOfConstraint Dirichlet_h; }
    }
  }
  
  //With Lagrange Multipliers
  { Name Hcurl_lagrange_e; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef ee; Function BF_Edge;
	Support Region[{Omega, GammaScat, GammaInf, GammaC}] ; Entity EdgesOf[All]; }
    }
    Constraint {
      { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog; }
    }
  }
  { Name Hcurl_lagrange_h; Type Form1;
    BasisFunction {
      { Name sh; NameOfCoef he; Function BF_Edge;
	Support Region[{Omega, GammaScat, GammaInf}] ; Entity EdgesOf[All]; }
    }
    Constraint {
      { NameOfCoef he; EntityType EdgesOf ; NameOfConstraint Dirichlet_h; }
    }
  }

  { Name Hcurl_r; Type Form1;
    BasisFunction {
      { Name ser1; NameOfCoef eer1; Function BF_Edge;
	Support Region[{GammaInf}] ; Entity EdgesOf[All]; }
    }
  }
  
  { Name Hcurl_lagrange_lambda; Type Form1;
    BasisFunction {
      { Name se; NameOfCoef ee; Function BF_Edge;
	Support Region[{GammaScat}] ; Entity EdgesOf[All]; }
    }
    Constraint {
      { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog; }
    }
  }
}

Group{
  TrGr = ElementsOf[ Omega, OnOneSideOf GammaScat ];
}

Formulation {
  { Name Maxwell_e_Dirichlet; // For imposing the source on edges
    Quantity { 
      { Name e; Type Local; NameOfSpace Hcurl_e; }
    }
    Equation {
      Galerkin { [ Dof{e} , {e} ]; 
	In GammaScat; Integration I1; Jacobian JSur;  }
      Galerkin { [ einc[] , {e} ]; 
	In GammaScat; Integration I1; Jacobian JSur;  }
    }
  }
  { Name Maxwell_e; Type FemEquation; 
    Quantity { 
      { Name e; Type Local;  NameOfSpace Hcurl_e; }
      { Name h; Type Local;  NameOfSpace Hcurl_h; }
    }
    Equation {
      Galerkin { [ Dof{d e} , {d e} ]; 
	In Omega; Integration I1; Jacobian JVol;  }
      Galerkin { [ -k[]^2 * Dof{e} , {e} ]; 
	In Omega; Integration I1; Jacobian JVol;  }
      Galerkin { [ I[] * kDtN[] * ( N[] /\ Dof{e} ) /\ N[] , {e} ];
	In GammaInf; Integration I1; Jacobian JSur;  }
      // store magnetic field
      Galerkin { [ Dof{h} , {h} ] ;  
                 In TrGr; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ 1/(I[]*omega[]*mu[]) * Dof{d e}, {h} ] ; 
                 In TrGr; Jacobian JVol ; Integration I1 ; }
    }
  }
  
  //LAGRANGE MULTIPLYER
  { Name Maxwell_Lagrange; Type FemEquation; 
    Quantity { 
      { Name e_lag; Type Local;  NameOfSpace Hcurl_lagrange_e; }
      { Name h_lag; Type Local;  NameOfSpace Hcurl_lagrange_h; }
      { Name lambda; Type Local;  NameOfSpace Hcurl_lagrange_lambda; }
    }
    Equation {
      Galerkin { [ Dof{d e_lag} , {d e_lag} ]; 
	In Omega; Integration I1; Jacobian JVol;  }
      Galerkin { [ -k[]^2 * Dof{e_lag} , {e_lag} ]; 
	In Omega; Integration I1; Jacobian JVol;  }
      Galerkin { [ I[] * kInf[] * (N[]) /\ ( N[] /\ Dof{e_lag} ) , {e_lag} ];
	In GammaInf; Integration I1; Jacobian JSur;  }
      //boundary condition
      Galerkin { [ Dof{lambda} , {e_lag} ] ;  
	In GammaScat; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ Dof{e_lag} , {lambda} ] ;  
	In GammaScat; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ einc[], {lambda} ] ; 
	In GammaScat; Jacobian JSur ; Integration I1 ; }      

      // store magnetic field
      Galerkin { [ Dof{h_lag} , {h_lag} ] ;  
	In TrGr; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ 1/(I[]*omega[]*mu[]) * Dof{d e_lag}, {h_lag} ] ; 
	In TrGr; Jacobian JVol ; Integration I1 ; }
    }
  }
}

Resolution {
  { Name Maxwell_e ;
    System {
      { Name A ; NameOfFormulation Maxwell_e ; Type Complex; }
    }
    Operation { 
      Generate[A] ; Solve[A] ;
    }
  }
  { Name Maxwell_e_Dirichlet;
    System {
      { Name B; NameOfFormulation Maxwell_e_Dirichlet; DestinationSystem A; Type Complex; }
    }
    Operation { 
      Generate B; Solve B; TransferSolution B; 
    }
  }

  { Name Maxwell_Lagrange;
    System {
      { Name A; NameOfFormulation Maxwell_Lagrange; Type Complex; }
    }
    Operation { 
      Generate[A]; Solve[A];
    }
  }

}

PostProcessing {
  { Name Maxwell_e ; NameOfFormulation Maxwell_e ;
    Quantity {
      { Name e ; Value { Local { [ {e} ] ; In GammaScat; Jacobian JSur ; } } }
      { Name h ; Value { Local { [ {h} ] ; In GammaScat; Jacobian JSur ; } } }
      { Name j ; Value { Local { [ N[] /\ ({h} + hinc[]) ] ; In GammaScat; Jacobian JSur ; } } }
      // { Name j_exact ; Value { Local { [ CurrentPerfectlyConductingSphere[XYZ[]]{k, R_INT, Z0} ] ; In GammaScat; Jacobian JSur ; } } }
      { Name e_vol ; Value { Local { [ {e} ] ; In Omega; Jacobian JVol ; } } }
    }
  }

  //lagrange
  {Name Maxwell_Lagrange ; NameOfFormulation Maxwell_Lagrange ;
    Quantity{
      { Name e_lag ; Value { Local { [ {e_lag} ] ; In GammaScat; Jacobian JSur ; } } }
      { Name h_lag ; Value { Local { [ {h_lag} ] ; In GammaScat; Jacobian JSur ; } } }
      { Name e_lag_vol ; Value { Local { [ {e_lag} ] ; In Omega; Jacobian JVol ; } } }
      { Name e_lag_vol_tot ; Value { Local { [ {e_lag} + einc[] ] ; In Omega; Jacobian JVol ; } } }
      /*      { Name error_e ; Value { Local { [ Norm[{e_lag} - {e}] ] ; In GammaScat; Jacobian JSur ; } } }
      { Name error_h ; Value { Local { [ Norm[{h_lag} - {h}]] ; In GammaScat; Jacobian JSur ; } } }
      { Name h_vol ; Value { Local { [ {h} ] ; In Omega; Jacobian JVol ; } } }*/
    }
  }

}

PostOperation {
  { Name Maxwell_e ; NameOfPostProcessing Maxwell_e; 
    Operation {
      Print[ e, OnElementsOf GammaScat, File "e.pos"] ;
      Print[ h, OnElementsOf GammaScat, File "h.pos"] ;
      Print[ j, OnElementsOf GammaScat, File "j.pos"] ;
      // Print[ j_exact, OnElementsOf GammaScat, File "j_exact.pos"] ;
      Print[ e_vol, OnElementsOf Omega, File "e_vol.pos"] ;
    }
  }

  { Name Maxwell_Lagrange ; NameOfPostProcessing Maxwell_Lagrange; 
    Operation {
      Print[ e_lag, OnElementsOf GammaScat, File "e_lag.pos"] ;
      Print[ h_lag, OnElementsOf GammaScat, File "h_lag.pos"] ;
      Print[ e_lag_vol, OnElementsOf Omega, File "e_lag_vol.pos"] ;
      Print[ e_lag_vol_tot, OnElementsOf Omega, File "e_lag_vol_tot.pos"] ;
      /*      Print[ error_e, OnElementsOf GammaScat, File "error_e.pos"] ;
      Print[ error_h, OnElementsOf GammaScat, File "error_h.pos"] ;
      Print[ h_vol, OnElementsOf Omega, File "h_vol.pos"] ;*/
    }
  }
}


Include "DDM_sweep.pro";
