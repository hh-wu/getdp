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
  Flag_optType = {"shape", 
    Choices {
      "shape",
      "topology"
    }, 
    Name "Input/Optimization Type", Visible 1},
  
  Flag_SysType = {"MagnetoStatic",
    Name StrCat[pInOpt, "System Type"], Visible 0 },

  // Velocity field (Mesh perturbation)
  SensitivityParameter = { StrCat[pInOpt, "design variable/x_0"],
    Choices{
      StrCat[pInOpt, "design variable/x_0"],
      StrCat[pInOpt, "design variable/x_1"],
      StrCat[pInOpt, "design variable/x_2"],
      StrCat[pInOpt, "design variable/x_3"],
      StrCat[pInOpt, "design variable/x_4"],
      StrCat[pInOpt, "design variable/x_5"],
      StrCat[pInOpt, "design variable/x_6"]
    },    
    Name StrCat(pInOpt,"Parameter to perturb"), 
    Visible (!StrCmp(Flag_optType,"shape")) },

  // Velocity field (Mesh perturbation)
  Flag_projFuncSpace_v = {0, Choices {0,1},
    Name "Input/project velocity in func. space", Visible 1},

  // sensitivity analysis 
  Flag_PerfType = {"none", 
    Choices {
      "BradialErrorInt",
      "TorqueVariance",
      "IronLoss",
      "Compliance",
      "Torque"
    },
    Name StrCat[pInOpt,"Performance function"], 
    Visible (StrCmp(Flag_optType,"none"))},

  Tnom = {90.0, Name "Input/OptParam/TorqueNominal"},

  regionVar = {0, 
    Name "Input/OptParam/regionVar",
    Choices {0="Rotor Fe",1="Stator Fe",2="Rotor/Stator Fe"},
    Visible (!StrCmp(Flag_optType, "topology"))},

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




