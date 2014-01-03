Include "params.geo";
Include "../main/ddmDefines.pro";
Include "groups_cylinder.pro";

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
  // uinc[] = Complex[ Cos[-k*Z[]], Sin[-k*Z[]] ]; // Mohamed's

  kx = Sqrt[2.]/2.; // wavevector
  ky = 0;
  kz = Sqrt[2.]/2.;

  uinc[] = Complex[ Cos[-(kx*X[]+ky*Y[]+kz*Z[])], Sin[-k*(kx*X[]+ky*Y[]+kz*Z[])] ]; // Mohamed's
  // einc[] = Vector[1,0,0] * Complex[ Cos[-k*Z[]], -Sin[-k*Z[]] ]; // Alex's
  hinc[] = 1/Z0 * Vector[0,1,0] * Complex[ Cos[-k*Z[]], Sin[-k*Z[]] ];
  
  // Parameters for EMDA (Silver-Muller)
  k_SM[] = k[]*(1);
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

If (PRECOND_SWEEP)
// ListOfCuts = {0, 5, 10, 15, N_DOM-1};
ListOfCuts = {0:N_DOM-1:5, N_DOM-1};
// ListOfCuts = {0, N_DOM-1};


  // what domains am I in charge of ? Implemented with a list
  ProcOwnsDomain = {};
  For idom In{0:N_DOM-1}
    ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
  EndFor
EndIf

Include "../main/Helmholtz.pro";
