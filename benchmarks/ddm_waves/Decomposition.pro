Function{
  // definitions for parallel (MPI) runs:

  // this describes a layered (1-d like) decomposition
  //         +------+------+------+---...---+------+
  //  field: |     0|1    2|3    4|5    2N-4|2N-3  |
  //   idom: |   0  |   1  |   2  |         |  N-1 |
  //         +------+------+------+---...---+------+

  ListOfSubdomains = {} ; // the subdomains that I'm in charge of
  ListOfFields = {}; // my fields
  For idom In {0:N_DOM-1}
    If (idom % MPI_Size == MPI_Rank)
      If(idom == 0)
        // my fields
        myFieldLeft = {};
        myFieldRight = {0};
      EndIf
      If(idom == N_DOM-1)
        myFieldLeft = {2*idom-1};
        myFieldRight = {};
      EndIf
      If(idom > 0 && idom < N_DOM-1)
        myFieldLeft = {2*idom-1};
        myFieldRight = {2*idom};
      EndIf
      ListOfSubdomains += idom;
      ListOfFields += {myFieldLeft(), myFieldRight()};
    EndIf
  EndFor

  ListOfConnectedFields = {}; // fields connected to my fields
  For idom In {0:N_DOM-1}
    If (idom % MPI_Size == MPI_Rank)
      If(idom == 0)
        // fields to exchange with
        connectedFieldLeft = {};
        connectedFieldRight = {1};
        // as many "blocks" as connected fields
        ListOfConnectedFields += #connectedFieldRight();
        ListOfConnectedFields += connectedFieldRight();
      EndIf
      If(idom == N_DOM-1)
        connectedFieldLeft = {2*(idom-1)};
        connectedFieldRight = {};
        ListOfConnectedFields += #connectedFieldLeft();
        ListOfConnectedFields += connectedFieldLeft();
      EndIf
      If(idom > 0 && idom < N_DOM-1)
        connectedFieldLeft = {2*(idom-1)};
        connectedFieldRight = {2*idom+1};
        // 2 "blocks"
        ListOfConnectedFields += #connectedFieldLeft();
        ListOfConnectedFields += connectedFieldLeft();
        ListOfConnectedFields += #connectedFieldRight();
        ListOfConnectedFields += connectedFieldRight();
      EndIf
      // definition of artificial source fields
      If(ANALYSIS == 0) // Helmholtz (scalar-valued)
        g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexScalarField[XYZ[]]{connectedFieldLeft()};
        g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexScalarField[XYZ[]]{connectedFieldRight()};
      EndIf
      If(ANALYSIS == 1) // Maxwell (vector-valued)
        g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexVectorField[XYZ[]]{connectedFieldLeft()};
        g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexVectorField[XYZ[]]{connectedFieldRight()};
      EndIf
    EndIf
  EndFor

  /*
  MPI_Printf["ListOfSubdomains = ", ListOfSubdomains()];
  MPI_Printf["ListOfFields = ", ListOfFields()];
  MPI_Printf["ListOfConnectedFields = ", ListOfConnectedFields()];
  */
}
