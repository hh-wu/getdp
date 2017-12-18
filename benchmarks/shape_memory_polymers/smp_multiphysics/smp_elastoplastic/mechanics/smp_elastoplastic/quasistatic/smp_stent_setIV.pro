Formulation {
  { Name Total_Lagrangian_Initialize_IV; Type FemEquation;
    Quantity {
      { Name u_dummy; Type Local; NameOfSpace Hone_u_dummy; }
      For i In {1:3}
        { Name u~{i}  ; Type Local ; NameOfSpace H_u~{i} ; }
      EndFor
    }
    Equation {
      If(Flag_Dynamic)
          Galerkin { DtDtDof [ rho[] * Dof{d u_dummy} , {d u_dummy} ];
            In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }
      EndIf

      Galerkin { [ Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      Galerkin { [ Python[ ElementNum[], QuadraturePointIndex[], 0,
                           Theta_Previous[],
                           //
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
                           CompXX[F_pg_Previous[]], CompXY[F_pg_Previous[]], CompXZ[F_pg_Previous[]],
                           CompYX[F_pg_Previous[]], CompYY[F_pg_Previous[]], CompYZ[F_pg_Previous[]],
                           CompZX[F_pg_Previous[]], CompZY[F_pg_Previous[]], CompZZ[F_pg_Previous[]],
                           //
                           CompXX[F_p_Previous[]], CompXY[F_p_Previous[]], CompXZ[F_p_Previous[]],
                           CompYX[F_p_Previous[]], CompYY[F_p_Previous[]], CompYZ[F_p_Previous[]],
                           CompZX[F_p_Previous[]], CompZY[F_p_Previous[]], CompZZ[F_p_Previous[]] ]
                   {"smp_stent_setIV.py"} * Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
    }
  }
  { Name Total_Lagrangian_set_IV_CurrentTimeStep; Type FemEquation;
    Quantity {
      { Name u_dummy; Type Local; NameOfSpace Hone_u_dummy; }
      For i In {1:3}
        { Name u~{i}  ; Type Local ; NameOfSpace H_u~{i} ; }
      EndFor
    }
    Equation {
      If(Flag_Dynamic)
          Galerkin { DtDtDof [ rho[] * Dof{d u_dummy} , {d u_dummy} ];
            In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }
      EndIf

      Galerkin { [ Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      Galerkin { [ Python[ ElementNum[], QuadraturePointIndex[], 1, 
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
                           Theta_Current[],
                           $TimeStep]
                   {"smp_stent_setIV.py"} * Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
    }
  }
  { Name Total_Lagrangian_get_IV_CurrentTimeStep; Type FemEquation;
    Quantity {
      { Name u_dummy; Type Local; NameOfSpace Hone_u_dummy; }
      For i In {1:3}
        { Name u~{i}  ; Type Local ; NameOfSpace H_u~{i} ; }
      EndFor
    }
    Equation {
      Galerkin { [ Dof{d u_dummy} , {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      Galerkin { [ SetVariable[ Python[ ElementNum[], QuadraturePointIndex[], 0]{"smp_stent_getIV.py"},
                                ElementNum[], QuadraturePointIndex[] ]{$var_F_f_Current} * Dof{d u_dummy}, {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      Galerkin { [ SetVariable[ Python[ ElementNum[], QuadraturePointIndex[], 1]{"smp_stent_getIV.py"},
                                ElementNum[], QuadraturePointIndex[] ]{$var_F_p_Current} * Dof{d u_dummy}, {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
      Galerkin { [ SetVariable[ Python[ ElementNum[], QuadraturePointIndex[], 2]{"smp_stent_getIV.py"},
                                ElementNum[], QuadraturePointIndex[] ]{$var_F_pg_Current} * Dof{d u_dummy}, {d u_dummy} ];
        In Domain_Mecha; Jacobian Vol; Integration GradGrad; }      
    }
  }
}
