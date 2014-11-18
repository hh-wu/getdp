Problem = Str["marmousi"];
Dir= StrCat["../",StrCat[Problem,"/"]];
MshName=StrCat[StrCat[Dir,Problem],"_mshcut"];

Group{
//FULL
  Omega = Region[{6}];
  GammaD = Region[{999}];
  GammaD0 = Region[{}];

  If (N_ON_TOP)
    GammaN = Region[{3}];
    GammaInf = Region[{1,2,4}];
  EndIf
  If (!N_ON_TOP)
    GammaN = Region[{}];
  GammaInf = Region[{1,2,3,4}];
  EndIf



  // For idom In {1:nDoms}
  // For idom In {0:N_DOM-1}
  For ii In {0: #ListOfDom()-1}
    idom = ListOfDom(ii);

    Gama_D~{idom} = Region[{1}];

    Gama_N~{idom} = Region[{}] ;
    If (N_ON_TOP)
      Gama_N~{idom} = Region[{((idom+1)*1000+203)}] ;
    EndIf


  If (idom == N_DOM-1)
  Omega~{idom} = Region[{((idom+1)*1000+200)}] ;
  OmegaPml~{idom}~{0} = Region[{((idom+1)*1000+100)}] ;
  OmegaPml~{idom}~{1} = Region[{}] ;
  OmegaPml~{idom} = Region[{OmegaPml~{idom}~{0},OmegaPml~{idom}~{1}}];
  OmegaAll~{idom} = Region[{Omega~{idom},OmegaPml~{idom}}];
  // Gama_D~{idom} = Region[{}] ;
  Gama_D0~{idom} = Region[{}] ;
  Gama_S~{idom} = Region[{((idom+1)*1000+202),((idom+1)*1000+20)}] ;

  GamaPml_S~{idom}~{0} = Region[{((idom+1)*1000+102),((idom+1)*1000+1)}] ;
  GamaPml_S~{idom}~{1} = Region[{}] ;
  GamaPml_N~{idom}~{0} = Region[{((idom+1)*1000+103)}] ;
  GamaPml_N~{idom}~{1} = Region[{}] ;
  // GamaPml_Inf~{idom}~{0} = Region[{}] ;
  // GamaPml_Inf~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;

  If (!N_ON_TOP)
    Gama_N~{idom} = Region[{}] ;
    Gama_S~{idom} = Region[{((idom+1)*1000+202), ((idom+1)*1000+203),((idom+1)*1000+20)}] ;
    GamaPml_S~{idom}~{0} = Region[{((idom+1)*1000+102),((idom+1)*1000+103),((idom+1)*1000+1)}] ;
    GamaPml_S~{idom}~{1} = Region[{}] ;
    GamaPml_N~{idom}~{0} = Region[{}] ;
    GamaPml_N~{idom}~{1} = Region[{}] ;
  EndIf

  GamaPml_S~{idom} = Region[{GamaPml_S~{idom}~{0},GamaPml_S~{idom}~{1}}] ;
  GamaPml_N~{idom} = Region[{GamaPml_N~{idom}~{0},GamaPml_N~{idom}~{1}}] ;

  Gama~{idom}~{0} = Region[{((idom+1)*1000+1)}] ; // limits of the problem; needed for the delta functions
  Gama~{idom}~{1} = Region[{((idom+1)*1000+20)}] ;  
  Gama~{idom} = Region[{Gama~{idom}~{0},Gama~{idom}~{1}}] ;

  // GamaPml~{idom}~{0} = Region[{}];
  // GamaPml~{idom}~{1} = Region[{((idom+1)*1000+20)}];
  // GamaPml~{idom} = Region[{GamaPml~{idom}~{0},GamaPml~{idom}~{1}}];

  Sigma~{idom}~{0} = Region[{((idom+1)*1000+10)}];
  Sigma~{idom}~{1} = Region[{}];
  Sigma~{idom} = Region[{Sigma~{idom}~{0},Sigma~{idom}~{1}}];
  
  GamaPmlAll~{idom}~{0} = Region[{Sigma~{idom}~{0},GamaPml_S~{idom}~{0},GamaPml_N~{idom}~{0}}];
  GamaPmlAll~{idom}~{1} = Region[{Sigma~{idom}~{1},GamaPml_S~{idom}~{1},GamaPml_N~{idom}~{1}}];

  GamaAll~{idom} = Region[{Gama~{idom}~{1},Gama_N~{idom},Gama_S~{idom},GamaPml_N~{idom},GamaPml_S~{idom}}];

  EndIf
  If (idom == 0)
  Omega~{idom} = Region[{((idom+1)*1000+200)}] ;
  OmegaPml~{idom}~{0} = Region[{}] ;
  OmegaPml~{idom}~{1} = Region[{((idom+1)*1000+300)}] ;
  OmegaPml~{idom} = Region[{OmegaPml~{idom}~{0},OmegaPml~{idom}~{1}}];
  OmegaAll~{idom} = Region[{Omega~{idom},OmegaPml~{idom}}];
  // Gama_D~{idom} = Region[{}] ;
  Gama_D0~{idom} = Region[{}] ;
  Gama_S~{idom} = Region[{((idom+1)*1000+202),((idom+1)*1000+10)}] ;

  GamaPml_S~{idom}~{0} = Region[{}] ;
  GamaPml_S~{idom}~{1} = Region[{((idom+1)*1000+302),((idom+1)*1000+4)}] ;
  GamaPml_N~{idom}~{0} = Region[{}] ;
  GamaPml_N~{idom}~{1} = Region[{((idom+1)*1000+303)}] ;
  // GamaPml_Inf~{idom}~{0} = Region[{}] ;
  // GamaPml_Inf~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;

  If (!N_ON_TOP)
    Gama_N~{idom} = Region[{}] ;
    Gama_S~{idom} = Region[{((idom+1)*1000+202), ((idom+1)*1000+203),((idom+1)*1000+10)}] ;
    GamaPml_S~{idom}~{0} = Region[{}] ;
    GamaPml_S~{idom}~{1} = Region[{((idom+1)*1000+302),((idom+1)*1000+303),((idom+1)*1000+4)}] ;
    GamaPml_N~{idom}~{0} = Region[{}] ;
    GamaPml_N~{idom}~{1} = Region[{}] ;
  EndIf

  GamaPml_S~{idom} = Region[{GamaPml_S~{idom}~{0},GamaPml_S~{idom}~{1}}] ;
  GamaPml_N~{idom} = Region[{GamaPml_N~{idom}~{0},GamaPml_N~{idom}~{1}}] ;

  Gama~{idom}~{0} = Region[{((idom+1)*1000+10)}] ; // limits of the problem; needed for the delta functions
  Gama~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;  
  Gama~{idom} = Region[{Gama~{idom}~{0},Gama~{idom}~{1}}] ;

  // GamaPml~{idom}~{0} = Region[{}];
  // GamaPml~{idom}~{1} = Region[{((idom+1)*1000+20)}];
  // GamaPml~{idom} = Region[{GamaPml~{idom}~{0},GamaPml~{idom}~{1}}];

  Sigma~{idom}~{0} = Region[{}];
  Sigma~{idom}~{1} = Region[{((idom+1)*1000+20)}];
  Sigma~{idom} = Region[{Sigma~{idom}~{0},Sigma~{idom}~{1}}];
  
  GamaPmlAll~{idom}~{0} = Region[{Sigma~{idom}~{0},GamaPml_S~{idom}~{0},GamaPml_N~{idom}~{0}}];
  GamaPmlAll~{idom}~{1} = Region[{Sigma~{idom}~{1},GamaPml_S~{idom}~{1},GamaPml_N~{idom}~{1}}];

  GamaAll~{idom} = Region[{Gama~{idom}~{0},Gama_N~{idom},Gama_S~{idom},GamaPml_N~{idom},GamaPml_S~{idom}}];
  EndIf
  If (idom > 0 && idom < N_DOM-1)
  Omega~{idom} = Region[{((idom+1)*1000+200)}] ;
  OmegaPml~{idom}~{0} = Region[{((idom+1)*1000+100)}] ;
  OmegaPml~{idom}~{1} = Region[{((idom+1)*1000+300)}] ;
  OmegaPml~{idom} = Region[{OmegaPml~{idom}~{0},OmegaPml~{idom}~{1}}];
  OmegaAll~{idom} = Region[{Omega~{idom},OmegaPml~{idom}}];
  // Gama_D~{idom} = Region[{}] ;
  Gama_D0~{idom} = Region[{}] ;
  Gama_S~{idom} = Region[{((idom+1)*1000+202)}] ;

  GamaPml_S~{idom}~{0} = Region[{((idom+1)*1000+102),((idom+1)*1000+1)}] ;
  GamaPml_S~{idom}~{1} = Region[{((idom+1)*1000+302),((idom+1)*1000+4)}] ;
  GamaPml_N~{idom}~{0} = Region[{((idom+1)*1000+103)}] ;
  GamaPml_N~{idom}~{1} = Region[{((idom+1)*1000+303)}] ;
  // GamaPml_Inf~{idom}~{0} = Region[{}] ;
  // GamaPml_Inf~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;

  If (!N_ON_TOP)
    Gama_N~{idom} = Region[{}] ;
    Gama_S~{idom} = Region[{((idom+1)*1000+202), ((idom+1)*1000+203)}] ;
    GamaPml_S~{idom}~{0} = Region[{((idom+1)*1000+102),((idom+1)*1000+103),((idom+1)*1000+1)}] ;
    GamaPml_S~{idom}~{1} = Region[{((idom+1)*1000+302),((idom+1)*1000+303),((idom+1)*1000+4)}] ;
    GamaPml_N~{idom}~{0} = Region[{}] ;
    GamaPml_N~{idom}~{1} = Region[{}] ;
  EndIf

  GamaPml_S~{idom} = Region[{GamaPml_S~{idom}~{0},GamaPml_S~{idom}~{1}}] ;
  GamaPml_N~{idom} = Region[{GamaPml_N~{idom}~{0},GamaPml_N~{idom}~{1}}] ;

  Gama~{idom}~{0} = Region[{((idom+1)*1000+1)}] ; // limits of the problem; needed for the delta function
  Gama~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;  
  Gama~{idom} = Region[{Gama~{idom}~{0},Gama~{idom}~{1}}] ;

  // GamaPml~{idom}~{0} = Region[{}];
  // GamaPml~{idom}~{1} = Region[{((idom+1)*1000+20)}];
  // GamaPml~{idom} = Region[{GamaPml~{idom}~{0},GamaPml~{idom}~{1}}];

  Sigma~{idom}~{0} = Region[{((idom+1)*1000+10)}];
  Sigma~{idom}~{1} = Region[{((idom+1)*1000+20)}];
  Sigma~{idom} = Region[{Sigma~{idom}~{0},Sigma~{idom}~{1}}];
  
  GamaPmlAll~{idom}~{0} = Region[{Sigma~{idom}~{0},GamaPml_S~{idom}~{0},GamaPml_N~{idom}~{0}}];
  GamaPmlAll~{idom}~{1} = Region[{Sigma~{idom}~{1},GamaPml_S~{idom}~{1},GamaPml_N~{idom}~{1}}];

  GamaAll~{idom} = Region[{Gama~{idom},Gama_N~{idom},Gama_S~{idom},GamaPml_N~{idom},GamaPml_S~{idom}}];
  EndIf

  EndFor

}
