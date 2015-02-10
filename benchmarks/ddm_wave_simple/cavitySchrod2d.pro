Include "cavitySchrod2d_data.geo";

DefineConstant[ // allows to set these from outside
  // type of walls
  WALLS = {1, Name "Input/05Walls",
    Choices {0="Transparent", 1="Metallic"}},
  // excitation mode
  MODE = {2, Name "Input/05m"}, // y
  // transmission boundary condition
  TC_TYPE = {3, Name "Input/01Transmission condition",
    Choices {0="Order 0", /*1="Order 2", 2="Pade (OSRC)",*/ 3="PML"}},
  NP_OSRC = 4,
  // parameters for the DDM iterative solver
  SOLVER = "gmres", // bcgs, gmsh_pcleft, ...
  TOL = 1e-6,
  MAXIT = 1000,
  RESTART = MAXIT
];

Function {
  I[] = Complex[0, 1];

  // local interface coordinates for the delta functions
  For idom In {0:N_DOM-1}
    For jdom In {0:1}
      P~{idom}~{jdom}[] = (-X[]*Sin[theta]+Y[]*Cos[theta]);
      Q~{idom}~{jdom}[] = Z[];
    EndFor
  EndFor
  P[] = (-X[]*Sin[theta]+Y[]*Cos[theta]);

  deltaT = 1.;
  c[] = 1.;
  om[] = 1.;

  R[] = Sqrt[(X[]-DX/2.)^2+(Y[]-DY/2.)^2];

  V[] = 2*Fabs[R[]]^2;
  F[] = (4*I[]/deltaT + 2*V[]);

  Kn[] = 4*I[]/deltaT - 2*V[];
  k[] = 1.; // will be used to build the TC

  Psi_n[] = Exp[-Fabs[R[]]^2]; // from outside

  // parameter for ABC
  kInf[] = k[];//BETA_M[];
  alphaBT[] = 0; //1/(2*R_EXT) - I[]/(8*k*R_EXT^2*(1+I[]/(k*R_EXT)));
  betaBT[] = 0; // -1/(2*I[]*k); //- 1/(2*I[]*k*(1+I[]/(k*R_EXT)));

  // parameter for 0th order TC
  kDtN[] = k[];

  // parameters for 2nd order TC
  // J.-F. Lee
  kmax[] = Pi/LC ;
  delt[] = Sqrt[kmax[]^2-k[]^2]/Sqrt[k[]^2];
  Coef_Lee1[] = 1/(1 + I[]*delt[]);
  Coef_Lee2[] = -Coef_Lee1[];
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
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[((idom+1)*1000+200)];
    GammaD0~{idom} = Region[{}];
    GammaD~{idom} = Region[{}];
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
      GammaD0~{idom} += Region[ ((idom+1)*1000+10) ];
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
      GammaD0~{idom} += Region[ ((idom+1)*1000+20) ];
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

Function{
  // definitions for parallel (MPI) runs:

  ListOfDom = {} ; // the domains that I'm in charge of
  ListOfField = {}; // my fields
  ListOfNeighborField = {}; // my neighbors

  // this describes a layered (1-d like) decomposition
  //         +------+------+------+---...---+------+
  //  field: |     0|1    2|3    4|5    2N-4|2N-3  |
  //   idom: |   0  |   1  |   2  |         |  N-1 |
  //         +------+------+------+---...---+------+

  For idom In {0:N_DOM-1}
    If (idom % MPI_Size == MPI_Rank)
      If(idom == 0)
        // my fields
        myFieldLeft = {};
        myFieldRight = {0};
        // fields to exchange with
        exchangeFieldLeft = {};
        exchangeFieldRight = {1};
        // as many "blocks" as I have fields
        ListOfNeighborField += 1;
        ListOfNeighborField += exchangeFieldRight();
      EndIf
      If(idom == N_DOM-1)
        myFieldLeft = {2*idom-1};
        myFieldRight = {};
        exchangeFieldLeft = {2*(idom-1)};
        exchangeFieldRight = {};
        ListOfNeighborField += 1;
        ListOfNeighborField += exchangeFieldLeft();
      EndIf
      If(idom > 0 && idom < N_DOM-1)
        myFieldLeft = {2*idom-1};
        myFieldRight = {2*idom};
        exchangeFieldLeft = {2*(idom-1)};
        exchangeFieldRight = {2*idom+1};
        // 2 "blocks"
        ListOfNeighborField += 1;
        ListOfNeighborField += exchangeFieldLeft();
        ListOfNeighborField += 1;
        ListOfNeighborField += exchangeFieldRight();
      EndIf
      ListOfDom += idom;
      ListOfField += {myFieldLeft(), myFieldRight()};
      If(ANALYSIS == 0)
        g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexScalarField[XYZ[]]{exchangeFieldLeft()};
        g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexScalarField[XYZ[]]{exchangeFieldRight()};
      EndIf
      If(ANALYSIS == 1)
        g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexVectorField[XYZ[]]{exchangeFieldLeft()};
        g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexVectorField[XYZ[]]{exchangeFieldRight()};
      EndIf
    EndIf
  EndFor

  /*
  MPI_Printf["ListOfDom = ", ListOfDom()];
  MPI_Printf["ListOfField = ", ListOfField()];
  MPI_Printf["ListOfNeighborField = ", ListOfNeighborField()];
  */
}

Function{
  // parameters for PML TC
  xSigmaList = {};
  thetaList = {};
  For i In {0:N_DOM}
    xSigmaList += i*dDom;
    thetaList += theta;
  EndFor
  For ii In {0: N_DOM-1}
    idom = ii;
    xSigma~{idom}~{0} = xSigmaList(idom);
    xSigma~{idom}~{1} = xSigmaList(idom+1);
    theta~{idom}[] = thetaList(idom);
  EndFor
  For i In {0:N_DOM}
    distSigma~{i}[] = X[]*Cos[theta] + Y[]*Sin[theta] - xSigmaList(i);
  EndFor
  For ii In {0: N_DOM-1}
    idom = ii;
    For jdom In {0:1}
      kPml~{idom}~{jdom}[] = k[ Vector[xSigma~{idom}~{jdom},Y[],Z[]] ] ;
    EndFor
    // Bermudez damping functions
    SigmaX[Pml~{idom}~{1}] = distSigma~{idom+1}[] > dTr ? c[]/(dBb-distSigma~{idom+1}[]) : 0;
    SigmaX[Pml~{idom}~{0}] = -distSigma~{idom}[] > dTr ? c[]/Fabs[(dBb+distSigma~{idom}[])] : 0 ;
  EndFor
  SigmaY[] = 0.;
  SigmaZ[] = 0.;
  Kx[] = Complex[1, SigmaX[]/om[]];
  Ky[] = Complex[1, SigmaY[]/om[]];
  Kz[] = Complex[1, SigmaZ[]/om[]];
  D[] = TensorDiag[Ky[]*Kz[]/Kx[], Kx[]*Kz[]/Ky[], Kx[]*Ky[]/Kz[]];
}

If(ANALYSIS == 0)
  Include "Schrodinger.pro" ;
EndIf
If(ANALYSIS == 1)
  Include "Maxwell.pro" ;
EndIf

DefineConstant[
  // default getdp parameters for onelab
  R_ = {"DDM", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v 3 -bin -ksp_monitor", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
