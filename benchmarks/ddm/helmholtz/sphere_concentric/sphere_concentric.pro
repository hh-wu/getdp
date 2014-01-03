Include "params.geo";
Include "../main/ddmDefines.pro";
Include "groups_sphere_concentric.pro";

Function {
  k = WAVENUMBER;
  k[] = k;

  kDtN[] = k[];
  kInf[] = k[];

  V_SOURCE[] = 0.;

  eps0 = 8.854e-12;
  mu0 = 4*Pi*1e-7;
  Z0 = 1;//Sqrt[mu0/eps0];

  epsilon[] = eps0;
  mu[] = mu0;
  omega[] = k / Sqrt[eps0*mu0];

  // N[] = Normal[];
  I[] = Complex[0, 1];
  // einc[] = Vector[0,0,1] * Complex[ Cos[-k*X[]], Sin[-k*X[]] ]; // Mohamed's
  uinc[] = Complex[ Cos[-k*Z[]], Sin[-k*Z[]] ]; // Mohamed's
  // einc[] = Vector[1,0,0] * Complex[ Cos[-k*Z[]], -Sin[-k*Z[]] ]; // Alex's
  hinc[] = 1/Z0 * Vector[0,1,0] * Complex[ Cos[-k*Z[]], Sin[-k*Z[]] ];
  
  // Parameters for EMDA (Silver-Muller)
  k_SM[] = k[];
  // k_SM[] = k[]*(1+.25*I[]);
}

Function{
  alphaBT[] = 0;
  betaBT[] = 0;

  theta = Pi/8;
  alpha[] = -Vector[Cos[theta], 0, Sin[theta]]; 

  // N = NP_OSRC;

  beta[] = k;//BETA_EMDA;
  BETA_M[] = k;
  kDtn[] = k;
}

Include "../main/tcDefaults.pro";
Include "../main/topology/inline.pro";
Include "../main/Helmholtz.pro";
