/* DDM for the Maxwell Equation
Lagrange Multiplyers

some params:
  - FULL_SOLUTION: 1=>compute full solution + error, 0: don't

  - MSH_SPLIT: If == 1 then use of one different mesh per subdomain, allowing also non conform mesh. A root name of the mesh must be provided through variable MeshName, which is the relative path to the root-name.
Example : for mesh named circle_pie0.msh, circle_pie1.msh, ... in the directory of relative path ../circle_pie, the variable MeshName must be
  - MeshName = "../circle_pie/circle_pie"

Remarks:
- Register,  #10 #11 #12 are reserved !
- if FULL_SOLUTION && MSH_SPLIT then FULL_SOLUTION is set to 0 (impossible to compute a full solution without the whole mesh)
*/
Function{
  If(NON_CONFORM)
    MSH_SPLIT = 1;
  EndIf
  //full solution cannot be computed without the whole mesh
  If(FULL_SOLUTION && MSH_SPLIT)
    FULL_SOLUTION = 0;
  EndIf
}

Function{
  al[] = -1/(keps[]^2);
  be[] =  1/(keps[]^2);
}

Group{
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    TrGr~{idom} = ElementsOf[ Omega~{idom}, OnOneSideOf GammaScat~{idom} ];
  EndFor
}

Constraint{
  If (!PML)
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Dirichlet_e_homog~{idom} ;
      Case { { Region GammaC~{idom} ; Type Assign ; Value 0. ; } }
    }
  EndFor
  EndIf
  If (PML)
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Dirichlet_e_homog~{idom} ;
      Case {
	{ Region GammaC~{idom} ; Type Assign ; Value 0. ; }
	{ Region GammaC_Pml~{idom}~{0} ; Type Assign ; Value 0. ; } 
	{ Region GammaC_Pml~{idom}~{1} ; Type Assign ; Value 0. ; }
      }
    }
  EndFor
  EndIf
}


If (!PML)
FunctionSpace {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Hcurl_e~{idom}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{Omega~{idom}, GammaScat~{idom}, GammaInf~{idom}, Sigma~{idom}, GammaC~{idom}}] ; Entity EdgesOf[All]; } }
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog~{idom}; }
      }
    }

    { Name Hcurl_h~{idom}; Type Form1;
      BasisFunction { { Name sh; NameOfCoef he; Function BF_Edge;
	  Support Region[{Omega~{idom},GammaScat~{idom},GammaInf~{idom}, Sigma~{idom}}] ; Entity EdgesOf[All]; } }
      Constraint { { NameOfCoef he; EntityType EdgesOf ; NameOfConstraint Dirichlet_h~{idom}; } }
    }

    { Name Hcurl_lambda~{idom}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{GammaScat~{idom}}] ; Entity EdgesOf[All]; } }
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog~{idom}; }
      }
    }

    For iSide In {0:1}
    { Name Hcurl_g_out~{idom}~{iSide}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC~{idom}, GammaInf~{idom}/*, GammaSym~{idom}/**/}]; } } //!!!
    }
    EndFor

    If(OSRC)
      For iSide In {0:1}
        { Name Hcurl_r~{idom}~{iSide}; Type Form1;
          BasisFunction { { Name ser1; NameOfCoef eer1; Function BF_Edge;
	      Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC~{idom}, GammaInf~{idom}/*, GammaSym~{idom}/**/}]; } }
        }
        For j In {1:NP_OSRC}
	  { Name Hgrad_rho~{j}~{idom}~{iSide} ; Type Form0 ;
	    BasisFunction { { Name srh1; NameOfCoef erh1; Function BF_Node;
	        Support Region[{Sigma~{idom}~{iSide}}] ; Entity NodesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC~{idom}, GammaInf~{idom}/*, GammaSym~{idom}/**/}]; } }
	  }
	  { Name Hcurl_phi~{j}~{idom}~{iSide}; Type Form1;
	    BasisFunction { { Name sph1; NameOfCoef eph1; Function BF_Edge;
		Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC~{idom}, GammaInf~{idom}/*, GammaSym~{idom}/**/}]; } }
	  }
        EndFor
      EndFor
    EndIf

    If(JFLee)
      For iSide In {0:1}
	{ Name Hgrad_rho~{idom}~{iSide} ; Type Form0 ;
	  BasisFunction { { Name srh1; NameOfCoef erh1; Function BF_Node;
	      Support Region[{Sigma~{idom}~{iSide}}] ; Entity NodesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC~{idom}/*, GammaInf~{idom}, GammaSym~{idom}/**/}]; } }
	}
	{ Name Hcurl_phi~{idom}~{iSide}; Type Form1;
	  BasisFunction { { Name sph1; NameOfCoef eph1; Function BF_Edge;
	      Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC~{idom}/*, GammaInf~{idom}, GammaSym~{idom}/**/}]; } }
	}
      EndFor
    EndIf

  EndFor
}
EndIf

If (PML)
FunctionSpace {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Hcurl_e~{idom}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{OmegaAll~{idom}, GammaScat~{idom}, GammaInf~{idom}, Sigma~{idom}/*, GammaC~{idom},*/ GammaC_Pml~{idom}, GammaInf_Pml~{idom}}] ; Entity EdgesOf[All]; } } 
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog~{idom}; }
      }
    }

    { Name Hcurl_h~{idom}; Type Form1;
      BasisFunction { { Name sh; NameOfCoef he; Function BF_Edge;
	  Support Region[{OmegaAll~{idom}, GammaScat~{idom}, GammaInf~{idom}, Sigma~{idom}, GammaC~{idom}, GammaC_Pml~{idom}, GammaInf_Pml~{idom}}] ; Entity EdgesOf[All]; } } 
      Constraint { { NameOfCoef he; EntityType EdgesOf ; NameOfConstraint Dirichlet_h~{idom}; } }
    }

    { Name Hcurl_lambda~{idom}; Type Form1; // LM to enforce Dirichlet BC of the full problem
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{GammaScat~{idom}}] ; Entity EdgesOf[All]; } }
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog~{idom}; }
      }
    }

    For iSide In {0:1}
    { Name Hcurl_e_bb~{idom}~{iSide}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{OmegaPml~{idom}~{iSide}, GammaInf_Pml~{idom}, Sigma~{idom}, GammaC_Pml~{idom}}] ; Entity EdgesOf[All]; } }
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog~{idom}; }
      }
    }
    { Name Hcurl_lambda_bb~{idom}~{iSide}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
	  // Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaC_PML~{idom}, GammaInf_PML~{idom}/*, GammaSym~{idom}/**/}]; } } //!!!
	  Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[All]; } } //!!!
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog~{idom}; }
      }
    }
    { Name Hcurl_g_out~{idom}~{iSide}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
	  // Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaC_PML~{idom}, GammaInf_PML~{idom}/*, GammaSym~{idom}/**/}]; } } //!!!
	  Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[All]; } } //!!!
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog~{idom}; }
      }
    }
    EndFor

  EndFor
}
EndIf

If (!PML)
Formulation {
  //DDM with Lagrange Multipliers
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM_Maxwell~{idom}; Type FemEquation;
      Quantity {
	{ Name e~{idom}; Type Local; NameOfSpace Hcurl_e~{idom}; }
	{ Name h~{idom}; Type Local; NameOfSpace Hcurl_h~{idom}; }
	{ Name lambda~{idom}; Type Local; NameOfSpace Hcurl_lambda~{idom}; }
	If(OSRC)
	  For iSide In {0:1}
	    { Name r~{idom}~{iSide}; Type Local; NameOfSpace Hcurl_r~{idom}~{iSide};}
	    For j In {1:NP_OSRC}
	      { Name rho~{j}~{idom}~{iSide}; Type Local; NameOfSpace  Hgrad_rho~{j}~{idom}~{iSide};}
	      { Name phi~{j}~{idom}~{iSide}; Type Local; NameOfSpace  Hcurl_phi~{j}~{idom}~{iSide};}
	    EndFor
	  EndFor
	EndIf
	If(JFLee)
	  For iSide In {0:1}
	    { Name rho~{idom}~{iSide}; Type Local; NameOfSpace  Hgrad_rho~{idom}~{iSide};}
	    { Name phi~{idom}~{iSide}; Type Local; NameOfSpace  Hcurl_phi~{idom}~{iSide};}
	  EndFor
	EndIf
      }
      Equation {
	Galerkin { [ Dof{d e~{idom}} , {d e~{idom}} ];
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
        Galerkin { [ -k[]^2 * Dof{e~{idom}} , {e~{idom}} ];
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
	Galerkin { [ I[] * kInf[] * (N[]) /\ ( N[] /\ Dof{e~{idom}} ) , {e~{idom}} ];
	  In GammaInf~{idom}; Integration I1; Jacobian JSur; }

	// // //boundary condition
	Galerkin { [ Dof{lambda~{idom}} , {e~{idom}} ] ;
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ 0*Dof{lambda~{idom}} , {lambda~{idom}} ] ; // !!! DO NOT REMOVE UNLESS YOU KNOW WHAT YOU'RE DOING !!!
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ Dof{e~{idom}} , {lambda~{idom}} ] ;
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ (#10 > 0. ? einc[]: Vector[0,0,0]), {lambda~{idom}} ] ; // FIXME: sign of einc ?? -> use - for waveguide, + for scattering ?
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }

	//transmission condition
	If(SILVER_MULLER)
	  Galerkin { [ (#11 > 0. ? g_in~{idom}~{0}[] : Vector[0,0,0]) , {e~{idom}} ];
	    In Sigma~{idom}~{0}; Integration I1; Jacobian JSur; }
	Galerkin { [ (#12 > 0. ? g_in~{idom}~{1}[] : Vector[0,0,0]) , {e~{idom}} ];
	    In Sigma~{idom}~{1}; Integration I1; Jacobian JSur; }
	  Galerkin { [ I[] * kDtN[] * N[] /\ ( N[] /\ Dof{e~{idom}} ), {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	EndIf

	If(OSRC)
	  Galerkin { [ (#11 > 0. ? -g_in~{idom}~{0}[] : Vector[0,0,0]) , {r~{idom}~{0}} ];
	    In Sigma~{idom}~{0}; Integration I1; Jacobian JSur; }
	  Galerkin { [ (#12 > 0. ? -g_in~{idom}~{1}[] : Vector[0,0,0]) , {r~{idom}~{1}} ];
	    In Sigma~{idom}~{1}; Integration I1; Jacobian JSur; }
	  For iSide In {0:1}
	  Galerkin { [ -Dof{r~{idom}~{iSide}} , {e~{idom}} ];
	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	  Galerkin { [ (Dof{e~{idom}}), {r~{idom}~{iSide}} ];
	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	  Galerkin { [ al[]*Dof{d e~{idom}} , {d r~{idom}~{iSide}} ];
	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	  Galerkin { [(I[] / k[])*OSRC_C0[]{NP_OSRC,theta_branch}*Dof{r~{idom}~{iSide}} , {r~{idom}~{iSide}} ] ;
	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    For j In{1:NP_OSRC}
	      Galerkin { [ (I[] / k[] )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*Dof{d phi~{j}~{idom}~{iSide}} , {d r~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
	      Galerkin { [ (I[] / k[])*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*Dof{d rho~{j}~{idom}~{iSide}} , {r~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	      Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*al[]*Dof{d phi~{j}~{idom}~{iSide}} , {d phi~{j}~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	      Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*be[]*Dof{d rho~{j}~{idom}~{iSide}} , {phi~{j}~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian  JSur; }
	      Galerkin { [ Dof{phi~{j}~{idom}~{iSide}} , {phi~{j}~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	      Galerkin { [ -  Dof{r~{idom}~{iSide}} , {phi~{j}~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	      Galerkin { [ Dof{rho~{j}~{idom}~{iSide}} , {rho~{j}~{idom}~{iSide}} ];
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	      Galerkin { [ Dof{phi~{j}~{idom}~{iSide}} , {d rho~{j}~{idom}~{iSide}} ];
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    EndFor
	  EndFor
	EndIf
	If(JFLee)
	  Galerkin { [ (#11 > 0. ? I[]*k[]*g_in~{idom}~{0}[] : Vector[0,0,0]) , {e~{idom}} ];
	    In Sigma~{idom}~{0}; Integration I1; Jacobian JSur; }
	  Galerkin { [ (#12 > 0. ? I[]*k[]*g_in~{idom}~{1}[] : Vector[0,0,0]) , {e~{idom}} ];
	    In Sigma~{idom}~{1}; Integration I1; Jacobian JSur; }
	  For iSide In {0:1}
	    Galerkin { [ -I[]*k[]*Dof{phi~{idom}~{iSide}} , {e~{idom}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }

	    Galerkin { [ -Coef_Lee2[]*Dof{d rho~{idom}~{iSide}} , {phi~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian  JSur; }
            Galerkin { [(k[]^2)*Dof{phi~{idom}~{iSide}} , {phi~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
            Galerkin { [-(k[]^2)*Dof{e~{idom}} , {phi~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [ Coef_Lee1[]*Dof{d e~{idom}} , {d phi~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }

	    Galerkin { [ Dof{rho~{idom}~{iSide}} , {rho~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [ Dof{phi~{idom}~{iSide}} , {d rho~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	  EndFor
        EndIf

	// store magnetic field
	Galerkin { [ Dof{h~{idom}} , {h~{idom}} ] ;
	  In TrGr~{idom}; Jacobian JVol ; Integration I1 ; }
	Galerkin { [ 1/(I[]*omega[]*mu[]) * Dof{d e~{idom}}, {h~{idom}} ] ;
	  In TrGr~{idom}; Jacobian JVol ; Integration I1 ; }
      }
    }

    For iSide In{0:1}
      { Name ComputeIterationData~{idom}~{iSide}; Type FemEquation;
        Quantity {
  	  { Name g_out~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_g_out~{idom}~{iSide}; }
	  If(SILVER_MULLER)
	    { Name e~{idom}; Type Local;  NameOfSpace Hcurl_e~{idom}; }
	  EndIf
	  If(OSRC)
	    { Name r~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_r~{idom}~{iSide};}
	    For j In {1:NP_OSRC}
	      { Name rho~{j}~{idom}~{iSide}; Type Local;  NameOfSpace  Hgrad_rho~{j}~{idom}~{iSide};}
	      { Name phi~{j}~{idom}~{iSide}; Type Local;  NameOfSpace  Hcurl_phi~{j}~{idom}~{iSide};}
	    EndFor
	  EndIf
	  If(JFLee)
	    { Name rho~{idom}~{iSide}; Type Local; NameOfSpace  Hgrad_rho~{idom}~{iSide};}
	    { Name phi~{idom}~{iSide}; Type Local; NameOfSpace  Hcurl_phi~{idom}~{iSide};}
	  EndIf
        }
	Equation {
	  Galerkin { [ Dof{g_out~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ];
	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }

	  If(SILVER_MULLER)
  	    Galerkin { [ (#10 > 0. ? Vector[0,0,0] : g_in~{idom}~{iSide}[]) , {g_out~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [ 2*I[] * kDtN[] * N[] /\ ( N[] /\ {e~{idom}} ) , {g_out~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	  EndIf

	  If(OSRC)
	    Galerkin { [ (#10 > 0. ? Vector[0,0,0] : -g_in~{idom}~{iSide}[]) , {g_out~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [ (2 * I[] / k[])*OSRC_C0[]{NP_OSRC,theta_branch}*{r~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    For j In{1:NP_OSRC}
	      Galerkin { [ (2 * I[] / k[] )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*{d phi~{j}~{idom}~{iSide}} , {d g_out~{idom}~{iSide}} ] ;
	        In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
	      Galerkin { [ (2 * I[] / k[])*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*{d rho~{j}~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ] ;
	        In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    EndFor
	  EndIf
	  If(JFLee)
	    Galerkin { [ (#10 > 0. ? Vector[0,0,0] : g_in~{idom}~{iSide}[]) , {g_out~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [ -2 * { phi~{idom}~{iSide}} , { g_out~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
	  EndIf
        }
      }
    EndFor

    //////////////////////////// PRECOND_SWEEP //////////////////////////////////////
      For iSide In{0:1}
      { Name ComputeIterationDataPrecond~{idom}~{iSide}; Type FemEquation;
        Quantity {
    	  { Name g_out~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_g_out~{idom}~{iSide}; }
    	  If(SILVER_MULLER)
    	    { Name e~{idom}; Type Local;  NameOfSpace Hcurl_e~{idom}; }
    	  EndIf
    	  If(OSRC)
    	    { Name r~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_r~{idom}~{iSide};}
    	    For j In {1:NP_OSRC}
    	      { Name rho~{j}~{idom}~{iSide}; Type Local;  NameOfSpace  Hgrad_rho~{j}~{idom}~{iSide};}
    	      { Name phi~{j}~{idom}~{iSide}; Type Local;  NameOfSpace  Hcurl_phi~{j}~{idom}~{iSide};}
    	    EndFor
    	  EndIf
	  If(JFLee)
	      { Name rho~{idom}~{iSide}; Type Local; NameOfSpace  Hgrad_rho~{idom}~{iSide};}
	      { Name phi~{idom}~{iSide}; Type Local; NameOfSpace  Hcurl_phi~{idom}~{iSide};}
	  EndIf
        }
        Equation {
    	  Galerkin { [ Dof{g_out~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ];
    	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }

    	  If(SILVER_MULLER)
	    Galerkin{[ -ComplexVectorField[XYZ[]]{2*idom+iSide-1}, {g_out~{idom}~{iSide}}] ;
	      In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
    	    Galerkin { [ 2*I[] * kDtN[] * N[] /\ ( N[] /\ {e~{idom}} ) , {g_out~{idom}~{iSide}} ];
    	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	  EndIf
    	  If(OSRC)
	    Galerkin{[ -ComplexVectorField[XYZ[]]{2*idom+iSide-1}, {g_out~{idom}~{iSide}}] ;
	      In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
            Galerkin { [(2 * I[] / k[])*OSRC_C0[]{NP_OSRC,theta_branch}*{r~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ] ;
    	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
    	    For j In{1:NP_OSRC}
              Galerkin { [ (2 * I[] / k[] )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*{d phi~{j}~{idom}~{iSide}} , {d g_out~{idom}~{iSide}} ] ;
    	        In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
              Galerkin { [ (2 * I[] / k[])*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*{d rho~{j}~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ] ;
    	        In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
    	    EndFor
    	  EndIf
	  If(JFLee)
	    Galerkin { [ -ComplexVectorField[XYZ[]]{2*idom+iSide-1} , {g_out~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [ -2 * { phi~{idom}~{iSide}} , { g_out~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
	  EndIf

        }
      }
    EndFor
    //////////////////////////// PRECOND_SWEEP //////////////////////////////////////
  EndFor
}
EndIf

If (PML)
Formulation {
  //DDM with Lagrange Multipliers
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM_Maxwell~{idom}; Type FemEquation;
      Quantity {
	{ Name e~{idom}; Type Local; NameOfSpace Hcurl_e~{idom}; }
	{ Name h~{idom}; Type Local; NameOfSpace Hcurl_h~{idom}; }
	{ Name lambda~{idom}; Type Local; NameOfSpace Hcurl_lambda~{idom}; }
      }
      Equation {
	Galerkin { [ Dof{d e~{idom}} , {d e~{idom}} ];
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
        Galerkin { [ -k[]^2 * Dof{e~{idom}} , {e~{idom}} ];
	  In Omega~{idom}; Integration I1; Jacobian JVol; }

	Galerkin { [ I[] * kInf[] * (N[]) /\ ( N[] /\ Dof{e~{idom}} ) , {e~{idom}} ];
	  In GammaInf~{idom}; Integration I1; Jacobian JSur; }

	// Galerkin { [ Rotate[D[],0.,0.,-thetaList(idom)]*Dof{d e~{idom}} , {d e~{idom}} ];
	//   In OmegaPml~{idom}; Integration I1; Jacobian JVol; }

	// // // // // // Galerkin { [ D[]*Dof{d e~{idom}} , {d e~{idom}} ];
	// // // // // //   In OmegaPml~{idom}; Integration I1; Jacobian JVol; }

        // // // // // // Galerkin { [ -(kPml~{idom}~{0}[])^2 *Kx[]*Ky[]*Kz[] * Dof{e~{idom}} , {e~{idom}} ];
	// // // // // //   In OmegaPml~{idom}~{0}; Integration I1; Jacobian JVol; }
        // // // // // // Galerkin { [ -(kPml~{idom}~{1}[])^2 *Kx[]*Ky[]*Kz[] * Dof{e~{idom}} , {e~{idom}} ];
	// // // // // //   In OmegaPml~{idom}~{1}; Integration I1; Jacobian JVol; }


	Galerkin { [ nu[]*Dof{d e~{idom}} , {d e~{idom}} ];
	  In OmegaPml~{idom}; Integration I1; Jacobian JVol; }

        Galerkin { [ -eps[]*(kPml~{idom}~{0}[])^2 * Dof{e~{idom}} , {e~{idom}} ];
	  In OmegaPml~{idom}~{0}; Integration I1; Jacobian JVol; }
        Galerkin { [ -eps[]*(kPml~{idom}~{1}[])^2 * Dof{e~{idom}} , {e~{idom}} ];
	  In OmegaPml~{idom}~{1}; Integration I1; Jacobian JVol; }



	// Galerkin { [ I[] * kDtN[] * (N[]) /\ ( N[] /\ Dof{e~{idom}} ) , {e~{idom}} ];
	//   In GammaInf_Pml~{idom}; Integration I1; Jacobian JSur; }


	// // //boundary condition
	Galerkin { [ Dof{lambda~{idom}} , {e~{idom}} ] ;
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ 0*Dof{lambda~{idom}} , {lambda~{idom}} ] ; // !!! DO NOT REMOVE UNLESS YOU KNOW WHAT YOU'RE DOING !!!
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ Dof{e~{idom}} , {lambda~{idom}} ] ;
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ (#10 > 0. ? einc[]: Vector[0,0,0]), {lambda~{idom}} ] ; // FIXME: sign of einc ?? -> use - for waveguide, + for scattering ?
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }

	// delta functions
	Galerkin { [ (#11 > 0. ? 2.*g_in~{idom}~{0}[] : Vector[0,0,0]) , {e~{idom}} ];
	  In Sigma~{idom}~{0}; Integration I1; Jacobian JSur; }
	Galerkin { [ (#12 > 0. ? 2.*g_in~{idom}~{1}[] : Vector[0,0,0]) , {e~{idom}} ];
	  In Sigma~{idom}~{1}; Integration I1; Jacobian JSur; }

	// store magnetic field
	Galerkin { [ Dof{h~{idom}} , {h~{idom}} ] ;
	  In TrGr~{idom}; Jacobian JVol ; Integration I1 ; }
	Galerkin { [ 1/(I[]*omega[]*mu[]) * Dof{d e~{idom}}, {h~{idom}} ] ;
	  In TrGr~{idom}; Jacobian JVol ; Integration I1 ; }
      }
    }

    For iSide In{0:1}
    { Name ComputeIterationDataBb~{idom}~{iSide}; Type FemEquation; // apply black box to Dirichlet data
        Quantity {
  	  { Name lambda_bb~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_lambda_bb~{idom}~{iSide}; }
	  { Name e_bb~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_e_bb~{idom}~{iSide}; }
	  { Name eD~{idom}; Type Local;  NameOfSpace Hcurl_e~{idom}; }
        }
	Equation {

	  // // // // // Galerkin { [ Rotate[D[],0.,0.,-thetaList(idom)]*Dof{d e_bb~{idom}~{iSide}} , {d e_bb~{idom}~{iSide}} ]; // FIXME: modify equations in PMLs
	  // // // // //   In OmegaPml~{idom}~{iSide}; Integration I1; Jacobian JVol; }
	  // // // // // Galerkin { [ -(kPml~{idom}~{iSide}[])^2 *Kx[]*Ky[]*Kz[] * Dof{e_bb~{idom}~{iSide}} , {e_bb~{idom}~{iSide}} ];
	  // // // // //   In OmegaPml~{idom}~{iSide}; Integration I1; Jacobian JVol; }
	  // // Galerkin { [ Dof{d e_bb~{idom}~{iSide}} , {d e_bb~{idom}~{iSide}} ]; // FIXME: modify equations in PMLs
	  // //   In OmegaPml~{idom}~{iSide}; Integration I1; Jacobian JVol; }
	  // // Galerkin { [ -(k[])^2 * Dof{e_bb~{idom}~{iSide}} , {e_bb~{idom}~{iSide}} ];
	  // //   In OmegaPml~{idom}~{iSide}; Integration I1; Jacobian JVol; }

	Galerkin { [ nu[]*Dof{d e_bb~{idom}~{iSide}} , {d e_bb~{idom}~{iSide}} ];
	  In OmegaPml~{idom}; Integration I1; Jacobian JVol; }

        Galerkin { [ -eps[]*(kPml~{idom}~{0}[])^2 * Dof{e_bb~{idom}~{iSide}} , {e_bb~{idom}~{iSide}} ];
	  In OmegaPml~{idom}~{0}; Integration I1; Jacobian JVol; }
        Galerkin { [ -eps[]*(kPml~{idom}~{1}[])^2 * Dof{e_bb~{idom}~{iSide}} , {e_bb~{idom}~{iSide}} ];
	  In OmegaPml~{idom}~{1}; Integration I1; Jacobian JVol; }


	// Galerkin { [ I[] * kDtN[] * (N[]) /\ ( N[] /\ Dof{e_bb~{idom}~{iSide}} ) , {e_bb~{idom}~{iSide}} ];
	//   In GammaInf_Pml~{idom}~{iSide}; Integration I1; Jacobian JSur; }

	// // //boundary condition
	Galerkin { [ Dof{lambda_bb~{idom}~{iSide}} , {e_bb~{idom}~{iSide}} ] ;
	  In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ 0*Dof{lambda_bb~{idom}~{iSide}} , {lambda_bb~{idom}~{iSide}} ] ; // !!! DO NOT REMOVE UNLESS YOU KNOW WHAT YOU'RE DOING !!!
	  In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ Dof{e_bb~{idom}~{iSide}} , {lambda_bb~{idom}~{iSide}} ] ;
	  In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ -{eD~{idom}}, {lambda_bb~{idom}~{iSide}} ] ;
	  In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }

        }
      }
      { Name ComputeIterationData~{idom}~{iSide}; Type FemEquation;
        Quantity {
  	  { Name g_out~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_g_out~{idom}~{iSide}; }
  	  { Name lambda_bb~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_lambda_bb~{idom}~{iSide}; }
        }
	Equation {
	  Galerkin { [ Dof{g_out~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ];
	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	  Galerkin { [ (#10 > 0. ? Vector[0,0,0] : g_in~{idom}~{iSide}[]) , {g_out~{idom}~{iSide}} ];
	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	  Galerkin { [ -{lambda_bb~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ];
	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
        }
      }
    EndFor

    //////////////////////////// PRECOND_SWEEP //////////////////////////////////////
      For iSide In{0:1}
    { Name ComputeIterationDataPrecond~{idom}~{iSide}; Type FemEquation;
        Quantity {
    	  { Name g_out~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_g_out~{idom}~{iSide}; }
  	  { Name lambda_bb~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_lambda_bb~{idom}~{iSide}; }
        }
        Equation {
    	  Galerkin { [ Dof{g_out~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ];
    	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	  Galerkin{[ -ComplexVectorField[XYZ[]]{2*idom+iSide-1}, {g_out~{idom}~{iSide}}] ;
	    In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
	  Galerkin { [ -{lambda_bb~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ];
	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
        }
      }
    EndFor
    //////////////////////////// PRECOND_SWEEP //////////////////////////////////////
  EndFor
}
EndIf



Resolution {
  { Name DDM;
    System {
      If(FULL_SOLUTION)
	{ Name Lag; NameOfFormulation Maxwell_Lagrange ; Type Complex; }
      EndIf
      If (!PML)
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	{ Name Maxw~{idom}; NameOfFormulation DDM_Maxwell~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
	For iSide In{0:1}
  	  { Name ComputeG~{idom}~{iSide}; NameOfFormulation ComputeIterationData~{idom}~{iSide} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
	  { Name ComputeGPrecond~{idom}~{iSide}; NameOfFormulation ComputeIterationDataPrecond~{idom}~{iSide} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
	EndFor
      EndFor
      EndIf
      If (PML)
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	{ Name Maxw~{idom}; NameOfFormulation DDM_Maxwell~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
	For iSide In{0:1}
  	  { Name ComputeG~{idom}~{iSide}; NameOfFormulation ComputeIterationData~{idom}~{iSide} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
  	  { Name ComputeGbb~{idom}~{iSide}; NameOfFormulation ComputeIterationDataBb~{idom}~{iSide} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
	  { Name ComputeGPrecond~{idom}~{iSide}; NameOfFormulation ComputeIterationDataPrecond~{idom}~{iSide} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
	EndFor
      EndFor
      EndIf
    }
    Operation {

      If (MPI_Rank == 0)
	Printf["N_DOM: %g; #procs: %g", N_DOM, MPI_Size];
        If(SILVER_MULLER)
	  Printf["  Using SM as transmission condition "];
        EndIf
        If(OSRC)
	  Printf["  Using OSRC (Np = %g) as transmission condition ", NP_OSRC];
        EndIf
        If(JFLee)
	  Printf["  Using JFLee as transmission condition "];
        EndIf
        If(PML)
	  Printf["  Using PML as transmission condition "];
        EndIf
	Printf("  Relative tolerance: %g", TOL);
	Printf("  PRECOND_SWEEP: %g", PRECOND_SWEEP);
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
	SystemCommand["rm time*.txt"];
      EndIf
      Barrier;

      //DDM
      SetCommSelf;
      // Compute rhs for Krylov -- physical sources only
      Evaluate[1. #10];
      Evaluate[0. #11]; Evaluate[0. #12];
      If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g factor", MPI_Rank]]; EndIf

      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	If(MPI_Rank == idom%MPI_Size)
	  Generate[Maxw~{idom}];
	  Solve[Maxw~{idom}];
	  If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g factor", MPI_Rank]]; EndIf
	  For iSide In{0:1}
      	    If (PML)
      	      Generate[ComputeGbb~{idom}~{iSide}] ;
      	      Solve[ComputeGbb~{idom}~{iSide}] ;
      	    EndIf
	    Generate[ComputeG~{idom}~{iSide}];
	    Solve[ComputeG~{idom}~{iSide}];
	  EndFor
	  // PostOperation[DDM_INIT~{idom}];
	  If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g factor", MPI_Rank]]; EndIf
	EndIf
      EndFor

      For ii In {0: #ListOfDom()-1}
      	idom = ListOfDom(ii);
      	If(MPI_Rank == idom%MPI_Size)
	  For iSide In{0:1}
      	    PostOperation[g_out~{idom}~{iSide}]; // Compute g_in for next iteration
	  EndFor
      	EndIf
      EndFor

      //Update "Dirichlet" Boundary condition (homogenous now) -- FIXME Alex: ALL physical sources should be canceled, not only Dirichlet BCs
      Evaluate[0. #10];
      For ii In {0: #ListOfDom()-1}
      	idom = ListOfDom(ii) ;
      	// If(MPI_Rank == idom%MPI_Size)
      	  GenerateRHSGroup[Maxw~{idom}, GammaScat~{idom}] ;
      	// EndIf
      EndFor

      If (PRECOND_SWEEP) // Generate now, and use GenerateRHSGroup in sweep loop
        Evaluate[1. #11]; Evaluate[1. #12];
        For ii In {0: #ListOfDom()-1}
      	  idom = ListOfDom(ii);
	  // If(MPI_Rank == idom%MPI_Size)
      	  For iSide In{0:1}
      	    Generate[ComputeGPrecond~{idom}~{iSide}];
      	    Solve[ComputeGPrecond~{idom}~{iSide}];
          EndFor
      	  // EndIf
	  If (EXT_TIME) SystemCommand[Sprintf["./../main/ddmProcTime.py %g factor", MPI_Rank]]; EndIf
        EndFor
      EndIf											
      SetCommWorld;
      Barrier;

      //krylov
      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART, {ListOfField()}, {ListOfNeighborField()},{}] {
      	SetCommSelf;
      	Evaluate[1. #11]; Evaluate[1. #12];
      	For ii In {0: #ListOfDom()-1}
      	  idom = ListOfDom(ii);
      	// If(MPI_Rank == idom%MPI_Size)
      	  GenerateRHSGroup[Maxw~{idom}, Sigma~{idom}];
      	  SolveAgain[Maxw~{idom}];
      	  For iSide In{0:1}
	      If(PML)
	        GenerateRHSGroup[ComputeGbb~{idom}~{iSide}, #{Sigma~{idom}~{iSide}}] ;
	        SolveAgain[ComputeGbb~{idom}~{iSide}] ;
	      EndIf
	    GenerateRHSGroup[ComputeG~{idom}~{iSide}, #{Sigma~{idom}~{iSide}}];
      	    SolveAgain[ComputeG~{idom}~{iSide}];
      	  EndFor
      	  // EndIf
      	EndFor
      	//Update view (must be done after all resolutions)
      	For ii In {0: #ListOfDom()-1}
      	  idom = ListOfDom(ii) ;
      	  // If(MPI_Rank == idom%MPI_Size)
      	    For iSide In{0:1}
      	      PostOperation[g_out~{idom}~{iSide}] ;
      	    EndFor
	    If (EXT_TIME) Barrier; SystemCommand[Sprintf["./../main/ddmProcTime.py %g operator", MPI_Rank]]; EndIf
      	  // EndIf
      	EndFor
      	SetCommWorld;
	Barrier;
      }
      {
      	If (PRECOND_SWEEP)
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

      		Evaluate[1. #11]; Evaluate[0. #12];
      	        //Compute u on Omega_i (fast way)
      	        GenerateRHSGroup[Maxw~{idom_f}, Sigma~{idom_f}] ;
      	        SolveAgain[Maxw~{idom_f}] ;
      	        //Compute the new g_out (fast way)

	      If(PML)
	        GenerateRHSGroup[ComputeGbb~{idom_f}~{1}, #{Sigma~{idom_f}~{1}}] ;
	        SolveAgain[ComputeGbb~{idom_f}~{1}] ;
	      EndIf


      	        GenerateRHSGroup[ComputeGPrecond~{idom_f}~{1}, Sigma~{idom_f}~{1}] ;
      	        SolveAgain[ComputeGPrecond~{idom_f}~{1}] ;
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

      		Evaluate[0. #11]; Evaluate[1. #12];
      	        //Compute u on Omega_i (fast way)
      	        GenerateRHSGroup[Maxw~{idom_b}, Sigma~{idom_b}] ;
      	        SolveAgain[Maxw~{idom_b}] ;
      	        //Compute the new g_out (fast way)

	      If(PML)
	        GenerateRHSGroup[ComputeGbb~{idom_b}~{0}, #{Sigma~{idom_b}~{0}}] ;
	        SolveAgain[ComputeGbb~{idom_b}~{0}] ;
	      EndIf

      	        GenerateRHSGroup[ComputeGPrecond~{idom_b}~{0}, Sigma~{idom_b}~{0}] ;
      	        SolveAgain[ComputeGPrecond~{idom_b}~{0}] ;
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
	Barrier;
      	SetCommWorld;
	Barrier;
      	EndIf
      }
      SetCommSelf;

      //building solution in volume after convergence; using both physical and artificial sources => no need to sum afterwards
      Evaluate[1. #10];
      Evaluate[1. #11]; Evaluate[1. #12];
      For ii In {0: #ListOfDom()-1}
      	idom = ListOfDom(ii);
      	// If(MPI_Rank == idom%MPI_Size)
      	  GenerateRHSGroup[Maxw~{idom}, Region[{Sigma~{idom}, GammaScat~{idom}}]];
      	  SolveAgain[Maxw~{idom}] ;
      	PostOperation[DDM~{idom}] ;
      	// EndIf
      EndFor
      SetCommWorld;
    }
  }
}


If (!PML)
PostProcessing {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM_Maxwell_INIT~{idom} ; NameOfFormulation DDM_Maxwell~{idom} ;
      Quantity {
	// { Name e~{idom} ; Value { Local { [ {e~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	// { Name h~{idom} ; Value { Local { [ {h~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	// { Name j~{idom} ; Value { Local { [ N[] /\ ({h~{idom}}) ] ; In GammaScat; Jacobian JSur ; } } }
	// { Name h_vol~{idom} ; Value { Local { [ {h~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name e_vol_init~{idom} ; Value { Local { [ {e~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name n~{idom} ; Value { Local { [ N[] ] ; In Region[{GammaScat~{idom}, GammaInf~{idom}, GammaC, Sigma~{idom}}]; Jacobian JSur ; } } }
      }
    }

    { Name DDM_Maxwell~{idom} ; NameOfFormulation DDM_Maxwell~{idom} ;
      Quantity {
	// { Name e~{idom} ; Value { Local { [ {e~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	{ Name h~{idom} ; Value { Local { [ {h~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	// { Name j~{idom} ; Value { Local { [ N[] /\ ({h~{idom}}) ] ; In GammaScat; Jacobian JSur ; } } }
	// { Name h_vol~{idom} ; Value { Local { [ {h~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name e_vol~{idom} ; Value { Local { [ {e~{idom}}] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name e_vol_tot~{idom} ; Value { Local { [ {e~{idom}} + einc[]] ; In Omega~{idom}; Jacobian JVol ; } } }
      }
    }

    For iSide In{0:1}
      { Name g_out~{idom}~{iSide} ; NameOfFormulation ComputeIterationData~{idom}~{iSide} ;
        Quantity {
	  { Name g_out~{idom}~{iSide} ; Value { Local { [ {g_out~{idom}~{iSide}} ] ; In Sigma~{idom}~{iSide}; Jacobian JSur ; } } }
      }
    }
    EndFor
    For iSide In{0:1}
      { Name g_out_pc~{idom}~{iSide} ; NameOfFormulation ComputeIterationDataPrecond~{idom}~{iSide} ;
        Quantity {
	  { Name g_out~{idom}~{iSide} ; Value { Local { [ {g_out~{idom}~{iSide}} ] ; In Sigma~{idom}~{iSide}; Jacobian JSur ; } } }
      }
    }
    EndFor
  EndFor
}

PostOperation {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM_INIT~{idom} ; NameOfPostProcessing DDM_Maxwell_INIT~{idom};
      Operation{
	// Print[ e~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("e_init_%g.pos",idom)] ;
	// Print[ h~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("h_init_%g.pos",idom)] ;
	// Print[ j~{idom}, OnElementsOf GammaScat, File Sprintf("j_init_%g.pos", idom)] ;
	// Print[ h_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("h_vol_init_%g.pos",idom)] ;
	// Print[ n~{idom}, OnElementsOf Region[{GammaScat~{idom}, GammaInf~{idom}, GammaC, Sigma~{idom}}], File Sprintf("n_%g.pos",idom)] ;

	Print[ e_vol_init~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_init_%g.pos",idom)] ;

      }
    }

    { Name DDM~{idom} ; NameOfPostProcessing DDM_Maxwell~{idom};
      Operation{
	Print[ e_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_%g.pos",idom)] ;
	Print[ e_vol_tot~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_tot%g.pos",idom)] ;
	// Print[ e~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("e_%g.pos",idom)] ;
	Print[ h~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("h_%g.pos",idom)] ;
	// Print[ j~{idom}, OnElementsOf GammaScat, File Sprintf("j_%g.pos", idom)] ;
	// Print[ h_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("h_vol_%g.pos",idom)] ;
      }
    }
    For iSide In{0:1}
    { Name g_out~{idom}~{iSide} ; NameOfPostProcessing g_out~{idom}~{iSide};
      Operation{
	  Print[ g_out~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide}, StoreInField (2*(idom+N_DOM)+(iSide-1))%(2*N_DOM)/*, File Sprintf("gg%g_%g.pos",idom, jdom)*/] ;
      }
    }
    EndFor
    For iSide In{0:1}
    { Name g_out_pc~{idom}~{iSide} ; NameOfPostProcessing g_out_pc~{idom}~{iSide};
      Operation{
	  Print[ g_out~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide}, StoreInField (2*(idom+N_DOM)+(iSide-1))%(2*N_DOM)/*, File Sprintf("gg%g_%g.pos",idom, jdom)*/] ;
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
    { Name DDM_Maxwell_INIT~{idom} ; NameOfFormulation DDM_Maxwell~{idom} ;
      Quantity {
	// { Name e~{idom} ; Value { Local { [ {e~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	// { Name h~{idom} ; Value { Local { [ {h~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	// { Name j~{idom} ; Value { Local { [ N[] /\ ({h~{idom}}) ] ; In GammaScat; Jacobian JSur ; } } }
	// { Name h_vol~{idom} ; Value { Local { [ {h~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name e_vol_init~{idom} ; Value { Local { [ {e~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name n~{idom} ; Value { Local { [ N[] ] ; In Region[{GammaScat~{idom}, GammaInf~{idom}, GammaC, Sigma~{idom}}]; Jacobian JSur ; } } }
      }
    }

    { Name DDM_Maxwell~{idom} ; NameOfFormulation DDM_Maxwell~{idom} ;
      Quantity {
	// { Name e~{idom} ; Value { Local { [ {e~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	{ Name h~{idom} ; Value { Local { [ {h~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	// { Name j~{idom} ; Value { Local { [ N[] /\ ({h~{idom}}) ] ; In GammaScat; Jacobian JSur ; } } }
	// { Name h_vol~{idom} ; Value { Local { [ {h~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name e_vol~{idom} ; Value { Local { [ {e~{idom}}] ; In OmegaAll~{idom}; Jacobian JVol ; } } }
	{ Name e_vol_tot~{idom} ; Value { Local { [ {e~{idom}} + einc[]] ; In Omega~{idom}; Jacobian JVol ; } } }
      }
    }

    For iSide In{0:1}
      { Name g_out~{idom}~{iSide} ; NameOfFormulation ComputeIterationData~{idom}~{iSide} ;
        Quantity {
	  { Name g_out~{idom}~{iSide} ; Value { Local { [ {g_out~{idom}~{iSide}} ] ; In Sigma~{idom}~{iSide}; Jacobian JSur ; } } }
      }
    }
    EndFor
    For iSide In{0:1}
      { Name g_out_pc~{idom}~{iSide} ; NameOfFormulation ComputeIterationDataPrecond~{idom}~{iSide} ;
        Quantity {
	  { Name g_out~{idom}~{iSide} ; Value { Local { [ {g_out~{idom}~{iSide}} ] ; In Sigma~{idom}~{iSide}; Jacobian JSur ; } } }
      }
    }
    EndFor
  EndFor
}

PostOperation {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM_INIT~{idom} ; NameOfPostProcessing DDM_Maxwell_INIT~{idom};
      Operation{
	// Print[ e~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("e_init_%g.pos",idom)] ;
	// Print[ h~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("h_init_%g.pos",idom)] ;
	// Print[ j~{idom}, OnElementsOf GammaScat, File Sprintf("j_init_%g.pos", idom)] ;
	// Print[ h_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("h_vol_init_%g.pos",idom)] ;
	// Print[ n~{idom}, OnElementsOf Region[{GammaScat~{idom}, GammaInf~{idom}, GammaC, Sigma~{idom}}], File Sprintf("n_%g.pos",idom)] ;

	Print[ e_vol_init~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_init_%g.pos",idom)] ;

      }
    }

    { Name DDM~{idom} ; NameOfPostProcessing DDM_Maxwell~{idom};
      Operation{
	Print[ e_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_%g.pos",idom)] ;
	Print[ e_vol_tot~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_tot%g.pos",idom)] ;
	// Print[ e~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("e_%g.pos",idom)] ;
	Print[ h~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("h_%g.pos",idom)] ;
	// Print[ j~{idom}, OnElementsOf GammaScat, File Sprintf("j_%g.pos", idom)] ;
	// Print[ h_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("h_vol_%g.pos",idom)] ;
      }
    }
    For iSide In{0:1}
    { Name g_out~{idom}~{iSide} ; NameOfPostProcessing g_out~{idom}~{iSide};
      Operation{
	  Print[ g_out~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide}, StoreInField (2*(idom+N_DOM)+(iSide-1))%(2*N_DOM)/*, File Sprintf("gg%g_%g.pos",idom, jdom)*/] ;
      }
    }
    EndFor
    For iSide In{0:1}
    { Name g_out_pc~{idom}~{iSide} ; NameOfPostProcessing g_out_pc~{idom}~{iSide};
      Operation{
	  Print[ g_out~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide}, StoreInField (2*(idom+N_DOM)+(iSide-1))%(2*N_DOM)/*, File Sprintf("gg%g_%g.pos",idom, jdom)*/] ;
      }
    }
    EndFor
  EndFor
}
EndIf
