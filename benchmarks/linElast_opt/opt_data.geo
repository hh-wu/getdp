// Optimization problem specification

// postpro views tag
TORQUE_VAR_FIELD = 20;
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
    }, Name "Input/Optimization Type", Visible 1},
  
  SysName = {"u_Mec",
    Choices{
      "noSystem",
      "adjoint",
      "direct"
    }, Name StrCat[pInOpt, "Derivative Method"]},

  Flag_SensitivityMethod = {"adjoint",
    Choices{
      "noSystem",
      "adjoint",
      "direct"
    }, Name StrCat[pInOpt, "Derivative Method"]},

  // Velocity field (Mesh perturbation)
  Flag_projFuncSpace_xe = {0,Choices {0,1}, 
    Name "Input/project density in func. space", Visible 1},
  Flag_projFuncSpace_v = {0, Choices {0,1},
    Name "Input/project velocity in func. space", Visible 1},
  Flag_NeumanVel = {0, Choices{0,1},
    Name "Input/Filter Velocity", Visible 1},

  SensitivityParameter = { StrCat(pp,"Hole Length"),
    Choices{
      StrCat(pp,"Hole Length"),
      StrCat(pp,"Magnet length")
    },
    Name StrCat(pInOpt,"Parameter to perturb"), 
    Visible (!StrCmp(Flag_optType,"shape")) },

  // sensitivity analysis 
  Flag_PerfType = {"Compliance", 
    Choices {
      "Compliance",
      "vonMises",
      "vonMises_Pnorm",
      "vonMisesElem"
    },
    Name StrCat[pInOpt,"Performance function"], 
    Visible (StrCmp(Flag_optType,"none"))},

  PerfsList = {"compliance", 
    Name StrCat[pInOpt,"Performances"], 
    Visible (StrCmp(Flag_optType,"none"))},

//  numPerfFunctions = {2,
//    Name "Number of performance functions"},
  
  degVM = {2.0, 
    Name StrCat[pInOpt,"degVM"], 
    Visible (StrCmp(Flag_PerfType,"vonMises"))},

  optimIter = {1, 
    Name StrCat[pInOpt,"optimIter"], 
    Visible (StrCmp(Flag_optType,"shape") || StrCmp(Flag_optType,"topology"))},
  
  
  // Material law interpolation 
  Flag_InterpLaw = {"simp", 
    Choices {
      "simp",
      "ramp",
      "h-s",
      "polynomial"},	
    Name StrCat[pInOpt,"Material Law"],
    Visible (!StrCmp(Flag_optType,"topology"))},

  degree_SIMP = {3.0, 
    Name StrCat[pInOpt,"Simp Degree"], 
    Visible (!StrCmp(Flag_optType,"topology"))},
  degStress = {0.5, 
    Name StrCat[pInOpt,"Stress Degree"], 
    Visible (!StrCmp(Flag_optType,"topology"))},
  elemNum = {18, 
    Name StrCat[pInOpt,"Element Number"], 
    Visible (!StrCmp(Flag_optType,"topology"))}

] ;


