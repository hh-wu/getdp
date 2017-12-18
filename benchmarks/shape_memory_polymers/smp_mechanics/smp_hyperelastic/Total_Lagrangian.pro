//=====================================================================

FunctionSpace {
  For i In {1:3}
    { Name H_u~{i} ; Type Form0 ;
      BasisFunction {
        { Name sn~{i} ; NameOfCoef un~{i} ; Function BF_Node ;
          Support Region[ { Domain_Mecha, Dirichlet_1, Dirichlet_2} ] ; Entity NodesOf[ All ] ; }
      }
      Constraint{ }
    }
    { Name H_Lambda~{i} ; Type Form0 ;
      BasisFunction {
        { Name ln~{i} ; NameOfCoef lambda_n~{i} ; Function BF_Node ;
          Support Region[ { Dirichlet_1, Dirichlet_2} ] ; Entity NodesOf[ All ] ; }
      }
    }
  EndFor    
}

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
          Galerkin { DtDof [ Const_Damping * C_Damping[] * Dof{u~{i}} , {u~{i}} ];
            In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }

        EndFor
      EndIf

      // The right-hand side
      //===================
      For i In {1:3}
        Galerkin { [ P~{i}[ (TensorDiag[1., 1., 1.] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] , {d u~{i}} ] ;
          In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
        For j In {1:3}          
          Galerkin { [ C_Tot~{j}~{i}[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] * Dof{d u~{i}}, {d u~{j}} ] ;
            In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }
          Galerkin { [-C_Tot~{j}~{i}[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] * {d u~{i}}, {d u~{j}} ] ;
            In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }
        EndFor
      EndFor

      For i In {1:3}
        If(Flag_LagrangeMultiplier)
          Galerkin{ [ Dof{lambda~{i}}, {u~{i} } ];
            In Dirichlet_1 ; Jacobian JLin ; Integration GradGrad ; }
          Galerkin{ [ Dof{u~{i}}, {lambda~{i} } ];
            In Dirichlet_1 ; Jacobian JLin ; Integration GradGrad ; }
          Galerkin{ [ -u_Dirichlet_Static~{i}[], {lambda~{i} } ] ;
            In Dirichlet_1 ; Jacobian JLin ; Integration GradGrad ; }
        EndIf            
      EndFor
      If(Flag_LagrangeMultiplier)
        Galerkin{ [ Dof{lambda_1}, {u_1} ] ;
          In Dirichlet_2 ; Jacobian JSur ; Integration GradGrad ; }
        Galerkin{ [ Dof{u_1}, {lambda_1 } ] ;
          In Dirichlet_2 ; Jacobian JSur ; Integration GradGrad ; }
        Galerkin{ [ -u_Dirichlet_Dynamic_1[], {lambda_1 } ] ;
          In Dirichlet_2 ; Jacobian JSur ; Integration GradGrad ; }
        
        Galerkin{ [ $var_Dirichlet_Dynamic * Dof{lambda_2}, {u_2} ] ;
          In Dirichlet_2 ; Jacobian JSur ; Integration GradGrad ; }
        Galerkin{ [ $var_Dirichlet_Dynamic * Dof{u_2}, {lambda_2} ] ;
          In Dirichlet_2 ; Jacobian JSur ; Integration GradGrad ; }
        Galerkin{ [ -$var_Dirichlet_Dynamic * u_Dirichlet_Dynamic_2[], {lambda_2} ] ;
          In Dirichlet_2 ; Jacobian JSur ; Integration GradGrad ; }
        Galerkin{ [ (1.0 - $var_Dirichlet_Dynamic) * Dof{lambda_2}, {lambda_2} ] ;
          In Dirichlet_2 ; Jacobian JSur ; Integration GradGrad ; }
        
        Galerkin{ [ Dof{lambda_3}, {u_3} ] ;
          In Dirichlet_2 ; Jacobian JSur ; Integration GradGrad ; }
        Galerkin{ [ Dof{u_3}, {lambda_3} ] ;
          In Dirichlet_2 ; Jacobian JSur ; Integration GradGrad ; }
        Galerkin{ [ -u_Dirichlet_Dynamic_3[], {lambda_3} ] ;
          In Dirichlet_2 ; Jacobian JSur ; Integration GradGrad ; }
      EndIf

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
      { Name u ; Value{ Term{ [ Vector[ {u~{1}}, {u~{2}}, {u~{3}} ]];
	    In Domain_Mecha ; Jacobian Vol ; } } }
      { Name um ; Value{ Term{ [ Norm[ Vector[ {u~{1}}, {u~{2}}, {u~{3}} ] ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name ux  ; Value{ Term{ [ {u~{1}} ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name uy  ; Value{ Term{ [ {u~{2}} ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name uz  ; Value{ Term{ [ {u~{3}} ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }

      { Name PK2_xx; Value{ Term { [ CompXX[PK2[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name PK2_xy; Value{ Term { [ CompXY[PK2[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name PK2_xz; Value{ Term { [ CompXZ[PK2[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name PK2_yx; Value{ Term { [ CompYX[PK2[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name PK2_yy; Value{ Term { [ CompYY[PK2[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name PK2_yz; Value{ Term { [ CompYZ[PK2[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name PK2_zx; Value{ Term { [ CompZX[PK2[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name PK2_zy; Value{ Term { [ CompZY[PK2[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name PK2_zz; Value{ Term { [ CompZZ[PK2[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }        
      
      { Name F_tot_xx  ; Value { Term { [ CompXX[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name F_tot_xy  ; Value { Term { [ CompXY[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name F_tot_xz  ; Value { Term { [ CompXZ[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name F_tot_yx  ; Value { Term { [ CompYX[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name F_tot_yy  ; Value { Term { [ CompYY[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name F_tot_yz  ; Value { Term { [ CompYZ[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name F_tot_zx  ; Value { Term { [ CompZX[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name F_tot_zy  ; Value { Term { [ CompZY[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
      { Name F_tot_zz  ; Value { Term { [ CompZZ[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ;
            In Domain_Mecha  ; Jacobian Vol; } } }
    }
  }
}
