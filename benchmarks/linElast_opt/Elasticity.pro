Group {
  DefineGroup[
    Domain,Domain_Force,Domain_Force_Lin,Domain_Force_Sur,
    DomainFunc] ;
}

Jacobian {
  { Name Vol; Case {{ Region All; Jacobian Vol; }}}
  { Name Sur; Case {{ Region All; Jacobian Sur; }}}
  { Name Lin; Case { { Region All; Jacobian Lin; }}}
  { Name SurLinVol ;
    Case {
      { Region Domain_Force_Sur ; Jacobian Sur ; }
      { Region Domain_Force_Lin ; Jacobian Lin ; }
      { Region All ; Jacobian Vol ; }
    }
  }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
//	Case {
//	  { GeoElement Point       ; NumberOfPoints  1 ; }
//	  { GeoElement Line        ; NumberOfPoints  1 ; }
//	  { GeoElement Triangle    ; NumberOfPoints  1 ; }
//	  { GeoElement Quadrangle  ; NumberOfPoints  1 ; }
//	  { GeoElement Tetrahedron ; NumberOfPoints  1; }
//          { GeoElement Hexahedron  ; NumberOfPoints  1 ; }
//	  { GeoElement Prism       ; NumberOfPoints  1 ; }
//        }
	Case {
	  { GeoElement Point       ; NumberOfPoints  1 ; }
	  { GeoElement Line        ; NumberOfPoints  4 ; }
	  { GeoElement Triangle    ; NumberOfPoints  7 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
	  { GeoElement Tetrahedron ; NumberOfPoints  16; }
          { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
	  { GeoElement Prism       ; NumberOfPoints  9 ; }
        }
     }
   }
 }
}

FunctionSpace{

  { Name H_xe; Type Form3 ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_Volume ;
        Support Region[{Domain}]; Entity VolumesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef uxn; EntityType VolumesOf; NameOfConstraint constr_xe; }
    }
  }

  If (Flag_2D) // 2D 
    { Name H_u ; Type Vector ; // primal 2D
      BasisFunction {
        { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ;
          dFunction {BF_NodeX_D12, BF_Zero};
          Support Region[{Domain,Domain_Force}]; 
          Entity NodesOf[ All ] ; }
        { Name syn ; NameOfCoef uyn ; Function BF_NodeY ;
          dFunction {BF_NodeY_D12, BF_Zero};
          Support Region[{Domain,Domain_Force}]; 
          Entity NodesOf[ All ] ; }
        If (Flag_degree2)
          { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ;
            dFunction {BF_NodeX_D12_2E, BF_Zero};
            Support Region[{Domain,Domain_Force}]; 
            Entity EdgesOf[ All ] ; }
          { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ;
            dFunction {BF_NodeY_D12_2E, BF_Zero};
            Support Region[{Domain,Domain_Force}]; 
            Entity EdgesOf[ All ] ; }
        EndIf
      }
      Constraint {
        { NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint DisplacementX ; }
        { NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint DisplacementY ; }
        If (Flag_degree2)
          { NameOfCoef uxn2;EntityType EdgesOf; NameOfConstraint DisplacementX ; }
          { NameOfCoef uyn2;EntityType EdgesOf; NameOfConstraint DisplacementY ; }
        EndIf
      }
    }
  Else // 3D
    { Name H_u; Type Vector; //primal 3D
      BasisFunction{
        { Name sxn; NameOfCoef uxn; Function BF_NodeX;
	  Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name syn; NameOfCoef uyn; Function BF_NodeY;
	  Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        { Name szn; NameOfCoef uzn; Function BF_NodeZ;
	  Support Region[{Domain,Domain_Force}]; Entity NodesOf[All];}
        If (Flag_degree2)
          { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ;
            Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
          { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ;
            Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
          { Name szn2 ; NameOfCoef uzn2 ; Function BF_NodeZ_2E ;
            Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
        EndIf
      }
      Constraint{
        { NameOfCoef uxn; EntityType NodesOf; NameOfConstraint DisplacementX;}
        { NameOfCoef uyn; EntityType NodesOf; NameOfConstraint DisplacementY;}
        { NameOfCoef uzn; EntityType NodesOf; NameOfConstraint DisplacementZ;}
        If (Flag_degree2)
          { NameOfCoef uxn2; EntityType EdgesOf; NameOfConstraint DisplacementX ; }
          { NameOfCoef uyn2; EntityType EdgesOf; NameOfConstraint DisplacementY ; }
          { NameOfCoef uzn2; EntityType EdgesOf; NameOfConstraint DisplacementZ ; }
        EndIf
      }
    }
  EndIf

}

Formulation{
  If (Flag_2D) // 2D formulation
    { Name u_Mec ; Type FemEquation ;
      Quantity {
        { Name u ; Type Local ; NameOfSpace H_u;}
        { Name xe ; Type Local ; NameOfSpace H_xe;}
      }
      Equation {
        Galerkin { [ C[{xe}] * Dof{D1 u}, {D1 u}] ;
          In Domain; Jacobian Vol ; Integration I1 ; }

        Galerkin { [ -force_mec[], {u}];
          In Domain_Force ; Jacobian SurLinVol; Integration I1; }
 
        Galerkin { [ 0*Dof{xe}, {xe} ] ;
          In Domain; Jacobian Vol ; Integration I1 ; }
      }
    }

    { Name u_Mec_eig ; Type FemEquation ;
      Quantity {
        { Name u ; Type Local ; NameOfSpace H_u ;}
        { Name xe ; Type Local ; NameOfSpace H_xe;}
      }
      Equation {
        Galerkin { DtDtDof [ rho[] * Dof{u} , {u} ];
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C[] * Dof{D1 u}, {D1 u}] ;
          In Domain; Jacobian Vol ; Integration I1 ; }

        Galerkin { [ 0*Dof{xe}, {xe} ] ;
          In Domain; Jacobian Vol ; Integration I1 ; }
      }
    }

  Else // 3D formulation

    { Name u_Mec; Type FemEquation;
      Quantity{
        { Name u; Type Local; NameOfSpace H_u;}
        { Name xe ; Type Local ; NameOfSpace H_xe;}
      }
      Equation{
        Galerkin { [ C11[{xe}] * Dof{D1 u} , {D1 u} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C12[{xe}] * Dof{D2 u} , {D1 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C21[{xe}] * Dof{D1 u} , {D2 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C22[{xe}] * Dof{D2 u} , {D2 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ -force_mec[], {u}] ;
          In Domain_Force ; Jacobian SurLinVol; Integration I1; }

        Galerkin { [ 0*Dof{xe}, {xe} ] ;
          In Domain; Jacobian Vol ; Integration I1 ; }
      }
    }

    { Name u_Mec_eig; Type FemEquation;
      Quantity{
        { Name u; Type Local; NameOfSpace H_u;}
        { Name xe ; Type Local ; NameOfSpace H_xe;}
      }
      Equation{
        Galerkin { DtDtDof [ rho[] * Dof{u} , {u} ];
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C11[] * Dof{D1 u} , {D1 u} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C12[] * Dof{D2 u} , {D1 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C21[] * Dof{D1 u} , {D2 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C22[] * Dof{D2 u} , {D2 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ 0*Dof{xe}, {xe} ] ;
          In Domain; Jacobian Vol ; Integration I1 ; }
      }
    }
  EndIf

}

Resolution{
  { Name u_Mec; 
    System {
      { Name A; NameOfFormulation u_Mec; }
    }
    Operation{
      CreateDir[ResDir];
      SetGlobalSolverOptions["-petsc_prealloc 2500"];
      
      // load density variables 
      If(!StrCmp(Flag_optType,"topology") && !Flag_projFuncSpace_xe)
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
      EndIf
      
      // solve linear elastic problem
      InitSolution[A];Generate[A];Solve[A];SaveSolution[A];

      // do some post operations
      If(!StrCmp(Flag_optType,"topology"))
        PostOperation[u_TO];
      Else
        PostOperation[u_Mec];
      EndIf
    }
  }

  { Name u_Mec_eig; 
    System {
      { Name A; NameOfFormulation u_Mec_eig; /*Type Complex;*/ }
    }
    Operation {
      CreateDir[ResDir];
      If(!StrCmp(Flag_optType,"topology") && !Flag_projFuncSpace_xe)
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
      EndIf
      SetGlobalSolverOptions["-petsc_prealloc 2000"];
      GenerateSeparate[A];
      EigenSolve[A, nbEig, 0, 0]; SaveSolutions[A] ;
      PostOperation[u_Mec_eig];
    }
  }
}

// Sensitivity analysis
If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology") )
  Include "sensitivityElast.pro";
EndIf


