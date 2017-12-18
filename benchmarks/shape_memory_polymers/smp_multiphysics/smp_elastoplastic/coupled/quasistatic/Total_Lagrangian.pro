//=====================================================================

FunctionSpace {
  If(Flag_Plasticity)
    { Name Hone_u_dummy ; Type Form0 ;
      BasisFunction {
        { Name sn ; NameOfCoef un ; Function BF_Node ;
          Support Region[ { Domain_Mecha, Dirichlet_1, Dirichlet_2} ] ; Entity NodesOf[ All ] ; }
      }
      Constraint {
      }
    }
  EndIf
  For i In {1:3}
    { Name H_u~{i} ; Type Form0 ;
      BasisFunction {
        { Name sn~{i} ; NameOfCoef un~{i} ; Function BF_Node ;
          Support Region[ { Domain_Mecha, Dirichlet_1, Dirichlet_2} ] ; Entity NodesOf[ All ] ; }
      }
      Constraint {
        If(!Flag_LagrangeMultiplier)
          { NameOfCoef un~{i} ; EntityType NodesOf ; NameOfConstraint Displacement~{i} ; }
        EndIf
      }
    }
    { Name H_Lambda~{i} ; Type Form0 ;
      BasisFunction {
        { Name ln~{i} ; NameOfCoef lambda_n~{i} ; Function BF_Node ;
          Support Region[ { Dirichlet_1, Dirichlet_2} ] ; Entity NodesOf[ All ] ; }
      }
    }
  EndFor

  { Name H_Temp ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef tn ; Function BF_Node ;
        Support Region[ {Domain_Temp, Gamma_Convection_The} ] ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef tn ; EntityType NodesOf ; NameOfConstraint BC_Temperature ; }
      { NameOfCoef tn ; EntityType NodesOf ; NameOfConstraint Init_Temperature ; }
    }
  }
  { Name H_EleKin ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef vn ; Function BF_Node ;
        Support Region[ { Domain_EleMag} ] ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef vn ; EntityType NodesOf ; NameOfConstraint BC_Potential ; }
    }
  }
}

If(Flag_Plasticity)
  Include "smp_stent_setIV.pro";
EndIf

Formulation {
  { Name Total_Lagrangian ; Type FemEquation ;
    Quantity {
      For i In {1:3}
        { Name u~{i}  ; Type Local ; NameOfSpace H_u~{i} ; }
        If(Flag_LagrangeMultiplier)
          { Name lambda~{i}  ; Type Local ; NameOfSpace H_Lambda~{i} ; }
        EndIf
      EndFor
      { Name T ; Type Local ; NameOfSpace H_Temp ; }
      { Name V ; Type Local ; NameOfSpace H_EleKin; }
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
        If(Flag_Plasticity)
          Galerkin { [ P~{i}[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                              F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[]] ] ) ],
                              F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                              F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ) ]
                              ] , {d u~{i}} ] ;
          In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
          For j In {1:3}
            Galerkin { [ C_Tot~{j}~{i}[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                                        F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[]] ] ) ],
                                        F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                                        F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ) ],
                                        Flag_PlasticStep_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$Flag_PlasticStep_Current} ) ]
                                        ] * Dof{d u~{i}}, {d u~{j}} ] ;
              In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }
            Galerkin { [-C_Tot~{j}~{i}[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                                        F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[] ] ] ) ],
                                        F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                                        F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ) ],
                                        Flag_PlasticStep_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$Flag_PlasticStep_Current} ) ]
                                        ] * {d u~{i}}, {d u~{j}} ] ;
              In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }
          EndFor
        Else
          Galerkin { [ P~{i}[ (TensorDiag[1., 1., 1.] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] , {d u~{i}} ] ;
            In Domain_Mecha; Jacobian Vol; Integration GradGrad; }
          For j In {1:3}          
            Galerkin { [ C_Tot~{j}~{i}[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] * Dof{d u~{i}}, {d u~{j}} ] ;
              In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }
            Galerkin { [-C_Tot~{j}~{i}[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] * {d u~{i}}, {d u~{j}} ] ;
              In Domain_Mecha ; Jacobian Vol ; Integration GradGrad ; }
          EndFor
        EndIf
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


      // Equations of the thermal problem
      //=================================
      Galerkin { DtDof [ rho_temp[] * cp_Temp[] * Dof{T} , {T} ];
        In Domain_Temp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                   Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] * 
                   kappa_The[] *
                   Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                   Dof{T} , {d T} ] ;
        In Domain_Temp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ (-Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                    sigma[] *
                    (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}}] ] +
                     (Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] * {Grad V}) ) *
                    (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}}] ] +
                     (Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] * {Grad V}) ) ) , {T} ];
        In Domain_Temp_Tube ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ h_Conv[] * Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                  Norm[Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] * Normal[] ] *
                   Dof{T} , {T} ];
        In Gamma_Convection_The ; Jacobian JSur; Integration GradGrad ;  }
      Galerkin { [-h_Conv[] * Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                  Norm[Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] * Normal[] ] *
                  Temperature_Blood[] , {T} ];
        In Gamma_Convection_The ; Jacobian JSur; Integration GradGrad ;  }
      

      // Equations for the electromagnetic problem
      //==========================================
      Galerkin { [ Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] * 
                   Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                   sigma[] *
                   Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                   Dof{d V}, {d V} ] ;
        In Domain_EleMag ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] * 
                   Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                   sigma[] *
                   dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}}] ] , {d V} ] ;
        In Domain_EleMag ; Jacobian Vol ; Integration GradGrad ; }
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
      If(Flag_Plasticity)
      { Name PK2_xx; Value{ Term { [ CompXX[PK2[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                                                 F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[]] ] ) ],
                                                 F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                                                 F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current}) ] ]
                                            ] ] ;
            In Domain_Mecha; Jacobian Vol; } } }
      { Name PK2_xy; Value{ Term { [ CompXY[PK2[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                                                 F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[]] ] ) ],
                                                 F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                                                 F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current}) ] ]
                                            ] ] ;
            In Domain_Mecha; Jacobian Vol; } } }
      { Name PK2_xz; Value{ Term { [ CompXZ[PK2[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                                                 F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[]] ] ) ],
                                                 F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                                                 F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current}) ] ]
                                            ] ] ;
            In Domain_Mecha; Jacobian Vol; } } }
      { Name PK2_yx; Value{ Term { [ CompYX[PK2[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                                                 F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[]] ] ) ],
                                                 F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                                                 F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current}) ] ]
                                            ] ] ;
            In Domain_Mecha; Jacobian Vol; } } }
      { Name PK2_yy; Value{ Term { [ CompYY[PK2[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                                                 F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[]] ] ) ],
                                                 F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                                                 F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current}) ] ]
                                            ] ] ;
            In Domain_Mecha; Jacobian Vol; } } }
      { Name PK2_yz; Value{ Term { [ CompYZ[PK2[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                                                 F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[]] ] ) ],
                                                 F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                                                 F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current}) ] ]
                                            ] ] ;
            In Domain_Mecha; Jacobian Vol; } } }
      { Name PK2_zx; Value{ Term { [ CompZX[PK2[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                                                 F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[]] ] ) ],
                                                 F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                                                 F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current}) ] ]
                                            ] ] ;
            In Domain_Mecha; Jacobian Vol; } } }
      { Name PK2_zy; Value{ Term { [ CompZY[PK2[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                                                 F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[]] ] ) ],
                                                 F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                                                 F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current}) ] ]
                                            ] ] ;
            In Domain_Mecha; Jacobian Vol; } } }
      { Name PK2_zz; Value{ Term { [ CompZZ[PK2[ F_tot_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ],
                                                 F_f_Current[(TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}[v_TS[]], {d u~{2}}[v_TS[]], {d u~{3}}[v_TS[]] ] ) ],
                                                 F_pg_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ) ],
                                                 F_p_Current[(GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current}) ] ]
                                            ] ] ;
            In Domain_Mecha; Jacobian Vol; } } }
      Else
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
      EndIf
      
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

      If(Flag_Plasticity)
        { Name F_f_xx; Value{ Term { [ CompXX[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_f_Current} ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_xy; Value{ Term { [ CompXY[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_f_Current} ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_xz; Value{ Term { [ CompXZ[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_f_Current} ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_yx; Value{ Term { [ CompYX[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_f_Current} ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_yy; Value{ Term { [ CompYY[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_f_Current} ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_yz; Value{ Term { [ CompYZ[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_f_Current} ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_zx; Value{ Term { [ CompZX[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_f_Current} ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_zy; Value{ Term { [ CompZY[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_f_Current} ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_zz; Value{ Term { [ CompZZ[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_f_Current} ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        
        { Name F_f_Current_xx; Value { Term { [ CompXX[ F_f_Current[ (TensorDiag[1., 1., 1.] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_Current_xy; Value { Term { [ CompXY[ F_f_Current[ (TensorDiag[1., 1., 1.] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_Current_xz; Value { Term { [ CompXZ[ F_f_Current[ (TensorDiag[1., 1., 1.] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_Current_yx; Value { Term { [ CompYX[ F_f_Current[ (TensorDiag[1., 1., 1.] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_Current_yy; Value { Term { [ CompYY[ F_f_Current[ (TensorDiag[1., 1., 1.] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_Current_yz; Value { Term { [ CompYZ[ F_f_Current[ (TensorDiag[1., 1., 1.] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_Current_zx; Value { Term { [ CompZX[ F_f_Current[ (TensorDiag[1., 1., 1.] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_Current_zy; Value { Term { [ CompZY[ F_f_Current[ (TensorDiag[1., 1., 1.] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_f_Current_zz; Value { Term { [ CompZZ[ F_f_Current[ (TensorDiag[1., 1., 1.] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }

        { Name F_pg_xx; Value { Term { [ CompXX[ F_pg_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_pg_xy; Value { Term { [ CompXY[ F_pg_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_pg_xz; Value { Term { [ CompXZ[ F_pg_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_pg_yx; Value { Term { [ CompYX[ F_pg_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_pg_yy; Value { Term { [ CompYY[ F_pg_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_pg_yz; Value { Term { [ CompYZ[ F_pg_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_pg_zx; Value { Term { [ CompZX[ F_pg_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_pg_zy; Value { Term { [ CompZY[ F_pg_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_pg_zz; Value { Term { [ CompZZ[ F_pg_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_pg_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        
        { Name F_p_xx; Value { Term { [ CompXX[ F_p_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_p_xy; Value { Term { [ CompXY[ F_p_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_p_xz; Value { Term { [ CompXZ[ F_p_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_p_yx; Value { Term { [ CompYX[ F_p_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_p_yy; Value { Term { [ CompYY[ F_p_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_p_yz; Value { Term { [ CompYZ[ F_p_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_p_zx; Value { Term { [ CompZX[ F_p_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_p_zy; Value { Term { [ CompZY[ F_p_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
        { Name F_p_zz; Value { Term { [ CompZZ[ F_p_Current[ GetVariable[ElementNum[], QuadraturePointIndex[]]{$var_F_p_Current} ] ] ] ;
              In Domain_Mecha; Jacobian Vol; } } }
      EndIf

          
          
      { Name T ; Value { Term { [ {T} ]; In Domain_Temp ; Jacobian Vol ; } } }
      { Name q_Cond ; Value { Term { [-Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                      Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ]  *
                                      kappa_The[] *
                                      (Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                                      {Grad T} ) ];
            In Domain_Temp ; Jacobian Vol ; } } }
      { Name T_Conv ; Value { Term { [ {T}]; In Gamma_Convection_The ; Jacobian Vol ; } } }      
      { Name q_Conv ; Value { Term { [ (Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                        Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                                        Normal[] ) * (h_Conv[] * ({T} - Temperature_Blood[]) ) ];
            In Gamma_Convection_The ; Jacobian Vol ; } } }      
      { Name V ; Value { Term { [ {V} ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name GradV ; Value { Term { [ -Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] * {Grad V} ];
            In Domain_EleMag ; Jacobian Vol ; } } }
      { Name n_J_GradV ; Value { Term { [ Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                          Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                          sigma[] *
                                          Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                                          {Grad V} ];
            In Domain_EleMag ; Jacobian Vol ; } } }
      { Name ba_E_s ; Value { Term { [ ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name dt_ba_E_s ; Value { Term { [ dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name n_J_dt_ba_s ; Value { Term { [Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                           Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                           sigma[] * dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] ];
            In Domain_EleMag ; Jacobian Vol ; } } }
      { Name n_J_tot ; Value { Term { [ Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                        Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                        sigma[] *
                                        (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                         Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                                        {Grad V}) ];
            In Domain_EleMag ; Jacobian Vol ; } } }
      { Name e ; Value { Term { [ -(dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                    Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] * {Grad V} ) ];
            In Domain_EleMag ; Jacobian Vol ; } } }
      { Name j ; Value { Term { [ -sigma[] *
                                  (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                   Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] * {Grad V} ) ];
            In Domain_EleMag ; Jacobian Vol ; } } }
      { Name residual_dt_ba ; Value { Term { [ (Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                               Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                               sigma[] *
                                               (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                                Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                                               {Grad V}) ) * (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] ) ];
            In Domain_EleMag ; Jacobian Vol ; } } }
      { Name residual_GradV ; Value { Term { [ (Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                sigma[] *
                                                (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                                 Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                                                {Grad V}) ) * ({Grad V}) ];
            In Domain_EleMag ; Jacobian Vol ; } } }
      { Name residual_tot ; Value { Term { [ (Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                              Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                              sigma[] *
                                              (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                               Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                                              {Grad V}) ) *
                                             (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                              Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                                             {Grad V} ) ];
            In Domain_EleMag ; Jacobian Vol ; } } }
      { Name Joule_Losses ; Value { Term { [ sigma[] *
                                             (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                              Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                                             {Grad V} ) *
                                             (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                              Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                                             {Grad V} ) ];
            In Domain_EleMag ; Jacobian Vol ; } } }
      { Name Joule_Losses_J ; Value { Term { [ (1/sigma[]) * 
                                               SquNorm[Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                       Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                       sigma[] *
                                                       (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                                        Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] +
                                                                        TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] * {Grad V} ) ] ];
            In Domain_EleMag ; Jacobian Vol ; } } }
      { Name J_Mean_Surf1; Value{ Integral { [ (Normal[] * (Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                                Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                                sigma[] *
                                                                (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                                                 Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] *
                                                                {Grad V})) ) ];
            In EleMag_Cuts_1; Jacobian JSur; Integration GradGrad; } } }
      { Name J_Mean_Surf2; Value{ Integral { [ (Normal[] *
                                                (Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                 Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                 sigma[] *
                                                 (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                                  Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] +
                                                                  TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] * {Grad V}) ) ) ];
            In EleMag_Cuts_2; Jacobian JSur; Integration GradGrad; } } }
      { Name J_Mean_Surf3; Value{ Integral { [ (Normal[] *
                                                (Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                 Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                 sigma[] *
                                                 (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                                  Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] +
                                                                  TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] * {Grad V}) ) ) ];
            In EleMag_Cuts_3; Jacobian JSur; Integration GradGrad; } } }
      { Name J_Mean_Surf4; Value{ Integral { [ (Normal[] *
                                                (Det[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                 Inv[ (TensorDiag[1.0, 1.0, 1.0] + TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] *
                                                 sigma[] *
                                                 (dt_ba_E_s[Vector[{u~{1}}, {u~{2}}, {u~{3}} ] ] +
                                                  Inv[Transpose[ (TensorDiag[1.0, 1.0, 1.0] +
                                                                  TensorV[{d u~{1}}, {d u~{2}}, {d u~{3}} ] ) ] ] * {Grad V}) ) ) ];
            In EleMag_Cuts_4; Jacobian JSur; Integration GradGrad; } } }
    }
  }
}
