Include "params.pro" ;
Problemm = Str[Problem] ;
Dir= Str["./"];
MshName=StrCat[Dir,Problemm];

Group{
//FULL
  Sigma = Region[ {} ];

  Omega = Region[ 17 ];
  GammaD = Region[ {16}  ];
  GammaInf = Region[ {13}];

  BndGammaInf = Region[{}];
  BndSigma = Region[{}];


//DDM
  For idom In {0:N_DOM-1}
    Omega~{idom} = Region[{17}];
    GammaD~{idom} = Region[{16}];

    GammaN~{idom} = Region[{}];
    BndGammaInf~{idom} = Region[{}];
    BndSigma~{idom}~{0} = Region[{}];
    BndSigma~{idom}~{1} = Region[{}];

    If(idom == 0)
      Sigma~{idom}~{0} = Region[{}];
      Sigma~{idom}~{1} = Region[{141}];
      GammaInf~{idom} = Region[{13}];
   EndIf
    If(idom == N_DOM-1)
      Sigma~{idom}~{0} = Region[{140}];
      Sigma~{idom}~{1} = Region[{}];
      GammaInf~{idom} = Region[{13}];
    EndIf
    If(idom > 0  && idom < N_DOM-1)
      Sigma~{idom}~{0} = Region[{140}];
      Sigma~{idom}~{1} = Region[{141}];
      GammaInf~{idom} = Region[{13}];
    EndIf
    Sigma~{idom} = Region[{Sigma~{idom}~{0},Sigma~{idom}~{1}}];
    BndSigma~{idom} = Region[{BndSigma~{idom}~{0},BndSigma~{idom}~{1}}];
  EndFor

}
