// This script allows to use Lib_EleSta_v.pro to setup an electrostatic model
// interactively:
//
// 1) Create a geometry with Gmsh
// 2) Merge this file with File->Merge
// 3) You will be prompted to setup your materials and boundary conditions for
//    each physical group, interactively
// 4) Everytime you click on "Run", an "export.pro" file will be created,
//    which will contain all your choices for later non-interactive use

interactive = !NbrRegions[]; // interactive mode if no region currently defined
export = !StrCmp[OnelabAction, "compute"]; // dump export file on each "Run"
modelDim = GetNumber["Gmsh/Model dimension"]; // 1D, 2D or 3D geometry
numPhysicals = GetNumber["Gmsh/Number of physical groups"];
modelPath = GetString["Gmsh/Model absolute path"];
exportFile = StrCat[modelPath, "export.pro"];

// this macro will be called in Lib_EleSta_v.pro if we are in interactive mode
Macro Lib_EleSta_v_interactive

  // interactive construction of groups
  Group {
    If(export)
      Printf('Group{') > Str[exportFile];
    EndIf
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
        If(material~{i} == 0)
          str = StrCat["Vol_Q_Ele += ", reg, "Vol_Ele += ", reg];
        ElseIf(material~{i} == 1)
          str = StrCat["Vol_Ele += ", reg];
        ElseIf(material~{i} == 2)
          str = StrCat["Vol_Inf_Ele += ", reg];
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

  // interactive setting of material properties
  Include "Lib_Materials.pro";
  If(export)
    Printf('Include "Lib_Materials.pro";') >> Str[exportFile];
  EndIf
  Function {
    If(export)
      Printf('Function {') >> Str[exportFile];
    EndIf
    For i In {1:numPhysicals}
      If(dim~{i} < modelDim)
        DefineConstant[
          bc_val~{i} = {0.,
            Name StrCat["Parameters/Boundary conditions/", name~{i}, "/1Value"]}
        ];
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
        reg = Sprintf["[Region[%g]]", tag~{i}]; str = "";
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
        Parse[str];
        If(export && StrLen[str])
          Printf(StrCat["  ", str]) >> Str[exportFile];
        EndIf
      EndIf
    EndFor
    If(export)
      Printf('}') >> Str[exportFile];
    EndIf
  }

  // interactive setting of constraints
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

  If(export)
    Printf('Include "Lib_EleSta_v.pro";') >> Str[exportFile];
  EndIf

Return

Include "Lib_EleSta_v.pro";

DefineConstant[
  formulationType = {0, Choices{0="Scalar potential"},
    Help Str[
      "Electrostatic model definitions",
      "e: electric field [V/m]",
      "d: electric flux density [C/m²]",
      "v: scalar electric potential (e = -grad v) [V]",
      "rho: charge density [C/m³]",
      "q: charge [C]"],
    Name "GetDP/Formulation"},
  R_ = {"EleSta_v", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"EleSta_v", Name "GetDP/2PostOperationChoices", Visible 0}
];
