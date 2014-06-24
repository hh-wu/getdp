//========================================================
// GetDP code for simulation of EIGENVALUES PROBLEMS
//   - Helmholtz equation (scalar/vector and 1D/2D/3D)
//   - Nodal/Edge finite-elements (Form0/Form1 for u)
// Contributors: A. Itagi (original version, 2007),
//   B. Kubicek (minor modif), A. Modave (major modif)
//========================================================

Group {
  DefineGroup[ Dom, Bnd, Tot ] ;
}

Jacobian {
  { Name Jac ;
    Case {
      { Region Bnd ; Jacobian Sur ; }
      { Region Dom ; Jacobian Vol ; }
    }
  }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
          { GeoElement Point ; NumberOfPoints  1 ; }
          { GeoElement Line ; NumberOfPoints 4 ; }
          { GeoElement Triangle ; NumberOfPoints 4 ; }
          { GeoElement Quadrangle ; NumberOfPoints 4 ; }
          { GeoElement Tetrahedron ; NumberOfPoints 4 ; }
          { GeoElement Hexahedron ; NumberOfPoints 6 ; }
          { GeoElement Prism ; NumberOfPoints 9 ; }
        }
      }
    }
  }
}

Constraint {
  { Name uConstraint ; Type Assign ;
    Case {
      { Region Bnd ; Value 0. ; }
    }
  }
}

FunctionSpace {
  If (FLAG_FORM==0)
    { Name uSpace ; Type Form0 ;
      BasisFunction {
        { Name sn ; NameOfCoef en ; Function BF_Node ; Support Tot ; Entity NodesOf[All] ; }
      }
      Constraint {
        { NameOfCoef en ; EntityType NodesOf ; NameOfConstraint uConstraint ; }
      }
    }
  EndIf
  If (FLAG_FORM==1)
    { Name uSpace ; Type Form1 ;
      BasisFunction {
        { Name sn ; NameOfCoef en ; Function BF_Edge ; Support Tot ; Entity EdgesOf[All] ; }
      }
      Constraint {
          { NameOfCoef en ; EntityType EdgesOf ; NameOfConstraint uConstraint ; }
      }
    }
  EndIf
  If (FLAG_FORM==10)
    { Name uSpace ; Type Form1P ;
      BasisFunction {
        { Name sn ; NameOfCoef en ; Function BF_PerpendicularEdge ; Support Tot ; Entity NodesOf[All] ; }
      }
      Constraint {
        { NameOfCoef en ; EntityType NodesOf ; NameOfConstraint uConstraint ; }
      }
    }
  EndIf
}

Formulation {
  { Name Form ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace uSpace ; }
    }
    Equation {
      Galerkin { DtDtDof[ Dof{u} , {u} ] ;
                 In Dom ; Integration I1 ; Jacobian Jac ; }
      Galerkin { [ Dof{d u} , {d u} ] ;
                 In Dom ; Integration I1 ; Jacobian Jac ; }
    }
  }
}

Resolution {
   { Name Reso ;
    System {
      { Name A ; NameOfFormulation Form ; Type ComplexValue ; }
    }
    Operation {
      CreateDir["output/"] ;
      GenerateSeparate[A] ; 
      EigenSolve[A,NbEigenvalues,EigenvalShiftRe,EigenvalShiftIm] ;
      SaveSolutions[A] ;
    }
  }
}

PostProcessing {
  { Name PostPro ; NameOfFormulation Form ;
    Quantity {
      { Name u ; Value{ Local{ [{u}] ; In Dom ; Jacobian Jac ; } } }
    }
  }
}

PostOperation {
  { Name PostOp ; NameOfPostProcessing PostPro ;
    Operation {
      For n In {0:(NbEigenvalues-1)}
        Print [ u, OnElementsOf Dom, TimeStep{n}, File StrCat["output/eigenvector",StrCat[Sprintf("%g",n),".pos"]]];
      EndFor
      SendMergeFileRequest[ "main.pro.opt" ] ;
    }
  }
}


DefineConstant[
  R_ = {"Reso", Name "GetDP/1ResolutionChoices", Visible 0},
  P_ = {"PostOp", Name "GetDP/2PostOperationChoices", Visible 0, ReadOnly 1},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0}
] ;

