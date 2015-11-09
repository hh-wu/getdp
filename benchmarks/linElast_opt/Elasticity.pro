Group {
  DefineGroup[
    Domain,Domain_Force,Domain_Force_Lin,Domain_Force_Sur,
    DomainFunc] ;
}

Function {
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
  //If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology") )
  If (Flag_readV)
    For i In {1:3}
      { Name H_v~{i} ; Type Form0 /*Scalar*/ ; // primal 2D
        BasisFunction {
          { Name sn ; NameOfCoef un ; Function BF_Node ;
            Support Domain; Entity NodesOf[ All ] ; }
        }
        Constraint {
          { NameOfCoef un ; EntityType NodesOf ; NameOfConstraint velocity~{i}; }
        }
      }
    EndFor
  EndIf
  { Name H_u_Mec2D ; Type Vector ; // primal 2D
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ;
        dFunction {BF_NodeX_D12, BF_Zero};
        Support Region[{Domain,Domain_Force}]; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ;
        dFunction {BF_NodeY_D12, BF_Zero};
        Support Region[{Domain,Domain_Force}]; Entity NodesOf[ All ] ; }
      If (Flag_degree2)
        { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ;
          dFunction {BF_NodeX_D12_2E, BF_Zero};
          Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
        { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ;
          dFunction {BF_NodeY_D12_2E, BF_Zero};
          Support Region[{Domain,Domain_Force}]; Entity EdgesOf[ All ] ; }
      EndIf
    }
    Constraint {
      { NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint DisplacementX ; }
      { NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint DisplacementY ; }
      If (Flag_degree2)
        { NameOfCoef uxn2;EntityType EdgesOf;NameOfConstraint DisplacementX ; }
        { NameOfCoef uyn2;EntityType EdgesOf ; NameOfConstraint DisplacementY ; }
      EndIf
    }
  }

  { Name H_ux_Mec ; Type Form0 ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_Node ;
        Support Region[{Domain,Domain_Force}]; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint DisplacementX ; }
    }
  }

  { Name H_uy_Mec ; Type Form0 ;
    BasisFunction {
      { Name syn ; NameOfCoef uyn ; Function BF_Node ;
        Support Region[{Domain,Domain_Force}]; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint DisplacementY ; }
    }
  }

  { Name H_u_Mec3D; Type Vector; //primal 3D
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
}

Formulation{
  If (Flag_2D) // 2D formulation
    { Name u_Mec ; Type FemEquation ;
      Quantity {
        { Name u ; Type Local ; NameOfSpace H_u_Mec2D ;}
        //If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology") )
        If (Flag_readV)
          For i In {1:3}
            { Name v~{i} ; Type Local ; NameOfSpace H_v~{i};}
          EndFor
        EndIf
      }
      Equation {
        Galerkin { [ C[] * Dof{D1 u}, {D1 u}] ;
          In Domain; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ -force_mec[], {u}] ;
          In Domain_Force ; Jacobian SurLinVol; Integration I1; }
        //If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology") )
        If (Flag_readV)
          For i In {1:3}
            Galerkin { [ 0*Dof{v~{i}}, {v~{i}} ] ;
              In Domain; Jacobian Vol ; Integration I1 ; }
          EndFor
        EndIf
      }
    }
    { Name u_Mec_eig ; Type FemEquation ;
      Quantity {
        { Name u ; Type Local ; NameOfSpace H_u_Mec2D ;}
        If (Flag_readV)
          For i In {1:3}
            { Name v~{i} ; Type Local ; NameOfSpace H_v~{i};}
          EndFor
        EndIf
      }
      Equation {
        Galerkin { DtDtDof [ rho[] * Dof{u} , {u} ];
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C[] * Dof{D1 u}, {D1 u}] ;
          In Domain; Jacobian Vol ; Integration I1 ; }

        If (Flag_readV)
          For i In {1:3}
            Galerkin { [ 0*Dof{v~{i}}, {v~{i}} ] ;
              In Domain; Jacobian Vol ; Integration I1 ; }
          EndFor
        EndIf
      }
    }
    { Name u_Mec_Comp ; Type FemEquation ;
      Quantity {
        { Name ux; Type Local ; NameOfSpace H_ux_Mec ;}
        { Name uy; Type Local ; NameOfSpace H_uy_Mec ;}
        If (Flag_readV)
          For i In {1:3}
            { Name v~{i} ; Type Local ; NameOfSpace H_v~{i};}
          EndFor
        EndIf
      }
      Equation {
        Galerkin { [ CompXX[C[]] * CompX[Dof{d ux}], CompX[{d ux}] ] ;
          In Domain; Jacobian Vol ; Integration I1 ; }
        // FIXME: complete...

        Galerkin { [ -CompX[force_mec[]], {ux}] ;
          In Domain_Force ; Jacobian SurLinVol; Integration I1; }
        Galerkin { [ -CompY[force_mec[]], {uy}] ;
          In Domain_Force ; Jacobian SurLinVol; Integration I1; }
        If (Flag_readV)
          For i In {1:3}
            Galerkin { [ 0*Dof{v~{i}}, {v~{i}} ] ;
              In Domain; Jacobian Vol ; Integration I1 ; }
          EndFor
        EndIf
      }
    }
  EndIf
  If (!Flag_2D) // 3D formulation
    { Name u_Mec; Type FemEquation;
      Quantity{
        { Name u; Type Local; NameOfSpace H_u_Mec3D;}
        If (Flag_readV)
          For i In {1:3}
            { Name v~{i} ; Type Local ; NameOfSpace H_v~{i};}
          EndFor
        EndIf
      }
      Equation{
        Galerkin { [ C11[] * Dof{D1 u} , {D1 u} ] ;
          In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C12[] * Dof{D2 u} , {D1 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C21[] * Dof{D1 u} , {D2 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ C22[] * Dof{D2 u} , {D2 u} ] ;
	  In Domain ; Jacobian Vol ; Integration I1 ; }
        Galerkin { [ -force_mec[], {u}] ;
          In Domain_Force ; Jacobian SurLinVol; Integration I1; }

        If (Flag_readV)
          For i In {1:3}
            Galerkin { [ 0*Dof{v~{i}}, {v~{i}} ] ;
              In Domain; Jacobian Vol ; Integration I1 ; }
          EndFor
        EndIf
      }
    }
    { Name u_Mec_eig; Type FemEquation;
      Quantity{
        { Name u; Type Local; NameOfSpace H_u_Mec3D;}
        If (Flag_readV)
          For i In {1:3}
            { Name v~{i} ; Type Local ; NameOfSpace H_v~{i};}
          EndFor
        EndIf
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

        If (Flag_readV)
          For i In {1:3}
            Galerkin { [ 0*Dof{v~{i}}, {v~{i}} ] ;
              In Domain; Jacobian Vol ; Integration I1 ; }
          EndFor
        EndIf
      }
    }
  EndIf
}

Resolution{
  // FIXME
  // group  (direct,adjoint) -> Sens_u_Mec
  // give "u_Mec" as input -> other resolutions depend on "u_Mec"
  // gmsh read directly in command line !!! -> postpro without solve

  // state variable
  { Name u_Mec; // mechanic 2D/3D
    System {
      { Name A; NameOfFormulation u_Mec; }
    }
    Operation{
      CreateDir[ResDir];
      SetGlobalSolverOptions["-petsc_prealloc 20"];
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
      EndIf
      InitSolution[A];Generate[A];Solve[A];
      SaveSolution[A];
      PostOperation[u_Mec];
    }
  }
  { Name u_Mec_eig ; // modal 2D/3D
    System {
      { Name A; NameOfFormulation u_Mec_eig; /*Type Complex;*/ }
    }
    Operation {
      CreateDir[ResDir];
      If(!StrCmp(Flag_optType,"topology"))
        GmshRead[StrCat[ResDir,"designVariable.pos"],DES_VAR_FIELD];
      EndIf
      GenerateSeparate[A];
      EigenSolve[A, nbEig, 0, 0]; SaveSolutions[A] ;
      PostOperation[u_Mec_eig];
    }
  }
}

// Sensitivity analysis
If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology") )
  If (Flag_readV)
    Include "sensitivityElast.pro";
  EndIf
EndIf
