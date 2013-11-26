/* DDM for the Helmholtz Equation
Nodal formulation
Sweep preconditioner (Alex's)

Same Params as DDM_standard.pro: 
FULL_SOLUTION: If == 1 then compute full solution + error, 0: don't
EXACT_SOLTUION: If == 1 then compute exact solution + error (for circle only), 0: don't
WRITE_U_INIT: If == 1 then write on disk u at iteration Oth (needed to compute/combine the scattered field)
STORE_U_INIT: If == 1 then store u at iteration Oth on RAM (Field) (needed to compute/combine the scattered field)
MSH_SPLIT: If == 1 then use of one different mesh per subdomain, allowing also non conform mesh. A root name of the mesh must be provided through variable MeshName, which is the relative path to the root-name.
Example : for mesh named circle_pie0.msh, circle_pie1.msh, ... in the directory of relative path ../circle_pie, the variable MeshName must be
  MeshName = "../circle_pie/circle_pie"

Remarks:
- One group for each transmission boundary !! (ex.: sigma_left and sigma_right) 
- Transmission boundary between Omega~{i} and Omega~{j} is Sigma~{i}~{j}
- Sigma~{idom} = Sum_j Sigma~{idom}~{j}
- One g_out per transmission boundary (and not only per subdomain !)
- One Field per transmission boundary ! (split) 
- !!!!! Register #9, #10 and #11 are reserved !!!!!:
      - #9 : if > 0 then non Homogeneous Dirichlet BC
      - #10 : if > 0 then non Homogeneous BC on LEFT transmission boundary
      - #11 : if > 0 same on the RIGHT
- if NON_CONFORM then MSH_SPLIT is set to 1
- if (FULL_SOLUTION || EXACT_SOLUTION) then STORE_U_INIT is set to 1
- if (FULL_SOLUTION && MSH_SPLIT) then FULL_SOLUTION is set to 0 (full solution needs the whole mesh)
*/


Resolution {
    { Name DDM_reuse ;
    System {
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        { Name Helmholtz~{idom} ; NameOfFormulation DDM~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
	For jdom In {0:1}
	  { Name ComputeG~{idom}~{jdom} ; NameOfFormulation ComputeG~{idom}~{jdom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
	  { Name ComputeGPrecond~{idom}~{jdom} ; NameOfFormulation ComputeGPrecond~{idom}~{jdom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
	EndFor
      EndFor
    }
    Operation { 
      If(EMDA)
	Printf["Using EMDA transmission condition"];
      EndIf
      If(OSRC)
	Printf["Using OSRC transmission condition"];
      EndIf
      If(OO2)
	Printf["Using OO2 transmission condition"];
      EndIf

      Printf["PRECOND_SWEEP: %g", PRECOND_SWEEP];

      //Let the DDM game begin!
      SetCommSelf;
      //setting homogeneous BC on transmission boundaries
      Evaluate[0. #10]; Evaluate[0. #11];
      //Setting the non homogeneous Dirichlet BC on GammaD (part 1/2)
      Evaluate[1. #9];
      //Initialization (compute the right hand side)
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        ifact = ListOfFacto(ii);
        //Setting the non homogeneous Dirichlet BC on GammaD (part 2/2)
        UpdateConstraint[Helmholtz~{idom}, GammaD~{idom}, Assign];
	If (idom == ifact)
	  Printf("  True  factorization: %g (%g)",idom,ifact);
	  Generate[Helmholtz~{idom}] ;
	  Solve[Helmholtz~{idom}] ;
	EndIf
	If (idom != ifact)
	  Printf("  Reuse factorization: %g (%g)",idom,ifact) ;
	  GenerateRHS[Helmholtz~{idom}] ;
	  SolveAgainWithOther[Helmholtz~{idom},Helmholtz~{ifact}] ;
	EndIf

	For jdom In {0:1}
	  Generate[ComputeG~{idom}~{jdom}] ;
          Solve[ComputeG~{idom}~{jdom}] ;
	  // If (PRECOND_SWEEP)
	  //   Generate[ComputeGPrecond~{idom}~{0}] ;
	  //   Generate[ComputeGPrecond~{idom}~{1}] ;
	  // EndIf
	EndFor
	//print u_init either in Memory (STORE_U_INIT == 1) and/or on disk (WRITE_U_INIT == 1)
	PostOperation[u_init~{idom}] ;
      EndFor
      // Compute the g_out in the RAM (right hand side of iterative solver)
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
	For jdom In {0:1}
	  PostOperation[g_out~{idom}~{jdom}] ; 
	EndFor
      EndFor
      // A Barrier is mandatory to ensure that every process has finish the initialization
      Barrier;
      //Setting homogeneous Dirichlet BC on every GammaD~{idom}
      Evaluate[0. #9];
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        UpdateConstraint[Helmholtz~{idom}, GammaD~{idom}, Assign];
      EndFor
      // Launching iterative solver
      SetCommWorld;

      If (PRECOND_SWEEP) // Generate the systems now, and generate RHS only during iterations (EXPERIMENTAL)
	For ii In {0: #ListOfDom()-1}
          idom = ListOfDom(ii);
	  For jdom In {0:1}
	    Generate[ComputeGPrecond~{idom}~{0}] ;
	    Generate[ComputeGPrecond~{idom}~{1}] ;
	  EndFor
        EndFor
      EndIf

      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART, {ListOfField()}, {ListOfNeighborField()}, {}]
      {
      	SetCommSelf;
      	//setting non homogeneous BC on transmission boundaries
      	Evaluate[1. #10]; Evaluate[1. #11];
      	// Solve Helmholtz on each of my subdomain
        For ii In {0: #ListOfDom()-1}
          idom = ListOfDom(ii);
      	  //Compute u on Omega_i (fast way)
      	  GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;
	  
	  ifact = ListOfFacto(ii);
	  If (idom == ifact)
	    SolveAgain[Helmholtz~{idom}] ;
	  EndIf
	  If (idom != ifact)
	    SolveAgainWithOther[Helmholtz~{idom},Helmholtz~{ifact}] ;
	  EndIf

      	  //Compute the new g_out (fast way)
      	  For jdom In {0:1}
      	    GenerateRHSGroup[ComputeG~{idom}~{jdom}, Sigma~{idom}~{jdom}] ; 
      	    SolveAgain[ComputeG~{idom}~{jdom}] ;
      	  EndFor
      	EndFor
      	//Update my PView/Field
        For ii In {0: #ListOfDom()-1}
          idom = ListOfDom(ii);
      	  For jdom In {0:1}
      	    PostOperation[g_out~{idom}~{jdom}] ;
      	  EndFor
      	EndFor
      	SetCommWorld;
      	//End of iteration: every process will echange their PView/Field
      }
      {
      //--------------------
      //SWEEP PRECONDITIONER
      //--------------------
      If(PRECOND_SWEEP)
      	SetCommSelf;
        // If((MPI_Size > 1 && MPI_Rank == 0) || MPI_Size < 2)
        // FORWARD SWEEP
      	// Transmission condition on Left and Zero condition on Right
      	Evaluate[1. #10]; Evaluate[0. #11];
      	// Solve Helmholtz on each of my subdomain
        For ii In {0: #ListOfDom()-1}
          idom = ListOfDom(ii);
	  
	  ifact = ListOfFacto(ii);
	  
          If( idom % MPI_Size == MPI_Rank ) // Alex
	  If(idom > 0 && idom < N_DOM-1)
      	    //Compute u on Omega_i (fast way)
	    GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;
	    
	    If (idom == ifact)
	      SolveAgain[Helmholtz~{idom}] ;
	    EndIf
	    If (idom != ifact)
	      SolveAgainWithOther[Helmholtz~{idom},Helmholtz~{ifact}] ;
	    EndIf

      	    //Compute the new g_out (fast way)
      	    // Generate[ComputeGPrecond~{idom}~{1}] ;
      	    GenerateRHSGroup[ComputeGPrecond~{idom}~{1}, Sigma~{idom}~{1}] ; // EXPERIMENTAL
      	    SolveAgain[ComputeGPrecond~{idom}~{1}] ;
      	    PostOperation[g_out~{idom}~{1}] ;
      	  EndIf
      	  EndIf
      	EndFor
      	// EndIf

        // If((MPI_Size > 1 && MPI_Rank == 1) || MPI_Size < 2)
        // BACKWARD SWEEP
      	// Zero condition on Left and Transmission condition on Right
      	Evaluate[0. #10]; Evaluate[1. #11];
      	// Solve Helmholtz on each of my subdomain
        For ii In {0: #ListOfDom()-1}
          idom = ListOfDom(#ListOfDom()-1 - ii) ;
	  
	  ifact = ListOfFacto(#ListOfFacto()-1 - ii) ;

          If( idom % MPI_Size == MPI_Rank ) // Alex
      	  If(idom > 0 && idom < N_DOM-1)
      	    //Compute u on Omega_i (fast way)
	    GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;
	    
	    If (idom == ifact)
	      SolveAgain[Helmholtz~{idom}] ;
	    EndIf
	    If (idom != ifact)
	      SolveAgainWithOther[Helmholtz~{idom},Helmholtz~{ifact}] ;
	    EndIf

      	    //Compute the new g_out (fast way)
      	    // Generate[ComputeGPrecond~{idom}~{0}] ;
      	    GenerateRHSGroup[ComputeGPrecond~{idom}~{0}, Sigma~{idom}~{0}] ; // EXPERIMENTAL
      	    SolveAgain[ComputeGPrecond~{idom}~{0}] ;
      	    PostOperation[g_out~{idom}~{0}] ;
      	  EndIf
      	  EndIf
      	EndFor
      	SetCommWorld;
      	EndIf
      // EndIf
      }
      // //Now the solution G is stored in the PView of index ListOfDom()
      SetCommSelf;
      //Computing solution
      //setting non homogeneous BC on transmission boundaries
      Evaluate[1. #10]; Evaluate[1. #11];
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;

	ifact = ListOfFacto(ii);
	If (idom == ifact)
	  SolveAgain[Helmholtz~{idom}] ;
	EndIf
	  If (idom != ifact)
	  SolveAgainWithOther[Helmholtz~{idom},Helmholtz~{ifact}] ;
	EndIf

        PostOperation[u_ddm~{idom}] ;
      EndFor
      SetCommWorld;

    }
  }
}
