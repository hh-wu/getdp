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
}

Group{ // definition of some subsets of the regions defined by the user
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
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
  //u_init is the value of u at initialization (needed to compute the scattered field at the end)
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
    u_init~{idom}[] = ComplexScalarField[XYZ[]]{2*N_DOM+idom};
  EndFor

  F_SOURCE[] = V_SOURCE[]*#9;
  G_SOURCE[] = fGrad[]*#9;
}

//Dirichlet boundary condition (either homogeneous or inhomogeneous, depending on register #10)
Constraint{
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
    If(!PML)
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
    EndIf
    If(PML)
      { Name Dirichlet~{idom} ; Case { { Region Gama_D~{idom} ; Type Assign; Value f_diri[];} } }
      { Name Dirichlet0~{idom} ;
	Case {
	  { Region Gama_D0~{idom} ; Type Assign; Value 0.;} 
	  { Region GamaPml_D0~{idom}~{0} ; Type Assign; Value 0.; }
	  { Region GamaPml_D0~{idom}~{1} ; Type Assign; Value 0.; }
	}
      }
    EndIf
  EndFor
}


If (!PML)
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
EndIf

If (PML)
FunctionSpace {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);

    { Name Hgrad_u_Dirichlet2D~{idom} ; Type Form0 ;
      BasisFunction {
	{ Name sn ; NameOfCoef un ; Function BF_Node ;
	  // Support Region[{OmegaAll~{idom}, GamaAll~{idom}, Sigma~{idom}, Gama_D~{idom}}]; Entity NodesOf[All];
	  Support Region[{OmegaAll~{idom}, Gama_S~{idom}, Gama_N~{idom}, Gama_D~{idom}, Gama_D0~{idom}, Gama~{idom}, Sigma~{idom}, GamaPml_S~{idom}~{0}, GamaPml_N~{idom}~{0}, GamaPml_D0~{idom}~{0}, GamaPml_S~{idom}~{1}, GamaPml_N~{idom}~{1}, GamaPml_D0~{idom}~{1}, Gama_Point~{idom}/*, GamaDelta~{idom}~{0}, GamaDelta~{idom}~{1}*/}]; Entity NodesOf[All];
	  // Support Region[{OmegaAll~{idom}, GamaAll~{idom}, Gama_D~{idom}}]; Entity NodesOf[All];
	}
      }
      Constraint {
	{ NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet~{idom} ; }
	{ NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet0~{idom} ; }
      }
    }

    For jdom In {0:1}
    { Name Hgrad_u_Dirichlet2D_lm~{idom}~{jdom} ; Type Form0 ;
      BasisFunction {
	{ Name sn ; NameOfCoef un ; Function BF_Node ;
	  // Support Region[{OmegaPml~{idom}~{jdom},Sigma~{idom}~{jdom},Gama~{idom}~{jdom},Gama_N~{idom},Gama_S~{idom}}]; Entity NodesOf[All];
	  // Support Region[{OmegaPml~{idom}~{jdom}, GamaPmlAll~{idom}~{jdom}, Sigma~{idom}~{jdom}}]; Entity NodesOf[All];
	  Support Region[{OmegaPml~{idom}~{jdom}, GamaPml_S~{idom}~{jdom}, GamaPml_N~{idom}~{jdom}, GamaPml_D0~{idom}~{jdom}, Sigma~{idom}~{jdom}}]; Entity NodesOf[All];
	}
      }
      Constraint {
	{ NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet0~{idom} ; }
      }
    }

    { Name Hgrad_g_Dirichlet2D_lm~{idom}~{jdom} ; Type Form0 ;
      BasisFunction {
	{ Name sn ; NameOfCoef un ; Function BF_Node ;
	  Support Region[{Sigma~{idom}~{jdom}, GamaPml_D0~{idom}~{jdom}}]; Entity NodesOf[All];
	}
      }
      Constraint {
	{ NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet0~{idom} ; } // FIXME: necessary ??
      }
    }
    { Name Hgrad_gbb_Dirichlet2D_lm~{idom}~{jdom} ; Type Form0 ;
      BasisFunction {
	{ Name sn ; NameOfCoef un ; Function BF_Node ;
	  Support Region[{Sigma~{idom}~{jdom}, GamaPml_D0~{idom}~{jdom}}]; Entity NodesOf[All];
	}
      }
      Constraint {
	{ NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet0~{idom} ; } // FIXME: necessary ??
      }
    }
    EndFor
  EndFor // end loop idom
}
EndIf


If (!PML)
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
	// Galerkin { [ 0*G_SOURCE[], {Grad u~{idom}} ] ; // distributional sources -- THIS TERM CAUSES PROBLEMS (e.g. Marmousi), even when G_SOURCE=0
	// 	In Omega~{idom}; Jacobian JVol ; Integration I1 ; }

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

	  Galerkin{[ - ComplexScalarField[XYZ[]]{(2*(idom+N_DOM)+(jdom-1))%(2*N_DOM)}, {g_out~{idom}~{jdom}}] ;
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
EndIf
If (PML)
Formulation {
  For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
  // DDM with homogeneous (#10 == 0) or not (#10 == 1) dirichlet BC
  { Name DDM~{idom} ; Type FemEquation ;
    Quantity {
      { Name u~{idom} ; Type Local ; NameOfSpace Hgrad_u_Dirichlet2D~{idom} ;}
    }
    Equation {

      Galerkin { [ Dof{d u~{idom}}, {d u~{idom}} ] ;
      	In Omega~{idom} ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -k[]^2*Dof{u~{idom}}, {u~{idom}} ] ;
      	In Omega~{idom} ; Jacobian JVol ; Integration I1 ; }
      // Galerkin { [ -volSource[], {u} ] ;
      // 	In Omega ; Jacobian JVol ; Integration I1 ; }      

      Galerkin { [ -1., {u~{idom}} ] ;
      	In Gama_Point~{idom} ; Jacobian JLin ; Integration I1 ; }

      Galerkin{[Rotate[D[],0.,0.,-thetaList(idom)]* Dof{d u~{idom}}, {d u~{idom}}];
      	In OmegaPml~{idom}~{0}; Jacobian JVol; Integration I1;}
      Galerkin{[Rotate[D[],0.,0.,-thetaList(idom+1)]* Dof{d u~{idom}}, {d u~{idom}}];
      	In OmegaPml~{idom}~{1}; Jacobian JVol; Integration I1;}

      Galerkin{[-(kPml~{idom}~{0}[])^2*Kx[]*Ky[]*Kz[]*Dof{u~{idom}}, {u~{idom}}];
      	In OmegaPml~{idom}~{0}; Jacobian JVol; Integration I1;}
      Galerkin{[-(kPml~{idom}~{1}[])^2*Kx[]*Ky[]*Kz[]*Dof{u~{idom}}, {u~{idom}}];
      	In OmegaPml~{idom}~{1}; Jacobian JVol; Integration I1;}

      Galerkin { [ -I[]*k[]*Dof{u~{idom}}, {u~{idom}} ] ;
      	In Gama_S~{idom} ; Jacobian JSur ; Integration I1 ; }      
      Galerkin { [ -I[]*(kPml~{idom}~{0}[])*Dof{u~{idom}}, {u~{idom}} ] ;
      	In GamaPml_S~{idom}~{0} ; Jacobian JSur ; Integration I1 ; } 
      Galerkin { [ -I[]*(kPml~{idom}~{1}[])*Dof{u~{idom}}, {u~{idom}} ] ;
      	In GamaPml_S~{idom}~{1} ; Jacobian JSur ; Integration I1 ; }      

      // // // Delta functions -- integration by parts
      // // // Galerkin { [ Vector[-(#10 > 0. ? H~{idom}~{0}[]*2.*g_in~{idom}~{0}[] : 0.),0.,0.], {d u~{idom}} ] ;
      // // // 	In OmegaAll~{idom} ; Jacobian JVol ; Integration I1 ; }      
      // // Galerkin { [ Vector[ -(#10 > 0. ? Cos[theta~{idom}[]]*H~{idom}~{0}[]*2.*g_in~{idom}~{0}[] : 0.), -(#10 > 0. ? Sin[theta~{idom}[]]*H~{idom}~{0}[]*2.*g_in~{idom}~{0}[] : 0.), 0.], {d u~{idom}} ] ;
      // // // Galerkin { [ ( #10 > 0. ? Vector[ Cos[theta~{idom}[]]*H~{idom}~{0}[]*2.*g_in~{idom}~{0}[], Sin[theta~{idom}[]]*H~{idom}~{0}[]*2.*g_in~{idom}~{0}[], 0. ] : Vector[0.,0.,0.] ) ] } ;
      // // 	In OmegaAll~{idom} ; Jacobian JVol ; Integration I1 ; }   
      // // Galerkin { [ -(#10 > 0. ? H~{idom}~{0}[]*2.*g_in~{idom}~{0}[] : 0.), {u~{idom}} ] ;
      // // 	In Gama~{idom}~{0} ; Jacobian JSur ; Integration I1 ; }      
      // // Galerkin { [ (#10 > 0. ? H~{idom}~{0}[]*2.*g_in~{idom}~{0}[] : 0.), {u~{idom}} ] ;
      // // 	In Gama~{idom}~{1} ; Jacobian JSur ; Integration I1 ; }      
      
      // // // Galerkin { [ Vector[-(#11 > 0. ? H~{idom}~{1}[]*2.*g_in~{idom}~{1}[] : 0.),0.,0.], {d u~{idom}} ] ;
      // // // 	In OmegaAll~{idom} ; Jacobian JVol ; Integration I1 ; }      
      // // Galerkin { [ Vector[ -(#11 > 0. ? Cos[theta~{idom}[]]*H~{idom}~{1}[]*2.*g_in~{idom}~{1}[] : 0.), -(#11 > 0. ? Sin[theta~{idom}[]]*H~{idom}~{1}[]*2.*g_in~{idom}~{1}[] : 0.), 0.], {d u~{idom}} ] ;
      // // 	In OmegaAll~{idom} ; Jacobian JVol ; Integration I1 ; }      
      // // Galerkin { [ -(#11 > 0. ? H~{idom}~{1}[]*2.*g_in~{idom}~{1}[] : 0.), {u~{idom}} ] ;
      // // 	In Gama~{idom}~{0} ; Jacobian JSur ; Integration I1 ; }      
      // // Galerkin { [ (#11 > 0. ? H~{idom}~{1}[]*2.*g_in~{idom}~{1}[] : 0.), {u~{idom}} ] ;
      // // 	In Gama~{idom}~{1} ; Jacobian JSur ; Integration I1 ; }

      Galerkin { [ ( #10 > 0. ? 2.*g_in~{idom}~{0}[] : 0. ), {u~{idom}} ] ; // delta function
      	  In Sigma~{idom}~{0} ; Jacobian JSur ; Integration I1 ; }      

      Galerkin { [ ( #11 > 0. ? 2.*g_in~{idom}~{1}[] : 0. ), {u~{idom}} ] ; // delta function
      	  In Sigma~{idom}~{1} ; Jacobian JSur ; Integration I1 ; }
    }
  }

  // Compute the outgoing data
  For jdom In {0:1}
    { Name ComputeGbb~{idom}~{jdom} ; Type FemEquation ;
      Quantity {
	{ Name u~{idom}~{jdom} ; Type Local ; NameOfSpace Hgrad_u_Dirichlet2D_lm~{idom}~{jdom} ;}
	{ Name uD~{idom} ; Type Local ; NameOfSpace Hgrad_u_Dirichlet2D~{idom} ;}
	{ Name g_bb~{idom}~{jdom} ; Type Local ; NameOfSpace Hgrad_gbb_Dirichlet2D_lm~{idom}~{jdom} ;} // lambda -> g_out
      }
      Equation {
      //modified Helmholtz equation
	Galerkin{[ Rotate[D[],0.,0.,-thetaList(idom+jdom)]* Dof{Grad u~{idom}~{jdom}}, {Grad u~{idom}~{jdom}}];
	  In OmegaPml~{idom}~{jdom}; Jacobian JVol; Integration I1;}
	Galerkin{[-(kPml~{idom}~{jdom}[])^2*Kx[]*Ky[]*Kz[]*Dof{u~{idom}~{jdom}}, {u~{idom}~{jdom}}];
	  In OmegaPml~{idom}~{jdom}; Jacobian JVol; Integration I1;}

	Galerkin { [ -I[]*kPml~{idom}~{jdom}[]*Dof{u~{idom}~{jdom}}, {u~{idom}~{jdom}} ] ;
	  In GamaPml_S~{idom}~{jdom} ; Jacobian JSur ; Integration I1 ; }      

	Galerkin{[Dof{g_bb~{idom}~{jdom}}, {u~{idom}~{jdom}}];
	  In Sigma~{idom}~{jdom}; Jacobian JSur; Integration I1;}
	Galerkin{[Dof{u~{idom}~{jdom}}, {g_bb~{idom}~{jdom}}];
	  In Sigma~{idom}~{jdom}; Jacobian JSur; Integration I1;}
	Galerkin{[-{uD~{idom}}, {g_bb~{idom}~{jdom}}];
	  In Sigma~{idom}~{jdom}; Jacobian JSur; Integration I1;}
      }
    }

    { Name ComputeG~{idom}~{jdom} ; Type FemEquation ;
      Quantity {
	{ Name g_bb~{idom}~{jdom} ; Type Local ; NameOfSpace Hgrad_gbb_Dirichlet2D_lm~{idom}~{jdom} ;}
	{ Name g_out~{idom}~{jdom} ; Type Local ; NameOfSpace Hgrad_g_Dirichlet2D_lm~{idom}~{jdom} ;}
      }
      Equation {
	Galerkin { [ Dof{g_out~{idom}~{jdom}} , {g_out~{idom}~{jdom}} ] ;
	  In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
	If(jdom == 0)
	  // g_in LEFT (iterative solver) or 0 (initialization step)
	  Galerkin { [ (#10 > 0. ? g_in~{idom}~{0}[] : 0)  , {g_out~{idom}~{0}} ] ;
	    In Sigma~{idom}~{0}; Jacobian JSur ; Integration I1 ; }
	EndIf
	If(jdom == 1)
	  // g_in RIGHT (iterative solver) or 0 (initialization step)
	  Galerkin { [ (#11 > 0. ? g_in~{idom}~{1}[] : 0)  , {g_out~{idom}~{1}} ] ;
	    In Sigma~{idom}~{1}; Jacobian JSur ; Integration I1 ; }
	EndIf
	Galerkin { [ -{g_bb~{idom}~{jdom}} , {g_out~{idom}~{jdom}} ] ;
	  In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
      }
    }

    { Name ComputeGPrecond~{idom}~{jdom} ; Type FemEquation ;
      Quantity {
	{ Name g_out~{idom}~{jdom} ; Type Local ; NameOfSpace Hgrad_g_Dirichlet2D_lm~{idom}~{jdom} ;}
	{ Name g_bb~{idom}~{jdom} ; Type Local ; NameOfSpace Hgrad_gbb_Dirichlet2D_lm~{idom}~{jdom} ;}
      }
      Equation {
    	Galerkin { [ Dof{g_out~{idom}~{jdom}} , {g_out~{idom}~{jdom}} ] ;
    	  In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
    	Galerkin{[ - ComplexScalarField[XYZ[]]{2*idom+jdom-1}, {g_out~{idom}~{jdom}}] ;
    	  In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }

    	// Transmission condition (2.Su)
	Galerkin { [ -{g_bb~{idom}~{jdom}} , {g_out~{idom}~{jdom}} ] ;
    	    In Sigma~{idom}~{jdom}; Jacobian JSur ; Integration I1 ; }
      }
    }
    EndFor
  EndFor // loop on idom
}

EndIf


Resolution {
    { Name DDM ;
    System {
      If (!PML)
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	{ Name Helmholtz~{idom} ; NameOfFormulation DDM~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf }
	For jdom In {0:1}
	  { Name ComputeG~{idom}~{jdom} ; NameOfFormulation ComputeG~{idom}~{jdom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
	  { Name ComputeGPrecond~{idom}~{jdom} ; NameOfFormulation ComputeGPrecond~{idom}~{jdom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
	EndFor
      EndFor
      EndIf
      If (PML)
      For ii In {0: #ListOfDom()-1}
      	idom = ListOfDom(ii);
      	{ Name Helmholtz~{idom} ; NameOfFormulation DDM~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
      	For jdom In {0:1}
      	  { Name ComputeG~{idom}~{jdom} ; NameOfFormulation ComputeG~{idom}~{jdom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
      	  { Name ComputeGbb~{idom}~{jdom} ; NameOfFormulation ComputeGbb~{idom}~{jdom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
      	  { Name ComputeGPrecond~{idom}~{jdom} ; NameOfFormulation ComputeGPrecond~{idom}~{jdom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ;EndIf}
      	EndFor
      EndFor
      EndIf
    }
    Operation {
      If (EXTERNAL_VELOCITY_FIELD)
      	GmshRead[VELOCITY_FNAME, 999];
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
      	If(PML)
      	  Printf["Using PML transmission condition"];
      	EndIf

      	Printf["PRECOND_SWEEP: %g", PRECOND_SWEEP];
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
	If (SKIP_SAVE_SOLUTION)
	  Printf["!!! Solution will not be saved on disk !!!"];
	EndIf
      	If (EXT_TIME)  SystemCommand["rm time*.txt"]; EndIf
      EndIf
      Barrier;

      SetCommSelf;
      //setting homogeneous BC on transmission boundaries
      Evaluate[0. #10]; Evaluate[0. #11];
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
      	    If (PML)
      	      Generate[ComputeGbb~{idom}~{jdom}] ;
      	      Solve[ComputeGbb~{idom}~{jdom}] ;
      	    EndIf
      	    Generate[ComputeG~{idom}~{jdom}] ;
      	    Solve[ComputeG~{idom}~{jdom}] ;
      	  EndIf
      	EndFor
      	If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g factor", MPI_Rank]]; EndIf
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
      // A Barrier is mandatory to ensure that every process has finished the initialization
      Barrier;
      //Setting homogeneous Dirichlet BC on every GammaD~{idom}
      Evaluate[0. #9];
      For ii In {0: #ListOfDom()-1}
      	idom = ListOfDom(ii);
      	UpdateConstraint[Helmholtz~{idom}, GammaD~{idom}, Assign];
      EndFor

      If (PRECOND_SWEEP) // Generate the systems now, and generate RHS only during iterations (EXPERIMENTAL)
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
      EndIf
      SetCommWorld;

      // Launching iterative solver
      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART, {ListOfField()}, {ListOfNeighborField()}, {}]
      {
	SetCommSelf;
	//setting non homogeneous BC on transmission boundaries
	Evaluate[1. #10]; Evaluate[1. #11];
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
	      If(PML)
	        GenerateRHSGroup[ComputeGbb~{idom}~{jdom}, #{Sigma~{idom}~{jdom}}] ;
	        SolveAgain[ComputeGbb~{idom}~{jdom}] ;
	      EndIf
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
	VERBOSE = 0; // Developer's best friend ;)
	If (VERBOSE)
	  SystemCommand[Sprintf["echo 'Proc %g: ************** ready to start preconditioner *******************'", MPI_Rank]];
	  Barrier;
	EndIf
	SetCommSelf;

	nCuts = #ListOfCuts()-1;

	// Init the sweeps (first/last of each segment) with a broadcast -- not strictly necessary but makes the following of the code more symmetric
	// First init all first domains of the cuts, otherwise the pending backward bcast will block the start of the next cut
	For iCut In{0:nCuts-1}
	  For proc In {0:MPI_Size-1}
	    If (1 && proc == MPI_Rank && ProcOwnsDomain(ListOfCuts(iCut))) // first of cut
	      idom = ListOfCuts(iCut);
	      skipList = {(2*(idom + N_DOM)-1)%(2*N_DOM), (2*(idom + N_DOM)-2)%(2*N_DOM)}; // left
	      If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: >> Broadcasting domain %g -- first, in cut %g -- INIT -- skipListSize %g >> '", MPI_Rank, idom, iCut, #skipList()]]; EndIf
	      BroadcastFields[skipList()];
	    EndIf
	  EndFor
	EndFor

	// Then init the backward sweeps -- this order gives priority to the forward sweeps in case of 'conflict'
	For iCut In{0:nCuts-1}
	  For proc In {0:MPI_Size-1}
	    If ( 1 && proc == MPI_Rank && ProcOwnsDomain( ListOfCuts(iCut+1)%N_DOM ) ) // last of cut
	      idom = ListOfCuts(iCut+1)%N_DOM;
	      skipList = {2*idom%(2*N_DOM), (2*(idom + N_DOM)+1)%(2*N_DOM)};  // right
	      If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: << Broadcasting domain %g -- last, in cut %g -- INIT -- skipListSize %g <<' ", MPI_Rank, idom, iCut, #skipList()]]; EndIf
	      BroadcastFields[skipList()];
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
		idom = idom_f;
		skipList = {2*idom, (2*(idom + N_DOM)+1)%(2*N_DOM)}; // right
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: >> Broadcasting domain %g -- pre, forward -- skipListSize %g >>' ", MPI_Rank, idom, #skipList()]]; EndIf
		BroadcastFields[skipList()];

		Evaluate[1. #10]; Evaluate[0. #11];
		//Compute u on Omega_i (fast way)
		// GenerateRHSGroup[Helmholtz~{idom_f}, Sigma~{idom_f}] ;
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
		  If (PML)
		    GenerateRHSGroup[ComputeGbb~{idom_f}~{1}, #{Sigma~{idom_f}~{1}}] ;
		    SolveAgain[ComputeGbb~{idom_f}~{1}] ;
		  EndIf
		  // GenerateRHSGroup[ComputeGPrecond~{idom_f}~{1}, Sigma~{idom_f}~{1}] ;
		  GenerateRHSGroup[ComputeGPrecond~{idom_f}~{1}, #{Sigma~{idom_f}~{1}}] ;
		  SolveAgain[ComputeGPrecond~{idom_f}~{1}] ;
		EndIf
		// PostOperation[g_out~{idom_f}~{1}] ;
		PostOperation[g_out_pc~{idom_f}~{1}] ;
		If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g forward", MPI_Rank]]; EndIf
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: >> SOLVING problem %g forward -- skipListSize %g >>' ", MPI_Rank, idom_f, #skipList()]]; EndIf

		skipList = {(2*(idom + N_DOM)-1)%(2*N_DOM), (2*(idom + N_DOM)-2)%(2*N_DOM)}; // left
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: >> Broadcasting domain %g -- post, forward -- skipListSize %g >>' ", MPI_Rank, idom, #skipList()]]; EndIf
		BroadcastFields[skipList()];
	      EndIf

	      If( 1 && proc == MPI_Rank && ProcOwnsDomain(idom_b) ) // BACKWARD
		idom = idom_b;
		skipList = {(2*(idom + N_DOM)-1)%(2*N_DOM), (2*(idom + N_DOM)-2)%(2*N_DOM)}; // left
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: << Broadcasting domain %g -- pre, backward -- skipListSize %g <<' ", MPI_Rank, idom, #skipList()]]; EndIf
		BroadcastFields[skipList()];

		Evaluate[0. #10]; Evaluate[1. #11];
		//Compute u on Omega_i (fast way)
		// GenerateRHSGroup[Helmholtz~{idom_b}, Sigma~{idom_b}] ;
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
		  If (PML)
		    GenerateRHSGroup[ComputeGbb~{idom_b}~{0}, #{Sigma~{idom_b}~{0}}] ;
		    SolveAgain[ComputeGbb~{idom_b}~{0}] ;
		  EndIf
		  // GenerateRHSGroup[ComputeGPrecond~{idom_b}~{0}, Sigma~{idom_b}~{0}] ;
		  GenerateRHSGroup[ComputeGPrecond~{idom_b}~{0}, #{Sigma~{idom_b}~{0}}] ;
		  SolveAgain[ComputeGPrecond~{idom_b}~{0}] ;
		EndIf
		// PostOperation[g_out~{idom_b}~{0}] ;
		PostOperation[g_out_pc~{idom_b}~{0}] ;
		If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g backward", MPI_Rank]]; EndIf
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: << SOLVING problem %g backward -- skipListSize %g <<' ", MPI_Rank, idom_b, #skipList()]]; EndIf

		skipList = {2*idom, (2*(idom + N_DOM)+1)%(2*N_DOM)}; // right
		If (VERBOSE) SystemCommand[Sprintf["echo 'Proc %g: << Broadcasting domain %g -- post, backward -- skipListSize %g <<' ", MPI_Rank, idom, #skipList()]]; EndIf
		BroadcastFields[skipList()];
	      EndIf
	    EndFor
	  EndFor
	EndFor

	// Finalize communication (last/first domain of each segment)
	For iCut In{0:nCuts-1}
	  For proc In {0:MPI_Size-1}
	    If (1 && proc == MPI_Rank && ProcOwnsDomain(ListOfCuts(iCut))) // first of cut
	      idom = ListOfCuts(iCut);
	      skipList = {(2*(idom + N_DOM)-1)%(2*N_DOM), (2*(idom + N_DOM)-2)%(2*N_DOM)}; // left
	      If (VERBOSE) SystemCommand[Sprintf["echo ' << Proc %g: Broadcasting domain %g -- first, in cut %g -- FINALIZE -- skipListSize %g <<' ", MPI_Rank, idom, iCut, #skipList()]]; EndIf
	      BroadcastFields[skipList()];
	    EndIf

	    If ( 1 && proc == MPI_Rank && ProcOwnsDomain( ListOfCuts(iCut+1)%N_DOM ) ) // last of cut
	      idom = ListOfCuts(iCut+1)%N_DOM;
	      skipList = {2*idom, (2*(idom + N_DOM)+1)%(2*N_DOM)};  // right
	      If (VERBOSE) SystemCommand[Sprintf["echo ' >> Proc %g: Broadcasting domain %g -- last, in cut %g -- FINALIZE -- skipListSize %g >>' ", MPI_Rank, idom, iCut, #skipList()]]; EndIf
	      BroadcastFields[skipList()];
	    EndIf
	  EndFor
	EndFor
	SetCommWorld;
      EndIf
    }
    // //Now the solution G is stored in the PView of index ListOfDom()
    SetCommSelf;
    //Computing solution
    //setting non homogeneous BC on transmission boundaries
    Evaluate[1. #10]; Evaluate[1. #11];
    For ii In {0: #ListOfDom()-1}
      idom = ListOfDom(ii);
      // GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;
      GenerateRHSGroup[Helmholtz~{idom}, #{Sigma~{idom}}] ;

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

      If (!SKIP_SAVE_SOLUTION)
        PostOperation[u_ddm~{idom}] ;
      EndIf
      //Error with Full/Exact solution
      If(FULL_SOLUTION || EXACT_SOLUTION)
	PostOperation[u_ddm_error~{idom}] ;
      EndIf
    EndFor
    SetCommWorld;
  }
}
}


If (!PML)
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
    // EndFor
    // For jdom In {0:1}
      { Name g_out_pc~{idom}~{jdom} ; NameOfFormulation ComputeGPrecond~{idom}~{jdom} ;
	PostQuantity {
	  { Name g_out~{idom}~{jdom} ; Value { Local { [ {g_out~{idom}~{jdom}} ] ; In Sigma~{idom}~{jdom}; Jacobian JSur ; } } }
	}
      }
    EndFor

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
	  // If(!((idom == 0 && jdom == 0) || (idom == N_DOM-1 && jdom == 1)))
	  //   Print[ g_out~{idom}~{jdom}, OnElementsOf Sigma~{idom}~{jdom}, StoreInField 2*idom+jdom-1/*, File Sprintf("gg%g_%g.pos",idom, jdom)*/] ;
	  // EndIf
	  Print[ g_out~{idom}~{jdom}, OnElementsOf Sigma~{idom}~{jdom}, StoreInField (2*(idom+N_DOM)+(jdom-1))%(2*N_DOM)/*, File Sprintf("gg%g_%g.pos",idom, jdom)*/] ;
	}
      }
    // EndFor
    // For jdom In {0:1}
      { Name g_out_pc~{idom}~{jdom} ; NameOfPostProcessing g_out_pc~{idom}~{jdom};
	Operation {
	  // If(!((idom == 0 && jdom == 0) || (idom == N_DOM-1 && jdom == 1)))
	  //   Print[ g_out~{idom}~{jdom}, OnElementsOf Sigma~{idom}~{jdom}, StoreInField 2*idom+jdom-1/*, File Sprintf("gg%g_%g.pos",idom, jdom)*/] ;
	  // EndIf
	  Print[ g_out~{idom}~{jdom}, OnElementsOf Sigma~{idom}~{jdom}, StoreInField (2*(idom+N_DOM)+(jdom-1))%(2*N_DOM)/*, File Sprintf("gg%g_%g.pos",idom, jdom)*/] ;
	}
      }
    EndFor
  EndFor
}
EndIf

If (PML)
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
	  { Name g_out~{idom}~{jdom} ; Value { Local { [ {g_out~{idom}~{jdom}} ] ; In #{Sigma~{idom}~{jdom}}; Jacobian JSur ; } } }
	}
      }
      { Name g_out_pc~{idom}~{jdom} ; NameOfFormulation ComputeGPrecond~{idom}~{jdom} ;
	PostQuantity {
	  { Name g_out~{idom}~{jdom} ; Value { Local { [ {g_out~{idom}~{jdom}} ] ; In Sigma~{idom}~{jdom}; Jacobian JSur ; } } }
	}
      }
      { Name u_bb~{idom}~{jdom} ; NameOfFormulation ComputeGbb~{idom}~{jdom} ;
	PostQuantity {
	  { Name u_bb~{idom}~{jdom} ; Value { Local { [ {u~{idom}~{jdom}} ] ; In #{OmegaPml~{idom}~{jdom}}; Jacobian JSur ; } } }
	}
      }
    EndFor

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
	    Print[ g_out~{idom}~{jdom}, OnElementsOf Sigma~{idom}~{jdom}, StoreInField 2*idom+jdom-1, File Sprintf("gg%g_%g.pos",idom, jdom)/**/] ;
	  EndIf
	}
      }
      { Name g_out_pc~{idom}~{jdom} ; NameOfPostProcessing g_out_pc~{idom}~{jdom};
	Operation {
	  // If(!((idom == 0 && jdom == 0) || (idom == N_DOM-1 && jdom == 1)))
	  //   Print[ g_out~{idom}~{jdom}, OnElementsOf Sigma~{idom}~{jdom}, StoreInField 2*idom+jdom-1/*, File Sprintf("gg%g_%g.pos",idom, jdom)*/] ;
	  // EndIf
	  Print[ g_out~{idom}~{jdom}, OnElementsOf Sigma~{idom}~{jdom}, StoreInField (2*(idom+N_DOM)+(jdom-1))%(2*N_DOM)/*, File Sprintf("gg%g_%g.pos",idom, jdom)/**/] ;
	}
      }
      { Name u_bb~{idom}~{jdom} ; NameOfPostProcessing u_bb~{idom}~{jdom};
	Operation {
	    Print[ u_bb~{idom}~{jdom}, OnElementsOf OmegaPml~{idom}~{jdom}, File Sprintf("u_bb%g_%g.pos",idom, jdom)] ;
	}
      }
    EndFor
  EndFor
}
EndIf
