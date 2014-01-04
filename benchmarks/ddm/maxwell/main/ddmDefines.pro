// This file contains most of the variable and function *names*
// required to run the DDM code. These variables or functions should
// be defined or overwritten by the user whenever relevant.

DefineConstant[geo3d = 1, TOL = 1e-4, MAXIT = 300, PRECOND_SWEEP = 0, EXT_TIME = 0];
DefineConstant[ListOfCuts];
DefineConstant[SILVER_MULLER = 0, OSRC = 1, JFLee = 0];
DefineConstant[REUSE = 0];

Group{
  DefineGroup[Omega, Sigma, GammaTang, GammaScat, GammaC, GammaInf, BndSigma, BndGammaInf];
  For idom In {0:N_DOM-1}
    DefineGroup[Omega~{idom}, Sigma~{idom}, GammaTang~{idom}, GammaScat~{idom}, GammaC~{idom}, GammaInf~{idom}, BndSigma~{idom}, BndGammaInf~{idom}];
    For j In {0:1}
    DefineGroup[Sigma~{idom}~{j}, BndSigma~{idom}~{j}, BndGammaInf~{idom}~{j}];
    EndFor
  EndFor
}

Function{
  DefineFunction[k, kInf, kDtN, uInc];
}

ListOfCuts = {0, N_DOM-1}; // By default, ListOfCuts contains only the first and last domains, which is the configuration without cut
ListOfFacto = {};
