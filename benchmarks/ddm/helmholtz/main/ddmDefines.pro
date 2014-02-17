// This file contains most of the variable and function *names*
// required to run the DDM code. These variables or functions should
// be defined or overwritten by the user whenever relevant.

DefineConstant[geo3d = 1, TOL = 1e-4, MAXIT = 300, PRECOND_SWEEP = 0, EXT_TIME = 0, COMBINED_SWEEP = 0];
DefineConstant[ListOfCuts];

Group{
  DefineGroup[Omega, Sigma, GammaN, GammaD, GammaD0, GammaInf, BndSigma, BndGammaInf];
  For idom In {0:N_DOM-1}
    DefineGroup[Omega~{idom}, Sigma~{idom}, GammaN~{idom}, GammaD~{idom}, GammaD0~{idom}, GammaInf~{idom}, BndSigma~{idom}, BndGammaInf~{idom}];
    For j In {0:1}
      DefineGroup[Sigma~{idom}~{j}, BndSigma~{idom}~{j}];
    EndFor
  EndFor
}

Function{
  DefineFunction[k, kInf, kDtn, eInc];
  DefineFunction[alphaBT, betaBT]; // Bayliss-Turkel ABC
}

DefineConstant[REUSE = 0];
DefineConstant[ListOfFacto];
ListOfFacto = {0:N_DOM-1};

