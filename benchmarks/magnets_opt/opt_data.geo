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

  Flag_SysType = {"MagnetoStatic3D",
    Choices{
      "MagnetoStatic",
      "MagnetoStatic3D",
      "LinearElast2D"
    }, Name StrCat[pInOpt, "System Type"], Visible (Flag_opt == 1) }
];

// Design variables
For i In {1:NumMagnets}
  DefineConstant[
    L~{i} = {50*mm, 
      Name StrCat[pInOpt,Sprintf("x_%g", (i-1))],
      Label Sprintf("Magnet %g:Length [m]", i),
      Visible ( !StrCmp(Flag_optType, "shape") ), Closed 1 }
  ];
EndFor

DefineConstant[
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
  Flag_PerfType = {"None", 
    Choices {
      "None",  
      "Compliance"
    },
    Name StrCat[pInOpt,"Performance function"], Visible (Flag_opt == 1)},

  Tnom = {90.0, Name "Input/OptParam/TorqueNominal"},

  regionVar = {0, Name "Input/OptParam/regionVar",
                  Label "Region of design variables", 
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
    Name StrCat[pInOpt,"Simp Degree"],Visible (!StrCmp(Flag_optType,"topology"))}

] ;


