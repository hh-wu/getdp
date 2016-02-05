Group {
  // generic (mathematical) groups needed by the model
  DefineGroup[ Domain_M, Domain_S, Domain_Inf, Domain_NL, Domain_Mag,
    Dirichlet_phi_0, Dirichlet_a_0];

  // interactive model setup if Domain_Mag is empty
  interactive = !NbrRegions[Domain_Mag];

  // interactive construction of groups with Gmsh physical entities
  If(interactive)
    modelDim = DefineNumber[0, Name "Gmsh/Model dimension"];
    numPhysicals = DefineNumber[0, Name "Gmsh/Number of physical groups"];
    For i In {1:numPhysicals}
      dim~{i} = DefineNumber[0, Name Sprintf["Gmsh/Physical group %g/Dimension", i]];
      name~{i} = DefineString["", Name Sprintf["Gmsh/Physical group %g/Name", i]];
      tag~{i} = DefineNumber[0, Name Sprintf["Gmsh/Physical group %g/Number", i]];
      // TODO: we could add some intelligence, and preset some values depending
      // on the names :-)
      If(dim~{i} < modelDim)
        DefineConstant[
          bc~{i} = {0, Choices{
              0="Neumann",
              1="Dirichlet"
            },
            Name StrCat["Parameters/Boundary conditions/", name~{i}, "/0Type"]}
        ];
        If(bc~{i} == 1)
          Dirichlet_a_0 += Region[tag~{i}];
          Dirichlet_phi_0 += Region[tag~{i}];
        EndIf
      Else
        DefineConstant[
          material~{i} = {2, Choices{
              0="Magnet",
              1="Current source",
              2="Linear material (constant)",
              3="Linear material (function)",
              4="Nonlinear material"
            },
            Name StrCat["Parameters/Materials/", name~{i}, "/0Type"]}
        ];
        If(material~{i} == 0)
          Domain_M += Region[tag~{i}];
        ElseIf(material~{i} == 1)
          Domain_S += Region[tag~{i}];
        ElseIf(material~{i} == 2 || material~{i} == 3)
          Domain_Mag += Region[tag~{i}];
        ElseIf(material~{i} == 3)
          Domain_NL += Region[tag~{i}];
        EndIf
      EndIf
    EndFor
  EndIf

  Domain = Region[{Domain_Mag, Domain_NL, Domain_M, Domain_S, Domain_Inf}];
}

If(interactive && NbrRegions[Domain_NL])
  Include "BH.pro"
EndIf

Function{
  // Model materials
  DefineFunction[ mu, nu, hc, js, dhdb_NL, dbdh_NL ];

  // interactive construction of material properties
  If(interactive)
    For i In {1:numPhysicals}
      If(dim~{i} < modelDim)
        // nothing
      Else
        DefineConstant[
          hcx~{i} = {1000, Visible (material~{i} == 0),
            Name StrCat["Parameters/Materials/", name~{i}, "/Coercive field Hx"]},
          hcy~{i} = {0, Visible (material~{i} == 0),
            Name StrCat["Parameters/Materials/", name~{i}, "/Coercive field Hy"]},
          jsx~{i} = {0, Visible (material~{i} == 1),
            Name StrCat["Parameters/Materials/", name~{i}, "/Current density Jx"]},
          jsy~{i} = {1000, Visible (material~{i} == 1),
            Name StrCat["Parameters/Materials/", name~{i}, "/Current density Jy"]},
          mur~{i} = {1, Visible (material~{i} == 2),
            Name StrCat["Parameters/Materials/", name~{i}, "/Relative permeability"]}
          mur_fct~{i} = {"1", Visible (material~{i} == 3),
            Name StrCat["Parameters/Materials/", name~{i}, "/Relative permeability function"]}
          bhcurve~{i} = {1, Choices{1="Interpolated" },
            Visible (material~{i} == 4),
            Name StrCat["Parameters/Materials/", name~{i}, "/B-H curve"]}
        ];
        hc[ Region[tag~{i}] ] = Vector[hcx~{i}, hcy~{i}, 0];
        If(material~{i} == 4)
          If(bhcurve~{i} == 1)
            mu [ Region[tag~{i}] ] = mu_1[$1] ;
            dbdh_NL [ Region[tag~{i}] ] = dbdh_1_NL[$1];
            nu [ Region[tag~{i}] ] = nu_1[$1] ;
            dhdb_NL [ Region[tag~{i}] ] = dhdb_1_NL[$1];
          EndIf
        ElseIf(material~{i} == 3)
          Parse[ StrCat["mu[ Region[tag~{i}] ] = ", mur_fct~{i}, "*4*Pi*1e-7;"] ];
          Parse[ StrCat["nu[ Region[tag~{i}] ] = 1/(", mur_fct~{i}, "*4*Pi*1e-7);"] ];
        Else
          mu[ Region[tag~{i}] ] = mur~{i}*4*Pi*1e-7;
          nu[ Region[tag~{i}] ] = 1/(mur~{i}*4*Pi*1e-7);
        EndIf
      EndIf
    EndFor
  EndIf

  // Constant parameters
  DefineConstant[
    Val_Rint, Val_Rext, Val_Cx, Val_Cy, Val_Cz,
    Nb_max_iter = 30, relaxation_factor = 1, stop_criterion = 1e-5
  ];
}

Jacobian {
  { Name JVol ;
    Case {
      { Region Domain_Inf ;
        Jacobian VolSphShell{Val_Rint, Val_Rext, Val_Cx, Val_Cy, Val_Cz} ; }
      { Region All ; Jacobian Vol ; }
    }
  }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
	  { GeoElement Triangle ; NumberOfPoints 4 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints 4 ; }
	}
      }
    }
  }
}


/* --------------------------------------------------------------------------
   MagSta_phi : Magnetic scalar potential phi formulation
   -------------------------------------------------------------------------- */

Constraint {
  { Name phi ;
    Case {
      { Region Dirichlet_phi_0 ; Value 0. ; }
    }
  }
}

FunctionSpace {
  { Name Hgrad_phi ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef phin ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef phin ; EntityType NodesOf ; NameOfConstraint phi ; }
    }
  }
}

Formulation {
  { Name MagSta_phi ; Type FemEquation ;
    Quantity {
      { Name phi ; Type Local ; NameOfSpace Hgrad_phi ; }
    }
    Equation {
      Galerkin { [ - mu[-{d phi}] * Dof{d phi} , {d phi} ] ;
        In Domain ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL [ - dbdh_NL[-{d phi}] * Dof{d phi} , {d phi} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ - mu[] * hc[] , {d phi} ] ;
        In Domain_M ; Jacobian JVol ; Integration I1 ; }
    }
  }
}

Resolution {
  { Name MagSta_phi ;
    System {
      { Name A ; NameOfFormulation MagSta_phi ; }
    }
    Operation {
      If(!NbrRegions[Domain_NL])
        Generate[A] ; Solve[A] ;
      Else
        //IterativeLoopN[ Nb_max_iter, relaxation_factor,
        //                System { {A, reltol, abstol, Solution MeanL2Norm} } ]{
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          GenerateJac[A] ; SolveJac[A] ;
        }
      EndIf
      SaveSolution[A] ;
      //PostOperation[MagSta_phi] ;
    }
  }
}

PostProcessing {
  { Name MagSta_phi ; NameOfFormulation MagSta_phi ;
    Quantity {
      { Name b   ; Value { Local { [ - mu[-{d phi}] * {d phi} ] ; In Domain ; Jacobian JVol ; }
                           Local { [ - mu[] * hc[] ]    ; In Domain_M ; Jacobian JVol ; } } }
      { Name h   ; Value { Local { [ - {d phi} ]        ; In Domain ; Jacobian JVol ; } } }
      { Name hc  ; Value { Local { [ hc[] ]             ; In Domain_M ; Jacobian JVol ; } } }
      { Name phi ; Value { Local { [ {phi} ]            ; In Domain ; Jacobian JVol ; } } }
    }
  }
}

PostOperation {
  { Name MagSta_phi ; NameOfPostProcessing MagSta_phi;
    Operation {
      Print[ b, OnElementsOf Domain, File "MagSta_phi_b.pos" ] ;
      Print[ h, OnElementsOf Domain, File "MagSta_phi_h.pos" ] ;
      Print[ hc, OnElementsOf Domain, File "MagSta_a_hc.pos" ] ;
      Print[ phi, OnElementsOf Domain, File "MagSta_phi_phi.pos" ] ;
    }
  }
}

/* --------------------------------------------------------------------------
   MagSta_a : Magnetic vector potential a formulation (2D)
   -------------------------------------------------------------------------- */

Constraint {
  { Name a ;
    Case {
      { Region Dirichlet_a_0 ; Value 0. ; }
    }
  }
}

FunctionSpace {

  { Name Hcurl_a ; Type Form1P ;
    BasisFunction {
      { Name se ; NameOfCoef ae ; Function BF_PerpendicularEdge ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef ae ; EntityType NodesOf ; NameOfConstraint a ; }
    }
  }

}

Formulation {
  { Name MagSta_a ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ] ;
                 In Domain ; Jacobian JVol ; Integration I1 ; }

      Galerkin { JacNL [ dhdb_NL[{d a}] * Dof{d a} , {d a} ] ;
                 In Domain_NL ; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ hc[] , {d a} ] ;
                 In Domain_M ; Jacobian JVol ; Integration I1 ; }

      Galerkin { [ -js[] , {a} ] ;
                 In Domain_S ; Jacobian JVol ; Integration I1 ; }
    }
  }
}

Resolution {
  { Name MagSta_a ;
    System {
      { Name A ; NameOfFormulation MagSta_a ; }
    }
    Operation {
      If(!NbrRegions[Domain_NL])
        Generate[A] ; Solve[A] ;
      Else
        //IterativeLoopN[ Nb_max_iter, relaxation_factor,
        //                System { {A, reltol, abstol, Solution MeanL2Norm} } ]{
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          GenerateJac[A] ; SolveJac[A] ;
        }
      EndIf
      SaveSolution[A] ;
      //PostOperation[MagSta_a];
    }
  }
}

PostProcessing {
  { Name MagSta_a ; NameOfFormulation MagSta_a ;
    Quantity {
      { Name az ; Value { Local { [ CompZ[{a}] ]   ; In Domain ; Jacobian JVol ; } } }
      { Name b ; Value { Local { [ {d a} ]        ; In Domain ; Jacobian JVol ; } } }
      { Name a ; Value { Local { [ {a} ]          ; In Domain ; Jacobian JVol ; } } }
      { Name h ; Value { Local { [ nu[{d a}] * {d a} ] ; In Domain ; Jacobian JVol ; }
                         Local { [ hc[] ]         ; In Domain_M ; Jacobian JVol ; } } }
      { Name hc  ; Value { Local { [ hc[] ]       ; In Domain_M ; Jacobian JVol ; } } }
    }
  }
}

PostOperation {
  { Name MagSta_a ; NameOfPostProcessing MagSta_a;
    Operation {
      Print[ b, OnElementsOf Domain, File "MagSta_a_b.pos" ] ;
      Print[ h, OnElementsOf Domain, File "MagSta_a_h.pos" ] ;
      Print[ hc, OnElementsOf Domain, File "MagSta_a_hc.pos" ] ;
      Print[ az, OnElementsOf Domain, File "MagSta_az_a.pos" ] ;
    }
  }
}
