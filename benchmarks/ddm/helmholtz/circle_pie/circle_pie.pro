Include "params.geo";
Include "../main/ddmDefines.pro";
Include "groups_circle_pie.pro";

EXT_TIME = 1;

Function {
  I[] = Complex[0, 1];
  k = WAVENUMBER;
  k[] = k;
  // EMDA
  beta[] = -I[] * k + BETA_EMDA;

  V_SOURCE[] = 0;

  // OO2, cf. [Gander 2002, pp. 46-47]
  xsimin = 0;
  xsimax = Pi / LC;
  deltak[] = Pi / Norm[XYZ[]];
  alphastar[] = I[] * ((k^2 - xsimin^2) * (k^2 - (k-deltak[])^2))^(1/4);
  betastar[] = ((xsimax^2 - k^2) * ((k+deltak[])^2 - k^2))^(1/4);
  a[] = - (alphastar[] * betastar[] - k^2) / (alphastar[] + betastar[]);
  b[] = - 1 / (alphastar[] + betastar[]);

  // OSRCs
  N = NP_OSRC;
  keps[] = Complex[ k, k/4 ];
  theta_branch = THETA_BRANCH_OSRC;

  // Coefs for Bayliss-Turkel ABC (as a correction to the Sommerfeld ABC)
  alphaBT[] = 0;//1/(2*R_EXT) - I[]/(8*k*R_EXT^2*(1+I[]/(k*R_EXT)));
  betaBT[] = 0;//- 1/(2*I[]*k*(1+I[]/(k*R_EXT)));

  // incidence angle
  theta_inc = THETA_INC;
  XYZdotTheta[] = X[] * Cos[theta_inc] + Y[] * Sin[theta_inc];
  uinc[] = Complex[Cos[k*XYZdotTheta[]], Sin[k*XYZdotTheta[]]];
  grad_uinc[] =  I[] * k * Vector[1,0,0] * uinc[];
  dn_uinc[] = Normal[] * grad_uinc[];

  kDtn[] = k;
  kInf[] = k;

}

Include "../main/topology/loop.pro";


    Ndpp = Floor[N_DOM/MPI_Size];
    Nrest = N_DOM-MPI_Size*Ndpp;

      // build list of dom according to process rank
      ListOfDom2 = {};
    If (N_DOM == MPI_Size)
      ListOfDom2 += {MPI_Rank*(Ndpp):(MPI_Rank+1)*(Ndpp)-1};
    EndIf
    If (MPI_Rank < Nrest)
      ListOfDom2 += {MPI_Rank*(Ndpp+1):(MPI_Rank+1)*(Ndpp+1)-1};
    EndIf
    If (MPI_Rank >= Nrest && MPI_Size < N_DOM)
      ListOfDom2 += {Nrest+MPI_Rank*(Ndpp):Nrest+(MPI_Rank+1)*(Ndpp)-1};
    EndIf

      // Fill the list with 0
    ProcOwnsDomain2 = {};
    For idom In {0:N_DOM-1}
      ProcOwnsDomain2 += {0};
    EndFor

      // Set the correct entry to 1
    For dd In {0:#ListOfDom2()-1:1}
      ProcOwnsDomain2(ListOfDom2(dd)) = 1;
    EndFor

      // Display what process owns what domain
    If (MPI_Rank >= N_DOM)
      Printf[" WARNING: process [%g] will be unused", MPI_Rank];
    EndIf
    For idom In {0:N_DOM-1}
      If (ProcOwnsDomain2(idom))
        Printf["proc %g owns dom %g", MPI_Rank, idom];
      EndIf
    EndFor

  // If(MPI_Size < 2) // No neighbors specified
  //   ListOfNeighborField = {};
  // EndIf


  // nDomsInSegment = 3;
  ListOfCuts = {};
  // ListOfCuts += {nDomsInSegment:N_DOM-2:nDomsInSegment};
  // // // ListOfCuts += {2,5};
  // // ListOfCuts += {3};
  // ListOfCuts = {0, ListOfCuts{}, N_DOM-1}; // build extended list of cuts
      ListOfCuts += {0,4,8};


// If only one cut is given, we suppose that there is a loop in the decomposition, which is cut only once. We then add an additional fictitious cut so the code can work properly
// FIXME: it should be the user's responsibility to give a proper list of cuts ?!
If (#ListOfCuts() == 1)
  ListOfCuts += ListOfCuts(0)+N_DOM;
EndIf

If (PRECOND_SWEEP)
  // what domains am I in charge of ? Implemented with a list
  ProcOwnsDomain = {};
  For idom In{0:N_DOM-1}
    ProcOwnsDomain += {(idom%MPI_Size == MPI_Rank)}; // define your rule here -- must match listOfDom()
  EndFor
EndIf


// Include "../main/Helmholtz_experimental.pro";
Include "../main/Helmholtz.pro";
