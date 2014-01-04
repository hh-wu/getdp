Include "params_JINA1998.geo";

eps0 = 8.854e-12;
mu0 = 4*Pi*1e-7;
Z0 = 1;//Sqrt[mu0/eps0];
c = 1/Sqrt[mu0*eps0];


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
  k = WAVENUMBER ;
  k[] = k ;
  mu[] = mu0 ;
  hinc[] = 0 ;

  N[] = Normal[] ;

  V_SOURCE[] = 0.;

  ky = m*Pi/d1 ;
  kz = n*Pi/d2 ;
  kc = Sqrt[ky^2+kz^2] ;
  beta[] = ( -kc^2 + k[]^2 >=0 ? Sqrt[-kc^2 + k[]^2] : -I[]*Sqrt[kc^2 - k[]^2] ) ;

  einc[] = Vector[ Sin[ky*Y[]]*Sin[kz*Z[]], I[]*beta[]*ky/kc^2*Cos[ky*Y[]]*Sin[kz*Z[]], I[]*beta[]*kz/kc^2*Cos[kz*Z[]]*Sin[ky*Y[]] ]; // TM

  kDtN[] = k[];
  kInf[] = k[];
  omega[] = c*k[] ;
}

Include "../main/tcDefaults.pro";
Include "../main/topology/inline.pro";

If (PRECOND_SWEEP)
  ListOfCuts = {0, 5, 12, N_DOM-1};

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

Include "../main/Maxwell.pro";
