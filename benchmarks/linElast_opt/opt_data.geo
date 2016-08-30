// Optimization problem specification

// postpro views tag
TORQUE_VAR_FIELD = 20;
STATE_FIELD = 8;
ADJOINT_FIELD = 9;
DIRECT_FIELD = 10;
DES_VAR_FIELD = 21;
VELOCITY_FIELD = 99;
SOURCE_FILT_FIELD = 199;

DefineConstant[
  pInOpt = "Optimization/",

  // Optimization 
  Flag_optType = {"shape", 
    Choices {
      "shape",
      "topology"
    }, Name "Input/Optimization Type", Visible 1},

  SensitivityMethod = {"adjoint", 
    Choices {
      "direct",
      "adjoint",
      "self-adjoint",
      "none"
    }, Name StrCat[pInOpt,"Sensitivity method"], Visible 1},
  
  // Velocity field (Mesh perturbation)
  Flag_projFuncSpace_xe = {0,Choices {0,1}, 
    Name StrCat[pInOpt,"project density in func. space"], Visible 1},
  Flag_projFuncSpace_v = {1, Choices {0,1},
    Name StrCat[pInOpt,"project velocity in func. space"], Visible 0},
  Flag_NeumanVel = {0, Choices{0,1},
    Name StrCat[pInOpt,"Filter Velocity"], Visible 0},

  Flag_FilterMethod = {"none",
    Choices{
      "sensitivity",
      "density"
    },
    Name StrCat[pInOpt, "Filter"],
    Visible (!StrCmp(Flag_optType,"topology"))},

  Rmin = {0.001,
    Name StrCat[pInOpt,"Radius"],
    Visible (!StrCmp(Flag_FilterMethod,"sensitivity")
             || !StrCmp(Flag_FilterMethod,"density"))},

  SensitivityParameter = { StrCat(pp,"R02"),
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
      "VonMises",
      "VonMises_Pnorm",
      "VonMisesElem",
      "Volume"
    },
    Name StrCat[pInOpt,"Performance function"], 
    Visible (StrCmp(Flag_optType,"none"))},

/*  PerfsList = {"compliance", */
/*    Name StrCat[pInOpt,"Performances"], */
/*    Visible (StrCmp(Flag_optType,"none"))},*/

//  numPerfFunctions = {2,
//    Name "Number of performance functions"},
  
  degVM = {2.0, 
    Name StrCat[pInOpt,"degVM"], 
    Visible (StrCmp(Flag_PerfType,"vonMises"))},

  optimIter = {1, 
    Name StrCat[pInOpt,"optimIter"], 
    Visible 0/*(StrCmp(Flag_optType,"shape") || StrCmp(Flag_optType,"topology"))*/},
  
  
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


