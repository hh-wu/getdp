Include "params.geo";
Include "groups_falcon.pro";

Function {
  k[] = WAVENUMBER;
  kDtN[] = k[];
  kInf[] = k[];

  eps0 = 8.854e-12;
  mu0 = 4*Pi*1e-7;
  Z0 = Sqrt[mu0/eps0];

  epsilon[] = eps0;
  mu[] = mu0;
  omega[] = k[] / Sqrt[eps0*mu0];

  N[] = Normal[];
  I[] = Complex[0, 1];
  einc[] = Vector[0,0,1] * Complex[ Cos[-k[]*X[]], Sin[-k[]*X[]] ];
  hinc[] = 1/Z0 * Vector[0,1,0] * Complex[ Cos[-k[]*X[]], Sin[-k[]*X[]] ];

  // Parameters for OSRC
  theta_branch = THETA_BRANCH_OSRC;
  kappa[] =  1;//Norm[XYZ[]];// 1/R_INT; // curvature
  keps[] = Complex[ k[], 0.4  ];

    //Parameters for JFLee
  kmax[] = Pi/lc ;//Norm[XYZ[]]*Pi/LC ;
  delt[] = Sqrt[kmax[]^2-k[]^2]/Sqrt[k[]^2];
  Coef_Lee1[] = 1/(1 + I[]*delt[]);
  Coef_Lee2[] = -Coef_Lee1[];
}

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
      ListOfDom += {idom};
      ListOfField += {myFieldLeft{}, myFieldRight{}};
      //who are my neighbor ?
      // // ListOfNeighborField += n_neighb;
      // // ListOfNeighborField += exchangeFieldLeft{};
      // // ListOfNeighborField += exchangeFieldRight{};

      If(hasNeighbLeft) // FIXME: replace this by evaluating the list size
        ListOfNeighborField += 1;
        ListOfNeighborField += exchangeFieldLeft{};
      EndIf

      If(hasNeighbRight)
        ListOfNeighborField += 1;
        ListOfNeighborField += exchangeFieldRight{};
      EndIf

      g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexVectorField[XYZ[]]{exchangeFieldLeft{}};
      g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexVectorField[XYZ[]]{exchangeFieldRight{}};

    EndIf

  EndFor
}

Include "../main/Maxwell.pro";
