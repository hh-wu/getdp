DefineConstant[ SGS ];

For ii In {0: #ListOfDom()-1}
  idom = ListOfDom(ii);
  DefineConstant[GenerateSurPcFlag~{idom}~{0} = 0, GenerateSurPcFlag~{idom}~{1} = 0];
EndFor

Macro CopyG
  SetCommSelf;
  For ii In {0:#ListOfDom()-1}
    idom = ListOfDom(ii);
    For iSide In {0:1}
      If (SGS) PostOperation[g_copy~{idom}~{iSide}]; EndIf
      // do the Generate if necessary
      If (GenerateSurPcFlag~{idom}~{iSide} == 0) // FIXME: to this separately ?
        If( NbrRegions[Sigma~{idom}~{iSide}] )
          Generate[SurPc~{idom}~{iSide}] ;
        EndIf
        GenerateSurPcFlag~{idom}~{iSide} = 1;
      EndIf
    EndFor
  EndFor
  SetCommWorld;
Return

Macro SolveAndStepForward
  SetCommSelf;
  If( proc == MPI_Rank && ProcOwnsDomain(idom_f) )
    Evaluate[$ArtificialSource~{0} = 1]; Evaluate[$ArtificialSource~{1} = 0];
    Evaluate[$ArtificialSourceSGS~{0} = 0]; Evaluate[$ArtificialSourceSGS~{1} = SGS];

    skipList = {2*idom_f, (2*(idom_f + N_DOM)+1)%(2*N_DOM)}; // right
    BroadcastFields[skipList()];

    // compute u on Omega_i (fast way)
    GenerateRHSGroup[Vol~{idom_f}, Region[{Sigma~{idom_f}}]] ;
    SolveAgain[Vol~{idom_f}] ;

    // compute the new g_out (fast way)
    If( NbrRegions[Sigma~{idom_f}~{1}] )
      GenerateRHSGroup[SurPc~{idom_f}~{1}, Region[{Sigma~{idom_f}~{1},
            TrPmlSigma~{idom_f}~{1}}]] ;
      SolveAgain[SurPc~{idom_f}~{1}] ;
    EndIf
    PostOperation[g_out~{idom_f}~{1}] ;

    skipList = {(2*(idom_f + N_DOM)-1)%(2*N_DOM), (2*(idom_f + N_DOM)-2)%(2*N_DOM)}; // left
    BroadcastFields[skipList()];
  EndIf
  SetCommWorld;
Return

Macro SolveAndStepBackward
  SetCommSelf;
  If( proc == MPI_Rank && ProcOwnsDomain(idom_b) )
    Evaluate[$ArtificialSource~{0} = 0]; Evaluate[$ArtificialSource~{1} = 1];
    Evaluate[$ArtificialSourceSGS~{0} = SGS]; Evaluate[$ArtificialSourceSGS~{1} = 0];

    skipList = {(2*(idom_b + N_DOM)-1)%(2*N_DOM), (2*(idom_b + N_DOM)-2)%(2*N_DOM)}; // left
    BroadcastFields[skipList()];

    // compute u on Omega_i (fast way)
    GenerateRHSGroup[Vol~{idom_b}, Region[{Sigma~{idom_b}}]] ;
    SolveAgain[Vol~{idom_b}] ;

    // compute the new g_out (fast way)
    If( NbrRegions[Sigma~{idom_b}~{0}] )
      GenerateRHSGroup[SurPc~{idom_b}~{0}, Region[{Sigma~{idom_b}~{0},
            TrPmlSigma~{idom_b}~{0}}]] ;
      SolveAgain[SurPc~{idom_b}~{0}] ;
    EndIf
    PostOperation[g_out~{idom_b}~{0}] ;

    skipList = {2*idom_b, (2*(idom_b + N_DOM)+1)%(2*N_DOM)}; // right
    BroadcastFields[skipList()];
  EndIf
  SetCommWorld;
Return

Macro FinalizeSweep
  SetCommSelf;
  If ( proc == MPI_Rank && ProcOwnsDomain(ListOfCuts(iCut)) ) // first of cut
    BroadcastFields[];
  EndIf
  SetCommWorld;
Return

Macro InitSweep
  SetCommSelf;
  If( proc == MPI_Rank && ProcOwnsDomain(idom) )
    If (SGS)
      Evaluate[$ArtificialSource~{0} = SGS]; Evaluate[$ArtificialSource~{1} = SGS];
      Evaluate[$ArtificialSourceSGS~{0} = 0]; Evaluate[$ArtificialSourceSGS~{1} = 0];
      // compute u on Omega_i (fast way)
      GenerateRHSGroup[Vol~{idom}, Region[{Sigma~{idom}}]] ;
      SolveAgain[Vol~{idom}] ;
      // compute the new g_out (fast way), on both sides
      For iSide In{0:1}
        If( NbrRegions[Sigma~{idom}~{iSide}] )
          GenerateRHSGroup[SurPc~{idom}~{iSide}, Region[{Sigma~{idom}~{iSide},
                TrPmlSigma~{idom}~{iSide}}]] ;
          SolveAgain[SurPc~{idom}~{iSide}] ;
        EndIf
        PostOperation[g_out~{idom}~{iSide}] ;
      EndFor
    EndIf
    BroadcastFields[];
  EndIf
  SetCommWorld;
Return
