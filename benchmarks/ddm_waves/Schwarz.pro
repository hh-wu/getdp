Include "SchwarzMacros.pro";

Resolution {
  { Name DDM;
    System {
      For ii In {0: #myD()-1}
        i = myD(ii);
        { Name Vol~{i}; NameOfFormulation Vol~{i};
          Type Complex; NameOfMesh Sprintf[StrCat[MSH_NAME, "%g.msh"], i]; }
        For jj In {0:#myD~{i}()-1}
          j = myD~{i}(jj);
          { Name Sur~{i}~{j}; NameOfFormulation Sur~{i}~{j};
            Type Complex; NameOfMesh Sprintf[StrCat[MSH_NAME, "%g.msh"], i]; }
          If (PRECONDITIONER)
            { Name SurPc~{i}~{j}; NameOfFormulation SurPc~{i}~{j};
              Type Complex; NameOfMesh Sprintf[StrCat[MSH_NAME, "%g.msh"], i]; }
          EndIf
        EndFor
      EndFor
    }
    Operation {
      // Reset parameters
      Call Init;
      // output parameters
      Call PrintInfo;

      // compute local part of distributed rhs b for Krylov solver using
      // physical sources only, and update surface data
      Call EnablePhysicalSources;
      Call DisableArtificialSources;
      Call SolveVolumePDE;
      Call SolveSurfacePDE;
      Call UpdateSurfaceFields;

      // launch distributed Krylov solver using artificial sources only.
      // IterativeLinearSolver solves (I-A) g = b: ListOfFields() initially
      // stores the local part of b; then stores each local part of iterate g^n.
      Call DisablePhysicalSources;
      Call EnableArtificialSources;

      Evaluate[ $tt1 = GetWallClockTime[], $tt1c = GetCpuTime[] ];

      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART,
                            {ListOfFields()}, {ListOfConnectedFields()}, {}]
      {
        // compute local part of (A g^n) and stores the result in ListOfFields()

	Evaluate[ $t1 = GetWallClockTime[], $t1c = GetCpuTime[] ];
	
	Call SolveVolumePDE;
        Call SolveSurfacePDE;
        Call UpdateSurfaceFields;

	Barrier;
	Evaluate[ $t2 = GetWallClockTime[], $t2c = GetCpuTime[] ];
	If (TIMING)
	  Print[{$t2-$t1, $t2c-$t1c}, Format "WALL Schwarz iteration = %gs ; CPU = %gs"];
	EndIf
      }
      {
        // applies a preconditioner
	If (PRECONDITIONER)
	  Evaluate[ $t1p = GetWallClockTime[], $t1pc = GetCpuTime[] ];

	  // for the 'clean' version of SGS, we use a copy of the data; in
      	  // practice (EXPERIMENTAL) it works best by not using it
      	  // (cf. definition of g_in_c[])
      	  Call CopySurfaceFields;

      	  // init the sweeps (solve first domain of each group if SGS +
      	  // broadcast)
      	  nCuts = #ListOfCuts()-1; // number of groups of domains (FIXME: not
                                   // tested in cyclic case)
      	  For ii In{0:nCuts}
      	    For proc In {0:MPI_Size-1}
      	      i = ListOfCuts(ii);
      	      Call InitSweep;
      	    EndFor
      	  EndFor

          // do the sweeps concurrently
          For iCut In{0:nCuts-1}
            // inner domains of each group
            For ii In {ListOfCuts(iCut)+1: ListOfCuts(iCut+1)-1:1}
              For proc In {0:MPI_Size-1}
                // index for the forward sweep
                i_f = ii % N_DOM;
                // index for the backward sweep
                i_b = (ListOfCuts(iCut) + ListOfCuts(iCut+1) - ii) % N_DOM;
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

	  Barrier;
	  Evaluate[ $t2p = GetWallClockTime[], $t2pc = GetCpuTime[] ];
	  If (TIMING)
	    Print[{$t2p-$t1p, $t2pc-$t1pc}, Format "WALL total preconditioner = %gs ; CPU = %gs"];
	  EndIf

        EndIf
      }

      Evaluate[ $tt2 = GetWallClockTime[], $tt2c = GetCpuTime[] ];
      If (TIMING)
	Print[{$tt2-$tt1, $tt2c-$tt1c}, Format "WALL total DDM solver = %gs ; CPU = %gs"];
      EndIf      

      
      //DeleteFile[ "/tmp/kspiter.txt" ];
      //Print[ {$KSPIts} , File "/tmp/kspiter.txt"];

      // build final volume solution after convergence on own cpu, using both
      // physical and artificial sources
      Call EnablePhysicalSources;
      Call EnableArtificialSources;
      Call SolveVolumePDE;
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
