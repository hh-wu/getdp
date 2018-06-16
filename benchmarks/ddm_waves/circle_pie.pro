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
  For ii In {0:N_DOM-1}
    i = ii+1;
    left = (ii+1)%N_DOM + 1; // left boundary (if looking to the center from infinity)
    right = (ii-1)%N_DOM + 1; // right boundary
    If(right < 1)
      right = N_DOM;
    EndIf
    
    D() += i;
    D~{i} = {left, right};
  
    Omega~{i} = Region[(i)];
    GammaD0~{i} = Region[{}];
    GammaD~{i} = Region[{(1000 + i)}];
    GammaN~{i} = Region[{}];
    GammaInf~{i} = Region[{(2000 + i)}];

    Sigma~{i}~{right} = Region[{(3000 + i)}];
    Sigma~{i}~{left} = Region[{(4000 + i)}];
    Sigma~{i} = Region[{Sigma~{i}~{left}, Sigma~{i}~{right}}] ;

    BndGammaD~{i}~{left} = Region[{(5000 + i)}];
    BndGammaD~{i}~{right} = Region[{}];
    BndGammaD~{i} = Region[{BndGammaD~{i}~{left}, BndGammaD~{i}~{right}}] ;

    BndGammaInf~{i}~{left} = Region[{(6000 + i)}];
    BndGammaInf~{i}~{right} = Region[{}];
    BndGammaInf~{i} = Region[{BndGammaInf~{i}~{left}, BndGammaInf~{i}~{right}}] ;

    Tau~{i}~{left} = Region[{(7000 + i)}];
    Tau~{i}~{right} = Region[{(8000 + i)}];
    Tau~{i} = Region[{Tau~{i}~{left}, Tau~{i}~{right}}] ;
  EndFor
}

Include "Decomposition.pro";
Include "Helmholtz.pro" ;
Include "Schwarz.pro" ;
