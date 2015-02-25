Include "magnets_data.pro"

Group{
  Domain_M = Region[{}];
  For i In {1:NumMagnets}
    Magnet~{i} = Region[i];
    SkinMagnet~{i} = Region[(100+i)];
    Domain_M += Region[{Magnet~{i}}];
  EndFor
  Air = Region[(NumMagnets + 1)];
  Domain = Region[{Air, Domain_M}];
  Dirichlet_phi_0 = Region[(NumMagnets + 2)];
}

Function{
  mu[] = 4*Pi*1e-7;
  DefineConstant[ HC = {20000, Name "Parameters/Hc"} ];
  For i In {1:NumMagnets}
    hc[Magnet~{i}] = Rotate[Vector[0, HC, 0], Rx~{i}, Ry~{i}, Rz~{i}];
  EndFor
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
  For i In {1:NumMagnets}
    { Name Magnet~{i} ;
      Case {
        { Region SkinMagnet~{i} ; Value 1. ; }
      }
    }
  EndFor
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
  For i In {1:NumMagnets}
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
}

Resolution {
  { Name MagSta_phi ;
    System {
      { Name A ; NameOfFormulation MagSta_phi ; }
    }
    Operation {
      Generate[A] ; Solve[A] ; SaveSolution[A] ;
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
}

DefineConstant[
  R_ = {"MagSta_phi", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -v2 -bin", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"MagSta_phi", Name "GetDP/2PostOperationChoices", Visible 0}
];
