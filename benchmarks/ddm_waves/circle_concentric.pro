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
  For idom In {0:N_DOM-1}
    left = (idom-1)%N_DOM; // left boundary
    right = (idom+1)%N_DOM; // right boundary
  
    D() += idom;
  
    Omega~{idom} = Region[(100 + idom)];
    GammaD0~{idom} = Region[{}];
    GammaN~{idom} = Region[{}];

    If (idom == 0)
      D~{idom} = {right};
      
      GammaD~{idom} = Region[{(1000 + idom)}];
      GammaInf~{idom} += Region[{}];
      
      Sigma~{idom}~{right} = Region[{(4000 + idom)}];
      Sigma~{idom} = Region[{Sigma~{idom}~{right}}] ;
      
      BndGammaD~{idom}~{right} = Region[{}];
      BndGammaD~{idom} = Region[{BndGammaD~{idom}~{right}}] ;
      
      BndGammaInf~{idom}~{right} = Region[{}];
      BndGammaInf~{idom} = Region[{BndGammaD~{idom}~{right}}] ;
      
      BndSigma~{idom}~{right} = Region[{}];
      BndSigma~{idom} = Region[{BndGammaD~{idom}~{right}}] ;
    EndIf
    If (idom == N_DOM-1)
      D~{idom} = {left};
      
      GammaD~{idom} = Region[{}];
      GammaInf~{idom} += Region[{(2000 + idom)}];
      
      Sigma~{idom}~{left} = Region[{(3000 + idom)}];
      Sigma~{idom} = Region[{Sigma~{idom}~{left}}] ;
      
      BndGammaD~{idom}~{left} = Region[{}];
      BndGammaD~{idom} = Region[{BndGammaD~{idom}~{left}}] ;
      
      BndGammaInf~{idom}~{left} = Region[{}];
      BndGammaInf~{idom} = Region[{BndGammaD~{idom}~{left}}] ;
      
      BndSigma~{idom}~{left} = Region[{}];
      BndSigma~{idom} = Region[{BndGammaD~{idom}~{left}}] ;
    EndIf
    If (idom > 0 && idom < N_DOM-1)
      D~{idom} = {left, right};
      
      GammaD~{idom} = Region[{}];
      GammaInf~{idom} += Region[{}];
      
      Sigma~{idom}~{left} = Region[{(3000 + idom)}];
      Sigma~{idom}~{right} = Region[{(4000 + idom)}];
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
Else
  Include "Elasticity.pro" ;
EndIf
Include "Schwarz.pro" ;
