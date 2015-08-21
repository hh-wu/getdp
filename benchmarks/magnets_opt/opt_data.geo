// Optimization problem specification

// postpro views tag
TORQUE_VAR_FIELD = 20;
VELOCITY_FIELD = 7;
STATE_FIELD = 8;
ADJOINT_FIELD = 9;
DES_VAR_FIELD = 21;

DefineConstant[
  pInOpt = "Input/Optimization/",

  Flag_optType = {"shape", 
    Choices {
      "shape",
      "topology"
    }, Name StrCat(pInOpt,"Optimization Type"), Visible 1},

  // Velocity field (Mesh perturbation)
  SensitivityParameter = { "Parameters/Magnet 1/1Length [m]",
    Name StrCat(pInOpt,"Parameter to perturb"), 
    Visible (!StrCmp(Flag_optType,"shape")) },

  // sensitivity analysis 
  Flag_PerfType = {"Compliance", 
    Name StrCat(pInOpt,"Performance function"), 
    Visible (StrCmp(Flag_optType,"none"))}
] ;


