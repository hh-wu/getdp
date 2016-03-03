// Electrostatics.pro
//
// Electrostatics - scalar electric potential (v) formulation, with floating
// potential
//
// You can either merge this file in an other problem description file, or open
// the file with Gmsh along with a geometry: you will then be prompted to setup
// your materials and boundary conditions for each physical group,
// interactively.

DefineConstant[
  Flag_AnalysisType = {0, Choices{0="Scalar potential"},
    Help Str[
      "Electrostatic model definitions",
      "e: electric field [V/m]",
      "d: electric flux density [C/m²]",
      "v: scalar electric potential (e = -grad v) [V]",
      "rho: charge density [C/m³]",
      "q: charge [C]"],
    Name "GetDP/Analysis"},
  exportFile = "export.pro"
];

Group {
  // generic groups needed by the model
  DefineGroup[ DomainCC_Ele, DomainQ_Ele, SkinDomainC_Ele, Domain_Inf,
    Domain_Dirichlet ];

  // interactive model setup if no region currently defined
  interactive = !NbrRegions[];
  export = !StrCmp[OnelabAction, "compute"];
  modelDim = GetNumber["Gmsh/Model dimension"];
  numPhysicals = GetNumber["Gmsh/Number of physical groups"];

  // interactive construction of groups with Gmsh
  If(interactive)
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
              0="Neumann: zero d.n",
              1="Dirichlet: fixed v",
              2="Floating conductor: fixed q",
              3="Floating conductor: fixed v"
            },
            Name StrCat["Parameters/Boundary conditions/", name~{i}, "/0Type"]}
          bc_val~{i} = {0., Visible bc~{i},
            Name StrCat["Parameters/Boundary conditions/", name~{i}, "/1Value"]}
        ];
        If(bc~{i} == 1)
          str = StrCat["Domain_Dirichlet += ", reg];
        ElseIf(bc~{i} == 2 || bc~{i} == 3)
          str = StrCat["SkinDomainC_Ele += ", reg];
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
          str = StrCat["DomainQ_Ele += ", reg, "DomainCC_Ele += ", reg];
        ElseIf(material~{i} == 1)
          str = StrCat["DomainCC_Ele += ", reg];
        ElseIf(material~{i} == 2)
          str = StrCat["Domain_Inf += ", reg];
        EndIf
      EndIf
      Parse[str];
      If(export && StrLen[str])
        Printf(Str[str]) >> Str[exportFile];
      EndIf
    EndFor
    If(export)
      Printf('}') >> Str[exportFile];
    EndIf
  EndIf
}

If(interactive)
  Include "MaterialDatabase.pro"
  If(export)
    Printf('Include "MaterialDatabase.pro";') >> Str[exportFile];
  EndIf
EndIf

Function{
  // generic functions needed by the model
  DefineFunction[ epsr, rho ];

  // interactive construction of material properties
  If(interactive)
    If(export)
      Printf('Function {') >> Str[exportFile];
    EndIf
    For i In {1:numPhysicals}
      If(dim~{i} < modelDim)
        // nothing
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
          epsr_preset~{i} = {0, Visible (material~{i} == 1),
            Choices{ 1:#linearDielectricMaterials() = linearDielectricMaterials() },
            Name StrCat["Parameters/Materials/", name~{i}, "/epsr preset"],
            Label "Choice"}
          epsr~{i} = {1, Visible (material~{i} == 1 && epsr_preset~{i} == 0),
            Name StrCat["Parameters/Materials/", name~{i}, "/epsr value"],
            Label "ε_r", Help "Relative dielectric permittivity"},
          epsr_fct~{i} = {"1", Visible (material~{i} == 1 && epsr_preset~{i} == 1),
            Name StrCat["Parameters/Materials/", name~{i}, "/epsr function"],
            Label "ε_r", Help "Relative dielectric permittivity"}
        ];
        reg = Sprintf["[Region[%g]]", tag~{i}]; str = "";
        If(material~{i} == 0 && rho_preset~{i} == 0) // charged, constant
          str = StrCat[
            "rho", reg, Sprintf[" = %g; ", rho~{i}], "epsr", reg, "= 1; "
          ];
        ElseIf(material~{i} == 0 && rho_preset~{i} == 1) // charged, function
          str = StrCat[
            "rho", reg, " = ", rho_fct~{i}, ";", "epsr", reg, " = 1; "
          ];
        ElseIf(material~{i} == 1 && epsr_preset~{i} == 0) // linear, constant
          str = StrCat[
            "epsr", reg, Sprintf[" = %g; ", epsr~{i}]
          ];
        ElseIf(material~{i} == 1 && epsr_preset~{i} == 1) // linear, function
          str = StrCat[
            "epsr", reg, " = ", epsr_fct~{i}, "; "
          ];
        ElseIf(material~{i} == 1 && epsr_preset~{i} > 1) // linear, preset
          str = StrCat[
            "epsr", reg, " = ", linearDielectricMaterials(epsr_preset~{i}), "_epsilonr;"
          ];
        ElseIf(material~{i} == 2) // infinite regions
          str = StrCat[
            "epsr", reg, " = 1; "
          ];
        EndIf
        Parse[str];
        If(export && StrLen[str])
          Printf(Str[str]) >> Str[exportFile];
        EndIf
      EndIf
    EndFor
    If(export)
      Printf('}') >> Str[exportFile];
    EndIf
  EndIf

  // constant parameters needed by the model
  DefineConstant[
    Val_Rint = {1, Visible NbrRegions[Domain_Inf],
      Name "Parameters/Geometry/1Internal shell radius"},
    Val_Rext = {2, Visible NbrRegions[Domain_Inf],
      Name "Parameters/Geometry/2External shell radius"},
    Val_Cx, Val_Cy, Val_Cz
  ];
}

Jacobian {
  { Name Vol;
    Case {
      { Region Domain_Inf;
        Jacobian VolSphShell{Val_Rint, Val_Rext, Val_Cx, Val_Cy, Val_Cz}; }
      { Region All; Jacobian Vol; }
    }
  }
}

Integration {
  { Name GradGrad;
    Case {
      { Type Gauss;
        Case {
	  { GeoElement Triangle; NumberOfPoints 4; }
	  { GeoElement Quadrangle; NumberOfPoints 4; }
          { GeoElement Tetrahedron; NumberOfPoints 4; }
	}
      }
    }
  }
}

If(interactive)
  // FIXME: need to export constraints, too!
  Constraint {
    { Name ElectricScalarPotential;
      Case {
        For i In {1:numPhysicals}
          If(dim~{i} < modelDim)
            If(bc~{i} == 1)
              { Region Region[tag~{i}]; Value bc_val~{i}; }
            EndIf
          EndIf
        EndFor
      }
    }
    { Name GlobalElectricPotential;
      Case {
        For i In {1:numPhysicals}
          If(dim~{i} < modelDim)
            If(bc~{i} == 3)
              { Region Region[tag~{i}]; Value bc_val~{i}; }
            EndIf
          EndIf
        EndFor
      }
    }
    { Name GlobalElectricCharge;
      Case {
        For i In {1:numPhysicals}
          If(dim~{i} < modelDim)
            If(bc~{i} == 2)
              { Region Region[tag~{i}]; Value bc_val~{i}; }
            EndIf
          EndIf
        EndFor
      }
    }
  }
EndIf

FunctionSpace {
  { Name Hgrad_vf_Ele; Type Form0;
    BasisFunction {
      // v = v  s  + v    s
      //      n  n    c,k  c,k
      { Name sn; NameOfCoef vn; Function BF_Node;
        Support DomainCC_Ele; Entity NodesOf[ All, Not SkinDomainC_Ele ]; }
      { Name sck; NameOfCoef vck; Function BF_GroupOfNodes;
        Support DomainCC_Ele; Entity GroupsOfNodesOf[ SkinDomainC_Ele ]; }
    }
    SubSpace { // only for a PostOperation
      { Name vf; NameOfBasisFunction sck; }
    }
    GlobalQuantity {
      { Name GlobalElectricPotential; Type AliasOf; NameOfCoef vck; }
      { Name GlobalElectricCharge; Type AssociatedWith; NameOfCoef vck; }
    }
    Constraint {
      { NameOfCoef vn;
        EntityType NodesOf; NameOfConstraint ElectricScalarPotential; }

      { NameOfCoef GlobalElectricPotential;
        EntityType GroupsOfNodesOf; NameOfConstraint GlobalElectricPotential; }
      { NameOfCoef GlobalElectricCharge;
        EntityType GroupsOfNodesOf; NameOfConstraint GlobalElectricCharge; }
    }
  }
}

Formulation {
  { Name Electrostatics_vf; Type FemEquation;
    Quantity {
      { Name v; Type Local; NameOfSpace Hgrad_vf_Ele; }
      { Name Q; Type Global;
        NameOfSpace Hgrad_vf_Ele [GlobalElectricCharge]; }
      { Name V; Type Global;
        NameOfSpace Hgrad_vf_Ele [GlobalElectricPotential]; }

      // only for a PostOperation
      { Name vf; Type Local; NameOfSpace Hgrad_vf_Ele [vf]; }
    }
    Equation {
      Galerkin { [ - eps0 * epsr[] * Dof{Grad v} , {Grad v} ];
        In DomainCC_Ele; Jacobian Vol; Integration GradGrad; }

      Galerkin { [ rho[], {v} ];
        In DomainQ_Ele; Jacobian Vol; Integration GradGrad; }

      GlobalTerm { [ Dof{Q}, {V} ];
        In SkinDomainC_Ele; }
    }
  }
}

Resolution {
  { Name EleSta_v;
    System {
      { Name Sys_Ele; NameOfFormulation Electrostatics_vf; }
    }
    Operation {
      Generate[Sys_Ele]; Solve[Sys_Ele]; SaveSolution[Sys_Ele];
    }
  }
}

PostProcessing {
  { Name EleSta_v; NameOfFormulation Electrostatics_vf;
    PostQuantity {
      { Name v; Value { Term { [ {v} ]; In DomainCC_Ele; Jacobian Vol; } } }
      { Name e; Value { Term { [ -{d v} ]; In DomainCC_Ele; Jacobian Vol; } } }
      { Name d; Value { Term { [ -eps0*epsr[] * {d v} ]; In DomainCC_Ele; Jacobian Vol; } } }

      { Name Q; Value { Term { [ {Q} ]; In SkinDomainC_Ele; } } }
      { Name V; Value { Term { [ {V} ]; In SkinDomainC_Ele; } } }
      { Name C; Value { Term { [ {Q}/{V} ]; In SkinDomainC_Ele; } } }

      { Name vf; Value { Term { [ {vf} ]; In DomainCC_Ele; Jacobian Vol; } } }

      { Name force;
        Value { Integral { Type Global;
            [ eps0*epsr[] / 2. * VirtualWork[{Grad v}] ];
	    //In DomainCC_Ele; // restrict support to speed-up search
            In ElementsOf[DomainCC_Ele, OnOneSideOf SkinDomainC_Ele];
            Jacobian Vol; Integration GradGrad;
	  }
	}
      }

      { Name energy;
        Value { Integral { Type Global;
	    [ eps0*epsr[] / 2. * SquNorm[{Grad v}] ];
	    In DomainCC_Ele; Jacobian Vol; Integration GradGrad;
	  }
	}
      }

    }
  }
}

PostOperation {
  { Name EleSta_v; NameOfPostProcessing EleSta_v;
    Operation {
      Print[ e, OnElementsOf DomainCC_Ele, File "EleSta_v_e.pos" ];
      Print[ v, OnElementsOf DomainCC_Ele, File "MagSta_v_v.pos" ];
      If(NbrRegions[SkinDomainC_Ele])
        Print[ Q, OnRegion SkinDomainC_Ele, File "EleSta_v_q.txt",
          Format Table, SendToServer "}Output/Floating charge [C]" ];
        Print[ V, OnRegion SkinDomainC_Ele, File "EleSta_v_q.txt",
          Format Table, SendToServer "}Output/Floating potential [V]" ];
      EndIf
    }
  }
}

DefineConstant[
  R_ = {"EleSta_v", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"EleSta_v", Name "GetDP/2PostOperationChoices", Visible 0}
];
