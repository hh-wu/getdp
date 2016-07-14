/*
  EleKin_vf
    Electrokinetics - Electric scalar potential v formulation
*/

/* I N P U T
   ---------
  A problem index ~{.} is associated with each Group, Function, Constraint, Parameter
  (Entries between [] will be added/defined later)

  GlobalGroups :
  ------------
  Domain               Whole electric domain
  DomainCC             Nonconducting regions
  DomainC              Conducting regions (not used)
  Electrode            Electrodes (surfaces)

  Function :
  --------
  sigma[]                  Electric conductivity

  Constraint :
  ----------
  ElectricScalarPotential  Fixed electric scalar potential
                           (classical boundary condition)
  ElectricPotential_Global Fixed global electric scalar potential
                           (for perfect electrodes)
  Current                  Fixed global electric current
                           (for perfect electrodes)


  Constants :
  ---------
  CoefGeo                  Length (in z-direction) for 2D structure (default: 1.)]
                           Transversal surface area for 1D structure

  Physical constants :
  ------------------


   O U T P U T
   -----------

  PostQuantities :
  --------------
   v : Electric scalar potential
   e : Electric field
   j : Electric current density
   V : Voltage
   I : Current
   R : Resistance

*/


DefineConstant[ iP = 1 ];

DefineConstant[ Process_Lib~{iP} = 1 ];


// INIT

DefineConstant[ ResDir = "Res/" ];

// TYPES
// Levels of complexity
LEVEL_ELEKIN_V                    = 1;
LEVEL_ELEKIN_V_FLOATING_POTENTIAL = 2;


DefineConstant[ Flag_SP = 0 ];

// Subproblems
If (Flag_SP)
  Include "Lib_EleKin_v_SP.pro";
EndIf


/////
Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

DefineConstant[
  DimPro~{iP} = 2,
  FE_Degree~{iP} = 1,

  Level_Lib~{iP} = LEVEL_ELEKIN_V_FLOATING_POTENTIAL
];

// Global Groups, Functions and Constants
Group {
  DefineGroup[ DomainCC~{iP}, DomainC~{iP}, Domain~{iP} ];

  Domain~{iP} = Region[{DomainCC~{iP}, DomainC~{iP}}];

  DomainWithSurf~{iP} = Region[ {Domain~{iP}} ];
}

Function {
  DefineFunction[sigma~{iP}];

  DefineVariable[ CoefGeo~{iP} = 1. ]; // Height of studied domain (2D); Transversal surface area of studied domain
}

//
Include "Lib_JacInt.pro";


FunctionSpace {
  {
    Name Hgrad_v~{iP}; Type Form0;

    BasisFunction {
      // Interpolation:
      //  For LEVEL_ELEKIN_V (Electrode~{iP} is empty)
      //   v(x) = v_n * s_n(x) ,  for all Nodes n of domain
      { Name s_n; NameOfCoef v_n; Function BF_Node;
        Support DomainC~{iP}; Entity NodesOf[All]; }
    }
    Constraint {
      { NameOfCoef v_n;
        EntityType NodesOf; NameOfConstraint ElectricScalarPotential~{1}~{iP}; }
    }
  }
}


Formulation {
  {
    Name EleKin_v~{iP}; Type FemEquation;

    Quantity {
      { Name v; Type Local; NameOfSpace Hgrad_v~{iP}; }
    }

    Equation {
      Galerkin { [ sigma~{iP}[] * Dof{d v} , {d v} ];
                 In DomainC~{iP}; Integration Gauss_v~{iP}; Jacobian Vol~{iP}; }
    }
  }
}


Resolution {
  { Name EleKin_v~{iP};
    System {
      { Name Sys; NameOfFormulation EleKin_v~{iP}; }
    }
    Operation {
      CreateDir[ResDir];
      Generate Sys; Solve Sys; SaveSolution Sys;
    }
  }
}


PostProcessing {
  {
    Name EleKin_v~{iP}; NameOfFormulation EleKin_v~{iP};
    PostQuantity {
      { Name v; Value { Term { [ {v} ]; In DomainC~{iP}; Jacobian Vol~{iP}; } } }
      { Name e; Value { Term { [ -{d v} ]; In DomainC~{iP}; Jacobian Vol~{iP}; } } }
      { Name j; Value { Term { [ -sigma~{iP}[]*{d v} ]; In DomainC~{iP}; Jacobian Vol~{iP}; } } }

      {
        Name JouleLosses;
        Value {
          Integral {
            [ sigma~{iP}[] * SquNorm[{d v}] * CoefGeo~{iP} ];
            In DomainC~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
          }
        }
      }

    }
  }
}



//
If (Level_Lib~{iP} >= LEVEL_ELEKIN_V_FLOATING_POTENTIAL)

Group {
  DefineGroup[ Electrode~{iP}, Surface_Specific_BFs~{iP} ];

  Surface_Specific_BFs~{iP} += Region[{Electrode~{iP}}];
}


FunctionSpace {
  {
    Append;
    Name Hgrad_v~{iP}; Type Form0;

    BasisFunction {
      //  For LEVEL_ELEKIN_V_FLOATING_POTENTIAL (Electrode~{iP} is not empty)
      //   v(x) = v_n * s_n(x) + v_E * s_E(x) ,
      //   for all Nodes n of domain not on Electrode~{iP}, and all Electrode E
      { Name s_E; NameOfCoef v_E; Function BF_GroupOfNodes;
        Support DomainC~{iP}; Entity GroupsOfNodesOf[Electrode~{iP}]; }
    }
    SubSpace { // only used for a PostOperation
      { Name v_E; NameOfBasisFunction s_E; }
    }
    GlobalQuantity {
      { Name V; Type AliasOf       ; NameOfCoef v_E; }
      { Name I; Type AssociatedWith; NameOfCoef v_E; }
    }
    Constraint {
      { NameOfCoef v_E;
        EntityType GroupsOfNodesOf; NameOfConstraint ElectricPotential_Global~{iP}; }
      { NameOfCoef V;
        EntityType GroupsOfNodesOf; NameOfConstraint ElectricPotential_Global~{iP}; }
      { NameOfCoef I;
        EntityType GroupsOfNodesOf; NameOfConstraint Current~{iP}; }
    }
  }
}


Formulation {
  {
    Append;
    Name EleKin_v~{iP}; Type FemEquation;

    Quantity {
      { Name V; Type Global; NameOfSpace Hgrad_v~{iP} [V]; }
      { Name I; Type Global; NameOfSpace Hgrad_v~{iP} [I]; }
      { Name v_E; Type Local; NameOfSpace Hgrad_v~{iP} [v_E]; }
    }

    Equation {
      GlobalTerm { [ Dof{I} / CoefGeo~{iP} , {V} ]; In Electrode~{iP}; }
    }
  }
}


PostProcessing {
  {
    Append;
    Name EleKin_v~{iP}; NameOfFormulation EleKin_v~{iP};
    PostQuantity {
      { Name V; Value { Term { [ {V} ]; In Electrode~{iP}; } } }
      { Name I; Value { Term { [ {I} ]; In Electrode~{iP}; } } }
      { Name R; Value { Term { [ ({I}!=0)? -{V}/{I} : 0. ]; In Electrode~{iP}; } } }

      // Same as I but recalculated from integral
      // (with pre-region global basis function as expressed in formulation)
      {
        Name Ipos;
        Value {
          Integral {
            [ - sigma~{iP}[] * {d v} * BF{d v_E} * CoefGeo~{iP} ];
            In DomainC~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP};
          }
        }
      }

    }
  }
}

EndIf


//
If (FE_Degree~{iP} == 2)

Group {
  DefineGroup[ Surface_Specific_BFs~{iP}, Surface_Specific_FE_Degree~{iP} ];
  Surface_Specific_FE_Degree~{iP} += Region[{Surface_Specific_BFs~{iP}}];
}


FunctionSpace {
  {
    Append;
    Name Hgrad_v~{iP}; Type Form0;

    BasisFunction {
      // Hierarchical higher order finite element: adding basis functions s_e
      //   ... + v_e * s_e(x) ,  for all Edges e of domain
      { Name s_e; NameOfCoef v_e; Function BF_Node_2E;
        Support DomainC~{iP}; Entity EdgesOf[All, Not Surface_Specific_BFs~{iP} ]; }
    }
    Constraint {
      // A zero value of v_e must be fixed for edges of surfaces with Dirichlet BCs!
      { NameOfCoef v_e;
        EntityType EdgesOf; NameOfConstraint ElectricScalarPotential~{0}~{iP}; }
    }
  }
}

EndIf



//
If (Flag_SP)
  Call Process_EleKin_SP;
EndIf


// Last definitions!
//
Group {
  DomainWithSurf~{iP} += Region[ {Surface_Specific_BFs~{iP}} ];
  //+++ With static Group, DomainWithSurf~{iP} must be alone in Support (not in RHS Group); will be solved with dynamic Group
}

FunctionSpace {
  {
    Append;
    Name Hgrad_v~{iP}; Type Form0;

    BasisFunction {
      { Append; Name s_n; //NameOfCoef v_n; Function BF_Node;
        // Support DomainC~{iP};
        Entity NodesOf[All, Not {Surface_Specific_BFs~{iP}}];
      }
    }
  }
}


Return
//////

//
CallTest(Process_Lib~{iP}) Str[BaseFileName];
