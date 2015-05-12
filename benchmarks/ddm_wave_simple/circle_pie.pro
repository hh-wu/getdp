Include "circle_pie_data.geo";

DefineConstant[ // allows to set these from outside
  // transmission boundary condition
  TC_TYPE = {2, Name "Input/01Transmission condition",
    Choices {0="Order 0", 1="Order 2", 2="Pade (OSRC)"}},
  NP_OSRC = 4,
  // parameters for the DDM iterative solver
  SOLVER = "gmres", // bcgs, gmsh_pcleft, ...
  TOL = 1e-4,
  MAXIT = 1000,
  RESTART = MAXIT
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
  kDtN[] = k + (2*Pi /-I[]);

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
}

Group{
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[(idom)];
    GammaD0~{idom} = Region[{}];
    GammaD~{idom} = Region[{(1000 + idom)}];
    GammaN~{idom} = Region[{}];
    GammaInf~{idom} = Region[{(2000 + idom)}];

    Sigma~{idom}~{0} = Region[{(3000 + idom)}]; // left boundary (if looking to the center from infinity)
    Sigma~{idom}~{1} = Region[{(4000 + idom)}]; // right boundary
    Sigma~{idom} = Region[{Sigma~{idom}~{0}, Sigma~{idom}~{1}}] ;

    BndGammaD~{idom}~{0} = Region[{(5000 + idom)}];
    BndGammaD~{idom}~{1} = Region[{}];
    BndGammaD~{idom} = Region[{BndGammaD~{idom}~{0}, BndGammaD~{idom}~{1}}] ;

    BndGammaInf~{idom}~{0} = Region[{(6000 + idom)}];
    BndGammaInf~{idom}~{1} = Region[{}];
    BndGammaInf~{idom} = Region[{BndGammaInf~{idom}~{0}, BndGammaInf~{idom}~{1}}] ;

    BndSigma~{idom}~{0} = Region[{(7000 + idom)}];
    BndSigma~{idom}~{1} = Region[{(8000 + idom)}];
    BndSigma~{idom} = Region[{BndSigma~{idom}~{0}, BndSigma~{idom}~{1}}] ;
  EndFor
}

Function{
  // definitions for parallel (MPI) runs:

  ListOfDom = {} ; // the domains that I'm in charge of
  ListOfField = {}; // my fields
  ListOfNeighborField = {}; // my neighbors

  // this describes a layered (1-d like) decomposition (domain 0 and N-1 are adjacent)
  //         +--------+------+------+---...---+------------+
  //  field: |2N-1   0|1    2|3    4|5    2N-4|2N-3    2N-2|
  //   idom: |    0   |   1  |   2  |         |    N-1     |
  //         +--------+------+------+---...---+------------+

  For idom In {0:N_DOM-1}
    If (idom % MPI_Size == MPI_Rank)
      // my fields
      myFieldLeft  = {(2*(idom + N_DOM) + (0-1)) % (2*N_DOM)};
      myFieldRight = {(2*(idom + N_DOM) + (1-1)) % (2*N_DOM)};
      exchangeFieldLeft  = {(2*(idom - 1 + N_DOM)+(1-1)) % (2*N_DOM)}; // right boundary of left neightbor
      exchangeFieldRight = {(2*(idom + 1 + N_DOM)+(0-1)) % (2*N_DOM)}; // left boundary of right neightbor
      // 2 "blocks"
      ListOfNeighborField += 1;
      ListOfNeighborField += exchangeFieldLeft{};
      ListOfNeighborField += 1;
      ListOfNeighborField += exchangeFieldRight{};

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

Include "Helmholtz.pro" ;
Include "Schwarz.pro" ;
