Include "circle_concentric_data.geo";

DefineConstant[ // allows to set these from outside
  // transmission boundary condition
  TC_TYPE = {0, Name "Input/01Transmission condition",
    Choices {0="Order 0", 1="Order 2", 2="Pade (OSRC)"}},
  NP_OSRC = 4,
  PRECONDITIONER = {0, Name "Input/01Sweeping preconditioner", ReadOnly 1,
    Choices{0="Unpreconditioned",
      1="Double sweep",
      2="SGS"}},
  ListOfCuts() = { {0, N_DOM-1} }
];

Function {
  I[] = Complex[0, 1];

  If(ANALYSIS == 0) // Helmholtz

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

  Else  // Elastodynamics

    uxinc[] =(w/cp)*Complex[Cos[kp*X[] + (Pi/2)],Sin[kp*X[]+(Pi/2)]];
    uyinc[] = 0;

  EndIf
}

Group{
  D() = {};
  For ii In {0:N_DOM-1}
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary
    right = (ii+1)%N_DOM + 1; // right boundary
  
    D() += i;
  
    Omega~{i} = Region[(100 + i)];
    GammaD0~{i} = Region[{}];
    GammaN~{i} = Region[{}];

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
Else
  Include "Elasticity.pro" ;
EndIf
Include "Schwarz.pro" ;
