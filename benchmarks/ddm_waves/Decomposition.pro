Function{
  myD = {} ; // the domains that I'm in charge of
  ListOfFields = {};
  ListOfConnectedFields = {};
    
  For idom In {0:N_DOM-1}
    myD~{idom} = {};
    If (idom % MPI_Size == MPI_Rank)
      myD() += D(idom);
      myD~{idom} += D~{idom}();
    EndIf
  EndFor
    
  For ii In {0:#myD()-1}
    i = myD(ii);
    If(#myD~{i}() == 2)
      Printf("We can do sweeping!");
    EndIf
    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
            
      tag_g~{i}~{j} = i * 1000 + j;
      tag_g~{j}~{i} = j * 1000 + i;
            
      ListOfFields() += tag_g~{i}~{j};
      ListOfConnectedFields() += 1;
      ListOfConnectedFields() += tag_g~{j}~{i};
      If(ANALYSIS == 0)
        g_in~{i}~{j}[ Sigma~{i}~{j} ] = ComplexScalarField[XYZ[]]{ tag_g~{j}~{i} };
      EndIf
      If(ANALYSIS == 1 || ANALYSIS == 2)
        g_in~{i}~{j}[ Sigma~{i}~{j} ] = ComplexVectorField[XYZ[]]{ tag_g~{j}~{i} };
      EndIf
    EndFor
  EndFor
            
  MPI_Printf["ListOfFields = ", ListOfFields()];
  MPI_Printf["ListOfConnectedFields = ", ListOfConnectedFields()];
}
