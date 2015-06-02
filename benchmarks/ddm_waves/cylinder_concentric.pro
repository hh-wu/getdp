Include "cylinder_concentric_data.geo";

DefineConstant[ // allows to set these from outside
  // transmission boundary condition
  TC_TYPE = {2, Name "Input/01Transmission condition",
    Choices {0="Order 0", 1="Order 2", 2="Pade (OSRC)"}},
  NP_OSRC = 4,
  POLARISATION = {1, Name "Input/02Polarisation",
    Choices {0="TM", 1="TE"}, Visible (ANALYSIS == 1) },
  PRECONDITIONER = {0, Name "Input/01Sweeping preconditioner", ReadOnly 1,
    Choices{0="Unpreconditioned",
      1="Double sweep",
      2="SGS"}},
  ListOfCuts = { {0, N_DOM-1} }
];

Function {
  I[] = Complex[0, 1] ;
  N[] = Normal[] ;
  k = WAVENUMBER ;
  k[] = k ;

  eps0 = 8.854e-12;
  mu0 = 4*Pi*1e-7;
  c = 1 / Sqrt[mu0*eps0];

  omega[] = c*k[] ;
  mu[] = mu0 ;

  // for Helmholtz
  uinc[] = Complex[ Cos[-k*X[]], Sin[-k*X[]] ];

  // for Maxwell
  If(POLARISATION)
    einc[] = Vector[0,0,1] * Complex[ Cos[-k*X[]], Sin[-k*X[]] ]; // TE
  EndIf
  If(!POLARISATION)
    einc[] = Vector[0,1,0] * Complex[ Cos[-k*X[]], Sin[-k*X[]] ]; // TM
  EndIf

  // parameter for ABC
  kInf[] = k;
  alphaBT[] = 1/(2*R_EXT) - I[]/(8*k*R_EXT^2*(1+I[]/(k*R_EXT)));
  betaBT[] = - 1/(2*I[]*k*(1+I[]/(k*R_EXT)));

  // parameter for 0th order TC : IBC(0)
  kIBC[] = k;

  // parameter for 0th order TC : IBC(alpha) - EMDA
  // kIBC[] = k + (2*Pi /-I[]);

  // parameters for 2nd order TC Helmholtz: OO2 Gander 2002, pp. 46-47
  xsimin = 0;
  xsimax = Pi / LC;
  deltak[] = Pi;
  alphastar[] = I[] * ((k^2 - xsimin^2) * (k^2 - (k-deltak[])^2))^(1/4);
  betastar[] = ((xsimax^2 - k^2) * ((k+deltak[])^2 - k^2))^(1/4);
  a[] = - (alphastar[] * betastar[] - k^2) / (alphastar[] + betastar[]);
  b[] = - 1 / (alphastar[] + betastar[]);

  // parameters for 2nd order TC Maxwell: J.-F. Lee
  kmax[] = Pi/LC ;
  delt[] = Sqrt[kmax[]^2-k^2]/Sqrt[k^2];
  aa[] = 1/(1 + I[]*delt[]);
  bb[] = aa[];

  // parameters for Pade-type TC
  kappa[] =  1/R_INT;
  keps[] = Complex[ k, 0.4 * k^(1/3) * kappa[]^(-2/3) ];
  theta_branch = Pi/2;

  // not ready yet for PMLs
  D[] = 1;
  E[] = 1;

  Printf("N_DOM %g WAVENUMBER %g N_LAMBDA %g TC_TYPE %g NP_OSRC %g POLARISATION %g",
         N_DOM, WAVENUMBER, N_LAMBDA, TC_TYPE, NP_OSRC, POLARISATION);
}

Group{
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[(100 + idom)];

    If(ANALYSIS == 0)
      GammaD0~{idom} = Region[{}];
      GammaN~{idom} = Region[{(200 + idom)}];
    EndIf
    If(ANALYSIS == 1)
      If(POLARISATION)
        GammaD0~{idom} = Region[(200 + idom)];
        GammaN~{idom} = Region[{}];
      EndIf
      If(!POLARISATION)
        GammaD0~{idom} = Region[{}];
        GammaN~{idom} = Region[{(200 + idom)}];
      EndIf
    EndIf

    If(idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[{(4000 + idom)}];
      GammaD~{idom} = Region[{(1000 + idom)}];
      GammaInf~{idom} = Region[{}];
    EndIf
    If(idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[{(3000 + idom)}];
      Sigma~{idom}~{1} = Region[{}];
      GammaD~{idom} = Region[{}];
      GammaInf~{idom} = Region[{(2000 + idom)}];
    EndIf
    If(idom > 0 && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{(3000 + idom)}];
      Sigma~{idom}~{1} = Region[{(4000 + idom)}];
      GammaD~{idom} = Region[{}];
      GammaInf~{idom} = Region[{}];
    EndIf

    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}];

    BndSigma~{idom}~{0} = Region[{}];
    BndSigma~{idom}~{1} = Region[{}];
    BndSigma~{idom} = Region[{BndSigma~{idom}~{0}, BndSigma~{idom}~{1}}] ;

    BndGammaInf~{idom}~{0} = Region[{}];
    BndGammaInf~{idom}~{1} = Region[{}];
    BndGammaInf~{idom} = Region[{BndGammaInf~{idom}~{0}, BndGammaInf~{idom}~{1}}] ;
  EndFor
}

Include "Decomposition.pro";

If(ANALYSIS == 0)
  Include "Helmholtz.pro" ;
EndIf
If(ANALYSIS == 1)
  Include "Maxwell.pro" ;
EndIf

Include "Schwarz.pro" ;
