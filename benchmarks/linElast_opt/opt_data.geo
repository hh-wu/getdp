// Optimization problem specification

// postpro views tag
TORQUE_VAR_FIELD = 20;
VELOCITY_FIELD = 7;
STATE_FIELD = 8;
ADJOINT_FIELD = 9;
DES_VAR_FIELD = 21;

DefineConstant[
  pInOpt = "Input/Optimization/",

  // Optimization 
  Flag_optType = {"none", 
    Choices {
      "shape",
      "topology"
    }, Name "Input/Optimization Type", Visible 1},
  
  // Velocity field (Mesh perturbation)
  SensitivityParameter = { "Input/Constructive parameters/Hole Length",
    Choices{
      "Input/Constructive parameters/Hole Length",
      "Input/Constructive parameters/Hole Width"
    },
    Name StrCat(pInOpt,"Parameter to perturb"), 
    Visible (!StrCmp(Flag_optType,"shape")) },

  // sensitivity analysis 
  Flag_PerfType = {"None", 
    Choices {
      "Compliance",
      "vonMises"
    },
    Name StrCat[pInOpt,"Performance function"], 
    Visible (StrCmp(Flag_optType,"none"))},
  
  // Material law interpolation 
  Flag_InterpLaw = {"simp", 
    Choices {
      "simp",
      "ramp",
      "h-s",
      "polynomial"},	
    Name StrCat[pInOpt,"Material Interpo. Law"],
    Visible (!StrCmp(Flag_optType,"topology"))},

  degree_SIMP = {3.0, 
    Name StrCat[pInOpt,"Simp Degree"], 
    Visible (!StrCmp(Flag_optType,"topology"))}

] ;


