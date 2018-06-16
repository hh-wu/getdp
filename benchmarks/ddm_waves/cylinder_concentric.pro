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
  D() = {};
  For ii In {0:N_DOM-1}
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary (if looking to the center from infinity)
    right = (ii+1)%N_DOM + 1; // right boundary
  
    D() += i;
    
    Omega~{i} = Region[(100 + i)];

    If(ANALYSIS == 0)
      GammaD0~{i} = Region[{}];
      GammaN~{i} = Region[{(200 + i)}];
    EndIf
    If(ANALYSIS == 1)
      If(POLARISATION)
        GammaD0~{i} = Region[(200 + i)];
        GammaN~{i} = Region[{}];
      EndIf
      If(!POLARISATION)
        GammaD0~{i} = Region[{}];
        GammaN~{i} = Region[{(200 + i)}];
      EndIf
    EndIf

    If (ii == 0)
      D~{i} = {right};

      GammaD~{i} = Region[{(1000 + i)}];
      GammaInf~{i} += Region[{}];

      Sigma~{i}~{right} = Region[{(4000 + i)}];
      Sigma~{i} = Region[{Sigma~{i}~{right}}] ;

      BndGammaD~{i}~{right} = Region[{}];
      BndGammaD~{i} = Region[{BndGammaD~{i}~{right}}] ;

      BndGammaInf~{i}~{right} = Region[{}];
      BndGammaInf~{i} = Region[{BndGammaInf~{i}~{right}}] ;

      Tau~{i}~{right} = Region[{}];
      Tau~{i} = Region[{Tau~{i}~{right}}] ;
    EndIf
    If (ii == N_DOM-1)
      D~{i} = {left};

      GammaD~{i} = Region[{}];
      GammaInf~{i} += Region[{(2000 + i)}];

      Sigma~{i}~{left} = Region[{(3000 + i)}];
      Sigma~{i} = Region[{Sigma~{i}~{left}}] ;

      BndGammaD~{i}~{left} = Region[{}];
      BndGammaD~{i} = Region[{BndGammaD~{i}~{left}}] ;

      BndGammaInf~{i}~{left} = Region[{}];
      BndGammaInf~{i} = Region[{BndGammaInf~{i}~{left}}] ;

      Tau~{i}~{left} = Region[{}];
      Tau~{i} = Region[{Tau~{i}~{left}}] ;
    EndIf
    If (ii > 0 && ii < N_DOM-1)
      D~{i} = {left, right};

      GammaD~{i} = Region[{}];
      GammaInf~{i} += Region[{}];

      Sigma~{i}~{left} = Region[{(3000 + i)}];
      Sigma~{i}~{right} = Region[{(4000 + i)}];
      Sigma~{i} = Region[{Sigma~{i}~{left}, Sigma~{i}~{right}}] ;

      BndGammaD~{i}~{left} = Region[{}];
      BndGammaD~{i}~{right} = Region[{}];
      BndGammaD~{i} = Region[{BndGammaD~{i}~{left}, BndGammaD~{i}~{right}}] ;

      BndGammaInf~{i}~{left} = Region[{}];
      BndGammaInf~{i}~{right} = Region[{}];
      BndGammaInf~{i} = Region[{BndGammaInf~{i}~{left}, BndGammaInf~{i}~{right}}] ;

      Tau~{i}~{left} = Region[{}];
      Tau~{i}~{right} = Region[{}];
      Tau~{i} = Region[{Tau~{i}~{left}, Tau~{i}~{right}}] ;
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
