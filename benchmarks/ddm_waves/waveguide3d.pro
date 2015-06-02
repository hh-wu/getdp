Include "waveguide3d_data.geo";

DefineVariable[ // allows to set these from outside
  // type of walls
  WALLS = {1, Name "Input/05Walls",
    Choices {0="Transparent", 1="Metallic"}},
  // excitation mode
  MODE_M = {2, Name "Input/05m"}, // y
  MODE_N = {1, Name "Input/05n"}, // z
  MEDIUM_TYPE = {0, Name "Input/01Medium type",
    Choices {0="Constant", 1="Gaussian"}},
  // transmission boundary condition
  TC_TYPE = {0, Name "Input/01Transmission condition",
    Choices {0="Order 0", 1="Order 2", 2="Pade (OSRC)", 3="PML"}},
  NP_OSRC = 4,
  PRECONDITIONER = {0, Name "Input/01Sweeping preconditioner",
    Choices{0="Unpreconditioned",
      1="Double sweep",
      2="SGS"}},
  ListOfCuts = { {0, N_DOM-1} }
];

Function {
  I[] = Complex[0, 1] ;
  N[] = Normal[] ;

  // coordinates in the rotated structure
  P[] = (-X[]*Sin[theta]+Y[]*Cos[theta]);
  Q[] = Z[];

  If (MEDIUM_TYPE == 0)
    c[] = c0; // constant
  EndIf
  If (MEDIUM_TYPE == 1)
    // c[] = c0 * 1.25 * ( 1. - .4 * Exp[ -32 * ( (P[]-DY/2)^2 + (Q[]-DZ/2)^2 ) ] ) ; // gaussian
    c[] = c0 * 1.25 * ( 1. - .55 * Exp[ -32 * ( (P[]-DY/2)^2 + (Q[]-DZ/2)^2 ) ] ) ; // gaussian -- FIXME exceeds speed of light...
  EndIf
  // freq[] = c0[] / LAMBDA;
  // om[] = 2 * Pi * freq[];
  k[] = om / c[] ;

  omega[] = om;//c[]*k[] ;
  mu[] = mu0 ;

  ky = MODE_M*Pi/DY ;
  kz = MODE_N*Pi/DZ ;
  kc = Sqrt[ky^2+kz^2] ;
  beta[] = ( -kc^2 + k[]^2 >=0 ? Sqrt[-kc^2 + k[]^2] : -I[]*Sqrt[kc^2 - k[]^2] ) ;

  // rotation tensor
  R[] = Tensor[Cos[-theta], Sin[-theta], 0.,
	       -Sin[-theta], Cos[-theta], 0.,
	       0., 0., 1.];

  // for TM mode
  einc[] = R[]*Vector[ Sin[ky*P[]]*Sin[kz*Q[]],
		       I[]*beta[]*ky/kc^2*Cos[ky*P[]]*Sin[kz*Q[]],
		       I[]*beta[]*kz/kc^2*Cos[kz*Q[]]*Sin[ky*P[]] ];

  // for acoustic
  uinc[] = Sin[ky*P[]]*Sin[kz*Q[]]; // mode in the rotated coordinates

  // parameter for ABC
  kInf[] = k[];
  alphaBT[] = 0; //1/(2*R_EXT) - I[]/(8*k*R_EXT^2*(1+I[]/(k*R_EXT)));
  betaBT[] = 0; // -1/(2*I[]*k); //- 1/(2*I[]*k*(1+I[]/(k*R_EXT)));

  // parameter for 0th order TC
  kIBC[] = k[];

  // parameters for 2nd order TC
  // J.-F. Lee
  kmax[] = Pi/LC ;
  delt[] = Sqrt[kmax[]^2-k[]^2]/Sqrt[k[]^2];
  aa[] = 1/(1 + I[]*delt[]);
  bb[] = aa[];
  // OO2 Gander 2002, pp. 46-47
  xsimin = 0;
  xsimax = Pi / LC;
  deltak[] = Pi;
  alphastar[] = I[] * ((k[]^2 - xsimin^2) * (k[]^2 - (k[]-deltak[])^2))^(1/4);
  betastar[] = ((xsimax^2 - k[]^2) * ((k[]+deltak[])^2 - k[]^2))^(1/4);
  a[] = - (alphastar[] * betastar[] - k[]^2) / (alphastar[] + betastar[]);
  b[] = - 1 / (alphastar[] + betastar[]);

  // parameters for Pade-type TC
  kepsI = 0.;
  keps[] = k[]*(1+kepsI*I[]);
  theta_branch = Pi/4;
}

Group{
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[((idom+1)*1000+200)];
    GammaD0~{idom} = Region[{}];
    Pml~{idom}~{0} = Region[{}];
    Pml~{idom}~{1} = Region[{}];
    PmlD0~{idom}~{0} = Region[{}];
    PmlD0~{idom}~{1} = Region[{}];
    PmlInf~{idom}~{0} = Region[{}];
    PmlInf~{idom}~{1} = Region[{}];
    If(WALLS == 1)
      GammaD0~{idom} += Region[ ((idom+1)*1000+202) ];
    EndIf
    GammaInf~{idom} = Region[{}];
    If(WALLS == 0)
      GammaInf~{idom} += Region[ ((idom+1)*1000+202) ];
    EndIf
    GammaN~{idom} = Region[{}];

    If (idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[ ((idom+1)*1000+20) ];
      GammaD~{idom} = Region[ ((idom+1)*1000+10) ];
      Pml~{idom}~{1} += Region[ ((idom+1)*1000+300) ];
      If(WALLS == 1)
        PmlD0~{idom}~{1} += Region[ ((idom+1)*1000+302) ];
      EndIf
      If(WALLS == 0)
        PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+302) ];
      EndIf
      PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+4) ];
    EndIf
    If (idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[ ((idom+1)*1000+10) ];
      Sigma~{idom}~{1} = Region[{}];
      GammaInf~{idom} += Region[ ((idom+1)*1000+20) ];
      GammaD~{idom} = Region[{}];
      Pml~{idom}~{0} += Region[ ((idom+1)*1000+100) ];
      If(WALLS == 1)
        PmlD0~{idom}~{0} += Region[ ((idom+1)*1000+102) ];
      EndIf
      If(WALLS == 0)
        PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+102) ];
      EndIf
      PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+1) ];
    EndIf
    If (idom >= 1 && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[ ((idom+1)*1000+10) ];
      Sigma~{idom}~{1} = Region[ ((idom+1)*1000+20) ];
      GammaD~{idom} = Region[{}];
      Pml~{idom}~{0} += Region[ ((idom+1)*1000+100) ];
      Pml~{idom}~{1} += Region[ ((idom+1)*1000+300) ];
      If(WALLS == 1)
        PmlD0~{idom}~{0} += Region[ ((idom+1)*1000+102) ];
        PmlD0~{idom}~{1} += Region[ ((idom+1)*1000+302) ];
      EndIf
      If(WALLS == 0)
        PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+102) ];
        PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+302) ];
      EndIf
      PmlInf~{idom}~{0} += Region[ ((idom+1)*1000+1) ];
      PmlInf~{idom}~{1} += Region[ ((idom+1)*1000+4) ];
    EndIf

    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}] ;

    BndSigma~{idom}~{0} = Region[{}];
    BndSigma~{idom}~{1} = Region[{}];
    BndSigma~{idom} = Region[{BndSigma~{idom}~{0}, BndSigma~{idom}~{1}}] ;

    BndGammaInf~{idom}~{0} = Region[{}];
    BndGammaInf~{idom}~{1} = Region[{}];
    BndGammaInf~{idom} = Region[{BndGammaInf~{idom}~{0}, BndGammaInf~{idom}~{1}}] ;
  EndFor
}

Include "Decomposition.pro";

Function{
  // parameters for PML TC
  xSigmaList = {};
  For i In {0:N_DOM}
    xSigmaList += i*dDom;
  EndFor
  For ii In {0: N_DOM-1}
    idom = ii;
    xSigma~{idom}~{0} = xSigmaList(idom);
    xSigma~{idom}~{1} = xSigmaList(idom+1);
  EndFor
  For i In {0:N_DOM}
    // distSigma~{i}[] = X[] - xSigmaList(i);
    distSigma~{i}[] = X[]*Cos[theta] + Y[]*Sin[theta] - xSigmaList(i);
  EndFor
  For ii In {0: N_DOM-1}
    idom = ii;
    For iSide In {0:1}
      kPml~{idom}~{iSide}[] = k[ Vector[xSigma~{idom}~{iSide},Y[],Z[]] ] ;
    EndFor
    // Bermudez damping functions
    SigmaX[Omega~{idom}] = 0. ;
    SigmaX[Pml~{idom}~{1}] = distSigma~{idom+1}[] > dTr ? c[]/(dBb-distSigma~{idom+1}[]) : 0. ;
    SigmaX[Pml~{idom}~{0}] = -distSigma~{idom}[] > dTr ? c[]/Fabs[(dBb+distSigma~{idom}[])] : 0. ;
  EndFor
  SigmaY[] = 0.;
  SigmaZ[] = 0.;
  Kx[] = Complex[1, SigmaX[]/omega[]];
  Ky[] = Complex[1, SigmaY[]/omega[]];
  Kz[] = Complex[1, SigmaZ[]/omega[]];
  Dpml[] = TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]];

  For ii In {0: N_DOM-1}
    idom = ii;
    D[Pml~{idom}~{0}] = Rotate[Dpml[],0.,0.,-theta];
    D[Pml~{idom}~{1}] = Rotate[Dpml[],0.,0.,-theta];
    D[Omega~{idom}] = 1.;
    E[Pml~{idom}~{0}] = Kx[]*Ky[]*Kz[];
    E[Pml~{idom}~{1}] = Kx[]*Ky[]*Kz[];
    E[Omega~{idom}] = 1.;
  EndFor

  nu[] = 1./D[];
  eps[] = 1.*D[];
}

ProcOwnsDomain = {};
For idom In{0:N_DOM-1}
  ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
EndFor

If(ANALYSIS == 0)
  Include "Helmholtz.pro" ;
EndIf
If(ANALYSIS == 1)
  Include "Maxwell.pro" ;
EndIf

Include "Schwarz.pro" ;
