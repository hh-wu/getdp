Include "waveguide2d_data.geo";

DefineConstant[ // allows to set these from outside
  // type of walls
  WALLS = {1, Name "Input/05Walls",
    Choices {0="Transparent", 1="Metallic"}},
  // excitation mode
  MODE = {2, Name "Input/05m"}, // y
  // transmission boundary condition
  TC_TYPE = {3, Name "Input/01Transmission condition",
    Choices {0="Order 0", 1="Order 2", 2="Pade (OSRC)", 3="PML"}},
  NP_OSRC = 4,
  // sweeping preconditioner
  PRECONDITIONER = {0, Name "Input/01Sweeping preconditioner",
    Choices{0="Unpreconditioned",
      1="Double sweep",
      2="SGS"}},
  ListOfCuts() = { {0, N_DOM-1} }
];

Function {
  I[] = Complex[0, 1];

  c0[] = 1;
  If(GAUSSIAN==1)
    c[] = 1.25*(1.-.4*Exp[-32*(Y[]-DY/2)^2]) ; // gaussian
  EndIf
  If(GAUSSIAN==0)
    c[] = 1; // constant
  EndIf
  freq[] = c0[] / LAMBDA;
  om[] = 2 * Pi * freq[];
  k[] = om[] / c[] ;

  BETA_M[] = Sqrt[k[]^2-(MODE*Pi/DY)^2];

  uinc[] = Complex[ Sin[MODE * Pi / DY * Y[]], 0];

  // parameter for ABC
  kInf[] = k[];//BETA_M[];
  alphaBT[] = 0; //1/(2*R_EXT) - I[]/(8*k*R_EXT^2*(1+I[]/(k*R_EXT)));
  betaBT[] = 0; // -1/(2*I[]*k); //- 1/(2*I[]*k*(1+I[]/(k*R_EXT)));

  // parameter for 0th order TC
  kIBC[] = k[];

  // parameters for 2nd order TC
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

  // parameters for PML TC are defined piecewise on groups (see below)
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
    distSigma~{i}[] = X[] - xSigmaList(i);
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
  Kx[] = Complex[1, SigmaX[]/om[]];
  Ky[] = Complex[1, SigmaY[]/om[]];
  Kz[] = Complex[1, SigmaZ[]/om[]];
  D[] = TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]];
  E[] = Kx[]*Ky[]*Kz[];
}

If (PRECONDITIONER)
  ProcOwnsDomain = {};
  For ii In{0:N_DOM-1}
    // define your rule here -- must match listOfDom()
    ProcOwnsDomain += {(ii%MPI_Size == MPI_Rank)};
  EndFor
EndIf

If (ANALYSIS == 0)
  Include "Helmholtz.pro"; // formulations, function spaces and other definitions
EndIf
If (ANALYSIS == 1)
  Include "Maxwell.pro"; // formulations, function spaces and other definitions
EndIf

Include "Schwarz.pro" ;
