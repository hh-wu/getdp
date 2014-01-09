Include "params.geo";
Include "groups_square_overlap.pro";

Function {
  V_SOURCE[] = 10*X[] ;
  uinc[] = (1.-X[])*1;
}

// G_IN
Function{
  //Parallel
  ListOfField = {}; //My fields
  ListOfNeighborField = {}; //My neighbors
  ListOfDom = {} ;// My domains that I'm in charge of
  For idom In {0:N_DOM-1}
    //Index of the field (used in the DDM.pro file)
    If(idom ==0)
      myfield_left = {};
      myfield_right = {0}; // my data
      voisin_right = {1}; // data to exchange with
      voisin_left = {};
      nb_voisin = 1 ;
    EndIf
    If(idom == N_DOM-1)
      myfield_left = {2*idom-1};
      myfield_right = {};
      voisin_right = {};
      voisin_left = {2*(idom-1)};
      nb_voisin = 1 ;
    EndIf
    If(idom > 0 && idom < N_DOM-1)
      myfield_left = {2*idom-1};
      myfield_right = {2*idom};
      voisin_left = {2*(idom-1)};
      voisin_right = {2*idom+1};
      nb_voisin = 2 ;
    EndIf

    // list_voisin = {voisin_right{}, voisin_left{}};
    If (idom % MPI_Size == MPI_Rank)
      list_voisin = {voisin_left{}, voisin_right{}};

      ListOfField += myfield_left{};
      ListOfField += myfield_right{};
      ListOfDom += idom;
      //who are my neighbor ?
      // ListOfNeighborField += nb_voisin;
      // ListOfNeighborField += list_voisin{};
      // ListOfNeighborField += nb_voisin;

      // g_in~{idom}~{0}[Sigma~{idom}~{0}] = ComplexScalarField[XYZ[]]{voisin_left{}};
      // g_in~{idom}~{1}[Sigma~{idom}~{1}] = ComplexScalarField[XYZ[]]{voisin_right{}};
      g_in~{idom}~{0}[] = ComplexScalarField[XYZ[]]{voisin_left{}};
      g_in~{idom}~{1}[] = ComplexScalarField[XYZ[]]{voisin_right{}};

    EndIf
  EndFor
  If(MPI_Size <2) // No neighbors
    NeighborField = {};
  EndIf
}

Include "../main/elesta.pro";
