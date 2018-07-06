// This script allows to interactively setup 2D and 3D elastic models:
//
// 1) Create a geometry with Gmsh, or load an existing geometry (".geo" file)
//    in Gmsh with `File->Open'
// 2) Merge this file ("Interactive_Elasticity.pro") with `File->Merge'
// 3) You will be prompted to setup your materials, sources and boundary
//    conditions for each physical group, interactively
// 4) Press "Run" to solve the model
//
// How does it work?
//
// This file interactively proposes choices for all the constants, functions,
// groups and constraints needed by the "Lib_Elasticity_u.pro" template. In
// addition, everytime "Run" is pressed a ".pro" file is created (with the same
// prefix as the geometry file) with all the choices made interactively, for
// later non- interactive use.

DefineConstant[
  formulationType = {0, Choices{0="Displacement"},
    Help Str[
      "Elastic model definitions",
      "u: displacement field [m]",
      "σ: stress [N/m²]",
      "ε: strain [-]",
      "E: Young's modulus [N/m²]",
      "ν: Poisson's ratio [-]",
      "ρ: mass density [kg/m³]",
      "f: force per unit volume [N/m³]"],
    Name "Model/01Formulation"},
  modelDim = GetNumber["Gmsh/Model dimension"],
  modelPath = GetString["Gmsh/Model absolute path"],
  modelName = GetString["Gmsh/Model name"],
  export = !StrCmp[OnelabAction, "compute"],
  exportFile = StrCat[modelPath, StrPrefix[StrRelative[modelName]], ".pro"],
  R_ = {"Elasticity_u", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -bin", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"Elasticity_u", Name "GetDP/2PostOperationChoices", Visible 0}
];

numPhysicals = GetNumber["Gmsh/Number of physical groups"];
surPath = "Model/Boundary conditions/Physical group: ";
volPath = "Model/Materials and sources/Physical group: ";

If(export && FileExists[exportFile])
  RenameFile[exportFile, StrCat[exportFile, "_", Date["%F-%R"]]];
EndIf

// interactive definition of groups
Group {
  If(export)
    Printf('Group{') > Str[exportFile];
  EndIf
  For i In {1:numPhysicals}
    dim~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Dimension", i]];
    name~{i} = GetString[Sprintf["Gmsh/Physical group %g/Name", i]];
    tag~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Number", i]];
    reg = Sprintf["Region[%g]; ", tag~{i}];
    str = "";
    If(dim~{i} < modelDim)
      DefineConstant[
        bcx~{i} = {0, Choices{
            0="Neumann: σ . n (traction)",
            1="Dirichlet: u (displacement)"
          },
          Name StrCat[surPath, name~{i}, "/0X-component"]}
        bcy~{i} = {0, Choices{
            0="Neumann: σ . n (traction)",
            1="Dirichlet: u (displacement)"
          },
          Name StrCat[surPath, name~{i}, "/2Y-component"]}
        bcz~{i} = {0, Visible (modelDim == 3), Choices{
            0="Neumann: σ . n (traction)",
            1="Dirichlet: u (displacement)"
          },
          Name StrCat[surPath, name~{i}, "/4Z-component"]}
      ];
      If(bcx~{i} == 0 || bcy~{i} == 0 || (modelDim == 3 && bcz~{i} == 0))
        str = StrCat["Sur_Neu_Mec += ", reg];
      EndIf
    Else
      DefineConstant[
        material~{i} = {0, Choices{
            0="Linear elastic"
          },
          Name StrCat[volPath, name~{i}, "/0Material type"]}
        source~{i} = {0, Visible (material~{i} != 1), Choices{
            0="None",
            1="Force density"
          },
          Name StrCat[volPath, name~{i}, "/3Source type"]}
      ];
      str = StrCat["Vol_Mec += ", reg];
      If(source~{i} == 1)
        str = StrCat[str, "Vol_F_Mec += ", reg];
      EndIf
    EndIf
    Parse[str];
    If(export && StrLen[str])
      Printf(StrCat["  ", str]) >> Str[exportFile];
    EndIf
  EndFor
  If(export)
    Printf('}') >> Str[exportFile];
  EndIf
}

// global definitions
DefineConstant[
  Flag_PlaneStress = {0, Choices{0,1},
    Name "Model/01Plane stress?"},
  Flag_Regime = {0, Choices{
      0="Static",
      1="Time-harmonic",
      2="Time-domain",
      3="Modal analysis"},
    Name "Model/02Regime"},
  Freq = {1, Visible Flag_Regime == 2,
    Name "Model/03Frequency [Hz]"},
  Freq_Target = {1, Visible Flag_Regime == 3,
    Name "Model/03Target frequency [Hz]"},
  Num_Modes = {10, Visible Flag_Regime == 3,
    Name "Model/04Number of modes"},
  Flag_Axi = {0, Choices{0,1}, Visible (modelDim == 2),
    Name "Model/05Axisymmetric model"}
];
If(Flag_Axi && (GetNumber["General.MinX"] < -1e-6 ||
                Fabs[GetNumber["General.MaxZ"]] > 1e-6))
  Error["The revolution axis for axisymmetric models should be X=Z=0"];
EndIf
If(export)
  If(Flag_Axi)
    Printf(Sprintf("Flag_Axi = 1;")) >> Str[exportFile];
  EndIf
  If(Flag_Regime)
    Printf(Sprintf("Flag_Regime = %g;", Flag_Regime)) >> Str[exportFile];
  EndIf
  If(Flag_Regime == 2)
    Printf(Sprintf("Freq = %g;", Freq)) >> Str[exportFile];
  EndIf
  If(Flag_Regime == 3)
    Printf(Sprintf("Freq_Target = %g;", Freq_Target)) >> Str[exportFile];
    Printf(Sprintf("Num_Modes = %g;", Num_Modes)) >> Str[exportFile];
  EndIf
EndIf

// import material library
Include "Lib_Materials.pro";
If(export)
  Printf(StrCat['Include "', CurrentDirectory, 'Lib_Materials.pro";'])
    >> Str[exportFile];
EndIf

// interactive definition of materials and sources
Function {
  If(export)
    Printf('Function {') >> Str[exportFile];
  EndIf
  For i In {1:numPhysicals}
    reg = Sprintf["[Region[%g]]", tag~{i}];
    str = "";
    If(dim~{i} < modelDim)
      DefineConstant[
        bcx_val~{i} = {0.,
          Name StrCat[surPath, name~{i}, "/1Value"]}
        bcy_val~{i} = {0.,
          Name StrCat[surPath, name~{i}, "/3Value"]}
        bcz_val~{i} = {0., Visible (modelDim == 3),
          Name StrCat[surPath, name~{i}, "/5Value"]}
      ];
      If(bcx~{i} == 0 || bcy~{i} == 0 || (modelDim == 3 && bcz~{i} == 0))
        str = StrCat[str, "sigman", reg, Sprintf[" = Vector[%g, %g, %g]; ",
            bcx_val~{i}, bcy_val~{i}, bcz_val~{i}]];
      EndIf
    Else
      DefineConstant[
        f_fct~{i} = {"Vector[0,0,0]",
          Visible (source~{i} == 1),
          Name StrCat[volPath, name~{i}, "/5f function"],
          Label "f [N/m³]", Help "Force density"},
        material_preset~{i} = {#linearElasticMaterials() > 1 ? 1 : 0,
          Visible (material~{i} == 0),
          Choices{ 0:#linearElasticMaterials()-1 = linearElasticMaterials() },
          Name StrCat[volPath, name~{i}, "/1material preset"],
          Label "Material choice"}
        nu_fct~{i} = {"0.32",
          Visible (material~{i} == 0 && material_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/2nu function"],
          Label "ν [-]", Help "Poisson's ratio"}
        E_fct~{i} = {"69e9",
          Visible (material~{i} == 0 && material_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/2E function"],
          Label "E [N/m²]", Help "Poisson's ratio"}
        rho_fct~{i} = {"2700",
          Visible (material~{i} == 0 && Flag_Regime && material_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/2rho function"],
          Label "ρ [kg/m³]", Help "Mass density"}
      ];
      // source
      If(source~{i} == 1) // function
        str = StrCat[str, "f", reg, " = ", f_fct~{i}, "; "];
      EndIf
      // linear material
      If(material~{i} == 0)
        If(material_preset~{i} == 0)
          str = StrCat[str, "nu", reg, " = ", nu_fct~{i}, ";"];
          str = StrCat[str, "E", reg, " = ", E_fct~{i}, ";"];
          str = StrCat[str, "rho", reg, " = ", rho_fct~{i}, ";"];
        Else
          str = StrCat[str, "nu", reg, " = ",
            linearElasticMaterials(material_preset~{i}),
            "_elastic_poisson_ratio;"];
          str = StrCat[str, "E", reg, " = ",
            linearElasticMaterials(material_preset~{i}),
            "_elastic_young_modulus;"];
          str = StrCat[str, "rho", reg, " = ",
            linearElasticMaterials(material_preset~{i}),
            "_mass_density;"];
        EndIf
      EndIf
    EndIf
    Parse[str];
    If(export && StrLen[str])
      Printf(StrCat["  ", str]) >> Str[exportFile];
    EndIf
  EndFor
  If(export)
    Printf('}') >> Str[exportFile];
  EndIf
}

// interactive definition of constraints
constraintNames() = Str[
  "Displacement_x",
  "Displacement_y",
  "Displacement_z"
];
For j In {0:#constraintNames()-1}
  str = StrCat["Constraint { { Name ", constraintNames(j), "; Case { "];
  For i In {1:numPhysicals}
    If(dim~{i} < modelDim)
      If(j == 0 && bcx~{i})
        str = StrCat[str, Sprintf["{ Region Region[%g]; Value %g; } ",
            tag~{i}, bcx_val~{i}]];
      EndIf
      If(j == 1 && bcy~{i})
        str = StrCat[str, Sprintf["{ Region Region[%g]; Value %g; } ",
            tag~{i}, bcy_val~{i}]];
      EndIf
      If(j == 2 && bcz~{i})
        str = StrCat[str, Sprintf["{ Region Region[%g]; Value %g; } ",
            tag~{i}, bcz_val~{i}]];
      EndIf
    EndIf
  EndFor
  str = StrCat[str, "} } }"];
  Parse[str];
  If(export)
    Printf(Str[str]) >> Str[exportFile];
  EndIf
EndFor

// import elasticity template
Include "Lib_Elasticity_u.pro";
If(export)
  Printf(StrCat['Include "', CurrentDirectory, 'Lib_Elasticity_u.pro";'])
    >> Str[exportFile];
EndIf
