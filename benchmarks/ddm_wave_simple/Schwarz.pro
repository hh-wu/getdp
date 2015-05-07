
DefineConstant[ PRECOND_SWEEP ];

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
          If (PRECOND_SWEEP)
            { Name SurPc~{idom}~{iSide} ; NameOfFormulation SurPc~{idom}~{iSide} ;
              Type Complex; NameOfMesh Sprintf(StrCat[MSH_NAME, "%g.msh"],idom) ; }
          EndIf
        EndFor
      EndFor
    }
    Operation {
      // output parameters
      Call PrintInfo;

      // compute rhs for Krylov solver in parallel on own cpu using physical
      // sources only, and update surface data
      Call EnablePhysicalSourcesOnly;
      Call SolveSubdomains;
      Call UpdateGonSurfaces;

      // launch Krylov solver in parallel on all cpus using artificial sources
      // only
      Call EnableArtificialSourcesOnly;
      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART,
                            {ListOfField()}, {ListOfNeighborField()}, {}]
      {
        Call SolveSubdomains;
        Call UpdateGonSurfaces;
      }
      {
	If (PRECOND_SWEEP)
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
