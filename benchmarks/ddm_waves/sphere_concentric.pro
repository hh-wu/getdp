Include "sphere_concentric_data.geo";

DefineConstant[ // allows to set these from outside
  // transmission boundary condition
  TC_TYPE = {2, Name "Input/01Transmission condition",
    Choices {0="Order 0", 1="Order 2", 2="Pade (OSRC)"}},
  NP_OSRC = 4,
  PRECONDITIONER = {0, Name "Input/01Sweeping preconditioner", ReadOnly 1,
    Choices{0="Unpreconditioned",
      1="Double sweep",
      2="SGS"}},
  ListOfCuts() = { {0, N_DOM-1} }
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
  om[] = omega[] ;
  mu[] = mu0 ;

  // for Helmholtz
  uinc[] = Complex[ Cos[-k*Z[]], Sin[-k*Z[]] ];

  // for Maxwell
  einc[] = Vector[1,0,0] * Complex[ Cos[-k*Z[]], Sin[-k*Z[]] ];

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
}

Group{
  D() = {};
  For idom In {0:N_DOM-1}
    left = (idom-1)%N_DOM; // left boundary
    right = (idom+1)%N_DOM; // right boundary
  
    D() += idom;
  
    Omega~{idom} = Region[( 6001 + idom )];
    GammaD0~{idom} = Region[{}];
    GammaN~{idom} = Region[{}];

    If(idom == 0)
      D~{idom} = {right};
      
      GammaD~{idom} = Region[{1001}];
      GammaInf~{idom} = Region[{}];
      
      Sigma~{idom}~{right} = Region[{5000}];
      Sigma~{idom} = Region[{Sigma~{idom}~{right}}] ;
      
      BndGammaD~{idom}~{right} = Region[{}];
      BndGammaD~{idom} = Region[{BndGammaD~{idom}~{right}}] ;
      
      BndGammaInf~{idom}~{right} = Region[{}];
      BndGammaInf~{idom} = Region[{BndGammaD~{idom}~{right}}] ;
      
      BndSigma~{idom}~{right} = Region[{}];
      BndSigma~{idom} = Region[{BndGammaD~{idom}~{right}}] ;
    EndIf
    If(idom == N_DOM-1)
      D~{idom} = {left};
      
      GammaD~{idom} = Region[{}];
      GammaInf~{idom} = Region[{(2000+N_DOM)}];
      
      Sigma~{idom}~{left} = Region[{(1000*(4+idom))}];
      Sigma~{idom} = Region[{Sigma~{idom}~{left}}] ;
      
      BndGammaD~{idom}~{left} = Region[{}];
      BndGammaD~{idom} = Region[{BndGammaD~{idom}~{left}}] ;
      
      BndGammaInf~{idom}~{left} = Region[{}];
      BndGammaInf~{idom} = Region[{BndGammaD~{idom}~{left}}] ;
      
      BndSigma~{idom}~{left} = Region[{}];
      BndSigma~{idom} = Region[{BndGammaD~{idom}~{left}}] ;
    EndIf
    If(idom > 0 && idom < N_DOM-1)
      D~{idom} = {right, left};
      
      GammaD~{idom} = Region[{}];
      GammaInf~{idom} = Region[{}];
      
      Sigma~{idom}~{left} = Region[{(1000*(4+idom))}];
      Sigma~{idom}~{right} = Region[{(1000*(5+idom))}];
      Sigma~{idom} = Region[{Sigma~{idom}~{left}, Sigma~{idom}~{right}}] ;
      
      BndGammaD~{idom}~{left} = Region[{}];
      BndGammaD~{idom}~{right} = Region[{}];
      BndGammaD~{idom} = Region[{BndGammaD~{idom}~{left}, BndGammaD~{idom}~{right}}] ;
      
      BndGammaInf~{idom}~{left} = Region[{}];
      BndGammaInf~{idom}~{right} = Region[{}];
      BndGammaInf~{idom} = Region[{BndGammaD~{idom}~{left}, BndGammaD~{idom}~{right}}] ;
      
      BndSigma~{idom}~{left} = Region[{}];
      BndSigma~{idom}~{right} = Region[{}];
      BndSigma~{idom} = Region[{BndGammaD~{idom}~{left}, BndGammaD~{idom}~{right}}] ;
    EndIf
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
