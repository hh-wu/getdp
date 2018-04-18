// This script allows to interactively setup 2D and 3D electrostatic models:
//
// 1) Create a geometry with Gmsh, or load an existing geometry (".geo" file)
//    in Gmsh with `File->Open'
// 2) Merge this file ("Interactive_Electrostatics.pro") with `File->Merge'
// 3) You will be prompted to setup your materials, sources and boundary
//    conditions for each physical group, interactively
// 4) Press "Run" to solve the model
//
// How does it work?
//
// This file interactively proposes choices for all the constants, functions,
// groups and constraints needed by the "Lib_Electrostatics_v.pro" template. In
// addition, everytime "Run" is pressed a ".pro" file is created (with the same
// prefix as the geometry file) with all the choices made interactively, for
// later non- interactive use.

DefineConstant[
  formulationType = {0, Choices{0="Scalar potential"},
    Help Str[
      "Electrostatic model definitions",
      "e: electric field [V/m]",
      "d: electric displacement field [C/m²]",
      "v: scalar electric potential (e = -grad v) [V]",
      "εr: relative dielectric permittivity [-]",
      "ρ: free charge density [C/m³]",
      "q: free charge [C]"],
    Name "Model/01Formulation"},
  modelDim = GetNumber["Gmsh/Model dimension"],
  modelPath = GetString["Gmsh/Model absolute path"],
  modelName = GetString["Gmsh/Model name"],
  export = !StrCmp[OnelabAction, "compute"],
  exportFile = StrCat[modelPath, StrPrefix[StrRelative[modelName]], ".pro"],
  R_ = {"Electrostatics_v", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -bin", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"Electrostatics_v", Name "GetDP/2PostOperationChoices", Visible 0}
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
  DefineGroup[ Vol_Inf_Ele ];
  For i In {1:numPhysicals}
    dim~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Dimension", i]];
    name~{i} = GetString[Sprintf["Gmsh/Physical group %g/Name", i]];
    tag~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Number", i]];
    reg = Sprintf["Region[%g]; ", tag~{i}];
    str = "";
    If(dim~{i} < modelDim)
      DefineConstant[
        bc~{i} = {0, Choices{
            0="Neumann: n . d (normal electric displacement)",
            1="Dirichlet: v (scalar electric potential)",
            2="Floating conductor: q (free charge)",
            3="Floating conductor: v (scalar electric potential)"
          },
          Name StrCat[surPath, name~{i}, "/0Type"]}
      ];
      If(bc~{i} == 0)
        str = StrCat["Sur_Neu_Ele += ", reg];
      ElseIf(bc~{i} == 2 || bc~{i} == 3)
        str = StrCat["Sur_C_Ele += ", reg];
      EndIf
    Else
      DefineConstant[
        material~{i} = {0, Choices{
            0="Linear dielectric",
            1="Infinite air shell"
          },
          Name StrCat[volPath, name~{i}, "/0Material type"]}
        source~{i} = {0, Visible (material~{i} != 1), Choices{
            0="None",
            1="Free charge density"
          },
          Name StrCat[volPath, name~{i}, "/3Source type"]}
      ];
      str = StrCat["Vol_Ele += ", reg];
      If(material~{i} == 1)
        str = StrCat[str, "Vol_Inf_Ele += ", reg];
      EndIf
      If(source~{i} == 1)
        str = StrCat[str, "Vol_Q_Ele += ", reg];
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
  Val_Rint = {1, Visible NbrRegions[Vol_Inf_Ele],
    Name "Model/Geometry/1Internal shell radius"},
  Val_Rext = {2, Visible NbrRegions[Vol_Inf_Ele],
    Name "Model/Geometry/2External shell radius"}
  Flag_Axi = {0, Choices{0,1}, Visible (modelDim == 2),
    Name "Model/02Axisymmetric model"}
];
If(Flag_Axi && (GetNumber["General.MinX"] < -1e-6 ||
                Fabs[GetNumber["General.MaxZ"]] > 1e-6))
  Error["The revolution axis for axisymmetric models should be X=Z=0"];
EndIf
If(export)
  If(NbrRegions[Vol_Inf_Ele])
    Printf(Sprintf("Val_Rint = %g;", Val_Rint)) >> Str[exportFile];
    Printf(Sprintf("Val_Rext = %g;", Val_Rext)) >> Str[exportFile];
  EndIf
  If(Flag_Axi)
    Printf(Sprintf("Flag_Axi = 1;")) >> Str[exportFile];
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
        bc_val~{i} = {0.,
          Name StrCat[surPath, name~{i}, "/1Value"]}
      ];
      If(bc~{i} == 0)
        str = StrCat[str, "dn", reg, Sprintf[" = %g; ", bc_val~{i}]];
      EndIf
    Else
      DefineConstant[
        rho_fct~{i} = {"1",
          Visible (source~{i} == 1),
          Name StrCat[volPath, name~{i}, "/5rho function"],
          Label "ρ [C/m³]", Help "Charge density"},
        material_preset~{i} = {#linearDielectricMaterials() > 1 ? 1 : 0,
          Visible (material~{i} == 0),
          Choices{ 0:#linearDielectricMaterials()-1 = linearDielectricMaterials() },
          Name StrCat[volPath, name~{i}, "/1epsr preset"],
          Label "Material choice"}
        epsr_fct~{i} = {"1",
          Visible (material~{i} == 0 && material_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/2epsr function"],
          Label "εr [-]", Help "Relative dielectric permittivity"}
      ];
      // source
      If(source~{i} == 1)
        str = StrCat[str, "rho", reg, " = ", rho_fct~{i}, "; "];
      EndIf
      // linear material
      If(material~{i} == 0)
        If(material_preset~{i} == 0)
          str = StrCat[str, "epsr", reg, " = ", epsr_fct~{i}, ";"];
        Else
          str = StrCat[str, "epsr", reg, " = ",
            linearDielectricMaterials(material_preset~{i}),
            "_relative_dielectric_permittivity;"];
        EndIf
      // infinite shell
      ElseIf(material~{i} == 1)
        str = StrCat[str, "epsr", reg, " = 1;"];
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
  "ElectricScalarPotential",
  "GlobalElectricPotential",
  "GlobalElectricCharge"
];
constraintNum() = {1, 3, 2};
For j In {0:#constraintNames()-1}
  str = StrCat["Constraint { { Name ", constraintNames(j), "; Case { "];
  For i In {1:numPhysicals}
    If(dim~{i} < modelDim)
      If(bc~{i} == constraintNum(j))
        str = StrCat[str, Sprintf["{ Region Region[%g]; Value %g; } ",
            tag~{i}, bc_val~{i}]];
      EndIf
    EndIf
  EndFor
  str = StrCat[str, "} } }"];
  Parse[str];
  If(export)
    Printf(Str[str]) >> Str[exportFile];
  EndIf
EndFor

// import electrostatic template
Include "Lib_Electrostatics_v.pro";
If(export)
  Printf(StrCat['Include "', CurrentDirectory, 'Lib_Electrostatics_v.pro";'])
    >> Str[exportFile];
EndIf
