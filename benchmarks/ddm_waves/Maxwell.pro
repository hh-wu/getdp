Jacobian {
  { Name JVol; Case{ { Region All; Jacobian Vol; } } }
  { Name JSur; Case { { Region All; Jacobian Sur; } } }
  { Name JLin; Case { { Region All; Jacobian Lin; } } }
}

Integration {
  { Name I1;
    Case {
      { Type Gauss;
        Case {
          { GeoElement Point; NumberOfPoints  1; }
          { GeoElement Line; NumberOfPoints  2; }
          { GeoElement Triangle; NumberOfPoints 3; }
          { GeoElement Quadrangle; NumberOfPoints 4; }
          { GeoElement Tetrahedron; NumberOfPoints 4; }
          { GeoElement Hexahedron; NumberOfPoints 6; }
          { GeoElement Prism; NumberOfPoints 9; }
        }
      }
    }
  }
}

Function{
  For i In {0:N_DOM-1}
    If (i % MPI_Size == MPI_Rank)
      // g_in_c~{i}~{0}[Sigma~{i}~{0}] =
      //   (1 ? ComplexVectorField[XYZ[]]{4*N_DOM+2*i-2} : 0.);
      // g_in_c~{i}~{1}[Sigma~{i}~{1}] =
      //   (1 ? ComplexVectorField[XYZ[]]{4*N_DOM+2*i+1} : 0.);

      // this variant converges slightly faster since it is even more
      // 'Gauss-Seidel oriented': it is not using a copy of the input data, but
      // rather data updated by the other sweep after the sweeps have crossed;
      // hence behaves differently when used sequentially since the sweeps are
      // performed sequentially, thus the backward sweep uses only updated data
      For jj In {0:#myD~{i}()-1}
          j = myD~{i}(jj);
          g_in_c~{i}~{j}[Sigma~{i}~{j}] = g_in~{i}~{j}[];
      EndFor
    EndIf
  EndFor
}

Group{
  For ii In {0: #myD()-1}
    i = myD(ii);
    DefineGroup[ GammaPoint~{i} ];
    TrOmegaGammaD~{i} = ElementsOf[ Omega~{i}, OnOneSideOf GammaD~{i} ];
    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
      DefineGroup [ Pml~{i}~{j}, PmlD0~{i}~{j}, PmlInf~{i}~{j} ];
      BndSigmaInf~{i}~{j} = Region[BndSigma~{i}~{j},
                                          Not {GammaN~{i}, GammaD~{i}}];
      TrPmlSigma~{i}~{j} = ElementsOf[ Pml~{i}~{j},
        OnOneSideOf Sigma~{i}~{j} ];
      TrBndPmlSigma~{i}~{j} = ElementsOf[ PmlInf~{i}~{j},
        OnOneSideOf Sigma~{i}~{j} ];
    EndFor
    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
      Pml~{i} += Region[{Pml~{i}~{j}}];
      PmlInf~{i} += Region[{PmlInf~{i}~{j}}];
      BndSigmaInf~{i} += Region[{BndSigmaInf~{i}~{j}}];
    EndFor
  EndFor
}

Constraint{
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Dirichlet_e0~{i};
      Case {
        { Region GammaD0~{i}; Type Assign; Value 0.; }
        For jj In {0:#myD~{i}()-1}
            j = myD~{i}(jj);
            { Region PmlD0~{i}~{j}; Value 0.; }
            EndFor
        }
    }
  EndFor
}

FunctionSpace {
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Hcurl_e~{i}; Type Form1;
      BasisFunction {
        { Name se; NameOfCoef ee; Function BF_Edge;
          Support Region[{Omega~{i}, GammaD~{i}, GammaInf~{i}, Sigma~{i},
              Pml~{i}, PmlInf~{i}, GammaD0~{i}}];
          Entity EdgesOf[All]; }
      }
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf; NameOfConstraint Dirichlet_e0~{i}; }
      }
    }

    { Name Hcurl_h~{i}; Type Form1;
      BasisFunction {
        { Name sh; NameOfCoef he; Function BF_Edge;
          Support Region[{Omega~{i}, GammaD~{i}, GammaInf~{i}, Sigma~{i}}];
          Entity EdgesOf[All]; }
      }
    }

    { Name Hcurl_lambda~{i}; Type Form1;
      BasisFunction {
        { Name se; NameOfCoef ee; Function BF_Edge;
          Support Region[{GammaD~{i}}]; Entity EdgesOf[All]; }
      }
      Constraint {
        { NameOfCoef ee; EntityType EdgesOf; NameOfConstraint Dirichlet_e0~{i}; }
      }
    }

    For jj In {0:#myD~{i}()-1}
    j = myD~{i}(jj);
      { Name Hcurl_g_out~{i}~{j}; Type Form1;
        BasisFunction {
          { Name se; NameOfCoef ee; Function BF_Edge;
            Support Region[{Sigma~{i}~{j}, TrPmlSigma~{i}~{j},
                TrBndPmlSigma~{i}~{j}}];
            Entity EdgesOf[Sigma~{i}~{j},
              Not {GammaD~{i}, GammaD0~{i}, GammaInf~{i}}]; }
        }
      }
    EndFor

    If(TC_TYPE == 1)
      For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
        { Name Hcurl_r~{i}~{j}; Type Form1;
          BasisFunction {
            { Name sph1; NameOfCoef eph1; Function BF_Edge;
              Support Region[{Sigma~{i}~{j}}];
              Entity EdgesOf[Sigma~{i}~{j}, Not {GammaD~{i}, GammaD0~{i}}]; }
          }
        }
        { Name Hgrad_rho~{i}~{j}; Type Form0;
          BasisFunction {
            { Name srh1; NameOfCoef erh1; Function BF_Node;
              Support Region[{Sigma~{i}~{j}}];
              Entity NodesOf[Sigma~{i}~{j}, Not {GammaD~{i}, GammaD0~{i}}]; }
          }
        }
      EndFor
    EndIf

    If(TC_TYPE == 2)
      For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
        { Name Hcurl_r~{i}~{j}; Type Form1;
          BasisFunction {
            { Name ser1; NameOfCoef eer1; Function BF_Edge;
              Support Region[{Sigma~{i}~{j}}];
              Entity EdgesOf[Sigma~{i}~{j},
                             Not {GammaD~{i}, GammaD0~{i}, GammaInf~{i}}]; }
          }
        }
        For h In {1:NP_OSRC}
          { Name Hcurl_phi~{h}~{i}~{j}; Type Form1;
            BasisFunction {
              { Name sph1; NameOfCoef eph1; Function BF_Edge;
                Support Region[{Sigma~{i}~{j}}];
                Entity EdgesOf[Sigma~{i}~{j},
                               Not {GammaD~{i}, GammaD0~{i}, GammaInf~{i}}]; }
            }
          }
          { Name Hgrad_rho~{h}~{i}~{j}; Type Form0;
            BasisFunction {
              { Name srh1; NameOfCoef erh1; Function BF_Node;
                Support Region[{Sigma~{i}~{j}}];
                Entity NodesOf[Sigma~{i}~{j},
                               Not {GammaD~{i}, GammaD0~{i}, GammaInf~{i}}]; }
            }
          }
        EndFor
      EndFor
    EndIf

  EndFor
}

Formulation {

  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Vol~{i}; Type FemEquation;
      Quantity {
        { Name e~{i}; Type Local; NameOfSpace Hcurl_e~{i}; }
        { Name h~{i}; Type Local; NameOfSpace Hcurl_h~{i}; }
        { Name lambda~{i}; Type Local; NameOfSpace Hcurl_lambda~{i}; }
        If(TC_TYPE == 1)
          For jj In {0:#myD~{i}()-1}
          j = myD~{i}(jj);
            { Name r~{i}~{j}; Type Local; NameOfSpace Hcurl_r~{i}~{j};}
            { Name rho~{i}~{j}; Type Local; NameOfSpace Hgrad_rho~{i}~{j};}
          EndFor
        EndIf
        If(TC_TYPE == 2)
          For jj In {0:#myD~{i}()-1}
          j = myD~{i}(jj);
          { Name r~{i}~{j}; Type Local; NameOfSpace Hcurl_r~{i}~{j};}
            For h In {1:NP_OSRC}
              { Name phi~{h}~{i}~{j}; Type Local; NameOfSpace Hcurl_phi~{h}~{i}~{j};}
              { Name rho~{h}~{i}~{j}; Type Local; NameOfSpace Hgrad_rho~{h}~{i}~{j};}
            EndFor
          EndFor
        EndIf
      }
      Equation {
        // volume terms
        Galerkin { [ Dof{d e~{i}}, {d e~{i}} ];
          In Omega~{i}; Integration I1; Jacobian JVol; }
        Galerkin { [ -k[]^2 * Dof{e~{i}} , {e~{i}} ];
          In Omega~{i}; Integration I1; Jacobian JVol; }
        Galerkin { [ -I[] * kInf[] * N[] /\ (Dof{e~{i}} /\ N[]) , {e~{i}} ];
          In GammaInf~{i}; Integration I1; Jacobian JSur; }

        // boundary condition using Lagrange multiplier
        Galerkin { [ Dof{lambda~{i}} , {e~{i}} ];
          In GammaD~{i}; Jacobian JSur; Integration I1; }
        Galerkin { [ 0*Dof{lambda~{i}} , {lambda~{i}} ]; // don't remove this
          In GammaD~{i}; Jacobian JSur; Integration I1; }
        Galerkin { [ Dof{e~{i}} , {lambda~{i}} ];
          In GammaD~{i}; Jacobian JSur; Integration I1; }
        Galerkin { [ ($PhysicalSource ? einc[]: Vector[0,0,0]), {lambda~{i}} ];
          In GammaD~{i}; Jacobian JSur; Integration I1; }

        // artificial sources on transmission boundaries (j split only
        // useful for sweeping-type preconditioners)
        For jj In {0:#myD~{i}()-1}
        j = myD~{i}(jj);
          Galerkin { [ $ArtificialSource~{j} ? g_in~{i}~{j}[] : Vector[0,0,0] ,
              {e~{i}} ];
            In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
          // same story, modified for SGS
          Galerkin { [ ($ArtificialSourceSGS~{j} ? g_in_c~{i}~{j}[] : 0), {e~{i}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
        EndFor

        // transmission condition
        If(TC_TYPE == 0)
          Galerkin { [ -I[] * kIBC[] * N[] /\ (Dof{e~{i}} /\ N[]), {e~{i}} ];
            In Sigma~{i}; Integration I1; Jacobian JSur; }
        EndIf

        If(TC_TYPE == 1)
          For jj In {0:#myD~{i}()-1}
            j = myD~{i}(jj);
            Galerkin { [ -I[] * k[] * Dof{r~{i}~{j}} , {e~{i}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }

            Galerkin { [ aa[]/k[]^2 * Dof{d rho~{i}~{j}} , {r~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian  JSur; }
            Galerkin { [ Dof{r~{i}~{j}} , {r~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
            Galerkin { [ -Dof{e~{i}} , {r~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
            Galerkin { [ bb[]/k[]^2 * Dof{d e~{i}} , {d r~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }

            Galerkin { [ Dof{rho~{i}~{j}} , {rho~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
            Galerkin { [ Dof{r~{i}~{j}} , {d rho~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
          EndFor
        EndIf

        If(TC_TYPE == 2)
          For jj In {0:#myD~{i}()-1}
            j = myD~{i}(jj);
            Galerkin { [ -I[] * k[] * Dof{r~{i}~{j}} , {e~{i}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }

            Galerkin { [ - Dof{e~{i}} , {r~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
            Galerkin { [ 1/keps[]^2 * Dof{d e~{i}} , {d r~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
            Galerkin { [ OSRC_C0[]{NP_OSRC,theta_branch} * Dof{r~{i}~{j}},
                {r~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }

            For h In{1:NP_OSRC}
              Galerkin { [ OSRC_Aj[]{h,NP_OSRC,theta_branch} *
                  Dof{d rho~{h}~{i}~{j}}, {r~{i}~{j}} ];
                In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
              Galerkin { [ -OSRC_Aj[]{h,NP_OSRC,theta_branch} / keps[]^2 *
                  Dof{d phi~{h}~{i}~{j}}, {d r~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }

              Galerkin { [ Dof{phi~{h}~{i}~{j}}, {phi~{h}~{i}~{j}} ];
                In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
              Galerkin { [ OSRC_Bj[]{h,NP_OSRC,theta_branch} *
                  Dof{d rho~{h}~{i}~{j}}, {phi~{h}~{i}~{j}} ];
                In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
              Galerkin { [ -OSRC_Bj[]{h,NP_OSRC,theta_branch} / keps[]^2 *
                  Dof{d phi~{h}~{i}~{j}}, {d phi~{h}~{i}~{j}} ];
                In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
              Galerkin { [ - Dof{r~{i}~{j}}, {phi~{h}~{i}~{j}} ];
                In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }

              Galerkin { [ Dof{rho~{h}~{i}~{j}} , {rho~{h}~{i}~{j}} ];
                In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
              Galerkin { [ 1/keps[]^2 * Dof{phi~{h}~{i}~{j}} , {d rho~{h}~{i}~{j}} ];
                In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
            EndFor
          EndFor
        EndIf

	If (TC_TYPE == 3)
        For jj In {0:#myD~{i}()-1}
          j = myD~{i}(jj);
            Galerkin { [ nu[] * Dof{d e~{i}}, {d e~{i}} ];
              In Pml~{i}~{j}; Jacobian JVol; Integration I1;}
            Galerkin { [ - eps[] * (kPml~{i}~{j}[])^2*Dof{e~{i}}, {e~{i}} ];
              In Pml~{i}~{j}; Jacobian JVol; Integration I1;}
            Galerkin { [ I[] * kIBC[] * (N[]) /\ ( N[] /\ Dof{e~{i}} ) , {e~{i}} ];
              In PmlInf~{i}~{j}; Jacobian JSur; Integration I1; }
          EndFor
        EndIf

        // store magnetic field on layer of elements touching the boundary
        Galerkin { [ Dof{h~{i}} , {h~{i}} ];
          In TrOmegaGammaD~{i}; Jacobian JVol; Integration I1; }
        Galerkin { [ 1/(I[]*om[]*mu[]) * Dof{d e~{i}}, {h~{i}} ];
          In TrOmegaGammaD~{i}; Jacobian JVol; Integration I1; }
      }
    }

    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
      { Name Sur~{i}~{j}; Type FemEquation;
        Quantity {
          { Name g_out~{i}~{j}; Type Local;  NameOfSpace Hcurl_g_out~{i}~{j}; }
          If(TC_TYPE == 0)
            { Name e~{i}; Type Local;  NameOfSpace Hcurl_e~{i}; }
          EndIf
          If(TC_TYPE == 1)
            { Name rho~{i}~{j}; Type Local; NameOfSpace Hgrad_rho~{i}~{j};}
            { Name r~{i}~{j}; Type Local; NameOfSpace Hcurl_r~{i}~{j};}
          EndIf
          If(TC_TYPE == 2)
            { Name r~{i}~{j}; Type Local;  NameOfSpace Hcurl_r~{i}~{j};}
            For h In {1:NP_OSRC}
              { Name rho~{h}~{i}~{j}; Type Local;  NameOfSpace Hgrad_rho~{h}~{i}~{j};}
              { Name phi~{h}~{i}~{j}; Type Local;  NameOfSpace Hcurl_phi~{h}~{i}~{j};}
            EndFor
          EndIf
          If(TC_TYPE == 3)
	    { Name e~{i}; Type Local; NameOfSpace Hcurl_e~{i}; }
	  EndIf
        }
        Equation {
          Galerkin { [ Dof{g_out~{i}~{j}} , {g_out~{i}~{j}} ];
            In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }

          Galerkin { [ ($PhysicalSource ? Vector[0,0,0] : g_in~{i}~{j}[]) ,
              {g_out~{i}~{j}} ];
            In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }

          If(TC_TYPE == 0)
            Galerkin { [ -2 * I[] * kIBC[] * N[] /\ ({e~{i}} /\ N[]) , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
          EndIf

          If(TC_TYPE == 1)
            Galerkin { [ -2 * I[] * kIBC[] * {r~{i}~{j}} , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          EndIf

          If(TC_TYPE == 2)
            Galerkin { [ -2 * I[] * kIBC[] * {r~{i}~{j}} , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
          EndIf

	  If (TC_TYPE == 3)
            Galerkin { [ 2 * nu[] *  {d e~{i}}, {d g_out~{i}~{j}}];
              In TrPmlSigma~{i}~{j}; Jacobian JVol; Integration I1;}
            Galerkin { [ -2 * eps[] * (kPml~{i}~{j}[])^2 * {e~{i}}, {g_out~{i}~{j}}];
              In TrPmlSigma~{i}~{j}; Jacobian JVol; Integration I1;}

            // FIXME: check if sign is correct
            // Galerkin { [ 2 * I[] * kIBC[] * (N[]) /\ ( N[] /\ Dof{e~{i}} ) , {e~{i}} ];
            //   In TrBndPmlSigma~{i}~{j}; Jacobian JSur; Integration I1; }
          EndIf
        }
      }

      { Name SurPc~{i}~{j}; Type FemEquation;
        Quantity {
          { Name g_out~{i}~{j}; Type Local;  NameOfSpace Hcurl_g_out~{i}~{j}; }
          If(TC_TYPE == 0)
            { Name e~{i}; Type Local;  NameOfSpace Hcurl_e~{i}; }
          EndIf
          If(TC_TYPE == 1)
            { Name rho~{i}~{j}; Type Local; NameOfSpace Hgrad_rho~{i}~{j};}
            { Name r~{i}~{j}; Type Local; NameOfSpace Hcurl_r~{i}~{j};}
          EndIf
          If(TC_TYPE == 2)
            { Name r~{i}~{j}; Type Local;  NameOfSpace Hcurl_r~{i}~{j};}
            For h In {1:NP_OSRC}
              { Name rho~{h}~{i}~{j}; Type Local;  NameOfSpace Hgrad_rho~{h}~{i}~{j};}
              { Name phi~{h}~{i}~{j}; Type Local;  NameOfSpace Hcurl_phi~{h}~{i}~{j};}
            EndFor
          EndIf
          If(TC_TYPE == 3)
	    { Name e~{i}; Type Local; NameOfSpace Hcurl_e~{i}; }
	  EndIf

        }
        Equation {
          Galerkin { [ Dof{g_out~{i}~{j}} , {g_out~{i}~{j}} ];
            In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }

	  Galerkin{[ - ComplexVectorField[XYZ[]]{( tag_g~{i}~{j} ) },
              {g_out~{i}~{j}}];
	    In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }

	  Galerkin{[ ( $ArtificialSourceSGS~{j} ? g_in_c~{i}~{j}[] : 0. ),
              {g_out~{i}~{j}}];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }

          If(TC_TYPE == 0)
            Galerkin { [ -2 * I[] * kIBC[] * N[] /\ ({e~{i}} /\ N[]) , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
          EndIf

          If(TC_TYPE == 1)
            Galerkin { [ -2 * I[] * kIBC[] * {r~{i}~{j}} , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          EndIf

          If(TC_TYPE == 2)
            Galerkin { [ -2 * I[] * kIBC[] * {r~{i}~{j}} , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Integration I1; Jacobian JSur; }
          EndIf

	  If (TC_TYPE == 3)
            Galerkin { [ 2 * nu[] *  {d e~{i}}, {d g_out~{i}~{j}}];
              In TrPmlSigma~{i}~{j}; Jacobian JVol; Integration I1;}
            Galerkin { [ -2 * eps[] * (kPml~{i}~{j}[])^2 * {e~{i}},
                {g_out~{i}~{j}}];
              In TrPmlSigma~{i}~{j}; Jacobian JVol; Integration I1;}

            // FIXME: check if sign is correct
            // Galerkin { [ 2 * I[] * kIBC[] * (N[]) /\ ( N[] /\ Dof{e~{i}} ) , {e~{i}} ];
            //   In TrBndPmlSigma~{i}~{j}; Jacobian JSur; Integration I1; }
          EndIf
        }
      }

    EndFor
  EndFor
}

PostProcessing {
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Vol~{i}; NameOfFormulation Vol~{i};
      Quantity {
        { Name e~{i}; Value { Local { [ {e~{i}}];
              In Omega~{i}; Jacobian JVol; } } }
        { Name e_tot~{i}; Value { Local { [ {e~{i}} + einc[]];
              In Omega~{i}; Jacobian JVol; } } }
        { Name norm_e~{i}; Value { Local { [ Norm[{e~{i}}] ];
              In Omega~{i}; Jacobian JVol; } } }
        { Name norm_e_tot~{i}; Value { Local { [ Norm[{e~{i}} + einc[]]];
              In Omega~{i}; Jacobian JVol; } } }
        { Name h~{i}; Value { Local { [ {h~{i}} ];
              In GammaD~{i}; Jacobian JSur; } } }
        { Name j~{i}; Value { Local { [ N[] /\ ({h~{i}}) ];
              In GammaD~{i}; Jacobian JSur; } } }
      }
    }
    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
      { Name Sur~{i}~{j}; NameOfFormulation Sur~{i}~{j};
        Quantity {
          { Name g_out~{i}~{j};
            Value { Local { [ {g_out~{i}~{j}} ];
                In Sigma~{i}~{j}; Jacobian JSur; } } }
      }
    }
    // name of formulation is used only for convenience; no data from that
    // function space is actually used
    { Name g_copy~{i}~{j}; NameOfFormulation Sur~{i}~{j};
      PostQuantity {
	{ Name g~{i}~{j};
          Value { Local { [ ( $ArtificialSourceSGS~{j} ? g_in~{i}~{j}[] : 0. ) ];
              In Sigma~{i}~{j}; Jacobian JSur; } } }
      }
    }
    EndFor
  EndFor
}

PostOperation {
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name DDM~{i}; NameOfPostProcessing Vol~{i};
      Operation{
         Print[ e~{i}, OnElementsOf Omega~{i},
           File StrCat(DIR, Sprintf("e_%g.pos",i))];
         Print[ e_tot~{i}, OnElementsOf Omega~{i},
           File StrCat(DIR, Sprintf("e_tot_%g.pos",i))];
         Print[ norm_e_tot~{i}, OnElementsOf Omega~{i},
           File StrCat(DIR, Sprintf("norm_e_tot_%g.pos",i))];
        // Print[ h~{i}, OnElementsOf GammaD~{i},
        //   File StrCat(DIR, Sprintf("h_%g.pos",i))];
        // Print[ j~{i}, OnElementsOf GammaD~{i},
        //   File StrCat(DIR, Sprintf("j_%g.pos", i))];
      }
    }
    For jj In {0:#myD~{i}()-1}
    j = myD~{i}(jj);
    { Name g_out~{i}~{j}; NameOfPostProcessing Sur~{i}~{j};
      Operation{
        Print[ g_out~{i}~{j}, OnElementsOf Sigma~{i}~{j},
          StoreInField tag_g~{i}~{j}
          //, File Sprintf("gg%g_%g.pos",i, jdom)
        ];
      }
    }
    { Name g_copy~{i}~{j}; NameOfPostProcessing g_copy~{i}~{j};
      Operation {
	Print[ g~{i}~{j}, OnElementsOf Sigma~{i}~{j},
	       StoreInField 4*N_DOM+(2*(i+N_DOM)-2+3*j)%(2*N_DOM)];
      }
    }
    EndFor
  EndFor
}
