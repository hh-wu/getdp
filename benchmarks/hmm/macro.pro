// getdp macro.pro -msh macro.msh -sol MagSta_a_hmm -pos MagSta_a_hmm

Include "macro.dat";
Include "ListOfPoints.pro";


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
  Dirichlet_a_0     = Region[ {GAMMA_INF} ] ;
}

Function {
  mu0               = 4.e-7 * Pi ;
  nu [ Air ]        = 1. / mu0 ;
  nu [ Inductor ]   = 1. / mu0 ;
  nu [ Domain_Inf]  = 1. / mu0 ;

  If(!Flag_NL)
    nu [ Core]   = 1. / (1 * mu0) ;
    h [ Core]    = nu[$1#1] * #1 ;
    dhdb[ Core ] = TensorDiag[1., 1., 1.] * nu[$1];
  EndIf
  If (Flag_NL)
    aa                = 388;
    bb                = 0.3774;
    cc                = 2.97;
    nu[ Core ]        = aa + bb * Exp[cc*SquNorm[$1]] ;
    dnudb2[ Core ]    = bb *cc* Exp[cc*SquNorm[$1]] ;
    h[ Core ]         = nu[$1#1] * #1 ;
    dhdb[ Core ]      = TensorDiag[1., 1., 1.] * nu[$1#1] + 2 * dnudb2[#1] * SquDyadicProduct[#1]  ;
    dhdb_NL[ Core ]   = 2 * dnudb2[$1#1] * SquDyadicProduct[#1]  ;
  EndIf
  js[]              = Vector[0., 0., 50e2];

  Nb_max_iter       = 10;
  relaxation_factor = 1.;
  stop_criterion    = 1e-6;
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
      Galerkin { [ Python[ElementNum[], QuadraturePointIndex[], CompZ[{a}], CompX[{d a}], CompY[{d a} ] ]{"hmm_downscale_b.py"} * Dof{d a_dummy} , {d a_dummy} ] ;
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
      Galerkin { JacNL [ Python[ElementNum[], QuadraturePointIndex[]]{"hmm_upscale_dhdb.py"} * Dof{d a} , {d a} ] ;
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
      CreateDirectory[Dir_Meso];
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

num_cuts = 50;
dx       = (500e-6)/num_cuts;
length   = 500e-6 + dx;

PostOperation {
  { Name MagSta_a_ref ; NameOfPostProcessing MagSta_a_ref;
    Operation {
      Print[ az, OnElementsOf Domain,  File StrCat[Dir_Test,StrCat["az",ExtGmsh] ] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir_Test,StrCat["b" ,ExtGmsh] ] ];
      Print[ h,  OnElementsOf Domain , File StrCat[Dir_Test,StrCat["h" ,ExtGmsh] ] ];

      Print[ az, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["az_hmm_cut_69999", ExtData ] ] ];
      Print[ az, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["az_hmm_cut_79999", ExtData ] ] ];
      Print[ az, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["az_hmm_cut_89999", ExtData ] ] ];
      Print[ az, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["az_hmm_cut_99999", ExtData ] ] ];

      Print[ b, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["b_hmm_cut_69999", ExtData ] ] ];
      Print[ b, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["b_hmm_cut_79999", ExtData ] ] ];
      Print[ b, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["b_hmm_cut_89999", ExtData ] ] ];
      Print[ b, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["b_hmm_cut_99999", ExtData ] ] ];

      Print[ h, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["h_hmm_cut_69999", ExtData ] ] ];
      Print[ h, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["h_hmm_cut_79999", ExtData ] ] ];
      Print[ h, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["h_hmm_cut_89999", ExtData ] ] ];
      Print[ h, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Test, StrCat["h_hmm_cut_99999", ExtData ] ] ];
    }
  }
  { Name MagSta_a_hmm ; NameOfPostProcessing MagSta_a_hmm;
    Operation {
      Print[ az, OnElementsOf Domain,  File StrCat[Dir_Macro,StrCat["az",ExtGmsh] ] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir_Macro,StrCat["b" ,ExtGmsh] ] ];
      Print[ h,  OnElementsOf Domain , File StrCat[Dir_Macro,StrCat["h" ,ExtGmsh] ] ];

      Print[ az, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["az_hmm_cut_69999", ExtData ] ] ];
      Print[ az, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["az_hmm_cut_79999", ExtData ] ] ];
      Print[ az, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["az_hmm_cut_89999", ExtData ] ] ];
      Print[ az, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["az_hmm_cut_99999", ExtData ] ] ];

      Print[ b, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["b_hmm_cut_69999", ExtData ] ] ];
      Print[ b, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["b_hmm_cut_79999", ExtData ] ] ];
      Print[ b, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["b_hmm_cut_89999", ExtData ] ] ];
      Print[ b, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["b_hmm_cut_99999", ExtData ] ] ];

      Print[ h, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["h_hmm_cut_69999", ExtData ] ] ];
      Print[ h, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["h_hmm_cut_79999", ExtData ] ] ];
      Print[ h, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["h_hmm_cut_89999", ExtData ] ] ];
      Print[ h, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat["h_hmm_cut_99999", ExtData ] ] ];
    }
  }
}
