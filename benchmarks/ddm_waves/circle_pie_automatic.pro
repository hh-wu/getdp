Include "circle_pie_automatic_data.geo";
Include StrCat(MSH_NAME, "topology.pro") ;

DefineConstant[ // allows to set these from outside
  // transmission boundary condition
  TC_TYPE = {0, Name "Input/01Transmission condition",
    Choices {0="Order 0", 1="Order 2", 2="Pade (OSRC)"}},
  NP_OSRC = 4,
  PRECONDITIONER = {0, Name "Input/01Sweeping preconditioner", ReadOnly 1,
    Choices{0="Unpreconditioned",
            1="Double sweep",
            2="SGS"}},
  ListOfCuts() = { {0, N_DOM} }
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
  kIBC[] = k + (2*Pi /-I[]);

  // parameters for 2nd order TC
  // OO2 Gander 2002, pp. 46-47
  xsimin = 0;
  xsimax = Pi / LC;
  deltak[] = Pi ; // check this
  alphastar[] = I[] * ((k^2 - xsimin^2) * (k^2 - (k-deltak[])^2))^(1/4);
  betastar[] = ((xsimax^2 - k^2) * ((k+deltak[])^2 - k^2))^(1/4);
  a[] = - (alphastar[] * betastar[] - k^2) / (alphastar[] + betastar[]);
  b[] = - 1 / (alphastar[] + betastar[]);

  // parameters for Pade-type TC
  kepsI = 0.;
  keps[] = k*(1+kepsI*I[]);
  theta_branch = Pi/4;

  // not ready yet for PMLs
  D[] = 1;
  E[] = 1;
}

Group{
  For i In {1:N_DOM}
    GammaD0~{i} = Region[{}];
    GammaN~{i} = Region[{}];
    GammaD~{i} = Region[{GAMMA_DIR}];
    GammaPoint~{i} = Region[{}];
    GammaInf~{i} = Region[{GAMMA_INF}];
    Pml~{i} = Region[{}];
    BndGammaInf~{i} = Region[{}];
  EndFor
}

Include "Decomposition.pro";
Include "Helmholtz.pro" ;
Include "Schwarz.pro" ;
