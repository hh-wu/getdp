Include "circle_pie_data.geo";

DefineConstant[ // allows to set these from outside
  // transmission boundary condition
  TC_TYPE = {2, Name "Input/01Transmission condition",
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
  D() = {};
  For idom In {0:N_DOM-1}
    left = (idom+1)%N_DOM; // left boundary (if looking to the center from infinity)
    right = (idom-1)%N_DOM; // right boundary
    If(right < 0)
      right = N_DOM-1;
    EndIf
    
    D() += idom;
    D~{idom} = {left, right};
  
    Omega~{idom} = Region[(idom)];
    GammaD0~{idom} = Region[{}];
    GammaD~{idom} = Region[{(1000 + idom)}];
    GammaN~{idom} = Region[{}];
    GammaInf~{idom} = Region[{(2000 + idom)}];

    Sigma~{idom}~{right} = Region[{(3000 + idom)}];
    Sigma~{idom}~{left} = Region[{(4000 + idom)}];
    Sigma~{idom} = Region[{Sigma~{idom}~{left}, Sigma~{idom}~{right}}] ;

    BndGammaD~{idom}~{left} = Region[{(5000 + idom)}];
    BndGammaD~{idom}~{right} = Region[{}];
    BndGammaD~{idom} = Region[{BndGammaD~{idom}~{left}, BndGammaD~{idom}~{right}}] ;

    BndGammaInf~{idom}~{left} = Region[{(6000 + idom)}];
    BndGammaInf~{idom}~{right} = Region[{}];
    BndGammaInf~{idom} = Region[{BndGammaInf~{idom}~{left}, BndGammaInf~{idom}~{right}}] ;

    BndSigma~{idom}~{left} = Region[{(7000 + idom)}];
    BndSigma~{idom}~{right} = Region[{(8000 + idom)}];
    BndSigma~{idom} = Region[{BndSigma~{idom}~{left}, BndSigma~{idom}~{right}}] ;
  EndFor
}

Include "Decomposition.pro";
Include "Helmholtz.pro" ;
Include "Schwarz.pro" ;
