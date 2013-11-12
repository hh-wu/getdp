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
- Register #10 is reserved !
- if FULL_SOLUTION && MSH_SPLIT then FULL_SOLUTION is set to 0 (impossible to compute a full solution without the whole mesh)
*/
Function{
  If(NON_CONFORM)
    MSH_SPLIT = 1;
  EndIf
  //u_init is needed to compute the error so ...
  // ...to avoid errors, the storage in memory of u_init (0th iteration) is forced
  If(FULL_SOLUTION)
    STORE_U_INIT = 1;
  EndIf
  //full solution cannot be computed without the whole mesh
  If(FULL_SOLUTION && MSH_SPLIT)
    FULL_SOLUTION = 0;
  EndIf
}

Function{
  al[] = -1/(keps[]^2);
  be[] =  1/(keps[]^2);
  If(STORE_E_VOL_INIT)
    For ii In {0: #ListOfField()-1}
      idom = ListOfField(ii);
      e_vol_init~{idom}[] = ComplexVectorField[XYZ[]]{N_DOM+idom};
    EndFor
  EndIf
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
	  Support Region[{Sigma~{idom}}] ; Entity EdgesOf[Sigma~{idom}, Not GammaScat~{idom}]; } } //!!!
    }

    If(OSRC)
      { Name Hcurl_r~{idom}; Type Form1;
	BasisFunction { { Name ser1; NameOfCoef eer1; Function BF_Edge; 
	    Support Region[{Sigma~{idom}}] ; Entity EdgesOf[Sigma~{idom}, Not GammaScat~{idom}]; } } // Changed by Alex
      } 
      For j In {1:NP_OSRC}
	{ Name Hgrad_rho~{j}~{idom} ; Type Form0 ;
	  BasisFunction { { Name srh1; NameOfCoef erh1; Function BF_Node; 
	      Support Region[{Sigma~{idom}}] ; Entity NodesOf[Sigma~{idom}, Not GammaScat~{idom}]; } } // Changed by Alex
	}
	{ Name Hcurl_phi~{j}~{idom}; Type Form1;
	  BasisFunction { { Name sph1; NameOfCoef eph1; Function BF_Edge; 
	      Support Region[{Sigma~{idom}}] ; Entity EdgesOf[Sigma~{idom}, Not GammaScat~{idom}]; } } // Changed by Alex
	}
      EndFor
    EndIf
  EndFor    
}

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
      }
      Equation {
	Galerkin { [ Dof{d e~{idom}} , {d e~{idom}} ]; 
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
	Galerkin { [ -k^2 * Dof{e~{idom}} , {e~{idom}} ]; 
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
	Galerkin { [ -I[] * k * ( N[] /\ Dof{e~{idom}} ) /\ N[] , {e~{idom}} ];
	  In GammaInf~{idom}; Integration I1; Jacobian JSur; }
	
	//boundary condition
	Galerkin { [ Dof{lambda~{idom}} , {e~{idom}} ] ;
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }
	
	Galerkin { [ Dof{e~{idom}} , {lambda~{idom}} ] ;
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ 0*Dof{lambda~{idom}} , {lambda~{idom}} ] ;
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; } 
	Galerkin { [ (#10 > 0. ? einc[]: Vector[0,0,0]), {lambda~{idom}} ] ; 
	  In GammaScat~{idom}; Jacobian JSur ; Integration I1 ; }
	
	//transmission condition
	If(SILVER_MULLER)
	  Galerkin { [ (#10 > 0. ? Vector[0,0,0]: g_in~{idom}[]) , {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ -I[] * k * ( N[] /\ Dof{e~{idom}} ) /\ N[] , {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; } 
	EndIf
	If(OSRC)
	  Galerkin { [ -Dof{r~{idom}} , {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ (#10 > 0. ? Vector[0,0,0]: -g_in~{idom}[] ) , {r~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  // Galerkin { [ (#10 > 0. ? Vector[0,0,0]: g_in~{idom}[] ) , {e~{idom}} ];
	  //   In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ (Dof{e~{idom}}), {r~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ al[]*Dof{d e~{idom}} , {d r~{idom}} ]; 
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [(I[] / k)*OSRC_C0[]{NP_OSRC,theta_branch}*Dof{r~{idom}} , {r~{idom}} ] ;
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  For j In{1:NP_OSRC}
	    Galerkin { [ (I[] / k )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*Dof{d phi~{j}~{idom}} , {d r~{idom}} ] ;
	      In Sigma~{idom}; Jacobian JSur; Integration I1; }
	    Galerkin { [ (I[] / k)*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*Dof{d rho~{j}~{idom}} , {r~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  EndFor 
	  For j In{1:NP_OSRC}
	    Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*al[]*Dof{d phi~{j}~{idom}} , {d phi~{j}~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	    Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*be[]*Dof{d rho~{j}~{idom}} , {phi~{j}~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian  JSur; }
	    Galerkin { [ Dof{phi~{j}~{idom}} , {phi~{j}~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	    Galerkin { [  - Dof{r~{idom}} , {phi~{j}~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  EndFor
	  For j In{1:NP_OSRC}
	    Galerkin { [ Dof{rho~{j}~{idom}} , {rho~{j}~{idom}} ]; 
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	    Galerkin { [ Dof{phi~{j}~{idom}} , {d rho~{j}~{idom}} ]; 
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  EndFor 
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
      }
      Equation {
	Galerkin { [ Dof{g_out~{idom}} , {g_out~{idom}} ];
	  In Sigma~{idom}; Integration I1; Jacobian JSur; }
	If(SILVER_MULLER)
	  Galerkin { [ (#10 > 0. ? Vector[0,0,0] : g_in~{idom}[]) , {g_out~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ -2*I[] * k * ( N[] /\ {e~{idom}} ) /\ N[] , {g_out~{idom}} ];
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
      //DDM
      SetCommSelf;
      Evaluate[1. #10];
      For ii In {0: #ListOfField()-1}
	idom = ListOfField(ii);
	Generate[Maxw~{idom}];
	Solve[Maxw~{idom}]; 
	Generate[ComputeG~{idom}];
	Solve[ComputeG~{idom}];  
	PostOperation[DDM_INIT~{idom}];
	PostOperation[g_out~{idom}];
      EndFor
      //Update "Dirichlet" Boundary condition (homogenous now)
      Evaluate[0. #10];
      For ii In {0: #ListOfField()-1}
	idom = ListOfField(ii);
	GenerateRHSGroup[Maxw~{idom}, GammaScat~{idom}];
      EndFor
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
      For ii In {0: #ListOfField()-1}
	idom = ListOfField(ii);
	GenerateRHSGroup[Maxw~{idom}, Sigma~{idom}];
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
	{ Name e~{idom} ; Value { Local { [ {e~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	{ Name h~{idom} ; Value { Local { [ {h~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	{ Name j~{idom} ; Value { Local { [ N[] /\ ({h~{idom}}) ] ; In GammaScat; Jacobian JSur ; } } }
	{ Name h_vol~{idom} ; Value { Local { [ {h~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name e_vol~{idom} ; Value { Local { [ {e~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name n~{idom} ; Value { Local { [ N[] ] ; In Region[{Sigma~{idom}, GammaScat~{idom}, GammaInf~{idom}}]; Jacobian JSur ; } } }
      }
    }
    
    { Name DDM_Maxwell~{idom} ; NameOfFormulation DDM_Maxwell~{idom} ;
      Quantity {
	{ Name e~{idom} ; Value { Local { [ {e~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	{ Name h~{idom} ; Value { Local { [ {h~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	{ Name j~{idom} ; Value { Local { [ N[] /\ ({h~{idom}}) ] ; In GammaScat; Jacobian JSur ; } } }
	{ Name h_vol~{idom} ; Value { Local { [ {h~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	If(STORE_E_VOL_INIT)
	  { Name e_vol~{idom} ; Value { Local { [ {e~{idom}} + e_vol_init~{idom}[] ] ; In Omega~{idom}; Jacobian JVol ; } } }
	EndIf
	If(!STORE_E_VOL_INIT)
	  { Name e_vol~{idom} ; Value { Local { [ {e~{idom}}] ; In Omega~{idom}; Jacobian JVol ; } } }
	EndIf
      }
    }

    { Name g_out~{idom} ; NameOfFormulation ComputeIterationData~{idom} ;
      Quantity {
	{ Name g_out~{idom} ; Value { Local { [ {g_out~{idom}} ] ; In Sigma~{idom}; Jacobian JSur ; } } }
	//Check Normal
	// { Name n~{idom} ; Value { Local { [ N[] ] ; In Region[{Sigma~{idom}, GammaScat~{idom}, GammaInf~{idom}}]; Jacobian JSur ; } } }
      }
    }			
  EndFor
}

PostOperation {
  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);
    { Name DDM_INIT~{idom} ; NameOfPostProcessing DDM_Maxwell_INIT~{idom}; 
      Operation{
	Print[ e~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("e_init_%g.pos",idom)] ;
	Print[ h~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("h_init_%g.pos",idom)] ;
	Print[ j~{idom}, OnElementsOf GammaScat, File Sprintf("j_init_%g.pos", idom)] ;
	Print[ h_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("h_vol_init_%g.pos",idom)] ;
	Print[ n~{idom}, OnElementsOf Region[{Sigma~{idom}, GammaScat~{idom}, GammaInf~{idom}}], File Sprintf("n%g.pos",idom)];
	If(STORE_E_VOL_INIT && !WRITE_E_VOL_INIT)
	  Print[ e_vol~{idom}, OnElementsOf Omega~{idom}, StoreInField N_DOM+idom] ;
	EndIf
	If(!STORE_E_VOL_INIT && WRITE_E_VOL_INIT)
	  Print[ e_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_init_%g.pos",idom)] ;
	EndIf
	If(STORE_E_VOL_INIT && WRITE_E_VOL_INIT)
	  Print[ e_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_init_%g.pos",idom), StoreInField N_DOM+idom] ;
	EndIf
      }
    }
    
    { Name DDM~{idom} ; NameOfPostProcessing DDM_Maxwell~{idom}; 
      Operation{
	Print[ e~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("e_%g.pos",idom)] ;
	Print[ h~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("h_%g.pos",idom)] ;
	Print[ j~{idom}, OnElementsOf GammaScat, File Sprintf("j_%g.pos", idom)] ;
	Print[ e_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_%g.pos",idom)] ;
	Print[ h_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("h_vol_%g.pos",idom)] ;
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
