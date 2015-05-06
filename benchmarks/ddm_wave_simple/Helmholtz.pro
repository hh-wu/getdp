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

Function{
  For idom In {0:N_DOM-1}
    If (idom % MPI_Size == MPI_Rank)
      // g_in_c~{idom}~{0}[Sigma~{idom}~{0}] = (1 ? ComplexScalarField[XYZ[]]{4*N_DOM+2*idom-2} : 0.);
      // g_in_c~{idom}~{1}[Sigma~{idom}~{1}] = (1 ? ComplexScalarField[XYZ[]]{4*N_DOM+2*idom+1} : 0.);
      g_in_c~{idom}~{0}[Sigma~{idom}~{0}] = g_in~{idom}~{0}[]; // xF -- this variant converges slightly faster since it is even more 'Gauss-Seidel oriented': it is not using a copy of 
      g_in_c~{idom}~{1}[Sigma~{idom}~{1}] = g_in~{idom}~{1}[]; // the input data, but rather data updated by the other sweep after the sweeps have crossed ; hence behaves differently when used sequentially since the sweeps are performed sequentially, thus the backward sweep uses only updated data
    EndIf
  EndFor
}

Group{
  gPml = 1.; // 1. if d_n computed on Pml side; -1. if Omega side -- best choice is unclear (more testing needed), sticking to 1. for now
  If (TC_TYPE != 3) gPml = 1.; EndIf

  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    TrOmegaGammaD~{idom} = ElementsOf[ Omega~{idom}, OnOneSideOf GammaD~{idom} ];
    For iSide In {0:1}
      BndSigmaD~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide},
                                        Not {GammaN~{idom}, GammaInf~{idom}}];
      BndSigmaN~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide},
                                        Not {GammaD~{idom}, GammaInf~{idom}}];
      BndSigmaInf~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide},
                                          Not {GammaN~{idom}, GammaD~{idom}}];
      DefineGroup [ Pml~{idom}~{iSide}, PmlD0~{idom}~{iSide}, PmlInf~{idom}~{iSide} ] ;

      // choose on what side the d_n will be computed
      If (gPml == 1.)
	TrPmlSigma~{idom}~{iSide} = ElementsOf[ Pml~{idom}~{iSide},
						OnOneSideOf Sigma~{idom}~{iSide} ];
      EndIf
      If (gPml != 1.)
	gPml = -1.;
        TrPmlSigma~{idom}~{iSide} = ElementsOf[ Omega~{idom},
						OnOneSideOf Sigma~{idom}~{iSide} ];
      EndIf
    EndFor
  EndFor
}

Constraint{
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Dirichlet~{idom} ;
      Case {
        { Region GammaD~{idom} ; Value uinc[] * #10; }
      }
    }
    { Name Dirichlet0~{idom} ;
      Case {
        { Region GammaD0~{idom} ; Value 0.; }
        { Region PmlD0~{idom}~{0} ; Value 0.; }
        { Region PmlD0~{idom}~{1} ; Value 0.; }
      }
    }
  EndFor
}

FunctionSpace {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Hgrad_u~{idom} ; Type Form0 ;
      BasisFunction {
        { Name sn ; NameOfCoef un ; Function BF_Node ;
          Support Region[ {Omega~{idom}, Pml~{idom}~{0}, Pml~{idom}~{1},
              GammaInf~{idom}, BndGammaInf~{idom}, PmlInf~{idom}~{0}, PmlInf~{idom}~{1},
              Sigma~{idom}, BndSigma~{idom}} ] ;
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
            Support Region[ {Sigma~{idom}~{iSide}, Pml~{idom}~{iSide}} ] ;
            Entity NodesOf[ Sigma~{idom}~{iSide}, Not {GammaD~{idom}, GammaD0~{idom}}];
          }
        }
      }
      If (TC_TYPE == 2)
        For j In {1:NP_OSRC}
          { Name Hgrad_phi~{j}~{idom}~{iSide} ; Type Form0 ;
            BasisFunction {
              { Name sn ; NameOfCoef un ; Function BF_Node ;
                Support Region[ {Sigma~{idom}~{iSide},
                    BndSigmaInf~{idom}~{iSide}, BndSigmaN~{idom}~{iSide}} ] ;
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
    { Name Vol~{idom} ; Type FemEquation ;
      Quantity {
        { Name u~{idom} ; Type Local ; NameOfSpace Hgrad_u~{idom}; }
        For iSide In {0:1}
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
	// same story, modified for SGS
	Galerkin { [ - (#21 > 0. ? g_in_c~{idom}~{0}[] : 0), {u~{idom}} ] ;
	  In Sigma~{idom}~{0}; Jacobian JSur ; Integration I1 ; }
	Galerkin { [ - (#22 > 0. ? g_in_c~{idom}~{1}[] : 0), {u~{idom}} ] ;
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

	If (TC_TYPE == 3)
	  Galerkin { [D[] * Dof{d u~{idom}}, {d u~{idom}}];
	    In Pml~{idom}~{0}; Jacobian JVol; Integration I1;}
	  Galerkin { [D[] * Dof{d u~{idom}}, {d u~{idom}}];
	    In Pml~{idom}~{1}; Jacobian JVol; Integration I1;}

	  Galerkin { [-(kPml~{idom}~{0}[])^2*Kx[]*Ky[]*Kz[]*Dof{u~{idom}}, {u~{idom}}];
	    In Pml~{idom}~{0}; Jacobian JVol; Integration I1;}
	  Galerkin { [-(kPml~{idom}~{1}[])^2*Kx[]*Ky[]*Kz[]*Dof{u~{idom}}, {u~{idom}}];
	    In Pml~{idom}~{1}; Jacobian JVol; Integration I1;}

	  Galerkin { [ -I[]*(kPml~{idom}~{0}[])*Dof{u~{idom}}, {u~{idom}} ] ;
	    In PmlInf~{idom}~{0} ; Jacobian JSur ; Integration I1 ; }
	  Galerkin { [ -I[]*(kPml~{idom}~{1}[])*Dof{u~{idom}}, {u~{idom}} ] ;
	    In PmlInf~{idom}~{1} ; Jacobian JSur ; Integration I1 ; }
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
      { Name Sur~{idom}~{iSide} ; Type FemEquation ;
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
          Galerkin { [ ( (iSide ? #12 : #11) > 0. ? g_in~{idom}~{iSide}[] : 0) , {g_out~{idom}~{iSide}} ] ;
            In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }

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
              Galerkin { [  2 * ( I[] * k[] * OSRC_Aj[]{j,NP_OSRC,theta_branch} /
                    OSRC_Bj[]{j,NP_OSRC,theta_branch} *
                    ({u~{idom}} - {phi~{j}~{idom}~{iSide}})) , {g_out~{idom}~{iSide}} ] ;
                In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
            EndFor
          EndIf

	  If (TC_TYPE == 3)
            Galerkin { [ -2 * Rotate[D[],0.,0.,-thetaList(idom)] *  {d u~{idom}}, {d g_out~{idom}~{iSide}}];
              In TrPmlSigma~{idom}~{iSide}; Jacobian JVol; Integration I1;}
            Galerkin { [ 2 * (kPml~{idom}~{iSide}[])^2*Kx[]*Ky[]*Kz[] * {u~{idom}}, {g_out~{idom}~{iSide}}];
              In TrPmlSigma~{idom}~{iSide}; Jacobian JVol; Integration I1;}
          EndIf
        }
      }

      { Name SurPc~{idom}~{iSide} ; Type FemEquation ;
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
          Galerkin { [ gPml*Dof{g_out~{idom}~{iSide}} , {g_out~{idom}~{iSide}} ] ; // reverse sign if d_n computed in Omega
            In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }

	  Galerkin{[ - ComplexScalarField[XYZ[]]{( (2*(idom+N_DOM)+(iSide-1))%(2*N_DOM) ) }, {g_out~{idom}~{iSide}}] ;
	    In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }

	  /////////////////////////////// SGS //////////////////////////////////////
	  Galerkin{[ (#(21+iSide) ? g_in_c~{idom}~{iSide}[] : 0.), {g_out~{idom}~{iSide}}] ;
	    In Sigma~{idom}~{iSide}; Jacobian JSur ; Integration I1 ; }
	  /////////////////////////////// SGS //////////////////////////////////////

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

	  If (TC_TYPE == 3)
            Galerkin { [ -2 * Rotate[D[],0.,0.,-thetaList(idom)] *  {d u~{idom}}, {d g_out~{idom}~{iSide}}];
              In TrPmlSigma~{idom}~{iSide}; Jacobian JVol; Integration I1;}
            Galerkin { [ 2 * (kPml~{idom}~{iSide}[])^2*Kx[]*Ky[]*Kz[] * {u~{idom}}, {g_out~{idom}~{iSide}}];
              In TrPmlSigma~{idom}~{iSide}; Jacobian JVol; Integration I1;}
          EndIf
        }
      }


    EndFor

  EndFor // loop on idom
}


PostProcessing {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name Vol~{idom} ; NameOfFormulation Vol~{idom} ;
      PostQuantity {
        { Name u~{idom} ; Value { Local { [ {u~{idom}} ] ; In Omega~{idom}; Jacobian JVol ; } } }
	{ Name u_tot~{idom} ; Value { Local { [ {u~{idom}} + uinc[]] ; In Omega~{idom}; Jacobian JVol ; } } }
      }
    }
    For iSide In {0:1}
      { Name Sur~{idom}~{iSide} ; NameOfFormulation Sur~{idom}~{iSide} ;
	PostQuantity {
          { Name g_out~{idom}~{iSide} ; Value { Local { [ {g_out~{idom}~{iSide}} ] ;
                In Sigma~{idom}~{iSide}; Jacobian JSur ; } } }
	}
      }
      { Name g_copy~{idom}~{iSide} ; NameOfFormulation Sur~{idom}~{iSide} ; // name of formulation is used only for convenience; no data from that function space is actually used
	PostQuantity {
	  { Name g~{idom}~{iSide} ; Value { Local { [ ( #(21+iSide) ? g_in~{idom}~{iSide}[] : 0. ) ] ;
		In Sigma~{idom}~{iSide}; Jacobian JSur ; } } }
	}
      }
    EndFor
  EndFor
}

PostOperation {
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    { Name DDM~{idom} ; NameOfPostProcessing Vol~{idom};
      Operation {
        Print[ u~{idom}, OnElementsOf Omega~{idom}, File StrCat(DIR, Sprintf("u_%g.pos",idom))] ;
        //Print[ u_tot~{idom}, OnElementsOf Omega~{idom}, File StrCat(DIR, Sprintf("u_tot_%g.pos",idom))] ;
      }
    }
    For iSide In {0:1}
      { Name g_out~{idom}~{iSide} ; NameOfPostProcessing Sur~{idom}~{iSide};
	Operation {
          Print[ g_out~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide},
                 StoreInField (2*(idom+N_DOM)+(iSide-1))%(2*N_DOM)
                 /*, File Sprintf("gg%g_%g.pos",idom, iSide)*/] ;
	}
      }
      { Name g_copy~{idom}~{iSide} ; NameOfPostProcessing g_copy~{idom}~{iSide};
	Operation {
	    Print[ g~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide},
		   StoreInField 4*N_DOM+(2*(idom+N_DOM)-2+3*iSide)%(2*N_DOM)] ;
	}
      }
    EndFor
  EndFor
}
