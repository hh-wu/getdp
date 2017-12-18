Formulation {
  { Name Total_Lagrangian_set_IV_Previous; Type FemEquation;
    Quantity {
      { Name u_dummy; Type Local; NameOfSpace Hone_u_dummy; }
      For i In {1:3}
        { Name u~{i}  ; Type Local ; NameOfSpace H_u~{i} ; }
      EndFor
    }
    Equation {
      Galerkin { [ Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      Galerkin { [ Python[ ElementNum[], QuadraturePointIndex[],
                           Theta_Previous[]##111,
                           //
                           CompXX[F_f_Previous[]], CompXY[F_f_Previous[]], CompXZ[F_f_Previous[]],
                           CompYX[F_f_Previous[]], CompYY[F_f_Previous[]], CompYZ[F_f_Previous[]],
                           CompZX[F_f_Previous[]], CompZY[F_f_Previous[]], CompZZ[F_f_Previous[]],
                           //
                           CompXX[F_p_Previous[]], CompXY[F_p_Previous[]], CompXZ[F_p_Previous[]],
                           CompYX[F_p_Previous[]], CompYY[F_p_Previous[]], CompYZ[F_p_Previous[]],
                           CompZX[F_p_Previous[]], CompZY[F_p_Previous[]], CompZZ[F_p_Previous[]],
                           //
                           CompXX[F_pg_Previous[]], CompXY[F_pg_Previous[]], CompXZ[F_pg_Previous[]],
                           CompYX[F_pg_Previous[]], CompYY[F_pg_Previous[]], CompYZ[F_pg_Previous[]],
                           CompZX[F_pg_Previous[]], CompZY[F_pg_Previous[]], CompZZ[F_pg_Previous[]] ]
                   {"smp_setInternalVariables_PreviousTimeStep.py"} * Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
    }
  }
  { Name Total_Lagrangian_set_IV_Current; Type FemEquation;
    Quantity {
      { Name u_dummy; Type Local; NameOfSpace Hone_u_dummy; }
      For i In {1:3}
        { Name u~{i}  ; Type Local ; NameOfSpace H_u~{i} ; }
      EndFor
    }
    Equation {
      Galerkin { [ Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      Galerkin { [ Python[ ElementNum[], QuadraturePointIndex[],
                           CompXX[ (TensorDiag[1., 1., 1.] + Transpose[TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ] ) ],
                           CompXY[ (TensorDiag[1., 1., 1.] + Transpose[TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ] ) ],
                           CompXZ[ (TensorDiag[1., 1., 1.] + Transpose[TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ] ) ],
                           CompYX[ (TensorDiag[1., 1., 1.] + Transpose[TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ] ) ],
                           CompYY[ (TensorDiag[1., 1., 1.] + Transpose[TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ] ) ],
                           CompYZ[ (TensorDiag[1., 1., 1.] + Transpose[TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ] ) ],
                           CompZX[ (TensorDiag[1., 1., 1.] + Transpose[TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ] ) ],
                           CompZY[ (TensorDiag[1., 1., 1.] + Transpose[TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ] ) ],
                           CompZZ[ (TensorDiag[1., 1., 1.] + Transpose[TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ] ) ],
                           //
                           Theta_Previous[]##222]
                   {"smp_setInternalVariables_CurrentTimeStep.py"} * Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
    }
  }
  { Name Total_Lagrangian_get_IV_Current; Type FemEquation;
    Quantity {
      { Name u_dummy; Type Local; NameOfSpace Hone_u_dummy; }
      For i In {1:3}
        { Name u~{i}  ; Type Local ; NameOfSpace H_u~{i} ; }
      EndFor
    }
    Equation {
      Galerkin { [ Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      Galerkin { [$var_F_f_Current = Python[ ElementNum[], QuadraturePointIndex[], 0] {"smp_getInternalVariables.py"} * Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      Galerkin { [$var_F_p_Current = Python[ ElementNum[], QuadraturePointIndex[], 1] {"smp_getInternalVariables.py"} * Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      Galerkin { [$var_F_pg_Current = Python[ ElementNum[], QuadraturePointIndex[], 2] {"smp_getInternalVariables.py"} * Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
    }
  }
}
