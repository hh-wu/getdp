Include "meso.dat";

Group {
  GammaCornerFix = Region[ {GAMMA_POINT } ];

  GammaLeft      = Region[ {GAMMA_LEFT } ];
  GammaRight     = Region[ {GAMMA_RIGHT} ];
  GammaUp        = Region[ {GAMMA_UP} ];
  GammaDown      = Region[ {GAMMA_DOWN} ];
  GammaDirichlet = Region[ {GAMMA_UP, GAMMA_DOWN} ];
  GammaDirichlet_Yindi = Region[ {GAMMA_LEFT, GAMMA_RIGHT} ];

  Omega_NL       = Region[ {IRON} ] ;
  Omega_L        = Region[ {INSULATION} ] ;
  Omega_C        = Region[ {Omega_NL} ] ;
  Omega_CC       = Region[ {Omega_L} ] ;
  Omega          = Region[ {Omega_NL, Omega_L} ] ;
}

Function {
  mu0            = 4.e-7 * Pi ;
  nu0            = 1/mu0 ;

  DefineConstant[ AZ=0, BX=0, BY=0, ELENUM=0, TS=0 ];

  aM[]           = Vector[0.0, 0.0, AZ];
  curl_aM[]      = Vector[BX, BY, 0.0];

  NbrMaxIter     = 5;
  Eps            = 1e-4;
  Relax          = 1.0;
  factor         = 1.0;
  Nbr_SubProblems = 3;
  epsilon        = 1e-6;
  Pert~{1}[]     = Vector[0, 0, 0];
  Pert~{2}[]     = epsilon * Vector[1.0, 0.0, 0.0];
  Pert~{3}[]     = epsilon * Vector[0.0, 1.0, 0.0];

  //===================================================
  //Parameters of the Brauer nonlinear constitutive law
  //===================================================
  gamma          = 388.;
  alpha          = 0.3774;
  beta           = 2.97;
  //nu[Omega_NL]           = gamma + alpha * Exp[beta*$1] ;
  //dnudb2[Omega_NL]       = alpha * beta* Exp[beta*$1] ;

  nu_sat         = gamma + alpha * Exp[beta * 1.29 * 1.29] ;
  mur_sat        = 1/(mu0*nu_sat) ;
  mur            = mur_sat ;
  Printf("nu with saturation %g mur %g and lx = %g", gamma + alpha * Exp[beta * 1.29 * 1.29], mur_sat, lx) ;


  If(!Flag_NL)
    nu[Omega_L]    = nu0                    ;
    nu[Omega_NL]   = nu0/1               ;
    dhdb[Omega_NL]    = (nu0 )* TensorDiag[0., 0., 0.] ;
  EndIf
  If(Flag_NL)
    gamma          = 388.;
    alpha          = 0.3774;
    beta           = 2.97;
    nu_ML[Omega_NL]           = gamma + alpha * Exp[beta*$1] ;
    dnudb2[]       = alpha * beta* Exp[beta*$1] ;
    nu[Omega_L]    = 1. * nu0               ;
    nu[Omega_NL]   = nu_ML[SquNorm[$1]]     ;
    dhdb[Omega_NL] = nu[SquNorm[$1]] * TensorDiag[1., 1., 1.] + 2 * dnudb2[SquNorm[$1]] * SquDyadicProduct[$1] ;
    dhdb_NL[Omega_NL] = 2 * dnudb2[SquNorm[$1]] * SquDyadicProduct[$1] ;
  EndIf
}

Constraint {
 { Name a_Micro ;
   Case {
     { Region GammaRight; Type Link; RegionRef GammaLeft;
       Coefficient 1.; Function Vector[$X-lx, $Y, $Z]; }
     { Region GammaUp; Type Link; RegionRef GammaDown;
       Coefficient 1.; Function Vector[$X, $Y-ly, $Z]; }
     { Region GammaCornerFix; Type Assign; Value 0.0; }
   }
 }
}

Jacobian {
  { Name Vol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name Sur ; Case { { Region All ; Jacobian Sur ; } } }
}

Integration {
  { Name II ; Case {
      {Type Gauss ;
        Case {
	  { GeoElement Line        ; NumberOfPoints  4 ; }
          { GeoElement Triangle    ; NumberOfPoints  4 ; }
          { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
        }
      }
    }
  }
}

FunctionSpace{
  For iP In {1:Nbr_SubProblems}
  { Name HCurl_a_Micro~{iP} ; Type Form1P ;
    BasisFunction{
      { Name sn; NameOfCoef an; Function BF_PerpendicularEdge; Support Omega; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Micro; }
    }
  }
  EndFor
}

Formulation {
  For iP In {1:Nbr_SubProblems}
  { Name a_NR~{iP} ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace HCurl_a_Micro~{iP} ; }
    }
    Equation {
      Galerkin { [ nu[ {d a}+curl_aM[]+Pert~{iP}[] ] * Dof{d a} , {d a} ]     ; In Omega   ; Jacobian Vol; Integration II; }
      Galerkin { [ nu[ {d a}+curl_aM[]+Pert~{iP}[] ] * curl_aM[], {d a} ]     ; In Omega   ; Jacobian Vol; Integration II; }
      Galerkin { [ nu[ {d a}+curl_aM[]+Pert~{iP}[] ] * Pert~{iP}[] , {d a} ]  ; In Omega   ; Jacobian Vol; Integration II; }
      Galerkin { JacNL[ dhdb[{d a}+curl_aM[]+Pert~{iP}[] ] * Dof{d a}, {d a} ]; In Omega_NL; Jacobian Vol; Integration II; }
    }
  }
EndFor
}

Resolution {
  { Name a_NR ;
    System {
      For iP In {1:Nbr_SubProblems}
      { Name Micro~{iP}; NameOfFormulation a_NR~{iP} ;}
      EndFor
    }
    Operation {
      CreateDirectory[Dir_Meso];
      For iP In {1:Nbr_SubProblems}
      InitSolution[Micro~{iP} ];
        IterativeLoop[NbrMaxIter, Eps, Relax]{
          GenerateJac[Micro~{iP}]; SolveJac[Micro~{iP}] ;
      }
      // SaveSolution[Micro~{iP}]  ;
      If(iP == 1)
        // PostOperation[map_field_1];
      EndIf
      EndFor
    }
  }
}

PostProcessing {
  For iP In {1:Nbr_SubProblems}
  { Name a_Micro_NR~{iP} ; NameOfFormulation a_NR~{iP} ; NameOfSystem Micro~{iP} ;
     PostQuantity {
       { Name vol         ; Value { Integral { [ 1. ] ;        In Omega ; Jacobian Vol ; Integration II ; } } }  // stored in register #12
       { Name a_pert      ; Value { Term { [ CompZ[ {a} ] ] ;  In Omega ; Jacobian Vol; } } }
       { Name a_proj      ; Value {
           Term { [ CompZ[ ( aM[] ) ] ] ;                             In Omega ; Jacobian Vol;  }
           Term { [ CompZ[ ( - factor * (XYZ[]) /\ curl_aM[] ) ] ] ;  In Omega ; Jacobian Vol;  } } }
       { Name a_tot       ; Value {
           Term { [ CompZ[ {a}] ] ;                                  In Omega ; Jacobian Vol; }
           Term { [ CompZ[ aM[] ] ] ;                                In Omega ; Jacobian Vol; }
           Term { [ CompZ[ ( - factor * (XYZ[]) /\ curl_aM[] ) ] ] ; In Omega ; Jacobian Vol; } } }
       { Name b_pert      ; Value { Term { [ {d a} ] ;     In Omega ; Jacobian Vol;  } } }
       { Name b_proj      ; Value { Term { [ curl_aM[] ] ; In Omega ; Jacobian Vol;  } } }
       { Name b_tot       ; Value {
           Term { [ {d a}]    ;    In Omega ; Jacobian Vol ; }
           Term { [ curl_aM[]  ] ; In Omega ; Jacobian Vol ; }
           Term { [ Pert~{iP}[]] ; In Omega ; Jacobian Vol ; } } }
       { Name b_tot_mean  ; Value {
           Integral { [ ({d a} + curl_aM[] + Pert~{iP}[])/#12 ] ; In Omega ; Jacobian Vol ; Integration II ; } } }
       { Name h_tot ; Value {
           Term { [ nu[{d a} + curl_aM[] + Pert~{iP}[]] * ({d a} + curl_aM[] + Pert~{iP}[]) ]; In Omega; Jacobian Vol;} } }
       { Name h_tot_mean ; Value {// stored in #22
           Integral { [ nu[ {d a} + curl_aM[] + Pert~{iP}[]] * ({d a} + curl_aM[] + Pert~{iP}[])/#12 ] ; In Omega ; Jacobian Vol; Integration II ; } } }
     }
   }
  EndFor
}




PostOperation {
For iP In {1:Nbr_SubProblems}
 { Name mean~{iP} ; NameOfPostProcessing a_Micro_NR~{iP};
   Operation{
     Print[ vol[Omega]       , OnGlobal, Format Table, Store 12, File StrCat[Dir_Meso, "vol.txt"], LastTimeStepOnly ] ;
     Print[ h_tot_mean[Omega], OnGlobal, Format Table, Store 22, File StrCat[Dir_Meso, Sprintf("DualField%g_%g.txt",   iP, ELENUM) ], LastTimeStepOnly] ;
     Print[ b_tot_mean[Omega], OnGlobal, Format Table, Store 21, File StrCat[Dir_Meso, Sprintf("PrimalField%g_%g.txt", iP, ELENUM) ], LastTimeStepOnly] ;
   }
 }
 { Name map_field~{iP} ; NameOfPostProcessing a_Micro_NR~{iP};
   Operation {
     Print[ a_pert, OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_pert_Prob%g_TS%g_Elenum%g.pos" , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ a_proj, OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_proj_Prob%g_TS%g_Elenum%g.pos" , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ a_tot , OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_tot_Prob%g_TS%g_Elenum%g.pos"  , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ b_pert, OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_pert_Prob%g_TS%g_Elenum%g.pos" , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ b_tot , OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_tot_Prob%g_TS%g_Elenum%g.pos"  , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ b_proj, OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_proj_Prob%g_TS%g_Elenum%g.pos" , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
     Print[ h_tot , OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("h_tot_Prob%g_TS%g_Elenum%g.pos"  , iP, TS, ELENUM) ], Format Gmsh, LastTimeStepOnly ];
   }
 }
 EndFor
}
