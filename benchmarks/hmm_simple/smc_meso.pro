Include "smc_data.pro";

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

Include "MagStaDyn_a_meso.pro"
