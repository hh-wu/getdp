
Include "SchwarzMacros.pro"; // macros for the resolution
If (PRECOND_SWEEP)
  Include "DoubleSweepMacros.pro"; // macros for the sweeping preconditioners
EndIf



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
          { Name SurPc~{idom}~{iSide} ; NameOfFormulation SurPc~{idom}~{iSide} ;
            Type Complex; NameOfMesh Sprintf(StrCat[MSH_NAME, "%g.msh"],idom) ; }
        EndFor
      EndFor
    }

    Operation {
      Call DdmInfo; // Output on the current parameters

      // compute rhs for Krylov solver on own cpu using physical sources only
      Call EnablePhysicalSourcesOnly;

      // Solve all subproblems (in parallel)
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
	Call SolveSubdomain;
      EndFor

      // Update the surface data (in parallel)
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	For iSide In {0:1}
	  // solve the surface PDE on the boundaries of each subdomain
	  Call ComputeGonSurface;
	EndFor
      EndFor

      // Exchange data with neighbours
      Call ExchangeG;


      // launch Krylov solver in parallel on all cpus
      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART,
                            {ListOfField()}, {ListOfNeighborField()}, {}]
      {

        // solve each subproblem on own cpu using articifial sources only
	Call EnableArtificialSourcesOnly;

	// Solve all subproblems (in parallel)
	For ii In {0: #ListOfDom()-1}
          idom = ListOfDom(ii);
	  Call SolveSubdomain;
	EndFor

	// Update the surface data (in parallel)
	For ii In {0: #ListOfDom()-1}
	  idom = ListOfDom(ii);
	  // solve the surface PDE on the boundaries of each subdomain
	  For iSide In {0:1}
	    Call ComputeGonSurface;
	  EndFor
	EndFor

	// Exchange data with neighbours
	Call ExchangeG;
      }
      {
	If (PRECOND_SWEEP)

	  // For the 'clean' version of SGS, we use a copy of the data;
	  // in practice (EXPERIMENTAL) it works best by not using it (cf. definition of g_in_c[])
	  Call CopyG;

	  // init the sweeps (solve first domain of each group if SGS + broadcast)
	  nCuts = #ListOfCuts()-1; // the number of groups of domains (FIXME: not tested in the cyclic case)
	  For ii In{0:nCuts}
	    For proc In {0:MPI_Size-1}
	      idom = ListOfCuts(ii);
	      Call InitSweep;
	    EndFor
	  EndFor

	  // Do the sweeps concurrently
	  For iCut In{0:nCuts-1}
	    For ii In {ListOfCuts(iCut)+1: ListOfCuts(iCut+1)-1:1} // inner domains
	      For proc In {0:MPI_Size-1}
	        idom_f = ii%N_DOM; // index for the forward sweep
	        idom_b = (ListOfCuts(iCut) + ListOfCuts(iCut+1) - ii)%N_DOM; // index for the backward sweep

		Call SolveAndStepForward; Call SolveAndStepBackward; // these two calls are independent and work in parallel

	      EndFor
	    EndFor
	  EndFor

	  // Finalize communication (last/first domain of each segment)
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

      // Solve all subproblems (in parallel)
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
	Call SolveSubdomain;
      EndFor

      Call SaveVolumeSolutions;
    }
  }
}

