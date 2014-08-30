// Simple DDM example for Helmholtz

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
    For iSide In {0:1}
      BndSigmaD~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide},
                                        Not {GammaN~{idom}, GammaInf~{idom}}];
      BndSigmaN~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide},
                                        Not {GammaD~{idom}, GammaInf~{idom}}];
      BndSigmaInf~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide},
                                          Not {GammaN~{idom}, GammaD~{idom}}];
    EndFor
  EndFor
}

Constraint{
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Dirichlet~{idom} ; Case { { Region GammaD~{idom} ; Value uinc[] * #10;} } }
    { Name Dirichlet0~{idom} ; Case { { Region GammaD0~{idom} ; Value 0.;} } }
  EndFor
}

FunctionSpace {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Hgrad_u~{idom} ; Type Form0 ;
      BasisFunction {
        { Name sn ; NameOfCoef un ; Function BF_Node ;
          Support Region[ {Omega~{idom}, GammaInf~{idom}, BndGammaInf~{idom},
              Sigma~{idom}, BndSigma~{idom}, GammaD~{idom}, GammaD0~{idom}} ] ;
          Entity NodesOf[ All ] ;
        }
      }
      Constraint {
        { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet~{idom} ; }
        { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint Dirichlet0~{idom} ; }
      }
    }

  For iSide In {0:1}
    { Name Hgrad_g_out~{idom}~{iSide}; Type Form0 ;
      BasisFunction {
	{ Name sn ; NameOfCoef un ; Function BF_Node ;
	  Support Region[ {Sigma~{idom}~{iSide}} ] ;
          Entity NodesOf[All, Not {GammaD~{idom}, GammaD0~{idom}}];
        }
      }
    }
    If (TC_TYPE == 2)
      For j In {1:NP_OSRC}
        { Name Hgrad_phi~{j}~{idom}~{iSide} ; Type Form0 ;
          BasisFunction {
            { Name sn ; NameOfCoef un ; Function BF_Node ;
	      Support Region[ {Sigma~{idom}~{iSide}, BndSigmaInf~{idom}~{iSide}, BndSigmaN~{idom}~{iSide}} ] ;
              Entity NodesOf[All, Not {GammaD~{idom}, GammaD0~{idom}}] ;
            }
	  }
        }
      EndFor
    EndIf
   EndFor
 EndFor
}

Formulation {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM_Helmholtz~{idom} ; Type FemEquation ;
      Quantity {
        { Name u~{idom} ; Type Local ; NameOfSpace Hgrad_u~{idom}; }
        For iSide In {0:1}
          { Name g_out~{idom}~{iSide} ; Type Local ; NameOfSpace Hgrad_g_out~{idom}~{iSide}; }
          If(TC_TYPE == 2)
            For j In{1:NP_OSRC}
              { Name phi~{j}~{idom}~{iSide}; Type Local ; NameOfSpace Hgrad_phi~{j}~{idom}~{iSide}; }
            EndFor
          EndIf
        EndFor
      }
      Equation {
        Galerkin { [ Dof{Grad u~{idom}} , {Grad u~{idom}} ] ;
          In Omega~{idom}; Jacobian JVol ; Integration I1 ; }
        Galerkin { [ -k[]^2 * Dof{u~{idom}} , {u~{idom}} ] ;
          In Omega~{idom}; Jacobian JVol ; Integration I1 ; }

        Galerkin { [ - (#11 > 0. ? g_in~{idom}~{0}[] : 0), {u~{idom}} ] ;
          In Sigma~{idom}~{0}; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ - (#12 > 0. ? g_in~{idom}~{1}[] : 0), {u~{idom}} ] ;
          In Sigma~{idom}~{1}; Jacobian JSur ; Integration I1 ; }

        // transmission condition
        If(TC_TYPE == 0)
          Galerkin { [ - I[] * kDtN[] * Dof{u~{idom}} , {u~{idom}} ] ;
            In Sigma~{idom}; Jacobian JSur ; Integration I1 ; }
        EndIf

        If(TC_TYPE == 1)
          Galerkin { [ a[] * Dof{u~{idom}} , {u~{idom}} ] ;
            In Sigma~{idom}; Jacobian JSur ; Integration I1 ; }
          Galerkin { [ -b[] * Dof{d u~{idom}} , {d u~{idom}} ] ;
            In Sigma~{idom}; Jacobian JSur ; Integration I1 ; }
        EndIf

        If(TC_TYPE == 2)
          Galerkin { [  - I[] * k[] * OSRC_C0[]{NP_OSRC,theta_branch} * Dof{u~{idom}} , {u~{idom}} ] ;
            In Sigma~{idom}; Jacobian JSur ; Integration I1 ; }
          For iSide In {0:1}
            For j In{1:NP_OSRC}
              Galerkin { [   I[] * k[] * OSRC_Aj[]{j,NP_OSRC,theta_branch} / keps[]^2 *
                  Dof{d phi~{j}~{idom}~{iSide}} , {d u~{idom}} ] ;
                In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
              Galerkin { [ - I[] * k[] * OSRC_Aj[]{j,NP_OSRC,theta_branch} / keps[]^2 *
                  ( I[] * kInf[] * Dof{phi~{j}~{idom}~{iSide}}) , {u~{idom}} ] ; // experimental
                In BndSigmaInf~{idom}~{iSide}; Jacobian JLin ; Integration I1 ; }
              Galerkin { [ - OSRC_Bj[]{j,NP_OSRC,theta_branch} / keps[]^2 *
                  Dof{d phi~{j}~{idom}~{iSide}} , {d phi~{j}~{idom}~{iSide}} ] ;
                In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
              Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch} / keps[]^2 *
                  ( I[] * kInf[] * Dof{phi~{j}~{idom}~{iSide}}) , {phi~{j}~{idom}~{iSide}} ] ; // experimental
                In BndSigmaInf~{idom}~{iSide}; Jacobian JLin ; Integration I1 ; }
              Galerkin { [ Dof{phi~{j}~{idom}~{iSide}} , {phi~{j}~{idom}~{iSide}} ] ;
                In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
              Galerkin { [  - Dof{u~{idom}} , {phi~{j}~{idom}~{iSide}} ] ;
                In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
            EndFor
          EndFor
        EndIf

        // Bayliss-Turkel absorbing boundary condition

        Galerkin { [ - I[] * kInf[] * Dof{u~{idom}} , {u~{idom}} ] ;
          In GammaInf~{idom}; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ alphaBT[] * Dof{u~{idom}} , {u~{idom}} ] ;
          In GammaInf~{idom}; Jacobian JSur ; Integration I1 ; }
        // this assumes that GammaInf is closed; we need to add the boundary terms if it is open
        Galerkin { [ betaBT[] * Dof{d u~{idom}} , {d u~{idom}} ] ;
          In GammaInf~{idom}; Jacobian JSur ; Integration I1 ; }
      }
    }


    // Compute the outgoing data
    For iSide In {0:1}
      { Name ComputeG~{idom}~{iSide} ; Type FemEquation ;
        Quantity {
          { Name u~{idom} ; Type Local ; NameOfSpace Hgrad_u~{idom}; }
          { Name g_out~{idom}~{iSide} ; Type Local ; NameOfSpace Hgrad_g_out~{idom}~{iSide}; }
          If(TC_TYPE == 2)
            For j In{1:NP_OSRC}
              { Name phi~{j}~{idom}~{iSide}; Type Local ; NameOfSpace Hgrad_phi~{j}~{idom}~{iSide}; }
            EndFor
          EndIf
        }
        Equation {
          Galerkin { [ Dof{g_out~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ] ;
            In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
          If(iSide == 0)
            Galerkin { [ (#11 > 0. ? g_in~{idom}~{0}[]:0)  , {g_out~{idom}~{0}} ] ;
              In Sigma~{idom}~{0}; Jacobian JSur ; Integration I1 ; }
          EndIf
          If(iSide == 1)
            Galerkin { [ (#12 > 0. ? g_in~{idom}~{1}[]:0)  , {g_out~{idom}~{1}} ] ;
              In Sigma~{idom}~{1}; Jacobian JSur ; Integration I1 ; }
          EndIf
          If(TC_TYPE == 0)
            Galerkin { [ 2 * I[] * kDtN[] * {u~{idom}} , {g_out~{idom}~{iSide}} ] ;
              In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
          EndIf
          If(TC_TYPE == 1)
            Galerkin { [ - 2 * a[] * {u~{idom}} , {g_out~{idom}~{iSide}} ] ;
              In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
            Galerkin { [ 2 * b[] * {d u~{idom}} , {d g_out~{idom}~{iSide}} ] ;
              In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
          EndIf
          If(TC_TYPE == 2)
            Galerkin { [ 2 * ( I[] * k[] * OSRC_C0[]{NP_OSRC,theta_branch} *
                  {u~{idom}} ) , {g_out~{idom}~{iSide}} ] ;
              In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
            For j In{1:NP_OSRC}
              // replace the div-grad term by its value in terms of u and phi
              // (eq. (59) of the paper); no integration by parts in this case,
              // hence no boundary term
              Galerkin { [  2 * ( I[] * k[] * OSRC_Aj[]{j,NP_OSRC,theta_branch} /
                    OSRC_Bj[]{j,NP_OSRC,theta_branch} *
                    ({u~{idom}} - {phi~{j}~{idom}~{iSide}})) , {g_out~{idom}~{iSide}} ] ;
                In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
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
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        { Name Helmholtz~{idom} ; NameOfFormulation DDM_Helmholtz~{idom} ;
          Type Complex; NameOfMesh Sprintf(StrCat[MSH_NAME, "%g.msh"],idom) ; }
        For iSide In {0:1}
          { Name ComputeG~{idom}~{iSide} ; NameOfFormulation ComputeG~{idom}~{iSide} ;
            Type Complex; NameOfMesh Sprintf(StrCat[MSH_NAME, "%g.msh"],idom) ; }
        EndFor
      EndFor
    }
    Operation {
      If (MPI_Rank == 0)
        Printf["Starting Helmholtz DDM with %g subdomains / %g processes", N_DOM, MPI_Size];
        If(TC_TYPE == 0)
          Printf["Using 0-th order (Sommerfeld/EMDA) transmission conditions"];
        EndIf
        If(TC_TYPE == 1)
          Printf["Using 2-nd order (OO2) transmission conditions"];
        EndIf
        If(TC_TYPE == 2)
          Printf["Using %g-th order Pade (OSRC) transmission conditions", NP_OSRC];
        EndIf
        Printf["Relative iterative solver tolerance = %g", TOL];
      EndIf

      // synchronize all mpi processes and start work on own cpu
      Barrier;
      SetCommSelf;

      // compute rhs for krylov -- physical sources only
      Evaluate[1. #10];
      Evaluate[0. #11]; Evaluate[0. #12];

      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
	UpdateConstraint[Helmholtz~{idom}, GammaD~{idom}, Assign];
        Generate[Helmholtz~{idom}] ;
        Solve[Helmholtz~{idom}] ;
	For iSide In {0:1}
	  If( NbrRegions[Sigma~{idom}~{iSide}] )
	    Generate[ComputeG~{idom}~{iSide}] ;
	    Solve[ComputeG~{idom}~{iSide}] ;
	  EndIf
	EndFor
      EndFor

      For ii In {0: #ListOfDom()-1}
	idom = ListOfDom(ii);
	For iSide In {0:1}
	  PostOperation[g_out~{idom}~{iSide}] ; // compute g_in for next iteration
	EndFor
      EndFor

      // update "Dirichlet" Boundary condition (homogenous now)
      Evaluate[0. #10];
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        UpdateConstraint[Helmholtz~{idom}, GammaD~{idom}, Assign];
      EndFor

      // launch iterative Krylov solver on all cpus
      SetCommWorld;

      IterativeLinearSolver["I-A", SOLVER, TOL, MAXIT, RESTART,
                            {ListOfField()}, {ListOfNeighborField()}, {}]
      {
	SetCommSelf;
        // setting non homogeneous BC on transmission boundaries
	Evaluate[1. #11]; Evaluate[1. #12];
	// Solve Helmholtz on each of my subdomain
	For ii In {0: #ListOfDom()-1}
	  idom = ListOfDom(ii);
	  GenerateRHSGroup[Helmholtz~{idom}, Sigma~{idom}] ;
          SolveAgain[Helmholtz~{idom}] ;
	  For iSide In {0:1}
	    If( NbrRegions[Sigma~{idom}~{iSide}] )
	      GenerateRHSGroup[ComputeG~{idom}~{iSide}, Sigma~{idom}~{iSide}] ;
	      SolveAgain[ComputeG~{idom}~{iSide}] ;
	    EndIf
	  EndFor
	EndFor
      	// update view (must be done after all resolutions)
	For ii In {0: #ListOfDom()-1}
	  idom = ListOfDom(ii);
	  For iSide In {0:1}
	    PostOperation[g_out~{idom}~{iSide}] ;
	  EndFor
	EndFor
	SetCommWorld;
      }
      {
      }

      // build final volume solution after convergence on own cpu; using both
      // physical and artificial sources
      SetCommSelf;
      Evaluate[1. #10];
      Evaluate[1. #11]; Evaluate[1. #12];
      For ii In {0: #ListOfDom()-1}
        idom = ListOfDom(ii);
        UpdateConstraint[Helmholtz~{idom}, GammaD~{idom}, Assign];
        GenerateRHSGroup[Helmholtz~{idom}, Region[{Sigma~{idom}, TrGr~{idom}}] ] ;
        SolveAgain[Helmholtz~{idom}] ;
        PostOperation[DDM~{idom}] ;
      EndFor
      SetCommWorld;
    }
  }
}

PostProcessing {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM_Helmholtz~{idom} ; NameOfFormulation DDM_Helmholtz~{idom} ;
      PostQuantity {
        { Name u~{idom} ; Value { Local { [ {u~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name u_tot~{idom} ; Value { Local { [ {u~{idom}} + uinc[]] ; In Omega~{idom}; Jacobian JVol ; } } }
      }
    }
    For iSide In {0:1}
      { Name g_out~{idom}~{iSide} ; NameOfFormulation ComputeG~{idom}~{iSide} ;
	PostQuantity {
          { Name g_out~{idom}~{iSide} ; Value { Local { [ {g_out~{idom}~{iSide}} ] ;
                In Sigma~{idom}~{iSide}; Jacobian JSur ; } } }
	}
      }
    EndFor
  EndFor
}

PostOperation {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM~{idom} ; NameOfPostProcessing DDM_Helmholtz~{idom};
      Operation {
        Print[ u~{idom}, OnElementsOf Omega~{idom}, File StrCat(DIR, Sprintf("u_%g.pos",idom))] ;
        //Print[ u_tot~{idom}, OnElementsOf Omega~{idom}, File StrCat(DIR, Sprintf("u_tot_%g.pos",idom))] ;
      }
    }
    For iSide In {0:1}
      { Name g_out~{idom}~{iSide} ; NameOfPostProcessing g_out~{idom}~{iSide};
	Operation {
          Print[ g_out~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide},
                 StoreInField (2*(idom+N_DOM)+(iSide-1))%(2*N_DOM)
                 /*, File Sprintf("gg%g_%g.pos",idom, iSide)*/] ;
	}
      }
    EndFor
  EndFor
}
