// This script allows to choose which physical model to setup interactively:
//
// 1) Create a geometry with Gmsh, or load an existing geometry (".geo" file)
//    in Gmsh with `File->Open'
// 2) Merge this file ("Interactive.pro") with `File->Merge'
// 3) You will be prompted to setup your materials, sources and boundary
//    conditions for each physical group, interactively
// 4) Press "Run" to solve the model
//
// Everytime "Run" is pressed a ".pro" file is created (with the same prefix as
// the geometry file) with all the choices made interactively, for later non-
// interactive use.

DefineConstant[
  physics = {0, Choices{
      0="-",
      1="Electrostatics",
      2="Magnetostatics",
      3="Elasticity"
    },
    Name "Model/00Physical model", ServerAction "Reset"}
  _C = {0, Name "GetDP/}ModelCheck", Closed 1}
];

If(physics == 1)
  Include "Interactive_Electrostatics.pro";
ElseIf(physics == 2)
  Include "Interactive_Magnetostatics.pro";
ElseIf(physics == 3)
  Include "Interactive_Elasticity.pro";
EndIf
