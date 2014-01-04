// Describes the topology of the decomposition.
// This file is for a looped or 'pie-like' decomposition

Function{

  //Parallel
  ListOfField = {}; //My fields
  ListOfNeighborField = {}; //My neighbors
  ListOfDom = {};
  nb_field = 0; // size of ListOfField

  // idom = MPI_Rank;
  For idom In {0:N_DOM-1}
    myFieldLeft = {(2*(idom + N_DOM)-1)%(2*N_DOM)};
    myFieldRight = {2*idom};
    exchangeFieldLeft = {(2*(idom + N_DOM)-2)%(2*N_DOM)};
    exchangeFieldRight = {(2*(idom + N_DOM)+1)%(2*N_DOM)};

    g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexVectorField[XYZ[]]{exchangeFieldLeft{}};
    g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexVectorField[XYZ[]]{exchangeFieldRight{}};

    If (idom % MPI_Size == MPI_Rank)

      ListOfDom += {idom};
      ListOfField += {myFieldLeft{}, myFieldRight{}};
      nb_field +=2;
      //who are my neighbor ?
      ListOfNeighborField += 1;
      ListOfNeighborField += {exchangeFieldLeft{}};
      ListOfNeighborField += 1;
      ListOfNeighborField += {exchangeFieldRight{}};

    EndIf
  EndFor
}
