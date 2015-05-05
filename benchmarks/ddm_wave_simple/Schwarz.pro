Macro solve
  // work on own cpu
  SetCommSelf;
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    // update Dirichlet constraints (only actually necessary when #10, #11, #12
    // change for Helmholtz)
    UpdateConstraint[Vol~{idom}, GammaD~{idom}, Assign];
    // solve the volume PDE on each subdomain
    If(SOLVE_STEP == 0)
      Generate[Vol~{idom}] ;
      Solve[Vol~{idom}] ;
    EndIf
    If(SOLVE_STEP == 1 || SOLVE_STEP == 2)
      GenerateRHSGroup[Vol~{idom}, Sigma~{idom}] ;
      SolveAgain[Vol~{idom}] ;
    EndIf
    // solve the surface PDE on the boundaries of each subdomain
    For iSide In {0:1}
      If(NbrRegions[Sigma~{idom}~{iSide}])
        If(SOLVE_STEP == 0)
          Generate[Sur~{idom}~{iSide}] ;
          Solve[Sur~{idom}~{iSide}] ;
        EndIf
        If(SOLVE_STEP == 1)
          GenerateRHSGroup[Sur~{idom}~{iSide},
            Region[{Sigma~{idom}~{iSide}, TrPmlSigma~{idom}~{iSide}}]] ;
          SolveAgain[Sur~{idom}~{iSide}] ;
        EndIf
      EndIf
    EndFor
  EndFor
  // compute g_in for next iteration, or compute the volume solution (must be
  // done after all resolutions)
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    If(SOLVE_STEP == 0 || SOLVE_STEP == 1)
      For iSide In {0:1}
        PostOperation[g_out~{idom}~{iSide}] ;
      EndFor
    EndIf
    If(SOLVE_STEP == 2)
      PostOperation[DDM~{idom}] ;
    EndIf
  EndFor
  SetCommWorld;
Return

Resolution {
  { Name DDM ;
    System {
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        { Name Vol~{idom} ; NameOfFormulation Vol~{idom} ;
          Type Complex; NameOfMesh Sprintf(StrCat[MSH_NAME, "%g.msh"],idom) ; }
        For iSide In {0:1}
          { Name Sur~{idom}~{iSide} ; NameOfFormulation Sur~{idom}~{iSide} ;
            Type Complex; NameOfMesh Sprintf(StrCat[MSH_NAME, "%g.msh"],idom) ; }
        EndFor
      EndFor
    }
    Operation {
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
          Printf["Using PML transmission conditions"];
        EndIf
        Printf["Relative iterative solver tolerance = %g", TOL];
      EndIf

      // increase preallocation for Maxwell formulation
      If(ANALYSIS == 1)
        SetGlobalSolverOptions["-petsc_prealloc 200"];
      EndIf

      // compute rhs for Krylov solver on own cpu using physical sources only
      Evaluate[1. #10]; Evaluate[0. #11]; Evaluate[0. #12]; SOLVE_STEP = 0;
      Call solve;

      // launch Krylov solver in parallel on all cpus
      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART,
                            {ListOfField()}, {ListOfNeighborField()}, {}]
      {
        // solve each subproblem on own cpu using articifial sources only
        Evaluate[0. #10]; Evaluate[1. #11]; Evaluate[1. #12]; SOLVE_STEP = 1;
        Call solve;
      }

      //DeleteFile[ "/tmp/kspiter.txt" ];
      //Print[ {$KSPIts} , File "/tmp/kspiter.txt"];

      // build final volume solution after convergence on own cpu, using both
      // physical and artificial sources
      Evaluate[1. #10]; Evaluate[1. #11]; Evaluate[1. #12]; SOLVE_STEP = 2;
      Call solve;
    }
  }
}
