/*
  MagSta_hs
    Magnetostatics - hs formulation
    (for computation of source magnetic fields associated with inductors)
*/

DefineConstant[ iP = 1 ];

//+++
DefineConstant[
  TYPE_GAUGE_NONE              = 0,
  TYPE_GAUGE_TREE_COTREE       = 1,
  TYPE_GAUGE_ORTHOGONALITYCOND = 2,

  type_Gauge_hs = TYPE_GAUGE_TREE_COTREE
];

//+++
DefineConstant[
  TYPE_JS_CURL_HS = 1,
  TYPE_JS_ELEKIN_VS  = 2,

  type_Js = TYPE_JS_CURL_HS
];


Include "Lib_JacInt.pro";

DefineConstant[
  Nb_DomainS_SF~{iP} = 0, // Number of stranded inductors
  Flag_hsOnlyinDomainS = 1,
  flag_Use_Sigma = 0
];
Function {
  DefineFunction[ js0~{iP} ];
}


Group {
  DefineGroup[ SurfaceGh0~{iP} ];
}

For iInd In { 1:Nb_DomainS_SF~{iP} }
Group {
  DefineGroup[ DomainS_SF~{iInd}~{iP}, SkinDomainS~{iInd}~{iP},
               Domain_SF~{iInd}~{iP}, GateDomainS~{iInd}~{iP} ];
  If (!Flag_hsOnlyinDomainS)
    DefineGroup[ SurfaceCutB~{iInd}~{iP},
                 SkinDomainS2~{iInd}~{iP}, DomainCC2~{iInd}~{iP} ];
  EndIf
}
EndFor

// --------------------------------------------------------------------------

Group {
  For iInd In { 1:Nb_DomainS_SF~{iP} }
    SkinDomainStot~{iInd}~{iP} = Region[ {SurfaceGh0~{iP}} ];
    If (Flag_hsOnlyinDomainS)
      Domain_SF~{iInd}~{iP} = Region[{DomainS_SF~{iInd}~{iP}}];
    Else
      SkinDomainStot~{iInd}~{iP} += Region[ {SkinDomainS~{iInd}~{iP}} ];
      DomainCCmB~{iInd}~{iP} = Region[ {DomainCC2~{iInd}~{iP}, -DomainS_SF~{iInd}~{iP}} ];
      _TransitionLayer_SkinDomainS~{iInd}~{iP} =
        ElementsOf[SkinDomainS2~{iInd}~{iP}, OnOneSideOf SurfaceCutB~{iInd}~{iP}];
    EndIf
  EndFor
}

//+++
Constraint {
  { Name MagneticField_hs;
    Case {
      { Region SurfaceGh0~{iP}; Type Assign; Value 0.; }
    }
  }
}


//
For iInd In {1:Nb_DomainS_SF~{iP}}

Group {
  DomainS_SF_WithSurf~{iInd}~{iP} = Region[{DomainS_SF~{iInd}~{iP}, SkinDomainS~{iInd}~{iP}}];
}


//
If (type_Js == TYPE_JS_CURL_HS)

Constraint {
  { Name GaugeCondition_hs~{iInd}~{iP}; Type Assign;
    Case {
      //+++ + SkinDomainS~{iInd}~{iP}}
      { Region DomainS_SF~{iInd}~{iP}; SubRegion #{SkinDomainStot~{iInd}~{iP}, SkinDomainS~{iInd}~{iP}}; Value 0.; }
    }
  }
}

FunctionSpace {

  // Magnetic field hs (generalized source field)
  { Name Hcurl_hs~{iInd}~{iP}; Type Form1;
    BasisFunction {
     If (Flag_hsOnlyinDomainS)
      { Name se; NameOfCoef he; Function BF_Edge;
        Support DomainS_SF_WithSurf~{iInd}~{iP}; Entity EdgesOf[ All, Not SkinDomainStot~{iInd}~{iP} ]; }
      //+++
      If (flag_Use_Sigma)
       { Name ser; NameOfCoef her; Function BF_Edge;
         Support DomainS_SF_WithSurf~{iInd}~{iP}; Entity EdgesOf[ All, Not SkinDomainS~{iInd}~{iP} ]; }
      EndIf
     Else
      { Name se; NameOfCoef he; Function BF_Edge;
        Support DomainS_SF~{iInd}~{iP}; Entity EdgesOf[ All, Not SkinDomainStot~{iInd}~{iP} ]; }
      { Name sc; NameOfCoef Ic; Function BF_GradGroupOfNodes;
        Support ElementsOf[DomainCCmB~{iInd}~{iP}, OnOneSideOf SurfaceCutB~{iInd}~{iP} ];
        Entity GroupsOfNodesOf[ SurfaceCutB~{iInd}~{iP} ]; }
      { Name sc; NameOfCoef Icc; Function BF_GroupOfEdges;
        Support DomainS_SF~{iInd}~{iP};
        Entity GroupsOfEdgesOf[ SurfaceCutB~{iInd}~{iP},
          InSupport _TransitionLayer_SkinDomainS~{iInd}~{iP} ]; }
     EndIf
    }
    If (!Flag_hsOnlyinDomainS)
      SubSpace {
        { Name BF_Cut; NameOfBasisFunction { sc }; }
      }
      //+++
    Else
     If (!flag_Use_Sigma)
      SubSpace {
        { Name hs; NameOfBasisFunction { se }; }
      }
     Else
      SubSpace {
        { Name hs; NameOfBasisFunction { se }; }
        { Name hr; NameOfBasisFunction { ser }; }

      }
     EndIf
    EndIf

    Constraint {
      { NameOfCoef he; EntityType EdgesOf; NameOfConstraint MagneticField_hs; }

     If (type_Gauge_hs == TYPE_GAUGE_TREE_COTREE)
      { NameOfCoef he;  // Gauge condition
        EntityType EdgesOfTreeIn; EntitySubType StartingOn;
        NameOfConstraint GaugeCondition_hs~{iInd}~{iP}; }
     EndIf

      //+++
     If (flag_Use_Sigma)
      { NameOfCoef her;  // Gauge condition
        EntityType EdgesOfTreeIn; EntitySubType StartingOn;
        NameOfConstraint GaugeCondition_hs~{iInd}~{iP}; }
     EndIf

     If (!Flag_hsOnlyinDomainS)
      { NameOfCoef Icc;
        EntityType GroupsOfNodesOf; NameOfConstraint I_Unit; }
     EndIf
    }
  }
}

//+++
If (type_Gauge_hs == TYPE_GAUGE_ORTHOGONALITYCOND)
FunctionSpace {
  { Name H0_xsi_hs~{iInd}~{iP}; Type Form0;
    BasisFunction {
      { Name s_n; NameOfCoef xsi_n; Function BF_Node;
        Support DomainS_SF~{iInd}~{iP}; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef xsi_n;
        EntityType NodesOf; NameOfConstraint Xsi_hs_Fixed~{iInd}~{iP}; }
    }
  }
}
EndIf


Formulation {
  { Name Magnetostatics_hs~{iP}~{iInd}; Type FemEquation;
    Quantity {
      { Name hs_total; Type Local; NameOfSpace Hcurl_hs~{iInd}~{iP}; }
      { Name hs; Type Local; NameOfSpace Hcurl_hs~{iInd}~{iP} [hs]; }
     If (flag_Use_Sigma)
      { Name hr; Type Local; NameOfSpace Hcurl_hs~{iInd}~{iP} [hr]; }
     EndIf
     If (type_Gauge_hs == TYPE_GAUGE_ORTHOGONALITYCOND)
      { Name xsi; Type Local; NameOfSpace H0_xsi_hs~{iInd}~{iP}; }
     EndIf
    }
    Equation {
      Integral { [ Dof{d hs} , {d hs} ];
                 In Domain_SF~{iInd}~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

     If (1 && Flag_hsOnlyinDomainS)
      Integral { [ Dof{d hs} , {d hs} ];
                 In SkinDomainS~{iInd}~{iP}; Jacobian Sur~{iP}; Integration Gauss_v~{iP}; }
     EndIf

      Integral { [ -js0~{iP}[] , {d hs} ];
                 In DomainS_SF~{iInd}~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      If (type_Gauge_hs == TYPE_GAUGE_ORTHOGONALITYCOND)
        Galerkin { [ Dof{hs} , {d xsi} ]; In Domain_SF~{iInd}~{iP};
                   Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

        Galerkin { [ Dof{d xsi} , {hs} ]; In Domain_SF~{iInd}~{iP};
                   Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
      EndIf

     If (flag_Use_Sigma)
      Integral { [ 1/sigma[] * Dof{d hs_total} , {d hr} ];
                 In DomainS_SF~{iInd}~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }
     EndIf

    }
  }
}


Resolution {
  { Name MagSta_hs~{iP}~{iInd};
    System {
      { Name Sys; NameOfFormulation Magnetostatics_hs~{iP}~{iInd}; }
    }
    Operation {
      Generate[Sys]; Solve[Sys];
      //PostOperation[Map_hs~{iInd}~{iP}];
      //SaveSolution[Sys];
    }
  }
}


PostProcessing {
  { Name MagSta_hs~{iInd}~{iP}; NameOfFormulation Magnetostatics_hs~{iP}~{iInd};
    PostQuantity {
      //+++ Domain to be modified
      { Name hs;
        Value {
          Term { [ {hs_total} ]; In Domain_SF~{iInd}~{iP}; Jacobian Vol~{iP}; }
          Term { [ {hs_total} ]; In SkinDomainS~{iInd}~{iP}; Jacobian Sur~{iP}; }
        }
      }
      { Name js;
        Value {
          Term { [ {d hs_total} ]; In DomainS_SF~{iInd}~{iP}; Jacobian Vol~{iP}; }
          Term { [ {d hs_total} ]; In SkinDomainS~{iInd}~{iP}; Jacobian Sur~{iP}; }
        }
      }
      { Name js0; Value { Term { [ js0~{iP}[] ]       ; In DomainS_SF_WithSurf~{iInd}~{iP}; Jacobian Vol~{iP}; } } }
      { Name jsx; Value { Term { [ CompX[{d hs}] ]; In DomainS_SF~{iInd}~{iP}; Jacobian Vol~{iP}; } } }
      { Name jsy; Value { Term { [ CompY[{d hs}] ]; In DomainS_SF~{iInd}~{iP}; Jacobian Vol~{iP}; } } }
      { Name jsz; Value { Term { [ CompZ[{d hs}] ]; In DomainS_SF~{iInd}~{iP}; Jacobian Vol~{iP}; } } }
      { Name phis; Value { Term { [ {dInv hs} ]   ; In DomainS_SF_WithSurf~{iInd}~{iP}; Jacobian Vol~{iP}; } } }
    }
  }
}

PostOperation Map_hs~{iInd}~{iP} UsingPost MagSta_hs~{iInd}~{iP} {
  //+++ Change res3D/...
  Print[ hs,  OnElementsOf Domain_SF~{iInd}~{iP}, File Sprintf("res3d/hs%g.pos",iInd) ];
  Print[ js,  OnElementsOf DomainS_SF~{iInd}~{iP}, File Sprintf("res3d/js%g.pos",iInd) ];
  Print[ js0, OnElementsOf DomainS_SF~{iInd}~{iP}, File Sprintf("res3d/js0%g.pos",iInd) ];
}

EndIf
// TYPE_JS_CURL_HS


//
If (type_Js == TYPE_JS_ELEKIN_VS)

Constraint {
  { Name EleKin_vs~{iInd}~{iP};
    Case {
      { Region GateRefDomainS~{iInd}~{iP}; Type Assign; Value 0.; }
    }
  }
  { Name I_Unit_vs~{iInd}~{iP};
    Case {
      { Region GateDomainS~{iInd}~{iP}; Type Assign; Value -1.; }
    }
  }
}


FunctionSpace {

  { Name Hgrad_vs~{iInd}~{iP}; Type Form0;
    BasisFunction {
      { Name sn; NameOfCoef vn; Function BF_Node;
        Support DomainS_SF_WithSurf~{iInd}~{iP};
        Entity NodesOf[ All, Not GateDomainS~{iInd}~{iP} ]; }
      { Name sf; NameOfCoef vf; Function BF_GroupOfNodes;
        Support DomainS_SF_WithSurf~{iInd}~{iP};
        Entity GroupsOfNodesOf[ GateDomainS~{iInd}~{iP} ]; }
    }
    GlobalQuantity {
      { Name V; Type AliasOf       ; NameOfCoef vf; }
      { Name I; Type AssociatedWith; NameOfCoef vf; }
    }
    Constraint {
      { NameOfCoef vn; EntityType NodesOf; NameOfConstraint EleKin_vs~{iInd}~{iP}; }
      { NameOfCoef I;
        EntityType GroupsOfNodesOf; NameOfConstraint I_Unit_vs~{iInd}~{iP}; }
    }
  }
}


Formulation {
  { Name EleKin_vs~{iP}~{iInd}; Type FemEquation;
    Quantity {
      { Name vs; Type Local; NameOfSpace Hgrad_vs~{iInd}~{iP}; }
      { Name I; Type Global; NameOfSpace Hgrad_vs~{iInd}~{iP} [I]; }
      { Name V; Type Global; NameOfSpace Hgrad_vs~{iInd}~{iP} [V]; }
    }
    Equation {
      Integral { [ Dof{d vs} , {d vs} ];
                 In Domain_SF~{iInd}~{iP}; Jacobian Vol~{iP}; Integration Gauss_v~{iP}; }

      GlobalTerm { [ Dof{I} , {V} ]; In GateDomainS~{iInd}~{iP}; }
    }
  }
}


Resolution {
  { Name EleKin_vs~{iP}~{iInd};
    System {
      { Name Sys; NameOfFormulation EleKin_vs~{iP}~{iInd}; }
    }
    Operation {
      Generate[Sys]; Solve[Sys];
      //PostOperation[Map_hs~{iInd}~{iP}];
      //SaveSolution[Sys];
    }
  }
}


PostProcessing {
  { Name EleKin_vs~{iInd}~{iP}; NameOfFormulation EleKin_vs~{iP}~{iInd};
    PostQuantity {
      { Name vs;
        Value {
          Term { [ {vs} ]; In Domain_SF~{iInd}~{iP}; Jacobian Vol~{iP}; }
        }
      }
      { Name js;
        Value {
          Term { [ -{d vs} ]; In DomainS_SF~{iInd}~{iP}; Jacobian Vol~{iP}; }
        }
      }
    }
  }
}

PostOperation Map_vs~{iInd}~{iP} UsingPost EleKin_vs~{iInd}~{iP} {
  //+++ Change res3D/...
  Print[ vs,  OnElementsOf DomainS_SF_WithSurf~{iInd}~{iP}, File Sprintf("elekin_vs%g.pos",iInd) ];
  Print[ js,  OnElementsOf DomainS_SF_WithSurf~{iInd}~{iP}, File Sprintf("elekin_js_vs%g.pos",iInd) ];
}

EndIf
// TYPE_JS_ELEKIN_VS


EndFor
//
