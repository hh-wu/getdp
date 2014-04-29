Group {
  // Input groups:
  DefineGroup[
    Domain_M = {{},
      Name "Regions/0Sources/Permanent magnets"},
    Domain_S = {{},
      Name "Regions/0Sources/Inductor (imposed j_s)"},
    Domain_Inf = {{},
      Name "Regions/0Special regions/Infinite domain (spherical shell)",
      Closed "1"},
    Domain_Mag = {{},
      Name "Regions/Other regions/Passive magnetic regions"},
    Dirichlet_phi_0 = {{},
      Name "Regions/0Boundary conditions/h_t = 0", Closed "1"},
    Dirichlet_a_0 = {{},
      Name "Regions/0Boundary conditions/b_n = 0"} ];

  DefineGroup[ Domain = {{Domain_Mag, Domain_M, Domain_S, Domain_Inf},
      Name "Regions/Computational domain", Visible 0} ];
}

Function{
  // Input constants:
  DefineConstant[
    Val_Rint, Val_Rext // interior/exterior radius of Domain_Inf
    Nb_max_iter        = 30,
    relaxation_factor  = 1,
    stop_criterion     = 1e-5,
    //R_ = {"MagSta_phi", Name "GetDP/1ResolutionChoices", Visible 0},
    C_ = {"-solve -v2", Name "GetDP/9ComputeCommand", Visible 0},
    P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
  ];


  // Input functions:
  DefineFunction[ mu, // magnetic permeability
                  nu, // magnetic reluctivity
                  hc, // coercive magnetic field
                  js // source current density
                  dhdb_NL, dbdh_NL // part of the Jacobian matrix need for Newton-Raphson
                  ];

  // remove this: only for demo
  //DefineConstant[ hcx = {0, Label "Coercive field h_x", Path "Sources"}];
  //DefineConstant[ hcy = {1000, Label "Coercive field h_y", Path "Sources"}];
  //hc[] = Vector[hcx,hcy,0];
  //mu[] = 4*Pi*10^-7;
  //nu[] = 1/mu[];
}

Jacobian {
  { Name JVol ;
    Case {
      { Region Domain_Inf ; Jacobian VolSphShell{Val_Rint, Val_Rext} ; }
      { Region All ; Jacobian Vol ; }
    }
  }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
	  { GeoElement Triangle ; NumberOfPoints 4 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints 4 ; }
	}
      }
    }
  }
}


/* --------------------------------------------------------------------------
   MagSta_phi : Magnetic scalar potential phi formulation
   -------------------------------------------------------------------------- */

Constraint {
  { Name phi ;
    Case {
      { Region Dirichlet_phi_0 ; Value 0. ; }
    }
  }
}

FunctionSpace {
  { Name Hgrad_phi ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef phin ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef phin ; EntityType NodesOf ; NameOfConstraint phi ; }
    }
  }
}

Formulation {
  { Name MagSta_phi ; Type FemEquation ;
    Quantity {
      { Name phi ; Type Local ; NameOfSpace Hgrad_phi ; }
    }
    Equation {
      Galerkin { [ - mu[-{d phi}] * Dof{d phi} , {d phi} ] ;
        In Domain ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL [ - dbdh_NL[-{d phi}] * Dof{d phi} , {d phi} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ - mu[] * hc[] , {d phi} ] ;
        In Domain_M ; Jacobian JVol ; Integration I1 ; }
    }
  }
}

Resolution {
  { Name MagSta_phi ;
    System {
      { Name A ; NameOfFormulation MagSta_phi ; }
    }
    Operation {
      If(!Flag_NL)
        Generate[A] ; Solve[A] ;
      EndIf
      If(Flag_NL)
        //IterativeLoopN[ Nb_max_iter, relaxation_factor,
        //                System { {A, reltol, abstol, Solution MeanL2Norm}}]{
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          GenerateJac[A] ; SolveJac[A] ; }
      EndIf
      SaveSolution[A] ;
      PostOperation[MagSta_phi] ;
    }
  }
}

PostProcessing {
  { Name MagSta_phi ; NameOfFormulation MagSta_phi ;
    Quantity {
      { Name b   ; Value { Local { [ - mu[-{d phi}] * {d phi} ] ; In Domain ; Jacobian JVol ; }
                           Local { [ - mu[] * hc[] ]    ; In Domain_M ; Jacobian JVol ; } } }
      { Name h   ; Value { Local { [ - {d phi} ]        ; In Domain ; Jacobian JVol ; } } }
      { Name hc  ; Value { Local { [ hc[] ]             ; In Domain_M ; Jacobian JVol ; } } }
      { Name phi ; Value { Local { [ {phi} ]            ; In Domain ; Jacobian JVol ; } } }
    }
  }
}

PostOperation {
  { Name MagSta_phi ; NameOfPostProcessing MagSta_phi;
    Operation {
      Print[ b, OnElementsOf Domain, File "MagSta_phi_b.pos" ] ;
      Print[ h, OnElementsOf Domain, File "MagSta_phi_h.pos" ] ;
      Print[ hc, OnElementsOf Domain, File "MagSta_a_hc.pos" ] ;
      Print[ phi, OnElementsOf Domain, File "MagSta_phi_phi.pos" ] ;
    }
  }
}

/* --------------------------------------------------------------------------
   MagSta_a : Magnetic vector potential a formulation (2D)
   -------------------------------------------------------------------------- */

Constraint {
  { Name a ;
    Case {
      { Region Dirichlet_a_0 ; Value 0. ; }
    }
  }
}

FunctionSpace {

  { Name Hcurl_a ; Type Form1P ;
    BasisFunction {
      { Name se ; NameOfCoef ae ; Function BF_PerpendicularEdge ;
        Support Domain ; Entity NodesOf[ All ] ; }
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
                 In Domain ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d a} ] ;
                 In Domain_NL ; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ hc[] , {d a} ] ;
                 In Domain_M ; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ -js[] , {a} ] ;
                 In Domain_S ; Jacobian JVol ; Integration I1 ; }
    }
  }
}

Resolution {
  { Name MagSta_a ;
    System {
      { Name A ; NameOfFormulation MagSta_a ; }
    }
    Operation {
      If(!Flag_NL)
        Generate[A] ; Solve[A] ;
      EndIf
      If(Flag_NL)
        //IterativeLoopN[ Nb_max_iter, relaxation_factor, System { {A, reltol, abstol, Solution MeanL2Norm}}]{
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          GenerateJac[A] ; SolveJac[A] ; }
      EndIf
      SaveSolution[A] ;
      PostOperation[MagSta_a];
    }
  }
}

PostProcessing {
  { Name MagSta_a ; NameOfFormulation MagSta_a ;
    Quantity {
      { Name az ; Value { Local { [ CompZ[{a}] ]   ; In Domain ; Jacobian JVol ; } } }
      { Name b ; Value { Local { [ {d a} ]        ; In Domain ; Jacobian JVol ; } } }
      { Name a ; Value { Local { [ {a} ]          ; In Domain ; Jacobian JVol ; } } }
      { Name h ; Value { Local { [ nu[{d a}] * {d a} ] ; In Domain ; Jacobian JVol ; }
                         Local { [ hc[] ]         ; In Domain_M ; Jacobian JVol ; } } }
      { Name hc  ; Value { Local { [ hc[] ]       ; In Domain_M ; Jacobian JVol ; } } }
    }
  }
}

PostOperation {
  { Name MagSta_a ; NameOfPostProcessing MagSta_a;
    Operation {
      Print[ b, OnElementsOf Domain, File "MagSta_a_b.pos" ] ;
      Print[ h, OnElementsOf Domain, File "MagSta_a_h.pos" ] ;
      Print[ hc, OnElementsOf Domain, File "MagSta_a_hc.pos" ] ;
      Print[ az, OnElementsOf Domain, File "MagSta_az_a.pos" ] ;
    }
  }
}
