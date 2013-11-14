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

//Some precautions to avoir user error
Function{
  If(NON_CONFORM)
    MSH_SPLIT = 1;
  EndIf
  //u_init is needed to compute the error so ...
  // ...to avoid errors, the storage in memory of u_init (0th iteration) is forced
  If(FULL_SOLUTION || EXACT_SOLUTION)
    STORE_U_INIT = 1;
  EndIf
    //full solution cannot be computed without the whole mesh
  If(FULL_SOLUTION && MSH_SPLIT)
        // FULL_SOLUTION = 0;
  EndIf
}

// What follows is used to manage Dirichlet Boundary condition
Function{
  //Register #10 is reserved. Value inside is 0 if the boundary condition is homogeneous and equal to 1 if not homogeneous.
  //Value inside register #10 is changed during the Resolution process
  flag_homogen[] = #9;
  f_diri[] = uinc[]*flag_homogen[];
  //u_init is the value of u at initialization (needed to compute the scattered field at the end)
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
    u_init~{idom}[] = ComplexScalarField[XYZ[]]{2*N_DOM+idom};
  EndFor
}

Function{

  F_SOURCE[] = V_SOURCE[]*#9;

}

//Dirichlet boundary condition (either homogeneous or inhomogeneous, depending on register #10)
Constraint{
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
    { Name Dirichlet~{idom} ; Case { { Region GammaScat~{idom} ; Value f_diri[];} } }
    For jdom In {0:1}
      For j In {1:N}
        { Name Dirichlet_phi~{j}~{idom}~{jdom} ; Case { { Region GammaScat~{idom} ; Value 0*f_diri[];} } }  // 20131029: DO NOT remove this constraint !! Seems faster with 0*f_diri[] ??
      EndFor
    EndFor
  EndFor
}

FunctionSpace {
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
  { Name Hgrad_u~{idom} ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef un ; Function BF_Node ;
        Support Region[ {Omega~{idom}, GammaInf~{idom}, BndGammaInf~{idom}, Sigma~{idom}, GammaScat~{idom}} ] ; Entity NodesOf[ All/*Omega~{idom}*/ ] ; }
    }
    Constraint { { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet~{idom} ; } }
  }
  
  For jdom In {0:1}
    { Name Hgrad_g_out~{idom}~{jdom}; Type Form0 ;
      BasisFunction {
        { Name sn ; NameOfCoef un ; Function BF_Node ;
          Support Region[ {Sigma~{idom}~{jdom}} ] ; Entity NodesOf[All, Not GammaScat/**/];}
      }
    }

    For j In {1:N}
    { Name Hgrad_phi~{j}~{idom}~{jdom} ; Type Form0 ; // EXPERIMENTAL
        BasisFunction {
          { Name sn ; NameOfCoef un ; Function BF_Node ;
            Support Region[ {Sigma~{idom}~{jdom}, BndSigma~{idom}~{jdom}} ] ; Entity NodesOf[All, Not GammaScat/**/] ; } // exclude GammaScat in case part of BndSigma intersects GammaScat
        }
	Constraint { { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet_phi~{j}~{idom}~{jdom} ; } } // 20130418: Alex added this to help convergence for the waveguide ; UPDATE 20131029: this constraint MUST be there !! Even if GammaScat is excluded !
      }
    EndFor
   EndFor
 EndFor // end loop idom
}

Formulation {
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
  // DDM with homogeneous (#10 == 0) or not (#10 == 1) dirichlet BC
  { Name DDM~{idom} ; Type FemEquation ;
    Quantity { 
      { Name u~{idom} ; Type Local ; NameOfSpace Hgrad_u~{idom}; }
      If(FULL_SOLUTION) //for post-processing
        { Name u_full ; Type Local ; NameOfSpace Hgrad_u; }
      EndIf
      For jdom In {0:1}
	{ Name g_out~{idom}~{jdom} ; Type Local ; NameOfSpace Hgrad_g_out~{idom}~{jdom}; }
	If(OSRC)
	  For j In{1:N}
	{ Name phi~{j}~{idom}~{jdom}; Type Local ; NameOfSpace Hgrad_phi~{j}~{idom}~{jdom}; }
	  EndFor
	EndIf
      EndFor
    }
    Equation {
      Galerkin { [ Dof{Grad u~{idom}} , {Grad u~{idom}} ] ;  
	In Omega~{idom}; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -k[]^2 * Dof{u~{idom}} , {u~{idom}} ] ;  
	In Omega~{idom}; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ F_SOURCE[], {u~{idom}}] ;
	In Omega~{idom}; Jacobian JVol ; Integration I1 ; }

      // g_in LEFT (#10 > 0) or 0 (#10 == 0) 
      Galerkin { [ - (#10 > 0. ? g_in~{idom}~{0}[] : 0), {u~{idom}} ] ;
	  In Sigma~{idom}~{0}; Jacobian JSur ; Integration I1 ; }
      // g_in RIGHT (#11 > 0) or 0 (#11 == 0) 
      Galerkin { [ - (#11 > 0. ? g_in~{idom}~{1}[] : 0), {u~{idom}} ] ;
	In Sigma~{idom}~{1}; Jacobian JSur ; Integration I1 ; }
      //Transmission condition
      If(EMDA)
	Galerkin { [ - I[] * kDtn[] * Dof{u~{idom}} , {u~{idom}} ] ;
	  In Sigma~{idom}; Jacobian JSur ; Integration I1 ; }
      EndIf

      If(OO2)
	Galerkin { [ a[] * Dof{u~{idom}} , {u~{idom}} ] ;
	  In Sigma~{idom}; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ -b[] * Dof{d u~{idom}} , {d u~{idom}} ] ;
	  In Sigma~{idom}; Jacobian JSur ; Integration I1 ; }
      EndIf

      If(OSRC)
        Galerkin { [  - I[] * kDtn[] * OSRC_C0[]{N,theta_branch} * Dof{u~{idom}} , {u~{idom}} ] ;
	  In Sigma~{idom}; Jacobian JSur ; Integration I1 ; }
        For jdom In {0:1}
          For j In{1:N}
            Galerkin { [   I[] * kDtn[] * OSRC_Aj[]{j,N,theta_branch} / keps[]^2 * Dof{d phi~{j}~{idom}~{jdom}} , {d u~{idom}} ] ;
	      In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
            Galerkin { [ - I[] * kDtn[] * OSRC_Aj[]{j,N,theta_branch} / keps[]^2 * ( I[] * kInf[] * Dof{phi~{j}~{idom}~{jdom}}) , {u~{idom}} ] ; // EXPERIMENTAL
	      In BndSigma~{idom}~{jdom}; Jacobian JLin ; Integration I1 ; }
	    Galerkin { [ - OSRC_Bj[]{j,N,theta_branch} / keps[]^2 * Dof{d phi~{j}~{idom}~{jdom}} , {d phi~{j}~{idom}~{jdom}} ] ;
	      In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
            Galerkin { [ OSRC_Bj[]{j,N,theta_branch} / keps[]^2 * ( I[] * kInf[] * Dof{phi~{j}~{idom}~{jdom}}) , {phi~{j}~{idom}~{jdom}} ] ; // EXPERIMENTAL
	      In BndSigma~{idom}~{jdom}; Jacobian JLin ; Integration I1 ; }
	    Galerkin { [ Dof{phi~{j}~{idom}~{jdom}} , {phi~{j}~{idom}~{jdom}} ] ;
	      In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	    Galerkin { [  - Dof{u~{idom}} , {phi~{j}~{idom}~{jdom}} ] ;
	      In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	  EndFor
	EndFor
      EndIf      

      // Absorbing boundary condition
      // Sommerfeld ...
      // Galerkin { [ - I[] * k * Dof{u~{idom}} , {u~{idom}} ] ;
      Galerkin { [ - I[] * kInf[] * Dof{u~{idom}} , {u~{idom}} ] ;
        In GammaInf~{idom}; Jacobian JSur ; Integration I1 ; }
If(DIM>1)
      //Baylis-Türkel:
      Galerkin { [ alphaBT[] * Dof{u~{idom}} , {u~{idom}} ] ;
        In GammaInf~{idom}; Jacobian JSur ; Integration I1 ; }
// FIXME: this assumes that GammaInf is closed; we need to add the
// boundary terms if it is open!
      Galerkin { [ betaBT[] * Dof{d u~{idom}} , {d u~{idom}} ] ;  
	In GammaInf~{idom}; Jacobian JSur ; Integration I1 ; }
EndIf
    }
  }

  // Compute the outgoing data
  For jdom In {0:1}
    { Name ComputeG~{idom}~{jdom} ; Type FemEquation ;
      Quantity {
        { Name u~{idom} ; Type Local ; NameOfSpace Hgrad_u~{idom}; }
	{ Name g_out~{idom}~{jdom} ; Type Local ; NameOfSpace Hgrad_g_out~{idom}~{jdom}; }
	If(OSRC)
	  For j In{1:N}
	    { Name phi~{j}~{idom}~{jdom}; Type Local ; NameOfSpace Hgrad_phi~{j}~{idom}~{jdom}; }
	  EndFor
	EndIf
      }
      Equation {
	Galerkin { [ Dof{g_out~{idom}~{jdom}} , {g_out~{idom}~{jdom}} ] ;
	  In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	If(jdom == 0)
	  // g_in LEFT (iterative solver) or 0 (initialization step)	
	  Galerkin { [ (#10 > 0. ? g_in~{idom}~{0}[]:0)  , {g_out~{idom}~{0}} ] ;
	    In Sigma~{idom}~{0}; Jacobian JSur ; Integration I1 ; }
	EndIf
	If(jdom == 1)
	  // g_in RIGHT (iterative solver) or 0 (initialization step)
	  Galerkin { [ (#11 > 0. ? g_in~{idom}~{1}[]:0)  , {g_out~{idom}~{1}} ] ;
	    In Sigma~{idom}~{1}; Jacobian JSur ; Integration I1 ; }
	EndIf
	// Transmission condition
	If(EMDA)
	  Galerkin { [ 2 * I[] * kDtn[] * {u~{idom}} , {g_out~{idom}~{jdom}} ] ;  
	    In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	EndIf
	  
	If(OO2)
	  Galerkin { [ - 2 * a[] * {u~{idom}} , {g_out~{idom}~{jdom}} ] ;  
	    In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	  Galerkin { [ 2 * b[] * {d u~{idom}} , {d g_out~{idom}~{jdom}} ] ;  
	    In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	EndIf

	If(OSRC)
	  Galerkin { [ 2 * ( I[] * kDtn[] * OSRC_C0[]{N,theta_branch} * {u~{idom}} ) , {g_out~{idom}~{jdom}} ] ;
	    In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
          For j In{1:N}
            Galerkin { [  -2 * ( I[] * kDtn[] * OSRC_Aj[]{j,N,theta_branch} / keps[]^2 * {d phi~{j}~{idom}~{jdom}}) , {d g_out~{idom}~{jdom}} ] ;
	      In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
            // Galerkin { [ 2 * I[] * k[] * OSRC_Aj[]{j,N,theta_branch} / keps[]^2 * ( I[] * kInf[] * {phi~{j}~{idom}~{jdom}}) , {g_out~{idom}~{jdom}} ] ; // EXPERIMENTAL
	    //   In BndSigma~{idom}~{jdom}; Jacobian JLin ; Integration I1 ; } // Do not add boundary contribution as phi is no longer dof here !?
          EndFor
        EndIf
      }
    }

    { Name ComputeGPrecond~{idom}~{jdom} ; Type FemEquation ;
      Quantity {
        { Name u~{idom} ; Type Local ; NameOfSpace Hgrad_u~{idom}; }
	{ Name g_out~{idom}~{jdom} ; Type Local ; NameOfSpace Hgrad_g_out~{idom}~{jdom}; }
	If(OSRC)
	  For j In{1:N}
	    { Name phi~{j}~{idom}~{jdom}; Type Local ; NameOfSpace Hgrad_phi~{j}~{idom}~{jdom}; }
	  EndFor
	EndIf
      }
      Equation {
	Galerkin { [ Dof{g_out~{idom}~{jdom}} , {g_out~{idom}~{jdom}} ] ;
	  In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }

	// ComplexScalarField[XYZ[]]{2*idom+jdom-1} is equal to g_out~{idom}{jdom}
	Galerkin{[ - ComplexScalarField[XYZ[]]{2*idom+jdom-1}, {g_out~{idom}~{jdom}}] ;
	  In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }

	// Transmission condition (2.Su)
	If(EMDA)
	  Galerkin { [ 2 * I[] * kDtn[] * {u~{idom}} , {g_out~{idom}~{jdom}} ] ;
	    In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	EndIf
	
	If(OO2)
	  Galerkin { [  -2 * a[] * {u~{idom}} , {g_out~{idom}~{jdom}} ] ;
	    In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	  Galerkin { [ 2 * b[] * {d u~{idom}} , {d g_out~{idom}~{jdom}} ] ;
	    In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	EndIf

	If(OSRC)
	  Galerkin { [ 2 * ( I[] * kDtn[] * OSRC_C0[]{N,theta_branch} * {u~{idom}} ) , {g_out~{idom}~{jdom}} ] ;
	    In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
          For j In{1:N}
            Galerkin { [  -2 * ( I[] * kDtn[] * OSRC_Aj[]{j,N,theta_branch} / keps[]^2 * {d phi~{j}~{idom}~{jdom}} ) , {d g_out~{idom}~{jdom}} ] ;
	      In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
            // Galerkin { [ 2 * I[] * k[] * OSRC_Aj[]{j,N,theta_branch} / keps[]^2 * ( I[] * kInf[] * {phi~{j}~{idom}~{jdom}}) , {g_out~{idom}~{jdom}} ] ; // EXPERIMENTAL
	    //   In BndSigma~{idom}~{jdom}; Jacobian JLin ; Integration I1 ; } // Do not add boundary contribution as phi is no longer dof here !?
          EndFor
        EndIf
      }
    }
    EndFor
  EndFor // loop on idom
}


Resolution {
    { Name DDM ;
    System {
      If(FULL_SOLUTION)
        { Name Full ; NameOfFormulation Full ; Type Complex; }
      EndIf
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
      If(FULL_SOLUTION)
	Generate[Full]; Solve[Full]; PostOperation[Full];
      EndIf

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
      //Setting the non homogeneous Dirichlet BC on GammaScat (part 1/2)
      Evaluate[1. #9];
      //Initialization (compute the right hand side)
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        //Setting the non homogeneous Dirichlet BC on GammaScat (part 2/2)
        UpdateConstraint[Helmholtz~{idom}, GammaScat~{idom}, Assign];
	Generate[Helmholtz~{idom}] ;
        Solve[Helmholtz~{idom}] ;
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
      //Setting homogeneous Dirichlet BC on every GammaScat~{idom}
      Evaluate[0. #9];
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        UpdateConstraint[Helmholtz~{idom}, GammaScat~{idom}, Assign];
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
      	  SolveAgain[Helmholtz~{idom}] ; 
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
          If( idom % MPI_Size == MPI_Rank ) // Alex
	  If(idom > 0 && idom < N_DOM-1)
      	    //Compute u on Omega_i (fast way)
      	    GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;
      	    SolveAgain[Helmholtz~{idom}] ; 
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
          If( idom % MPI_Size == MPI_Rank ) // Alex
      	  If(idom > 0 && idom < N_DOM-1)
      	    //Compute u on Omega_i (fast way)
      	    GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;
      	    SolveAgain[Helmholtz~{idom}] ;
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
        SolveAgain[Helmholtz~{idom}] ;
        PostOperation[u_ddm~{idom}] ;
      	//Error with Full/Exact solution
        If(FULL_SOLUTION || EXACT_SOLUTION)
      	  PostOperation[u_ddm_error~{idom}] ;
        EndIf
      EndFor
      SetCommWorld;

    }
  }
}

PostProcessing {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name u_ddm~{idom} ; NameOfFormulation DDM~{idom} ;
      PostQuantity {
        If(STORE_U_INIT)
	  { Name u~{idom} ; Value { Local { [ {u~{idom}} + u_init~{idom}[] ] ; In Omega~{idom}; Jacobian JVol ; } } }
        EndIf
        //If u_init is not stored then compute only the result of the DDM algorithm (not the "real" scattered field)
        If(!STORE_U_INIT)
	  { Name u~{idom} ; Value { Local { [ {u~{idom}}] ; In Omega~{idom}; Jacobian JVol ; } } }
        EndIf
      }
    }
  
    For jdom In {0:1}
      { Name g_out~{idom}~{jdom} ; NameOfFormulation ComputeG~{idom}~{jdom} ;
        PostQuantity {
          { Name g_out~{idom}~{jdom} ; Value { Local { [ {g_out~{idom}~{jdom}} ] ; In Sigma~{idom}~{jdom}; Jacobian JSur ; } } }
        }
      }
    EndFor

    { Name u_ddm_error~{idom} ; NameOfFormulation DDM~{idom} ;
      PostQuantity {
        If(FULL_SOLUTION)
          { Name err_full~{idom} ; Value { Local { [ {u~{idom}} + u_init~{idom}[]-{u_full} ] ; In Omega~{idom}; Jacobian JVol ; } } }
          { Name err_full_abs~{idom} ; Value { Local { [ Fabs[{u~{idom}} + u_init~{idom}[]-{u_full}] ] ; In Omega~{idom}; Jacobian JVol ; } } }
        EndIf
        If(EXACT_SOLUTION)
          { Name u_exact~{idom} ; Value { Local { [ uExact_Dirichlet[] ] ; In Omega~{idom}; Jacobian JVol ; } } }
          { Name err_exact~{idom} ; Value { Local { [ uExact_Dirichlet[] - {u~{idom}} - u_init~{idom}[]]; In Omega~{idom}; Jacobian JVol ; } } }
          { Name err_exact_abs~{idom} ; Value { Local { [ Norm[uExact_Dirichlet[] - {u~{idom}} - u_init~{idom}[]] ] ; In Omega~{idom}; Jacobian JVol ; } } }
        EndIf
        }
    }
    //Save on disk or in RAM field u at initialization (needed to obtain the scattered field)
    { Name u_init~{idom} ; NameOfFormulation DDM~{idom} ;
      PostQuantity {
        { Name u_init~{idom} ; Value { Local { [ {u~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
      }
    }
  EndFor
}

PostOperation {
//DDM 
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    //initialization
    { Name u_init~{idom} ; NameOfPostProcessing u_init~{idom};
      Operation {
        If(STORE_U_INIT && !WRITE_U_INIT)
  	  Print[ u_init~{idom}, OnElementsOf Omega~{idom}, StoreInField 2*N_DOM+idom] ;
        EndIf
        If(!STORE_U_INIT && WRITE_U_INIT)
	  Print[ u_init~{idom}, OnElementsOf Omega~{idom}, File Sprintf("u_init%g.pos",idom)] ;
        EndIf
        If(STORE_U_INIT && WRITE_U_INIT)
	  Print[ u_init~{idom}, OnElementsOf Omega~{idom}, File Sprintf("u_init%g.pos",idom), StoreInField 2*N_DOM+idom] ;
        EndIf
      }
    }
    //volume solution
    { Name u_ddm~{idom} ; NameOfPostProcessing u_ddm~{idom};
      Operation {
        Print[ u~{idom}, OnElementsOf Omega~{idom}, File Sprintf("u%g.pos",idom)] ;
      }
    }  
    // g_out
    For jdom In {0:1}
      { Name g_out~{idom}~{jdom} ; NameOfPostProcessing g_out~{idom}~{jdom};
        Operation {
	  If(!((idom == 0 && jdom == 0) || (idom == N_DOM-1 && jdom == 1)))
            Print[ g_out~{idom}~{jdom}, OnElementsOf Sigma~{idom}~{jdom}, StoreInField 2*idom+jdom-1/*, File Sprintf("gg%g_%g.pos",idom, jdom)*/] ;
	  EndIf
        }
      }
    EndFor
    //error
    { Name u_ddm_error~{idom} ; NameOfPostProcessing u_ddm_error~{idom};
      Operation {
       If(FULL_SOLUTION)
        Print[ err_full~{idom}, OnElementsOf Omega~{idom}, File Sprintf("err_full%g.pos",idom)] ;
        Print[ err_full_abs~{idom}, OnElementsOf Omega~{idom}, File Sprintf("err_full_abs%g.pos",idom)] ;
       EndIf
       If(EXACT_SOLUTION)
         Print[ u_exact~{idom}, OnElementsOf Omega~{idom}, File Sprintf("u_exact%g.pos", idom)] ;
         Print[ err_exact~{idom}, OnElementsOf Omega~{idom}, File Sprintf("err_exact%g.pos", idom)] ;
         Print[ err_exact_abs~{idom}, OnElementsOf Omega~{idom}, File Sprintf("err_exact_abs%g.pos", idom)] ;
       EndIf
      }
    }
  EndFor
}
