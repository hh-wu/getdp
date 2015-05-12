// Parameters common to GetDP and Gmsh

DefineConstant[
  H_sheet = {0.03125, Name "Input/Core parameters/Stack length [m]"},
  nb_sheet = {8, Name "Input/Core parameters/Stack number [integer]"},
  L_sheet = {0.06, Name "Input/Core parameters/Stack width [m]"},
  H_yoke = {L_sheet, Name "Input/Core parameters/Yoke height", ReadOnly 1},
  airgap = {0.00282, Name "Input/Core parameters/Airgap thickness [m]"}
];
