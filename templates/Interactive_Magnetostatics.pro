// This script allows to interactively setup 2D and 3D magnetostatic models:
//
// 1) Create a geometry with Gmsh, or load an existing geometry (".geo" file)
//    with `File->Open'
// 2) Merge this file ("Interactive_Magnetostatics.pro") with `File->Merge'
// 3) You will be prompted to setup your materials, sources and boundary
//    conditions for each physical group, interactively
// 4) Press "Run" to solve the model
//
// How does it work?
//
// This file interactively proposes choices for all the constants, functions,
// groups and constraints needed by the "Lib_MagSta_a_phi.pro" template. In
// addition, everytime "Run" is pressed a ".pro" file is created (with the same
// prefix as the geometry file) with all the choices made interactively, for
// later non-interactive use.

DefineConstant[
  formulationType = {1, Choices{0="Scalar potential", 1="Vector potential"},
    Help Str[
      "Magnetostatic model definitions",
      "h: magnetic field [A/m]",
      "b: magnetic flux density [T]",
      "phi: scalar magnetic potential (h = -grad phi) [A]",
      "a: vector magnetic potential (b = curl a) [T.m]"],
    Name "Model/01Formulation"},
  modelDim = GetNumber["Gmsh/Model dimension"],
  modelPath = GetString["Gmsh/Model absolute path"],
  modelName = GetString["Gmsh/Model name"],
  export = !StrCmp[OnelabAction, "compute"],
  exportFile = StrCat[modelPath, StrPrefix[StrRelative[modelName]], ".pro"],
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -bin", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
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
        bc~{i} = {0, ReadOnlyRange 1, Choices{
            0=StrCat["Neumann: fixed ", StrChoice[formulationType, "n x h", "n . b"]],
            1=StrCat["Dirichlet: fixed ", StrChoice[formulationType, "a", "phi"]]
          },
          Name StrCat[surPath, name~{i}, "/0Type"]}
      ];
      If(bc~{i} == 0)
        str = StrCat[str, "Sur_Neu_Mag += ", reg];
      ElseIf(bc~{i} == 1)
        str = StrCat[str, "Sur_Dir_Mag += ", reg];
      EndIf
    Else
      DefineConstant[
        material~{i} = {0, Choices{
            0="Linear",
            1="Nonlinear",
            2="Infinite air shell"
          },
          Name StrCat[volPath, name~{i}, "/0Material type"]}
        source~{i} = {0, ReadOnlyRange 1, Choices{
            0="None",
            1="Coercive magnetic field",
            formulationType ? 2="Current source"
          },
          Name StrCat[volPath, name~{i}, "/6Source type"]}
      ];
      str = StrCat["Vol_Mag += ", reg];
      If(material~{i} == 1)
        str = StrCat[str, "Vol_NL_Mag += ", reg];
      ElseIf(material~{i} == 2)
        str = StrCat[str, "Vol_Inf_Mag += ", reg];
      EndIf
      If(source~{i} == 1)
        str = StrCat[str, "Vol_M_Mag += ", reg];
      ElseIf(source~{i} == 2)
        str = StrCat[str, "Vol_S0_Mag += ", reg];
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

Group{
  DefineGroup[ Vol_Inf_Mag, Vol_NL_Mag ];
  DefineConstant[
    Val_Rint = {1, Visible NbrRegions[Vol_Inf_Mag],
      Name "Model/Geometry/0Internal shell radius"},
    Val_Rext = {2, Visible NbrRegions[Vol_Inf_Mag],
      Name "Model/Geometry/1External shell radius"}
  ];
  If(export && NbrRegions[Vol_Inf_Mag])
    Printf(Sprintf("Val_Rint = %g;", Val_Rint)) >> Str[exportFile];
    Printf(Sprintf("Val_Rext = %g;", Val_Rext)) >> Str[exportFile];
  EndIf
}

// import material library
Include "Lib_Materials.pro";
If(export)
  Printf(StrCat['Include "', CurrentDirectory, 'Lib_Materials.pro";'])
    >> Str[exportFile];
EndIf

// interactive definition of materials and sources
Function{
  If(export)
    Printf('Function {') >> Str[exportFile];
  EndIf
  For i In {1:numPhysicals}
    reg = Sprintf["[Region[%g]]", tag~{i}];
    str = "";
    str2 = "";
    If(dim~{i} < modelDim)
      DefineConstant[
        bc_val~{i} = {0.,
          Name StrCat[surPath, name~{i}, "/1Value"]}
      ];
      If(bc~{i} == 0 && formulationType == 0)
        str = StrCat[str, "bn", reg, Sprintf[" = %g; ", bc_val~{i}]];
      ElseIf(bc~{i} == 0 && formulationType == 1)
        str = StrCat[str, "nxh", reg, Sprintf[" = %g; ", bc_val~{i}]];
      EndIf
    Else
      DefineConstant[
        hc_preset~{i} = {0, Visible (source~{i} == 1),
          Choices{ 0="Constant", 1="Function" },
          Name StrCat[volPath, name~{i}, "/7hc preset"],
          Label "Source choice"},
        hcx~{i} = {920000, Visible (source~{i} == 1 && hc_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/8hcx value"],
          Label "hcx [A/m]", Help "Coercive magnetic field along x-axis"},
        hcy~{i} = {0, Visible (source~{i} == 1 && hc_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/8hcy value"],
          Label "hcy [A/m]", Help "Coercive magnetic field along y-axis"},
        hcz~{i} = {0, Visible (source~{i} == 1 && hc_preset~{i} == 0 && dim~{i} == 3),
          Name StrCat[volPath, name~{i}, "/8hcz value"],
          Label "hcz [A/m]", Help "Coercive magnetic field along z-axis"},
        hc_fct~{i} = {"Vector[92000, 0, 0]",
          Visible (source~{i} == 1 && hc_preset~{i} == 1),
          Name StrCat[volPath, name~{i}, "/8hc function"],
          Label "hc [A/m]", Help "Coercive magnetic field"},
        js_preset~{i} = {0, Visible (source~{i} == 2),
          Choices{ 0="Constant", 1="Function" },
          Name StrCat[volPath, name~{i}, "/7js preset"],
          Label "Source choice"},
        jsx~{i} = {0, Visible (source~{i} == 2 && js_preset~{i} == 0 && dim~{i} == 3),
          Name StrCat[volPath, name~{i}, "/8jx value"],
          Label "jsx [A/m²]", Help "Current density along x-axis"},
        jsy~{i} = {0, Visible (source~{i} == 2 && js_preset~{i} == 0 && dim~{i} == 3),
          Name StrCat[volPath, name~{i}, "/8jy value"],
          Label "jsy [A/m²]", Help "Current density along y-axis"},
        jsz~{i} = {1, Visible (source~{i} == 2 && js_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/8jz value"],
          Label "jsz [A/m²]", Help "Current density along z-axis"},
        js_fct~{i} = {"Vector[0, 0, 1]",
          Visible (source~{i} == 2 && js_preset~{i} == 1),
          Name StrCat[volPath, name~{i}, "/8js function"],
          Label "js [A/m²]", Help "Current density"},
        mur_preset~{i} = {#linearMagneticMaterials() > 2 ? 2 : 0,
          Visible (material~{i} == 0),
          Choices{ 0:#linearMagneticMaterials()-1 = linearMagneticMaterials() },
          Name StrCat[volPath, name~{i}, "/1mur preset"],
          Label "Material choice"}
        mur~{i} = {1, Visible (material~{i} == 0 && mur_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/2mur value"],
          Label "μr [-]", Help "Relative magnetic permeability"},
        mur_fct~{i} = {"1", Visible (material~{i} == 0 && mur_preset~{i} == 1),
          Name StrCat[volPath, name~{i}, "/2mur function"],
          Label "μr [-]", Help "Relative magnetic permeability"},
        bh_preset~{i} = {#nonlinearMagneticMaterials() > 2 ? 2 : 0,
          Visible (material~{i} == 1),
          Choices{ 0:#nonlinearMagneticMaterials()-1 = nonlinearMagneticMaterials() },
          Name StrCat[volPath, name~{i}, "/1bh preset"],
          Label "Material choice"}
        b_list~{i} = {"{0,0.3,0.7,1,1.4,1.7,2.2}",
          Visible (material~{i} == 1 && bh_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/3b values"]},
        h_list~{i} = {"{0,30,90,2e2,6e2,4e3,7e5}",
          Visible (material~{i} == 1 && bh_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/2h values"]},
        nu_fct~{i} = {"100. + 10. * Exp[1.8*SquNorm[$1]]",
          Visible (material~{i} == 1 && bh_preset~{i} == 1),
          Name StrCat[volPath, name~{i}, "/2nu function"],
          Label "ν(b) [m/H]", Help "Magnetic reluctivity"},
        dnudb2_fct~{i} = {"18. * Exp[1.8*SquNorm[$1]]",
          Visible (material~{i} == 1 && bh_preset~{i} == 1),
          Name StrCat[volPath, name~{i}, "/3dnudb2 function"],
          Label "dν(b)/db²"},
        mu_fct~{i} = {"***", Visible (material~{i} == 1 && bh_preset~{i} == 1),
          Name StrCat[volPath, name~{i}, "/4mu function"],
          Label "μ(h) [H/m]", Help "Magnetic permeability"},
        dmudh2_fct~{i} = {"***", Visible (material~{i} == 1 && bh_preset~{i} == 1),
          Name StrCat[volPath, name~{i}, "/5dmudh2 function"],
          Label "dμ(h)/dh²"}
      ];
      // hc[] and js[]
      If(source~{i} == 1 && hc_preset~{i} == 0) // magnet, constant
        str = StrCat[str, "hc", reg,
          Sprintf[" = Vector[%g, %g, %g]; ", hcx~{i}, hcy~{i}, hcz~{i}]];
      ElseIf(source~{i} == 1 && hc_preset~{i} == 1) // magnet, function
        str = StrCat[str, "hc", reg, " = ", hc_fct~{i}, "; "];
      ElseIf(source~{i} == 2 && js_preset~{i} == 0) // current source, constant
        str = StrCat[str, "js", reg, " = ",
          Sprintf["Vector[%g, %g, %g]; ", jsx~{i}, jsy~{i}, jsz~{i}]];
      ElseIf(source~{i} == 2 && js_preset~{i} == 1) // current source, function
        str = StrCat[str, "js", reg, " = ", js_fct~{i}, "; "];
      EndIf
      // mu[], nu[], dhdb[], etc.
      If(material~{i} == 0 && mur_preset~{i} == 0) // linear material, constant
        str = StrCat[str,
          "mu", reg, " = ", Sprintf["%g", mur~{i}], "*mu0; ",
          "nu", reg, " = 1/(", Sprintf["%g", mur~{i}], "*mu0); "];
      ElseIf(material~{i} == 0 && mur_preset~{i} == 1) // linear material, function
        str = StrCat[str,
          "mu", reg, " = (", mur_fct~{i}, ")*mu0; ",
          "nu", reg, " = 1/((", mur_fct~{i}, ")*mu0); "];
      ElseIf(material~{i} == 0 && mur_preset~{i} > 1) // linear material, preset
        n = Str[ linearMagneticMaterials(mur_preset~{i}) ];
        str = StrCat[str,
          "mu", reg, " = ", n, "_mur*mu0; ",
          "nu", reg, " = 1/(", n, "_mur*mu0); "];
      ElseIf(material~{i} == 1) // nonlinear material
        If(bh_preset~{i} == 0) // data points
          n = Sprintf["UserMaterialPts_%g", i];
          str = StrCat[str,
            n, "_b_list() = ", b_list~{i}, "; ",
            n, "_h_list() = ", h_list~{i}, "; ",
            "_materialName = '", n, "'; Call DefineMaterialFunctions; "];
        ElseIf(bh_preset~{i} == 1) // function
          n = Sprintf["UserMaterialFct_%g", i];
          str = StrCat[str,
            n, "_nu[] = ", nu_fct~{i}, "; ",
            n, "_dnudb2[] = ", dnudb2_fct~{i}, "; ",
            n, "_mu[] = ", nu_fct~{i}, "; ",
            n, "_dmudh2[] = ", dnudb2_fct~{i}, "; ",
            "_materialName = '", n, "'; Call DefineMaterialFunctions; "];
        Else // preset
          n = Str[ nonlinearMagneticMaterials(bh_preset~{i}) ];
        EndIf
        // need second string due to possible macro call in str
        str2 = StrCat[
          "mu", reg, " = ", n, "_mu[$1]; ",
          "dbdh", reg, " = ", n, "_dbdh[$1]; ",
          "nu", reg, " = ", n, "_nu[$1]; ",
          "dhdb", reg, " = ", n, "_dhdb[$1]; "];
      ElseIf(material~{i} == 2) // infinite shell
        str = StrCat[str, "mu", reg, " = mu0; ", "nu", reg, " = 1/mu0; "];
      EndIf
    EndIf
    Parse[str];
    If(export && StrLen[str])
      Printf(StrCat["  ", str]) >> Str[exportFile];
    EndIf
    Parse[str2];
    If(export && StrLen[str2])
      Printf(StrCat["  ", str2]) >> Str[exportFile];
    EndIf
  EndFor
  If(export)
    Printf('}') >> Str[exportFile];
  EndIf
}

// interactive setting of constraints
constraintNames() = Str["phi", "a"];
constraintNum() = {1, 1};
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

// import magnetostatics template
Include "Lib_MagSta_a_phi.pro";
If(export)
  Printf(StrCat['Include "', CurrentDirectory, 'Lib_MagSta_a_phi.pro";'])
    >> Str[exportFile];
EndIf

Resolution{
  { Name Analysis;
    System {
      If(formulationType == 0)
        { Name A; NameOfFormulation MagSta_phi; }
      Else
        { Name A; NameOfFormulation MagSta_a; }
      EndIf
    }
    Operation {
      InitSolution[A];
      Generate[A]; Solve[A];
      If(NbrRegions[Vol_NL_Mag])
        Generate[A]; GetResidual[A, $res0];
        Evaluate[ $res = $res0, $iter = 0 ];
        Print[{$iter, $res, $res / $res0},
          Format "Residual %03g: abs %14.12e rel %14.12e"];
        While[$res > NL_tol_abs && $res / $res0 > NL_tol_rel &&
              $res / $res0 <= 1 && $iter < NL_iter_max]{
          Solve[A]; Generate[A]; GetResidual[A, $res];
          Evaluate[ $iter = $iter + 1 ];
          Print[{$iter, $res, $res / $res0},
            Format "Residual %03g: abs %14.12e rel %14.12e"];
        }
      EndIf
      SaveSolution[A];
      If(formulationType == 0)
        PostOperation[MagSta_phi];
      Else
        PostOperation[MagSta_a];
      EndIf
    }
  }
}
