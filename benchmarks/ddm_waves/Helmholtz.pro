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
  DefineFunction[c];
  For i In {0:N_DOM-1}
    If (i % MPI_Size == MPI_Rank)
      // g_in_c~{i}~{0}[Sigma~{i}~{0}] =
      //   (1 ? ComplexScalarField[XYZ[]]{4*N_DOM+2*i-2} : 0.);
      // g_in_c~{i}~{1}[Sigma~{i}~{1}] =
      //   (1 ? ComplexScalarField[XYZ[]]{4*N_DOM+2*i+1} : 0.);

      // This variant converges slightly faster since it is even more
      // 'Gauss-Seidel oriented': it is not using a copy of the input
      // data, but rather data updated by the other sweep after the
      // sweeps have crossed; hence behaves differently when used on a
      // single CPU since the sweeps are performed sequentially, thus
      // the backward sweep uses only updated data
      For jj In {0:#myD~{i}()-1}
        j = myD~{i}(jj);
        g_in_c~{i}~{j}[Sigma~{i}~{j}] = g_in~{i}~{j}[];
      EndFor
    EndIf
  EndFor
}

Group{
  // gPml = 1. if d_n u computed in Pml side; -1. in Omega side
  gPml = 1.;

  For ii In {0: #myD()-1}
    i = myD(ii);
    DefineGroup[ GammaPoint~{i} ];
    TrOmegaGammaD~{i} = ElementsOf[ Omega~{i}, OnOneSideOf GammaD~{i} ];
    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
      DefineGroup [ Pml~{i}~{j}, PmlD0~{i}~{j}, PmlInf~{i}~{j} ];
      BndSigmaD~{i}~{j} = Region[BndSigma~{i}~{j}, Not {GammaN~{i}, GammaInf~{i}}];
      BndSigmaN~{i}~{j} = Region[BndSigma~{i}~{j}, Not {GammaD~{i}, GammaInf~{i}}];
      BndSigmaInf~{i}~{j} = Region[BndSigma~{i}~{j}, Not {GammaN~{i}, GammaD~{i}}];
      If (gPml == 1.)
        TrPmlSigma~{i}~{j} = ElementsOf[ Pml~{i}~{j}, OnOneSideOf Sigma~{i}~{j} ];
        TrBndPmlSigma~{i}~{j} = ElementsOf[ PmlInf~{i}~{j}, OnOneSideOf Sigma~{i}~{j} ];
      EndIf
      If (gPml == -1.)
        TrPmlSigma~{i}~{j} = ElementsOf[ Omega~{i}, OnOneSideOf Sigma~{i}~{j} ];
        TrBndPmlSigma~{i}~{j} = ElementsOf[ GammaInf~{i}, OnOneSideOf Sigma~{i}~{j} ];
      EndIf
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
    { Name Dirichlet_u~{i};
      Case {
        { Region GammaD~{i}; Value $PhysicalSource ? uinc[] : 0.; }
      }
    }
    { Name Dirichlet_u0~{i};
      Case {
        { Region GammaD0~{i}; Value 0.; }
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
    { Name Hgrad_u~{i}; Type Form0;
      BasisFunction {
        { Name sn; NameOfCoef un; Function BF_Node;
          Support Region[ {Omega~{i}, Pml~{i}, GammaInf~{i}, BndGammaInf~{i}, PmlInf~{i}, Sigma~{i}, GammaPoint~{i},BndSigmaInf~{i}} ];
          Entity NodesOf[ All ];
        }
      }
      Constraint {
        { NameOfCoef un; EntityType NodesOf; NameOfConstraint Dirichlet_u~{i}; }
        { NameOfCoef un; EntityType NodesOf; NameOfConstraint Dirichlet_u0~{i}; }
      }
    }

    For jj In {0: #myD~{i}()-1}
      j = myD~{i}(jj);
      { Name Hgrad_g_out~{i}~{j}; Type Form0;
        BasisFunction {
          { Name sn; NameOfCoef un; Function BF_Node;
            Support Region[ {Sigma~{i}~{j}, TrPmlSigma~{i}~{j}, TrBndPmlSigma~{i}~{j} } ];
            Entity NodesOf[ Sigma~{i}~{j}, Not {GammaD~{i}, GammaD0~{i}, PmlD0~{i}~{j}}];
          }
        }
      }
      If (TC_TYPE == 2)
        For h In {1:NP_OSRC}
          { Name Hgrad_phi~{h}~{i}~{j}; Type Form0;
            BasisFunction {
              { Name sn; NameOfCoef un; Function BF_Node;
                Support Region[ {Sigma~{i}~{j}, BndSigmaInf~{i}~{j}, BndSigmaN~{i}~{j}} ];
                Entity NodesOf[All, Not {GammaD~{i}, GammaD0~{i}}];
              }
            }
          }
        EndFor
      EndIf
    EndFor
  EndFor
}

Formulation {
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Vol~{i}; Type FemEquation;
      Quantity {
        { Name u~{i}; Type Local; NameOfSpace Hgrad_u~{i}; }
        For jj In {0: #myD~{i}()-1}
          j = myD~{i}(jj);
          If(TC_TYPE == 2)
            For h In{1:NP_OSRC}
              { Name phi~{h}~{i}~{j}; Type Local;
                NameOfSpace Hgrad_phi~{h}~{i}~{j}; }
            EndFor
          EndIf
        EndFor
      }
      Equation {
        // volume terms (D[] = E[] = 1 outside PMLs)
        Galerkin { [ D[] * Dof{d u~{i}}, {d u~{i}} ];
          In Omega~{i}; Jacobian JVol; Integration I1; }
        Galerkin { [ - k[]^2 * E[] * Dof{u~{i}}, {u~{i}} ];
          In Omega~{i}; Jacobian JVol; Integration I1; }

        // point source (delta function)
        Galerkin { [ ($PhysicalSource ? -1. : 0) , {u~{i}} ];
          In GammaPoint~{i}; Jacobian JVol; Integration I1; }

        // artificial sources on transmission boundaries (j split only
        // useful for sweeping-type preconditioners)
        For jj In {0:#myD~{i}()-1}
          j = myD~{i}(jj);
          Galerkin { [ - ($ArtificialSource~{j} ? g_in~{i}~{j}[] : 0), {u~{i}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          // the same, but modified for SGS
          Galerkin { [ - ($ArtificialSourceSGS~{j} ? g_in_c~{i}~{j}[] : 0), {u~{i}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
        EndFor

        // transmission condition
        If(TC_TYPE == 0) // IBC
          Galerkin { [ - I[] * kIBC[] * Dof{u~{i}} , {u~{i}} ];
            In Sigma~{i}; Jacobian JSur; Integration I1; }
        EndIf

        If(TC_TYPE == 1) // GIBC(a, b)
          Galerkin { [ a[] * Dof{u~{i}} , {u~{i}} ];
            In Sigma~{i}; Jacobian JSur; Integration I1; }
          Galerkin { [ - b[] * Dof{d u~{i}} , {d u~{i}} ];
            In Sigma~{i}; Jacobian JSur; Integration I1; }
        EndIf

        If(TC_TYPE == 2) // GIBC(NP_OSRC, theta_branch, eps)
          Galerkin { [ - I[] * k[] * OSRC_C0[]{NP_OSRC,theta_branch} * Dof{u~{i}}, {u~{i}} ];
            In Sigma~{i}; Jacobian JSur; Integration I1; }
          For jj In {0: #myD~{i}()-1}
            j = myD~{i}(jj);
            For h In{1:NP_OSRC}
              Galerkin { [ I[] * k[] * OSRC_Aj[]{h,NP_OSRC,theta_branch} / keps[]^2 * Dof{d phi~{h}~{i}~{j}} , {d u~{i}} ];
                In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
              Galerkin { [ - I[] * k[] * OSRC_Aj[]{h,NP_OSRC,theta_branch} / keps[]^2 * ( I[] * kInf[] * Dof{phi~{h}~{i}~{j}}) , {u~{i}} ];
                In BndSigmaInf~{i}~{j}; Jacobian JLin; Integration I1; }

              Galerkin { [ - Dof{u~{i}} , {phi~{h}~{i}~{j}} ];
                In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
              Galerkin { [ - OSRC_Bj[]{h,NP_OSRC,theta_branch} / keps[]^2 * Dof{d phi~{h}~{i}~{j}} , {d phi~{h}~{i}~{j}} ];
                In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
              Galerkin { [ Dof{phi~{h}~{i}~{j}} , {phi~{h}~{i}~{j}} ];
                In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
              Galerkin { [ OSRC_Bj[]{h,NP_OSRC,theta_branch} / keps[]^2 * ( I[] * kInf[] * Dof{phi~{h}~{i}~{j}}) , {phi~{h}~{i}~{j}} ];
                In BndSigmaInf~{i}~{j}; Jacobian JLin; Integration I1; }
            EndFor
          EndFor
        EndIf

        If (TC_TYPE == 3) // PML
          For jj In {0:#myD~{i}()-1}
            j = myD~{i}(jj);
            Galerkin { [ D[] * Dof{d u~{i}}, {d u~{i}} ];
              In Pml~{i}~{j}; Jacobian JVol; Integration I1;}
            Galerkin { [ - kPml~{i}~{j}[]^2 * E[] * Dof{u~{i}}, {u~{i}}];
              In Pml~{i}~{j}; Jacobian JVol; Integration I1;}
            Galerkin { [ -I[]*(kPml~{i}~{j}[])*Dof{u~{i}}, {u~{i}} ];
              In PmlInf~{i}~{j}; Jacobian JSur; Integration I1; }
          EndFor
        EndIf

        // Bayliss-Turkel absorbing boundary condition
        Galerkin { [ - I[] * kInf[] * Dof{u~{i}} , {u~{i}} ];
          In GammaInf~{i}; Jacobian JSur; Integration I1; }
        Galerkin { [ alphaBT[] * Dof{u~{i}} , {u~{i}} ];
          In GammaInf~{i}; Jacobian JSur; Integration I1; }
        // this assumes that GammaInf is closed; we need to add the boundary
        // terms if it is open
        Galerkin { [ betaBT[] * Dof{d u~{i}} , {d u~{i}} ];
          In GammaInf~{i}; Jacobian JSur; Integration I1; }
      }
    }

    // Compute the outgoing data
    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
      { Name Sur~{i}~{j}; Type FemEquation;
        Quantity {
          { Name u~{i}; Type Local; NameOfSpace Hgrad_u~{i}; }
          { Name g_out~{i}~{j}; Type Local;
            NameOfSpace Hgrad_g_out~{i}~{j}; }
          If(TC_TYPE == 2)
            For h In{1:NP_OSRC}
              { Name phi~{h}~{i}~{j}; Type Local;
                NameOfSpace Hgrad_phi~{h}~{i}~{j}; }
            EndFor
          EndIf
        }
        Equation {
          // reverse sign if d_n computed in Omega
          Galerkin { [ gPml * Dof{g_out~{i}~{j}} , {g_out~{i}~{j}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          Galerkin { [ $ArtificialSource~{j} ? g_in~{i}~{j}[] : 0 ,
              {g_out~{i}~{j}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }

          If(TC_TYPE == 0) // IBC
            Galerkin { [ 2 * I[] * kIBC[] * {u~{i}} , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          EndIf

          If(TC_TYPE == 1) // GIBC(a, b)
            Galerkin { [ - 2 * a[] * {u~{i}} , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
            Galerkin { [ 2 * b[] * {d u~{i}} , {d g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          EndIf

          If(TC_TYPE == 2) // GIBC(NP_OSRC, theta_branch, eps)
            Galerkin { [ 2 * ( I[] * k[] * OSRC_C0[]{NP_OSRC,theta_branch} * {u~{i}} ) , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
            For h In{1:NP_OSRC}
              Galerkin { [ 2 * ( I[] * k[] * OSRC_Aj[]{h,NP_OSRC,theta_branch} / OSRC_Bj[]{h,NP_OSRC,theta_branch} * ({u~{i}} - {phi~{h}~{i}~{j}})) , {g_out~{i}~{j}} ];
                In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
            EndFor
          EndIf

          If (TC_TYPE == 3) // PML
            Galerkin { [ -2 * D[] *  {d u~{i}}, {d g_out~{i}~{j}}];
              In TrPmlSigma~{i}~{j}; Jacobian JVol; Integration I1;}
            Galerkin { [ 2 * kPml~{i}~{j}[]^2 *E[] * {u~{i}}, {g_out~{i}~{j}}];
              In TrPmlSigma~{i}~{j}; Jacobian JVol; Integration I1;}
            Galerkin { [ 2 * I[] * kInf[] * {u~{i}}, {g_out~{i}~{j}}];
              In TrBndPmlSigma~{i}~{j}; Jacobian JSur; Integration I1;}
          EndIf
        }
      }

      { Name SurPc~{i}~{j}; Type FemEquation;
        Quantity {
          { Name u~{i}; Type Local; NameOfSpace Hgrad_u~{i}; }
          { Name g_out~{i}~{j}; Type Local; NameOfSpace Hgrad_g_out~{i}~{j}; }
          If(TC_TYPE == 2)
            For h In{1:NP_OSRC}
              { Name phi~{h}~{i}~{j}; Type Local;
                NameOfSpace Hgrad_phi~{h}~{i}~{j}; }
            EndFor
          EndIf
        }
        Equation {
          // reverse sign if d_n computed in Omega
          Galerkin { [ gPml * Dof{g_out~{i}~{j}} , {g_out~{i}~{j}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }

          Galerkin{[ - gPml * ComplexScalarField[XYZ[]] { tag_g~{i}~{j} }, {g_out~{i}~{j}}];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }

          // for SGS
          Galerkin{[ $ArtificialSourceSGS~{j} ? g_in_c~{i}~{j}[] : 0., {g_out~{i}~{j}}];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }

          If(TC_TYPE == 0)
            Galerkin { [ 2 * I[] * kIBC[] * {u~{i}} , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          EndIf

          If(TC_TYPE == 1)
            Galerkin { [ - 2 * a[] * {u~{i}} , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
            Galerkin { [ 2 * b[] * {d u~{i}} , {d g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          EndIf

          If(TC_TYPE == 2)
            Galerkin { [ 2 * ( I[] * k[] * OSRC_C0[]{NP_OSRC,theta_branch} * {u~{i}} ) , {g_out~{i}~{j}} ];
              In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
            For h In{1:NP_OSRC}
              Galerkin { [  2 * ( I[] * k[] * OSRC_Aj[]{h,NP_OSRC,theta_branch} / OSRC_Bj[]{h,NP_OSRC,theta_branch} * ({u~{i}} - {phi~{h}~{i}~{j}})) , {g_out~{i}~{j}} ];
                In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
            EndFor
          EndIf

          If(TC_TYPE == 3)
            Galerkin { [ -2 * D[] *  {d u~{i}}, {d g_out~{i}~{j}}];
              In TrPmlSigma~{i}~{j}; Jacobian JVol; Integration I1;}
            Galerkin { [ 2 * kPml~{i}~{j}[]^2 * E[] * {u~{i}},
                {g_out~{i}~{j}}];
              In TrPmlSigma~{i}~{j}; Jacobian JVol; Integration I1;}
            Galerkin { [ 2 * I[] * kInf[] * {u~{i}}, {g_out~{i}~{j}}];
              In TrBndPmlSigma~{i}~{j}; Jacobian JSur; Integration I1;}
          EndIf
        }
      }

    EndFor

  EndFor // loop on i
}

PostProcessing {
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Vol~{i}; NameOfFormulation Vol~{i};
      PostQuantity {
        { Name u~{i}; Value { Local { [ {u~{i}} ];
              In Omega~{i}; Jacobian JVol; } } }
        { Name u_tot~{i}; Value { Local { [ {u~{i}} + uinc[] ];
              In Omega~{i}; Jacobian JVol; } } }
        { Name c~{i}; Value { Local { [ c[] ];
              In Omega~{i}; Jacobian JVol; } } }
      }
    }
    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
      { Name Sur~{i}~{j}; NameOfFormulation Sur~{i}~{j};
        PostQuantity {
          { Name g_out~{i}~{j}; Value { Local { [ {g_out~{i}~{j}} ];
            In Sigma~{i}~{j}; Jacobian JSur; } } }
        }
      }
      { Name g_copy~{i}~{j}; NameOfFormulation Sur~{i}~{j};
        // name of formulation is used only for convenience; no data from that
        // function space is actually used
        PostQuantity {
          { Name g~{i}~{j}; Value {
              Local { [ $ArtificialSourceSGS~{j} ? g_in~{i}~{j}[] : 0. ];
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
      Operation {
        Print[ u~{i}, OnElementsOf Omega~{i},
          File StrCat(DIR, Sprintf("u_%g.pos",i))];
        // Print[ u_tot~{i}, OnElementsOf Omega~{i},
        //   File StrCat(DIR, Sprintf("u_tot_%g.pos",i))];
        // // save velocity field
        // Print[ c~{i}, OnElementsOf Omega~{i},
        //   File StrCat(DIR, Sprintf("c_%g.pos",i))];
      }
    }
    For jj In {0:#myD~{i}()-1}
      j = myD~{i}(jj);
      { Name g_out~{i}~{j}; NameOfPostProcessing Sur~{i}~{j};
        Operation {
          Print[ g_out~{i}~{j}, OnElementsOf Sigma~{i}~{j},
            StoreInField tag_g~{i}~{j}
            // File Sprintf("gg%g_%g.pos",i, j)
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
