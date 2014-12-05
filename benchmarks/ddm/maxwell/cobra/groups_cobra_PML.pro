Problem = Str["cobra"];
Dir= StrCat["../",StrCat[Problem,"/"]];
MshName=StrCat[Dir,"cobra"];

Group{
//FULL
  // Sigma = Region[ {} ]; 
  // Gamma_l = Region[ {4001} ];
  // Gamma_r = Region[ (2000+N_DOM) ]; 
  // Gamma_D = Region[ {(1001:1000+N_DOM),(3001:3000+N_DOM)} ]; 
  // BndGamma1 = Region[{}];
  // Omega = Region[(6001:6000+N_DOM)];
  // // GammaD = Region[{Gamma_l, Gamma_D}];
  // // GammaInf = Region[{Gamma_r}];
  // GammaD = Region[{Gamma_l}];
  // GammaD0 = Region[{Gamma_D}];
  // GammaN = Region[{}];
  // GammaN = Region[{}];
  // GammaInf = Region[{Gamma_r}];
  // BndGammaInf = Region[{}];
  // BndSigma = Region[{}];
  Sigma = Region[ {} ]; 
  Gamma_l = Region[ {1000} ];
  Gamma_r = Region[ {4000} ]; 
  Gamma_D = Region[ {2000} ]; 
  BndGamma1 = Region[{}];
  Omega = Region[{6000}];
  GammaScat = Region[{Gamma_r}]; //////////////////////
  GammaInf = Region[{Gamma_l}];
  GammaC = Region[{Gamma_D}];
  BndGammaInf = Region[{}];
  BndSigma = Region[{}];





  For idom In {0:N_DOM-1}

  // Gama_Point~{idom} = Region[{}]; // point source (Dirac)

  If (idom == 0)
  Omega~{idom} = Region[{((idom+1)*1000+200)}] ;
  OmegaPml~{idom}~{0} = Region[{}] ;
  OmegaPml~{idom}~{1} = Region[{((idom+1)*1000+300)}] ;
  OmegaPml~{idom} = Region[{OmegaPml~{idom}~{0},OmegaPml~{idom}~{1}}];
  OmegaAll~{idom} = Region[{Omega~{idom},OmegaPml~{idom}}];

  GammaScat~{idom} = Region[{}] ;
  GammaC~{idom} = Region[{((idom+1)*1000+202),((idom+1)*1000+203)}] ;
  GammaInf~{idom} = Region[{((idom+1)*1000+10)}] ;

  GammaC_Pml~{idom}~{0} = Region[{}];
  GammaC_Pml~{idom}~{1} = Region[{((idom+1)*1000+302),((idom+1)*1000+303)}];
  GammaC_Pml~{idom} = Region[{GammaC_Pml~{idom}~{0}, GammaC_Pml~{idom}~{1}}];

  GammaInf_Pml~{idom}~{0} = Region[{}] ;
  GammaInf_Pml~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;
  GammaInf_Pml~{idom} = Region[{GammaInf_Pml~{idom}~{0}, GammaInf_Pml~{idom}~{1}}];

  Sigma~{idom}~{0} = Region[{}];
  Sigma~{idom}~{1} = Region[{((idom+1)*1000+20)}];
  Sigma~{idom} = Region[{Sigma~{idom}~{0},Sigma~{idom}~{1}}];

  EndIf

  If (idom > 0 && idom < N_DOM-1)
  Omega~{idom} = Region[{((idom+1)*1000+200)}] ;
  OmegaPml~{idom}~{0} = Region[{((idom+1)*1000+100)}] ;
  OmegaPml~{idom}~{1} = Region[{((idom+1)*1000+300)}] ;
  OmegaPml~{idom} = Region[{OmegaPml~{idom}~{0},OmegaPml~{idom}~{1}}];
  OmegaAll~{idom} = Region[{Omega~{idom},OmegaPml~{idom}}];

  GammaScat~{idom} = Region[{}] ;
  GammaC~{idom} = Region[{((idom+1)*1000+202),((idom+1)*1000+203)}] ;
  GammaInf~{idom} = Region[{}] ;

  GammaC_Pml~{idom}~{0} = Region[{((idom+1)*1000+102),((idom+1)*1000+103)}];
  GammaC_Pml~{idom}~{1} = Region[{((idom+1)*1000+302),((idom+1)*1000+303)}];
  GammaC_Pml~{idom} = Region[{GammaC_Pml~{idom}~{0}, GammaC_Pml~{idom}~{1}}];

  GammaInf_Pml~{idom}~{0} = Region[{((idom+1)*1000+1)}] ;
  GammaInf_Pml~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;
  GammaInf_Pml~{idom} = Region[{GammaInf_Pml~{idom}~{0}, GammaInf_Pml~{idom}~{1}}];

  Sigma~{idom}~{0} = Region[{((idom+1)*1000+10)}];
  Sigma~{idom}~{1} = Region[{((idom+1)*1000+20)}];
  Sigma~{idom} = Region[{Sigma~{idom}~{0},Sigma~{idom}~{1}}];

  EndIf

  If (idom == N_DOM-1)
  Omega~{idom} = Region[{((idom+1)*1000+200)}] ;
  OmegaPml~{idom}~{0} = Region[{((idom+1)*1000+100)}] ;
  OmegaPml~{idom}~{1} = Region[{}] ;
  OmegaPml~{idom} = Region[{OmegaPml~{idom}~{0},OmegaPml~{idom}~{1}}];
  OmegaAll~{idom} = Region[{Omega~{idom},OmegaPml~{idom}}];

  GammaScat~{idom} = Region[{((idom+1)*1000+20)}] ;
  GammaC~{idom} = Region[{((idom+1)*1000+202),((idom+1)*1000+203)}] ;
  GammaInf~{idom} = Region[{}] ;

  GammaC_Pml~{idom}~{0} = Region[{((idom+1)*1000+102),((idom+1)*1000+103)}];
  GammaC_Pml~{idom}~{1} = Region[{}];
  GammaC_Pml~{idom} = Region[{GammaC_Pml~{idom}~{0}, GammaC_Pml~{idom}~{1}}];

  GammaInf_Pml~{idom}~{0} = Region[{((idom+1)*1000+1)}] ;
  GammaInf_Pml~{idom}~{1} = Region[{}] ;
  GammaInf_Pml~{idom} = Region[{GammaInf_Pml~{idom}~{0}, GammaInf_Pml~{idom}~{1}}];

  Sigma~{idom}~{0} = Region[{((idom+1)*1000+10)}];
  Sigma~{idom}~{1} = Region[{}];
  Sigma~{idom} = Region[{Sigma~{idom}~{0},Sigma~{idom}~{1}}];

  EndIf

  EndFor








  // // For idom In {1:nDoms}
  // For idom In {0:N_DOM-1}

  // Gama_Point~{idom} = Region[{}]; // point source (Dirac)

  // If (idom == 0)
  // Omega~{idom} = Region[{((idom+1)*1000+200)}] ;
  // OmegaPml~{idom}~{0} = Region[{}] ;
  // OmegaPml~{idom}~{1} = Region[{((idom+1)*1000+300)}] ;
  // OmegaPml~{idom} = Region[{OmegaPml~{idom}~{0},OmegaPml~{idom}~{1}}];
  // OmegaAll~{idom} = Region[{Omega~{idom},OmegaPml~{idom}}];
  // Gama_N~{idom} = Region[{}] ;
  // // Gama_D~{idom} = Region[{((idom+1)*1000+10)}] ;
  // // Gama_S~{idom} = Region[{((idom+1)*1000+10)}] ; ///////////////////////
  // Gama_S~{idom} = Region[{}] ;
  // Gama_D0~{idom} = Region[{((idom+1)*1000+202),((idom+1)*1000+10)}] ;
  // Gama_D~{idom} = Region[{}] ; ///////////////////////
  // Gama~{idom}~{0} = Region[{((idom+1)*1000+10)}] ;
  // Gama~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;  
  // Gama~{idom} = Region[{Gama~{idom}~{0},Gama~{idom}~{1}}] ;

  // // GamaPml~{idom}~{0} = Region[{}];
  // // GamaPml~{idom}~{1} = Region[{((idom+1)*1000+20)}];
  // // GamaPml~{idom} = Region[{GamaPml~{idom}~{0},GamaPml~{idom}~{1}}];

  // GamaDelta~{idom}~{0} = Region[{}] ;
  // GamaDelta~{idom}~{1} = Region[{((idom+1)*1000+27)}] ;

  // GamaPml_S~{idom}~{0} = Region[{}] ;
  // GamaPml_S~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;
  // GamaPml_N~{idom}~{0} = Region[{}] ;
  // GamaPml_N~{idom}~{1} = Region[{}] ;
  // GamaPml_D0~{idom}~{0} = Region[{}] ;
  // GamaPml_D0~{idom}~{1} = Region[{((idom+1)*1000+302)}] ;

  // Sigma~{idom}~{0} = Region[{}];
  // // Sigma~{idom}~{0} = Region[{((idom+1)*1000+10)}];
  // Sigma~{idom}~{1} = Region[{((idom+1)*1000+20)}];
  // Sigma~{idom} = Region[{Sigma~{idom}~{0},Sigma~{idom}~{1}}];

  // // GamaPmlAll~{idom}~{0} = Region[{Sigma~{idom}~{0},GamaPml_S~{idom}~{0},GamaPml_N~{idom}~{0},GamaPml_D0~{idom}~{0}}];
  // // GamaPmlAll~{idom}~{1} = Region[{Sigma~{idom}~{1},GamaPml_S~{idom}~{1},GamaPml_N~{idom}~{1},GamaPml_D0~{idom}~{1}}];

  // // GamaAll~{idom} = Region[{Gama~{idom},GamaPml~{idom}~{0},GamaPml~{idom}~{1}}];
  // EndIf
  // If (idom > 0 && idom < N_DOM-1)
  // Omega~{idom} = Region[{((idom+1)*1000+200)}] ;
  // OmegaPml~{idom}~{0} = Region[{((idom+1)*1000+100)}] ;
  // OmegaPml~{idom}~{1} = Region[{((idom+1)*1000+300)}] ;
  // OmegaPml~{idom} = Region[{OmegaPml~{idom}~{0},OmegaPml~{idom}~{1}}];
  // OmegaAll~{idom} = Region[{Omega~{idom},OmegaPml~{idom}}];
  // Gama_N~{idom} = Region[{}] ;
  // Gama_D~{idom} = Region[{}] ;
  // Gama_D0~{idom} = Region[{((idom+1)*1000+202)}] ;
  // // Gama_S~{idom} = Region[{((idom+1)*1000+1),((idom+1)*1000+4)}] ;
  // Gama_S~{idom} = Region[{}] ;
  // Gama~{idom}~{0} = Region[{((idom+1)*1000+1)}] ;
  // Gama~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;  
  // Gama~{idom} = Region[{Gama~{idom}~{0},Gama~{idom}~{1}}] ;

  // // GamaPml~{idom}~{0} = Region[{((idom+1)*1000+10)}];
  // // GamaPml~{idom}~{1} = Region[{((idom+1)*1000+20)}];
  // // GamaPml~{idom} = Region[{GamaPml~{idom}~{0},GamaPml~{idom}~{1}}];

  // GamaDelta~{idom}~{0} = Region[{((idom+1)*1000+17)}] ;
  // GamaDelta~{idom}~{1} = Region[{((idom+1)*1000+27)}] ;

  // GamaPml_S~{idom}~{0} = Region[{((idom+1)*1000+1)}] ;
  // GamaPml_S~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;
  // GamaPml_N~{idom}~{0} = Region[{}] ;
  // GamaPml_N~{idom}~{1} = Region[{}] ;
  // GamaPml_D0~{idom}~{0} = Region[{((idom+1)*1000+102)}] ;
  // GamaPml_D0~{idom}~{1} = Region[{((idom+1)*1000+302)}] ;

  // Sigma~{idom}~{0} = Region[{((idom+1)*1000+10)}];
  // Sigma~{idom}~{1} = Region[{((idom+1)*1000+20)}];
  // Sigma~{idom} = Region[{Sigma~{idom}~{0},Sigma~{idom}~{1}}];

  // // GamaPmlAll~{idom}~{0} = Region[{Sigma~{idom}~{0},GamaPml_S~{idom}~{0},GamaPml_N~{idom}~{0},GamaPml_D0~{idom}~{0}}];
  // // GamaPmlAll~{idom}~{1} = Region[{Sigma~{idom}~{1},GamaPml_S~{idom}~{1},GamaPml_N~{idom}~{1},GamaPml_D0~{idom}~{1}}];

  // // GamaAll~{idom} = Region[{Gama~{idom},GamaPml~{idom}~{0},GamaPml~{idom}~{1}}];
  // EndIf
  // If (idom == N_DOM-1)
  // Omega~{idom} = Region[{((idom+1)*1000+200)}] ;
  // OmegaPml~{idom}~{0} = Region[{((idom+1)*1000+100)}] ;
  // OmegaPml~{idom}~{1} = Region[{}] ;
  // // Omega~{idom} = Region[{((idom+1)*1000+200)}] ;  // PML at open end
  // // OmegaPml~{idom}~{0} = Region[{((idom+1)*1000+100)}] ;  // PML at open end
  // // OmegaPml~{idom}~{1} = Region[{((idom+1)*1000+300)}] ;  // PML at open end
  // OmegaPml~{idom} = Region[{OmegaPml~{idom}~{0},OmegaPml~{idom}~{1}}];
  // OmegaAll~{idom} = Region[{Omega~{idom},OmegaPml~{idom}}];
  // Gama_N~{idom} = Region[{}] ;
  // // Gama_D~{idom} = Region[{}] ;
  // Gama_S~{idom} = Region[{}] ; ///////////////////////
  // Gama_D0~{idom} = Region[{((idom+1)*1000+202)}] ;
  // // Gama_S~{idom} = Region[{((idom+1)*1000+1),((idom+1)*1000+4)}] ;
  // // Gama_S~{idom} = Region[{((idom+1)*1000+20)}] ;
  // Gama_D~{idom} = Region[{((idom+1)*1000+20)}] ; ///////////////////////
  // // Gama_S~{idom} = Region[{}] ;  // PML at open end
  // Gama~{idom}~{0} = Region[{((idom+1)*1000+1)}] ;
  // Gama~{idom}~{1} = Region[{((idom+1)*1000+20)}] ;  
  // // Gama~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;  // PML at open end
  // Gama~{idom} = Region[{Gama~{idom}~{0},Gama~{idom}~{1}}] ;

  // // GamaPml~{idom}~{0} = Region[{((idom+1)*1000+10)}];
  // // GamaPml~{idom}~{1} = Region[{}];
  // // GamaPml~{idom} = Region[{GamaPml~{idom}~{0},GamaPml~{idom}~{1}}];

  // GamaDelta~{idom}~{0} = Region[{((idom+1)*1000+17)}] ;
  // GamaDelta~{idom}~{1} = Region[{}] ;

  // GamaPml_S~{idom}~{0} = Region[{((idom+1)*1000+1)}] ;
  // GamaPml_S~{idom}~{1} = Region[{}] ;
  // // GamaPml_S~{idom}~{1} = Region[{((idom+1)*1000+4)}] ;  // PML at open end
  // GamaPml_N~{idom}~{0} = Region[{}] ;
  // GamaPml_N~{idom}~{1} = Region[{}] ;
  // GamaPml_D0~{idom}~{0} = Region[{((idom+1)*1000+102)}] ;
  // GamaPml_D0~{idom}~{1} = Region[{}] ;
  // // GamaPml_D0~{idom}~{1} = Region[{((idom+1)*1000+302)}] ;  // PML at open end

  // Sigma~{idom}~{0} = Region[{((idom+1)*1000+10)}];
  // Sigma~{idom}~{1} = Region[{}];
  // Sigma~{idom} = Region[{Sigma~{idom}~{0},Sigma~{idom}~{1}}];

  // // GamaPmlAll~{idom}~{0} = Region[{Sigma~{idom}~{0},GamaPml_S~{idom}~{0},GamaPml_N~{idom}~{0},GamaPml_D0~{idom}~{0}}];
  // // GamaPmlAll~{idom}~{1} = Region[{Sigma~{idom}~{1},GamaPml_S~{idom}~{1},GamaPml_N~{idom}~{1},GamaPml_D0~{idom}~{1}}];

  // // GamaAll~{idom} = Region[{Gama~{idom},GamaPml~{idom}~{0},GamaPml~{idom}~{1}}];
  // EndIf

  // EndFor

}
