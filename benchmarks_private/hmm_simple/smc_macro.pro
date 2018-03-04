Include "smc_data.pro";

Group {
  Air = Region[ AIR ];
  Core = Region[ CONDUCTOR ];
  Inductor = Region[ {INDUCTOR} ];
  Omega_Inf = Region[ {OMEGA_INF} ];

  Domain_S = Region[ {Inductor} ];
  Domain_Inf = Region[ {Omega_Inf} ];
  Domain_NL = Region[ {Core} ];
  Domain_L = Region[ {Air, Domain_S, Domain_Inf} ];
  Domain = Region[ {Core, Air, Domain_S, Domain_Inf} ];

  If(!Flag_3D)
    Dirichlet_a_0 = Region[{GAMMA_INF, SYMMETRY_Y0}];
  EndIf
  If(Flag_3D)
    Dirichlet_a_0 = Region[{GAMMA_INF, SYMMETRY_X0, SYMMETRY_Y0}];
  EndIf
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
  If(Flag_NL)
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

  If(!Flag_3D)
    js0[] = Vector[0., 0., source_amplitude];
    js[] = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, Flag_Dynamic ? 0 : Pi/2};
  EndIf
  If(Flag_3D)
    /*
      alpha[] = Pi/2-Atan2[(Y[]-ylam),(X[]-xlam)];
      js0[] = (X[] < xlam) ? Vector[-source_amplitude, 0, 0] :
      (Y[] < ylam) ? Vector[0, source_amplitude, 0] :
      Vector[ -Cos[alpha[]] * source_amplitude, Sin[alpha[]] * source_amplitude, 0 ];
      js[] = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, Flag_Dynamic ? 0 : Pi/2};
    */
    alpha[] = Atan2[Y[],X[]];
    js0[] =  source_amplitude* Vector[ -Sin[alpha[]], Cos[alpha[]], 0 ];
    js[] = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, Flag_Dynamic ? 0 : Pi/2};
  EndIf

  T                 = 1./Freq;
  Omega             = 2 * Pi * Freq;
  time0             = 0.;
  timemax           = T * NbT;
  dtime             = T/NbSteps;
  theta_value       = 1;

  Nb_max_iter         = 5;
  stop_criterion      = 1e-12;
  relaxation_factor[] = ($Iteration < Nb_max_iter/2) ? 1: 0.3;
  reltol              = 1e-12;
  abstol              = 1e-12;
  RelaxFac_Lin        = LinSpace[1, 0.1, 20];
  TestAllFactors      = 1;
}

Include "MagStaDyn_a_macro.pro"
