// Optimization problem specification

// postpro views tag
TORQUE_VAR_FIELD = 20;
VELOCITY_FIELD = 7;
STATE_FIELD = 8;
ADJOINT_FIELD = 9;
DES_VAR_FIELD = 21;

DefineConstant[
  pInOpt = "Input/OptParam/",

  // Optimization 
  Flag_opt = {1,
    Name StrCat[pInOpt,"Optimization"],Choices {0,1}, Visible 1},

  Flag_optType = {"shape", 
    Choices {
      "shape",
      "topology"
    }, Name StrCat[pInOpt,"Optimization Type"], Visible (Flag_opt==1)},

  Flag_SysType = {"LinearElast2D",
    Choices{
      "MagnetoStatic",
      "LinearElast2D"
    }, Name StrCat[pInOpt, "System Type"], Visible (Flag_opt == 1) },

  // Design variables -> FIXME: write in py toolkit!
  hole_length = {dx/2, 
    Name StrCat[pInOpt,"x_0"], Label "Hole Length", 
    Visible ( !StrCmp(Flag_optType, "shape"))},
  hole_width = {dy/3, 
    Name StrCat[pInOpt,"x_1"], Label "Hole width", 
    Visible ( !StrCmp(Flag_optType, "shape"))},
  
  // Velocity field (Mesh perturbation)
  PerturbMesh = {0, Choices{0,1},
    Name "Sensitivity/Compute perturbation velocity field", Visible (Flag_opt == 1)},
  Perturbation = {1e-6,
    Name "Sensitivity/Perturbation value", Visible (Flag_opt == 1)},
  SensitivityParameter = { StrCat[pInOpt, "x_0"],
    Choices{
      StrCat[pInOpt, "x_0"],
      StrCat[pInOpt, "x_1"]
    },Name "Sensitivity/Parameter to perturb", Visible (Flag_opt == 1) },

  // sensitivity analysis 
  Flag_PerfType = {"None", 
    Choices {
      "None",  
      "Compliance",
      "vonMises"
    },Name StrCat[pInOpt,"Performance function"], Visible (Flag_opt==1)},
  
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
    Name StrCat[pInOpt,"Simp Degree"], Visible (Flag_opt==1)}

] ;


