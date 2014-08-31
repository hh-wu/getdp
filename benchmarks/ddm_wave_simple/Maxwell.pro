// Simple DDM example for Maxwell

Jacobian {
  { Name JVol ; Case{ { Region All ; Jacobian Vol ; } } }
  { Name JSur ; Case { { Region All ; Jacobian Sur ; } } }
  { Name JLin ; Case { { Region All ; Jacobian Lin ; } } }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
          { GeoElement Point ; NumberOfPoints  1 ; }
          { GeoElement Line ; NumberOfPoints  2 ; }
          { GeoElement Triangle ; NumberOfPoints 3 ; }
          { GeoElement Quadrangle ; NumberOfPoints 4 ; }
          { GeoElement Tetrahedron ; NumberOfPoints 4 ; }
          { GeoElement Hexahedron ; NumberOfPoints 6 ; }
          { GeoElement Prism ; NumberOfPoints 9 ; }
        }
      }
    }
  }
}

Group{
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    TrGr~{idom} = ElementsOf[ Omega~{idom}, OnOneSideOf GammaD~{idom} ];
  EndFor
}

Function{
  al[] = -1/(keps[]^2);
  be[] =  1/(keps[]^2);
}

Constraint{
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Dirichlet_e_homog~{idom} ;
      Case {
        { Region GammaD0~{idom} ; Type Assign ; Value 0. ; }
      }
    }
  EndFor
}

FunctionSpace {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Hcurl_e~{idom}; Type Form1;
      BasisFunction {
        { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{Omega~{idom}, GammaD~{idom}, GammaInf~{idom}, Sigma~{idom}, GammaD0~{idom}}] ;
          Entity EdgesOf[All]; }
      }
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog~{idom}; }
      }
    }

    { Name Hcurl_h~{idom}; Type Form1;
      BasisFunction {
        { Name sh; NameOfCoef he; Function BF_Edge;
	  Support Region[{Omega~{idom}, GammaD~{idom}, GammaInf~{idom}, Sigma~{idom}}] ;
          Entity EdgesOf[All]; }
      }
    }

    { Name Hcurl_lambda~{idom}; Type Form1;
      BasisFunction {
        { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{GammaD~{idom}}] ; Entity EdgesOf[All]; }
      }
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf ; NameOfConstraint Dirichlet_e_homog~{idom}; }
      }
    }

    For iSide In {0:1}
    { Name Hcurl_g_out~{idom}~{iSide}; Type Form1;
      BasisFunction {
        { Name se; NameOfCoef ee; Function BF_Edge;
	  Support Region[{Sigma~{idom}~{iSide}}] ;
          Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaD~{idom}, GammaD0~{idom}, GammaInf~{idom}}]; }
      }
    }
    EndFor

    If(TC_TYPE == 1)
      For iSide In {0:1}
	{ Name Hgrad_rho~{idom}~{iSide} ; Type Form0 ;
	  BasisFunction {
            { Name srh1; NameOfCoef erh1; Function BF_Node;
	      Support Region[{Sigma~{idom}~{iSide}}] ;
              Entity NodesOf[Sigma~{idom}~{iSide}, Not {GammaD~{idom}, GammaD0~{idom}}]; }
          }
	}
	{ Name Hcurl_phi~{idom}~{iSide}; Type Form1;
	  BasisFunction {
            { Name sph1; NameOfCoef eph1; Function BF_Edge;
	      Support Region[{Sigma~{idom}~{iSide}}] ;
              Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaD~{idom}, GammaD0~{idom}}]; }
          }
	}
      EndFor
    EndIf

    If(TC_TYPE == 2)
      For iSide In {0:1}
        { Name Hcurl_r~{idom}~{iSide}; Type Form1;
          BasisFunction {
            { Name ser1; NameOfCoef eer1; Function BF_Edge;
	      Support Region[{Sigma~{idom}~{iSide}}] ;
              Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaD~{idom}, GammaD0~{idom}, GammaInf~{idom}}]; }
          }
        }
        For j In {1:NP_OSRC}
	  { Name Hgrad_rho~{j}~{idom}~{iSide} ; Type Form0 ;
	    BasisFunction {
              { Name srh1; NameOfCoef erh1; Function BF_Node;
	        Support Region[{Sigma~{idom}~{iSide}}] ;
                Entity NodesOf[Sigma~{idom}~{iSide}, Not {GammaD~{idom}, GammaD0~{idom}, GammaInf~{idom}}]; }
            }
	  }
	  { Name Hcurl_phi~{j}~{idom}~{iSide}; Type Form1;
	    BasisFunction {
              { Name sph1; NameOfCoef eph1; Function BF_Edge;
		Support Region[{Sigma~{idom}~{iSide}}] ;
                Entity EdgesOf[Sigma~{idom}~{iSide}, Not {GammaD~{idom}, GammaD0~{idom}, GammaInf~{idom}}]; }
            }
	  }
        EndFor
      EndFor
    EndIf

  EndFor
}

Formulation {

  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM_Maxwell~{idom}; Type FemEquation;
      Quantity {
	{ Name e~{idom}; Type Local; NameOfSpace Hcurl_e~{idom}; }
	{ Name h~{idom}; Type Local; NameOfSpace Hcurl_h~{idom}; }
	{ Name lambda~{idom}; Type Local; NameOfSpace Hcurl_lambda~{idom}; }
	If(TC_TYPE == 1)
	  For iSide In {0:1}
	    { Name rho~{idom}~{iSide}; Type Local; NameOfSpace Hgrad_rho~{idom}~{iSide};}
	    { Name phi~{idom}~{iSide}; Type Local; NameOfSpace Hcurl_phi~{idom}~{iSide};}
	  EndFor
	EndIf
	If(TC_TYPE == 2)
	  For iSide In {0:1}
	    { Name r~{idom}~{iSide}; Type Local; NameOfSpace Hcurl_r~{idom}~{iSide};}
	    For j In {1:NP_OSRC}
	      { Name rho~{j}~{idom}~{iSide}; Type Local; NameOfSpace Hgrad_rho~{j}~{idom}~{iSide};}
	      { Name phi~{j}~{idom}~{iSide}; Type Local; NameOfSpace Hcurl_phi~{j}~{idom}~{iSide};}
	    EndFor
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

        // boundary condition using Lagrange multiplier
        Galerkin { [ Dof{lambda~{idom}} , {e~{idom}} ] ;
	  In GammaD~{idom}; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ 0*Dof{lambda~{idom}} , {lambda~{idom}} ] ; // don't remove this
	  In GammaD~{idom}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ Dof{e~{idom}} , {lambda~{idom}} ] ;
	  In GammaD~{idom}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ (#10 > 0. ? einc[]: Vector[0,0,0]), {lambda~{idom}} ] ;
	  In GammaD~{idom}; Jacobian JSur ; Integration I1 ; }

        // transmission condition
	If(TC_TYPE == 0)
	  Galerkin { [ (#11 > 0. ? g_in~{idom}~{0}[] : Vector[0,0,0]) , {e~{idom}} ];
	    In Sigma~{idom}~{0}; Integration I1; Jacobian JSur; }
	Galerkin { [ (#12 > 0. ? g_in~{idom}~{1}[] : Vector[0,0,0]) , {e~{idom}} ];
	    In Sigma~{idom}~{1}; Integration I1; Jacobian JSur; }
	  Galerkin { [ I[] * kDtN[] * N[] /\ ( N[] /\ Dof{e~{idom}} ), {e~{idom}} ];
	    In Sigma~{idom}; Integration I1; Jacobian JSur; }
	EndIf

	If(TC_TYPE == 1)
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

	If(TC_TYPE == 2)
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
	    Galerkin { [(I[] / k[])*OSRC_C0[]{NP_OSRC,theta_branch} *
                Dof{r~{idom}~{iSide}} , {r~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    For j In{1:NP_OSRC}
	      Galerkin { [ (I[] / k[] )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*
                  Dof{d phi~{j}~{idom}~{iSide}} , {d r~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
	      Galerkin { [ (I[] / k[])*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*
                  Dof{d rho~{j}~{idom}~{iSide}} , {r~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	      Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*al[]*
                  Dof{d phi~{j}~{idom}~{iSide}} , {d phi~{j}~{idom}~{iSide}} ] ;
		In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	      Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*be[]*
                  Dof{d rho~{j}~{idom}~{iSide}} , {phi~{j}~{idom}~{iSide}} ] ;
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

        // store magnetic field on layer of elements touching the boundary
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
	  If(TC_TYPE == 0)
	    { Name e~{idom}; Type Local;  NameOfSpace Hcurl_e~{idom}; }
	  EndIf
	  If(TC_TYPE == 1)
	    { Name rho~{idom}~{iSide}; Type Local; NameOfSpace Hgrad_rho~{idom}~{iSide};}
	    { Name phi~{idom}~{iSide}; Type Local; NameOfSpace Hcurl_phi~{idom}~{iSide};}
	  EndIf
	  If(TC_TYPE == 2)
	    { Name r~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_r~{idom}~{iSide};}
	    For j In {1:NP_OSRC}
	      { Name rho~{j}~{idom}~{iSide}; Type Local;  NameOfSpace Hgrad_rho~{j}~{idom}~{iSide};}
	      { Name phi~{j}~{idom}~{iSide}; Type Local;  NameOfSpace Hcurl_phi~{j}~{idom}~{iSide};}
	    EndFor
	  EndIf
        }
	Equation {
	  Galerkin { [ Dof{g_out~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ];
	    In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }

	  If(TC_TYPE == 0)
  	    Galerkin { [ (#10 > 0. ? Vector[0,0,0] : g_in~{idom}~{iSide}[]) , {g_out~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [ 2*I[] * kDtN[] * N[] /\ ( N[] /\ {e~{idom}} ) , {g_out~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	  EndIf

	  If(TC_TYPE == 1)
	    Galerkin { [ (#10 > 0. ? Vector[0,0,0] : g_in~{idom}~{iSide}[]) , {g_out~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [ -2 * { phi~{idom}~{iSide}} , { g_out~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
	  EndIf

	  If(TC_TYPE == 2)
	    Galerkin { [ (#10 > 0. ? Vector[0,0,0] : -g_in~{idom}~{iSide}[]) , {g_out~{idom}~{iSide}} ];
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    Galerkin { [ (2 * I[] / k[])*OSRC_C0[]{NP_OSRC,theta_branch}*
                {r~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ] ;
	      In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    For j In{1:NP_OSRC}
	      Galerkin { [ (2 * I[] / k[] )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*
                  {d phi~{j}~{idom}~{iSide}} , {d g_out~{idom}~{iSide}} ] ;
	        In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
	      Galerkin { [ (2 * I[] / k[])*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*
                  {d rho~{j}~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ] ;
	        In Sigma~{idom}~{iSide}; Integration I1; Jacobian JSur; }
	    EndFor
	  EndIf

        }
      }
    EndFor

  EndFor
}

Resolution {
  { Name DDM;
    System {
      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	{ Name Maxw~{idom}; NameOfFormulation DDM_Maxwell~{idom} ;
          Type Complex; NameOfMesh Sprintf(StrCat[MSH_NAME, "%g.msh"],idom) ; }
	For iSide In{0:1}
  	  { Name ComputeG~{idom}~{iSide}; NameOfFormulation ComputeIterationData~{idom}~{iSide} ;
            Type Complex; NameOfMesh Sprintf(StrCat[MSH_NAME, "%g.msh"],idom) ; }
	EndFor
      EndFor
    }
    Operation {
      If (MPI_Rank == 0)
        Printf["Starting Maxwell DDM with %g subdomains / %g processes", N_DOM, MPI_Size];
        If(TC_TYPE == 0)
          Printf["Using 0-th order (Silver-Muller) transmission conditions"];
        EndIf
        If(TC_TYPE == 1)
          Printf["Using 2-nd order (OO2/J.-F. Lee) transmission conditions"];
        EndIf
        If(TC_TYPE == 2)
          Printf["Using %g-th order Pade (OSRC) transmission conditions", NP_OSRC];
        EndIf
        Printf["Relative iterative solver tolerance = %g", TOL];
      EndIf

      SetGlobalSolverOptions["-petsc_prealloc 200"];

      // synchronize all mpi processes and start work on own cpu
      Barrier;
      SetCommSelf;

      // compute rhs for Krylov -- physical sources only
      Evaluate[1. #10];
      Evaluate[0. #11]; Evaluate[0. #12];

      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
        Generate[Maxw~{idom}];
        Solve[Maxw~{idom}];
        For iSide In{0:1}
          If( NbrRegions[Sigma~{idom}~{iSide}] )
            Generate[ComputeG~{idom}~{iSide}];
            Solve[ComputeG~{idom}~{iSide}];
          EndIf
        EndFor
      EndFor

      For ii In {0: #ListOfDom()-1}
      	idom = ListOfDom(ii);
        For iSide In{0:1}
          PostOperation[g_out~{idom}~{iSide}];
        EndFor
      EndFor

      // no physical sources from now on
      Evaluate[0. #10];

      // launch iterative Krylov solver on all cpus
      SetCommWorld;

      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART, {ListOfField()}, {ListOfNeighborField()},{}]
      {
        // do matrix-vector product on own cpu
        SetCommSelf;
        // setting non homogeneous BC on transmission boundaries
      	Evaluate[1. #11]; Evaluate[1. #12];
      	For ii In {0: #ListOfDom()-1}
      	  idom = ListOfDom(ii);
          GenerateRHSGroup[Maxw~{idom}, Sigma~{idom}];
          SolveAgain[Maxw~{idom}];
          For iSide In{0:1}
            If( NbrRegions[Sigma~{idom}~{iSide}] )
              GenerateRHSGroup[ComputeG~{idom}~{iSide}, Sigma~{idom}~{iSide}];
              SolveAgain[ComputeG~{idom}~{iSide}];
            EndIf
          EndFor
      	EndFor
      	// update view (must be done after all resolutions)
      	For ii In {0: #ListOfDom()-1}
      	  idom = ListOfDom(ii) ;
          For iSide In{0:1}
            PostOperation[g_out~{idom}~{iSide}] ;
          EndFor
      	EndFor
      	SetCommWorld;
      }
      {
      }

      DeleteFile[ "/tmp/kspiter.txt" ];
      Print[ {$KSPIts} , File "/tmp/kspiter.txt"];

      // build final volume solution after convergence on own cpu; using both
      // physical and artificial sources
      SetCommSelf;
      Evaluate[1. #10];
      Evaluate[1. #11]; Evaluate[1. #12];
      For ii In {0: #ListOfDom()-1}
      	idom = ListOfDom(ii);
        GenerateRHSGroup[Maxw~{idom}, Region[{Sigma~{idom}, GammaD~{idom}}]];
        SolveAgain[Maxw~{idom}] ;
        PostOperation[DDM~{idom}] ;
      EndFor
      SetCommWorld;
    }
  }
}

PostProcessing {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM_Maxwell~{idom} ; NameOfFormulation DDM_Maxwell~{idom} ;
      Quantity {
	{ Name e~{idom} ; Value { Local { [ {e~{idom}}] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name e_tot~{idom} ; Value { Local { [ {e~{idom}} + einc[]] ; In Omega~{idom}; Jacobian JVol ; } } }
        { Name norm_e~{idom} ; Value { Local { [ Norm[{e~{idom}}] ] ; In Omega~{idom}; Jacobian JVol ; } } }
        { Name norm_e_tot~{idom} ; Value { Local { [ Norm[{e~{idom}} + einc[]]] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name h~{idom} ; Value { Local { [ {h~{idom}} ] ; In GammaD~{idom}; Jacobian JSur ; } } }
        { Name j~{idom} ; Value { Local { [ N[] /\ ({h~{idom}}) ] ; In GammaD~{idom}; Jacobian JSur ; } } }
      }
    }
    For iSide In{0:1}
      { Name g_out~{idom}~{iSide} ; NameOfFormulation ComputeIterationData~{idom}~{iSide} ;
        Quantity {
	  { Name g_out~{idom}~{iSide} ;
            Value { Local { [ {g_out~{idom}~{iSide}} ] ; In Sigma~{idom}~{iSide}; Jacobian JSur ; } } }
      }
    }
    EndFor
  EndFor
}

PostOperation {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM~{idom} ; NameOfPostProcessing DDM_Maxwell~{idom};
      Operation{
         Print[ e~{idom}, OnElementsOf Omega~{idom}, File StrCat(DIR, Sprintf("e_%g.pos",idom))] ;
         Print[ e_tot~{idom}, OnElementsOf Omega~{idom}, File StrCat(DIR, Sprintf("e_tot_%g.pos",idom))] ;
         Print[ norm_e_tot~{idom}, OnElementsOf Omega~{idom}, File StrCat(DIR, Sprintf("norm_e_tot_%g.pos",idom))] ;
        // Print[ h~{idom}, OnElementsOf GammaD~{idom}, File StrCat(DIR, Sprintf("h_%g.pos",idom))] ;
	// Print[ j~{idom}, OnElementsOf GammaD~{idom}, File StrCat(DIR, Sprintf("j_%g.pos", idom))] ;
      }
    }
    For iSide In{0:1}
    { Name g_out~{idom}~{iSide} ; NameOfPostProcessing g_out~{idom}~{iSide};
      Operation{
        Print[ g_out~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide},
               StoreInField (2*(idom+N_DOM)+(iSide-1))%(2*N_DOM)
               /*, File Sprintf("gg%g_%g.pos",idom, jdom)*/] ;
      }
    }
    EndFor
  EndFor
}
