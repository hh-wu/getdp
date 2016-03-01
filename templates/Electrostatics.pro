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
    Name "GetDP/Analysis"}
];

Group {
  // generic groups needed by the model
  DefineGroup[ DomainCC_Ele, DomainQ_Ele, SkinDomainC_Ele, Domain_Inf,
    Domain_Dirichlet ];

  // interactive model setup if no region currently defined
  interactive = !NbrRegions[];
  modelDim = GetNumber["Gmsh/Model dimension"];
  numPhysicals = GetNumber["Gmsh/Number of physical groups"];

  // interactive construction of groups with Gmsh
  If(interactive)
    For i In {1:numPhysicals}
      dim~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Dimension", i]];
      name~{i} = GetString[Sprintf["Gmsh/Physical group %g/Name", i]];
      tag~{i} = GetNumber[Sprintf["Gmsh/Physical group %g/Number", i]];
      If(dim~{i} < modelDim)
        DefineConstant[
          bc~{i} = {0, ReadOnlyRange 1, Choices{
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
          Domain_Dirichlet += Region[tag~{i}];
        ElseIf(bc~{i} == 2 || bc~{i} == 3)
          SkinDomainC_Ele += Region[tag~{i}];
        EndIf
      Else
        DefineConstant[
          material~{i} = {2, Choices{
              0="Charged material (constant)",
              1="Charged material (function)",
              2="Linear material (constant)",
              3="Linear material (function)",
              4="Linear material (preset)",
              5="Infinite region (shell)"
            },
            Name StrCat["Parameters/Materials/", name~{i}, "/0Type"]}
        ];
        If(material~{i} == 0 || material~{i} == 1)
          DomainQ_Ele += Region[tag~{i}];
          DomainCC_Ele += Region[tag~{i}];
        ElseIf(material~{i} == 2 || material~{i} == 3 || material~{i} == 4)
          DomainCC_Ele += Region[tag~{i}];
        ElseIf(material~{i} == 5)
          Domain_Inf += Region[tag~{i}];
        EndIf
      EndIf
    EndFor
  EndIf
}

If(interactive)
  Include "MaterialDatabase.pro"
EndIf

Function{
  DefineConstant[ eps0 = 8.854187818e-12 ];

  // generic functions needed by the model
  DefineFunction[ epsr, rho ];

  // interactive construction of material properties
  If(interactive)
    For i In {1:numPhysicals}
      If(dim~{i} < modelDim)
        // nothing
      Else
        DefineConstant[
          rho~{i} = {1, Visible (material~{i} == 0),
            Name StrCat["Parameters/Materials/", name~{i}, "/rho value"],
            Label "ρ [C/m³]", Help "Charge density"},
          rho_fct~{i} = {"1", Visible (material~{i} == 1),
            Name StrCat["Parameters/Materials/", name~{i}, "/rho function"],
            Label "ρ [C/m³]", Help "Charge density"},
          epsr~{i} = {1, Visible (material~{i} == 2),
            Name StrCat["Parameters/Materials/", name~{i}, "/epsr value"],
            Label "ε_r", Help "Relative dielectric permittivity"},
          epsr_fct~{i} = {"1", Visible (material~{i} == 3),
            Name StrCat["Parameters/Materials/", name~{i}, "/epsr function"],
            Label "ε_r", Help "Relative dielectric permittivity"},
          epsr_preset~{i} = {1, Visible (material~{i} == 4), ReadOnlyRange 1,
            Choices{ 1:#linearDielectricMaterials() = linearDielectricMaterials() },
            Name StrCat["Parameters/Materials/", name~{i}, "/epsr preset"],
            Label "Name"}
        ];
        If(material~{i} == 0) // charged, constant
          rho[ Region[tag~{i}] ] = rho~{i};
          epsr[ Region[tag~{i}] ] = 1;
        ElseIf(material~{i} == 1) // charged, function
          Parse[ StrCat["rho[ Region[tag~{i}] ] = ", rho_fct~{i}, ";"] ];
          epsr[ Region[tag~{i}] ] = 1;
        ElseIf(material~{i} == 2) // linear, constant
          epsr[ Region[tag~{i}] ] = epsr~{i};
        ElseIf(material~{i} == 3) // linear, function
          Parse[ StrCat["epsr[ Region[tag~{i}] ] = ", epsr_fct~{i}, ";"] ];
        ElseIf(material~{i} == 4) // linear, preset
          Parse[ StrCat[ "epsr[ Region[tag~{i}] ] = ",
            linearDielectricMaterials(epsr_preset~{i} - 1), "_epsilonr;"] ];
        ElseIf(material~{i} == 5) // infinite regions
          epsr[ Region[tag~{i}] ] = 1;
        EndIf
      EndIf
    EndFor
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
