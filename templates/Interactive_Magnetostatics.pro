// This script allows to use Lib_MagSta_a_phi.pro to setup a magnetostatic model
// interactively:
//
// 1) Create a geometry with Gmsh
// 2) Merge this file with File->Merge
// 3) You will be prompted to setup your materials and boundary conditions for
//    each physical group, interactively
// 4) Everytime you click on "Run", an "export.pro" file will be created,
//    which will contain all your choices for later non-interactive use

DefineConstant[
  formulationType = {1, Choices{0="Scalar potential", 1="Vector potential"},
    Help Str[
      "Magnetostatic model definitions",
      "h: magnetic field [A/m]",
      "b: magnetic flux density [T]",
      "phi: scalar magnetic potential (h = -grad phi) [A]",
      "a: vector magnetic potential (b = curl a) [T.m]"],
    Name "GetDP/Formulation"},
  modelDim = GetNumber["Gmsh/Model dimension"],
  modelPath = GetString["Gmsh/Model absolute path"],
  export = !StrCmp[OnelabAction, "compute"],
  exportFile = StrCat[modelPath, "export.pro"],
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -bin", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];

numPhysicals = GetNumber["Gmsh/Number of physical groups"];

// interactive definition of groups
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
        bc~{i} = {0, ReadOnlyRange 1, Choices{
            0=StrCat["Neumann: fixed ", StrChoice[formulationType, "n x h", "n . b"]],
            1=StrCat["Dirichlet: fixed ", StrChoice[formulationType, "a", "phi"]]
          },
          Name StrCat["Parameters/Boundary conditions/", name~{i}, "/0Type"]}
      ];
      If(bc~{i} == 0)
        str = StrCat["Sur_Neu_Mag += ", reg];
      ElseIf(bc~{i} == 1)
        str = StrCat["Sur_Dir_Mag += ", reg];
      EndIf
    Else
      DefineConstant[
        material~{i} = {2, Choices{
            0="Magnet",
            1="Current source",
            2="Linear magnetic material",
            3="Nonlinear magnetic material",
            4="Infinite air shell"
          },
          Name StrCat["Parameters/Materials/", name~{i}, "/0Type"]}
      ];
      If(material~{i} == 0)
        str = StrCat["Vol_M_Mag += ", reg];
      ElseIf(material~{i} == 1)
        str = StrCat["Vol_S0_Mag += ", reg];
      ElseIf(material~{i} == 2)
        str = StrCat["Vol_L_Mag += ", reg];
      ElseIf(material~{i} == 3)
        str = StrCat["Vol_NL_Mag += ", reg];
      ElseIf(material~{i} == 4)
        str = StrCat["Vol_Inf_Mag += ", reg];
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
      Name "Parameters/Geometry/1Internal shell radius"},
    Val_Rext = {2, Visible NbrRegions[Vol_Inf_Mag],
      Name "Parameters/Geometry/2External shell radius"}
  ];
  If(export && NbrRegions[Vol_Inf_Mag])
    Printf(Sprintf("Val_Rint = %g;", Val_Rint)) >> Str[exportFile];
    Printf(Sprintf("Val_Rext = %g;", Val_Rext)) >> Str[exportFile];
  EndIf
}

// interactive definition of material properties
Include "Lib_Materials.pro";
If(export)
  Printf('Include "Lib_Materials.pro";') >> Str[exportFile];
EndIf
Function{
  If(export)
    Printf('Function {') >> Str[exportFile];
  EndIf
  For i In {1:numPhysicals}
    reg = Sprintf["[Region[%g]]", tag~{i}]; str = ""; str2 = "";
    If(dim~{i} < modelDim)
      DefineConstant[
        bc_val~{i} = {0.,
          Name StrCat["Parameters/Boundary conditions/", name~{i}, "/1Value"]}
      ];
      If(bc~{i} == 0 && formulationType == 0)
        str = StrCat["bn", reg, Sprintf[" = %g; ", bc_val~{i}]];
      ElseIf(bc~{i} == 0 && formulationType == 1)
        str = StrCat["nxh", reg, Sprintf[" = %g; ", bc_val~{i}]];
      EndIf
    Else
      DefineConstant[
        hc_preset~{i} = {#permanentMagnetMaterials() > 2 ? 2 : 0,
          Visible (material~{i} == 0),
          Choices{ 0:#permanentMagnetMaterials()-1 = permanentMagnetMaterials() },
          Name StrCat["Parameters/Materials/", name~{i}, "/1hc preset"],
          Label "Choice"},
        hcx~{i} = {920000, Visible (material~{i} == 0 && hc_preset~{i} == 0),
          Name StrCat["Parameters/Materials/", name~{i}, "/hcx value"],
          Label "h_cx [A/m]", Help "Coercive magnetic field along x-axis"},
        hcy~{i} = {0, Visible (material~{i} == 0 && hc_preset~{i} == 0),
          Name StrCat["Parameters/Materials/", name~{i}, "/hcy value"],
          Label "h_cy [A/m]", Help "Coercive magnetic field along y-axis"},
        hcz~{i} = {0, Visible (material~{i} == 0 && hc_preset~{i} == 0 && dim~{i} == 3),
          Name StrCat["Parameters/Materials/", name~{i}, "/hcz value"],
          Label "h_cz [A/m]", Help "Coercive magnetic field along z-axis"},
        hc_fct~{i} = {"Vector[92000, 0, 0]",
          Visible (material~{i} == 0 && hc_preset~{i} == 1),
          Name StrCat["Parameters/Materials/", name~{i}, "/hc function"],
          Label "h_c [A/m]", Help "Coercive magnetic field"},
        js_preset~{i} = {0, Visible (material~{i} == 1),
          Choices{ 0="Constant", 1="Function" },
          Name StrCat["Parameters/Materials/", name~{i}, "/1js preset"],
          Label "Choice"},
        jsx~{i} = {0, Visible (material~{i} == 1 && js_preset~{i} == 0 && dim~{i} == 3),
          Name StrCat["Parameters/Materials/", name~{i}, "/jx value"],
          Label "j_sx [A/m²]", Help "Current density along x-axis"},
        jsy~{i} = {0, Visible (material~{i} == 1 && js_preset~{i} == 0&& dim~{i} == 3),
          Name StrCat["Parameters/Materials/", name~{i}, "/jy value"],
          Label "j_sy [A/m²]", Help "Current density along y-axis"},
        jsz~{i} = {1, Visible (material~{i} == 1 && js_preset~{i} == 0),
          Name StrCat["Parameters/Materials/", name~{i}, "/jz value"],
          Label "j_sz [A/m²]", Help "Current density along z-axis"},
        js_fct~{i} = {"Vector[0, 0, 1]",
          Visible (material~{i} == 1 && js_preset~{i} == 1),
          Name StrCat["Parameters/Materials/", name~{i}, "/js function"],
          Label "j_s [A/m²]", Help "Current density"},
        mur_preset~{i} = {#linearMagneticMaterials() > 2 ? 2 : 0,
          Visible (material~{i} == 2),
          Choices{ 0:#linearMagneticMaterials()-1 = linearMagneticMaterials() },
          Name StrCat["Parameters/Materials/", name~{i}, "/1mur preset"],
          Label "Choice"}
        mur~{i} = {1, Visible (material~{i} == 2 && mur_preset~{i} == 0),
          Name StrCat["Parameters/Materials/", name~{i}, "/mur value"],
          Label "μ_r", Help "Relative magnetic permeability"},
        mur_fct~{i} = {"1", Visible (material~{i} == 2 && mur_preset~{i} == 1),
          Name StrCat["Parameters/Materials/", name~{i}, "/mur function"],
          Label "μ_r", Help "Relative magnetic permeability"},
        bh_preset~{i} = {#nonlinearMagneticMaterials() > 2 ? 2 : 0,
          Visible (material~{i} == 3),
          Choices{ 0:#nonlinearMagneticMaterials()-1 = nonlinearMagneticMaterials() },
          Name StrCat["Parameters/Materials/", name~{i}, "/1bh preset"],
          Label "Choice"}
        b_list~{i} = {"{0,0.3,0.7,1,1.4,1.7,2.2}",
          Visible (material~{i} == 3 && bh_preset~{i} == 0),
          Name StrCat["Parameters/Materials/", name~{i}, "/3b values"]},
        h_list~{i} = {"{0,30,90,2e2,6e2,4e3,7e5}",
          Visible (material~{i} == 3 && bh_preset~{i} == 0),
          Name StrCat["Parameters/Materials/", name~{i}, "/2h values"]},
        nu_fct~{i} = {"100. + 10. * Exp[1.8*SquNorm[$1]]",
          Visible (material~{i} == 3 && bh_preset~{i} == 1),
          Name StrCat["Parameters/Materials/", name~{i}, "/2nu function"],
          Label "ν(b) [m/H]", Help "Magnetic reluctivity"},
        dnudb2_fct~{i} = {"18. * Exp[1.8*SquNorm[$1]]",
          Visible (material~{i} == 3 && bh_preset~{i} == 1),
          Name StrCat["Parameters/Materials/", name~{i}, "/3dnudb2 function"],
          Label "dν/db²"},
        mu_fct~{i} = {"***", Visible (material~{i} == 3 && bh_preset~{i} == 1),
          Name StrCat["Parameters/Materials/", name~{i}, "/4mu function"],
          Label "μ(h) [H/m]", Help "Magnetic permeability"},
        dmudh2_fct~{i} = {"***", Visible (material~{i} == 3 && bh_preset~{i} == 1),
          Name StrCat["Parameters/Materials/", name~{i}, "/5dmudh2 function"],
          Label "dμ/dh²"}
      ];
      If(material~{i} == 0 && hc_preset~{i} == 0) // magnet, constant
        str = StrCat["hc", reg, Sprintf[" = Vector[%g, %g, %g]; ", hcx~{i},
            hcy~{i}, hcz~{i}], "mu", reg, " = mu0; ", "nu", reg, " = 1/mu0; "];
      ElseIf(material~{i} == 0 && hc_preset~{i} == 1) // magnet, function
        str = StrCat["hc", reg, " = ", hc_fct~{i}, "; ", "mu", reg, " = mu0; ",
        "nu", reg, " = 1/mu0; "];
      ElseIf(material~{i} == 0 && hc_preset~{i} > 1) // magnet, preset
        n = Str[ permanentMagnetMaterials(hc_preset~{i}) ];
        str = StrCat["hc", reg, " = ", n, "_hc; ", "mu", reg, " = ", n,
          "_mur*mu0; ", "nu", reg, " = 1/(", n, "_mur*mu0); "];
      ElseIf(material~{i} == 1 && js_preset~{i} == 0) // current source, constant
        str = StrCat["js", reg, " = ", Sprintf["Vector[%g, %g, %g]; ", jsx~{i},
          jsy~{i}, jsz~{i}], "mu", reg, " = mu0; ", "nu", reg, " = 1/mu0; "];
      ElseIf(material~{i} == 1 && js_preset~{i} == 1) // current source, function
        str = StrCat["js", reg, " = ", js_fct~{i}, "; ", "mu", reg, " = mu0; ",
          "nu", reg, " = 1/mu0; "];
      ElseIf(material~{i} == 2 && mur_preset~{i} == 0) // linear material, constant
        str = StrCat["mu", reg, " = ", Sprintf["%g", mur~{i}], "*mu0; ",
          "nu", reg, " = 1/(", Sprintf["%g", mur~{i}], "*mu0); "];
      ElseIf(material~{i} == 2 && mur_preset~{i} == 1) // linear material, function
        str = StrCat["mu", reg, " = (", mur_fct~{i}, ")*mu0; ", "nu", reg,
          " = 1/((", mur_fct~{i}, ")*mu0); "];
      ElseIf(material~{i} == 2 && mur_preset~{i} > 1) // linear material, preset
        n = Str[ linearMagneticMaterials(mur_preset~{i}) ];
        str = StrCat["mu", reg, " = ", n, "_mur*mu0; ", "nu", reg, " = 1/(",
          n, "_mur*mu0); "];
      ElseIf(material~{i} == 3) // nonlinear material
        If(bh_preset~{i} == 0) // data points
          n = Sprintf["UserMaterialPts_%g", i];
          str = StrCat[n, "_b_list() = ", b_list~{i}, "; ", n, "_h_list() = ",
            h_list~{i}, "; ", "_MaterialName_ = '", n,
            "'; Call DefineMaterialFunctions; "];
        ElseIf(bh_preset~{i} == 1) // function
          n = Sprintf["UserMaterialFct_%g", i];
          str = StrCat[n, "_nu[] = ", nu_fct~{i}, "; ", n, "_dnudb2[] = ",
            dnudb2_fct~{i}, "; ", n, "_mu[] = ", nu_fct~{i}, "; ", n,
            "_dmudh2[] = ", dnudb2_fct~{i}, "; ", "_MaterialName_ = '", n,
            "'; Call DefineMaterialFunctions; "];
        Else // preset
          n = Str[ nonlinearMagneticMaterials(bh_preset~{i}) ];
        EndIf
        str2 = StrCat["mu", reg, " = ", n, "_mu[$1]; ", "dbdh_NL", reg, " = ",
          n, "_dbdh_NL[$1]; ", "nu", reg, " = ", n, "_nu[$1]; ",
          "dhdb_NL", reg, " = ", n, "_dhdb_NL[$1]; "];
      ElseIf(material~{i} == 4) // infinite regions
        str = StrCat["mu", reg, " = mu0; ", "nu", reg, " = 1/mu0; "];
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

Include "Lib_MagSta_a_phi.pro";
If(export)
  Printf('Include "Lib_MagSta_a_phi.pro";') >> Str[exportFile];
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
      If(!NbrRegions[Vol_NL_Mag])
        Generate[A]; Solve[A];
      Else
        //IterativeLoopN[ NL_max_iter, NL_relax,
        //   System { {A, NL_reltol, NL_abstol, Solution MeanL2Norm} } ]{
        IterativeLoop[NL_max_iter, NL_tol, NL_relax]{
          GenerateJac[A]; SolveJac[A];
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
