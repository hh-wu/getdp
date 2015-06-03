DefineConstant[
  PRECONDITIONER = 0,
  DELTA_SOURCE = 0,
  EXTERNAL_VELOCITY_FIELD = 0,
  SAVE_SOLUTION = 1,
  COMBINE = {Str["For i In {0:N_DOM-1}",
      "For j In {0:PostProcessing.NbViews-1}",
      "View[j].Name=StrReplace(View[j].Name, Sprintf('_%g', i), '');",
      "EndFor",
      "EndFor",
      "Combine ElementsByViewName;"],
    Name "Macros/Combine subdmain results", AutoCheck 0, Macro "GmshParseString"},
  H2T = {Str["For i In {0:N_DOM-1}",
      "For j In {0:PostProcessing.NbViews-1}",
      "If(View[j].Visible)",
      "Plugin(HarmonicToTime).View = j;",
      "Plugin(HarmonicToTime).TimeSign = 1;",
      "Plugin(HarmonicToTime).Run;",
      "EndIf",
      "EndFor"],
    Name "Macros/Convert visible views to time-domain", AutoCheck 0, Macro "GmshParseString"},
  SOLVER = {"gmres", Choices {"gmres", "fgmres", "bcgs"},
    Name "Iterative Solver/0Solver"},
  TOLlog10 = {-4, Max -1, Min -16, Step -1,
    Name "Iterative Solver/1Tolerance (log10)"},
  TOL = 10^(TOLlog10),
  MAXIT = {1000, Min 1, Step 1, Max 100000,
    Name "Iterative Solver/2Max. iterations"},
  RESTART_MAXIT = {1, Choices {0,1},
    Name "Iterative Solver/31Force Restart = Max. iterations"}
  RESTART = {RESTART_MAXIT ? MAXIT : MAXIT, Min 0, Max 100000, Step 1,
    Name "Iterative Solver/30Restart", ReadOnly RESTART_MAXIT }
];

If(RESTART > MAXIT || RESTART == 0)
  RESTART = MAXIT;
EndIf

For ii In {0: #ListOfSubdomains()-1}
  idom = ListOfSubdomains(ii);
  DefineConstant[
    GenerateVolFlag~{idom} = 0,
    GenerateSurFlag~{idom}~{0} = 0, GenerateSurFlag~{idom}~{1} = 0,
    GenerateSurPcFlag~{idom}~{0} = 0, GenerateSurPcFlag~{idom}~{1} = 0
  ];
EndFor

Macro PrintInfo
  If (MPI_Rank == 0)
    Printf[StrCat["Starting ", StrChoice[ANALYSIS == 0, "Helmholtz", "Maxwell"],
        " DDM with %g subdomains / %g processes"], N_DOM, MPI_Size];
    If(TC_TYPE == 0)
      Printf[StrCat["Using 0-th order (", StrChoice[ANALYSIS == 0, "Sommerfeld/EMDA",
            "Silver-Muller"], ") transmission conditions"]];
    EndIf
    If(TC_TYPE == 1)
      Printf[StrCat["Using 2-nd order (", StrChoice[ANALYSIS == 0, "OO2",
            "J-F. Lee"], ") transmission conditions"]];
    EndIf
    If(TC_TYPE == 2)
      Printf["Using %g-th order Pade (OSRC) transmission conditions", NP_OSRC];
    EndIf
    If(TC_TYPE == 3)
      Printf["Using PML transmission conditions (nLayersTr %g, nLayersPml %g)",
        nLayersTr, nLayersPml];
    EndIf
    Printf["Relative iterative solver tolerance = %g", TOL];
    If (PRECONDITIONER)
      Printf[StrCat["Using sweeping preconditioner: ",
          StrChoice[PRECONDITIONER == 2, "SGS (additive)", "Double-sweep"]]];
      Printf["Number of Cuts: %g", #ListOfCuts()-2];
    EndIf
    If(EXTERNAL_VELOCITY_FIELD)
      Printf["Using external data for the velocity field"];
    EndIf
    If(DELTA_SOURCE)
      Printf["Using delta function as point source"];
    EndIf
    If(!SAVE_SOLUTION)
      Printf["Solution will *not* be saved"];
    EndIf
  EndIf
  // increase preallocation for Maxwell formulation
  If(ANALYSIS == 1)
    SetGlobalSolverOptions["-petsc_prealloc 200"];
  EndIf
Return

Macro EnablePhysicalSources
  Evaluate[$PhysicalSource = 1];
  Call UpdateConstraints;
Return

Macro DisablePhysicalSources
  Evaluate[$PhysicalSource = 0];
  Call UpdateConstraints;
Return

Macro EnableArtificialSources
  For iSide In {0:1}
    Evaluate[$ArtificialSource~{iSide} = 1];
    Evaluate[$ArtificialSourceSGS~{iSide} = 0];
  EndFor
Return

Macro DisableArtificialSources
  For iSide In {0:1}
    Evaluate[$ArtificialSource~{iSide} = 0];
    Evaluate[$ArtificialSourceSGS~{iSide} = 0];
  EndFor
Return

Macro UpdateConstraints
  // update Dirichlet constraints (only actually necessary for Helmholtz, as we
  // currently use Lagrange multipliers to specify boundary conditions for
  // Maxwell)
  If(ANALYSIS == 0)
    SetCommSelf;
    For ii In {0: #ListOfSubdomains()-1}
      idom = ListOfSubdomains(ii);
      UpdateConstraint[Vol~{idom}, GammaD~{idom}, Assign];
    EndFor
    SetCommWorld;
  EndIf
Return

Macro SolveVolumePDE
  // work on own cpu
  SetCommSelf;
  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);
    // solve the volume PDE on each subdomain
    If(GenerateVolFlag~{idom})
      // the matrix is already factorized, only regenerate the RHS
      GenerateRHSGroup[Vol~{idom}, Region[{Sigma~{idom}, TrOmegaGammaD~{idom},
            GammaD~{idom}, GammaPoint~{idom}}] ];
      SolveAgain[Vol~{idom}];
    EndIf
    If(GenerateVolFlag~{idom} == 0)
      // first time generation and factorization of the matrix
      Generate[Vol~{idom}]; Solve[Vol~{idom}];
      GenerateVolFlag~{idom} = 1;
    EndIf
  EndFor
  // go back to parallel mode
  SetCommWorld;
Return

Macro SolveSurfacePDE
  SetCommSelf;
  // compute g_in for next iteration
  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);
    // solve the surface PDE on the boundaries of each subdomain
    For iSide In {0:1}
      If(NbrRegions[Sigma~{idom}~{iSide}])
        If(GenerateSurFlag~{idom}~{iSide})
          // the matrix is already factorized, only regenerate the RHS
          GenerateRHSGroup[Sur~{idom}~{iSide}, Region[{Sigma~{idom}~{iSide},
                TrPmlSigma~{idom}~{iSide}, TrBndPmlSigma~{idom}~{iSide},
                BndSigmaInf~{idom}~{iSide}}]];
          SolveAgain[Sur~{idom}~{iSide}];
        EndIf
        If(GenerateSurFlag~{idom}~{iSide} == 0)
          // first time generation and factorization of the matrix
          Generate[Sur~{idom}~{iSide}]; Solve[Sur~{idom}~{iSide}];
          GenerateSurFlag~{idom}~{iSide} = 1;
        EndIf

      EndIf
    EndFor
  EndFor
  SetCommWorld;
Return

Macro UpdateSurfaceFields
  SetCommSelf;
  // store g in ListOfFields()
  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);
    For iSide In {0:1}
      PostOperation[g_out~{idom}~{iSide}];
    EndFor
  EndFor
  SetCommWorld;
Return

Macro SaveVolumeSolutions
  If(SAVE_SOLUTION)
    SetCommSelf;
    // compute the volume solution
    For ii In {0: #ListOfSubdomains()-1}
      idom = ListOfSubdomains(ii);
      PostOperation[DDM~{idom}];
    EndFor
    SetCommWorld;
  EndIf
Return

Macro CopySurfaceFields
  SetCommSelf;
  For ii In {0:#ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);
    For iSide In {0:1}
      If (PRECONDITIONER == 2)
        PostOperation[g_copy~{idom}~{iSide}];
      EndIf
      // do the Generate if necessary
      If (GenerateSurPcFlag~{idom}~{iSide} == 0) // FIXME: to this separately ?
        If( NbrRegions[Sigma~{idom}~{iSide}] )
          Generate[SurPc~{idom}~{iSide}];
        EndIf
        GenerateSurPcFlag~{idom}~{iSide} = 1;
      EndIf
    EndFor
  EndFor
  SetCommWorld;
Return

Macro SolveAndStepForward
  SetCommSelf;
  If( proc == MPI_Rank && ProcOwnsDomain(idom_f) )
    Evaluate[$ArtificialSource~{0} = 1];
    Evaluate[$ArtificialSource~{1} = 0];
    Evaluate[$ArtificialSourceSGS~{0} = 0];
    Evaluate[$ArtificialSourceSGS~{1} = (PRECONDITIONER == 2)];

    skipList = {2*idom_f, (2*(idom_f + N_DOM)+1)%(2*N_DOM)}; // right
    BroadcastFields[skipList()];

    // compute u on Omega_i (fast way)
    GenerateRHSGroup[Vol~{idom_f}, Region[{Sigma~{idom_f}}]];
    SolveAgain[Vol~{idom_f}];

    // compute the new g_out (fast way)
    If( NbrRegions[Sigma~{idom_f}~{1}] )
      GenerateRHSGroup[SurPc~{idom_f}~{1}, Region[{Sigma~{idom_f}~{1},
            TrPmlSigma~{idom_f}~{1}, BndSigma~{idom_f}~{1},
            TrBndPmlSigma~{idom_f}~{1}}]];
      SolveAgain[SurPc~{idom_f}~{1}];
    EndIf
    PostOperation[g_out~{idom_f}~{1}];

    skipList = {(2*(idom_f + N_DOM)-1)%(2*N_DOM), (2*(idom_f + N_DOM)-2)%(2*N_DOM)}; // left
    BroadcastFields[skipList()];

    Evaluate[$ArtificialSource~{0} = 1];
    Evaluate[$ArtificialSource~{1} = 1];
    Evaluate[$ArtificialSourceSGS~{0} = 0];
    Evaluate[$ArtificialSourceSGS~{1} = 0];
  EndIf
  SetCommWorld;
Return

Macro SolveAndStepBackward
  SetCommSelf;
  If( proc == MPI_Rank && ProcOwnsDomain(idom_b) )
    Evaluate[$ArtificialSource~{0} = 0];
    Evaluate[$ArtificialSource~{1} = 1];
    Evaluate[$ArtificialSourceSGS~{0} = (PRECONDITIONER == 2)];
    Evaluate[$ArtificialSourceSGS~{1} = 0];

    skipList = {(2*(idom_b + N_DOM)-1)%(2*N_DOM), (2*(idom_b + N_DOM)-2)%(2*N_DOM)}; // left
    BroadcastFields[skipList()];

    // compute u on Omega_i (fast way)
    GenerateRHSGroup[Vol~{idom_b}, Region[{Sigma~{idom_b}}]];
    SolveAgain[Vol~{idom_b}];

    // compute the new g_out (fast way)
    If( NbrRegions[Sigma~{idom_b}~{0}] )
      GenerateRHSGroup[SurPc~{idom_b}~{0}, Region[{Sigma~{idom_b}~{0},
            TrPmlSigma~{idom_b}~{0}, BndSigma~{idom_b}~{0},
            TrBndPmlSigma~{idom_b}~{0}}]];
      SolveAgain[SurPc~{idom_b}~{0}];
    EndIf
    PostOperation[g_out~{idom_b}~{0}];

    skipList = {2*idom_b, (2*(idom_b + N_DOM)+1)%(2*N_DOM)}; // right
    BroadcastFields[skipList()];

    Evaluate[$ArtificialSource~{0} = 1];
    Evaluate[$ArtificialSource~{1} = 1];
    Evaluate[$ArtificialSourceSGS~{0} = 0];
    Evaluate[$ArtificialSourceSGS~{1} = 0];
  EndIf
  SetCommWorld;
Return

Macro InitSweep
  SetCommSelf;
  If( proc == MPI_Rank && ProcOwnsDomain(idom) )
    If (PRECONDITIONER == 2)
      Evaluate[$ArtificialSource~{0} = (PRECONDITIONER == 2)];
      Evaluate[$ArtificialSource~{1} = (PRECONDITIONER == 2)];
      Evaluate[$ArtificialSourceSGS~{0} = 0];
      Evaluate[$ArtificialSourceSGS~{1} = 0];
      // compute u on Omega_i (fast way)
      GenerateRHSGroup[Vol~{idom}, Region[{Sigma~{idom}}]];
      SolveAgain[Vol~{idom}];
      // compute the new g_out (fast way), on both sides
      For iSide In{0:1}
        If( NbrRegions[Sigma~{idom}~{iSide}] )
          GenerateRHSGroup[SurPc~{idom}~{iSide}, Region[{Sigma~{idom}~{iSide},
                TrPmlSigma~{idom}~{iSide}}]];
          SolveAgain[SurPc~{idom}~{iSide}];
        EndIf
        PostOperation[g_out~{idom}~{iSide}];
      EndFor
    EndIf
    BroadcastFields[];
  EndIf
  SetCommWorld;
Return

Macro FinalizeSweep
  SetCommSelf;
  If ( proc == MPI_Rank && ProcOwnsDomain(ListOfCuts(iCut)) ) // first of cut
    BroadcastFields[];
  EndIf
  SetCommWorld;
Return
