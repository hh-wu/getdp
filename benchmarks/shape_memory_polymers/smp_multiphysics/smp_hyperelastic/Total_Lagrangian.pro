//=====================================================================

FunctionSpace {
  { Name Hone_u_dummy ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef un ; Function BF_Node ;
        Support Domain_Mecha ; Entity NodesOf[ All ] ; }
    }
    Constraint {
    }
  }
  For i In {1:3}
    { Name H_u~{i} ; Type Form0 ;
      BasisFunction {
        { Name sn~{i} ; NameOfCoef un~{i} ; Function BF_Node ;
          Support Region[{Domain_Mecha, Dirichlet_1, Dirichlet_2}] ; Entity NodesOf[ All ] ; }
        If(Flag_DEGRE2)
          { Name sn2~{i} ; NameOfCoef un2~{i} ; Function BF_Node_2E ;
            Support Domain_Mecha ; Entity EdgesOf[ All ] ; }
        EndIf
      }
      /*
        Constraint {
        { NameOfCoef un~{i} ; EntityType NodesOf ; NameOfConstraint Displacement~{i} ; }
        If(Flag_DEGRE2)
        { NameOfCoef un2~{i} ; EntityType EdgesOf ; NameOfConstraint Displacement0~{i} ; }
        EndIf
        }
      */
    }
  EndFor
  For i In {1:3}
    { Name H_Lambda~{i} ; Type Form0 ;
      BasisFunction {
        { Name ln~{i} ; NameOfCoef ln~{i} ; Function BF_Node ;
          Support Region[{Dirichlet_1, Dirichlet_2}] ; Entity NodesOf[ All ] ; }
        If(Flag_DEGRE2)
          { Name ln2~{i} ; NameOfCoef ln2~{i} ; Function BF_Node_2E ;
            Support Region[{Dirichlet_1, Dirichlet_2}] ; Entity EdgesOf[ All ] ; }
        EndIf
      }
    }
  EndFor
}

Include "smp_stent_setInternalVariables.pro";

Formulation {
  { Name Total_Lagrangian ; Type FemEquation ;
    Quantity {
      For i In {1:3}
        { Name u~{i}  ; Type Local ; NameOfSpace H_u~{i} ; }
        { Name lambda~{i}  ; Type Local ; NameOfSpace H_Lambda~{i} ; }
      EndFor
    }
    Equation {
      If(Flag_Dynamic)
        For i In {1:3}
          Galerkin { DtDtDof [ rho[] * Dof{u~{i}} , {u~{i}} ];
            In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }
        EndFor
      EndIf

      // The right-hand side
      //===================
      For i In {1:3}
        Galerkin { [ P_i~{i}[ (TensorDiag[1., 1., 1.] + Transpose[TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ] ) ] , {d u~{i}} ] ;
          In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      EndFor

      // The stiffness matrix (involves the material stiffness + the geometrical stiffness)
      //===================================================================================
      For i In {1:3}
        For j In {1:3}
          Galerkin { [ C_Tot~{j}~{i}[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] * Dof{d u~{i}}, {d u~{j}} ] ;
            In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }
          Galerkin { [ -C_Tot~{j}~{i}[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] * {d u~{i}}, {d u~{j}} ] ;
            In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }
          
          Galerkin{[Dof{lambda~{i}}, {u~{j}}];
            In Dirichlet_1; Jacobian JSur; Integration GradGrad;}
          Galerkin{[Dof{u~{i}}, {lambda~{j}}];
            In Dirichlet_1; Jacobian JSur; Integration GradGrad;}
          Galerkin{[-u_Dirichlet_Static[]~{i}, {lambda~{j}}];
            In Dirichlet_1; Jacobian JSur; Integration GradGrad;}

          Galerkin{[$var_u_Dirichlet_Dynamic * Dof{lambda~{i}}, {u~{j}}];
            In Dirichlet_2; Jacobian JSur; Integration GradGrad;}
          Galerkin{[$var_u_Dirichlet_Dynamic * Dof{u~{i}}, {lambda~{j}}];
            In Dirichlet_2; Jacobian JSur; Integration GradGrad;}
          Galerkin{[-$var_u_Dirichlet_Dynamic * u_Dirichlet_Dynamic[]~{i}, {lambda~{j}}];
            In Dirichlet_2; Jacobian JSur; Integration GradGrad;}

        EndFor
      EndFor

      If(Flag_ExternalForce)
        Galerkin { [ - CompX[ -force_ext[] ] , {u~{1}} ] ;
          In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
        Galerkin { [ - CompY[ -force_ext[] ] , {u~{2}} ] ;
          In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
        Galerkin { [ - CompZ[ -force_ext[] ] , {u~{3}} ] ;
          In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      EndIf
    }
  }
}

PostProcessing {
  { Name Total_Lagrangian ; NameOfFormulation Total_Lagrangian ;
    NameOfSystem Sys_Mec;
    PostQuantity {
      { Name u ; Value { Term { [ Vector[ {u~{1}}, {u~{2}}, {u~{3}} ]];
	    In Domain_Mecha ; Jacobian Vol ; } } }
      { Name um ; Value { Term { [ Norm[ Vector[ {u~{1}}, {u~{2}}, {u~{3}} ] ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name ux  ; Value { Term { [ {u~{1}} ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name uy  ; Value { Term { [ {u~{2}} ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name uz  ; Value { Term { [ {u~{3}} ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name PK2  ; Value { Term { [ PK2[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
    }
  }
}
