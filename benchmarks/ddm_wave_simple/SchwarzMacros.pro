For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
  DefineConstant[GenerateVolFlag~{idom} = 0];
  DefineConstant[GenerateSurFlag~{idom}~{0} = 0, GenerateSurFlag~{idom}~{1} = 0];
EndFor

Macro SolveSubdomains
  // work on own cpu
  SetCommSelf;
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    // update Dirichlet constraints (only actually necessary when #10
    // changes for Helmholtz)
    UpdateConstraint[Vol~{idom}, GammaD~{idom}, Assign];
    // solve the volume PDE on each subdomain
    If(GenerateVolFlag~{idom})
      GenerateRHSGroup[Vol~{idom}, Region[{Sigma~{idom}, TrOmegaGammaD~{idom}}] ] ;
    EndIf
    If(GenerateVolFlag~{idom} == 0)
      Generate[Vol~{idom}] ;
      GenerateVolFlag~{idom} = 1 ;
    EndIf
    SolveAgain[Vol~{idom}] ;
  EndFor
  // go back to parallel mode
  SetCommWorld;
Return

Macro UpdateGonSurfaces
  SetCommSelf;
  // compute g_in for next iteration, (must be
  // done after all resolutions)
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    // solve the surface PDE on the boundaries of each subdomain
    For iSide In {0:1}
      If(NbrRegions[Sigma~{idom}~{iSide}])
        If(GenerateSurFlag~{idom}~{iSide})
          GenerateRHSGroup[Sur~{idom}~{iSide},
			   Region[{Sigma~{idom}~{iSide}, TrPmlSigma~{idom}~{iSide}}]] ;
        EndIf
        If(GenerateSurFlag~{idom}~{iSide} == 0)
          Generate[Sur~{idom}~{iSide}] ;
          GenerateSurFlag~{idom}~{iSide} = 1 ;
        EndIf
        SolveAgain[Sur~{idom}~{iSide}] ;
      EndIf
    EndFor
  EndFor
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    For iSide In {0:1}
      PostOperation[g_out~{idom}~{iSide}] ;
    EndFor
  EndFor
  SetCommWorld;
Return

Macro SaveVolumeSolutions
  SetCommSelf;
  // compute the volume solution
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);
    PostOperation[DDM~{idom}] ;
  EndFor
  SetCommWorld;
Return

Macro EnablePhysicalSourcesOnly
  Evaluate[1. #10]; Evaluate[0. #11]; Evaluate[0. #12];
  Evaluate[0. #21]; Evaluate[0. #22];
Return

Macro EnableArtificialSourcesOnly
  Evaluate[0. #10]; Evaluate[1. #11]; Evaluate[1. #12];
  Evaluate[0. #21]; Evaluate[0. #22];
Return

Macro EnableAllSources
  Evaluate[1. #10]; Evaluate[1. #11]; Evaluate[1. #12];
  Evaluate[0. #21]; Evaluate[0. #22];
Return

Macro PrintInfo
  If (MPI_Rank == 0)
    Printf[StrCat["Starting ", StrChoice[ANALYSIS == 0, "Helmholtz", "Maxwell"],
        " DDM with %g subdomains / %g processes"], N_DOM, MPI_Size];
    If(TC_TYPE == 0)
      Printf[StrCat["Using 0-th order (", StrChoice[ANALYSIS == 0, "Sommerfeld/EMDA",
            "Silver-Muller"], ") transmission conditions"]];
    EndIf
    If(TC_TYPE == 1)
      Printf[StrCat["Using 2-nd order (", StrChoice[ANALYSIS == 0, "OO2",
            "J-F. Lee"], ") transmission conditions"]];
    EndIf
    If(TC_TYPE == 2)
      Printf["Using %g-th order Pade (OSRC) transmission conditions", NP_OSRC];
    EndIf
    If(TC_TYPE == 3)
      Printf["Using PML transmission conditions"];
    EndIf
    Printf["Relative iterative solver tolerance = %g", TOL];
  EndIf

  // increase preallocation for Maxwell formulation
  If(ANALYSIS == 1)
    SetGlobalSolverOptions["-petsc_prealloc 200"];
  EndIf

  Printf["Using sweeping preconditioner: %g", PRECOND_SWEEP];
  If (PRECOND_SWEEP)
    Printf["SGS (additive) = %g", SGS];
  EndIf
Return
