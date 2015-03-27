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
  { Name Hcurl_a_dummy ; Type Form1P ;
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

  { Name MagSta_a_hmm_init_downscaling ; Type FemEquation ;
    Quantity {
      { Name a_dummy  ; Type Local ; NameOfSpace Hcurl_a_dummy ; }
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ Dof{d a_dummy} , {d a_dummy} ] ;
        In Domain ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Python[ElementNum[], QuadraturePointIndex[],
                          CompZ[{a}], CompX[{d a}], CompY[{d a} ] ]{"hmm_downscale_b.py"} *
                      Dof{d a_dummy} , {d a_dummy} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
    }
  }

  { Name MagSta_a_hmm ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a}, {d a} ] ;
        In Domain_L ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Python[ElementNum[], QuadraturePointIndex[]]{"hmm_upscale_h.py"}, {d a} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL [ Python[ElementNum[], QuadraturePointIndex[]]{"hmm_upscale_dhdb.py"} *
                          Dof{d a} , {d a} ] ;
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
      CreateDirectory[Dir_Test];
      IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
        GenerateJac[A] ; SolveJac[A] ;
      }
      SaveSolution[A] ;
    }
  }

  { Name MagSta_a_hmm ;
    System {
      { Name B ; NameOfFormulation MagSta_a_hmm_init_downscaling ; }
      { Name C ; NameOfFormulation MagSta_a_hmm ; }
    }
    Operation {
      CreateDirectory[Dir_Macro];
      Evaluate[ Python[]{"hmm_initialize.py"} ];
      InitSolution[C];
      IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
      //IterativeLoopN[Nb_max_iter, relaxation_factor, System{ {C, 1e-6, 1e-6, Residual MeanL2Norm} } ]{
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
      { Name h  ; Value { Local { [ nu[] * {d a} ] ; In Domain_L ; Jacobian JVol ; }
                          Local { [ h[ {d a}] ]         ; In Domain_NL; Jacobian JVol ; } } }
    }
  }
  { Name MagSta_a_hmm ; NameOfFormulation MagSta_a_hmm ;
    Quantity {
      { Name az ; Value { Local { [ CompZ[{a}] ]        ; In Domain   ; Jacobian JVol ; } } }
      { Name a  ; Value { Local { [ {a} ]               ; In Domain   ; Jacobian JVol ; } } }
      { Name b  ; Value { Local { [ {d a} ]             ; In Domain   ; Jacobian JVol ; } } }
      { Name h  ; Value { Local { [ nu[] * {d a} ] ; In Domain_L ; Jacobian JVol ; }
                          Local { [ h[ {d a}] ]         ; In Domain_NL; Jacobian JVol ; } } }
    }
  }
}

PostOperation {
  { Name MagSta_a_ref ; NameOfPostProcessing MagSta_a_ref;
    Operation {
      Print[ az, OnElementsOf Domain,  File StrCat[Dir_Test,"az",ExtGmsh] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir_Test,"b" ,ExtGmsh] ];
      Print[ h,  OnElementsOf Domain , File StrCat[Dir_Test,"h" ,ExtGmsh] ];
    }
  }
  { Name MagSta_a_hmm ; NameOfPostProcessing MagSta_a_hmm;
    Operation {
      Print[ az, OnElementsOf Domain,  File StrCat[Dir_Macro,"az_hmm",ExtGmsh] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir_Macro,"b_hmm",ExtGmsh] ];
      Print[ h,  OnElementsOf Domain , File StrCat[Dir_Macro,"h_hmm",ExtGmsh] ];
    }
  }
}
