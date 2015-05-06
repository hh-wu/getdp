
If (ANALYSIS == 0)
  Include "Helmholtz.pro"; // formulations, function spaces and other definitions
EndIf
If (ANALYSIS == 1)
  Include "Maxwell.pro"; // formulations, function spaces and other definitions
EndIf
Include "SchwarzMacros.pro"; // macros for the resolution

Resolution {
  { Name DDM ;
    Call DdmSystemDefs; // Getdp system definitions for the resolution

    Operation {
      Call DdmInfo; // Output on the current parameters

      // compute rhs for Krylov solver on own cpu using physical sources only
      Call EnablePhysicalSourcesOnly;
      Call SolveSubdomains;
      Call UpdateGonSurfaces;

      // launch Krylov solver in parallel on all cpus
      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART,
                            {ListOfField()}, {ListOfNeighborField()}, {}]
      {
        // solve each subproblem on own cpu using articifial sources only
	Call EnableArtificialSourcesOnly;
	Call SolveSubdomains;
	Call UpdateGonSurfaces;
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
