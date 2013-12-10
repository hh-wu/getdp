PosRef="e_lag_vol.pos";
PosCheck="e_DDM_vol.pos";

Group{
  Sigma = Region[ {} ]; 
  Omega = Region[{6}];
  GammaD = Region[(1)];
  GammaInf = Region[(2)];
  BndGammaInf = Region[{}];

  GammaScat = Region[{GammaD}];

  // Where the Global error is evaluated
  Where = Region[{ Omega }];
}

//Include "../main/Error.pro";
Include "Error.pro";
