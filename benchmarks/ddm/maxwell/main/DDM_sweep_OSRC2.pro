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

If(OSRC)
  Include "OSRC2_params.pro";
EndIf

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

FunctionSpace {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Hcurl_e~{idom}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{Omega~{idom}, GammaScat~{idom}, GammaInf~{idom}, Sigma~{idom}, GammaC}] ; Entity EdgesOf[All]; } }
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog; }
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
        { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog; }
      }
    }

    For iSide In {0:1}
    { Name Hcurl_g_out~{idom}~{iSide}; Type Form1;
      BasisFunction { { Name se; NameOfCoef ee; Function BF_Edge; 
	  Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC/*, GammaInf, GammaSym~{idom}/**/}]; } } //!!!
    }
    EndFor
    
    If(OSRC)
      For iSide In {0:1}
        // { Name Hcurl_r~{idom}~{iSide}; Type Form1;
        //   BasisFunction { { Name ser1; NameOfCoef eer1; Function BF_Edge; 
	//       Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC/*, GammaInf, GammaSym~{idom}/**/}]; } }
        // } 
        For j In {1:NP_OSRC}
	  { Name Hgrad_rho~{j}~{idom}~{iSide} ; Type Form0 ;
	    BasisFunction { { Name srh1; NameOfCoef erh1; Function BF_Node; 
	        Support Region[{Sigma~{idom}~{iSide}}] ; Entity NodesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC/*, GammaInf, GammaSym~{idom}/**/}]; } }
	  }
	  { Name Hcurl_phi~{j}~{idom}~{iSide}; Type Form1;
	    BasisFunction { { Name sph1; NameOfCoef eph1; Function BF_Edge; 
		Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC/*, GammaInf, GammaSym~{idom}/**/}]; } }
	  }
        EndFor
      EndFor
    EndIf

    If(JFLee)
      For iSide In {0:1}
	{ Name Hgrad_rho~{idom}~{iSide} ; Type Form0 ;
	  BasisFunction { { Name srh1; NameOfCoef erh1; Function BF_Node; 
	      Support Region[{Sigma~{idom}~{iSide}}] ; Entity NodesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC/*, GammaInf, GammaSym~{idom}/**/}]; } }
	}
	{ Name Hcurl_phi~{idom}~{iSide}; Type Form1;
	  BasisFunction { { Name sph1; NameOfCoef eph1; Function BF_Edge; 
	      Support Region[{Sigma~{idom}~{iSide}}] ; Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaScat~{idom}, GammaC/*, GammaInf, GammaSym~{idom}/**/}]; } }
	}
      EndFor
    EndIf

  EndFor    
}

SM_sign = 1; // TESTING ONLY !!! Should be 1

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
	    // { Name r~{idom}~{iSide}; Type Local; NameOfSpace Hcurl_r~{idom}~{iSide};}
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
	Galerkin { [ -k^2 * Dof{e~{idom}} , {e~{idom}} ]; 
	  In Omega~{idom}; Integration I1; Jacobian JVol; }
	Galerkin { [ SM_sign*I[] * kInf[] * (N[]) /\ ( N[] /\ Dof{e~{idom}} ) , {e~{idom}} ];
	  In GammaInf~{idom}; Integration I1; Jacobian JSur; }
	
	//boundary condition
	Galerkin { [ Dof{lambda~{idom}} , {e~{idom}} ] ;
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
	  Galerkin { [ SM_sign*I[] * kDtN[] * N[] /\ ( N[] /\ Dof{e~{idom}} ), {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; } 
	EndIf

	If(OSRC)
	  // Galerkin { [ (#10 > 0. ? Vector[0,0,0]: I[]*k*Z0*g_in~{idom}[] ) , {e~{idom}} ];
	  //   In Sigma~{idom}; Integration I1; Jacobian JSur; }

	  Galerkin { [ (#11 > 0. ? I[]*k*g_in~{idom}~{0}[] : Vector[0,0,0]) , {e~{idom}} ];
	    In Sigma~{idom}~{0}; Integration I1; Jacobian JSur; }
	  Galerkin { [ (#12 > 0. ? I[]*k*g_in~{idom}~{1}[] : Vector[0,0,0]) , {e~{idom}} ];
	    In Sigma~{idom}~{1}; Integration I1; Jacobian JSur; }

	  For iSide In {0:1}
	    Galerkin { [ -I[]*k*padr0[]*Dof{e~{idom}}, {e~{idom}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [ (I[]*k*padr0[]/keps2[])*Dof{d e~{idom}} , {d e~{idom}} ]; 
	      In Sigma~{idom}; Integration I1; Jacobian JSur; }
	    For j In{1:NP_OSRC}
	      Galerkin { [  -I[]*k*padr~{j}[]*Dof{phi~{j}~{idom}~{iSide}} , {e~{idom}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    EndFor 
	    For j In{1:NP_OSRC}
	      Galerkin { [-Dof{d phi~{j}~{idom}~{iSide}} , {d phi~{j}~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	      Galerkin { [ Dof{d rho~{j}~{idom}~{iSide}} , {phi~{j}~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian  JSur; }
	      Galerkin { [-keps2[]*padq~{j}[]*Dof{phi~{j}~{idom}~{iSide}} , {phi~{j}~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	      Galerkin { [-keps2[]*Dof{e~{idom}} , {phi~{j}~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	      Galerkin { [ Dof{d e~{idom}} , {d phi~{j}~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    EndFor
	    For j In{1:NP_OSRC}
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
	    Galerkin { [(k^2)*Dof{phi~{idom}~{iSide}} , {phi~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [-(k^2)*Dof{e~{idom}} , {phi~{idom}~{iSide}} ] ;
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
	    // { Name r~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_r~{idom}~{iSide};}
	    { Name e~{idom}; Type Local;  NameOfSpace Hcurl_e~{idom}; }
	    For j In {1:NP_OSRC}
	      // { Name rho~{j}~{idom}~{iSide}; Type Local;  NameOfSpace  Hgrad_rho~{j}~{idom}~{iSide};}
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
	    Galerkin { [ SM_sign*2*I[] * kDtN[] * N[] /\ ( N[] /\ {e~{idom}} ) , {g_out~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; } 
	  EndIf

	  If(OSRC)
	    Galerkin { [ (#10 > 0. ? Vector[0,0,0] : g_in~{idom}~{iSide}[]) , {g_out~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [(-2*padr0[])*{e~{idom}} , {g_out~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [(2*padr0[]/keps2[])* {d e~{idom}} , {d g_out~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    For j In{1:NP_OSRC}
	      Galerkin { [ -2 * padr~{j}[] * { phi~{j}~{idom}~{iSide}} , { g_out~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
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
      If(PRECOND_SWEEP)

    For iSide In{0:1}
      { Name ComputeIterationDataPrecond~{idom}~{iSide}; Type FemEquation;
        Quantity {
    	  { Name g_out~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_g_out~{idom}~{iSide}; }
    	  If(SILVER_MULLER)
    	    { Name e~{idom}; Type Local;  NameOfSpace Hcurl_e~{idom}; }
    	  EndIf
    	  If(OSRC)
    	    // { Name r~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_r~{idom}~{iSide};}
    	    For j In {1:NP_OSRC}
    	      // { Name rho~{j}~{idom}~{iSide}; Type Local;  NameOfSpace  Hgrad_rho~{j}~{idom}~{iSide};}
    	      { Name e~{idom}; Type Local;  NameOfSpace Hcurl_e~{idom}; }
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
    	    Galerkin { [ SM_sign*2*I[] * kDtN[] * N[] /\ ( N[] /\ {e~{idom}} ) , {g_out~{idom}~{iSide}} ];
    	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; } 
	  EndIf
    	  If(OSRC)
	    
	    // Galerkin { [ (#10 > 0. ? Vector[0,0,0] : g_in~{idom}~{iSide}[]) , {g_out~{idom}~{iSide}} ];
	    //   In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin{[ -ComplexVectorField[XYZ[]]{2*idom+iSide-1}, {g_out~{idom}~{iSide}}] ;
	      In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
	    Galerkin { [(-2*padr0[])*{e~{idom}} , {g_out~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [(2*padr0[]/keps2[])* {d e~{idom}} , {d g_out~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    For j In{1:NP_OSRC}
	      Galerkin { [ -2 * padr~{j}[] * { phi~{j}~{idom}~{iSide}} , { g_out~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
	    EndFor 

	    // Galerkin{[ ComplexVectorField[XYZ[]]{2*idom+iSide-1}, {g_out~{idom}~{iSide}}] ;
	    //   In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
    	    // Galerkin { [(2 * I[] / k)*OSRC_C0[]{NP_OSRC,theta_branch}*{r~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ] ;
    	    //   In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
    	    // For j In{1:NP_OSRC}
    	    //   Galerkin { [ (2 * I[] / k )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*{d phi~{j}~{idom}~{iSide}} , {d g_out~{idom}~{iSide}} ] ;
    	    //     In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
    	    //   Galerkin { [ (2 * I[] / k)*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*{d rho~{j}~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ] ;
    	    //     In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
    	    // EndFor 
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
      EndIf //PRECOND_SWEEP
    //////////////////////////// PRECOND_SWEEP //////////////////////////////////////
  EndFor
}

Resolution {
  { Name DDM;
    System {
      If(FULL_SOLUTION)
	{ Name Lag; NameOfFormulation Maxwell_Lagrange ; Type Complex; }
      EndIf
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	{ Name Maxw~{idom}; NameOfFormulation DDM_Maxwell~{idom} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
	For iSide In{0:1}
  	  { Name ComputeG~{idom}~{iSide}; NameOfFormulation ComputeIterationData~{idom}~{iSide} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
	  If(PRECOND_SWEEP)
	    { Name ComputeGPrecond~{idom}~{iSide}; NameOfFormulation ComputeIterationDataPrecond~{idom}~{iSide} ; Type Complex; If(MSH_SPLIT) NameOfMesh Sprintf(StrCat[MshName, "%g.msh"],idom) ; EndIf}
	  EndIf
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
	Printf[" ***** Using OSRC2 (Np = %g, k_eps = (1+%g)*k as transmission condition *****", NP_OSRC, kepsI];
      EndIf
      If(JFLee)
	Printf[" ***** Using JFLee as transmission condition *****"];
      EndIf
	Printf(" ** Relative tolerance: %g", TOL);

      If(SM_sign != 1)
	Printf(" ***** SM sign is reversed *****");
      EndIf

      //DDM
      SetCommSelf;
      // Compute rhs for Krylov -- physical sources only
      Evaluate[1. #10];
      Evaluate[0. #11]; Evaluate[0. #12];
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	If(MPI_Rank == idom%MPI_Size)
	  Generate[Maxw~{idom}];
	  Solve[Maxw~{idom}];
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
      If(PRECOND_SWEEP)
	For ii In {0: #ListOfDom()-1}
          idom = ListOfDom(ii);
	  If(MPI_Rank == idom%MPI_Size)
	    For iSide In{0:1}
      	      Generate[ComputeGPrecond~{idom}~{iSide}];
	    EndFor
	  EndIf
	EndFor
      EndIf
      SetCommWorld;

      //krylov
      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART, {ListOfField()}, {ListOfNeighborField()},{}] {
      	SetCommSelf;
      	Evaluate[1. #11]; Evaluate[1. #12];
      	For ii In {0: #ListOfDom()-1}
      	  idom = ListOfDom(ii);
      	If(MPI_Rank == idom%MPI_Size)
      	  GenerateRHSGroup[Maxw~{idom}, Sigma~{idom}];
      	  SolveAgain[Maxw~{idom}];
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
      	    For jj In {0: MPI_Size-1}
      	      If(jj==MPI_Rank && idom%MPI_Size == MPI_Rank)//(idom%MPI_Size == MPI_Rank)
      	        //Compute u on Omega_i (fast way)
      	        GenerateRHSGroup[Maxw~{idom}, Sigma~{idom}] ;
      	        SolveAgain[Maxw~{idom}] ; 
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
      	    For jj In {0:MPI_Size-1}
      	      If(jj==MPI_Rank && idom%MPI_Size == MPI_Rank)//(idom%MPI_Size == MPI_Rank)
      	        //Compute u on Omega_i (fast way)
      	        GenerateRHSGroup[Maxw~{idom}, Sigma~{idom}] ;
      	        SolveAgain[Maxw~{idom}] ;
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
      	  SolveAgain[Maxw~{idom}] ;
      	PostOperation[DDM~{idom}] ;
      	// EndIf
      EndFor
      SetCommWorld;
    }
  }
}

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
    If(PRECOND_SWEEP)
      For iSide In{0:1}
        { Name g_out_pc~{idom}~{iSide} ; NameOfFormulation ComputeIterationDataPrecond~{idom}~{iSide} ;
          Quantity {
	    { Name g_out~{idom}~{iSide} ; Value { Local { [ {g_out~{idom}~{iSide}} ] ; In Sigma~{idom}~{iSide}; Jacobian JSur ; } } }
          }
        }
      EndFor
    EndIf
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
	If(!((idom == 0 && iSide == 0) || (idom == N_DOM-1 && iSide == 1)))
	  Print[ g_out~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide}, StoreInField 2*idom+iSide-1]; // FIXME: is this ok in case of 'pie' decomposition ??
	EndIf
      }
    }
    EndFor
    If(PRECOND_SWEEP)
      For iSide In{0:1}
        { Name g_out_pc~{idom}~{iSide} ; NameOfPostProcessing g_out_pc~{idom}~{iSide};
          Operation{

    	    If(!((idom == 0 && iSide == 0) || (idom == N_DOM-1 && iSide == 1)))
    	      Print[ g_out~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide}, StoreInField 2*idom+iSide-1];

    	  // // If (MPI_Size > 1)
    	  // Print[ g_out~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide}, StoreInField (4-iSide)*N_DOM+idom+1-2*(1-iSide)];
    	  // // EndIf

    	    EndIf
        }
      }
      EndFor
    EndIf
  EndFor  
}
