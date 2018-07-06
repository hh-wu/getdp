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
// groups and constraints needed by the "Lib_Magnetostatics_a_phi.pro"
// template. In addition, everytime "Run" is pressed a ".pro" file is created
// (with the same prefix as the geometry file) with all the choices made
// interactively, for later non-interactive use.

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
  DefineGroup[ Vol_Inf_Mag, Vol_NL_Mag ];
  For i In {1:numPhysicals}
    dim~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Dimension", i]];
    name~{i} = GetString[Sprintf["Gmsh/Physical group %g/Name", i]];
    tag~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Number", i]];
    reg = Sprintf["Region[%g]; ", tag~{i}];
    str = "";
    If(dim~{i} < modelDim)
      DefineConstant[
        bc~{i} = {0, ReadOnlyRange 1, Choices{
            0=StrCat["Neumann: ", StrChoice[formulationType,
                "n x h (n x magnetic field)", "n . b (normal flux density)"]],
            1=StrCat["Dirichlet: ", StrChoice[formulationType,
                "a (vector magnetic potential)", "phi (scalar magnetic potential)"]]
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
        source~{i} = {0, Visible (material~{i} != 2), ReadOnlyRange 1, Choices{
            0="None",
            1="Coercive magnetic field",
            (formulationType == 1) ? 2="Current source"
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

// global definitions
DefineConstant[
  Val_Rint = {1, Visible NbrRegions[Vol_Inf_Mag],
    Name "Model/Geometry/0Internal shell radius"},
  Val_Rext = {2, Visible NbrRegions[Vol_Inf_Mag],
    Name "Model/Geometry/1External shell radius"}
  Flag_Axi = {0, Choices{0,1}, Visible (modelDim == 2),
    Name "Model/02Axisymmetric model"}
];
If(Flag_Axi && (GetNumber["General.MinX"] < -1e-6 ||
                Fabs[GetNumber["General.MaxZ"]] > 1e-6))
  Error["The revolution axis for axisymmetric models should be X=Z=0"];
EndIf
If(export)
  If(NbrRegions[Vol_Inf_Mag])
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
        hc_fct~{i} = {"Vector[92000, 0, 0]",
          Visible (source~{i} == 1),
          Name StrCat[volPath, name~{i}, "/8hc function"],
          Label "hc [A/m]", Help "Coercive magnetic field"},
        js_fct~{i} = {"Vector[0, 0, 1]",
          Visible (source~{i} == 2),
          Name StrCat[volPath, name~{i}, "/8js function"],
          Label "js [A/m²]", Help "Current density"},
        material_preset~{i} = {#linearMagneticMaterials() > 1 ? 1 : 0,
          Visible (material~{i} == 0),
          Choices{ 0:#linearMagneticMaterials()-1 = linearMagneticMaterials() },
          Name StrCat[volPath, name~{i}, "/1mur preset"],
          Label "Material choice"}
        mur_fct~{i} = {"1",
          Visible (material~{i} == 0 && material_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/2mur function"],
          Label "μr [-]", Help "Relative magnetic permeability"},
        nl_material_preset~{i} = {#nonlinearMagneticMaterials() > 2 ? 2 : 0,
          Visible (material~{i} == 1),
          Choices{ 0:#nonlinearMagneticMaterials()-1 = nonlinearMagneticMaterials() },
          Name StrCat[volPath, name~{i}, "/1bh preset"],
          Label "Material choice"}
        b_list~{i} = {"{0,0.3,0.7,1,1.4,1.7,2.2}",
          Visible (material~{i} == 1 && nl_material_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/3b values"]},
        h_list~{i} = {"{0,30,90,2e2,6e2,4e3,7e5}",
          Visible (material~{i} == 1 && nl_material_preset~{i} == 0),
          Name StrCat[volPath, name~{i}, "/2h values"]},
        nu_fct~{i} = {"100. + 10. * Exp[1.8*SquNorm[$1]]",
          Visible (material~{i} == 1 && nl_material_preset~{i} == 1),
          Name StrCat[volPath, name~{i}, "/2nu function"],
          Label "ν(b) [m/H]", Help "Magnetic reluctivity"},
        dnudb2_fct~{i} = {"18. * Exp[1.8*SquNorm[$1]]",
          Visible (material~{i} == 1 && nl_material_preset~{i} == 1),
          Name StrCat[volPath, name~{i}, "/3dnudb2 function"],
          Label "dν(b)/db²"},
        mu_fct~{i} = {"***",
          Visible (material~{i} == 1 && nl_material_preset~{i} == 1),
          Name StrCat[volPath, name~{i}, "/4mu function"],
          Label "μ(h) [H/m]", Help "Magnetic permeability"},
        dmudh2_fct~{i} = {"***",
          Visible (material~{i} == 1 && nl_material_preset~{i} == 1),
          Name StrCat[volPath, name~{i}, "/5dmudh2 function"],
          Label "dμ(h)/dh²"}
      ];
      // sources
      If(source~{i} == 1)
        str = StrCat[str, "hc", reg, " = ", hc_fct~{i}, "; "];
      ElseIf(source~{i} == 2)
        str = StrCat[str, "js", reg, " = ", js_fct~{i}, "; "];
      EndIf
      // linear material
      If(material~{i} == 0)
        If(material_preset~{i} == 0)
          str = StrCat[str,
            "mu", reg, " = (", mur_fct~{i}, ")*mu0; ",
            "nu", reg, " = 1/((", mur_fct~{i}, ")*mu0); "];
        Else
          n = Str[ linearMagneticMaterials(material_preset~{i}) ];
          str = StrCat[str,
            "mu", reg, " = ", n, "_relative_magnetic_permeability*mu0; ",
            "nu", reg, " = 1/(", n, "_relative_magnetic_permeability*mu0); "];
        EndIf
      // nonlinear material
      ElseIf(material~{i} == 1)
        If(nl_material_preset~{i} == 0) // data points
          n = Sprintf["UserMaterialPts_%g", i];
          str = StrCat[str,
            n, "_magnetic_flux_density_list() = ", b_list~{i}, "; ",
            n, "_magnetic_field_list() = ", h_list~{i}, "; ",
            "_materialName = '", n, "'; Call DefineMaterialFunctions; "];
        ElseIf(nl_material_preset~{i} == 1) // function
          n = Sprintf["UserMaterialFct_%g", i];
          str = StrCat[str,
            n, "_nu[] = ", nu_fct~{i}, "; ",
            n, "_dnudb2[] = ", dnudb2_fct~{i}, "; ",
            n, "_mu[] = ", nu_fct~{i}, "; ",
            n, "_dmudh2[] = ", dnudb2_fct~{i}, "; ",
            "_materialName = '", n, "'; Call DefineMaterialFunctions; "];
        Else // preset
          n = Str[ nonlinearMagneticMaterials(nl_material_preset~{i}) ];
        EndIf
        // need second string due to possible macro call in str
        str2 = StrCat[
          "mu", reg, " = ", n, "_mu[$1]; ",
          "dbdh", reg, " = ", n, "_dbdh[$1]; ",
          "nu", reg, " = ", n, "_nu[$1]; ",
          "dhdb", reg, " = ", n, "_dhdb[$1]; "];
      // infinite shell
      ElseIf(material~{i} == 2)
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
Include "Lib_Magnetostatics_a_phi.pro";
If(export)
  Printf(StrCat['Include "', CurrentDirectory, 'Lib_Magnetostatics_a_phi.pro";'])
    >> Str[exportFile];
EndIf

Resolution{
  { Name Analysis;
    System {
      If(formulationType == 0)
        { Name A; NameOfFormulation Magnetostatics_phi; }
      Else
        { Name A; NameOfFormulation Magnetostatics_a; }
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
        PostOperation[Magnetostatics_phi];
      Else
        PostOperation[Magnetostatics_a];
      EndIf
    }
  }
}
