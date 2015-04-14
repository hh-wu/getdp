Include "waveguide3d_data.geo";

DefineConstant[ // allows to set these from outside
  // type of walls
  WALLS = {0, Name "Input/05Walls",
    Choices {0="Transparent", 1="Metallic"}},
  // excitation mode
  MODE_M = {1, Name "Input/05m"}, // y
  MODE_N = {1, Name "Input/05n"}, // z
  // transmission boundary condition
  TC_TYPE = {0, Name "Input/01Transmission condition",
    Choices {0="Order 0", 1="Order 2", 2="Pade (OSRC)"}},
  NP_OSRC = 4,
  // parameters for the DDM iterative solver
  SOLVER = "gmres", // bcgs, gmsh_pcleft, ...
  TOL = 1e-4,
  MAXIT = 1000,
  RESTART = MAXIT
];

Function {
  I[] = Complex[0, 1] ;
  N[] = Normal[] ;
  k = WAVENUMBER ;
  k[] = k ;

  eps0 = 8.854e-12;
  mu0 = 4*Pi*1e-7;
  c = 1 / Sqrt[mu0*eps0];

  omega[] = c*k[] ;
  mu[] = mu0 ;

  ky = MODE_M*Pi/DY ;
  kz = MODE_N*Pi/DZ ;
  kc = Sqrt[ky^2+kz^2] ;
  beta[] = ( -kc^2 + k[]^2 >=0 ? Sqrt[-kc^2 + k[]^2] : -I[]*Sqrt[kc^2 - k[]^2] ) ;

  // for TM mode
  einc[] = Vector[ Sin[ky*Y[]]*Sin[kz*Z[]],
                   I[]*beta[]*ky/kc^2*Cos[ky*Y[]]*Sin[kz*Z[]],
                   I[]*beta[]*kz/kc^2*Cos[kz*Z[]]*Sin[ky*Y[]] ];

  // for acoustic
  uinc[] = Sin[ky*Y[]]*Sin[kz*Z[]];

  // parameter for ABC
  kInf[] = k;
  alphaBT[] = 0; //1/(2*R_EXT) - I[]/(8*k*R_EXT^2*(1+I[]/(k*R_EXT)));
  betaBT[] = 0; // -1/(2*I[]*k); //- 1/(2*I[]*k*(1+I[]/(k*R_EXT)));

  // parameter for 0th order TC
  kDtN[] = k;

  // parameters for 2nd order TC
  // J.-F. Lee
  kmax[] = Pi/LC ;
  delt[] = Sqrt[kmax[]^2-k^2]/Sqrt[k^2];
  aa[] = 1/(1 + I[]*delt[]);
  bb[] = aa[];
  // OO2 Gander 2002, pp. 46-47
  xsimin = 0;
  xsimax = Pi / LC;
  deltak[] = Pi;
  alphastar[] = I[] * ((k^2 - xsimin^2) * (k^2 - (k-deltak[])^2))^(1/4);
  betastar[] = ((xsimax^2 - k^2) * ((k+deltak[])^2 - k^2))^(1/4);
  a[] = - (alphastar[] * betastar[] - k^2) / (alphastar[] + betastar[]);
  b[] = - 1 / (alphastar[] + betastar[]);

  // parameters for Pade-type TC
  kepsI = 0.;
  keps[] = k*(1+kepsI*I[]);
  theta_branch = Pi/4;
}

Group{
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[( 6000 + idom + 1 )];
    GammaD0~{idom} = Region[{}];
    If(WALLS == 1)
      GammaD0~{idom} += Region[{(3000 + idom + 1)}];
    EndIf
    GammaInf~{idom} = Region[{}];
    If(WALLS == 0)
      GammaInf~{idom} += Region[{(3000 + idom + 1)}];
    EndIf
    GammaN~{idom} = Region[{}];

    If (idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[{(1000*(idom+5))}];
      GammaD~{idom} = Region[{(1000 + idom + 1)}];
    EndIf
    If (idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[{(1000*(idom+4))}];
      Sigma~{idom}~{1} = Region[{}];
      GammaInf~{idom} += Region[{(2000 + idom +1)}];
      GammaD~{idom} = Region[{}];
    EndIf
    If (idom >= 1 && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{(1000*(idom+4))}];
      Sigma~{idom}~{1} = Region[{(1000*(idom+5))}];
      GammaD~{idom} = Region[{}];
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

If(ANALYSIS == 0)
  Include "Helmholtz.pro" ;
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
