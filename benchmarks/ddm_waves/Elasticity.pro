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
  For i In {0:N_DOM-1}
    If (i % MPI_Size == MPI_Rank)
      For jj In {0:#myD~{i}()-1}
        j = myD~{i}(jj);
        g_in_c~{i}~{j}[Sigma~{i}~{j}] = g_in~{i}~{j}[];
      EndFor
    EndIf
  EndFor

  C_XX[]=Tensor[K+(4/3)*G, 0, 0, 0,  G, 0, 0, 0, 0] ;
  C_XY[]=Tensor[0, K-(2/3)*G, 0, G, 0, 0, 0, 0, 0] ;
  C_YX[]=Tensor[0, G, 0, K-(2/3)*G, 0, 0, 0, 0, 0] ;
  C_YY[]=Tensor[G, 0, 0, 0, K+(4/3)*G, 0, 0, 0, 0] ;
}

Group{
  For ii In {0: #myD()-1}
    i = myD(ii);
    DefineGroup[ GammaPoint~{i} ];
    TrOmegaGammaD~{i} = ElementsOf[ Omega~{i}, OnOneSideOf GammaD~{i} ];
    For jj In {0: #myD~{i}()-1}
      j = myD~{i}(jj);
      DefineGroup [ Pml~{i}~{j}, PmlD0~{i}~{j}, PmlInf~{i}~{j} ];
      BndSigmaD~{i}~{j} = Region[BndSigma~{i}~{j},
                                        Not {GammaN~{i}, GammaInf~{i}}];
      BndSigmaN~{i}~{j} = Region[BndSigma~{i}~{j},
                                        Not {GammaD~{i}, GammaInf~{i}}];
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
    { Name Dirichlet_ux~{i};
      Case {
        { Region GammaD~{i}; Value $PhysicalSource ? -uxinc[] : 0. ; }
      }
    }
    { Name Dirichlet_ux0~{i};
      Case {
        { Region GammaD0~{i}; Value 0.; }
        For jj In {0:#myD~{i}()-1}
          j = myD~{i}(jj);
          { Region PmlD0~{i}~{j}; Value 0.; }
        EndFor
    }
    }
    { Name Dirichlet_uy~{i};
      Case {
        { Region GammaD~{i}; Value $PhysicalSource ? -uyinc[] : 0.; }
      }
    }
    { Name Dirichlet_uy0~{i};
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
    { Name Hgrad_ux~{i}; Type Form0;
      BasisFunction {
        { Name sxn; NameOfCoef uxn; Function BF_Node;
          Support Region[ {Omega~{i}, Pml~{i}, GammaInf~{i},
              BndGammaInf~{i}, PmlInf~{i}, Sigma~{i}, GammaPoint~{i},
              BndSigmaInf~{i}}];
          Entity NodesOf[ All ];
        }
      }
      Constraint {
        { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint Dirichlet_ux~{i}; }
        { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint Dirichlet_ux0~{i}; }
      }
    }
    { Name Hgrad_uy~{i}; Type Form0;
      BasisFunction {
        { Name syn; NameOfCoef uyn; Function BF_Node;
          Support Region[ {Omega~{i}, Pml~{i}, GammaInf~{i},
              BndGammaInf~{i}, PmlInf~{i}, Sigma~{i}, GammaPoint~{i},
              BndSigmaInf~{i}} ];
          Entity NodesOf[ All ];
        }
      }
      Constraint {
        { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint Dirichlet_uy~{i}; }
        { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint Dirichlet_uy0~{i}; }
      }
    }
    For jj In {0: #myD~{i}()-1}
      j = myD~{i}(jj);
      { Name Hgrad_gx_out~{i}~{j}; Type Form0;
        BasisFunction {
          { Name sxn; NameOfCoef uxn; Function BF_Node;
            Support Region[ {Sigma~{i}~{j}, TrPmlSigma~{i}~{j},
                TrBndPmlSigma~{i}~{j} } ];
            Entity NodesOf[ Sigma~{i}~{j}, Not {GammaD~{i}, GammaD0~{i},
                            PmlD0~{i}~{j}}];
          }
        }
      }
      { Name Hgrad_gy_out~{i}~{j}; Type Form0;
        BasisFunction {
          { Name syn; NameOfCoef uyn; Function BF_Node;
            Support Region[ {Sigma~{i}~{j}, TrPmlSigma~{i}~{j},
                TrBndPmlSigma~{i}~{j} } ];
            Entity NodesOf[ Sigma~{i}~{j}, Not {GammaD~{i}, GammaD0~{i},
                            PmlD0~{i}~{j}}];
          }
        }
      }
    EndFor
  EndFor
}

Formulation {
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Vol~{i}; Type FemEquation;
      Quantity {
        { Name ux~{i}; Type Local; NameOfSpace Hgrad_ux~{i}; }
        { Name uy~{i}; Type Local; NameOfSpace Hgrad_uy~{i}; }
      }
      Equation {
        Galerkin { [ C_XX[] * Dof{d ux~{i}} , {d ux~{i}} ] ;
          In Omega~{i} ; Jacobian JVol ; Integration I1 ; }
        Galerkin { [ C_XY[] * Dof{d uy~{i}} , {d ux~{i}} ] ;
          In Omega~{i} ; Jacobian JVol ; Integration I1 ; }
        Galerkin { [ C_YX[] * Dof{d ux~{i}} , {d uy~{i}} ] ;
          In Omega~{i} ; Jacobian JVol ; Integration I1 ; }
        Galerkin { [ C_YY[] * Dof{d uy~{i}} , {d uy~{i}} ] ;
          In Omega~{i} ; Jacobian JVol ; Integration I1 ; }

        Galerkin {  [ -w^2 * rho*Dof{ux~{i}} , {ux~{i}} ] ;
          In Omega~{i} ; Jacobian JVol ; Integration I1 ; }
        Galerkin {  [ -w^2 * rho*Dof{uy~{i}} , {uy~{i}} ] ;
          In Omega~{i} ; Jacobian JVol ; Integration I1 ; }

        // artificial sources on transmission boundaries (j split only useful
        // for sweeping-type preconditioners)
        For jj In {0: #myD~{i}()-1}
          j = myD~{i}(jj);
          Galerkin { [ - ($ArtificialSource~{j} ? CompX[g_in~{i}~{j}[]] : 0),
              {ux~{i}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          Galerkin { [ - ($ArtificialSource~{j} ? CompY[g_in~{i}~{j}[]] : 0),
              {uy~{i}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          // the same, but modified for SGS
          // il faut encore que je regarde bien les trucs du préconditionneur
          /*Galerkin { [ - ($ArtificialSourceSGS~{j} ? CompY[g_in_c~{i}~{j}[]] : 0),
             {uy~{i}} ];
             In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
           Galerkin { [ - ($ArtificialSourceSGS~{j} ? CompX[g_in_c~{i}~{j}[]] : 0),
             {ux~{i}} ];
             In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }*/
        EndFor

        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompX[Normal[]]* Dof{ux~{i}}) , {ux~{i}} ] ;
          In Sigma~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* Dof{uy~{i}}) , {ux~{i}} ] ;
          In Sigma~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* Dof{ux~{i}}) , {uy~{i}} ] ;
          In Sigma~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompY[Normal[]]*CompY[Normal[]]* Dof{uy~{i}}) , {uy~{i}} ] ;
          In Sigma~{i} ; Jacobian JSur ; Integration I1 ; }

        Galerkin { [-I[]*w*cs*(CompY[Normal[]]*CompY[Normal[]]* Dof{ux~{i}}) , {ux~{i}} ] ;
          In Sigma~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* Dof{uy~{i}}) , {ux~{i}} ] ;
          In Sigma~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cs*(CompX[Normal[]]*CompX[Normal[]]* Dof{uy~{i}}) , {uy~{i}} ] ;
          In Sigma~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* Dof{ux~{i}}) , {uy~{i}} ] ;
          In Sigma~{i} ; Jacobian JSur ; Integration I1 ; }

        // absorbing boundary condition
        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompX[Normal[]]* Dof{ux~{i}}) , {ux~{i}} ] ;
          In GammaInf~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* Dof{uy~{i}}) , {ux~{i}} ] ;
          In GammaInf~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* Dof{ux~{i}}) , {uy~{i}} ] ;
          In GammaInf~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cp*(CompY[Normal[]]*CompY[Normal[]]* Dof{uy~{i}}) , {uy~{i}} ] ;
          In GammaInf~{i} ; Jacobian JSur ; Integration I1 ; }

        Galerkin { [-I[]*w*cs*(CompY[Normal[]]*CompY[Normal[]]* Dof{ux~{i}}) , {ux~{i}} ] ;
          In GammaInf~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* Dof{uy~{i}}) , {ux~{i}} ] ;
          In GammaInf~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [-I[]*w*cs*(CompX[Normal[]]*CompX[Normal[]]* Dof{uy~{i}}) , {uy~{i}} ] ;
          In GammaInf~{i} ; Jacobian JSur ; Integration I1 ; }
        Galerkin { [ I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* Dof{ux~{i}}) , {uy~{i}} ] ;
          In GammaInf~{i} ; Jacobian JSur ; Integration I1 ; }

        // this assumes that GammaInf is closed; we need to add the boundary
        // terms if it is open
        /*Galerkin { [ betaBT[] * Dof{d u~{i}} , {d u~{i}} ];
        In GammaInf~{i}; Jacobian JSur; Integration I1; }*/
      }
    }

    // Compute the outgoing data
    For jj In {0: #myD~{i}()-1}
      j = myD~{i}(jj);
      { Name Sur~{i}~{j}; Type FemEquation;
        Quantity {
          { Name ux~{i}; Type Local; NameOfSpace Hgrad_ux~{i}; }
          { Name uy~{i}; Type Local; NameOfSpace Hgrad_uy~{i}; }
          { Name gx_out~{i}~{j}; Type Local; NameOfSpace Hgrad_gx_out~{i}~{j}; }
          { Name gy_out~{i}~{j}; Type Local; NameOfSpace Hgrad_gy_out~{i}~{j}; }
        }
        Equation {
          // reverse sign if d_n computed in Omega

          Galerkin { [ Dof{gx_out~{i}~{j}} , {gx_out~{i}~{j}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          Galerkin { [ $ArtificialSource~{j} ? CompX[g_in~{i}~{j}[]] : 0 ,{gx_out~{i}~{j}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          Galerkin { [ Dof{gy_out~{i}~{j}} , {gy_out~{i}~{j}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }
          Galerkin { [ $ArtificialSource~{j} ? CompY[g_in~{i}~{j}[]] : 0 ,{gy_out~{i}~{j}} ];
            In Sigma~{i}~{j}; Jacobian JSur; Integration I1; }

          Galerkin { [2*I[]*w*cp*(CompX[Normal[]]*CompX[Normal[]]* {ux~{i}}) , {gx_out~{i}~{j}} ] ;
            In Sigma~{i}~{j} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [2*I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* {uy~{i}}) , {gx_out~{i}~{j}} ] ;
            In Sigma~{i}~{j} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [2*I[]*w*cp*(CompX[Normal[]]*CompY[Normal[]]* {ux~{i}}) , {gy_out~{i}~{j}} ] ;
            In Sigma~{i}~{j} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [2*I[]*w*cp*(CompY[Normal[]]*CompY[Normal[]]* {uy~{i}}) , {gy_out~{i}~{j}} ] ;
            In Sigma~{i}~{j} ; Jacobian JSur ; Integration I1 ; }

          Galerkin { [2*I[]*w*cs*(CompY[Normal[]]*CompY[Normal[]]* {ux~{i}}) , {gx_out~{i}~{j}} ] ;
            In Sigma~{i}~{j} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [-2*I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* {uy~{i}}) , {gx_out~{i}~{j}} ] ;
            In Sigma~{i}~{j} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [2*I[]*w*cs*(CompX[Normal[]]*CompX[Normal[]]* {uy~{i}}) , {gy_out~{i}~{j}} ] ;
            In Sigma~{i}~{j} ; Jacobian JSur ; Integration I1 ; }
          Galerkin { [-2*I[]*w*cs*(CompX[Normal[]]*CompY[Normal[]]* {ux~{i}}) , {gy_out~{i}~{j}} ] ;
            In Sigma~{i}~{j} ; Jacobian JSur ; Integration I1 ; }

        }
      }
    EndFor

  EndFor
}

PostProcessing {
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Vol~{i}; NameOfFormulation Vol~{i};
      PostQuantity {
        { Name ux~{i}; Value { Local { [ {ux~{i}} ];
              In Omega~{i}; Jacobian JVol; } } }
        { Name uy~{i}; Value { Local { [ {uy~{i}} ];
              In Omega~{i}; Jacobian JVol; } } }
        { Name ux_tot~{i}; Value { Local { [ {ux~{i}} + uxinc[] ];
              In Omega~{i}; Jacobian JVol; } } }
        { Name uy_tot~{i}; Value { Local { [ {uy~{i}} + uyinc[] ];
              In Omega~{i}; Jacobian JVol; } } }
        { Name c~{i}; Value { Local { [ c[] ];
              In Omega~{i}; Jacobian JVol; } } }
      }
    }
    For jj In {0: #myD~{i}()-1}
      j = myD~{i}(jj);
      { Name Sur~{i}~{j}; NameOfFormulation Sur~{i}~{j};
        PostQuantity {
          { Name g_out~{i}~{j}; Value { Local { [
                  Vector[{gx_out~{i}~{j}}, {gy_out~{i}~{j}}, 0.]];
                In Sigma~{i}~{j}; Jacobian JSur; } } }
        }
      }
      { Name g_copy~{i}~{j}; NameOfFormulation Sur~{i}~{j};
        // name of formulation is used only for convenience; no data from that
        // function space is actually used
        PostQuantity {
          { Name g~{i}~{j}; Value {
              Local { [ $ArtificialSourceSGS~{j} ? g_in~{i}~{j}[] : Vector[0., 0., 0.] ];
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
        Print[ ux~{i}, OnElementsOf Omega~{i},
          File StrCat(DIR, Sprintf("ux_%g.pos",i))];
        Print[ uy~{i}, OnElementsOf Omega~{i},
          File StrCat(DIR, Sprintf("uy_%g.pos",i))];
        //Print[ ux_tot~{i}, OnElementsOf Omega~{i},
        //  File StrCat(DIR, Sprintf("ux_tot_%g.pos",i))];
        // // save velocity field
        // Print[ c~{i}, OnElementsOf Omega~{i},
        //   File StrCat(DIR, Sprintf("c_%g.pos",i))];
      }
    }
    For jj In {0: #myD~{i}()-1}
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
