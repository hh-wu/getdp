Include "smp_stent.dat";

DefineConstant[
  visu = {1, Choices{0, 1}, AutoCheck 0,
    Name "Input/Solver/Visu", Label "Real-time visualization"}
];

Group {
  Dirichlet_1 = Region[{DIRICHLET_MECHANICS_1}]; // Line where we impose homogeneous Dirichlet condition
  Dirichlet_2 = Region[{DIRICHLET_MECHANICS_2}]; // Line where we impose homogeneous Dirichlet condition
  Domain_Mecha = Region[{DOMAIN_TUBE}]; // Mechanical domain
}

Function {
  DefineFunction[ FT_F, PK2, C_Tot_xx, C_Tot_xy, C_Tot_xz, C_Tot_yx, C_Tot_yy, C_Tot_yz, C_Tot_zx, C_Tot_zy, C_Tot_zz,  E_g, nu_g];
  DefineFunction[ Theta_Previous, F_f_Previous, F_p_Previous, F_pg_Previous, F_current, Theta_Current, F_f_Current, F_p_Current, F_pg_Current];
  
  // 1. Parameters of the problem
  //=============================
  //3.2E9 11E6 0.3 0.497 26 336 0.25 0.0 0.0 0.0 0.0 0.972 3 500
  E_r  = 11E6; // Young's modulus of the rubbery state
  nu_r = 0.497; // Poisson ratio of the rubbery state
  E_g  = 3.2E9; // Young's modulus of the glassy state
  nu_g = 0.3; // Poisson ratio of the glassy state
  c_f = 1;

  //Lame parameters
  //===============
  lambda_r = E_r/(2.0 * (1.0 + nu_r)); // First Lame parameter
  mu_r = (nu_r * E_r)/((1.0 + nu_r) * (1.0 - 2 * nu_r)); // Second Lame parameter
  lambda_g = E_g/(2.0 * (1.0 + nu_g)); // First Lame parameter
  mu_g = (nu_g * E_g)/((1.0 + nu_g) * (1.0 - 2 * nu_g)); // Second Lame parameter

  // Parameters used during resolution
  //==================================
  t_0 = 0.0;
  t_end = 4.0e-0;
  period = (t_end - t_0);
  Freq = 1.0/period;
  tol_abs = 1e-6;
  tol_rel = 1e-10;
  iter_max = 50;
  dt_max = period/10;
  dtime = dt_max/1;
  theta_value = 1.0;

  theta[] = ( (0.0 <= $Time) && ($Time < (t_end/4.0) ) ? 400 :
              ( (t_end/4.0 <= $Time) && ($Time < (2 * t_end/4.0) ) ? (600 - 200 * $Time) :
                ( (2 * t_end/4.0 <= $Time) && ($Time < (3 * t_end/4.0) ) ? (200) :
                  ( (3 * t_end/4.0 <= $Time) && ($Time < (4 * t_end/4.0) ) ? (200 * $Time - 400) : 400
                    )
                  )
                )
              );

  theta_t = 300;
  delta_theta = 25;
  //theta_t = 336;
  //delta_theta = 26;
  omega = 0.25;
  NumTS = 11;
  NumTS_Tot = 10;

  
  // Initialization of internal variables
  //=====================================
  
  Theta_Previous[] = ( ($TimeStep == 1) ? theta[t_0] : theta[$Time - $DTime]);
  Theta_Current[] = theta[$Time];
  
  F_f_Previous[] = Tensor[1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0];
  F_p_Previous[] = Tensor[1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0];
  F_pg_Previous[] = Tensor[1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0];
  
  F_f_Current[]  = ( ($TimeStep <= NumTS) ? Tensor[1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0] : $var_F_f_Current);
  F_p_Current[]  = ( ($TimeStep <= NumTS) ? Tensor[1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0] : $var_F_p_Current);
  F_pg_Current[] = ( ($TimeStep <= NumTS) ? Tensor[1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0] : $var_F_pg_Current);

  // The ratio z_g
  //==============
  z_g[] =  ( ( theta[] < (theta_t - delta_theta)) ? 1 :
             ( theta[] > (theta_t + delta_theta) ? 0 : (1.0/(1.0 + Exp[2 * omega * ( theta[] - theta_t) ] ) )
               )
             );
 
  // 2. Kinematic information : The tensor C = [F^T*F]
  //==================================================
  FT_F[] = Transpose[$1#1] * #1; // C = (F^T * F)

  // 3. Kinetic information : second Piola Kirchhoff [PK2] stresses
  //===============================================================
  // Green Lagrange strain measure GL = E = 0.5 * (C - I)
  GL[] = 0.5 * (FT_F[$1] - TensorDiag[1.0, 1.0, 1.0]);
  // Trace of E
  GL_Trace[] = (CompXX[GL[$1#1]] + CompYY[GL[#1]] + CompZZ[GL[#1]]) ;
  // Piola Kirchhoff 2 PK2 = S = lambda * trace(E) * I + 2 * mu * E (see formula
  // (3.121) of "Wriggers, P., 2008. Nonlinear finite element methods. Springer
  // Science & Business Media.")
  PK2_r[] = lambda_r * GL_Trace[$1#1] * TensorDiag[1.0, 1.0, 1.0] + 2 * mu_r * GL[#1]; 
  PK2_g[] = Inv[F_pg_Current[]] *(lambda_g * GL_Trace[$1#1] * TensorDiag[1.0, 1.0, 1.0] + 2 * mu_g * GL[#1]) * Inv[Transpose[F_pg_Current[]]]; 
  //PK2_g[] = lambda_g * GL_Trace[$1#1] * TensorDiag[1.0, 1.0, 1.0] + 2 * mu_g * GL[#1]; 
  
  PK2[] = z_g[] * PK2_g[$1#1] + (1.0 - z_g[]) * PK2_r[#1];


  // 4. The nonlinear right hand side
  //=================================
  RHS[] = PK2[$1#1] * Transpose[#1]; // The first Piola Kirchhoff : P = S * F^T

  // x
  P_i~{1}[] = Vector[CompXX[RHS[$1#1]], CompXY[RHS[#1]], CompXZ[RHS[#1]] ];
  // y
  P_i~{2}[] = Vector[CompYX[RHS[$1#1]], CompYY[RHS[#1]], CompYZ[RHS[#1]] ];
  // z
  P_i~{3}[] = Vector[CompZX[RHS[$1#1]], CompZY[RHS[#1]], CompZZ[RHS[#1]] ];

  // 5. The stiffness matrix : C_Tot_ij = C_Mat_ij +  C_Geo_ij
  //==========================================================

  // 5.1. Geometric stiffness "C_Geo_ij" (see formula (4.69) of "Wriggers, P.,
  // 2008. Nonlinear finite element methods. Springer Science & Business
  // Media.")
  //==========================================================
  // xx
  C_Geo~{1}~{1}[] = PK2[$1];
  // yx
  C_Geo~{2}~{1}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // zx
  C_Geo~{3}~{1}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // xy
  C_Geo~{1}~{2}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // yy
  C_Geo~{2}~{2}[] = PK2[$1];
  // zy
  C_Geo~{3}~{2}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // xz
  C_Geo~{1}~{3}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // yz
  C_Geo~{2}~{3}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // zz
  C_Geo~{3}~{3}[] = PK2[$1];

  // 5.2. Material stiffness C_Mat_ij (see formula (4.74) of "Wriggers, P.,
  // 2008. Nonlinear finite element methods. Springer Science & Business
  // Media."). This term has two contributions C_Mat_ij = C_Mat_lambda_ij +
  // C_Mat_mu_ij
  //=================================================================

  // 5.2.1. Material stiffness - the part resulting from "2 * mu_g": C_Mat_mu_ij
  //============================================================================

  // xx
  C_Mat_mu~{1}~{1}[] = (z_g[] * mu_g + (1.0 - z_g[]) * mu_r) * Tensor[ 2 * CompXX[$1#1] * CompXX[#1] + CompXY[#1] * CompXY[#1]     + CompXZ[#1] * CompXZ[#1],
    CompXX[#1] * CompXY[#1],
    CompXX[#1] * CompXZ[#1],
    CompXY[#1] * CompXX[#1],
    CompXX[#1] * CompXX[#1]     + 2 * CompXY[#1] * CompXY[#1] + CompXZ[#1] * CompXZ[#1],
    CompXY[#1] * CompXZ[#1],
    CompXZ[#1] * CompXX[#1],
    CompXZ[#1] * CompXY[#1],
    CompXX[#1] * CompXX[#1]     + CompXY[#1] * CompXY[#1]     + 2 * CompXZ[#1] * CompXZ[#1] ];
  // yx
  C_Mat_mu~{2}~{1}[] = (z_g[] * mu_g + (1.0 - z_g[]) * mu_r) * Tensor[ 2 * CompYX[$1#1] * CompXX[#1] + CompYY[#1] * CompXY[#1]     + CompYZ[#1] * CompXZ[#1],
    CompYX[#1] * CompXY[#1],
    CompYX[#1] * CompXZ[#1],
    CompYY[#1] * CompXX[#1],
    CompYX[#1] * CompXX[#1]     + 2 * CompYY[#1] * CompXY[#1] + CompYZ[#1] * CompXZ[#1],
    CompYY[#1] * CompXZ[#1],
    CompYZ[#1] * CompXX[#1],
    CompYZ[#1] * CompXY[#1],
    CompYX[#1] * CompXX[#1]     + CompYY[#1] * CompXY[#1]     + 2 * CompYZ[#1] * CompXZ[#1] ];
  // zx
  C_Mat_mu~{3}~{1}[] = (z_g[] * mu_g + (1.0 - z_g[]) * mu_r) * Tensor[ 2 * CompZX[$1#1] * CompXX[#1] + CompZY[#1] * CompXY[#1]     + CompZZ[#1] * CompXZ[#1],
    CompZX[#1] * CompXY[#1],
    CompZX[#1] * CompXZ[#1],
    CompZY[#1] * CompXX[#1],
    CompZX[#1] * CompXX[#1]     + 2 * CompZY[#1] * CompXY[#1] + CompZZ[#1] * CompXZ[#1],
    CompZY[#1] * CompXZ[#1],
    CompZZ[#1] * CompXX[#1],
    CompZZ[#1] * CompXY[#1],
    CompZX[#1] * CompXX[#1]     + CompZY[#1] * CompXY[#1]     + 2 * CompZZ[#1] * CompXZ[#1] ];
  // xy
  C_Mat_mu~{1}~{2}[] = (z_g[] * mu_g + (1.0 - z_g[]) * mu_r) * Tensor[ 2 * CompXX[$1#1] * CompYX[#1] + CompXY[#1] * CompYY[#1]     + CompXZ[#1] * CompYZ[#1],
    CompXX[#1] * CompYY[#1],
    CompXX[#1] * CompYZ[#1],
    CompXY[#1] * CompYX[#1],
    CompXX[#1] * CompYX[#1]     + 2 * CompXY[#1] * CompYY[#1] + CompXZ[#1] * CompYZ[#1],
    CompXY[#1] * CompYZ[#1],
    CompXZ[#1] * CompYX[#1],
    CompXZ[#1] * CompYY[#1],
    CompXX[#1] * CompYX[#1]     + CompXY[#1] * CompYY[#1]     + 2 * CompXZ[#1] * CompYZ[#1] ];
  // yy
  C_Mat_mu~{2}~{2}[] = (z_g[] * mu_g + (1.0 - z_g[]) * mu_r) * Tensor[ 2 * CompYX[$1#1] * CompYX[#1] + CompYY[#1] * CompYY[#1]     + CompYZ[#1] * CompYZ[#1],
    CompYX[#1] * CompYY[#1],
    CompYX[#1] * CompYZ[#1],
    CompYY[#1] * CompYX[#1],
    CompYX[#1] * CompYX[#1]     + 2 * CompYY[#1] * CompYY[#1] + CompYZ[#1] * CompYZ[#1],
    CompYY[#1] * CompYZ[#1],
    CompYZ[#1] * CompYX[#1],
    CompYZ[#1] * CompYY[#1],
    CompYX[#1] * CompYX[#1]     + CompYY[#1] * CompYY[#1]     + 2 * CompYZ[#1] * CompYZ[#1] ];
  // zy
  C_Mat_mu~{3}~{2}[] = (z_g[] * mu_g + (1.0 - z_g[]) * mu_r) * Tensor[ 2 * CompZX[$1#1] * CompYX[#1] + CompZY[#1] * CompYY[#1]     + CompZZ[#1] * CompYZ[#1],
    CompZX[#1] * CompYY[#1],
    CompZX[#1] * CompYZ[#1],
    CompZY[#1] * CompYX[#1],
    CompZX[#1] * CompYX[#1]     + 2 * CompZY[#1] * CompYY[#1] + CompZZ[#1] * CompYZ[#1],
    CompZY[#1] * CompYZ[#1],
    CompZZ[#1] * CompYX[#1],
    CompZZ[#1] * CompYY[#1],
    CompZX[#1] * CompYX[#1]     + CompZY[#1] * CompYY[#1]     + 2 * CompZZ[#1] * CompYZ[#1] ];
  // xz
  C_Mat_mu~{1}~{3}[] = (z_g[] * mu_g + (1.0 - z_g[]) * mu_r) * Tensor[ 2 * CompXX[$1#1] * CompZX[#1] + CompXY[#1] * CompZY[#1]     + CompXZ[#1] * CompZZ[#1],
    CompXX[#1] * CompZY[#1],
    CompXX[#1] * CompZZ[#1],
    CompXY[#1] * CompZX[#1],
    CompXX[#1] * CompZX[#1]     + 2 * CompXY[#1] * CompZY[#1] + CompXZ[#1] * CompZZ[#1],
    CompXY[#1] * CompZZ[#1],
    CompXZ[#1] * CompZX[#1],
    CompXZ[#1] * CompZY[#1],
    CompXX[#1] * CompZX[#1]     + CompXY[#1] * CompZY[#1]     + 2 * CompXZ[#1] * CompZZ[#1] ];
  // yz
  C_Mat_mu~{2}~{3}[] = (z_g[] * mu_g + (1.0 - z_g[]) * mu_r) * Tensor[ 2 * CompYX[$1#1] * CompZX[#1] + CompYY[#1] * CompZY[#1]     + CompYZ[#1] * CompZZ[#1],
    CompYX[#1] * CompZY[#1],
    CompYX[#1] * CompZZ[#1],
    CompYY[#1] * CompZX[#1],
    CompYX[#1] * CompZX[#1]     + 2 * CompYY[#1] * CompZY[#1] + CompYZ[#1] * CompZZ[#1],
    CompYY[#1] * CompZZ[#1],
    CompYZ[#1] * CompZX[#1],
    CompYZ[#1] * CompZY[#1],
    CompYX[#1] * CompZX[#1]     + CompYY[#1] * CompZY[#1]     + 2 * CompYZ[#1] * CompZZ[#1] ];
  // zz
  C_Mat_mu~{3}~{3}[] = (z_g[] * mu_g + (1.0 - z_g[]) * mu_r) * Tensor[ 2 * CompZX[$1#1] * CompZX[#1] + CompZY[#1] * CompZY[#1]     + CompZZ[#1] * CompZZ[#1],
    CompZX[#1] * CompZY[#1],
    CompZX[#1] * CompZZ[#1],
    CompZY[#1] * CompZX[#1],
    CompZX[#1] * CompZX[#1]     + 2 * CompZY[#1] * CompZY[#1] + CompZZ[#1] * CompZZ[#1],
    CompZY[#1] * CompZZ[#1],
    CompZZ[#1] * CompZX[#1],
    CompZZ[#1] * CompZY[#1],
    CompZX[#1] * CompZX[#1]     + CompZY[#1] * CompZY[#1]     + 2 * CompZZ[#1] * CompZZ[#1] ];

  // 5.2.2. Material stiffness - the part resulting from "lambda" : C_Mat_lambda_ij
  //===============================================================================
  // xx
  C_Mat_lambda~{1}~{1}[] = (z_g[] * lambda_g + (1.0 - z_g[]) * lambda_r) * Tensor[ CompXX[$1#1] * CompXX[#1],   CompXX[#1] * CompXY[#1],   CompXX[#1] * CompXZ[#1],
    CompXY[#1] * CompXX[#1],   CompXY[#1] * CompXY[#1],   CompXY[#1] * CompXZ[#1],
    CompXZ[#1] * CompXX[#1],   CompXZ[#1] * CompXY[#1],   CompXZ[#1] * CompXZ[#1]];
  // yx
  C_Mat_lambda~{2}~{1}[] = (z_g[] * lambda_g + (1.0 - z_g[]) * lambda_r) * Tensor[ CompYX[$1#1] * CompXX[#1],   CompYX[#1] * CompXY[#1],   CompYX[#1] * CompXZ[#1],
    CompYY[#1] * CompXX[#1],   CompYY[#1] * CompXY[#1],   CompYY[#1] * CompXZ[#1],
    CompYZ[#1] * CompXX[#1],   CompYZ[#1] * CompXY[#1],   CompYZ[#1] * CompXZ[#1]];
  // zx
  C_Mat_lambda~{3}~{1}[] = (z_g[] * lambda_g + (1.0 - z_g[]) * lambda_r) * Tensor[ CompZX[$1#1] * CompXX[#1],   CompZX[#1] * CompXY[#1],   CompZX[#1] * CompXZ[#1],
    CompZY[#1] * CompXX[#1],   CompZY[#1] * CompXY[#1],   CompZY[#1] * CompXZ[#1],
    CompZZ[#1] * CompXX[#1],   CompZZ[#1] * CompXY[#1],   CompZZ[#1] * CompXZ[#1]];
  // xy
  C_Mat_lambda~{1}~{2}[] = (z_g[] * lambda_g + (1.0 - z_g[]) * lambda_r) * Tensor[ CompXX[$1#1] * CompYX[#1],   CompXX[#1] * CompYY[#1],   CompXX[#1] * CompYZ[#1],
    CompXY[#1] * CompYX[#1],   CompXY[#1] * CompYY[#1],   CompXY[#1] * CompYZ[#1],
    CompXZ[#1] * CompYX[#1],   CompXZ[#1] * CompYY[#1],   CompXZ[#1] * CompYZ[#1]];
  // yy
  C_Mat_lambda~{2}~{2}[] = (z_g[] * lambda_g + (1.0 - z_g[]) * lambda_r) * Tensor[ CompYX[$1#1] * CompYX[#1],   CompYX[#1] * CompYY[#1],   CompYX[#1] * CompYZ[#1],
    CompYY[#1] * CompYX[#1],   CompYY[#1] * CompYY[#1],   CompYY[#1] * CompYZ[#1],
    CompYZ[#1] * CompYX[#1],   CompYZ[#1] * CompYY[#1],   CompYZ[#1] * CompYZ[#1]];
  // zy
  C_Mat_lambda~{3}~{2}[] = (z_g[] * lambda_g + (1.0 - z_g[]) * lambda_r) * Tensor[ CompZX[$1#1] * CompYX[#1],   CompZX[#1] * CompYY[#1],   CompZX[#1] * CompYZ[#1],
    CompZY[#1] * CompYX[#1],   CompZY[#1] * CompYY[#1],   CompZY[#1] * CompYZ[#1],
    CompZZ[#1] * CompYX[#1],   CompZZ[#1] * CompYY[#1],   CompZZ[#1] * CompYZ[#1]];
  // xz
  C_Mat_lambda~{1}~{3}[] = (z_g[] * lambda_g + (1.0 - z_g[]) * lambda_r) * Tensor[ CompXX[$1#1] * CompZX[#1],   CompXX[#1] * CompZY[#1],   CompXX[#1] * CompZZ[#1],
    CompXY[#1] * CompZX[#1],   CompXY[#1] * CompZY[#1],   CompXY[#1] * CompZZ[#1],
    CompXZ[#1] * CompZX[#1],   CompXZ[#1] * CompZY[#1],   CompXZ[#1] * CompZZ[#1]];
  // yz
  C_Mat_lambda~{2}~{3}[] = (z_g[] * lambda_g + (1.0 - z_g[]) * lambda_r) * Tensor[ CompYX[$1#1] * CompZX[#1],   CompYX[#1] * CompZY[#1],   CompYX[#1] * CompZZ[#1],
    CompYY[#1] * CompZX[#1],   CompYY[#1] * CompZY[#1],   CompYY[#1] * CompZZ[#1],
    CompYZ[#1] * CompZX[#1],   CompYZ[#1] * CompZY[#1],   CompYZ[#1] * CompZZ[#1]];
  // zz
  C_Mat_lambda~{3}~{3}[] = (z_g[] * lambda_g + (1.0 - z_g[]) * lambda_r) * Tensor[ CompZX[$1#1] * CompZX[#1],   CompZX[#1] * CompZY[#1],   CompZX[#1] * CompZZ[#1],
    CompZY[#1] * CompZX[#1],   CompZY[#1] * CompZY[#1],   CompZY[#1] * CompZZ[#1],
    CompZZ[#1] * CompZX[#1],   CompZZ[#1] * CompZY[#1],   CompZZ[#1] * CompZZ[#1]];

  // 5.2. Total material stiffness : C_Mat_ij = C_Mat_lambda_ij +  C_Mat_mu_ij
  //==========================================================================
  For i In {1:3}
    For j In {1:3}
    C_Mat~{i}~{j}[] =  C_Mat_lambda~{i}~{j}[$1#1] + Transpose[C_Mat_mu~{i}~{j}[#1]];
    EndFor
  EndFor

  // 5. Total stiffness : C_Mat_ij +  C_Geo_ij
  //==========================================
  For i In {1:3}
    For j In {1:3}
      C_Tot~{i}~{j}[] =  C_Mat~{i}~{j}[$1#1] + C_Geo~{i}~{j}[#1];
    EndFor
  EndFor
}

Function {
  // Parameters of the Dirichlet condition
  //======================================
  Dirichlet_Amplitude = 18.0e-4;
  Dirichlet_Fun[] = ( ( (0 <= $Time) && ($Time < t_end/4.0) ) ? (- Dirichlet_Amplitude * $Time) : - Dirichlet_Amplitude );

  u_Dirichlet_Static[] = Vector[0.0, 0.0, 0.0];
  u_Dirichlet_Dynamic[] = Vector[0.0, Dirichlet_Fun[], 0.0];

  // Parameter for the dynamic case (not used for the moment)
  //=========================================================
  If (Flag_Dynamic)
    rho[] = 1.0e3;
  EndIf
  // Parameter for the case of external force (not used for the moment)
  //===================================================================
  If (Flag_ExternalForce)
    force_amplitude = 1.8e0;
    force_ext[] = ($Time/period) * Vector[0., force_amplitude, 0.0];
  EndIf
}

Constraint {
  { Name Displacement_1 ; // x
    Case {
      { Region Dirichlet_1; Value 0.0 ; }
      { Region Dirichlet_2; Value 0.0 ; }
    }
  }
  { Name Displacement_2 ; // y
    Case {
      { Region Dirichlet_1; Value 0.0 ; }
      If (!Flag_ExternalForce)
        { Region Dirichlet_2; Value 1.0; TimeFunction Dirichlet_Fun[$Time]  ; }
      EndIf
    }
  }
  { Name Displacement_3 ; // z
    Case {
      { Region Dirichlet_1; Value 0.0 ; }
      { Region Dirichlet_2; Value 0.0 ; }
    }
  }
  For i In {1:3}
    { Name Displacement0~{i} ;
      Case {
        { Region Dirichlet_1; Value 0.0 ; }
        { Region Dirichlet_2; Value 0.0 ; }
      }
    }
  EndFor
}

Include "Jacobian_Lib.pro"
Include "Integration_Lib.pro"
Include "Total_Lagrangian.pro"

Resolution {
  { Name Mec_SMP ;
    System {
      { Name Sys_Mec ; NameOfFormulation Total_Lagrangian ; }
      { Name Sys_Mec_set_IV_Previous ; NameOfFormulation Total_Lagrangian_set_IV_Previous ; }
      { Name Sys_Mec_set_IV_Current ; NameOfFormulation Total_Lagrangian_set_IV_Current ; }
      { Name Sys_Mec_get_IV_Current ; NameOfFormulation Total_Lagrangian_get_IV_Current ; }
    }
    Operation {
      If(Flag_DEGRE2)
        SetGlobalSolverOptions["-petsc_prealloc 400"];
      EndIf
      CreateDir["res/"];
      Evaluate[ $syscount = 0 ];
      InitSolution[Sys_Mec];
      TimeLoopTheta[t_0, t_end, dtime, theta_value] {
        
        //========================================================
        Test[ $TimeStep <= NumTS_Tot/2]{
          $var_u_Dirichlet_Dynamic = 1.0;
        }{
          $var_u_Dirichlet_Dynamic = 1.0;
        }    
        Test[ $TimeStep >= NumTS]{ 
          Test[ $TimeStep == NumTS]{
            Evaluate[ Python[0]{"smp_initializeInternalVariables.py"} ];
            Generate[Sys_Mec_set_IV_Previous];
          }{
            Evaluate[ Python[1]{"smp_initializeInternalVariables.py"} ];
          }
          Generate[Sys_Mec_set_IV_Current];
          Evaluate[ Python[]{"smp_updateInternalVariables.py"} ];
          Generate[Sys_Mec_get_IV_Current];
        }
        //========================================================
        
        Generate[Sys_Mec]; Solve[Sys_Mec]; Evaluate[ $syscount = $syscount + 1 ];
        
        //========================================================
        Test[ $TimeStep >= NumTS]{ 
          Generate[Sys_Mec_set_IV_Current];
          Evaluate[ Python[]{"smp_updateInternalVariables.py"} ];
          Generate[Sys_Mec_get_IV_Current];
        }
          //========================================================
        
        Generate[Sys_Mec]; GetResidual[Sys_Mec, $res0]; Evaluate[ $res = $res0, $iter = 0 ];
        Print[{$iter, $res, $res / $res0}, Format "Residual %03g: abs %14.12e rel %14.12e"];
        While[$res > tol_abs && $res / $res0 > tol_rel && $res / $res0 <= 1 && $iter < iter_max]{
          Solve[Sys_Mec]; Evaluate[ $syscount = $syscount + 1 ];
          
          //========================================================
          Test[ $TimeStep >= NumTS]{ 
            Generate[Sys_Mec_set_IV_Current];
            Evaluate[ Python[]{"smp_updateInternalVariables.py"} ];
            Generate[Sys_Mec_get_IV_Current];
          }
          //========================================================
          
          Generate[Sys_Mec]; GetResidual[Sys_Mec, $res]; Evaluate[ $iter = $iter + 1 ];
          Print[{$iter, $res, $res / $res0}, Format "Residual %03g: abs %14.12e rel %14.12e"];
        }
        Test[ $iter < iter_max && $res / $res0 <= 1 ]{
          SaveSolution[Sys_Mec];
          Test[ GetNumberRunTime[visu]{"Input/Solver/Visu"} ]{
            PostOperation[Mec];
          }
          Test[ $iter < iter_max / 50 && $DTime < dt_max ]{
            Evaluate[ $dt_new = Min[$DTime * 1.5, dt_max] ];
            Print[{$dt_new}, Format "*** Fast convergence: increasing time step to %g"];
            SetDTime[$dt_new];
          }
        }
        {
          Evaluate[ $dt_new = $DTime / 3 ];
          Print[{$iter, $dt_new}, Format "*** Non convergence (iter %g): recomputing with reduced step %g"];
          SetTime[$Time - $DTime];
          SetTimeStep[$TimeStep - 1];
          RemoveLastSolution[Sys_Mec];
          SetDTime[$dt_new];
        }
      }
      Print[{$syscount}, Format "Total number of linear systems solved: %g"];
    }
  }
}

PostOperation {
  { Name Mec ; NameOfPostProcessing Total_Lagrangian; LastTimeStepOnly visu;
    Operation {
      Print[ u, OnElementsOf Domain_Mecha, File > "res/u.pos"] ;
      Print[ PK2, OnElementsOf Domain_Mecha, File > "res/PK2.pos"] ;
      Echo[ Str["l=PostProcessing.NbViews-1; View[l].VectorType=5;"], File "res/tmp.geo"] ;
    }
  }
}

DefineConstant[
  R_ = {"Mec_SMP", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -bin -v 3 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = { "", Name "GetDP/2PostOperationChoices", Visible 0}
];
