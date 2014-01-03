Include "params.geo";
Include "groups_cylinder.pro";

Function {
  k = WAVENUMBER;
  k[] = k;

  kDtN[] = k[];
  kInf[] = k[];

  V_SOURCE[] = 0.;

  eps0 = 8.854e-12;
  mu0 = 4*Pi*1e-7;
  Z0 = 1;//Sqrt[mu0/eps0];

  epsilon[] = eps0;
  mu[] = mu0;
  omega[] = k / Sqrt[eps0*mu0];

  // N[] = Normal[];
  I[] = Complex[0, 1];
  // einc[] = Vector[0,0,1] * Complex[ Cos[-k*X[]], Sin[-k*X[]] ]; // Mohamed's
  // uinc[] = Complex[ Cos[-k*Z[]], Sin[-k*Z[]] ]; // Mohamed's

  kx = Sqrt[2.]/2.; // wavevector
  ky = 0;
  kz = Sqrt[2.]/2.;

  uinc[] = Complex[ Cos[-(kx*X[]+ky*Y[]+kz*Z[])], Sin[-k*(kx*X[]+ky*Y[]+kz*Z[])] ]; // Mohamed's
  // einc[] = Vector[1,0,0] * Complex[ Cos[-k*Z[]], -Sin[-k*Z[]] ]; // Alex's
  hinc[] = 1/Z0 * Vector[0,1,0] * Complex[ Cos[-k*Z[]], Sin[-k*Z[]] ];
  
  // Parameters for EMDA (Silver-Muller)
  k_SM[] = k[]*(1);
  // k_SM[] = k[]*(1+.25*I[]);
}

Function{
  alphaBT[] = 0;
  betaBT[] = 0;

  theta = Pi/8;
  alpha[] = -Vector[Cos[theta], 0, Sin[theta]]; 

  // N = NP_OSRC;

  beta[] = k;//BETA_EMDA;
  BETA_M[] = k;
  kDtn[] = k;
}

Include "../main/tcDefaults.pro";

Function{
  //Parallel
  ListOfField = {}; //My fields
  ListOfNeighborField = {}; //My neighbors
  ListOfDom = {} ;
  For idom In {0:N_DOM-1}
    If(idom ==0)
      myFieldLeft = {};
    hasNeighbLeft = 0;
      myFieldRight = {0};
    hasNeighbRight = 1;
      exchangeFieldLeft = {};
      exchangeFieldRight = {1};
      n_neighb = 1;
    EndIf
    If(idom == N_DOM-1)
      myFieldLeft = {2*idom-1};
    hasNeighbLeft = 1;
      myFieldRight = {};
    hasNeighbRight = 0;
      exchangeFieldLeft = {2*(idom-1)};
      exchangeFieldRight = {};
      n_neighb = 1;
    EndIf
    If(idom > 0 && idom < N_DOM-1)
      myFieldLeft = {2*idom-1};
    hasNeighbLeft = 1;
      myFieldRight = {2*idom};
    hasNeighbRight = 1;
      exchangeFieldLeft = {2*(idom-1)};
      exchangeFieldRight = {2*idom+1};
      n_neighb = 2;
    EndIf

    If (idom % MPI_Size == MPI_Rank) // FIXME: This way of dispatching the domains is not necessarily optimal for the double sweep strategy !?
      // ListOfDom += idom;
      // ListOfField += {myFieldLeft{}, myFieldRight{}};

      //who are my neighbor ?
      // // ListOfNeighborField += n_neighb;
      // // ListOfNeighborField += exchangeFieldLeft{};
      // // ListOfNeighborField += exchangeFieldRight{};

      // If(hasNeighbLeft) // FIXME: replace this by evaluating the list size
      //   ListOfNeighborField += 1;
      //   ListOfNeighborField += exchangeFieldLeft{};
      // EndIf

      // If(hasNeighbRight)
      //   ListOfNeighborField += 1;
      //   ListOfNeighborField += exchangeFieldRight{};
      // EndIf

      ListOfField += myFieldLeft{};
      ListOfField += myFieldRight{};
      ListOfDom += idom;
      //who are my neighbor ?
      // ListOfNeighborField += nb_voisin;
      // ListOfNeighborField += list_voisin{};
      // ListOfNeighborField += nb_voisin;
      ListOfNeighborField += 1;
      ListOfNeighborField += exchangeFieldLeft{};
      ListOfNeighborField += 1;
      ListOfNeighborField += exchangeFieldRight{};

      // g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexVectorField[XYZ[]]{exchangeFieldLeft{}}; // FOR MAXWELL ONLY !!
      // g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexVectorField[XYZ[]]{exchangeFieldRight{}};
      g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexScalarField[XYZ[]]{exchangeFieldLeft{}}; // FOR HELMHOLTZ ONLY !!
      g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexScalarField[XYZ[]]{exchangeFieldRight{}};

    EndIf
  EndFor
}


If (PRECOND_SWEEP)
// ListOfCuts = {0, 5, 10, 15, N_DOM-1};
ListOfCuts = {0:N_DOM-1:5, N_DOM-1};
// ListOfCuts = {0, N_DOM-1};

  // Hack to build a 'list of lists': generate variables with 'indexed names'
  nCuts = 0;
  For iCut In {0:#ListOfCuts()-2}
    nProcsInCut~{iCut} = 0;
  EndFor
  For iCut In {0:#ListOfCuts()-2}
    For iDom In {ListOfCuts(iCut):ListOfCuts(iCut+1):1}
      ListOfProcsInCut~{iCut}~{nProcsInCut~{iCut}} = iDom;
      nProcsInCut~{iCut} += 1;
    EndFor
    nCuts += 1;
  EndFor

  // what domains am I in charge of ? Implemented with a list
  ProcOwnsDomain = {};
  For idom In{0:N_DOM-1}
    ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
  EndFor
EndIf


// Include "../main/Helmholtz.pro";
Include "../main/Helmholtz_experimental.pro";
