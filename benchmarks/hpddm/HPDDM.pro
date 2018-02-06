//Dummy (for now) test code for HPDDM


Resolution {
  { Name HPDDM;
    System {
      For ii In {0: #myD()-1}
        i = myD(ii);
	{ Name Vol~{i}; NameOfFormulation Vol~{i};
	  Type Complex     ; NameOfMesh Sprintf[StrCat[MSH_NAME, "%g.msh"], i];
	}
	/*
        For jj In {0:#myD~{i}()-1}
          j = myD~{i}(jj);
          { Name Sur~{i}~{j}; NameOfFormulation Sur~{i}~{j};
            Type Complex; NameOfMesh Sprintf[StrCat[MSH_NAME, "%g.msh"], i]; }
          If (PRECONDITIONER)
            { Name SurPc~{i}~{j}; NameOfFormulation SurPc~{i}~{j};
              Type Complex; NameOfMesh Sprintf[StrCat[MSH_NAME, "%g.msh"], i]; }
          EndIf
        EndFor*/
      EndFor
    }
    Operation {

      SetCommSelf;
      For ii In {0: #myD()-1}
	idom = myD(ii);
	Generate[Vol~{idom}];
      EndFor
      SetCommWorld;

      HPDDMSolve[Vol~{idom}, Vol~{myD~{myD(0)}()}];

    }
  }
}
