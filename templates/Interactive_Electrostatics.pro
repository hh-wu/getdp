// This script allows to setup an electrostatic model interactively:
//
// 1) Create a geometry with Gmsh
// 2) Merge this file with Gmsh using `File->Merge'
// 3) You will be prompted to setup your materials and boundary conditions for
//    each physical group, interactively
// 4) Press "Run" to solve the model
//
// How does it work? This file interactively proposes choices for all the
// constants, functions, groups and constraints needed by the Lib_EleSta_v.pro
// template. In addition, everytime "Run" is pressed a ".pro" file is created
// (with the same prefix as the geometry file) with all the choices made
// interactively, for later non-interactive use.

DefineConstant[
  formulationType = {0, Choices{0="Scalar potential"},
    Help Str[
      "Electrostatic model definitions",
      "e: electric field [V/m]",
      "d: electric displacement field [C/m²]",
      "v: scalar electric potential (e = -grad v) [V]",
      "rho: free charge density [C/m³]",
      "q: free charge [C]"],
    Name "GetDP/Formulation"},
  modelDim = GetNumber["Gmsh/Model dimension"],
  modelPath = GetString["Gmsh/Model absolute path"],
  modelName = GetString["Gmsh/Model name"],
  export = !StrCmp[OnelabAction, "compute"],
  // FIXME: code StrPrefix[] to simplify this:
  exportFile = StrCat[modelPath, StrSub[modelName, 0, StrLen[modelName]-4], ".pro"],
  R_ = {"EleSta_v", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -bin", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"EleSta_v", Name "GetDP/2PostOperationChoices", Visible 0}
];

numPhysicals = GetNumber["Gmsh/Number of physical groups"];

// interactive definition of groups
Group {
  If(export)
    If(FileExists[exportFile])
      // FIXME code RenameFile[] at parse time + related functions
      // RenameFile[exportFile, StrCat[exportFile, "_", Date]];
    EndIf
    Printf('Group{') > Str[exportFile];
  EndIf
  DefineGroup[ Vol_Inf_Ele ];
  For i In {1:numPhysicals}
    dim~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Dimension", i]];
    name~{i} = GetString[Sprintf["Gmsh/Physical group %g/Name", i]];
    tag~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Number", i]];
    reg = Sprintf["Region[%g]; ", tag~{i}]; str = "";
    If(dim~{i} < modelDim)
      DefineConstant[
        bc~{i} = {0, Choices{
            0="Neumann: fixed n . d",
            1="Dirichlet: fixed v",
            2="Floating conductor: fixed q",
            3="Floating conductor: fixed v"
          },
          Name StrCat["Parameters/Boundary conditions/", name~{i}, "/0Type"]}
      ];
      If(bc~{i} == 0)
        str = StrCat["Sur_Neu_Ele += ", reg];
      ElseIf(bc~{i} == 2 || bc~{i} == 3)
        str = StrCat["Sur_C_Ele += ", reg];
      EndIf
    Else
      DefineConstant[
        material~{i} = {1, Choices{
            0="Charged dielectric",
            1="Linear dielectric material",
            2="Infinite air shell"
          },
          Name StrCat["Parameters/Materials/", name~{i}, "/0Type"]}
      ];
      str = StrCat["Vol_Ele += ", reg];
      If(material~{i} == 0)
        str = StrCat[str, "Vol_Q_Ele += ", reg];
      ElseIf(material~{i} == 2)
        str = StrCat[str, "Vol_Inf_Ele += ", reg];
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

DefineConstant[
  Val_Rint = {1, Visible NbrRegions[Vol_Inf_Ele],
    Name "Parameters/Geometry/1Internal shell radius"},
  Val_Rext = {2, Visible NbrRegions[Vol_Inf_Ele],
    Name "Parameters/Geometry/2External shell radius"}
];
If(export && NbrRegions[Vol_Inf_Ele])
  Printf(Sprintf("Val_Rint = %g;", Val_Rint)) >> Str[exportFile];
  Printf(Sprintf("Val_Rext = %g;", Val_Rext)) >> Str[exportFile];
EndIf

// interactive definition of material properties
Include "Lib_Materials.pro";
If(export)
Printf(StrCat['Include "', CurrentDirectory, 'Lib_Materials.pro";']) >> Str[exportFile];
EndIf
Function {
  If(export)
    Printf('Function {') >> Str[exportFile];
  EndIf
  For i In {1:numPhysicals}
    reg = Sprintf["[Region[%g]]", tag~{i}]; str = "";
    If(dim~{i} < modelDim)
      DefineConstant[
        bc_val~{i} = {0.,
          Name StrCat["Parameters/Boundary conditions/", name~{i}, "/1Value"]}
      ];
      If(bc~{i} == 0)
        str = StrCat["dn", reg, Sprintf[" = %g; ", bc_val~{i}]];
      EndIf
    Else
      DefineConstant[
        rho_preset~{i} = {0, Visible (material~{i} == 0),
          Choices{ 0="Constant", 1="Function" },
          Name StrCat["Parameters/Materials/", name~{i}, "/1rho preset"],
          Label "Choice"},
        rho~{i} = {1, Visible (material~{i} == 0 && rho_preset~{i} == 0),
          Name StrCat["Parameters/Materials/", name~{i}, "/rho value"],
          Label "ρ [C/m³]", Help "Charge density"},
        rho_fct~{i} = {"1", Visible (material~{i} == 0 && rho_preset~{i} == 1),
          Name StrCat["Parameters/Materials/", name~{i}, "/rho function"],
          Label "ρ [C/m³]", Help "Charge density"},
        epsr_preset~{i} = {#linearDielectricMaterials() > 2 ? 2 : 0,
          Visible (material~{i} == 1),
          Choices{ 0:#linearDielectricMaterials()-1 = linearDielectricMaterials() },
          Name StrCat["Parameters/Materials/", name~{i}, "/1epsr preset"],
          Label "Choice"}
        epsr~{i} = {1, Visible (material~{i} == 0 && rho_preset~{i} == 0) ||
          (material~{i} == 1 && epsr_preset~{i} == 0),
          Name StrCat["Parameters/Materials/", name~{i}, "/epsr value"],
          Label "ε_r", Help "Relative dielectric permittivity"},
        epsr_fct~{i} = {"1", Visible (material~{i} == 0 && rho_preset~{i} == 1) ||
          (material~{i} == 1 && epsr_preset~{i} == 1),
          Name StrCat["Parameters/Materials/", name~{i}, "/epsr function"],
          Label "ε_r", Help "Relative dielectric permittivity"}
      ];
      If(material~{i} == 0 && rho_preset~{i} == 0) // charged, constant
        str = StrCat["rho", reg, Sprintf[" = %g; ", rho~{i}], "epsr", reg,
          Sprintf[" = %g; ", epsr~{i}]];
      ElseIf(material~{i} == 0 && rho_preset~{i} == 1) // charged, function
        str = StrCat["rho", reg, " = ", rho_fct~{i}, ";", "epsr", reg, " = ",
          epsr_fct~{i}, "; "];
      ElseIf(material~{i} == 1 && epsr_preset~{i} == 0) // linear, constant
        str = StrCat["epsr", reg, Sprintf[" = %g; ", epsr~{i}]];
      ElseIf(material~{i} == 1 && epsr_preset~{i} == 1) // linear, function
        str = StrCat["epsr", reg, " = ", epsr_fct~{i}, "; "];
      ElseIf(material~{i} == 1 && epsr_preset~{i} > 1) // linear, preset
        str = StrCat["epsr", reg, " = ", linearDielectricMaterials(epsr_preset~{i}),
          "_epsilonr;"];
      ElseIf(material~{i} == 2) // infinite air region
        str = StrCat["epsr", reg, " = 1; "];
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

Include "Lib_EleSta_v.pro";
If(export)
  Printf(StrCat['Include "', CurrentDirectory, 'Lib_EleSta_v.pro";']) >> Str[exportFile];
EndIf
