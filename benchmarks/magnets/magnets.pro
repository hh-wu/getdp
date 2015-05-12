// include parameters common to geometry and solver
Include "magnets_data.pro"

DefineConstant[
  Flag_Analysis = {0,
    Choices { 0 = "H-formulation", 1 = "A-formulation"},
    Name "Parameters/0Formulation" }
];

Group{
  Domain_M = Region[{}];
  For i In {1:NumMagnets}
    Magnet~{i} = Region[i]; // volume of magnet i
    SkinMagnet~{i} = Region[(100+i)]; // boundary of magnet i
    Domain_M += Region[Magnet~{i}]; // all the magnet volumes
  EndFor
  Air = Region[(NumMagnets + 1)];
  Domain = Region[{Air, Domain_M}];
  Dirichlet_phi_0 = Region[(NumMagnets + 2)]; // boundary of air box
  Dirichlet_a_0 = Region[(NumMagnets + 2)]; // boundary of air box
}

Function{
  mu0 = 4*Pi*1e-7;
  mu[] = mu0;
  nu[] = 1.0/mu[];

  For i In {1:NumMagnets}
    // coercive field of magnets
    DefineConstant[
      HC~{i} = {800e3,
        Name Sprintf("Parameters/Magnet %g/0Coercive magnetic field [Am^-1]", i)},
      BR~{i} = {mu0 * HC~{i},
        Name Sprintf("Parameters/Magnet %g/0Remnant magnetic flux density [T]", i),
        ReadOnly 1}
    ];
    hc[Magnet~{i}] = Rotate[Vector[0, HC~{i}, 0], Rx~{i}, Ry~{i}, Rz~{i}];
    br[Magnet~{i}] = Rotate[Vector[0, BR~{i}, 0], Rx~{i}, Ry~{i}, Rz~{i}];
  EndFor

  // Maxwell stress tensor
  TM[] = ( SquDyadicProduct[$1] - SquNorm[$1] * TensorDiag[0.5, 0.5, 0.5] ) / mu[] ;
}

Jacobian {
  { Name JVol ;
    Case {
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
          { GeoElement Tetrahedron  ; NumberOfPoints 4 ; }
	}
      }
    }
  }
}

Constraint {
  { Name phi ;
    Case {
      { Region Dirichlet_phi_0 ; Value 0. ; }
    }
  }
  { Name a ;
    Case {
      { Region Dirichlet_a_0 ; Value 0. ; }
    }
  }
  { Name GaugeCondition_a ; Type Assign ;
    Case {
      { Region Domain ; SubRegion Dirichlet_a_0 ; Value 0. ; }
    }
  }
  For i In {1:NumMagnets}
    { Name Magnet~{i} ;
      Case {
        { Region SkinMagnet~{i} ; Value 1. ; }
      }
    }
  EndFor
}

FunctionSpace {
  // scalar magnetic potential
  { Name Hgrad_phi ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef phin ; Function BF_Node ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef phin ; EntityType NodesOf ; NameOfConstraint phi ; }
    }
  }
  // vector magnetic potential
  { Name Hcurl_a; Type Form1;
    BasisFunction {
      { Name se;  NameOfCoef ae;  Function BF_Edge; Support Domain ;
        Entity EdgesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a; }
      { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
        NameOfConstraint GaugeCondition_a ; }
    }
  }
  For i In {1:NumMagnets}
    // auxiliary field on layer of elements touching each magnet, for the
    // accurate integration of the Maxwell stress tensor (using the gradient of
    // this field)
    { Name Magnet~{i} ; Type Form0 ;
      BasisFunction {
        { Name sn ; NameOfCoef un ; Function BF_GroupOfNodes ;
          Support Air ; Entity GroupsOfNodesOf[ SkinMagnet~{i} ] ; }
      }
      Constraint {
        { NameOfCoef un ; EntityType GroupsOfNodesOf ; NameOfConstraint Magnet~{i} ; }
      }
    }
  EndFor
}

Formulation {
  { Name MagSta_phi ; Type FemEquation ;
    Quantity {
      { Name phi ; Type Local ; NameOfSpace Hgrad_phi ; }
      For i In {1:NumMagnets}
        { Name un~{i} ; Type Local ; NameOfSpace Magnet~{i} ; }
      EndFor
    }
    Equation {
      Galerkin { [ - mu[] * Dof{d phi} , {d phi} ] ;
        In Domain ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ - mu[] * hc[] , {d phi} ] ;
        In Domain_M ; Jacobian JVol ; Integration I1 ; }
      For i In {1:NumMagnets} // dummy term to define dofs for fully fixed space
        Galerkin { [ 0 * Dof{un~{i}} , {un~{i}} ] ;
          In Domain ; Jacobian JVol ; Integration I1 ; }
      EndFor
    }
  }
  { Name MagSta_a; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
      For i In {1:NumMagnets}
        { Name un~{i} ; Type Local ; NameOfSpace Magnet~{i} ; }
      EndFor
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a} , {d a} ] ;
        In Domain ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ nu[] * br[] , {d a} ] ;
        In Domain_M ; Jacobian JVol ; Integration I1 ; }
      For i In {1:NumMagnets} // dummy term to define dofs for fully fixed space
        Galerkin { [ 0 * Dof{un~{i}} , {un~{i}} ] ;
          In Domain ; Jacobian JVol ; Integration I1 ; }
      EndFor
    }
  }
}

Resolution {
  { Name MagSta_phi ;
    System {
      { Name A ; NameOfFormulation MagSta_phi ; }
    }
    Operation {
      Generate[A] ; Solve[A] ; SaveSolution[A] ;
      PostOperation[MagSta_phi] ;
    }
  }
  { Name MagSta_a ;
    System {
      { Name A ; NameOfFormulation MagSta_a ; }
    }
    Operation {
      Generate[A] ; Solve[A] ; SaveSolution[A] ;
      PostOperation[MagSta_a] ;
    }
  }
  { Name Analysis ;
    System {
      If(Flag_Analysis == 0)
        { Name A ; NameOfFormulation MagSta_phi ; }
      EndIf
      If(Flag_Analysis == 1)
        { Name A ; NameOfFormulation MagSta_a ; }
      EndIf
    }
    Operation {
      Generate[A] ; Solve[A] ; SaveSolution[A] ;
      If(Flag_Analysis == 0)
        PostOperation[MagSta_phi] ;
      EndIf
      If(Flag_Analysis == 1)
        PostOperation[MagSta_a] ;
      EndIf
    }
  }
}

PostProcessing {
  { Name MagSta_phi ; NameOfFormulation MagSta_phi ;
    Quantity {
      { Name b   ; Value { Local { [ - mu[] * {d phi} ] ; In Domain ; Jacobian JVol ; }
                           Local { [ - mu[] * hc[] ]    ; In Domain_M ; Jacobian JVol ; } } }
      { Name h   ; Value { Local { [ - {d phi} ]        ; In Domain ; Jacobian JVol ; } } }
      { Name hc  ; Value { Local { [ hc[] ]             ; In Domain_M ; Jacobian JVol ; } } }
      { Name phi ; Value { Local { [ {phi} ]            ; In Domain ; Jacobian JVol ; } } }
      For i In {1:NumMagnets}
        { Name un~{i} ; Value { Local { [ {un~{i}} ] ; In Domain ; Jacobian JVol ; } } }
        { Name f~{i} ; Value { Integral { [ - TM[-mu[] * {d phi}] * {d un~{i}} ] ;
              In Air ; Jacobian JVol ; Integration I1 ; } } }
        { Name fx~{i} ; Value { Integral { [ CompX[- TM[-mu[] * {d phi}] * {d un~{i}} ] ] ;
              In Air ; Jacobian JVol ; Integration I1 ; } } }
        { Name fy~{i} ; Value { Integral { [ CompY[- TM[-mu[] * {d phi}] * {d un~{i}} ] ] ;
              In Air ; Jacobian JVol ; Integration I1 ; } } }
        { Name fz~{i} ; Value { Integral { [ CompZ[- TM[-mu[] * {d phi}] * {d un~{i}} ] ] ;
              In Air ; Jacobian JVol ; Integration I1 ; } } }
      EndFor
    }
  }
  { Name MagSta_a ; NameOfFormulation MagSta_a ;
    PostQuantity {
      { Name b ; Value { Local { [ {d a} ]; In Domain ; Jacobian JVol; } } }
      { Name a ; Value { Local { [ {a} ]; In Domain ; Jacobian JVol; } } }
      { Name br ; Value { Local { [ br[] ]; In Domain_M ; Jacobian JVol; } } }
      For i In {1:NumMagnets}
        { Name un~{i} ; Value { Local { [ {un~{i}} ] ; In Domain ; Jacobian JVol ; } } }
        { Name f~{i} ; Value { Integral { [ - TM[{d a}] * {d un~{i}} ] ;
              In Air ; Jacobian JVol ; Integration I1 ; } } }
        { Name fx~{i} ; Value { Integral { [ CompX[- TM[{d a}] * {d un~{i}} ] ] ;
              In Air ; Jacobian JVol ; Integration I1 ; } } }
        { Name fy~{i} ; Value { Integral { [ CompY[- TM[{d a}] * {d un~{i}} ] ] ;
              In Air ; Jacobian JVol ; Integration I1 ; } } }
        { Name fz~{i} ; Value { Integral { [ CompZ[- TM[{d a}] * {d un~{i}} ] ] ;
              In Air ; Jacobian JVol ; Integration I1 ; } } }
      EndFor
    }
  }
}

PostOperation {
  { Name MagSta_phi ; NameOfPostProcessing MagSta_phi;
    Operation {
      Print[ b, OnElementsOf Domain, File "b.pos" ] ;
      //Print[ h, OnElementsOf Domain, File "h.pos" ] ;
      //Print[ hc, OnElementsOf Domain, File "hc.pos" ] ;
      For i In {1:NumMagnets}
        //Print[ un~{i}, OnElementsOf Domain, File "un.pos"  ];
        Print[ f~{i}[Air], OnGlobal, Format Table, File > "F.dat"  ];
        Print[ fx~{i}[Air], OnGlobal, Format Table, File > "Fx.dat",
          SendToServer Sprintf("Output/Magnet %g/X force [N]", i), Color "Ivory"  ];
        Print[ fy~{i}[Air], OnGlobal, Format Table, File > "Fy.dat",
          SendToServer Sprintf("Output/Magnet %g/Y force [N]", i), Color "Ivory"  ];
        Print[ fz~{i}[Air], OnGlobal, Format Table, File > "Fz.dat",
          SendToServer Sprintf("Output/Magnet %g/Z force [N]", i), Color "Ivory"  ];
      EndFor
    }
  }
  { Name MagSta_a ; NameOfPostProcessing MagSta_a ;
    Operation {
      Print[ b,  OnElementsOf Domain,  File "b.pos" ];
      //Print[ br,  OnElementsOf Domain_M,  File "br.pos" ];
      //Print[ a,  OnElementsOf Domain,  File "a.pos" ];
      For i In {1:NumMagnets}
        //Print[ un~{i}, OnElementsOf Domain, File "un.pos"  ];
        Print[ f~{i}[Air], OnGlobal, Format Table, File > "F.dat"  ];
        Print[ fx~{i}[Air], OnGlobal, Format Table, File > "Fx.dat",
          SendToServer Sprintf("Output/Magnet %g/X force [N]", i), Color "Ivory"  ];
        Print[ fy~{i}[Air], OnGlobal, Format Table, File > "Fy.dat",
          SendToServer Sprintf("Output/Magnet %g/Y force [N]", i), Color "Ivory"  ];
        Print[ fz~{i}[Air], OnGlobal, Format Table, File > "Fz.dat",
          SendToServer Sprintf("Output/Magnet %g/Z force [N]", i), Color "Ivory"  ];
      EndFor
    }
  }
}

DefineConstant[
  // preset all getdp options and make them invisible
  R_ = {"Analysis", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v 5 -v2 -bin", Name "GetDP/9ComputeCommand", Visible 0}
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];
