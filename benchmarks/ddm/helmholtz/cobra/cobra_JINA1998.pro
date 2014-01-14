Include "params_JINA1998.geo";

// Compute the number of domains as the sum of the domains in each part of the waveguide
N_DOM = 0;
For i In {0:4}
N_DOM += nDomList(i);
EndFor

If (MPI_Rank == 0)
Printf("Total number of domains: %g", N_DOM);
EndIf

Include "../main/ddmDefines.pro";
Include "groups_cobra.pro";

EXT_TIME = 1;

Function {
  I[] = Complex[0, 1];
  k[] = WAVENUMBER ;

  V_SOURCE[] = 0.;

  If (!geo3d)
    uinc[] = Complex[ Sin[Pi*m/d*(Y[]-(shiftY-d/2.))], 0. ];
  EndIf
  If(geo3d)
    uinc[] = Complex[ Sin[Pi*m/d1*(Y[])]*Sin[Pi*n/d2*(Z[])], 0. ];
  EndIf

  kDtn[] = k[];
  kInf[] = k[];
}

Include "../main/tcDefaults.pro";

N = 2;

Include "../main/topology/inline.pro";

If (PRECOND_SWEEP)
  ListOfCuts = {0, 5, 10, N_DOM-1};

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

Include "../main/Helmholtz.pro";
