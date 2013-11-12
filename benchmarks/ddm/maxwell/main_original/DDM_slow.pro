/* DDM for the Maxwell Equation
some params:
FULL_SOLUTION: 1=>compute full solution + error, 0: don't

MSH_SPLIT: If == 1 then use of one different mesh per subdomain, allowing also non conform mesh. A root name of the mesh must be provided through variable MeshName, which is the relative path to the root-name.
Example : for mesh named circle_pie0.msh, circle_pie1.msh, ... in the directory of relative path ../circle_pie, the variable MeshName must be
  MeshName = "../circle_pie/circle_pie"

Remarks: 
- Register #10 is reserved !
- if FULL_SOLUTION && MSH_SPLIT then FULL_SOLUTION is set to 0 (impossible to compute a full solution without the whole mesh)
*/

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!
// DO NOT WORK IN PARALLEL :-(

Function{
  If(FULL_SOLUTION && MSH_SPLIT)
    FULL_SOLUTION = 0;
  EndIf
}

Function{
  al[] = -1/(keps[]^2);
  be[] =  1/(keps[]^2);
}

Group{
  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);
    TrGr~{idom} = ElementsOf[ Omega~{idom}, OnOneSideOf GammaScat~{idom} ];
    GammaScatAll~{idom} = Region[{GammaScat~{idom}, BndGammaScat~{idom}}];
  EndFor
}

Constraint {
  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);
    { Name Dirichlet_e~{idom};
      Case { {  Region GammaScatAll~{idom} ; Type AssignFromResolution; NameOfResolution Maxwell_e_Dirichlet~{idom} ; } } 
    }
    { Name Dirichlet_e_zero~{idom};
Case { {  Region GammaScatAll~{idom} ; Type AssignFromResolution; NameOfResolution Maxwell_e_Dirichlet_zero~{idom} ; } } 
    }
  EndFor
}

FunctionSpace {
  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);
    { Name Hcurl_e~{idom}; Type Form1;
     BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
         Support Region[{Omega~{idom},GammaScat~{idom},GammaInf~{idom}, Sigma~{idom}, BndGammaScat~{idom}}] ; Entity EdgesOf[All]; } }
     Constraint { { NameOfCoef ee ; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_zero~{idom}; } }
    }
 
    { Name Hcurl_e_init~{idom}; Type Form1;
     BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
         Support Region[{Omega~{idom},GammaScat~{idom},GammaInf~{idom}, Sigma~{idom}, BndGammaScat~{idom}}] ; Entity EdgesOf[All]; } }
     Constraint { { NameOfCoef ee ; EntityType EdgesOf ; NameOfConstraint Dirichlet_e~{idom}; } }
    }

    { Name Hcurl_h~{idom}; Type Form1;
      BasisFunction { { Name sh; NameOfCoef he; Function BF_Edge; 
	  Support Region[{Omega~{idom},GammaScat~{idom},GammaInf~{idom}, Sigma~{idom}, BndGammaScat~{idom}}] ; Entity EdgesOf[All]; } }
      Constraint { { NameOfCoef he; EntityType EdgesOf ; NameOfConstraint Dirichlet_h~{idom}; } }
    }
  
    { Name Hcurl_g_out~{idom}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge; 
	  Support Region[{Sigma~{idom}}] ; Entity EdgesOf[All]; } }
    }

    If(OSRC)
      { Name Hcurl_r~{idom}; Type Form1;
        BasisFunction { { Name ser1; NameOfCoef eer1; Function BF_Edge; 
	    Support Region[{Sigma~{idom}}] ; Entity EdgesOf[All]; } }
      } 
      For j In {1:NP_OSRC}
        { Name Hgrad_rho~{j}~{idom} ; Type Form0 ;
          BasisFunction { { Name srh1; NameOfCoef erh1; Function BF_Node; 
	      Support Region[{Sigma~{idom}}] ; Entity NodesOf[All]; } }
        }
        { Name Hcurl_phi~{j}~{idom}; Type Form1;
          BasisFunction { { Name sph1; NameOfCoef eph1; Function BF_Edge; 
	      Support Region[{Sigma~{idom}}] ; Entity EdgesOf[All]; } }
        }
      EndFor
    EndIf
  EndFor    
}

Formulation {
  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);

    { Name Maxwell_e_Dirichlet~{idom}; // For imposing the source on edges
    Quantity {
      { Name e_init~{idom}; Type Local; NameOfSpace Hcurl_e_init~{idom}; }
    }
    Equation {
      Galerkin { [ Dof{e_init~{idom}} , {e_init~{idom}} ];
	In GammaScat~{idom}; Integration I1; Jacobian JSur;  }
      Galerkin { [ einc[] , {e_init~{idom}} ];
	In GammaScat~{idom}; Integration I1; Jacobian JSur;  }

      Galerkin { [ Dof{e_init~{idom}} , {e_init~{idom}} ];
	In BndGammaScat~{idom}; Integration I1; Jacobian JLin;  }
      Galerkin { [ einc[] , {e_init~{idom}} ];
	In BndGammaScat~{idom}; Integration I1; Jacobian JLin;  }
      }
    }

    { Name Maxwell_e_Dirichlet_zero~{idom}; // For imposing the source on edges
    Quantity {
      { Name e~{idom}; Type Local; NameOfSpace Hcurl_e~{idom}; }
    }
    Equation {
      Galerkin { [ Dof{e~{idom}} , {e~{idom}} ];
	In GammaScat~{idom}; Integration I1; Jacobian JSur;  }
      Galerkin { [ 0*einc[], {e~{idom}} ];
	In GammaScat~{idom}; Integration I1; Jacobian JSur;  }

      Galerkin { [ Dof{e~{idom}} , {e~{idom}} ];
	In BndGammaScat~{idom}; Integration I1; Jacobian JLin;  }
      Galerkin { [ 0*einc[] , {e~{idom}} ];
	In BndGammaScat~{idom}; Integration I1; Jacobian JLin;  }
      }
    }

    //INITIALIZATION
    { Name DDM_Maxwell_init~{idom}; Type FemEquation; 
      Quantity { 
	{ Name e_init~{idom}; Type Local; NameOfSpace Hcurl_e_init~{idom}; }
	{ Name h~{idom}; Type Local; NameOfSpace Hcurl_h~{idom}; }
	If(OSRC)
	  { Name r~{idom}; Type Local; NameOfSpace Hcurl_r~{idom};}
	  For j In {1:NP_OSRC}
	    { Name rho~{j}~{idom}; Type Local; NameOfSpace  Hgrad_rho~{j}~{idom};}
	    { Name phi~{j}~{idom}; Type Local; NameOfSpace  Hcurl_phi~{j}~{idom};}
	  EndFor
	EndIf
	  }
      Equation {
	Galerkin { [ Dof{d e_init~{idom}} , {d e_init~{idom}} ]; 
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
	Galerkin { [ -k^2 * Dof{e_init~{idom}} , {e_init~{idom}} ]; 
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
	Galerkin { [ -I[] * k * ( N[] /\ Dof{e_init~{idom}} ) /\ N[] , {e_init~{idom}} ];
	  In GammaInf~{idom}; Integration I1; Jacobian JSur; }
	
	//transmission condition
	If(SILVER_MULLER)
	  Galerkin { [ -I[] * k * ( N[] /\ Dof{e_init~{idom}} ) /\ N[] , {e_init~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; } 
	EndIf
	If(OSRC)
	  Galerkin { [ -Dof{r~{idom}} , {e_init~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ (Dof{e_init~{idom}}), {r~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ al[]*Dof{d e_init~{idom}} , {d r~{idom}} ]; 
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
	Galerkin { [ 1/(I[]*omega[]*mu[]) * Dof{d e_init~{idom}}, {h~{idom}} ] ; 
	  In TrGr~{idom}; Jacobian JVol ; Integration I1 ; }
      }
    }

    { Name ComputeIterationData_init~{idom}; Type FemEquation; 
      Quantity { 
	{ Name g_out~{idom}; Type Local;  NameOfSpace Hcurl_g_out~{idom}; }
	If(SILVER_MULLER)
	  { Name e_init~{idom}; Type Local;  NameOfSpace Hcurl_e_init~{idom}; }
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
	  Galerkin { [ 2*I[] * k * ( N[] /\ {e_init~{idom}} ) /\ N[] , {g_out~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; } 
	EndIf
	If(OSRC)
	  Galerkin { [(2 * I[] / k)*OSRC_C0[]{NP_OSRC,theta_branch}*{r~{idom}} , {g_out~{idom}} ] ;
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  For j In{1:NP_OSRC}
	    Galerkin { [ (2 * I[] / k )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*{d phi~{j}~{idom}} , {d g_out~{idom}} ] ;
	      In Sigma~{idom}; Jacobian JSur; Integration I1; }
	    Galerkin { [ (2 * I[] / k)*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*{d rho~{j}~{idom}} , {g_out~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  EndFor 
	    //What follows was commented, why ?
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
	EndIf
	  }
    }

    //AFTER INITIALIZATION
    { Name DDM_Maxwell~{idom}; Type FemEquation; 
      Quantity { 
	{ Name e_init~{idom}; Type Local; NameOfSpace Hcurl_e_init~{idom};}
	{ Name e~{idom}; Type Local; NameOfSpace Hcurl_e~{idom}; }
	{ Name h~{idom}; Type Local; NameOfSpace Hcurl_h~{idom}; }
	If(OSRC)
	  { Name r~{idom}; Type Local; NameOfSpace Hcurl_r~{idom};}
	  For j In {1:NP_OSRC}
	    { Name rho~{j}~{idom}; Type Local; NameOfSpace  Hgrad_rho~{j}~{idom};}
	    { Name phi~{j}~{idom}; Type Local; NameOfSpace  Hcurl_phi~{j}~{idom};}
	  EndFor
	EndIf
	If(FULL_SOLUTION)
	  { Name e_full; Type Local; NameOfSpace Hcurl_e;}
	EndIf

	  }
      Equation {
	Galerkin { [ Dof{d e~{idom}} , {d e~{idom}} ];
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
	Galerkin { [ -k^2 * Dof{e~{idom}} , {e~{idom}} ];
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
	Galerkin { [ -I[] * k * ( N[] /\ Dof{e~{idom}} ) /\ N[] , {e~{idom}} ];
	  In GammaInf~{idom}; Integration I1; Jacobian JSur; }
	
	//transmission condition
	If(SILVER_MULLER)
	  Galerkin { [ (#10 > 0. ? -g_in~{idom}[]:Vector[0,0,0]) , {e~{idom}} ];
	  //	  Galerkin { [ -g_in~{idom}[] , {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ -I[] * k * ( N[] /\ Dof{e~{idom}} ) /\ N[] , {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; } 
	EndIf
	If(OSRC)
	  Galerkin { [ -Dof{r~{idom}} , {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	Galerkin { [ -g_in~{idom}[] , {r~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
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
	  Galerkin { [ g_in~{idom}[], {g_out~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [ 2*I[] * k * ( N[] /\ {e~{idom}} ) /\ N[] , {g_out~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; } 
	EndIf
	If(OSRC)
	  Galerkin { [ -g_in~{idom}[] , {g_out~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  Galerkin { [(2 * I[] / k)*OSRC_C0[]{NP_OSRC,theta_branch}*{r~{idom}} , {g_out~{idom}} ] ;
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  For j In{1:NP_OSRC}
	    Galerkin { [ (2 * I[] / k )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*{d phi~{j}~{idom}} , {d g_out~{idom}} ] ;
	      In Sigma~{idom}; Jacobian JSur; Integration I1; }
	    Galerkin { [ (2 * I[] / k)*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*{d rho~{j}~{idom}} , {g_out~{idom}} ] ;
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	  EndFor 
	    //What follows was commented, why ?
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
	EndIf
	  }
    }
  EndFor
}

Resolution {
  { Name DDM;
    System {
      If(FULL_SOLUTION)
        { Name A; NameOfFormulation Maxwell_e ; Type Complex; }
      EndIf
      For ii In {0: #ListOfField()-1}
        idom = ListOfField(ii);
        { Name Maxw~{idom}; NameOfFormulation DDM_Maxwell~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
        { Name Maxw_init~{idom}; NameOfFormulation DDM_Maxwell_init~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
        { Name ComputeG~{idom}; NameOfFormulation ComputeIterationData~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
        { Name ComputeG_init~{idom}; NameOfFormulation ComputeIterationData_init~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
      EndFor
	}
    Operation { 
      //FULL
      If(FULL_SOLUTION)
	Generate[A] ; Solve[A] ; 
        PostOperation[Maxwell_e];
      EndIf
      //DDM
      SetCommSelf;
      For ii In {0: #ListOfField()-1}
        idom = ListOfField(ii);
        Generate[Maxw_init~{idom}];
        Solve[Maxw_init~{idom}]; 
        Generate[ComputeG_init~{idom}];
        Solve[ComputeG_init~{idom}];  
	PostOperation[DDM_init~{idom}]; 
        PostOperation[g_out_init~{idom}];
      EndFor
	//for fast generation ...
      Evaluate[0. #10];
      Barrier; //mandatory
      For ii In {0: #ListOfField()-1}
        idom = ListOfField(ii);
	Generate[Maxw~{idom}];
	Generate[ComputeG~{idom}];
      EndFor
      Barrier; //mandatory
      Evaluate[1. #10];
      Barrier; //mandatory
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

  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);
    { Name Maxwell_e_Dirichlet~{idom};
      System {
	{ Name B~{idom}; NameOfFormulation Maxwell_e_Dirichlet~{idom}; DestinationSystem Maxw_init~{idom}; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
      }
      Operation { 
	SetCommSelf;
	Generate B~{idom}; Solve B~{idom}; TransferSolution B~{idom}; 
	SetCommWorld;
      }
    }

    { Name Maxwell_e_Dirichlet_zero~{idom};
      System {
	{ Name C~{idom}; NameOfFormulation Maxwell_e_Dirichlet_zero~{idom}; DestinationSystem Maxw~{idom}; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
      }
      Operation { 
	SetCommSelf;
	Generate C~{idom}; Solve C~{idom}; TransferSolution C~{idom}; 
	SetCommWorld;
      }
    }
  EndFor
}

PostProcessing {
  For ii In {0: #ListOfField()-1}
    idom = ListOfField(ii);
    { Name DDM_Maxwell~{idom} ; NameOfFormulation DDM_Maxwell~{idom} ;
      Quantity {
	{ Name e~{idom} ; Value { Local { [ {e~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	{ Name h~{idom} ; Value { Local { [ {h~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	{ Name j~{idom} ; Value { Local { [ N[] /\ ({h~{idom}}) ] ; In GammaScat; Jacobian JSur ; } } }
	{ Name e_vol~{idom} ; Value { Local { [ {e~{idom}} + {e_init~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name h_vol~{idom} ; Value { Local { [ {h~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	If(FULL_SOLUTION)
	{ Name err_full~{idom} ; Value { Local { [ {e~{idom}} +  {e_init~{idom}} - {e_full} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name err_full_abs~{idom} ; Value { Local { [ Norm[{e~{idom}} + {e_init~{idom}} - {e_full}] ] ; In Omega~{idom}; Jacobian JVol ; } } }
	EndIf
      }
    }

    { Name DDM_Maxwell_init~{idom} ; NameOfFormulation DDM_Maxwell_init~{idom} ;
      Quantity {
	{ Name e~{idom} ; Value { Local { [ {e_init~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	{ Name h~{idom} ; Value { Local { [ {h~{idom}} ] ; In GammaScat~{idom}; Jacobian JSur ; } } }
	{ Name j~{idom} ; Value { Local { [ N[] /\ ({h~{idom}}) ] ; In GammaScat; Jacobian JSur ; } } }
	{ Name e_vol~{idom} ; Value { Local { [ {e_init~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name h_vol~{idom} ; Value { Local { [ {h~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
      }
    }

    { Name g_out~{idom} ; NameOfFormulation ComputeIterationData~{idom} ;
      Quantity {
	{ Name g_out~{idom} ; Value { Local { [ {g_out~{idom}} ] ; In Sigma~{idom}; Jacobian JSur ; } } }
      }
    }			

    { Name g_out_init~{idom} ; NameOfFormulation ComputeIterationData_init~{idom} ;
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
    { Name DDM_init~{idom} ; NameOfPostProcessing DDM_Maxwell_init~{idom}; 
      Operation{
        Print[ e~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("e_init_%g.pos",idom)] ;
	Print[ h~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("h_init_%g.pos",idom)] ;
	Print[ j~{idom}, OnElementsOf GammaScat, File Sprintf("j_init_%g.pos", idom)] ;
	Print[ e_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_init_%g.pos",idom)];
	Print[ h_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("h_vol_init_%g.pos",idom)] ;
      }
    }

    { Name DDM~{idom} ; NameOfPostProcessing DDM_Maxwell~{idom}; 
      Operation{
	Print[ e~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("e_%g.pos",idom)] ;
	Print[ h~{idom}, OnElementsOf GammaScat~{idom}, File Sprintf("h_%g.pos",idom)] ;
	Print[ j~{idom}, OnElementsOf GammaScat, File Sprintf("j_%g.pos", idom)] ;
	Print[ e_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("e_vol_%g.pos",idom)] ;
	Print[ h_vol~{idom}, OnElementsOf Omega~{idom}, File Sprintf("h_vol_%g.pos",idom)] ;
	If(FULL_SOLUTION)
   	  Print[ err_full~{idom}, OnElementsOf Omega~{idom}, File Sprintf("err_full_%g.pos",idom)] ;
   	  Print[ err_full_abs~{idom}, OnElementsOf Omega~{idom}, File Sprintf("err_full_abs_%g.pos",idom)] ;
	EndIf
      }
    }
    
    { Name g_out~{idom} ; NameOfPostProcessing g_out~{idom}; 
      Operation{
	Print[ g_out~{idom}, OnElementsOf Sigma~{idom}, StoreInField idom];
      }
    }

    { Name g_out_init~{idom} ; NameOfPostProcessing g_out_init~{idom}; 
      Operation{
	Print[ g_out~{idom}, OnElementsOf Sigma~{idom}, StoreInField idom];
	Print[ n~{idom}, OnElementsOf Region[{Sigma~{idom}}], File Sprintf("n%g.pos",idom)];
	Print[ n~{idom}, OnElementsOf Region[{GammaScat~{idom}}], File Sprintf("nScat%g.pos",idom)];
	Print[ n~{idom}, OnElementsOf Region[{GammaInf~{idom}}], File Sprintf("nInf%g.pos",idom)];
      }
    }
  EndFor  
}
