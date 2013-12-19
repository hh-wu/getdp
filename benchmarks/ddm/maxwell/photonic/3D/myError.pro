PosRef="e_lag_vol.pos";
PosCheck="e_DDM_merged.pos";

Include "groups.pro":

Group{
  // Where the Global error is evaluated
  Where = Region[{ Omega }];
}

//Include "../main/Error.pro";
Include "Error.pro";
