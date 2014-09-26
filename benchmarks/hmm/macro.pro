Include "macro.dat";

Group {
  Air      = Region[ AIR ];
  Core     = Region[ CONDUCTOR ];
  Inductor = Region[ {INDUCTOR} ] ;
  Infinity = Region[ {OMEGA_INF} ] ;

  Domain_S   = Region[ {Inductor} ] ;
  Domain_Inf = Region[ {Infinity} ] ;
  Domain_NL  = Region[ {Core} ] ;
  Domain_L   = Region[ {Air, Domain_S, Domain_Inf} ] ;
  Domain = Region[ {Core, Air, Domain_S, Domain_Inf} ] ;
  Dirichlet_a_0   = Region[ {GAMMA_INF} ] ;
}

Function {
  mu0               = 4.e-7 * Pi ;
  nu [ Air ]        = 1. / mu0 ;
  nu [ Inductor ]   = 1. / mu0 ;
  nu [ Domain_Inf]  = 1. / mu0 ;

  aa              = 388;
  bb              = 0.3774;
  cc              = 2.97;
  nu[ Core ]      = aa + bb * Exp[cc*SquNorm[$1]] ;
  dnudb2[ Core ]  = bb *cc* Exp[cc*SquNorm[$1]] ;
  h[ Core ]       = nu[$1#1] * #1 ;
  dhdb[ Core ]    = TensorDiag[1,1,1] * nu[$1#1] + 2 * dnudb2[#1] * SquDyadicProduct[#1]  ;
  dhdb_NL[ Core ] = 2 * dnudb2[$1#1] * SquDyadicProduct[#1]  ;
  js[]            = Vector[0., 0., 50e8];

  Nb_max_iter = 10;
  relaxation_factor = 1.;
  stop_criterion = 1e-4;
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
          { GeoElement Quadrangle  ; NumberOfPoints 1 ; }
	}
      }
    }
  }
}

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

  { Name MagSta_a_hmm_init_field ; Type FemEquation ;
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
      Galerkin { [ -js[] , {a} ] ;
        In Domain_S ; Jacobian JVol ; Integration I1 ; }
    }
  }

  { Name MagSta_a_hmm_init_downscaling ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ Dof{d a} , {d a} ] ;
        In Domain ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Python[ElementNum[], CompZ[{a}], CompX[{d a}], CompY[{d a} ] ]{"hmm_downscale_b.py"} * Dof{d a} , {d a} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
    }
  }

  { Name MagSta_a_hmm ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a}, {d a} ] ;
        In Domain_L ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Python[ElementNum[]]{"hmm_upscale_h.py"} , {d a} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL [ Python[ElementNum[]]{"hmm_upscale_dhdb.py"} * Dof{d a} , {d a} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -js[] , {a} ] ;
        In Domain_S ; Jacobian JVol ; Integration I1 ; }
    }
  }
}

Resolution {
  { Name MagSta_a_ref ;
    System {
      { Name A ; NameOfFormulation MagSta_a_ref ; }
    }
    Operation {
      CreateDirectory["res_ref"];
      IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
        GenerateJac[A] ; SolveJac[A] ;
      }
      SaveSolution[A] ;
      //PostOperation[MagSta_a];
    }
  }

  { Name MagSta_a_hmm ;
    System {
      { Name A ; NameOfFormulation MagSta_a_hmm_init_field ; DestinationSystem B; }
      { Name B ; NameOfFormulation MagSta_a_hmm_init_downscaling ; }
      { Name C ; NameOfFormulation MagSta_a_hmm ; }
    }
    Operation {
      CreateDirectory["res_hmm"];

      Evaluate[ Python[]{"hmm_initialize.py"} ];

      IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
        GenerateJac[A] ; SolveJac[A] ;
      }
      SaveSolution[A] ; TransferSolution[A];

      IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
        Generate[B] ;
        Evaluate[ Python[]{"hmm_compute_meso.py"} ];
        GenerateJac[C] ; SolveJac[C] ;
      }
      SaveSolution[C];
    }
  }
}

PostProcessing {
  { Name MagSta_a_ref ; NameOfFormulation MagSta_a_ref ;
    Quantity {
      { Name az ; Value { Local { [ CompZ[{a}] ]        ; In Domain   ; Jacobian JVol ; } } }
      { Name a  ; Value { Local { [ {a} ]               ; In Domain   ; Jacobian JVol ; } } }
      { Name b  ; Value { Local { [ {d a} ]             ; In Domain   ; Jacobian JVol ; } } }
      { Name h  ; Value { Local { [ nu[{d a}] * {d a} ] ; In Domain_L ; Jacobian JVol ; }
                          Local { [ h[ {d a}] ]         ; In Domain_NL; Jacobian JVol ; } } }
    }
  }
  { Name MagSta_a_hmm ; NameOfFormulation MagSta_a_hmm ;
    Quantity {
      { Name az ; Value { Local { [ CompZ[{a}] ]        ; In Domain   ; Jacobian JVol ; } } }
      { Name a  ; Value { Local { [ {a} ]               ; In Domain   ; Jacobian JVol ; } } }
      { Name b  ; Value { Local { [ {d a} ]             ; In Domain   ; Jacobian JVol ; } } }
      { Name h  ; Value { Local { [ nu[{d a}] * {d a} ] ; In Domain_L ; Jacobian JVol ; }
                          Local { [ h[ {d a}] ]         ; In Domain_NL; Jacobian JVol ; } } }
    }
  }
}

PostOperation {
  { Name MagSta_a_ref ; NameOfPostProcessing MagSta_a_ref;
    Operation {
      Print[ b,  OnElementsOf Domain, File "res_ref/b.pos" ] ;
      Print[ h,  OnElementsOf Domain, File "res_ref/h.pos" ] ;
      Print[ az, OnElementsOf Domain, File "res_ref/az.pos" ] ;
      Print[ a , OnElementsOf Domain, File "res_ref/a.pos" ] ;
    }
  }
  { Name MagSta_a_hmm ; NameOfPostProcessing MagSta_a_hmm;
    Operation {
      Print[ b,  OnElementsOf Domain, File "res_hmm/b.pos" ] ;
      Print[ h,  OnElementsOf Domain, File "res_hmm/h.pos" ] ;
      Print[ az, OnElementsOf Domain, File "res_hmm/az.pos" ] ;
      Print[ a , OnElementsOf Domain, File "res_hmm/a.pos" ] ;
    }
  }
}
