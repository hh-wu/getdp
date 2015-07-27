// Optimization problem specification

// performance function type
NO_PERF = 0;
BFIELD_ERROR = 1;
TORQUE_VAR = 2;
IRON_LOSSES = 3;
COMPLIANCE = 4;
VOLUME = 5;
TORQUE = 6;

// postpro views tag
TORQUE_VAR_FIELD = 20;
VELOCITY_FIELD = 7;
STATE_FIELD = 8;
ADJOINT_FIELD = 9;
DES_VAR_FIELD = 21;

MAGSTADYN = 0;
ELAST2D = 1;

DefineConstant[
  pInOpt = "Input/OptParam/",

  // Optimization 
  Flag_opt = {1,
    Name StrCat[pInOpt,"opt"], Label "Optimization",
    Choices {0,1}, Visible 1},

  Flag_topopt = {1, 
    Name StrCat[pInOpt,"optType"],Label "TopOpt?",
    Choices {0,1}, Visible (Flag_opt == 1)},

  Flag_SysType = {ELAST2D,
    Choices{
      MAGSTADYN = "magnetostatic",
      ELAST2D = "lin. elast."
    },Name StrCat[pInOpt, "systemType"], Label "system type",Visible (Flag_opt == 1) },

  // Design variables -> FIXME: write in py toolkit!
  hole_length = {dx/2, 
    Name StrCat[pInOpt,"x_0"], Label "Hole Length", Visible (!Flag_topopt)},
  hole_width = {dy/3, 
    Name StrCat[pInOpt,"x_1"], Label "Hole width", Visible (!Flag_topopt)},
  
  regionVar = {0, Name "Input/OptParam/regionVar",
                  Label "Region of design variables", 
                  Choices {0="Rotor Fe",1="Stator Fe",2="Rotor/Stator Fe"},
                  Visible (Flag_topopt)},

  // Velocity field (Mesh perturbation)
  PerturbMesh = {0, Choices{0,1},
    Name "Sensitivity/Compute perturbation velocity field", Visible (Flag_opt == 1)},
  Perturbation = {1e-6,
    Name "Sensitivity/Perturbation value", Visible (Flag_opt == 1)},
  SensitivityParameter = { StrCat[pInOpt, "x_0"],
    Choices{
      StrCat[pInOpt, "x_0"],
      StrCat[pInOpt, "x_1"],
      StrCat[pInOpt, "x_2"],
      StrCat[pInOpt, "x_3"],
      StrCat[pInOpt, "x_4"],
      StrCat[pInOpt, "x_5"],
      StrCat[pInOpt, "x_6"]
    },
    Name "Sensitivity/Parameter to perturb", Visible (Flag_opt == 1) }

  // sensitivity analysis 
  Flag_PerfType = {4, 
    Choices {
      0="No performance function",  
      1="air gap B field error",
      2="torque variance",
      3="losses",
      4="compliance",
      5="torque"
    },
   Name "Input/OptParam/PerfType",Label "performance function type", Visible 1},

  // Material law interpolation 
  Flag_InterpLaw = {0, 
    Choices {
      0 = "SIMP",
      1="RAMP",
      2="H-S",
      3="Polynomial"},	
    Name StrCat[pInOpt,"MaterialInterpLaw"],Label "material interpolation law",
    Visible (Flag_topopt==1)},

  degree_SIMP = {3.0, 
    Name StrCat[pInOpt,"SimpPenalDegree"],Label "Degree SIMP", Visible (Flag_topopt)}

] ;


