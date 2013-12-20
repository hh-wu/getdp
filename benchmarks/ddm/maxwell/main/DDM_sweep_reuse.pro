Resolution {
  { Name DDM_reuse;
    System {
      If(FULL_SOLUTION)
        { Name Lag; NameOfFormulation Maxwell_Lagrange ; Type Complex; }
      EndIf
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        { Name Maxw~{idom}; NameOfFormulation DDM_Maxwell~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
        For iSide In{0:1}
          { Name ComputeG~{idom}~{iSide}; NameOfFormulation ComputeIterationData~{idom}~{iSide} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
          { Name ComputeGPrecond~{idom}~{iSide}; NameOfFormulation ComputeIterationDataPrecond~{idom}~{iSide} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
        EndFor
      EndFor
    }
    Operation {

      //FULL
      If(FULL_SOLUTION)
        Generate[Lag] ; Solve[Lag] ;
        PostOperation[Maxwell_Lagrange];
      EndIf

      If(SILVER_MULLER)
        Printf[" ***** Using SM as transmission condition *****"];
      EndIf
      If(OSRC)
        Printf[" ***** Using OSRC (Np = %g) as transmission condition *****", NP_OSRC];
      EndIf
      If(JFLee)
        Printf[" ***** Using JFLee as transmission condition *****"];
      EndIf
        Printf(" ** Relative tolerance: %g", TOL);

      //DDM
      SetCommSelf;
      // Compute rhs for Krylov -- physical sources only
      Evaluate[1. #10];
      Evaluate[0. #11]; Evaluate[0. #12];
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        ifact = ListOfFacto(ii);
        If(MPI_Rank == idom%MPI_Size)

          If (idom == ifact)
            Printf("  True  factorization: %g (%g)",idom,ifact);
            Generate[Maxw~{idom}];
            Solve[Maxw~{idom}];
          EndIf
          If (idom != ifact)
            Printf("  Reuse factorization: %g (%g)",idom,ifact) ;
            GenerateRHS[Maxw~{idom}];
            SolveAgainWithOther[Maxw~{idom},Maxw~{ifact}];
          EndIf

          For iSide In{0:1}
            Generate[ComputeG~{idom}~{iSide}];
            Solve[ComputeG~{idom}~{iSide}];
            PostOperation[g_out~{idom}~{iSide}]; // Compute g_in for next iteration
          EndFor
          // PostOperation[DDM_INIT~{idom}];
        EndIf
      EndFor

      //Update "Dirichlet" Boundary condition (homogenous now) -- FIXME Alex: ALL physical sources should be canceled, not only Dirichlet BCs
      Evaluate[0. #10];
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii) ;
        If(MPI_Rank == idom%MPI_Size)
          GenerateRHSGroup[Maxw~{idom}, GammaScat~{idom}] ;
        EndIf
      EndFor

      // Generate now, and use GenerateRHSGroup in sweep loop
      Evaluate[1. #11]; Evaluate[1. #12];
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        If(MPI_Rank == idom%MPI_Size)
        For iSide In{0:1}
          Generate[ComputeGPrecond~{idom}~{iSide}];
        EndFor
        EndIf
      EndFor
      SetCommWorld;

      //krylov
      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART, {ListOfField()}, {ListOfNeighborField()},{}] {
        SetCommSelf;
        Evaluate[1. #11]; Evaluate[1. #12];
        For ii In {0: #ListOfDom()-1}
          idom = ListOfDom(ii);
        If(MPI_Rank == idom%MPI_Size)
          GenerateRHSGroup[Maxw~{idom}, Sigma~{idom}];

          ifact = ListOfFacto(ii);
          If (idom == ifact)
            SolveAgain[Maxw~{idom}];
          EndIf
          If (idom != ifact)
            SolveAgainWithOther[Maxw~{idom},Maxv~{ifact}];
          EndIf

          For iSide In{0:1}
            GenerateRHSGroup[ComputeG~{idom}~{iSide}, Sigma~{idom}~{iSide}];
            SolveAgain[ComputeG~{idom}~{iSide}];
          EndFor
          EndIf
        EndFor
        //Update view (must be done after all resolution)
        For ii In {0: #ListOfDom()-1}
          idom = ListOfDom(ii) ;
        If(MPI_Rank == idom%MPI_Size)
          For iSide In{0:1}
            PostOperation[g_out~{idom}~{iSide}] ;
          EndFor
          EndIf
        EndFor

        /********* PARALLEL-SEQUENTIAL version -- proof of concept *******
        Evaluate[1. #11]; Evaluate[1. #12];
        For ii In {0: N_DOM-1}
          SetCommSelf;
        idom = ii;//ListOfDom(ii);

          For jj In {0:MPI_Size-1}
        If(jj == MPI_Rank && MPI_Rank == idom%MPI_Size)
          GenerateRHSGroup[Maxw~{idom}, Sigma~{idom}];
          SolveAgain[Maxw~{idom}];
          For iSide In{0:1}
            GenerateRHSGroup[ComputeG~{idom}~{iSide}, Sigma~{idom}~{iSide}];
            SolveAgain[ComputeG~{idom}~{iSide}];
          EndFor
          EndIf
            EndFor
            Barrier;
            SetCommWorld;
        EndFor

        //Update view (must be done after all resolution) -- !!! can be done immediately if parallel, because information is not exchanged
        For ii In {0: N_DOM-1}
          SetCommSelf;
          idom = ii ;
          For jj In {0:MPI_Size-1}
        If(jj == MPI_Rank && MPI_Rank == idom%MPI_Size)
          For iSide In{0:1}
            PostOperation[g_out~{idom}~{iSide}] ;
          EndFor
          EndIf
            EndFor
            Barrier;
            SetCommWorld;
        EndFor
        //************* end PARALLEL-SEQUENTIAL ***************/
        SetCommWorld;
      }
      {
        If (PRECOND_SWEEP)
          SetCommSelf;
          // FORWARD SWEEP
          // Transmission condition on Left and Zero condition on Right
          For ii In {1:N_DOM-2}
            Evaluate[1. #11]; Evaluate[0. #12];
            idom = ii;//ListOfDom(ii);
            ifact = ListOfFacto(ii);
            For jj In {0: MPI_Size-1}
              If(jj==MPI_Rank && idom%MPI_Size == MPI_Rank)//(idom%MPI_Size == MPI_Rank)
                //Compute u on Omega_i (fast way)
                GenerateRHSGroup[Maxw~{idom}, Sigma~{idom}] ;

                If (idom == ifact)
                  SolveAgain[Maxw~{idom}] ;
                EndIf
                If (idom != ifact)
                  SolveAgainWithOther[Maxw~{idom},Maxw~{ifact}] ;
                EndIf

                //Compute the new g_out (fast way)
                GenerateRHSGroup[ComputeGPrecond~{idom}~{1}, Sigma~{idom}~{1}] ;
                SolveAgain[ComputeGPrecond~{idom}~{1}] ;
                PostOperation[g_out_pc~{idom}~{1}] ;
              EndIf
            EndFor
          EndFor
          Barrier;

          // BACKWARD SWEEP
          // Zero condition on Left and Transmission condition on Right
          For ii In {1:N_DOM-2}
            Evaluate[0. #11]; Evaluate[1. #12];
            idom = N_DOM-1-ii;//ListOfField(#ListOfDom()-1 - ii) ;

            ifact = ListOfFacto(#ListOfFacto()-1 - ii) ;

            For jj In {0:MPI_Size-1}
              If(jj==MPI_Rank && idom%MPI_Size == MPI_Rank)//(idom%MPI_Size == MPI_Rank)
                //Compute u on Omega_i (fast way)
                GenerateRHSGroup[Maxw~{idom}, Sigma~{idom}] ;

                If (idom == ifact)
                  SolveAgain[Maxw~{idom}] ;
                EndIf
                If (idom != ifact)
                  SolveAgainWithOther[Maxw~{idom},Maxw~{ifact}] ;
                EndIf

                //Compute the new g_out (fast way)
                GenerateRHSGroup[ComputeGPrecond~{idom}~{0}, Sigma~{idom}~{0}] ;
                SolveAgain[ComputeGPrecond~{idom}~{0}] ;
                PostOperation[g_out_pc~{idom}~{0}] ;
              EndIf
            EndFor
          EndFor
          Barrier ;
          SetCommWorld;
        EndIf
      }

      //building solution in volume after convergence ; use both physical and artificial sources => no need to sum afterwards
      Evaluate[1. #10];
      Evaluate[1. #11]; Evaluate[1. #12];
      // Evaluate[0. #11]; Evaluate[0. #12];
      SetCommSelf;
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        // If(MPI_Rank == idom%MPI_Size)
          GenerateRHSGroup[Maxw~{idom}, Region[{Sigma~{idom}, GammaScat~{idom}}]];

          ifact = ListOfFacto(ii);
          If (idom == ifact)
            SolveAgain[Maxw~{idom}] ;
          EndIf
          If (idom != ifact)
            SolveAgainWithOther[Maxw~{idom},Maxw~{ifact}] ;
          EndIf

        PostOperation[DDM~{idom}] ;
        // EndIf
      EndFor
      SetCommWorld;
    }
  }
}
