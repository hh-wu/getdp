Include "laplace_data.geo";

//Problem:
// - Delta u = f (Omega)
//         u = 0 (partial Omega)


DefineConstant[ // allows to set these from outside
];

Function {
  I[] = Complex[0, 1];
  //Source
  f[] = Pi*Pi*(1/dx/dx + 1/dy/dy)*Sin[Pi*X[]/dx]*Sin[Pi*Y[]/dy];
  //Reference Solution 
  uex[] = Sin[Pi*X[]/dx]*Sin[Pi*Y[]/dy];
}

Group{
  Omega~{0} = Region[(100)];
  Omega~{1} = Region[(101)];
  Overlap = Region[(102)];
  //Dirichlet boundaries
  GammaD~{0} = Region[{200, 202}];
  GammaD~{1} = Region[{201, 202}];
  //Transmission boundaries
  Sigma~{0} = Region[(01)]; // 1 -> 2
  Sigma~{1} = Region[(10)]; // 2 
}

// Decomposition
Function{
  D = {0,1};
  D~{0} = {1};
  D~{1} = {0};
  myD = {} ; // the domains that I'm in charge of
  ListOfFields = {};
  ListOfConnectedFields = {};
    
  For idom In {0:N_DOM-1}
    myD~{idom} = {};
    If (idom % MPI_Size == MPI_Rank)
      myD() += D(idom);
      myD~{idom} += D~{idom}();
    EndIf
  EndFor
  
  //ListOfConnectedFields : not done (not required ?)
}


Jacobian {
  { Name JVol; Case{ { Region All; Jacobian Vol; } } }
  { Name JSur; Case { { Region All; Jacobian Sur; } } }
  { Name JLin; Case { { Region All; Jacobian Lin; } } }
}

Integration {
  { Name I1;
    Case {
      { Type Gauss;
        Case {
          { GeoElement Point; NumberOfPoints  1; }
          { GeoElement Line; NumberOfPoints  2; }
          { GeoElement Triangle; NumberOfPoints 3; }
          { GeoElement Quadrangle; NumberOfPoints 4; }
          { GeoElement Tetrahedron; NumberOfPoints 4; }
          { GeoElement Hexahedron; NumberOfPoints 6; }
          { GeoElement Prism; NumberOfPoints 9; }
        }
      }
    }
  }
}


Constraint{
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Dirichlet_u0~{i};
      Case {
	{ Region GammaD~{i}; Value  0.; }
      }
    }
    // Required ? (dirichlet condition from schwarz)
    /*    { Name Dirichlet_u~{i};
      Case {
	{ Region Sigma~{i}; Value  ??; }
      }
    }
    */
  EndFor
}

FunctionSpace {
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Hgrad_u~{i}; Type Form0;
      BasisFunction {
        { Name sn; NameOfCoef un; Function BF_Node;
	  Support Region[ {Omega~{i}, Sigma~{i}, GammaD~{i}} ];
          Entity NodesOf[ All ];
        }
      }
      Constraint {
        { NameOfCoef un; EntityType NodesOf; NameOfConstraint Dirichlet_u0~{i}; }
      }
    }
  EndFor
}

Formulation {
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Vol~{i}; Type FemEquation;
      Quantity {
        { Name u~{i}; Type Local; NameOfSpace Hgrad_u~{i}; }
      }
      Equation {
        // volume terms (D[] = E[] = 1 outside PMLs)
        Galerkin { [ Dof{d u~{i}}, {d u~{i}} ];
          In Omega~{i}; Jacobian JVol; Integration I1; }
        Galerkin { [ - f[], {u~{i}} ];
          In Omega~{i}; Jacobian JVol; Integration I1; }
      }
    }
  EndFor // loop on i
}

PostProcessing {
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name Vol~{i}; NameOfFormulation Vol~{i};
      PostQuantity {
        { Name u~{i}; Value { Local { [ {u~{i}} ];
              In Omega~{i}; Jacobian JVol; } } }
      }
    }
  EndFor
}

PostOperation {
  For ii In {0: #myD()-1}
    i = myD(ii);
    { Name DDM~{i}; NameOfPostProcessing Vol~{i};
      Operation {
        Print[ u~{i}, OnElementsOf Omega~{i},
          File StrCat(DIR, Sprintf("u_%g.pos",i))];
      }
    }
  EndFor
}

Include "laplace_full.pro";
Include "HPDDM.pro" ;
