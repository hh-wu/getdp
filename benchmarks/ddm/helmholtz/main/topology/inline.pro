// Describes the topology of the decomposition.
// This file is for a 1d like or layered decomposition
// (valid in 1d, 2d and 3d).
// NB: a 'concentric' decomposition falls in the same category.

Function{

  //Parallel
  ListOfField = {}; //My fields
  ListOfNeighborField = {}; //My neighbors
  ListOfDom = {} ;// My domains that I'm in charge of
  For idom In {0:N_DOM-1}
    //Index of the field (used in the DDM.pro file)
    If(idom ==0)
      myFieldLeft = {};
      myFieldRight = {0}; // my data
      exchangeFieldRight = {1}; // data to exchange with
      exchangeFieldLeft = {};
      nbNeighbLeft = 0 ;
      nbNeighbRight = 1 ;
    EndIf
    If(idom == N_DOM-1)
      myFieldLeft = {2*idom-1};
      myFieldRight = {};
      exchangeFieldRight = {};
      exchangeFieldLeft = {2*(idom-1)};
      nbNeighbLeft = 1 ;
      nbNeighbRight = 0 ;
    EndIf
    If(idom > 0 && idom < N_DOM-1)
      myFieldLeft = {2*idom-1};
      myFieldRight = {2*idom};
      exchangeFieldLeft = {2*(idom-1)};
      exchangeFieldRight = {2*idom+1};
      nbNeighbLeft = 1 ;
      nbNeighbRight = 1 ;
    EndIf

    If (idom % MPI_Size == MPI_Rank)

      ListOfField += myFieldLeft{};
      ListOfField += myFieldRight{};
      ListOfDom += idom;
      //who are my neighbor ?
      ListOfNeighborField += 1;
      ListOfNeighborField += exchangeFieldLeft{};
      ListOfNeighborField += 1;
      ListOfNeighborField += exchangeFieldRight{};

      If (!PML)
	g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexScalarField[XYZ[]]{exchangeFieldLeft{}};
        g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexScalarField[XYZ[]]{exchangeFieldRight{}};
      EndIf

      If (PML)
	// g_in~{idom}~{0}[] = ComplexScalarField[ Vector[xSigma~{idom}~{0},Y[],Z[]] ]{exchangeFieldLeft{}};
        // g_in~{idom}~{1}[] = ComplexScalarField[ Vector[xSigma~{idom}~{1},Y[],Z[]] ]{exchangeFieldRight{}};
	
      	// g_in~{idom}~{0}[] = ComplexScalarField[ Xs~{idom}~{0}[] ]{exchangeFieldLeft{}};
	// g_in~{idom}~{1}[] = ComplexScalarField[ Xs~{idom}~{1}[] ]{exchangeFieldRight{}};
      	g_in~{idom}~{0}[] = ComplexScalarField[XYZ[]]{exchangeFieldLeft{}};
	g_in~{idom}~{1}[] = ComplexScalarField[XYZ[]]{exchangeFieldRight{}};
      EndIf
    EndIf
  EndFor
  If(MPI_Size <2) // No neighbors
    NeighborField = {};
  EndIf

  If (PRECOND_SWEEP)
    ProcOwnsDomain = {} ;
    // what domains am I in charge of ? Implemented with a list
    For idom In{0:N_DOM-1}
      ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
    EndFor
  EndIf
}

ListOfCuts = {0, N_DOM-1}; // By default, ListOfCuts contains only the first and last domains, which is the configuration without cut
