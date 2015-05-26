
DefineConstant[ PRECONDITIONER ];

Include "SchwarzMacros.pro"; // macros for the resolution

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
          If (PRECONDITIONER)
            { Name SurPc~{idom}~{iSide} ; NameOfFormulation SurPc~{idom}~{iSide} ;
              Type Complex; NameOfMesh Sprintf(StrCat[MSH_NAME, "%g.msh"],idom) ; }
          EndIf
        EndFor
      EndFor
    }
    Operation {
      // output parameters
      Call PrintInfo;

      // compute rhs for Krylov solver on own cpu using physical sources only,
      // and update surface data
      Call EnablePhysicalSourcesOnly;
      Call SolveSubdomains;
      Call UpdateGonSurfaces;

      // launch Krylov solver on all cpus using artificial sources only.
      // IterativeLinearSolver solves (I-A) g = b: ListOfField() initially
      // stores b; then stores each iterate g^k.
      Call EnableArtificialSourcesOnly;
      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART,
                            {ListOfField()}, {ListOfNeighborField()}, {}]
      {
        // compute (A g^k) and stores the result in ListOfField()
        Call SolveSubdomains;
        Call UpdateGonSurfaces;
      }
      {
        // applies a preconditioner
	If (PRECONDITIONER)
      	  // for the 'clean' version of SGS, we use a copy of the data; in
      	  // practice (EXPERIMENTAL) it works best by not using it
      	  // (cf. definition of g_in_c[])
      	  Call CopyG;

      	  // init the sweeps (solve first domain of each group if SGS +
      	  // broadcast)
      	  nCuts = #ListOfCuts()-1; // number of groups of domains (FIXME: not
                                   // tested in cyclic case)
      	  For ii In{0:nCuts}
      	    For proc In {0:MPI_Size-1}
      	      idom = ListOfCuts(ii);
      	      Call InitSweep;
      	    EndFor
      	  EndFor

          // do the sweeps concurrently
          For iCut In{0:nCuts-1}
            // inner domains of each group
            For ii In {ListOfCuts(iCut)+1: ListOfCuts(iCut+1)-1:1}
              For proc In {0:MPI_Size-1}
                // index for the forward sweep
                idom_f = ii % N_DOM;
                // index for the backward sweep
                idom_b = (ListOfCuts(iCut) + ListOfCuts(iCut+1) - ii) % N_DOM;
                // these two calls are independent and work in parallel
      		Call SolveAndStepForward;
                Call SolveAndStepBackward;
      	      EndFor
      	    EndFor
      	  EndFor

      	  // finalize communication (last/first domain of each segment)
          For iCut In{0:nCuts}
            For proc In {0:MPI_Size-1}
              Call FinalizeSweep;
            EndFor
      	  EndFor
        EndIf
      }

      //DeleteFile[ "/tmp/kspiter.txt" ];
      //Print[ {$KSPIts} , File "/tmp/kspiter.txt"];

      // build final volume solution after convergence on own cpu, using both
      // physical and artificial sources
      Call EnableAllSources;
      Call SolveSubdomains;
      Call SaveVolumeSolutions;
    }
  }
}

DefineConstant[
  // default getdp parameters for onelab
  R_ = {"DDM", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v 3 -bin -ksp_monitor", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
