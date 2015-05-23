Include "circle_concentric_data.geo";

DefineConstant[ // allows to set these from outside
  // transmission boundary condition
  TC_TYPE = {2, Name "Input/01Transmission condition",
    Choices {0="Order 0", 1="Order 2", 2="Pade (OSRC)"}},
  NP_OSRC = 4,
  // parameters for the DDM iterative solver
  SOLVER = "gmres", // bcgs, gmsh_pcleft, ...
  TOL = 1e-4,
  MAXIT = 1000,
  RESTART = MAXIT,
  PRECOND_SWEEP = {0, Name "Input/01Sweeping preconditioner",
    Choices{0="Unpreconditioned",
      1="Double sweep",
      2="SGS"}},
  ListOfCuts = { {0, N_DOM-1} }
];

Function {
  I[] = Complex[0, 1];
  k = WAVENUMBER;
  k[] = k;

  // incidence angle
  theta_inc = THETA_INC;
  XYZdotTheta[] = X[] * Cos[theta_inc] + Y[] * Sin[theta_inc];
  uinc[] = Complex[Cos[k*XYZdotTheta[]], Sin[k*XYZdotTheta[]]];
  grad_uinc[] =  I[] * k * Vector[1,0,0] * uinc[];
  dn_uinc[] = Normal[] * grad_uinc[];

  // parameter for ABC
  kInf[] = k;
  alphaBT[] = 1/(2*R_EXT) - I[]/(8*k*R_EXT^2*(1+I[]/(k*R_EXT)));
  betaBT[] = - 1/(2*I[]*k*(1+I[]/(k*R_EXT)));

  // parameter for 0th order TC
  kDtN[] = k + (2*Pi /-I[]);

  // parameters for 2nd order TC
  // OO2 Gander 2002, pp. 46-47
  xsimin = 0;
  xsimax = Pi / LC;
  deltak[] = Pi / Norm[XYZ[]];
  alphastar[] = I[] * ((k^2 - xsimin^2) * (k^2 - (k-deltak[])^2))^(1/4);
  betastar[] = ((xsimax^2 - k^2) * ((k+deltak[])^2 - k^2))^(1/4);
  a[] = - (alphastar[] * betastar[] - k^2) / (alphastar[] + betastar[]);
  b[] = - 1 / (alphastar[] + betastar[]);

  // parameters for Pade-type TC
  keps[] = Complex[ k, 0.4 * k^(1/3) * Norm[XYZ[]]^(-2/3) ];
  theta_branch = Pi/4;

  // not ready yet for PMLs
  D[] = 1;
  E[] = 1;
}

Group{
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[(100 + idom)];
    GammaD0~{idom} = Region[{}];
    GammaN~{idom} = Region[{}];

    If (idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[{(4000 + idom)}]; // right boundary
      GammaD~{idom} = Region[{(1000 + idom)}];
      GammaInf~{idom} += Region[{}];
    EndIf
    If (idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[{(3000 + idom)}]; // left boundary
      Sigma~{idom}~{1} = Region[{}]; // right boundary
      GammaD~{idom} = Region[{}];
      GammaInf~{idom} += Region[{(2000 + idom)}];
    EndIf
    If (idom > 0 && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{(3000 + idom)}]; // left boundary
      Sigma~{idom}~{1} = Region[{(4000 + idom)}]; // right boundary
      GammaD~{idom} = Region[{}];
      GammaInf~{idom} += Region[{}];
    EndIf

    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}] ;

    BndGammaD~{idom}~{0} = Region[{}];
    BndGammaD~{idom}~{1} = Region[{}];
    BndGammaD~{idom} = Region[{BndGammaD~{idom}~{0}, BndGammaD~{idom}~{1}}] ;

    BndGammaInf~{idom}~{0} = Region[{}];
    BndGammaInf~{idom}~{1} = Region[{}];
    BndGammaInf~{idom} = Region[{BndGammaInf~{idom}~{0}, BndGammaInf~{idom}~{1}}] ;

    BndSigma~{idom}~{0} = Region[{}];
    BndSigma~{idom}~{1} = Region[{}];
    BndSigma~{idom} = Region[{BndSigma~{idom}~{0}, BndSigma~{idom}~{1}}] ;
  EndFor
}

Include "Decomposition.pro";
Include "Helmholtz.pro" ;
Include "Schwarz.pro" ;
