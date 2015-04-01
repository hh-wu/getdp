Include "smc_data.pro";

Group {
  Air      = Region[ AIR ];
  Core     = Region[ CONDUCTOR ];
  Inductor = Region[ {INDUCTOR} ];
  Infinity = Region[ {OMEGA_INF} ];

  Domain_S   = Region[ {Inductor} ];
  Domain_Inf = Region[ {Infinity} ];
  Domain_NL  = Region[ {Core} ];
  Domain_L   = Region[ {Air, Domain_S, Domain_Inf} ];
  Domain = Region[ {Core, Air, Domain_S, Domain_Inf} ];
  Dirichlet_a_0     = Region[ {GAMMA_INF} ];
}

Function {
  mu0               = 4.e-7 * Pi;
  nu [ Air ]        = 1. / mu0;
  nu [ Inductor ]   = 1. / mu0;
  nu [ Domain_Inf]  = 1. / mu0;

  If(!Flag_NL)
    nu [ Core]   = 1. / (1 * mu0);
    h [ Core]    = nu[$1#1] * #1;
    dhdb[ Core ] = TensorDiag[1., 1., 1.] * nu[$1];
  EndIf
  If (Flag_NL)
    aa                = 388;
    bb                = 0.3774;
    cc                = 2.97;
    nu[ Core ]        = aa + bb * Exp[cc*SquNorm[$1]];
    dnudb2[ Core ]    = bb *cc* Exp[cc*SquNorm[$1]];
    h[ Core ]         = nu[$1#1] * #1;
    dhdb[ Core ]      = TensorDiag[1., 1., 1.] * nu[$1#1] +
    2 * dnudb2[#1] * SquDyadicProduct[#1];
    dhdb_NL[ Core ]   = 2 * dnudb2[$1#1] * SquDyadicProduct[#1];
  EndIf

  js0[]             = Vector[0., 0., source_amplitude];
  js[]              = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, Flag_Dynamic ? 0 : Pi/2};
  Nb_max_iter       = 10;
  relaxation_factor = 1.;
  stop_criterion    = 1e-6;
  T                 = 1./Freq;
  Omega             = 2 * Pi * Freq;
  time0             = 0.;
  timemax           = T * NbT;
  dtime             = T/NbSteps;
  theta_value       = 1;
}

Include "MagStaDyn_a_macro.pro"
