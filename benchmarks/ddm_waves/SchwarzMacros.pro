DefineConstant[
  PRECONDITIONER = 0,
  DELTA_SOURCE = 0,
  EXTERNAL_VELOCITY_FIELD = 0,
  SAVE_SOLUTION = 1,
  COMBINE = {Str["For i In {N_DOM-1:0:-1}",
      "For j In {0:PostProcessing.NbViews-1}",
      "View[j].Name=StrReplace(View[j].Name, Sprintf('_%g', i), '');",
      "EndFor",
      "EndFor",
      "Combine ElementsByViewName;"],
    Name "Macros/Combine subdomain results", AutoCheck 0, Macro "GmshParseString"},
  H2T = {Str["For j In {0:PostProcessing.NbViews-1}",
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
    Name "Iterative Solver/30Restart", ReadOnly RESTART_MAXIT },
  TIMING = {0, Choices{0, 1},
    Name "Iterative Solver/4Print detailed timing info"}
];

If(RESTART > MAXIT || RESTART == 0)
  RESTART = MAXIT;
EndIf

For ii In {0: #myD()-1}
  i = myD(ii);
  DefineConstant[GenerateVolFlag~{i} = 0];
  For jj In {0: #myD~{i}()-1}
    j = myD~{i}(jj);
    DefineConstant[GenerateSurFlag~{i}~{j} = 0, GenerateSurPcFlag~{i}~{j} = 0];
  EndFor
EndFor

Macro Init
  //Reset variables.
  For ii In {0: #myD()-1}
    i = myD(ii);
    GenerateVolFlag~{i} = 0;
    For jj In {0: #myD~{i}()-1}
      j = myD~{i}(jj);
      GenerateSurFlag~{i}~{j} = 0 ;
      GenerateSurPcFlag~{i}~{j} = 0 ;
    EndFor
  EndFor
Return


Macro PrintInfo
  If (MPI_Rank == 0)
    Printf[StrCat["Starting ", StrChoice[ANALYSIS == 0, "Helmholtz",
        StrChoice[ANALYSIS == 1, "Maxwell", "Elasticity"]],
        " DDM with %g subdomains / %g processes"], N_DOM, MPI_Size];
    If(TC_TYPE == 0)
      Printf[StrCat["Using 0-th order (", StrChoice[ANALYSIS == 0, "Sommerfeld/EMDA",
            "Silver-Muller"], ") transmission conditions"]];
    ElseIf(TC_TYPE == 1)
      Printf[StrCat["Using 2-nd order (", StrChoice[ANALYSIS == 0, "OO2",
            "J-F. Lee"], ") transmission conditions"]];
    ElseIf(TC_TYPE == 2)
      Printf["Using %g-th order Pade (OSRC) transmission conditions", NP_OSRC];
    ElseIf(TC_TYPE == 3)
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
  For ii In {0: #myD()-1}
    i = myD(ii);
      For jj In {0:#myD~{i}()-1}
        j = myD~{i}(jj);
        Evaluate[$ArtificialSource~{j} = 1, $ArtificialSourceSGS~{j} = 0];
      EndFor
  EndFor
Return

Macro DisableArtificialSources
  For ii In {0: #myD()-1}
    i = myD(ii);
      For jj In {0:#myD~{i}()-1}
        j = myD~{i}(jj);
        Evaluate[$ArtificialSource~{j} = 0, $ArtificialSourceSGS~{j} = 0];
      EndFor
  EndFor
Return

Macro UpdateConstraints
  // update Dirichlet constraints (only actually necessary for Helmholtz and
  // Elasticity, as we currently use Lagrange multipliers to specify boundary
  // conditions for Maxwell)
  If(ANALYSIS != 1)
    SetCommSelf;
    For ii In {0: #myD()-1}
      i = myD(ii);
      UpdateConstraint[Vol~{i}, GammaD~{i}, Assign];
    EndFor
    SetCommWorld;
  EndIf
Return

Macro SolveVolumePDE
  // work on own cpu
  SetCommSelf;
  For ii In {0: #myD()-1}
    i = myD(ii);
    // solve the volume PDE on each subdomain
    If(GenerateVolFlag~{i})
      // the matrix is already factorized, only regenerate the RHS
      Test[ $PhysicalSource == 1 ]{
        GenerateRHSGroup[Vol~{i}, Region[{Sigma~{i}, TrOmegaGammaD~{i}, GammaD~{i}, GammaPoint~{i}}] ];
      }
      {
        GenerateRHSGroup[Vol~{i}, Region[{Sigma~{i}, GammaD~{i}, GammaPoint~{i}}] ];
      }
    SolveAgain[Vol~{i}];
    EndIf
    If(GenerateVolFlag~{i} == 0)
      // first time generation and factorization of the matrix
      Generate[Vol~{i}]; Solve[Vol~{i}];
      GenerateVolFlag~{i} = 1;
    EndIf
  EndFor
  // go back to parallel mode
  SetCommWorld;
Return

Macro SolveSurfacePDE
  SetCommSelf;
  // compute g_in for next iteration
  For ii In {0: #myD()-1}
    i = myD(ii);
    // solve the surface PDE on the boundaries of each subdomain
    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
      If(NbrRegions[Sigma~{i}~{j}])
        If(GenerateSurFlag~{i}~{j})
          // the matrix is already factorized, only regenerate the RHS
          GenerateRHSGroup[Sur~{i}~{j}, Region[{Sigma~{i}~{j}, TrPmlSigma~{i}~{j}, TrBndPmlSigma~{i}~{j}, BndSigmaInf~{i}~{j}}] ];
          SolveAgain[Sur~{i}~{j}];
        EndIf
        If(GenerateSurFlag~{i}~{j} == 0)
          // first time generation and factorization of the matrix
          Generate[Sur~{i}~{j}]; Solve[Sur~{i}~{j}];
          GenerateSurFlag~{i}~{j} = 1;
        EndIf

      EndIf
    EndFor
  EndFor
  SetCommWorld;
Return

Macro UpdateSurfaceFields
  SetCommSelf;
  // store g in ListOfFields()
  For ii In {0: #myD()-1}
    i = myD(ii);
    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
      PostOperation[g_out~{i}~{j}];
    EndFor
  EndFor
  SetCommWorld;
Return

Macro SaveVolumeSolutions
  If(SAVE_SOLUTION)
    SetCommSelf;
    // compute the volume solution
    For ii In {0: #myD()-1}
      i = myD(ii);
      PostOperation[DDM~{i}];
    EndFor
    SetCommWorld;
  EndIf
Return

Macro CopySurfaceFields
  SetCommSelf;
  For ii In {0:#myD()-1}
    i = myD(ii);
    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
      If (PRECONDITIONER == 2)
        PostOperation[g_copy~{i}~{j}];
      EndIf
      // do the Generate if necessary
      If (GenerateSurPcFlag~{i}~{j} == 0) // FIXME: to this separately ?
        If( NbrRegions[Sigma~{i}~{j}] )
          Generate[SurPc~{i}~{j}];
        EndIf
        GenerateSurPcFlag~{i}~{j} = 1;
      EndIf
    EndFor
  EndFor
  SetCommWorld;
Return

Macro SolveAndStepForward
  SetCommSelf;
  If( proc == MPI_Rank && ProcOwnsDomain(i_f) )
    left = (i_f-1)%N_DOM; // left boundary
    right = (i_f+1)%N_DOM; // right boundary
    
    Evaluate[$ArtificialSource~{left} = 1, $ArtificialSource~{right} = 0];
    Evaluate[$ArtificialSourceSGS~{left} = 0, $ArtificialSourceSGS~{right} = (PRECONDITIONER == 2)];

    skipList = {2*i_f, (2*(i_f + N_DOM)+1)%(2*N_DOM)}; // right
    BroadcastFields[skipList()];

    Evaluate[ $t1pf = GetWallClockTime[], $t1pfc = GetCpuTime[] ];

    // compute u on Omega_i (fast way)
    GenerateRHSGroup[Vol~{i_f}, Region[{Sigma~{i_f}}] ];
    SolveAgain[Vol~{i_f}];

    // compute the new g_out (fast way)
    If( NbrRegions[Sigma~{i_f}~{right}] )
      GenerateRHSGroup[SurPc~{i_f}~{right}, Region[{Sigma~{i_f}~{right}, TrPmlSigma~{i_f}~{right}, BndSigma~{i_f}~{right}, TrBndPmlSigma~{i_f}~{right}}]];
      SolveAgain[SurPc~{i_f}~{right}];
    EndIf
    PostOperation[g_out~{i_f}~{right}];

    Evaluate[ $t2pf = GetWallClockTime[], $t2pfc = GetCpuTime[] ];
    If(TIMING)
      Print[{$t2pf-$t1pf, $t2pfc-$t1pfc}, Format "WALL (FORWARD) subroblem solve in preconditioner = %gs ; CPU = %gs"];
    EndIf

    skipList = {(2*(i_f + N_DOM)-1)%(2*N_DOM), (2*(i_f + N_DOM)-2)%(2*N_DOM)}; // left
    BroadcastFields[skipList()];

    Evaluate[$ArtificialSource~{left} = 1, $ArtificialSource~{right} = 1];
    Evaluate[$ArtificialSourceSGS~{left} = 0, $ArtificialSourceSGS~{right} = 0];
  EndIf
  SetCommWorld;
Return

Macro SolveAndStepBackward
  SetCommSelf;
  If( proc == MPI_Rank && ProcOwnsDomain(i_b) )
    left = (i_b-1)%N_DOM; // left boundary
    right = (i_b+1)%N_DOM; // right boundary
  
    Evaluate[$ArtificialSource~{left} = 0, $ArtificialSource~{right} = 1];
    Evaluate[$ArtificialSourceSGS~{left} = (PRECONDITIONER == 2), $ArtificialSourceSGS~{right} = 0];

    skipList = {(2*(i_b + N_DOM)-1)%(2*N_DOM), (2*(i_b + N_DOM)-2)%(2*N_DOM)}; // left
    BroadcastFields[skipList()];

    Evaluate[ $t1pb = GetWallClockTime[], $t1pbc = GetCpuTime[] ];

    // compute u on Omega_i (fast way)
    GenerateRHSGroup[Vol~{i_b}, Region[{Sigma~{i_b}}] ];
    SolveAgain[Vol~{i_b}];

    // compute the new g_out (fast way)
    If( NbrRegions[Sigma~{i_b}~{left}] )
      GenerateRHSGroup[SurPc~{i_b}~{left}, Region[{Sigma~{i_b}~{left}, TrPmlSigma~{i_b}~{left}, BndSigma~{i_b}~{left}, TrBndPmlSigma~{i_b}~{left}}]];
      SolveAgain[SurPc~{i_b}~{left}];
    EndIf
    PostOperation[g_out~{i_b}~{left}];

    Evaluate[ $t2pb = GetWallClockTime[], $t2pbc = GetCpuTime[] ];

    If(TIMING)
      Print[{$t2pb-$t1pb, $t2pbc-$t1pbc}, Format "WALL (BACKWARD) subroblem solve in preconditioner = %gs ; CPU = %gs"];
    EndIf
    skipList = {2*i_b, (2*(i_b + N_DOM)+1)%(2*N_DOM)}; // right
    BroadcastFields[skipList()];

    Evaluate[$ArtificialSource~{left} = 1, $ArtificialSource~{right} = 1];
    Evaluate[$ArtificialSourceSGS~{left} = 0, $ArtificialSourceSGS~{right} = 0];
  EndIf
  SetCommWorld;
Return

Macro InitSweep
  SetCommSelf;
  If( proc == MPI_Rank && ProcOwnsDomain(i) )
    If (PRECONDITIONER == 2)
      left = (i-1)%N_DOM; // left boundary
      right = (i+1)%N_DOM; // right boundary
    
      Evaluate[$ArtificialSource~{left} = (PRECONDITIONER == 2), $ArtificialSource~{right} = (PRECONDITIONER == 2)];
      Evaluate[$ArtificialSourceSGS~{left} = 0, $ArtificialSourceSGS~{right} = 0];

      Evaluate[ $t1pi = GetWallClockTime[], $t1pic = GetCpuTime[] ];

      // compute u on Omega_i (fast way)
      GenerateRHSGroup[Vol~{i}, Region[{Sigma~{i}}] ];
      SolveAgain[Vol~{i}];

      // compute the new g_out (fast way), on both sides
      For jj In {0:#myD~{i}()-1}
        j = myD~{i}(jj);
        If( NbrRegions[Sigma~{i}~{j}] )
          GenerateRHSGroup[SurPc~{i}~{j}, Region[{Sigma~{i}~{j}, TrPmlSigma~{i}~{j}}] ];
          SolveAgain[SurPc~{i}~{j}];
        EndIf
        PostOperation[g_out~{i}~{j}];
      EndFor

      Evaluate[ $t2pi = GetWallClockTime[], $t2pic = GetCpuTime[] ];
      If(TIMING)
        Print[{$t2pi-$t1pi, $t2pic-$t1pic}, Format "WALL (INIT SGS) subproblem solve in preconditioner = %gs ; CPU = %gs"];
      EndIf

    EndIf
    BroadcastFields[{}];
  EndIf
  SetCommWorld;
Return

Macro FinalizeSweep
  SetCommSelf;
  If ( proc == MPI_Rank && ProcOwnsDomain(ListOfCuts(iCut)) ) // first of cut
    BroadcastFields[{}];
  EndIf
  SetCommWorld;
Return
