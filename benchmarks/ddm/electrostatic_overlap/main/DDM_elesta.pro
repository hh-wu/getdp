/* DDM for the electrostatic problem
Nodal formulation
*/

LAGRANGE = 0; // whether or not to use a Lagrangian formulation to impose Dirichlet conditions on the artificial interfaces

Group{ // definition of some subsets of the regions defined by the user
  For idom In {0:N_DOM-1}
    For iSide In {0:1}
      BndSigmaD~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide}, Not {GammaN~{idom}}];
      BndSigmaN~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide}, Not {GammaD~{idom}}];
      BndSigmaInf~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide}, Not {GammaN~{idom}, GammaD~{idom}}];

      TrGr~{idom}~{iSide} = ElementsOf[ Omega~{idom}, OnOneSideOf Sigma~{idom}~{iSide} ];
    EndFor
    TrGr~{idom} = Region[{TrGr~{idom}~{0}, TrGr~{idom}~{1}}];
  EndFor
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
  F_SOURCE[] = V_SOURCE[]*flag_homogen[];
}

//Dirichlet boundary condition (either homogeneous or inhomogeneous, depending on register #10)
Constraint{
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Dirichlet~{idom} ; Case { { Region GammaD~{idom} ; Value f_diri[];} } }
    If (!LAGRANGE)
      { Name DirichletSigma~{idom}~{0} ; Case { { Region Sigma~{idom}~{0} ; Value (#10 > 0 ? g_in~{idom}~{0}[] : 0. );} } }
      { Name DirichletSigma~{idom}~{1} ; Case { { Region Sigma~{idom}~{1} ; Value (#11 > 0 ? g_in~{idom}~{1}[] : 0. );} } }
    EndIf
  EndFor
}

FunctionSpace {
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
  { Name Hgrad_u~{idom} ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef un ; Function BF_Node ;
	Support Region[ {Omega~{idom}, Sigma~{idom}, SigmaIn~{idom}, BndSigma~{idom}, GammaD~{idom}, GammaN~{idom}} ] ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet~{idom} ; }
      If (!LAGRANGE)
        For j In {0:1}
          { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint DirichletSigma~{idom}~{j} ; }
        EndFor
      EndIf
    }
  }

  If (LAGRANGE)
    { Name Hgrad_lambda~{idom} ; Type Form0 ;
      BasisFunction {
        { Name sn ; NameOfCoef un ; Function BF_Node ;
	  Support Region[ {Sigma~{idom}, BndSigma~{idom}} ] ; Entity NodesOf[ All, Not GammaD ] ; }
      }
      Constraint {
        { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet~{idom} ; }
      }
    }
  EndIf

  For jdom In {0:1}
    { Name Hgrad_g_out~{idom}~{jdom}; Type Form0 ;
      BasisFunction {
	{ Name sn ; NameOfCoef un ; Function BF_Node ;
	  Support Region[ {SigmaIn~{idom}~{jdom}} ] ; Entity NodesOf[All, Not {GammaD}/**/];}
      }
    }
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
        If (LAGRANGE) { Name lambda~{idom} ; Type Local ; NameOfSpace Hgrad_lambda~{idom}; } EndIf
        For jdom In {0:1}
	  { Name g_out~{idom}~{jdom} ; Type Local ; NameOfSpace Hgrad_g_out~{idom}~{jdom}; }
        EndFor
      }
      Equation {
        Galerkin { [ Dof{Grad u~{idom}} , {Grad u~{idom}} ] ;
	  In Omega~{idom}; Jacobian JVol ; Integration I1 ; }
        Galerkin { [ -F_SOURCE[], {u~{idom}}] ;
	  In Omega~{idom}; Jacobian JVol ; Integration I1 ; }

	If (LAGRANGE)
	  // Lagrange multiplier for the Dirichlet BC on Sigma
          Galerkin { [ Dof{lambda~{idom}}, {u~{idom}}] ;
	    In Sigma~{idom}; Jacobian JSur ; Integration I1 ; }
          Galerkin { [ Dof{u~{idom}}, {lambda~{idom}}] ;
	    In Sigma~{idom}; Jacobian JSur ; Integration I1 ; }
          Galerkin { [ #10 > 0. ? -g_in~{idom}~{0}[] : 0., {lambda~{idom}}] ;
	    In Sigma~{idom}~{0}; Jacobian JSur ; Integration I1 ; }
          Galerkin { [ #11 > 0. ? -g_in~{idom}~{1}[] : 0., {lambda~{idom}}] ;
	    In Sigma~{idom}~{1}; Jacobian JSur ; Integration I1 ; }
	EndIf
      }
    }
    For jdom In {0:1}
      { Name ComputeG~{idom}~{jdom} ; Type FemEquation ;
        Quantity {
	  { Name u~{idom} ; Type Local ; NameOfSpace Hgrad_u~{idom}; }
	  { Name g_out~{idom}~{jdom} ; Type Local ; NameOfSpace Hgrad_g_out~{idom}~{jdom}; }
        }
        Equation {
	  Galerkin { [ Dof{g_out~{idom}~{jdom}} , {g_out~{idom}~{jdom}} ] ;
	    In SigmaIn~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	  Galerkin { [ -{u~{idom}} , {g_out~{idom}~{jdom}} ] ;
	    In SigmaIn~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	}
      }
    EndFor
  EndFor // loop on idom
}

Resolution {
    { Name DDM ;
    System {
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	{ Name Helmholtz~{idom} ; NameOfFormulation DDM~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
	For jdom In {0:1}
	  { Name ComputeG~{idom}~{jdom} ; NameOfFormulation ComputeG~{idom}~{jdom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
	EndFor
      EndFor
    }
    Operation {
      If (MPI_Rank == 0)
        If (LAGRANGE) Printf[" ** Imposing constraint on Sigma with Lagrange **"]; EndIf
        If (!LAGRANGE) Printf[" ** Imposing constraint on Sigma with constraint **"]; EndIf
      EndIf

      //Let the DDM game begin!
      SetCommSelf;
      //Setting the non homogeneous Dirichlet BC on GammaD (part 1/2)
      Evaluate[1. #9];
      //setting homogeneous BC on transmission boundaries
      Evaluate[0. #10]; Evaluate[0. #11];

      //Initialization (compute the right hand side)
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	//Setting the non homogeneous Dirichlet BC on GammaD (part 2/2)
	UpdateConstraint[Helmholtz~{idom}, GammaD~{idom}, Assign];
	Generate[Helmholtz~{idom}] ;
	Solve[Helmholtz~{idom}] ;
	For jdom In {0:1}
	  Generate[ComputeG~{idom}~{jdom}] ;
	  Solve[ComputeG~{idom}~{jdom}] ;
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
      // A Barrier is mandatory to ensure that every process has completed the initialization
      Barrier;
      //Setting homogeneous Dirichlet BC on every GammaD~{idom}
      Evaluate[0. #9];
      For ii In {0: #ListOfDom()-1}
      	idom = ListOfDom(ii);
      	UpdateConstraint[Helmholtz~{idom}, GammaD~{idom}, Assign];
      EndFor
      // Launching iterative solver
      SetCommWorld;

      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART, {ListOfField()}, {ListOfNeighborField()}, {}]
      {
      	SetCommSelf;
      	//setting non homogeneous BC on transmission boundaries
      	Evaluate[1. #10]; Evaluate[1. #11];
      	// Solve Helmholtz on each of my subdomain
      	For ii In {0: #ListOfDom()-1}
      	  idom = ListOfDom(ii);
      	  //Compute u on Omega_i (fast way)
	  If (LAGRANGE)
      	    GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;
      	    SolveAgain[Helmholtz~{idom}] ;
	  EndIf
	  If (!LAGRANGE)
	    UpdateConstraint[Helmholtz~{idom}, Region[Sigma~{idom}, Not GammaD~{idom}], Assign]; // The 'Region' argument seems ineffective ?? + slow ?
      	    GenerateRHSGroup[Helmholtz~{idom}, TrGr~{idom}] ;
	    SolveAgain[Helmholtz~{idom}] ;
	  EndIf
      	  //Compute the new g_out (fast way)
      	  For jdom In {0:1}
      	    GenerateRHSGroup[ComputeG~{idom}~{jdom}, SigmaIn~{idom}~{jdom}] ;
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
      	//End of iteration: every process will exchange their PView/Field
      }{ /*Preconditioner code here*/ }

      // //Now the solution G is stored in the PView of index ListOfDom()
      SetCommSelf;
      //Computing solution
      //setting non homogeneous BC on transmission boundaries
      Evaluate[1. #10]; Evaluate[1. #11];
      For ii In {0: #ListOfDom()-1}
      	idom = ListOfDom(ii);
	If (LAGRANGE)
      	  GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;
	EndIf
	If (!LAGRANGE)
	  UpdateConstraint[Helmholtz~{idom}, Region[Sigma~{idom}, Not GammaD~{idom}], Assign];
	  GenerateRHSGroup[Helmholtz~{idom}, TrGr~{idom}] ;
	EndIf
      	SolveAgain[Helmholtz~{idom}] ;
      	PostOperation[u_ddm~{idom}] ;
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
	  { Name u~{idom} ; Value { Local { [ {u~{idom}} + u_init~{idom}[] ] ; In Region[{Omega~{idom}, SigmaIn~{idom}}]; Jacobian JVol ; } } }
	EndIf
	//If u_init is not stored then compute only the result of the DDM algorithm (not the "real" scattered field)
	If(!STORE_U_INIT)
	  { Name u~{idom} ; Value { Local { [ {u~{idom}}] ; In Region[{Omega~{idom}, SigmaIn~{idom}}]; Jacobian JVol ; } } }
	EndIf
      }
    }

    For jdom In {0:1}
      { Name g_out~{idom}~{jdom} ; NameOfFormulation ComputeG~{idom}~{jdom} ;
    	PostQuantity {
    	  { Name g_out~{idom}~{jdom} ; Value { Local { [ {g_out~{idom}~{jdom}} ] ; In Region[{SigmaIn~{idom}~{jdom}}]; Jacobian JSur ; } } }
    	}
      }
    EndFor
    // For jdom In {0:1} // This version also works for basic Schwarz, and is actually simpler (does not require extra formulation for g_out)
    //   { Name g_out~{idom}~{jdom} ; NameOfFormulation DDM~{idom} ;
    // 	PostQuantity {
    // 	  { Name g_out~{idom}~{jdom} ; Value { Local { [ {u~{idom}} ] ; In Region[{SigmaIn~{idom}}]; Jacobian JSur ; } } }
    // 	}
    //   }
    // EndFor

    //Save on disk or in RAM field u at initialization (needed to obtain the scattered field)
    { Name u_init~{idom} ; NameOfFormulation DDM~{idom} ;
      PostQuantity {
	{ Name u_init~{idom} ; Value { Local { [ {u~{idom}} ] ; In Region[{Omega~{idom}}]; Jacobian JVol ; } } }
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
	If(STORE_U_INIT)
  	  Print[ u_init~{idom}, OnElementsOf Omega~{idom}, StoreInField 2*N_DOM+idom] ;
	EndIf
	If(WRITE_U_INIT)
	  Print[ u_init~{idom}, OnElementsOf Omega~{idom}, File Sprintf("u_init%g.pos",idom)] ;
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
	    Print[ g_out~{idom}~{jdom}, OnElementsOf Region[SigmaIn~{idom}~{jdom}, Not GammaD], StoreInField 2*idom+jdom-1] ;
	  EndIf
	}
      }
    EndFor
  EndFor
}
