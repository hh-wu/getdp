Include "params.geo";
Include "../main/ddmDefines.pro";
Include "groups_marmousi_mshcut.pro";

VELOCITY_FNAME = "../marmousi/marmousi.pos";
LEFT_PC = 0;
MSH_SPLIT = 1;

Function {
  I[] = Complex[0,1];
  If (EXTERNAL_VELOCITY_FIELD)
    c[] = ScalarField[XYZ[]]{999};
  EndIf
  If (!EXTERNAL_VELOCITY_FIELD)
    c[] = cAvg; //use a mean value
  EndIf  
  k[] = om/c[] ;
  kInf[] = k[];
  kDtn[] = k[];

  uinc[] = 1.;

  V_SOURCE[] = 0.;
  fGrad[] = 0.;

  alphaBT[] = 0;
  betaBT[] = 0;

}


Include "../main/tcDefaults.pro";
Include "../main/topology/inline.pro";

// ListOfCuts = {0, 2, 5, N_DOM-1};
// ListOfCuts = {0, 5, 10, N_DOM-1};
ListOfCuts = {0:N_DOM-1:3};

// Printf("%g", ListOfCuts(#ListOfCuts()-1));

If (PRECOND_SWEEP)
  // what domains am I in charge of ? Implemented with a list
  ProcOwnsDomain = {};
  For idom In{0:N_DOM-1}
    ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
  EndFor
EndIf

Include "../main/Helmholtz.pro";
