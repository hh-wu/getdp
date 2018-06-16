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
  ListOfCuts() = { {0, N_DOM-1} }
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
  om[] = om0;
  k[] = om[] / c[] ;

  omega[] = om[];//c[]*k[] ;
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
  deltak[] = Pi/DY;
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
  D() = {};
  For ii In {0:N_DOM-1}
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary
    right = (ii+1)%N_DOM + 1; // right boundary
  
    D() += i;
  
    Omega~{i} = Region[((i+1)*1000+200)];
    GammaD0~{i} = Region[{}];
  
    If(WALLS == 1)
      GammaD0~{i} += Region[ ((i+1)*1000+202) ];
    EndIf
    GammaInf~{i} = Region[{}];
    If(WALLS == 0)
      GammaInf~{i} += Region[ ((i+1)*1000+202) ];
    EndIf
    GammaN~{i} = Region[{}];
  
    If (ii == 0)
      D~{i} = {right};
  
      Pml~{i}~{right} = Region[{}];
      PmlD0~{i}~{right} = Region[{}];
      PmlInf~{i}~{right} = Region[{}];
  
      Sigma~{i}~{right} = Region[ ((i+1)*1000+20) ];
      Sigma~{i} = Region[{Sigma~{i}~{right}}] ;
  
      GammaD~{i} = Region[ ((i+1)*1000+10) ];
      Pml~{i}~{right} += Region[ ((i+1)*1000+300) ];
      If(WALLS == 1)
        PmlD0~{i}~{right} += Region[ ((i+1)*1000+302) ];
      EndIf
      If(WALLS == 0)
        PmlInf~{i}~{right} += Region[ ((i+1)*1000+302) ];
      EndIf
      PmlInf~{i}~{right} += Region[ ((i+1)*1000+4) ];
  
      Tau~{i}~{right} = Region[{}];
      Tau~{i} = Region[{Tau~{i}~{right}}] ;
  
      BndGammaInf~{i}~{right} = Region[{}];
      BndGammaInf~{i} = Region[{BndGammaInf~{i}~{right}}] ;
    EndIf
    If (ii == N_DOM-1)
      D~{i} = {left};
  
      Pml~{i}~{left} = Region[{}];
      PmlD0~{i}~{left} = Region[{}];
      PmlInf~{i}~{left} = Region[{}];
  
      Sigma~{i}~{left} = Region[ ((i+1)*1000+10) ];
      Sigma~{i} = Region[{Sigma~{i}~{left}}] ;
  
      GammaInf~{i} += Region[ ((i+1)*1000+20) ];
      GammaD~{i} = Region[{}];
      Pml~{i}~{left} += Region[ ((i+1)*1000+100) ];
      If(WALLS == 1)
        PmlD0~{i}~{left} += Region[ ((i+1)*1000+102) ];
      EndIf
      If(WALLS == 0)
        PmlInf~{i}~{left} += Region[ ((i+1)*1000+102) ];
      EndIf
      PmlInf~{i}~{left} += Region[ ((i+1)*1000+1) ];
  
      Tau~{i}~{left} = Region[{}];
      Tau~{i} = Region[{Tau~{i}~{left}}] ;
  
      BndGammaInf~{i}~{left} = Region[{}];
      BndGammaInf~{i} = Region[{BndGammaInf~{i}~{left}}] ;
    EndIf
    If (ii >= 1 && ii < N_DOM-1)
      D~{i} = {left, right};
  
      Pml~{i}~{left} = Region[{}];
      Pml~{i}~{right} = Region[{}];
      PmlD0~{i}~{left} = Region[{}];
      PmlD0~{i}~{right} = Region[{}];
      PmlInf~{i}~{left} = Region[{}];
      PmlInf~{i}~{right} = Region[{}];
  
      Sigma~{i}~{left} = Region[ ((i+1)*1000+10) ];
      Sigma~{i}~{right} = Region[ ((i+1)*1000+20) ];
      Sigma~{i} = Region[{Sigma~{i}~{left}, Sigma~{i}~{right}}] ;
  
      GammaD~{i} = Region[{}];
      Pml~{i}~{left} += Region[ ((i+1)*1000+100) ];
      Pml~{i}~{right} += Region[ ((i+1)*1000+300) ];
      If(WALLS == 1)
        PmlD0~{i}~{left} += Region[ ((i+1)*1000+102) ];
        PmlD0~{i}~{right} += Region[ ((i+1)*1000+302) ];
      EndIf
      If(WALLS == 0)
        PmlInf~{i}~{left} += Region[ ((i+1)*1000+102) ];
        PmlInf~{i}~{right} += Region[ ((i+1)*1000+302) ];
      EndIf
      PmlInf~{i}~{left} += Region[ ((i+1)*1000+1) ];
      PmlInf~{i}~{right} += Region[ ((i+1)*1000+4) ];
  
      Tau~{i}~{left} = Region[{}];
      Tau~{i}~{right} = Region[{}];
      Tau~{i} = Region[{Tau~{i}~{left}, Tau~{i}~{right}}] ;
  
      BndGammaInf~{i}~{left} = Region[{}];
      BndGammaInf~{i}~{right} = Region[{}];
      BndGammaInf~{i} = Region[{BndGammaInf~{i}~{left}, BndGammaInf~{i}~{right}}] ;
    EndIf
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
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary
    right = (ii+1)%N_DOM + 1; // right boundary
    xSigma~{i}~{left} = xSigmaList(ii);
    xSigma~{i}~{right} = xSigmaList(ii+1);
  EndFor
  For i In {0:N_DOM}
    // distSigma~{i}[] = X[] - xSigmaList(i);
    distSigma~{i}[] = X[]*Cos[theta] + Y[]*Sin[theta] - xSigmaList(i);
  EndFor
  For ii In {0: N_DOM-1}
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary
    right = (ii+1)%N_DOM + 1; // right boundary
    
    If (ii == 0)
      kPml~{i}~{right}[] = k[ Vector[xSigma~{i}~{right},Y[],Z[]] ] ;
      // Bermudez damping functions
      SigmaX[Omega~{i}] = 0. ;
      SigmaX[Pml~{i}~{right}] = distSigma~{i+1}[] > dTr ? c[]/(dBb-distSigma~{i+1}[]) : 0. ;
    EndIf
    If (ii == N_DOM-1)
      kPml~{i}~{left}[] = k[ Vector[xSigma~{i}~{left},Y[],Z[]] ] ;
      // Bermudez damping functions
      SigmaX[Omega~{i}] = 0. ;
      SigmaX[Pml~{i}~{left}] = -distSigma~{i}[] > dTr ? c[]/Fabs[(dBb+distSigma~{i}[])] : 0. ;
    EndIf
    If (ii >= 1 && ii < N_DOM-1)
      kPml~{i}~{left}[] = k[ Vector[xSigma~{i}~{left},Y[],Z[]] ] ;
      kPml~{i}~{right}[] = k[ Vector[xSigma~{i}~{right},Y[],Z[]] ] ;
      // Bermudez damping functions
      SigmaX[Omega~{i}] = 0. ;
      SigmaX[Pml~{i}~{right}] = distSigma~{i+1}[] > dTr ? c[]/(dBb-distSigma~{i+1}[]) : 0. ;
      SigmaX[Pml~{i}~{left}] = -distSigma~{i}[] > dTr ? c[]/Fabs[(dBb+distSigma~{i}[])] : 0. ;
    EndIf
  EndFor
  SigmaY[] = 0.;
  SigmaZ[] = 0.;
  Kx[] = Complex[1, SigmaX[]/omega[]];
  Ky[] = Complex[1, SigmaY[]/omega[]];
  Kz[] = Complex[1, SigmaZ[]/omega[]];
  Dpml[] = TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]];

  For ii In {0: N_DOM-1}
    i = ii+1;
    left = (ii-1)%N_DOM + 1; // left boundary
    right = (ii+1)%N_DOM + 1; // right boundary
    
    If (ii == 0)
      D[Pml~{i}~{right}] = Rotate[Dpml[],0.,0.,-theta];
      E[Pml~{i}~{right}] = Kx[]*Ky[]*Kz[];
    EndIf
    If (ii == N_DOM-1)
      D[Pml~{i}~{left}] = Rotate[Dpml[],0.,0.,-theta];
      E[Pml~{i}~{left}] = Kx[]*Ky[]*Kz[];
    EndIf
    If (ii >= 1 && ii < N_DOM-1)
      D[Pml~{i}~{left}] = Rotate[Dpml[],0.,0.,-theta];
      D[Pml~{i}~{right}] = Rotate[Dpml[],0.,0.,-theta];
      E[Pml~{i}~{left}] = Kx[]*Ky[]*Kz[];
      E[Pml~{i}~{right}] = Kx[]*Ky[]*Kz[];
    EndIf
    
    D[Omega~{i}] = 1.;
    E[Omega~{i}] = 1.;
  EndFor

  nu[] = 1./D[];
  eps[] = 1.*D[];
}

ProcOwnsDomain = {};
For ii In{0:N_DOM-1}
  ProcOwnsDomain += {(ii%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
EndFor

If(ANALYSIS == 0)
  Include "Helmholtz.pro" ;
EndIf
If(ANALYSIS == 1)
  Include "Maxwell.pro" ;
EndIf

Include "Schwarz.pro" ;
