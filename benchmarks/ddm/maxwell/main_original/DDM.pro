/* DDM for the Maxwell Equation
Lagrange Multiplyers

some params:
  - FULL_SOLUTION: 1=>compute full solution + error, 0: don't

  !! Beware, Storing E_VOL_INIT does not lead to the exact same solution strange !!!
  - WRITE_E_VOL_INIT: If == 1 then write on disk e_vol at iteration Oth (needed to compute/combine the scattered field)
  - STORE_E_VOL_INIT: If == 1 then store e_vol at iteration Oth on RAM (Field) (needed to compute/combine the scattered field)

  - MSH_SPLIT: If == 1 then use of one different mesh per subdomain, allowing also non conform mesh. A root name of the mesh must be provided through variable MeshName, which is the relative path to the root-name.
Example : for mesh named circle_pie0.msh, circle_pie1.msh, ... in the directory of relative path ../circle_pie, the variable MeshName must be
  - MeshName = "../circle_pie/circle_pie"

Remarks:
- Registers #9 #10 are reserved !
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
  /*
  If(STORE_E_VOL_INIT)
    For ii In {0: #ListOfField()-1}
      idom = ListOfField(ii);
      e_vol_init~{idom}[] = ComplexVectorField[XYZ[]]{N_DOM+idom};
    EndFor
  EndIf
  */
}

Group{
  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);
    TrGr~{idom} = ElementsOf[ Omega~{idom}, OnOneSideOf GammaScat~{idom} ];
  EndFor
}

FunctionSpace {
  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);
    { Name Hcurl_e~{idom}; Type Form1;
     BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
         Support Region[{Omega~{idom},GammaScat~{idom},GammaInf~{idom}, Sigma~{idom}}] ; Entity EdgesOf[All]; } }
    }

    { Name Hcurl_h~{idom}; Type Form1;
      BasisFunction { { Name sh; NameOfCoef he; Function BF_Edge;
	  Support Region[{Omega~{idom},GammaScat~{idom},GammaInf~{idom}, Sigma~{idom}}] ; Entity EdgesOf[All]; } }
      Constraint { { NameOfCoef he; EntityType EdgesOf ; NameOfConstraint Dirichlet_h~{idom}; } }
    }

    { Name Hcurl_lambda~{idom}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{GammaScat~{idom}}] ; Entity EdgesOf[All]; } }
    }

    { Name Hcurl_g_out~{idom}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{Sigma~{idom}}] ; Entity EdgesOf[Sigma~{idom}, Not {GammaScat~{idom}, GammaC/*, GammaInf~{idom}, GammaSym~{idom}/**/}]; } } //!!!
    }

    If(OSRC)
      { Name Hcurl_r~{idom}; Type Form1;
	BasisFunction { { Name ser1; NameOfCoef eer1; Function BF_Edge;
	    Support Region[{Sigma~{idom}}] ; Entity EdgesOf[Sigma~{idom}, Not {GammaScat~{idom}, GammaC/*, GammaInf~{idom}, GammaSym~{idom}/**/}]; } }
      }
      For j In {1:NP_OSRC}
	{ Name Hgrad_rho~{j}~{idom} ; Type Form0 ;
	  BasisFunction { { Name srh1; NameOfCoef erh1; Function BF_Node;
	      Support Region[{Sigma~{idom}}] ; Entity NodesOf[Sigma~{idom}, Not {GammaScat~{idom}, GammaC/*, GammaInf~{idom}, GammaSym~{idom}/**/}]; } }
	}
	{ Name Hcurl_phi~{j}~{idom}; Type Form1;
	  BasisFunction { { Name sph1; NameOfCoef eph1; Function BF_Edge;
	      Support Region[{Sigma~{idom}}] ; Entity EdgesOf[Sigma~{idom}, Not {GammaScat~{idom}, GammaC/*, GammaInf~{idom}, GammaSym~{idom}/**/}]; } }
	}
      EndFor
    EndIf
    If(JFLee)
      { Name Hgrad_rho~{idom} ; Type Form0 ;
	BasisFunction { { Name srh1; NameOfCoef erh1; Function BF_Node; 
	    Support Region[{Sigma~{idom}}] ; Entity NodesOf[Sigma~{idom}, Not {GammaScat~{idom}, GammaC/*, GammaInf~{idom}, GammaSym~{idom}/**/}]; } }
      }
      { Name Hcurl_phi~{idom}; Type Form1;
	BasisFunction { { Name sph1; NameOfCoef eph1; Function BF_Edge; 
	    Support Region[{Sigma~{idom}}] ; Entity EdgesOf[Sigma~{idom}, Not {GammaScat~{idom}, GammaC/*, GammaInf~{idom}, GammaSym~{idom}/**/}]; } }
      }
    EndIf
  EndFor
}

mySign = 1;

Formulation {
  //DDM with Lagrange Multipliers
  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);
    { Name DDM_Maxwell~{idom}; Type FemEquation;
      Quantity {
	{ Name e~{idom}; Type Local; NameOfSpace Hcurl_e~{idom}; }
	{ Name h~{idom}; Type Local; NameOfSpace Hcurl_h~{idom}; }
	{ Name lambda~{idom}; Type Local; NameOfSpace Hcurl_lambda~{idom}; }
	If(OSRC)
	  { Name r~{idom}; Type Local; NameOfSpace Hcurl_r~{idom};}
	  For j In {1:NP_OSRC}
	    { Name rho~{j}~{idom}; Type Local; NameOfSpace  Hgrad_rho~{j}~{idom};}
	    { Name phi~{j}~{idom}; Type Local; NameOfSpace  Hcurl_phi~{j}~{idom};}
	  EndFor
	EndIf
	If(JFLee)
	  { Name rho~{idom}; Type Local; NameOfSpace  Hgrad_rho~{idom};}
	  { Name phi~{idom}; Type Local; NameOfSpace  Hcurl_phi~{idom};}
	EndIf
      }
      Equation {
	Galerkin { [ Dof{d e~{idom}} , {d e~{idom}} ];
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
	Galerkin { [ -k^2 * Dof{e~{idom}} , {e~{idom}} ];
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
	// Galerkin { [ -I[] * k * ( N[] /\ Dof{e~{idom}} ) /\ N[] , {e~{idom}} ];
	//   In GammaInf~{idom}; Integration I1; Jacobian JSur; }
	Galerkin { [ I[] * k * (N[]) /\ ( N[] /\ Dof{e~{idom}} ) , {e~{idom}} ];
	  In GammaInf~{idom}; Integration I1; Jacobian JSur; }

	//boundary condition
	Galerkin { [ Dof{lambda~{idom}} , {e~{idom}} ] ;
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }

	Galerkin { [ Dof{e~{idom}} , {lambda~{idom}} ] ;
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ (#10 > 0. ? einc[]: Vector[0,0,0]), {lambda~{idom}} ] ;
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }

	//transmission condition
	If(SILVER_MULLER)
	  Galerkin { [ (#9 > 0. ? g_in~{idom}[] : Vector[0,0,0]) , {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  // Galerkin { [ -I[] * k * ( N[] /\ Dof{e~{idom}} ) /\ N[] , {e~{idom}} ];
	  //   In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ I[] * k_SM[] * N[] /\ ( N[] /\ Dof{e~{idom}} ), {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; } 
	EndIf
	If(OSRC)
	  Galerkin { [ (#9 > 0. ? -mySign*g_in~{idom}[] : Vector[0,0,0]) , {r~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ -mySign*Dof{r~{idom}} , {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ (mySign*Dof{e~{idom}}), {r~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ mySign*al[]*Dof{d e~{idom}} , {d r~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [mySign*(I[] / k)*OSRC_C0[]{NP_OSRC,theta_branch}*Dof{r~{idom}} , {r~{idom}} ] ;
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  For j In{1:NP_OSRC}
	    Galerkin { [ mySign*(I[] / k )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*Dof{d phi~{j}~{idom}} , {d r~{idom}} ] ;
	      In Sigma~{idom}; Jacobian JSur; Integration I1; }
	    Galerkin { [ mySign*(I[] / k)*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*Dof{d rho~{j}~{idom}} , {r~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  // EndFor
	  // For j In{1:NP_OSRC}
	    Galerkin { [ mySign*OSRC_Bj[]{j,NP_OSRC,theta_branch}*al[]*Dof{d phi~{j}~{idom}} , {d phi~{j}~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	    Galerkin { [ mySign*OSRC_Bj[]{j,NP_OSRC,theta_branch}*be[]*Dof{d rho~{j}~{idom}} , {phi~{j}~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian  JSur; }
	    Galerkin { [ mySign*Dof{phi~{j}~{idom}} , {phi~{j}~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	    Galerkin { [  - mySign*Dof{r~{idom}} , {phi~{j}~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  // EndFor
	  // For j In{1:NP_OSRC}
	    Galerkin { [ mySign*Dof{rho~{j}~{idom}} , {rho~{j}~{idom}} ];
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	    Galerkin { [ mySign*Dof{phi~{j}~{idom}} , {d rho~{j}~{idom}} ];
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  EndFor
	EndIf

	If(JFLee)
	    Galerkin { [ (#9 > 0. ? I[]*k*g_in~{idom}[] : Vector[0,0,0]) , {e~{idom}} ];
	  // Galerkin { [ (#10 > 0. ? Vector[0,0,0]: g_in~{idom}[] ) , {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
          Galerkin { [  -mySign*I[]*k*Dof{phi~{idom}} , {e~{idom}} ] ;
          // Galerkin { [  -mySign*Dof{phi~{idom}} , {e~{idom}} ] ;
            In Sigma~{idom}; Integration I1; Jacobian JSur; }
      
          Galerkin { [ -mySign*Coef_Lee2[]*Dof{d rho~{idom}} , {phi~{idom}} ] ;
            In Sigma~{idom}; Integration I1; Jacobian  JSur; }
          Galerkin { [mySign*(k^2)*Dof{phi~{idom}} , {phi~{idom}} ] ;
            In Sigma~{idom}; Integration I1; Jacobian JSur; }
          Galerkin { [-mySign*(k^2)*Dof{e~{idom}} , {phi~{idom}} ] ;
            In Sigma~{idom}; Integration I1; Jacobian JSur; }
          Galerkin { [ mySign*Coef_Lee1[]*Dof{d e~{idom}} , {d phi~{idom}} ] ;
            In Sigma~{idom}; Integration I1; Jacobian JSur; }
    
          Galerkin { [ mySign*Dof{rho~{idom}} , {rho~{idom}} ]; 
            In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ mySign*Dof{phi~{idom}} , {d rho~{idom}} ]; 
            In Sigma~{idom}; Integration I1; Jacobian JSur; } 
	EndIf
	// store magnetic field
	Galerkin { [ Dof{h~{idom}} , {h~{idom}} ] ;
	  In TrGr~{idom}; Jacobian JVol ; Integration I1 ; }
	Galerkin { [ 1/(I[]*omega[]*mu[]) * Dof{d e~{idom}}, {h~{idom}} ] ;
	  In TrGr~{idom}; Jacobian JVol ; Integration I1 ; }
      }
    }

    { Name ComputeIterationData~{idom}; Type FemEquation;
      Quantity {
	{ Name g_out~{idom}; Type Local;  NameOfSpace Hcurl_g_out~{idom}; }
	If(SILVER_MULLER)
	  { Name e~{idom}; Type Local;  NameOfSpace Hcurl_e~{idom}; }
	EndIf
	If(OSRC)
	  { Name r~{idom}; Type Local;  NameOfSpace Hcurl_r~{idom};}
	  For j In {1:NP_OSRC}
	    { Name rho~{j}~{idom}; Type Local;  NameOfSpace  Hgrad_rho~{j}~{idom};}
	    { Name phi~{j}~{idom}; Type Local;  NameOfSpace  Hcurl_phi~{j}~{idom};}
	  EndFor
	EndIf
	If(JFLee)
	  { Name e~{idom}; Type Local;  NameOfSpace Hcurl_e~{idom}; }
	  { Name phi~{idom}; Type Local;  NameOfSpace  Hcurl_phi~{idom};}
	EndIf
      }
      Equation {
	Galerkin { [ Dof{g_out~{idom}} , {g_out~{idom}} ];
	  In Sigma~{idom}; Integration I1; Jacobian JSur; }
	If(SILVER_MULLER)
	  Galerkin { [ (#10 > 0. ? Vector[0,0,0] : g_in~{idom}[]) , {g_out~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  // Galerkin { [ -2*I[] * k * ( N[] /\ {e~{idom}} ) /\ N[] , {g_out~{idom}} ];
	  Galerkin { [ 2*I[] * k_SM[] * N[] /\ ( N[] /\ {e~{idom}} ) , {g_out~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	EndIf
	If(OSRC)
	  Galerkin { [ (#10 > 0. ? Vector[0,0,0] : -g_in~{idom}[]) , {g_out~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [(2 * I[] / k)*OSRC_C0[]{NP_OSRC,theta_branch}*{r~{idom}} , {g_out~{idom}} ] ;
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  For j In{1:NP_OSRC}
	    Galerkin { [ (2 * I[] / k )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*{d phi~{j}~{idom}} , {d g_out~{idom}} ] ;
	      In Sigma~{idom}; Jacobian JSur; Integration I1; }
	    Galerkin { [ (2 * I[] / k)*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*{d rho~{j}~{idom}} , {g_out~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  EndFor
	  /*
	  For j In{1:NP_OSRC}
	  Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*al[]*Dof{d phi~{j}~{idom}} , {d phi~{j}~{idom}} ] ;
	  In Sigma~{idom}; Integration I1; Jacobian JSur; }

	  Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*be[]*Dof{d rho~{j}~{idom}} , {phi~{j}~{idom}} ] ;
	  In Sigma~{idom}; Integration I1; Jacobian  JSur; }

	  Galerkin { [ Dof{phi~{j}~{idom}} , {phi~{j}~{idom}} ] ;
	  In Sigma~{idom}; Integration I1; Jacobian JSur; }

	  Galerkin { [  - {r~{idom}} , {phi~{j}~{idom}} ] ;
	  In Sigma~{idom}; Integration I1; Jacobian JSur; }
	EndFor
	For j In{1:NP_OSRC}
	Galerkin { [ Dof{rho~{j}~{idom}} , {rho~{j}~{idom}} ];
	In Sigma~{idom}; Integration I1; Jacobian JSur; }

	Galerkin { [ Dof{phi~{j}~{idom}} , {d rho~{j}~{idom}} ];
	In Sigma~{idom}; Integration I1; Jacobian JSur; }
      EndFor
      */
      //      Galerkin { [ -2*I[] * k * ( N[] /\ {e~{idom}} ) /\ N[] , {g_out~{idom}} ];
      //               In Sigma~{idom}; Integration I1; Jacobian JSur; }
    EndIf
    If(JFLee)
      // Galerkin { [ (#10 > 0. ? Vector[0,0,0] : g_in~{idom}[]) , {g_out~{idom}} ];
      //   In Sigma~{idom}; Integration I1; Jacobian JSur; }
      // Galerkin { [ -2 * { phi~{idom}} , { g_out~{idom}} ] ;
      //   In Sigma~{idom}; Jacobian JSur; Integration I1; }
      Galerkin { [ (#10 > 0. ? Vector[0,0,0] : g_in~{idom}[]) , {g_out~{idom}} ];
        In Sigma~{idom}; Integration I1; Jacobian JSur; }
      Galerkin { [ -2 * { phi~{idom}} , { g_out~{idom}} ] ;
        In Sigma~{idom}; Jacobian JSur; Integration I1; }
    EndIf
  }
}
EndFor
}

Resolution {
  { Name DDM;
    System {
      If(FULL_SOLUTION)
	{ Name Lag; NameOfFormulation Maxwell_Lagrange ; Type Complex; }
      EndIf
      For ii In {0: #ListOfField()-1}
	idom = ListOfField(ii);
	{ Name Maxw~{idom}; NameOfFormulation DDM_Maxwell~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
	{ Name ComputeG~{idom}; NameOfFormulation ComputeIterationData~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
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
	Printf[" ***** mySign = %g", mySign];

      //DDM
      SetCommSelf;
      Evaluate[0. #9]; // disable artificial sources
      Evaluate[1. #10]; // enable physical sources -- FIXME: should affect ALL physical sources (not only dirichlet boundary conditions...)
      For ii In {0: #ListOfField()-1}
	idom = ListOfField(ii);
	Generate[Maxw~{idom}];
	Solve[Maxw~{idom}];
	Generate[ComputeG~{idom}];
	Solve[ComputeG~{idom}];
	PostOperation[g_out~{idom}];
	// PostOperation[DDM_INIT~{idom}];
      EndFor

      //Update "Dirichlet" Boundary condition (homogenous now)
      Evaluate[0. #10]; // disable physical sources
      For ii In {0: #ListOfField()-1}
      	idom = ListOfField(ii);
      	GenerateRHSGroup[Maxw~{idom}, GammaScat~{idom}];
      EndFor
      Evaluate[1. #9]; // enable artificial sources
      SetCommWorld;
      //krylov
      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART, {ListOfField()}, {ListOfNeighborField()},{}] {
      	SetCommSelf;
      	For ii In {0: #ListOfField()-1}
      	  idom = ListOfField(ii);
      	  GenerateRHSGroup[Maxw~{idom}, Sigma~{idom}];
      	  SolveAgain[Maxw~{idom}];
      	  GenerateRHSGroup[ComputeG~{idom}, Sigma~{idom}];
      	  SolveAgain[ComputeG~{idom}];
      	EndFor
      	//Update view (must be done after all resolution)
      	For ii In {0: #ListOfField()-1}
      	  idom = ListOfField(ii);
      	  PostOperation[g_out~{idom}];
      	EndFor
      	SetCommWorld;
      }{}
      //building solution
      SetCommSelf;
      Evaluate[1. #10]; // enable physical sources
      For ii In {0: #ListOfField()-1}
      	idom = ListOfField(ii);
      	GenerateRHSGroup[Maxw~{idom}, Region[{Sigma~{idom}, GammaScat~{idom}}]];
      	SolveAgain[Maxw~{idom}] ;
      	PostOperation[DDM~{idom}] ;
      EndFor
      SetCommWorld;
    }
  }
}

PostProcessing {
  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);
    { Name DDM_Maxwell_INIT~{idom} ; NameOfFormulation DDM_Maxwell~{idom} ;
      Quantity {
	// { Name e~{idom} ; Value { Local { [ {e~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	// { Name h~{idom} ; Value { Local { [ {h~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	// { Name j~{idom} ; Value { Local { [ N[] /\ ({h~{idom}}) ] ; In GammaScat; Jacobian JSur ; } } }
	// { Name h_vol~{idom} ; Value { Local { [ {h~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }

	
	{ Name e_vol_init~{idom} ; Value { Local { [ {e~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name n~{idom} ; Value { Local { [ N[] ] ; In Region[{Sigma~{idom}, GammaScat~{idom}, GammaInf~{idom}}]; Jacobian JSur ; } } }
      }
    }

    { Name DDM_Maxwell~{idom} ; NameOfFormulation DDM_Maxwell~{idom} ;
      Quantity {
	// { Name e~{idom} ; Value { Local { [ {e~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	// { Name h~{idom} ; Value { Local { [ {h~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	// { Name j~{idom} ; Value { Local { [ N[] /\ ({h~{idom}}) ] ; In GammaScat; Jacobian JSur ; } } }
	// { Name h_vol~{idom} ; Value { Local { [ {h~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name e_vol~{idom} ; Value { Local { [ {e~{idom}}] ; In Omega~{idom}; Jacobian JVol ; } } }
      }
    }

    { Name g_out~{idom} ; NameOfFormulation ComputeIterationData~{idom} ;
      Quantity {
	{ Name g_out~{idom} ; Value { Local { [ {g_out~{idom}} ] ; In Sigma~{idom}; Jacobian JSur ; } } }
	//Check Normal
	{ Name n~{idom} ; Value { Local { [ N[] ] ; In Region[{Sigma~{idom}, GammaScat~{idom}, GammaInf~{idom}}]; Jacobian JSur ; } } }
      }
    }
  EndFor
}

PostOperation {
  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);
    { Name DDM_INIT~{idom} ; NameOfPostProcessing DDM_Maxwell_INIT~{idom};
      Operation{
	// Print[ e~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("e_init_%g.pos",idom)] ;
	// Print[ h~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("h_init_%g.pos",idom)] ;
	// Print[ j~{idom}, OnElementsOf GammaScat, File Sprintf("j_init_%g.pos", idom)] ;
	// Print[ h_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("h_vol_init_%g.pos",idom)] ;
	Print[ e_vol_init~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_init_%g.pos",idom)] ;
      }
    }

    { Name DDM~{idom} ; NameOfPostProcessing DDM_Maxwell~{idom};
      Operation{
	Print[ e_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_%g.pos",idom)] ;
	// Print[ e~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("e_%g.pos",idom)] ;
	// Print[ h~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("h_%g.pos",idom)] ;
	// Print[ j~{idom}, OnElementsOf GammaScat, File Sprintf("j_%g.pos", idom)] ;
	// Print[ h_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("h_vol_%g.pos",idom								     )] ;
      }
    }

    { Name g_out~{idom} ; NameOfPostProcessing g_out~{idom};
      Operation{
	Print[ g_out~{idom}, OnElementsOf Sigma~{idom}, StoreInField idom];
	// Print[ n~{idom}, OnElementsOf Region[{Sigma~{idom}, GammaScat~{idom}}], File Sprintf("n%g.pos",idom)];
      }
    }
  EndFor



}
