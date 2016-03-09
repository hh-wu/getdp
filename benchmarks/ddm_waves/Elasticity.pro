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
          { GeoElement Line; NumberOfPoints  8; } //2
          { GeoElement Triangle; NumberOfPoints 6; } //3
          { GeoElement Quadrangle; NumberOfPoints 4; } //4
          { GeoElement Tetrahedron; NumberOfPoints 15; } //4
          { GeoElement Hexahedron; NumberOfPoints 6; } //6
          { GeoElement Prism; NumberOfPoints 9; } //9
        }
      }
    }
  }
}

Function{
  DefineFunction[c];
  For idom In {0:N_DOM-1}
    If (idom % MPI_Size == MPI_Rank)
      g_in_c~{idom}~{0}[Sigma~{idom}~{0}] = g_in~{idom}~{0}[];
      g_in_c~{idom}~{1}[Sigma~{idom}~{1}] = g_in~{idom}~{1}[];
    EndIf
  EndFor

  C_XX[]=Tensor[K+(4/3)*G, 0, 0, 0,  G, 0, 0, 0, 0] ;
  C_XY[]=Tensor[0, K-(2/3)*G, 0, G, 0, 0, 0, 0, 0] ;
  C_YX[]=Tensor[0, G, 0, K-(2/3)*G, 0, 0, 0, 0, 0] ;
  C_YY[]=Tensor[G, 0, 0, 0, K+(4/3)*G, 0, 0, 0, 0] ;
}

Group{
  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);
    DefineGroup[ GammaPoint~{idom} ];
    TrOmegaGammaD~{idom} = ElementsOf[ Omega~{idom}, OnOneSideOf GammaD~{idom} ];
    For iSide In {0:1}
      DefineGroup [ Pml~{idom}~{iSide}, PmlD0~{idom}~{iSide}, PmlInf~{idom}~{iSide} ];
      BndSigmaD~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide},
                                        Not {GammaN~{idom}, GammaInf~{idom}}];
      BndSigmaN~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide},
                                        Not {GammaD~{idom}, GammaInf~{idom}}];
      BndSigmaInf~{idom}~{iSide} = Region[BndSigma~{idom}~{iSide},
                                          Not {GammaN~{idom}, GammaD~{idom}}];
      TrPmlSigma~{idom}~{iSide} = ElementsOf[ Pml~{idom}~{iSide},
                                                OnOneSideOf Sigma~{idom}~{iSide} ];
      TrBndPmlSigma~{idom}~{iSide} = ElementsOf[ PmlInf~{idom}~{iSide},
                                                OnOneSideOf Sigma~{idom}~{iSide} ];
    EndFor
    Pml~{idom} = Region[{Pml~{idom}~{0}, Pml~{idom}~{1}}];
    PmlInf~{idom} = Region[{PmlInf~{idom}~{0}, PmlInf~{idom}~{1}}];
    BndSigmaInf~{idom} = Region[{BndSigmaInf~{idom}~{0}, BndSigmaInf~{idom}~{1}}];
  EndFor
}

Constraint{
  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);
    { Name Dirichlet_ux~{idom};
      Case {
        { Region GammaD~{idom}; Value $PhysicalSource ? -uxinc[] : 0. ; }
      }
    }
    { Name Dirichlet_ux0~{idom};
      Case {
        { Region GammaD0~{idom}; Value 0.; }
        { Region PmlD0~{idom}~{0}; Value 0.; }
        { Region PmlD0~{idom}~{1}; Value 0.; }
      }
    }
    { Name Dirichlet_uy~{idom};
      Case {
        { Region GammaD~{idom}; Value $PhysicalSource ? -uyinc[] : 0.; }
      }
    }
    { Name Dirichlet_uy0~{idom};
      Case {
        { Region GammaD0~{idom}; Value 0.; }
        { Region PmlD0~{idom}~{0}; Value 0.; }
        { Region PmlD0~{idom}~{1}; Value 0.; }
      }
    }
  EndFor
}

FunctionSpace {
  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);
    { Name Hgrad_ux~{idom}; Type Form0;
      BasisFunction {
        { Name sxn; NameOfCoef uxn; Function BF_Node;
          Support Region[ {Omega~{idom}, Pml~{idom}, GammaInf~{idom},
              BndGammaInf~{idom}, PmlInf~{idom}, Sigma~{idom}, GammaPoint~{idom},
              BndSigmaInf~{idom}}];
          Entity NodesOf[ All ];
        }
      }
      Constraint {
        { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint Dirichlet_ux~{idom}; }
        { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint Dirichlet_ux0~{idom}; }
      }
    }
    { Name Hgrad_uy~{idom}; Type Form0;
      BasisFunction {
        { Name syn; NameOfCoef uyn; Function BF_Node;
          Support Region[ {Omega~{idom}, Pml~{idom}, GammaInf~{idom},
              BndGammaInf~{idom}, PmlInf~{idom}, Sigma~{idom}, GammaPoint~{idom},
              BndSigmaInf~{idom}} ];
          Entity NodesOf[ All ];
        }
      }
      Constraint {
        { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint Dirichlet_uy~{idom}; }
        { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint Dirichlet_uy0~{idom}; }
      }
    }
    For iSide In {0:1}
      { Name Hgrad_gx_out~{idom}~{iSide}; Type Form0;
        BasisFunction {
          { Name sxn; NameOfCoef uxn; Function BF_Node;
            Support Region[ {Sigma~{idom}~{iSide}, TrPmlSigma~{idom}~{iSide},
                TrBndPmlSigma~{idom}~{iSide} } ];
            Entity NodesOf[ Sigma~{idom}~{iSide}, Not {GammaD~{idom}, GammaD0~{idom},
                            PmlD0~{idom}~{iSide}}];
          }
        }
      }
      { Name Hgrad_gy_out~{idom}~{iSide}; Type Form0;
        BasisFunction {
          { Name syn; NameOfCoef uyn; Function BF_Node;
            Support Region[ {Sigma~{idom}~{iSide}, TrPmlSigma~{idom}~{iSide},
                TrBndPmlSigma~{idom}~{iSide} } ];
            Entity NodesOf[ Sigma~{idom}~{iSide}, Not {GammaD~{idom}, GammaD0~{idom},
                            PmlD0~{idom}~{iSide}}];
          }
        }
      }
    EndFor
  EndFor
}

Formulation {
  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);
    { Name Vol~{idom}; Type FemEquation;
      Quantity {
        { Name ux~{idom}; Type Local; NameOfSpace Hgrad_ux~{idom}; }
        { Name uy~{idom}; Type Local; NameOfSpace Hgrad_uy~{idom}; }
      }
      Equation {
        Galerkin { [ C_XX[] * Dof{d ux~{idom}} , {d ux~{idom}} ] ;
          In Omega~{idom} ; Jacobian JVol ; Integration I1 ; }
        Galerkin { [ C_XY[] * Dof{d uy~{idom}} , {d ux~{idom}} ] ;
          In Omega~{idom} ; Jacobian JVol ; Integration I1 ; }
        Galerkin { [ C_YX[] * Dof{d ux~{idom}} , {d uy~{idom}} ] ;
          In Omega~{idom} ; Jacobian JVol ; Integration I1 ; }
        Galerkin { [ C_YY[] * Dof{d uy~{idom}} , {d uy~{idom}} ] ;
          In Omega~{idom} ; Jacobian JVol ; Integration I1 ; }

        Galerkin {  [ -w^2 * rho*Dof{ux~{idom}} , {ux~{idom}} ] ;
          In Omega~{idom} ; Jacobian JVol ; Integration I1 ; }
        Galerkin {  [ -w^2 * rho*Dof{uy~{idom}} , {uy~{idom}} ] ;
          In Omega~{idom} ; Jacobian JVol ; Integration I1 ; }

        // artificial sources on transmission boundaries (iSide split only useful
        // for sweeping-type preconditioners)
        For iSide In {0:1}
          Galerkin { [ - ($ArtificialSource~{iSide} ? CompX[g_in~{idom}~{iSide}[]] : 0),
              {ux~{idom}} ];
            In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
          Galerkin { [ - ($ArtificialSource~{iSide} ? CompY[g_in~{idom}~{iSide}[]] : 0),
              {uy~{idom}} ];
            In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
          // the same, but modified for SGS
          // il faut encore que je regarde bien les trucs du préconditionneur
          /*Galerkin { [ - ($ArtificialSourceSGS~{iSide} ? CompY[g_in_c~{idom}~{iSide}[]] : 0),
             {uy~{idom}} ];
             In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
           Galerkin { [ - ($ArtificialSourceSGS~{iSide} ? CompX[g_in_c~{idom}~{iSide}[]] : 0),
             {ux~{idom}} ];
             In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }*/
        EndFor

        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompX[Normal[]]* Dof{ux~{idom}}) , {ux~{idom}} ] ;
          In Sigma~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* Dof{uy~{idom}}) , {ux~{idom}} ] ;
          In Sigma~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* Dof{ux~{idom}}) , {uy~{idom}} ] ;
          In Sigma~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompY[Normal[]]*CompY[Normal[]]* Dof{uy~{idom}}) , {uy~{idom}} ] ;
          In Sigma~{idom} ; Jacobian JSur ; Integration I1 ; }

        Galerkin { [-I[]*w*cs*(CompY[Normal[]]*CompY[Normal[]]* Dof{ux~{idom}}) , {ux~{idom}} ] ;
          In Sigma~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* Dof{uy~{idom}}) , {ux~{idom}} ] ;
          In Sigma~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cs*(CompX[Normal[]]*CompX[Normal[]]* Dof{uy~{idom}}) , {uy~{idom}} ] ;
          In Sigma~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* Dof{ux~{idom}}) , {uy~{idom}} ] ;
          In Sigma~{idom} ; Jacobian JSur ; Integration I1 ; }

        // absorbing boundary condition
        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompX[Normal[]]* Dof{ux~{idom}}) , {ux~{idom}} ] ;
          In GammaInf~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* Dof{uy~{idom}}) , {ux~{idom}} ] ;
          In GammaInf~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* Dof{ux~{idom}}) , {uy~{idom}} ] ;
          In GammaInf~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompY[Normal[]]*CompY[Normal[]]* Dof{uy~{idom}}) , {uy~{idom}} ] ;
          In GammaInf~{idom} ; Jacobian JSur ; Integration I1 ; }

        Galerkin { [-I[]*w*cs*(CompY[Normal[]]*CompY[Normal[]]* Dof{ux~{idom}}) , {ux~{idom}} ] ;
          In GammaInf~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* Dof{uy~{idom}}) , {ux~{idom}} ] ;
          In GammaInf~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cs*(CompX[Normal[]]*CompX[Normal[]]* Dof{uy~{idom}}) , {uy~{idom}} ] ;
          In GammaInf~{idom} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* Dof{ux~{idom}}) , {uy~{idom}} ] ;
          In GammaInf~{idom} ; Jacobian JSur ; Integration I1 ; }

        // this assumes that GammaInf is closed; we need to add the boundary
        // terms if it is open
        /*Galerkin { [ betaBT[] * Dof{d u~{idom}} , {d u~{idom}} ];
        In GammaInf~{idom}; Jacobian JSur; Integration I1; }*/
      }
    }

    // Compute the outgoing data
    For iSide In {0:1}
      { Name Sur~{idom}~{iSide}; Type FemEquation;
        Quantity {
          { Name ux~{idom}; Type Local; NameOfSpace Hgrad_ux~{idom}; }
          { Name uy~{idom}; Type Local; NameOfSpace Hgrad_uy~{idom}; }
          { Name gx_out~{idom}~{iSide}; Type Local; NameOfSpace Hgrad_gx_out~{idom}~{iSide}; }
          { Name gy_out~{idom}~{iSide}; Type Local; NameOfSpace Hgrad_gy_out~{idom}~{iSide}; }
        }
        Equation {
          // reverse sign if d_n computed in Omega

          Galerkin { [ Dof{gx_out~{idom}~{iSide}} , {gx_out~{idom}~{iSide}} ];
            In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
          Galerkin { [ $ArtificialSource~{iSide} ? CompX[g_in~{idom}~{iSide}[]] : 0 ,{gx_out~{idom}~{iSide}} ];
            In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
          Galerkin { [ Dof{gy_out~{idom}~{iSide}} , {gy_out~{idom}~{iSide}} ];
            In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }
          Galerkin { [ $ArtificialSource~{iSide} ? CompY[g_in~{idom}~{iSide}[]] : 0 ,{gy_out~{idom}~{iSide}} ];
            In Sigma~{idom}~{iSide}; Jacobian JSur; Integration I1; }

          Galerkin { [2*I[]*w*cp*(CompX[Normal[]]*CompX[Normal[]]* {ux~{idom}}) , {gx_out~{idom}~{iSide}} ] ;
            In Sigma~{idom}~{iSide} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [2*I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* {uy~{idom}}) , {gx_out~{idom}~{iSide}} ] ;
            In Sigma~{idom}~{iSide} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [2*I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* {ux~{idom}}) , {gy_out~{idom}~{iSide}} ] ;
            In Sigma~{idom}~{iSide} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [2*I[]*w*cp*(CompY[Normal[]]*CompY[Normal[]]* {uy~{idom}}) , {gy_out~{idom}~{iSide}} ] ;
            In Sigma~{idom}~{iSide} ; Jacobian JSur ; Integration I1 ; }

          Galerkin { [2*I[]*w*cs*(CompY[Normal[]]*CompY[Normal[]]* {ux~{idom}}) , {gx_out~{idom}~{iSide}} ] ;
            In Sigma~{idom}~{iSide} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [-2*I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* {uy~{idom}}) , {gx_out~{idom}~{iSide}} ] ;
            In Sigma~{idom}~{iSide} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [2*I[]*w*cs*(CompX[Normal[]]*CompX[Normal[]]* {uy~{idom}}) , {gy_out~{idom}~{iSide}} ] ;
            In Sigma~{idom}~{iSide} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [-2*I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* {ux~{idom}}) , {gy_out~{idom}~{iSide}} ] ;
            In Sigma~{idom}~{iSide} ; Jacobian JSur ; Integration I1 ; }

        }
      }
    EndFor

  EndFor
}

PostProcessing {
  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);
    { Name Vol~{idom}; NameOfFormulation Vol~{idom};
      PostQuantity {
        { Name ux~{idom}; Value { Local { [ {ux~{idom}} ];
              In Omega~{idom}; Jacobian JVol; } } }
        { Name uy~{idom}; Value { Local { [ {uy~{idom}} ];
              In Omega~{idom}; Jacobian JVol; } } }
        { Name ux_tot~{idom}; Value { Local { [ {ux~{idom}} + uxinc[] ];
              In Omega~{idom}; Jacobian JVol; } } }
        { Name uy_tot~{idom}; Value { Local { [ {uy~{idom}} + uyinc[] ];
              In Omega~{idom}; Jacobian JVol; } } }
        { Name c~{idom}; Value { Local { [ c[] ];
              In Omega~{idom}; Jacobian JVol; } } }
      }
    }
    For iSide In {0:1}
      { Name Sur~{idom}~{iSide}; NameOfFormulation Sur~{idom}~{iSide};
        PostQuantity {
          { Name g_out~{idom}~{iSide}; Value { Local { [
                  Vector[{gx_out~{idom}~{iSide}}, {gy_out~{idom}~{iSide}}, 0.]];
                In Sigma~{idom}~{iSide}; Jacobian JSur; } } }
        }
      }
      { Name g_copy~{idom}~{iSide}; NameOfFormulation Sur~{idom}~{iSide};
        // name of formulation is used only for convenience; no data from that
        // function space is actually used
        PostQuantity {
          { Name g~{idom}~{iSide}; Value {
              Local { [ $ArtificialSourceSGS~{iSide} ? g_in~{idom}~{iSide}[] : Vector[0., 0., 0.] ];
                In Sigma~{idom}~{iSide}; Jacobian JSur; } } }
        }
      }
    EndFor
  EndFor
}

PostOperation {
  For ii In {0: #ListOfSubdomains()-1}
    idom = ListOfSubdomains(ii);
    { Name DDM~{idom}; NameOfPostProcessing Vol~{idom};
      Operation {
        Print[ ux~{idom}, OnElementsOf Omega~{idom},
          File StrCat(DIR, Sprintf("ux_%g.pos",idom))];
        Print[ uy~{idom}, OnElementsOf Omega~{idom},
          File StrCat(DIR, Sprintf("uy_%g.pos",idom))];
        //Print[ ux_tot~{idom}, OnElementsOf Omega~{idom},
        //  File StrCat(DIR, Sprintf("ux_tot_%g.pos",idom))];
        // // save velocity field
        // Print[ c~{idom}, OnElementsOf Omega~{idom},
        //   File StrCat(DIR, Sprintf("c_%g.pos",idom))];
      }
    }
    For iSide In {0:1}
      { Name g_out~{idom}~{iSide}; NameOfPostProcessing Sur~{idom}~{iSide};
        Operation {
          Print[ g_out~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide},
            StoreInField (2*(idom+N_DOM)+(iSide-1))%(2*N_DOM)
            // File Sprintf("gg%g_%g.pos",idom, iSide)
          ];
        }
      }
      { Name g_copy~{idom}~{iSide}; NameOfPostProcessing g_copy~{idom}~{iSide};
        Operation {
          Print[ g~{idom}~{iSide}, OnElementsOf Sigma~{idom}~{iSide},
            StoreInField 4*N_DOM+(2*(idom+N_DOM)-2+3*iSide)%(2*N_DOM)];
        }
      }
    EndFor
  EndFor
}
