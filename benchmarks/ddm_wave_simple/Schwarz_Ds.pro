Resolution {
  { Name DDM ;
    System {
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        { Name Vol~{idom} ; NameOfFormulation DDM_Vol~{idom} ;
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
      If (MPI_Rank == 0)
        Printf["Starting Helmholtz DDM with %g subdomains / %g processes", N_DOM, MPI_Size];
        If(TC_TYPE == 0)
          Printf["Using 0-th order (Sommerfeld/EMDA) transmission conditions"];
        EndIf
        If(TC_TYPE == 1)
          Printf["Using 2-nd order (OO2) transmission conditions"];
        EndIf
        If(TC_TYPE == 2)
          Printf["Using %g-th order Pade (OSRC) transmission conditions", NP_OSRC];
        EndIf
        If(TC_TYPE == 3)
          Printf["Using PML transmission conditions"];
        EndIf
        Printf["Relative iterative solver tolerance = %g", TOL];
      EndIf

      // synchronize all mpi processes and start work on own cpu
      Barrier;
      SetCommSelf;

      // compute rhs for krylov -- physical sources only
      Evaluate[1. #10];
      Evaluate[0. #11]; Evaluate[0. #12];
      Evaluate[0. #21]; Evaluate[0. #22];

      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
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
      // homogeneous BC on transmission boundaries)
      Evaluate[0. #10];
      // Evaluate[1. #11]; Evaluate[1. #12];
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        UpdateConstraint[Vol~{idom}, GammaD~{idom}, Assign];

	// for preconditioner -- TODO: 'GenerateRHSGroup' should be able to detect that no 'Generate' was performed before, making these lines unnecessary
	For iSide In {0:1}
	  If( NbrRegions[Sigma~{idom}~{iSide}] )
	    Generate[SurPc~{idom}~{iSide}] ;
	  EndIf
	EndFor
      EndFor

      // launch iterative Krylov solver on all cpus
      SetCommWorld;

      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART,
                            {ListOfField()}, {ListOfNeighborField()}, {}]
      {
	SetCommSelf;
	// Solve Helmholtz on each of my subdomain
	Evaluate[1. #11]; Evaluate[1. #12];
	Evaluate[0. #21]; Evaluate[0. #22];
	For ii In {0: #ListOfDom()-1}
	  idom = ListOfDom(ii);
          GenerateRHSGroup[Vol~{idom}, Sigma~{idom}] ;
          SolveAgain[Vol~{idom}] ;
	  For iSide In {0:1}
	    If( NbrRegions[Sigma~{idom}~{iSide}] )
              GenerateRHSGroup[Sur~{idom}~{iSide}, Region[{Sigma~{idom}~{iSide},
                                                                TrPmlSigma~{idom}~{iSide}}]] ;
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
	// preconditioner
	If(PRECOND_SWEEP)
	SGS = 1;
	Printf["SGS (additive) = %g", SGS];

	SetCommSelf;
	// For the 'clean' version of SGS, we use a copy of the data; in practice (EXPERIMENTAL) it works best by not using it (cf. definition of g_in_c[])
	If (SGS)
	  // Evaluate[0. #11]; Evaluate[0. #12];
	  Evaluate[1. #21]; Evaluate[1. #22];
	  // Take a copy of the input data
	  For ii In {0:#ListOfDom()-1}
      	    idom = ListOfDom(ii);
	    For iSide In {0:1}
	      PostOperation[g_copy~{idom}~{iSide}];
	    EndFor
	  EndFor
	EndIf

	nCuts = #ListOfCuts()-1; // the number of groups of domains (FIXME: not tested in the cyclic case)
	// init the sweeps (first domain if SGS + broadcast)
	For ii In{0:nCuts}
	  For proc In {0:MPI_Size-1}
	    idom = ListOfCuts(ii);
	    If( 1 && proc == MPI_Rank && ProcOwnsDomain(idom) )
	      If (SGS)
	        Evaluate[SGS #11]; Evaluate[SGS #12];
	        Evaluate[0. #21]; Evaluate[0. #22];
	        //Compute u on Omega_i (fast way)
	        GenerateRHSGroup[Vol~{idom}, Region[{Sigma~{idom}}]] ;
	        SolveAgain[Vol~{idom}] ;
		//Compute the new g_out (fast way), on both sides
		For iSide In{0:1}
		  If( NbrRegions[Sigma~{idom}~{iSide}] )
		    GenerateRHSGroup[SurPc~{idom}~{iSide}, Region[{Sigma~{idom}~{iSide},
									     TrPmlSigma~{idom}~{iSide}}]] ;
		    SolveAgain[SurPc~{idom}~{iSide}] ;
		  EndIf
		  PostOperation[g_out_pc~{idom}~{iSide}] ;
		EndFor
	      EndIf
	      BroadcastFields[];
	    EndIf
	  EndFor
	EndFor

	// Do the sweeps concurrently
	For iCut In{0:nCuts-1}
	  For ii In {ListOfCuts(iCut)+1: ListOfCuts(iCut+1)-1:1} // inner domains
	    For proc In {0:MPI_Size-1}
	      idom_f = ii%N_DOM; // index for the forward sweep
	      idom_b = (ListOfCuts(iCut) + ListOfCuts(iCut+1) - ii)%N_DOM; // index for the backward sweep
	      If( 1 && proc == MPI_Rank && ProcOwnsDomain(idom_f) ) // FORWARD
		skipList = {2*idom_f, (2*(idom_f + N_DOM)+1)%(2*N_DOM)}; // right
		BroadcastFields[skipList()];

		Evaluate[1. #11]; Evaluate[0. #12];
		Evaluate[0. #21]; Evaluate[SGS #22];
		//Compute u on Omega_i (fast way)
		GenerateRHSGroup[Vol~{idom_f}, Region[{Sigma~{idom_f}}]] ;
		SolveAgain[Vol~{idom_f}] ;

		//Compute the new g_out (fast way)
		If( NbrRegions[Sigma~{idom_f}~{1}] )
		  GenerateRHSGroup[SurPc~{idom_f}~{1}, Region[{Sigma~{idom_f}~{1},
									 TrPmlSigma~{idom_f}~{1}}]] ;
		  SolveAgain[SurPc~{idom_f}~{1}] ;
		EndIf
		PostOperation[g_out_pc~{idom_f}~{1}] ;

		skipList = {(2*(idom_f + N_DOM)-1)%(2*N_DOM), (2*(idom_f + N_DOM)-2)%(2*N_DOM)}; // left
		BroadcastFields[skipList()];
	      EndIf
	      If( 1 && proc == MPI_Rank && ProcOwnsDomain(idom_b) ) // BACKWARD
		skipList = {(2*(idom_b + N_DOM)-1)%(2*N_DOM), (2*(idom_b + N_DOM)-2)%(2*N_DOM)}; // left
		BroadcastFields[skipList()];

		Evaluate[0. #11]; Evaluate[1. #12];
		Evaluate[SGS #21]; Evaluate[0. #22];
		//Compute u on Omega_i (fast way)
		GenerateRHSGroup[Vol~{idom_b}, Region[{Sigma~{idom_b}}]] ;
		SolveAgain[Vol~{idom_b}] ;

		//Compute the new g_out (fast way)
		If( NbrRegions[Sigma~{idom_b}~{0}] )
		  GenerateRHSGroup[SurPc~{idom_b}~{0}, Region[{Sigma~{idom_b}~{0},
									 TrPmlSigma~{idom_b}~{0}}]] ;
		  SolveAgain[SurPc~{idom_b}~{0}] ;
		EndIf
		PostOperation[g_out_pc~{idom_b}~{0}] ;

		skipList = {2*idom_b, (2*(idom_b + N_DOM)+1)%(2*N_DOM)}; // right
		BroadcastFields[skipList()];
	      EndIf
	    EndFor
	  EndFor
	EndFor

	// Finalize communication (last/first domain of each segment)
	For iCut In{0:nCuts}
	  For proc In {0:MPI_Size-1}
	    If ( 1 && proc == MPI_Rank && ProcOwnsDomain(ListOfCuts(iCut))) // first of cut
	      BroadcastFields[];
	    EndIf
	  EndFor
	EndFor

	SetCommWorld;
      EndIf
      }

      // build final volume solution after convergence on own cpu; using both
      // physical and artificial sources
      SetCommSelf;
      Evaluate[1. #10];
      Evaluate[1. #11]; Evaluate[1. #12];
      Evaluate[0. #21]; Evaluate[0. #22];
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
