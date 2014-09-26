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
  // Input constants
  //================
  DefineConstant[
    Val_Rint, Val_Rext, Nb_max_iter = 30, relaxation_factor = 1., stop_criterion = 1e-5, Flag_NL, 
    Flag_NL_Newton_Raphson = {1, Choices{0,1}, Name "Parameters/Materials/2Newton-Raphson iteration", Visible Flag_NL}
  ];
  // Input functions
  //================
  DefineFunction[ mu, nu, hc, js, dhdb, dbdh_NL ];
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
	  { GeoElement Triangle ; NumberOfPoints 1 ; }
	  //{ GeoElement Quadrangle  ; NumberOfPoints 1 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints 4 ; }
	}
      }
    }
  }
}

   
// MagSta_a : Magnetic vector potential a formulation (2D)
//========================================================

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
  { Name MagSta_a_ref ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a}, {d a} ] ;
        In Domain_L ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ h[{d a}], {d a} ] ; 
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL[ dhdb[{d a}] * Dof{d a} , {d a} ] ; 
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -js[] , {a} ] ;
        In Domain_S ; Jacobian JVol ; Integration I1 ; }
    }
  }

  { Name MagSta_a_init ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ] ;
        In Domain_L ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ h[{d a}], {d a} ] ; 
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL[ dhdb[{d a}] * Dof{d a} , {d a} ] ; 
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ hc[] , {d a} ] ;
        In Domain_M ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -js[] , {a} ] ;
        In Domain_S ; Jacobian JVol ; Integration I1 ; }
    }
  }

  { Name MagSta_a_prepro ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ Python[ElementNum[], CompX[{d a}], CompY[{d a} ] ]{"downscale_b.py"} * Dof{d a} , {d a} ] ;
        In Domain ; Jacobian JVol ; Integration I1 ; }
    }
  }
  
  { Name MagSta_a ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a}, {d a} ] ;
        In Domain_L ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Python[ElementNum[]]{"upscale_h.py"} , {d a} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL [ Python[ElementNum[]]{"upscale_dhdb.py"} * Dof{d a} , {d a} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -js[] , {a} ] ;
        In Domain_S ; Jacobian JVol ; Integration I1 ; }
    }
  }
}

Resolution {
  { Name MagSta_a ;
    System {
      { Name A ; NameOfFormulation MagSta_a_ref ; }
    }
    Operation {
      If(!Flag_NL)
        Generate[A] ; Solve[A] ;
      EndIf
      If(Flag_NL)
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          GenerateJac[A] ; SolveJac[A] ;
        }
      EndIf
      SaveSolution[A] ;
      //PostOperation[MagSta_a];
    }
  }

  { Name hmm ;
    System {
      { Name A ; NameOfFormulation MagSta_a_init ; DestinationSystem B; }
      { Name B ; NameOfFormulation MagSta_a_prepro ; }
      { Name C ; NameOfFormulation MagSta_a ; }
    }
    Operation {
      Generate[A] ; Solve[A] ; SaveSolution[A] ; TransferSolution[A];
      IterativeLoop[1, stop_criterion, relaxation_factor]{
        Generate[B] ;
        Evaluate[ Python[]{"compute_meso.py"} ];
        GenerateJac[C] ; SolveJac[C] ;
      }
    }
  }
}

PostProcessing {
  { Name MagSta_a ; NameOfFormulation MagSta_a ;
    Quantity {
      { Name az ; Value { Local { [ CompZ[{a}] ]        ; In Domain   ; Jacobian JVol ; } } }
      { Name a  ; Value { Local { [ {a} ]               ; In Domain   ; Jacobian JVol ; } } }
      { Name b  ; Value { Local { [ {d a} ]             ; In Domain   ; Jacobian JVol ; } } }
      { Name h  ; Value { Local { [ nu[{d a}] * {d a} ] ; In Domain_L ; Jacobian JVol ; }
                          Local { [ h[ {d a}] ]         ; In Domain_NL; Jacobian JVol ; }
                          Local { [ hc[] ]              ; In Domain_M ; Jacobian JVol ; } } }
      { Name hc ; Value { Local { [ hc[] ]              ; In Domain_M ; Jacobian JVol ; } } }
    }
  }
  { Name MagSta_a_hmm ; NameOfFormulation MagSta_a ;
    Quantity {
      { Name az ; Value { Local { [ CompZ[{a}] ]        ; In Domain   ; Jacobian JVol ; } } }
      { Name a  ; Value { Local { [ {a} ]               ; In Domain   ; Jacobian JVol ; } } }
      { Name b  ; Value { Local { [ {d a} ]             ; In Domain   ; Jacobian JVol ; } } }
      { Name h  ; Value { Local { [ nu[{d a}] * {d a} ] ; In Domain_L ; Jacobian JVol ; }
                          Local { [ h[ {d a}] ]         ; In Domain_NL; Jacobian JVol ; }
                          Local { [ hc[] ]              ; In Domain_M ; Jacobian JVol ; } } }
      { Name hc ; Value { Local { [ hc[] ]              ; In Domain_M ; Jacobian JVol ; } } }
    }
  }
}

PostOperation {
  { Name MagSta_a ; NameOfPostProcessing MagSta_a;
    Operation {
      Print[ b,  OnElementsOf Domain, File "res/b.pos" ] ;
      Print[ h,  OnElementsOf Domain, File "res/h.pos" ] ;
      Print[ hc, OnElementsOf Domain, File "res/hc.pos" ] ;
      Print[ az, OnElementsOf Domain, File "res/az.pos" ] ;
      Print[ a , OnElementsOf Domain, File "res/a.pos" ] ;
    }
  }
  { Name MagSta_a_hmm ; NameOfPostProcessing MagSta_a_hmm;
    Operation {
      Print[ b,  OnElementsOf Domain, File "res_hmm/b.pos" ] ;
      Print[ h,  OnElementsOf Domain, File "res_hmm/h.pos" ] ;
      Print[ hc, OnElementsOf Domain, File "res_hmm/hc.pos" ] ;
      Print[ az, OnElementsOf Domain, File "res_hmm/az.pos" ] ;
      Print[ a , OnElementsOf Domain, File "res_hmm/a.pos" ] ;
    }
  }
}
