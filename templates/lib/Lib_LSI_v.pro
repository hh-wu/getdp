/*
  LSI_v
    LeastSquareInterpolation - Scalar field v formulation
*/

/* I N P U T
   ---------

   Entries between [] will be added/defined later

  GlobalGroup :
  -----------
    Domain               Whole domain where projection is to be done

  Function :
  --------
    v_ref[]                  Function to be projected in finite element space

  Constraint :
  ----------
    None

  Constants :
  ---------
    None

  Physical constants :
  ------------------
*/

/* O U T P U T
   -----------

  PostQuantities :
  --------------
   v : Scalar field

*/


DefineConstant[ iP = 1 ];

DefineConstant[ Process_Lib~{iP} = 1 ];


// INIT

DefineConstant[ ResDir = "Res/" ];

DefineConstant[ Flag_SP = 0 ];


/////
Macro Str[BaseFileName]

Printf(StrCat["Call ", BaseFileName, " (iP=%g)"], iP);

DefineConstant[
  DimPro~{iP} = 2,
  FE_Degree~{iP} = 1
];

//
// Global Groups, Functions and Constants
Group {
  DefineGroup[ Domain~{iP} ];
}

Function {
  DefineFunction[v_ref~{iP}];
}

//
Include "Lib_JacInt.pro";


FunctionSpace {
  {
    Name H_v~{iP}; Type Form0;

    BasisFunction {
      // Interpolation:
      //   v(x) = v_n * s_n(x) ,  for all Nodes n of domain
      {
        Name s_n; NameOfCoef v_n; Function BF_Node;
        Support Domain~{iP}; Entity NodesOf[All];
      }
    }
    Constraint {
      // No boundary condition needed
    }

  }
}


Formulation {
  {
    Name LSI_v~{iP}; Type FemEquation;
    Quantity {
      { Name v; Type Local; NameOfSpace H_v~{iP}; }
    }
    Equation {
      Galerkin { [ Dof{v} , {v} ];
                 In Domain~{iP}; Integration Gauss_v~{iP}; Jacobian Vol~{iP}; }
      Galerkin { [ - v_ref~{iP}[] , {v} ];
                 In Domain~{iP}; Integration Gauss_v~{iP}; Jacobian Vol~{iP}; }
    }
  }
}

Resolution {
  { Name LSI_v~{iP};
    System {
      { Name Sys; NameOfFormulation LSI_v~{iP}; }
    }
    Operation {
      CreateDir[ResDir];
      Generate Sys; Solve Sys; SaveSolution Sys;
    }
  }
}

PostProcessing {
  { Name LSI_v~{iP}; NameOfFormulation LSI_v~{iP};
    PostQuantity {
      { Name v; Value { Term { [ {v} ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }
      { Name v_ref; Value { Term { [ v_ref~{iP}[] ]; In Domain~{iP}; Jacobian Vol~{iP}; } } }
    }
  }
}



//
If (FE_Degree~{iP} == 2)
FunctionSpace {
  {
    Append;
    Name H_v~{iP}; Type Form0;

    BasisFunction {
      // Hierarchical higher order finite element: adding basis functions s_e
      //   ... + v_e * s_e(x) ,  for all Edges e of domain
      {
        Name s_e; NameOfCoef v_e; Function BF_Node_2E;
        Support Domain~{iP}; Entity EdgesOf[All];
      }
    }
    Constraint {
      // No boundary condition needed
    }

  }
}
EndIf


Return
//////

//
CallTest(Process_Lib~{iP}) Str[BaseFileName];
