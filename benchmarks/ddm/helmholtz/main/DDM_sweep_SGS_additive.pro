/* DDM for the Helmholtz Equation
Nodal formulation
Sweep preconditioner (Alex's)

This file implements the combined application of the DDM and double sweep.
This is experimental work and was not tested on many cases. It does not implement
the parallel version of the algorithm.

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
      - #12 : if > 0 application of the combined operator, else double sweep only
- if NON_CONFORM then MSH_SPLIT is set to 1
- if (FULL_SOLUTION || EXACT_SOLUTION) then STORE_U_INIT is set to 1
- if (FULL_SOLUTION && MSH_SPLIT) then FULL_SOLUTION is set to 0 (full solution needs the whole mesh)
*/

//Some precautions to avoir user error
Function{
  //u_init is needed to compute the error so ...
  // ...to avoid errors, the storage in memory of u_init (0th iteration) is forced
  If(FULL_SOLUTION || EXACT_SOLUTION)
    STORE_U_INIT = 1;
  EndIf

  If (OSRC && EMDA)
    OSRC = 1 ;
    EMDA = 0;
  EndIf
  If (OSRC && OO2)
    OSRC = 1 ;
    OO2 = 0;
  EndIf
  If (OO2 && EMDA)
    OO2 = 1 ;
    EMDA = 0;
  EndIf

  // auxiliary variables for the combined operator
  For idom In {0:N_DOM-1}
    If (idom % MPI_Size == MPI_Rank)
      // g_in_c~{idom}~{0}[Sigma~{idom}~{0}] = (1 ? ComplexScalarField[XYZ[]]{4*N_DOM+2*idom-2} : 0.); // xF
      // g_in_c~{idom}~{1}[Sigma~{idom}~{1}] = (1 ? ComplexScalarField[XYZ[]]{4*N_DOM+2*idom+1} : 0.);
      g_in_c~{idom}~{0}[Sigma~{idom}~{0}] = g_in~{idom}~{0}[]; // xF -- this variant converges slightly faster since it is even more 'Gauss-Seidel oriented': it is not using a copy of 
      g_in_c~{idom}~{1}[Sigma~{idom}~{1}] = g_in~{idom}~{1}[]; // the input data, but rather data updated by the other sweep after the sweeps have crossed ; hence behaves differently when used sequentially since the sweeps are performed sequentially, thus the backward sweep uses only updated data
    EndIf
  EndFor
}

Group{ // definition of some subsets of the regions defined by the user
  For idom In {0:N_DOM-1}
    For iSide In {0:1}
      BndSigmaD~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide}, Not {GammaN~{idom}, GammaInf~{idom}}];
      BndSigmaN~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide}, Not {GammaD~{idom}, GammaInf~{idom}}];
      BndSigmaInf~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide}, Not {GammaN~{idom}, GammaD~{idom}}];
    EndFor
  EndFor
}

// What follows is used to manage Dirichlet Boundary condition
Function{
  //Register #10 is reserved. Value inside is 0 if the boundary condition is homogeneous and equal to 1 if not homogeneous.
  //Value inside register #10 is changed during the Resolution process
  flag_homogen[] = #9;
  f_diri[] = uinc[]*flag_homogen[];
  F_SOURCE[] = V_SOURCE[]*#9;
}

//Dirichlet boundary condition (either homogeneous or inhomogeneous, depending on register #10)
Constraint{
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
    { Name Dirichlet~{idom} ; Case { { Region GammaD~{idom} ; Value f_diri[];} } }
    { Name Dirichlet0~{idom} ; Case { { Region GammaD0~{idom} ; Value 0.;} } }
    For jdom In {0:1}
      For j In {1:N}
	{ Name Dirichlet_phi~{j}~{idom}~{jdom} ;
	  Case {
	    { Region GammaD~{idom} ; Value 0*f_diri[];} // seems faster with 0*f_diri[] ??
	    { Region GammaD0~{idom} ; Value 0;}
	  }
	}
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
	Support Region[ {Omega~{idom}, GammaInf~{idom}, BndGammaInf~{idom}, Sigma~{idom}, BndSigma~{idom}, GammaD~{idom}, GammaD0~{idom}} ] ; Entity NodesOf[ All/*Omega~{idom}/**/ ] ; }
    }
    Constraint {
      { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet~{idom} ; }
      { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet0~{idom} ; }
    }
  }

  For jdom In {0:1}
    { Name Hgrad_g_out~{idom}~{jdom}; Type Form0 ;
      BasisFunction {
	{ Name sn ; NameOfCoef un ; Function BF_Node ;
	  Support Region[ {Sigma~{idom}~{jdom}} ] ; Entity NodesOf[All, Not {GammaD, GammaD0}/**/];} // FIXME: check this, test on waveguide.
      }
    }

    If (OSRC)
      For j In {1:N}
        { Name Hgrad_phi~{j}~{idom}~{jdom} ; Type Form0 ; // EXPERIMENTAL
	  BasisFunction {
	    { Name sn ; NameOfCoef un ; Function BF_Node ;
	      Support Region[ {Sigma~{idom}~{jdom}, BndSigmaInf~{idom}~{jdom}, BndSigmaN~{idom}~{jdom}} ] ; Entity NodesOf[All, Not {GammaD, GammaD0}/**/] ; } // exclude GammaD in case part of BndSigma intersects GammaD
	  }
	  Constraint { { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet_phi~{j}~{idom}~{jdom} ; } } // 20130418: Alex added this to help convergence for the waveguide ; UPDATE 20131029: this constraint MUST be there !! Even if GammaD is excluded ! -> HMMM, NOT SO SURE... -> in the cylinder test case, it makes a difference (a few more iterations, solution is correct)...
	}
      EndFor
    EndIf
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
      // same story, modified for SGS
      Galerkin { [ - (#20 > 0. ? g_in_c~{idom}~{0}[] : 0), {u~{idom}} ] ;
      	In Sigma~{idom}~{0}; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ - (#21 > 0. ? g_in_c~{idom}~{1}[] : 0), {u~{idom}} ] ;
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
	      In BndSigmaInf~{idom}~{jdom}; Jacobian JLin ; Integration I1 ; }
	    Galerkin { [ - OSRC_Bj[]{j,N,theta_branch} / keps[]^2 * Dof{d phi~{j}~{idom}~{jdom}} , {d phi~{j}~{idom}~{jdom}} ] ;
	      In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	    Galerkin { [ OSRC_Bj[]{j,N,theta_branch} / keps[]^2 * ( I[] * kInf[] * Dof{phi~{j}~{idom}~{jdom}}) , {phi~{j}~{idom}~{jdom}} ] ; // EXPERIMENTAL
	      In BndSigmaInf~{idom}~{jdom}; Jacobian JLin ; Integration I1 ; }
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
	/*
	  For j In{1:N}
	    Galerkin { [  -2 * ( I[] * kDtn[] * OSRC_Aj[]{j,N,theta_branch} / keps[]^2 * {d phi~{j}~{idom}~{jdom}}) , {d g_out~{idom}~{jdom}} ] ;
	      In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	    Galerkin { [ 2 * I[] * k[] * OSRC_Aj[]{j,N,theta_branch} / keps[]^2 * ( I[] * kInf[] * {phi~{j}~{idom}~{jdom}}) , {g_out~{idom}~{jdom}} ] ; // EXPERIMENTAL
	      In BndSigmaInf~{idom}~{jdom}; Jacobian JLin ; Integration I1 ; } // Do not add boundary contribution as phi is no longer dof here !?
	  EndFor
	/**/
	//*
	  For j In{1:N} // NEW VERSION -- EXPERIMENTAL: replace the div-grad term by its value in terms of u and phi (eq. (59) of the paper)
	    Galerkin { [  2 * ( I[] * kDtn[] * OSRC_Aj[]{j,N,theta_branch} / OSRC_Bj[]{j,N,theta_branch} * ({u~{idom}} - {phi~{j}~{idom}~{jdom}})) , {g_out~{idom}~{jdom}} ] ;
	      In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; } // no integration by parts in this case, => no boundary term
	  EndFor
	/**/
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

	  Galerkin{[ - ComplexScalarField[XYZ[]]{( 0*N_DOM + (2*(idom+N_DOM)+(jdom-1))%(2*N_DOM) ) }, {g_out~{idom}~{jdom}}] ;
	    In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }

	  /////////////////////////////// SGS //////////////////////////////////////
	  Galerkin{[ (#(20+jdom) ? g_in_c~{idom}~{jdom}[] : 0.), {g_out~{idom}~{jdom}}] ;
	    In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	  /////////////////////////////// SGS //////////////////////////////////////

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
	/*
	  For j In{1:N}
	    Galerkin { [  -2 * ( I[] * kDtn[] * OSRC_Aj[]{j,N,theta_branch} / keps[]^2 * {d phi~{j}~{idom}~{jdom}} ) , {d g_out~{idom}~{jdom}} ] ;
	      In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	    Galerkin { [ 2 * I[] * k[] * OSRC_Aj[]{j,N,theta_branch} / keps[]^2 * ( I[] * kInf[] * {phi~{j}~{idom}~{jdom}}) , {g_out~{idom}~{jdom}} ] ; // EXPERIMENTAL
	      In BndSigmaInf~{idom}~{jdom}; Jacobian JLin ; Integration I1 ; } // Do not add boundary contribution as phi is no longer dof here !?
	  EndFor
	/**/
	//*
	  For j In{1:N} // NEW VERSION -- EXPERIMENTAL
	    Galerkin { [  2 * ( I[] * kDtn[] * OSRC_Aj[]{j,N,theta_branch} / OSRC_Bj[]{j,N,theta_branch} * ({u~{idom}} - {phi~{j}~{idom}~{jdom}})) , {g_out~{idom}~{jdom}} ] ;
	      In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	  EndFor
	/**/
	EndIf
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
	  { Name ComputeGPrecond~{idom}~{jdom} ; NameOfFormulation ComputeGPrecond~{idom}~{jdom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
	EndFor
      EndFor
    }
    Operation {
      If (EXTERNAL_VELOCITY_FIELD)
      	GmshRead[VELOCITY_FNAME, 7*N_DOM];
      EndIf
      SetGlobalSolverOptions["-ksp_monitor"];
      SetGlobalSolverOptions["-mat_mumps_icntl_14 50"];

      If (MPI_Rank == 0)
	Printf["N_DOM: %g; #procs: %g", N_DOM, MPI_Size];
	If(EMDA)
	  Printf["Using EMDA transmission condition"];
	EndIf
	If(OSRC)
	  Printf["Using OSRC (Np = %g) transmission condition", N];
	EndIf
	If(OO2)
	  Printf["Using OO2 transmission condition"];
	EndIf

	Printf["PRECOND_SWEEP: %g", PRECOND_SWEEP];
	Printf["COMBINED_SWEEP: %g -- EXPERIMENTAL", COMBINED_SWEEP];
	If (PRECOND_SWEEP)
	  Printf["Number of cuts in preconditioner: %g", #ListOfCuts()-2];
	  If (MPI_Rank == 0)
	    Printf[" -- List of cuts --"];
	    For iCut In{0:#ListOfCuts()-1}
	      Printf["%g", ListOfCuts(iCut)];
	    EndFor
	    Printf[" -- List of cuts --"];
	  EndIf
	EndIf
	If (EXT_TIME)  SystemCommand["rm time*.txt"]; EndIf
      EndIf
      Barrier;

      SetCommSelf;
      //setting homogeneous BC on transmission boundaries
      Evaluate[0. #10]; Evaluate[0. #11];
      Evaluate[0. #20]; Evaluate[0. #21];
      //Setting the non homogeneous Dirichlet BC on GammaD (part 1/2)
      Evaluate[1. #9];

      //Initialization (compute the right hand side)
      If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g factor", MPI_Rank]]; EndIf
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	//Setting the non homogeneous Dirichlet BC on GammaD (part 2/2)
	UpdateConstraint[Helmholtz~{idom}, GammaD~{idom}, Assign];

	If (REUSE == 0)
	  Generate[Helmholtz~{idom}] ;
	  Solve[Helmholtz~{idom}] ;
	EndIf
	If (REUSE)
	  ifact = ListOfFacto(ii);
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
	EndIf

	If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g factor", MPI_Rank]]; EndIf
	For jdom In {0:1}
	  If( NbrRegions[Sigma~{idom}~{jdom}] )
	    Generate[ComputeG~{idom}~{jdom}] ;
	    Solve[ComputeG~{idom}~{jdom}] ;
	  EndIf
	EndFor
	If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g factor", MPI_Rank]]; EndIf
      EndFor

      // Compute the g_out in the RAM (right hand side of iterative solver)
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	For jdom In {0:1}
	  PostOperation[g_out~{idom}~{jdom}] ;
	EndFor
      EndFor
      // A Barrier is mandatory to ensure that every process has finished the initialization
      Barrier;
      //Setting homogeneous Dirichlet BC on every GammaD~{idom}
      Evaluate[0. #9];
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	UpdateConstraint[Helmholtz~{idom}, GammaD~{idom}, Assign];
      EndFor

      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	For jdom In {0:1}
	  If( NbrRegions[Sigma~{idom}~{jdom}] )
	    Generate[ComputeGPrecond~{idom}~{jdom}] ;
	    Solve[ComputeGPrecond~{idom}~{jdom}] ;
	  EndIf
	EndFor
	If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g factor", MPI_Rank]]; EndIf
      EndFor
      SetCommWorld;

      // Launching iterative solver
      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART, {ListOfField()}, {ListOfNeighborField()}, {}]
      {
	SetCommSelf;

	//setting non homogeneous BC on transmission boundaries
	Evaluate[1. #10]; Evaluate[1. #11];
	Evaluate[0. #20]; Evaluate[0. #21];

	// Solve Helmholtz on each of my subdomain
	For ii In {0: #ListOfDom()-1}
	  idom = ListOfDom(ii);
	  //Compute u on Omega_i (fast way)
	  // GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;
	  GenerateRHSGroup[Helmholtz~{idom}, #{Sigma~{idom}}] ; // FIXME: why do we need that syntax with PML ??

	  If (REUSE == 0)
	    SolveAgain[Helmholtz~{idom}] ;
	  EndIf
	  If(REUSE)
	    ifact = ListOfFacto(ii);
	    If (idom == ifact)
	      SolveAgain[Helmholtz~{idom}] ;
	    EndIf
	    If (idom != ifact)
	      SolveAgainWithOther[Helmholtz~{idom},Helmholtz~{ifact}] ;
	    EndIf
	  EndIf

	  //Compute the new g_out (fast way)
	  For jdom In {0:1}
	    If( NbrRegions[Sigma~{idom}~{jdom}] )
	      // If(PML)
	      //   GenerateRHSGroup[ComputeGbb~{idom}~{jdom}, #{Sigma~{idom}~{jdom}}] ;
	      //   SolveAgain[ComputeGbb~{idom}~{jdom}] ;
	      // EndIf
	      // GenerateRHSGroup[ComputeG~{idom}~{jdom}, Sigma~{idom}~{jdom}] ;
	      GenerateRHSGroup[ComputeG~{idom}~{jdom}, #{Sigma~{idom}~{jdom}}] ;
	      SolveAgain[ComputeG~{idom}~{jdom}] ;
	    EndIf
	  EndFor
	EndFor
	//Update my PView/Field
	For ii In {0: #ListOfDom()-1}
	  idom = ListOfDom(ii);
	  For jdom In {0:1}
	    PostOperation[g_out~{idom}~{jdom}] ;
	  EndFor
	    If (EXT_TIME) Barrier; SystemCommand[Sprintf["./../main/ddmProcTime.py %g operator", MPI_Rank]]; EndIf
	EndFor
	SetCommWorld;
      }
      {
	//--------------------
      // DOUBLE SWEEP PRECONDITIONER
      //--------------------

      If(PRECOND_SWEEP)
	SGS = 1;
	VERBOSE = 0; // Developer's best friend ;)
	If (VERBOSE)
	  SystemCommand[Sprintf["echo 'Proc %g: ************** ready to start preconditioner *******************'", MPI_Rank]];
	  Barrier;
	EndIf
	SetCommSelf;

	If (SGS)
	  Evaluate[1. #20]; Evaluate[1. #21];
	  // Take a copy of the input data
	  For ii In {0:#ListOfDom()-1}
      	    idom = ListOfDom(ii);
	    For jdom In {0:1}
	      PostOperation[g_copy~{idom}~{jdom}];
	    EndFor
	  EndFor
	EndIf

	nCuts = #ListOfCuts()-1; // the number of groups of domains (FIXME: not tested in the cyclic case)

	Evaluate[SGS #10]; Evaluate[SGS #11];
	Evaluate[0. #20]; Evaluate[0. #21];
	For ii In{0:nCuts}
	  For proc In {0:MPI_Size-1}
	    idom = ListOfCuts(ii);
	    If( 1 && proc == MPI_Rank && ProcOwnsDomain(idom) )
	      If (SGS)
	        //Compute u on Omega_i (fast way)
	        GenerateRHSGroup[Helmholtz~{idom}, #{Sigma~{idom}}] ;
	        SolveAgain[Helmholtz~{idom}] ;
		//Compute the new g_out (fast way), on both sides
		For jdom In{0:1}
		  If( NbrRegions[Sigma~{idom}~{jdom}] )
		    GenerateRHSGroup[ComputeGPrecond~{idom}~{jdom}, #{Sigma~{idom}~{jdom}}] ;
		    SolveAgain[ComputeGPrecond~{idom}~{jdom}] ;
		  EndIf
		  PostOperation[g_out_pc~{idom}~{jdom}] ;
		EndFor
		If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g operator", MPI_Rank]]; EndIf
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
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: >> Broadcasting domain %g -- pre, forward -- skipListSize %g >>' ", MPI_Rank, idom, #skipList()]]; EndIf
		BroadcastFields[skipList()];

		Evaluate[1. #10]; Evaluate[0. #11];
		Evaluate[0. #20]; Evaluate[SGS #21];

		//Compute u on Omega_i (fast way)
		GenerateRHSGroup[Helmholtz~{idom_f}, #{Sigma~{idom_f}}] ;

		If (REUSE == 0)
		  SolveAgain[Helmholtz~{idom_f}] ;
		EndIf
		If(REUSE)
		  ifact = ListOfFacto(idom_f);
		  If (idom_f == ifact)
		    SolveAgain[Helmholtz~{idom_f}] ;
		  EndIf
		  If (idom_f != ifact)
		    SolveAgainWithOther[Helmholtz~{idom_f},Helmholtz~{ifact}] ;
		  EndIf
		EndIf

		//Compute the new g_out (fast way)
		If( NbrRegions[Sigma~{idom_f}~{1}] )
		  GenerateRHSGroup[ComputeGPrecond~{idom_f}~{1}, #{Sigma~{idom_f}~{1}}] ;
		  SolveAgain[ComputeGPrecond~{idom_f}~{1}] ;
		EndIf
		PostOperation[g_out_pc~{idom_f}~{1}] ;
		If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g forward", MPI_Rank]]; EndIf
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: >> SOLVING problem %g forward -- skipListSize %g >>' ", MPI_Rank, idom_f, #skipList()]]; EndIf

		skipList = {(2*(idom_f + N_DOM)-1)%(2*N_DOM), (2*(idom_f + N_DOM)-2)%(2*N_DOM)}; // left
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: >> Broadcasting domain %g -- post, forward -- skipListSize %g >>' ", MPI_Rank, idom, #skipList()]]; EndIf
		BroadcastFields[skipList()];
	      EndIf

	      If( 1 && proc == MPI_Rank && ProcOwnsDomain(idom_b) ) // BACKWARD
		skipList = {(2*(idom_b + N_DOM)-1)%(2*N_DOM), (2*(idom_b + N_DOM)-2)%(2*N_DOM)}; // left
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: << Broadcasting domain %g -- pre, backward -- skipListSize %g <<' ", MPI_Rank, idom, #skipList()]]; EndIf
		BroadcastFields[skipList()];

		Evaluate[0. #10]; Evaluate[1. #11];
		Evaluate[SGS #20]; Evaluate[0. #21];

		//Compute u on Omega_i (fast way)
		GenerateRHSGroup[Helmholtz~{idom_b}, #{Sigma~{idom_b}}] ;

		If (REUSE == 0)
		  SolveAgain[Helmholtz~{idom_b}] ;
		EndIf
		If(REUSE)
		  ifact = ListOfFacto(idom_b);
		  If (idom_b == ifact)
		    SolveAgain[Helmholtz~{idom_b}] ;
		  EndIf
		  If (idom_b != ifact)
		    SolveAgainWithOther[Helmholtz~{idom_b},Helmholtz~{ifact}] ;
		  EndIf
		EndIf

		//Compute the new g_out (fast way)
		If( NbrRegions[Sigma~{idom_b}~{0}] )
		  GenerateRHSGroup[ComputeGPrecond~{idom_b}~{0}, #{Sigma~{idom_b}~{0}}] ;
		  SolveAgain[ComputeGPrecond~{idom_b}~{0}] ;
		EndIf
		PostOperation[g_out_pc~{idom_b}~{0}] ;
		If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g backward", MPI_Rank]]; EndIf
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: << SOLVING problem %g backward -- skipListSize %g <<' ", MPI_Rank, idom_b, #skipList()]]; EndIf

		skipList = {2*idom_b, (2*(idom_b + N_DOM)+1)%(2*N_DOM)}; // right
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: << Broadcasting domain %g -- post, backward -- skipListSize %g <<' ", MPI_Rank, idom, #skipList()]]; EndIf
		BroadcastFields[skipList()];
	      EndIf
	    EndFor
	  EndFor
	EndFor

	// Finalize communication (last/first domain of each segment)
	For iCut In{0:nCuts}
	  For proc In {0:MPI_Size-1}
	    If (1 && proc == MPI_Rank && ProcOwnsDomain(ListOfCuts(iCut))) // first of cut
	      BroadcastFields[];
	    EndIf
	  EndFor
	EndFor

	SetCommWorld;
      EndIf
      }

    //Now the solution G is stored in the PView of index ListOfDom()
    SetCommSelf;
    //Computing solution
    //setting non homogeneous BC on transmission boundaries + physical sources
    Evaluate[1. #9];
    Evaluate[1. #10]; Evaluate[1. #11];
    Evaluate[0. #20]; Evaluate[0. #21];
    For ii In {0: #ListOfDom()-1}
      idom = ListOfDom(ii);
      UpdateConstraint[Helmholtz~{idom}, GammaD~{idom}, Assign];
      // GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;
      GenerateRHS[Helmholtz~{idom}] ;

      If (REUSE == 0)
	SolveAgain[Helmholtz~{idom}] ;
      EndIf
      If(REUSE)
	ifact = ListOfFacto(ii);
	If (idom == ifact)
	  SolveAgain[Helmholtz~{idom}] ;
	EndIf
	If (idom != ifact)
	  SolveAgainWithOther[Helmholtz~{idom},Helmholtz~{ifact}] ;
	EndIf
      EndIf

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
	{ Name u~{idom} ; Value { Local { [ {u~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
      }
    }
    For jdom In {0:1}
      { Name g_out~{idom}~{jdom} ; NameOfFormulation ComputeG~{idom}~{jdom} ;
	PostQuantity {
	  { Name g_out~{idom}~{jdom} ; Value { Local { [ {g_out~{idom}~{jdom}} ] ; In Sigma~{idom}~{jdom}; Jacobian JSur ; } } }
	}
      }
      { Name g_out_pc~{idom}~{jdom} ; NameOfFormulation ComputeGPrecond~{idom}~{jdom} ;
	PostQuantity {
	  { Name g_out~{idom}~{jdom} ; Value { Local { [ {g_out~{idom}~{jdom}} ] ; In Sigma~{idom}~{jdom}; Jacobian JSur ; } } }
	}
      }
      { Name g_copy~{idom}~{jdom} ; NameOfFormulation ComputeG~{idom}~{jdom} ; // name of formulation is used only for convenience; no data from that function space is used here
	PostQuantity {
	  { Name g~{idom}~{jdom} ; Value { Local { [ ( #(20+jdom) ? g_in~{idom}~{jdom}[] : 0. ) ] ; In Sigma~{idom}~{jdom}; Jacobian JSur ; } } } //xF
	}
      }
    EndFor
  EndFor
}

PostOperation {
  //DDM
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
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
	  Print[ g_out~{idom}~{jdom}, OnElementsOf Sigma~{idom}~{jdom}, StoreInField (2*(idom+N_DOM)+(jdom-1))%(2*N_DOM)] ;
	}
      }
      { Name g_out_pc~{idom}~{jdom} ; NameOfPostProcessing g_out_pc~{idom}~{jdom};
	Operation {
	  Print[ g_out~{idom}~{jdom}, OnElementsOf Sigma~{idom}~{jdom}, StoreInField (2*(idom+N_DOM)+(jdom-1))%(2*N_DOM)] ;
	}
      }
      { Name g_copy~{idom}~{jdom} ; NameOfPostProcessing g_copy~{idom}~{jdom};
	Operation {
	  If(!((idom == 0 && jdom == 0) || (idom == N_DOM-1 && jdom == 1)))
	    Print[ g~{idom}~{jdom}, OnElementsOf Sigma~{idom}~{jdom}, StoreInField 4*N_DOM+(2*(idom+N_DOM)-2+3*jdom)%(2*N_DOM)] ; //xF
	  EndIf
	}
      }
    EndFor
  EndFor
}