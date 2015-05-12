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

