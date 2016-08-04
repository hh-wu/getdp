// Optimization problem specification

// postpro views tag
TORQUE_VAR_FIELD = 20;
VELOCITY_FIELD = 7;
STATE_FIELD = 8;
ADJOINT_FIELD = 9;
DES_VAR_FIELD = 21;
SENS_FIELD = 22;
SOURCE_FILT_FIELD = 99;

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
  Flag_PerfType = {"Compliance", 
    Choices {
      "BradialErrorInt",
      "TorqueVariance",
      "IronLoss",
      "Compliance",
      "Torque"
    },Name StrCat[pInOpt,"Performance function"], 
    Visible (StrCmp(Flag_optType,"none"))},

  Tnom = {90.0, Name StrCat[pInOpt,"Desired nominal torque"]},

  // Material law interpolation 
  Flag_InterpLaw = {"simp", 
    Choices {
      "simp",
      "ramp",
      "h-s",
      "polynomial"},	
    Name StrCat[pInOpt,"Material Interpo. Law"],
    Visible (!StrCmp(Flag_optType,"topology"))},

  regionTO = {"Rotor Fe-PM", 
    Name StrCat[pInOpt,"TO domain"],
    Choices {"Rotor Fe","Rotor Fe-PM","Stator Fe","Rotor,Stator Fe"},
    Visible (!StrCmp(Flag_optType, "topology"))},

  Flag_FilterMethod = {"none",
    Choices{
      "sensitivity",
      "density"
    },Name StrCat[pInOpt, "Filter"],
    Visible (!StrCmp(Flag_optType,"topology"))},

  Rmin = {0.001,
    Name StrCat[pInOpt,"Radius"],
    Visible (!StrCmp(Flag_FilterMethod,"sensitivity") 
             || !StrCmp(Flag_FilterMethod,"density"))},

  degree_SIMP = {2.0, 
    Name StrCat[pInOpt,"Simp Degree"],
    Visible (!StrCmp(Flag_optType,"topology"))}

] ;




