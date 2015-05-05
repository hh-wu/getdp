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

      // synchronize all mpi processes and start work on own cpu
      Barrier;
      SetCommSelf;

      // compute rhs for Krylov -- physical sources only
      Evaluate[1. #10];
      Evaluate[0. #11]; Evaluate[0. #12];

      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        // UpdateConstraint is currently not necessary for Maxwell, as we use
        // Lagrange multupliers to encforce Dirichlet boundary conditions
        UpdateConstraint[Vol~{idom}, GammaD~{idom}, Assign];
        Generate[Vol~{idom}] ;
        Solve[Vol~{idom}] ;
	For iSide In {0:1}
	  If( NbrRegions[Sigma~{idom}~{iSide}] )
	    Generate[Sur~{idom}~{iSide}] ;
	    Solve[Sur~{idom}~{iSide}] ;
	  EndIf
	EndFor
      EndFor

      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	For iSide In {0:1}
	  PostOperation[g_out~{idom}~{iSide}] ; // compute g_in for next iteration
	EndFor
      EndFor

      // update "Dirichlet" Boundary condition (now homogenous) (prepare non
      // homogeneous BC on transmission boundaries); actually not currently
      // necessary for Maxwell (since we impose Dirichlet BCs using Lagrange
      // multipliers)
      Evaluate[0. #10];
      Evaluate[1. #11]; Evaluate[1. #12];
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        UpdateConstraint[Vol~{idom}, GammaD~{idom}, Assign];
      EndFor

      // launch iterative Krylov solver on all cpus
      SetCommWorld;

      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART,
                            {ListOfField()}, {ListOfNeighborField()}, {}]
      {
	SetCommSelf;
	// Solve Vol on each of my subdomain
	For ii In {0: #ListOfDom()-1}
	  idom = ListOfDom(ii);
          GenerateRHSGroup[Vol~{idom}, Sigma~{idom}] ;
          SolveAgain[Vol~{idom}] ;
	  For iSide In {0:1}
	    If( NbrRegions[Sigma~{idom}~{iSide}] )
              GenerateRHSGroup[Sur~{idom}~{iSide},
                Region[{Sigma~{idom}~{iSide}, TrPmlSigma~{idom}~{iSide}}]] ;
	      SolveAgain[Sur~{idom}~{iSide}] ;
	    EndIf
	  EndFor
	EndFor
      	// update view (must be done after all resolutions)
	For ii In {0: #ListOfDom()-1}
	  idom = ListOfDom(ii);
	  For iSide In {0:1}
	    PostOperation[g_out~{idom}~{iSide}] ;
	  EndFor
	EndFor
	SetCommWorld;
      }
      {
      }

      //DeleteFile[ "/tmp/kspiter.txt" ];
      //Print[ {$KSPIts} , File "/tmp/kspiter.txt"];

      // build final volume solution after convergence on own cpu; using both
      // physical and artificial sources
      SetCommSelf;
      Evaluate[1. #10];
      Evaluate[1. #11]; Evaluate[1. #12];
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        UpdateConstraint[Vol~{idom}, GammaD~{idom}, Assign];
        GenerateRHSGroup[Vol~{idom}, Region[{Sigma~{idom}, TrOmegaGammaD~{idom}}] ] ;
        SolveAgain[Vol~{idom}] ;
        PostOperation[DDM~{idom}] ;
      EndFor
      SetCommWorld;

    }
  }
}
