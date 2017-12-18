Function {
  F_eg[] = ($1 * Inv[$2]) * (Inv[$3]);
  GL_eg[] = 0.5 * ((Transpose[F_eg[$1, $2, $3]] * F_eg[$1, $2, $3]) - TensorDiag[1.0, 1.0, 1.0]);
  GL_Trace_eg[] = (CompXX[GL_eg[$1, $2, $3]] + CompYY[GL_eg[$1, $2, $3]] + CompZZ[GL_eg[$1, $2, $3]]) ;            
  PK2_g[] = ( Det[$2] * Inv[$2] *
              ( ( (Inv[$3] *(lambda_g * GL_Trace_eg[$1, $2, $3] * TensorDiag[1.0, 1.0, 1.0] + 2 * mu_g * GL_eg[$1, $2, $3]) * Inv[Transpose[$3]]) ) ) *
              Inv[Transpose[$2]] );
  
  F_er[] = $1 * Inv[$2];
  GL_er[] = 0.5 * (Transpose[F_er[$1, $2]] * F_er[$1, $2] - TensorDiag[1.0, 1.0, 1.0]);
  GL_Trace_er[] = (CompXX[GL_er[$1, $2]] + CompYY[GL_er[$1, $2]] + CompZZ[GL_er[$1, $2]]) ;
  PK2_r[] = ( ( Det[$2] * Inv[$2]) *
              ( ( (lambda_r * GL_Trace_er[$1, $2] * TensorDiag[1.0, 1.0, 1.0] + 2 * mu_r * GL_er[$1, $2] ) ) ) *
              (Transpose[Inv[$2]]) );
  
  PK2[] = ( (z_g[] * PK2_g[$1, $2, $3]) + ( (1.0 - z_g[]) * PK2_r[$1, $4]) );

  // 4. The nonlinear right hand side
  //=================================
  RHS[] = $1 * PK2[$1, $2, $3, $4]; // The first Piola Kirchhoff : P = F * S 
  
  // x
  P~{1}[] = Vector[CompXX[RHS[$1, $2, $3, $4]], CompXY[RHS[$1, $2, $3, $4]], CompXZ[RHS[$1, $2, $3, $4]] ];
  // y
  P~{2}[] = Vector[CompYX[RHS[$1, $2, $3, $4]], CompYY[RHS[$1, $2, $3, $4]], CompYZ[RHS[$1, $2, $3, $4]] ];
  // z
  P~{3}[] = Vector[CompZX[RHS[$1, $2, $3, $4]], CompZY[RHS[$1, $2, $3, $4]], CompZZ[RHS[$1, $2, $3, $4]] ];

  // 5. The stiffness matrix : C_Tot_ij = C_Mat_ij +  C_Geo_ij
  //==========================================================

  // 5.1. Geometric stiffness "C_Geo_ij" (see formula (4.69) of "Wriggers, P.,
  // 2008. Nonlinear finite element methods. Springer Science & Business
  // Media.")
  //==========================================================
  // xx
  C_Geo~{1}~{1}[] = PK2[$1, $2, $3, $4];
  // yx
  C_Geo~{2}~{1}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // zx
  C_Geo~{3}~{1}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // xy
  C_Geo~{1}~{2}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // yy
  C_Geo~{2}~{2}[] = PK2[$1, $2, $3, $4];
  // zy
  C_Geo~{3}~{2}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // xz
  C_Geo~{1}~{3}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // yz
  C_Geo~{2}~{3}[] = Tensor[ 0.0, 0.0, 0.0,   0.0, 0.0, 0.0,   0.0, 0.0, 0.0];
  // zz
  C_Geo~{3}~{3}[] = PK2[$1, $2, $3, $4];

  
  // 5.2. Material stiffness C_Mat_ij (see formula (4.74) of "Wriggers, P.,
  // 2008. Nonlinear finite element methods. Springer Science & Business
  // Media."). 
  //=================================================================

  // Computation of the tangent modulus tensor L_eg~{A}~{C}~{F}~{G}
  // $1 = F_f_Current[], $2 = F_pg_Current[] and $3 = F_p_Current[] 
  //============================================================
  
  F_pgf[] = (#3) * (#2); 
  C_pgf_[] = Inv[Transpose[F_pgf[]#5] * F_pgf[]];
  C_p_[] = Inv[Transpose[#4] * #4];

  
  //First column "L_eg~{A}~{C}~{1}~{1}"
  //================================
  //XX-XX
  L_eg~{1}~{1}~{1}~{1}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * Det[#2]#6 * (lambda_g * CompXX[C_pgf_[]#8] * CompXX[(#8)] +
                                                     mu_g * (CompXX[(#8)] * CompXX[Transpose[(#8)]] + CompXX[(#8)] * CompXX[Transpose[(#8)]] ) ) ) ) );
  //YY-XX
  L_eg~{2}~{2}~{1}~{1}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompYY[(#8)] * CompXX[(#8)] +
                                                mu_g * (CompYX[(#8)] * CompXY[Transpose[(#8)]] + CompYX[(#8)] * CompXY[Transpose[(#8)]] ) ) ) ) );
  //ZZ-XX
  L_eg~{3}~{3}~{1}~{1}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompZZ[(#8)] * CompXX[(#8)] +
                                                mu_g * (CompZX[(#8)] * CompXZ[Transpose[(#8)]] + CompZX[(#8)] * CompXZ[Transpose[(#8)]] ) ) ) ) );
  //YZ-XX
  L_eg~{2}~{3}~{1}~{1}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompYZ[(#8)] * CompXX[(#8)] + 
                                                mu_g * (CompYX[(#8)] * CompXZ[Transpose[(#8)]] + CompYX[(#8)] * CompXZ[Transpose[(#8)]] ) ) ) ) );
  //XZ-XX
  L_eg~{1}~{3}~{1}~{1}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompXZ[(#8)] * CompXX[(#8)] +
                                                mu_g * (CompXX[(#8)] * CompXZ[Transpose[(#8)]] + CompXX[(#8)] * CompXZ[Transpose[(#8)]] ) ) ) ) );
  //XY-XX
  L_eg~{1}~{2}~{1}~{1}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompXY[(#8)] * CompXX[(#8)] +
                                                mu_g * (CompXX[(#8)] * CompXY[Transpose[(#8)]] + CompXX[(#8)] * CompXY[Transpose[(#8)]] ) ) ) ) );
  
  //Second column "L_eg~{A}~{C}~{2}~{2}"
  //=================================
  //XX-YY
  L_eg~{1}~{1}~{2}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompXX[(#8)] * CompYY[(#8)] +
                                                mu_g * (CompXY[(#8)] * CompYX[Transpose[(#8)]] + CompXY[(#8)] * CompYX[Transpose[(#8)]] ) ) ) ) );
  //YY-YY
  L_eg~{2}~{2}~{2}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompYY[(#8)] * CompYY[(#8)] +
                                                mu_g * (CompYY[(#8)] * CompYY[Transpose[(#8)]] + CompYY[(#8)] * CompYY[Transpose[(#8)]] ) ) ) ) );
  //ZZ-YY
  L_eg~{3}~{3}~{2}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompZZ[(#8)] * CompYY[(#8)] +
                                                mu_g * (CompZY[(#8)] * CompYZ[Transpose[(#8)]] + CompZY[(#8)] * CompYZ[Transpose[(#8)]] ) ) ) ) );
  //YZ-YY
  L_eg~{2}~{3}~{2}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompYZ[(#8)] * CompYY[(#8)] +
                                                mu_g * (CompYY[(#8)] * CompYZ[Transpose[(#8)]] + CompYY[(#8)] * CompYZ[Transpose[(#8)]] ) ) ) ) );
  //XZ-YY
  L_eg~{1}~{3}~{2}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompXZ[(#8)] * CompYY[(#8)] +
                                                mu_g * (CompXY[(#8)] * CompYZ[Transpose[(#8)]] + CompXY[(#8)] * CompYZ[Transpose[(#8)]] ) ) ) ) );
  //XY-YY
  L_eg~{1}~{2}~{2}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompXY[(#8)] * CompYY[(#8)] +
                                                mu_g * (CompXY[(#8)] * CompYY[Transpose[(#8)]] + CompXY[(#8)] * CompYY[Transpose[(#8)]] ) ) ) ) );  
  
  //Third column "L_eg~{A}~{C}~{3}~{3}"
  //================================
  //XX-ZZ
  L_eg~{1}~{1}~{3}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompXX[(#8)] * CompZZ[(#8)] +
                                                mu_g * (CompXZ[(#8)] * CompZX[Transpose[(#8)]] + CompXZ[(#8)] * CompZX[Transpose[(#8)]] ) ) ) ) );
  //YY-ZZ
  L_eg~{2}~{2}~{3}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompYY[(#8)] * CompZZ[(#8)] +
                                                mu_g * (CompYZ[(#8)] * CompZY[Transpose[(#8)]] + CompYZ[(#8)] * CompZY[Transpose[(#8)]] ) ) ) ) );
  //ZZ-ZZ
  L_eg~{3}~{3}~{3}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompZZ[(#8)] * CompZZ[(#8)] +
                                                mu_g * (CompZZ[(#8)] * CompZZ[Transpose[(#8)]] + CompZZ[(#8)] * CompZZ[Transpose[(#8)]] ) ) ) ) );
  //YZ-ZZ
  L_eg~{2}~{3}~{3}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompYZ[(#8)] * CompZZ[(#8)] +
                                                mu_g * (CompYZ[(#8)] * CompZZ[Transpose[(#8)]] + CompYZ[(#8)] * CompZZ[Transpose[(#8)]] ) ) ) ) );
  //XZ-ZZ
  L_eg~{1}~{3}~{3}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompXZ[(#8)] * CompZZ[(#8)] +
                                                mu_g * (CompXZ[(#8)] * CompZZ[Transpose[(#8)]] + CompXZ[(#8)] * CompZZ[Transpose[(#8)]] ) ) ) ) );
  //XY-ZZ
  L_eg~{1}~{2}~{3}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             ( (z_g[] * (#6) * (lambda_g * CompXY[(#8)] * CompZZ[(#8)] +
                                                mu_g * (CompXZ[(#8)] * CompZY[Transpose[(#8)]] + CompXZ[(#8)] * CompZY[Transpose[(#8)]] ) ) ) ) );
  
  //Fourth column "L_eg~{A}~{C}~{2}~{3}"
  //=================================
  //XX-YZ
  L_eg~{1}~{1}~{2}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompXX[(#8)] * CompYZ[(#8)] + CompXX[(#8)] * CompZY[(#8)]) +
                                                      2 * mu_g * (CompXY[(#8)] * CompZX[Transpose[(#8)]] + CompXZ[(#8)] * CompYX[Transpose[(#8)]] ) ) ) ) );
  //YY-YZ
  L_eg~{2}~{2}~{2}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompYY[(#8)] * CompYZ[(#8)] + CompYY[(#8)] * CompZY[(#8)]) +
                                                      2 * mu_g * (CompYY[(#8)] * CompZY[Transpose[(#8)]] + CompYZ[(#8)] * CompYY[Transpose[(#8)]] ) ) ) ) );
  //ZZ-YZ
  L_eg~{3}~{3}~{2}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompZZ[(#8)] * CompYZ[(#8)] + CompZZ[(#8)] * CompZY[(#8)]) +
                                                      2 * mu_g * (CompZY[(#8)] * CompZZ[Transpose[(#8)]] + CompZZ[(#8)] * CompYZ[Transpose[(#8)]] ) ) ) ) );
  //YZ-YZ
  L_eg~{2}~{3}~{2}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompYZ[(#8)] * CompYZ[(#8)] + CompYZ[(#8)] * CompZY[(#8)]) +
                                                      2 * mu_g * (CompYY[(#8)] * CompZZ[Transpose[(#8)]] + CompYZ[(#8)] * CompYZ[Transpose[(#8)]] ) ) ) ) );
  //XZ-YZ
  L_eg~{1}~{3}~{2}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompXZ[(#8)] * CompYZ[(#8)] + CompXZ[(#8)] * CompZY[(#8)]) +
                                                      2 * mu_g * (CompXY[(#8)] * CompZZ[Transpose[(#8)]] + CompXZ[(#8)] * CompYZ[Transpose[(#8)]] ) ) ) ) );
  //XY-YZ
  L_eg~{1}~{2}~{2}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompXY[(#8)] * CompYZ[(#8)] + CompXY[(#8)] * CompZY[(#8)]) +
                                                      2 * mu_g * (CompXY[(#8)] * CompZY[Transpose[(#8)]] + CompXZ[(#8)] * CompYY[Transpose[(#8)]] ) ) ) ) );
  
  //Fifth column "L_eg~{A}~{C}~{1}~{3}"
  //================================
  //XX-XZ
  L_eg~{1}~{1}~{1}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompXX[(#8)] * CompXZ[(#8)] + CompXX[(#8)] * CompZX[(#8)]) +
                                                      2 * mu_g * (CompXX[(#8)] * CompZX[Transpose[(#8)]] + CompXZ[(#8)] * CompXX[Transpose[(#8)]] ) ) ) ) );
  //YY-XZ
  L_eg~{2}~{2}~{1}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompYY[(#8)] * CompXZ[(#8)] + CompYY[(#8)] * CompZX[(#8)]) +
                                                      2 * mu_g * (CompYX[(#8)] * CompZY[Transpose[(#8)]] + CompYZ[(#8)] * CompXY[Transpose[(#8)]] ) ) ) ) );
  //ZZ-XZ
  L_eg~{3}~{3}~{1}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompZZ[(#8)] * CompXZ[(#8)] + CompZZ[(#8)] * CompZX[(#8)]) +
                                                      2 * mu_g * (CompZX[(#8)] * CompZZ[Transpose[(#8)]] + CompZZ[(#8)] * CompXZ[Transpose[(#8)]] ) ) ) ) );
  //YZ-XZ
  L_eg~{2}~{3}~{1}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompYZ[(#8)] * CompXZ[(#8)] + CompYZ[(#8)] * CompZX[(#8)]) +
                                                      2 * mu_g * (CompYX[(#8)] * CompZZ[Transpose[(#8)]] + CompYZ[(#8)] * CompXZ[Transpose[(#8)]] ) ) ) ) );
  //XZ-XZ
  L_eg~{1}~{3}~{1}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompXZ[(#8)] * CompXZ[(#8)] + CompXZ[(#8)] * CompZX[(#8)]) +
                                                      2 * mu_g * (CompXX[(#8)] * CompZZ[Transpose[(#8)]] + CompXZ[(#8)] * CompXZ[Transpose[(#8)]] ) ) ) ) );
  //XY-XZ
  L_eg~{1}~{2}~{1}~{3}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompXY[(#8)] * CompXZ[(#8)] + CompXY[(#8)] * CompZX[(#8)]) +
                                                      2 * mu_g * (CompXX[(#8)] * CompZY[Transpose[(#8)]] + CompXZ[(#8)] * CompXY[Transpose[(#8)]] ) ) ) ) );
  
  //Sixth column "L_eg~{A}~{C}~{1}~{2}"
  //================================
  //XX-XY
  L_eg~{1}~{1}~{1}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompXX[(#8)] * CompXY[(#8)] + CompXX[(#8)] * CompYX[(#8)]) +
                                                      2 * mu_g * (CompXX[(#8)] * CompYX[Transpose[(#8)]] + CompXY[(#8)] * CompXX[Transpose[(#8)]] ) ) ) ) );
  //YY-XY
  L_eg~{2}~{2}~{1}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompYY[(#8)] * CompXY[(#8)] + CompYY[(#8)] * CompYX[(#8)]) +
                                                      2 * mu_g * (CompYX[(#8)] * CompYY[Transpose[(#8)]] + CompYY[(#8)] * CompXY[Transpose[(#8)]] ) ) ) ) );
  //ZZ-XY
  L_eg~{3}~{3}~{1}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompZZ[(#8)] * CompXY[(#8)] + CompZZ[(#8)] * CompYX[(#8)]) +
                                                      2 * mu_g * (CompZX[(#8)] * CompYZ[Transpose[(#8)]] + CompZY[(#8)] * CompXZ[Transpose[(#8)]] ) ) ) ) );
  //YZ-XY
  L_eg~{2}~{3}~{1}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompYZ[(#8)] * CompXY[(#8)] + CompYZ[(#8)] * CompYX[(#8)]) +
                                                      2 * mu_g * (CompYX[(#8)] * CompYZ[Transpose[(#8)]] + CompYY[(#8)] * CompXZ[Transpose[(#8)]] ) ) ) ) );
  //XZ-XY
  L_eg~{1}~{3}~{1}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompXZ[(#8)] * CompXY[(#8)] + CompXZ[(#8)] * CompYX[(#8)]) +
                                                      2 * mu_g * (CompXX[(#8)] * CompYZ[Transpose[(#8)]] + CompXY[(#8)] * CompXZ[Transpose[(#8)]] ) ) ) ) );
  //XY-XY
  L_eg~{1}~{2}~{1}~{2}[] = ( (z_g[] == 0.0) ? 0.0 :
                             0.5 * ( (z_g[] * (#6) * (lambda_g * (CompXY[(#8)] * CompXY[(#8)] + CompXY[(#8)] * CompYX[(#8)]) +
                                                      2 * mu_g * (CompXX[(#8)] * CompYY[Transpose[(#8)]] + CompXY[(#8)] * CompXY[Transpose[(#8)]] ) ) ) ) );

  //=======================================================================================================================================================//
  //=======================================================================================================================================================//
  //=======================================================================================================================================================//
  
  
  Flag_PlasticStep[] = (#21);
  //Flag_PlasticStep[] = 0;

  C_eg[] = (Transpose[F_eg[#1, #2, #3]] * F_eg[#1, #2, #3]);
  E_eg[] = 0.5 * ((C_eg[]#12) - TensorDiag[1.0, 1.0, 1.0]);
  X_g[] = (#12) *(lambda_g * TTrace[E_eg[]#13] * TensorDiag[1.0, 1.0, 1.0] + 2 * mu_g * (#13));
  dev_X_g[] = X_g[] - (1.0/3.0) * TTrace[X_g[]] * TensorDiag[1.0, 1.0, 1.0];
  norm_dev_X_g[] = Sqrt[TTrace[Transpose[dev_X_g[]] * dev_X_g[]] ];
  N_g[] = dev_X_g[]/norm_dev_X_g[];
  
  sum_Ng_Eeg_Eeg_Ng[] = (CompXX[((N_g[]#14) * (#13))#15] * CompXX[((#13) * (#14))#16] + CompXY[#15] * CompXY[#16] + CompXZ[#15] * CompXZ[#16] +
                         CompYX[#15] * CompYX[#16] + CompYY[#15] * CompYY[#16] + CompYZ[#15] * CompYZ[#16] +
                         CompZX[#15] * CompZX[#16] + CompZY[#15] * CompZY[#16] + CompZZ[#15] * CompZZ[#16]);
  sum_Eeg2_Ng2[] = (CompXX[(#13 * #13)#17] * CompXX[(#14 * #14)#18] + CompXY[#17] * CompXY[#18] + CompXZ[#17] * CompXZ[#18] +
                    CompYX[#17] * CompYX[#18] + CompYY[#17] * CompYY[#18] + CompYZ[#17] * CompYZ[#18] +
                    CompZX[#17] * CompZX[#18] + CompZY[#17] * CompZY[#18] + CompZZ[#17] * CompZZ[#18]);
  sum_Eeg_Ng2[] = (CompXX[#13] * CompXX[#18] + CompXY[#13] * CompXY[#18] + CompXZ[#13] * CompXZ[#18] +
                   CompYX[#13] * CompYX[#18] + CompYY[#13] * CompYY[#18] + CompYZ[#13] * CompYZ[#18] +
                   CompZX[#13] * CompZX[#18] + CompZY[#13] * CompZY[#18] + CompZZ[#13] * CompZZ[#18]);
  sum_Ceg_Ng[] = SquNorm[ (CompXX[#12] * CompXX[#14] + CompXY[#12] * CompXY[#14] + CompXZ[#12] * CompXZ[#14] +
                           CompYX[#12] * CompYX[#14] + CompYY[#12] * CompYY[#14] + CompYZ[#12] * CompYZ[#14] +
                           CompZX[#12] * CompZX[#14] + CompZY[#12] * CompZY[#14] + CompZZ[#12] * CompZZ[#14]) ];
  sum_2_Ceg_Ng[] = SquNorm[sum_Ceg_Ng[]#19];
  
  
  alpha[] = (8 * mu_g * sum_Ng_Eeg_Eeg_Ng[] + 8 * mu_g * sum_Eeg2_Ng2[] + 4 * (lambda_g * TTrace[#13] + 3 * mu_g) * sum_Eeg_Ng2[] +
             2 * (lambda_g * TTrace[#13] + mu_g) + lambda_g * sum_2_Ceg_Ng[] );
  mat_H[] = (8 * mu_g * (Inv[#5]#20) * (0.5 * (#15 + Transpose[#15]) ) * Transpose[#20] +
             2 * (lambda_g * TTrace[#13] + mu_g) * (#20) * (#14) * Transpose[#20] +
             lambda_g * (#19) * (#8) );
  

    //First column "L_pg~{A}~{C}~{1}~{1}"
    //================================
    //XX-XX
    L_pg~{1}~{1}~{1}~{1}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(alpha[]#10)) * CompXX[(mat_H[]#11)] * CompXX[(#11)]) );
    //YY-XX
    L_pg~{2}~{2}~{1}~{1}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYY[(#11)] * CompXX[(#11)]) );
    //ZZ-XX
    L_pg~{3}~{3}~{1}~{1}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompZZ[(#11)] * CompXX[(#11)]) );
    //YZ-XX
    L_pg~{2}~{3}~{1}~{1}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYZ[(#11)] * CompXX[(#11)]) );
    //XZ-XX
    L_pg~{1}~{3}~{1}~{1}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXZ[(#11)] * CompXX[(#11)]) );
    //XY-XX
    L_pg~{1}~{2}~{1}~{1}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXY[(#11)] * CompXX[(#11)]) );

    //XX-YY
    L_pg~{1}~{1}~{2}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXX[(#11)] * CompYY[(#11)]) );
    //YY-YY
    L_pg~{2}~{2}~{2}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYY[(#11)] * CompYY[(#11)]) );
    //ZZ-YY
    L_pg~{3}~{3}~{2}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompZZ[(#11)] * CompYY[(#11)] ) );
    //YZ-YY
    L_pg~{2}~{3}~{2}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYZ[(#11)] * CompYY[(#11)] ) );
    //XZ-YY
    L_pg~{1}~{3}~{2}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXZ[(#11)] * CompYY[(#11)] ) );
    //XY-YY
    L_pg~{1}~{2}~{2}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXY[(#11)] * CompYY[(#11)] ) );

    //XX-ZZ
    L_pg~{1}~{1}~{3}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXX[(#11)] * CompZZ[(#11)] ) );
    //YY-ZZ
    L_pg~{2}~{2}~{3}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYY[(#11)] * CompZZ[(#11)] ) );
    //ZZ-ZZ
    L_pg~{3}~{3}~{3}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompZZ[(#11)] * CompZZ[(#11)] ) );
    //YZ-ZZ
    L_pg~{2}~{3}~{3}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYZ[(#11)] * CompZZ[(#11)] ) );
    //XZ-ZZ
    L_pg~{1}~{3}~{3}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXZ[(#11)] * CompZZ[(#11)] ) );
    //XY-ZZ
    L_pg~{1}~{2}~{3}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXY[(#11)] * CompZZ[(#11)] ) );

    //XX-YZ
    L_pg~{1}~{1}~{2}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXX[(#11)] * CompYZ[(#11)] ) );
    //YY-YZ
    L_pg~{2}~{2}~{2}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYY[(#11)] * CompYZ[(#11)] ) );
    //ZZ-YZ
    L_pg~{3}~{3}~{2}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompZZ[(#11)] * CompYZ[(#11)] ) );
    //YZ-YZ
    L_pg~{2}~{3}~{2}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYZ[(#11)] * CompYZ[(#11)] ) );
    //XZ-YZ
    L_pg~{1}~{3}~{2}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXZ[(#11)] * CompYZ[(#11)] ) );
    //XY-YZ
    L_pg~{1}~{2}~{2}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXY[(#11)] * CompYZ[(#11)] ) );

    //XX-XZ
    L_pg~{1}~{1}~{1}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXX[(#11)] * CompXZ[(#11)] ) );
    //YY-XZ
    L_pg~{2}~{2}~{1}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYY[(#11)] * CompXZ[(#11)] ) );
    //ZZ-XZ
    L_pg~{3}~{3}~{1}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompZZ[(#11)] * CompXZ[(#11)] ) );
    //YZ-XZ
    L_pg~{2}~{3}~{1}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYZ[(#11)] * CompXZ[(#11)] ) );
    //XZ-XZ
    L_pg~{1}~{3}~{1}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXZ[(#11)] * CompXZ[(#11)] ) );
    //XY-XZ
    L_pg~{1}~{2}~{1}~{3}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXY[(#11)] * CompXZ[(#11)] ) );

    //XX-XY
    L_pg~{1}~{1}~{1}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXX[(#11)] * CompXY[(#11)] ) );
    //YY-XY
    L_pg~{2}~{2}~{1}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYY[(#11)] * CompXY[(#11)] ) );
    //ZZ-XY
    L_pg~{3}~{3}~{1}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompZZ[(#11)] * CompXY[(#11)] ) );
    //YZ-XY
    L_pg~{2}~{3}~{1}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompYZ[(#11)] * CompXY[(#11)] ) );
    //XZ-XY
    L_pg~{1}~{3}~{1}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXZ[(#11)] * CompXY[(#11)] ) );
    //XY-XY
    L_pg~{1}~{2}~{1}~{2}[] = ( ((z_g[] == 0.0) || (Flag_PlasticStep[] == 0.0)) ? 0.0 : -(z_g[] * (#6) * (1/(#10)) * CompXY[(#11)] * CompXY[(#11)] ) );
    
    //EndIf// If(Flag_PlasticStep == 0)

  //=======================================================================================================================================================//
  //=======================================================================================================================================================//
  //=======================================================================================================================================================//
  
  //First column "L_er~{A}~{C}~{1}~{1}"
  //================================
  //XX-XX
  L_er~{1}~{1}~{1}~{1}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * Det[#4]#7 * (lambda_r * CompXX[C_p_[]#9] * CompXX[(#9)] +
                                                              mu_r * (CompXX[(#9)] * CompXX[Transpose[(#9)]] + CompXX[(#9)] * CompXX[Transpose[(#9)]] ) ) ) ) );
  //YY-XX
  L_er~{2}~{2}~{1}~{1}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompYY[(#9)] * CompXX[(#9)] +
                                                         mu_r * (CompYX[(#9)] * CompXY[Transpose[(#9)]] + CompYX[(#9)] * CompXY[Transpose[(#9)]] ) ) ) ) );
  //ZZ-XX
  L_er~{3}~{3}~{1}~{1}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompZZ[(#9)] * CompXX[(#9)] +
                                                         mu_r * (CompZX[(#9)] * CompXZ[Transpose[(#9)]] + CompZX[(#9)] * CompXZ[Transpose[(#9)]] ) ) ) ) );
  //YZ-XX
  L_er~{2}~{3}~{1}~{1}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompYZ[(#9)] * CompXX[(#9)] +
                                                         mu_r * (CompYX[(#9)] * CompXZ[Transpose[(#9)]] + CompYX[(#9)] * CompXZ[Transpose[(#9)]] ) ) ) ) );
  //XZ-XX
  L_er~{1}~{3}~{1}~{1}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompXZ[(#9)] * CompXX[(#9)] +
                                                         mu_r * (CompXX[(#9)] * CompXZ[Transpose[(#9)]] + CompXX[(#9)] * CompXZ[Transpose[(#9)]] ) ) ) ) );
  //XY-XX
  L_er~{1}~{2}~{1}~{1}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompXY[(#9)] * CompXX[(#9)] +
                                                         mu_r * (CompXX[(#9)] * CompXY[Transpose[(#9)]] + CompXX[(#9)] * CompXY[Transpose[(#9)]] ) ) ) ) );
  
  //Second column "L_er~{A}~{C}~{2}~{2}"
  //=================================
  //XX-YY
  L_er~{1}~{1}~{2}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompXX[(#9)] * CompYY[(#9)] +
                                                         mu_r * (CompXY[(#9)] * CompYX[Transpose[(#9)]] + CompXY[(#9)] * CompYX[Transpose[(#9)]] ) ) ) ) );
  //YY-YY
  L_er~{2}~{2}~{2}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompYY[(#9)] * CompYY[(#9)] +
                                                         mu_r * (CompYY[(#9)] * CompYY[Transpose[(#9)]] + CompYY[(#9)] * CompYY[Transpose[(#9)]] ) ) ) ) );
  //ZZ-YY
  L_er~{3}~{3}~{2}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompZZ[(#9)] * CompYY[(#9)] +
                                                         mu_r * (CompZY[(#9)] * CompYZ[Transpose[(#9)]] + CompZY[(#9)] * CompYZ[Transpose[(#9)]] ) ) ) ) );
  //YZ-YY
  L_er~{2}~{3}~{2}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompYZ[(#9)] * CompYY[(#9)] +
                                                         mu_r * (CompYY[(#9)] * CompYZ[Transpose[(#9)]] + CompYY[(#9)] * CompYZ[Transpose[(#9)]] ) ) ) ) );
  //XZ-YY
  L_er~{1}~{3}~{2}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompXZ[(#9)] * CompYY[(#9)] +
                                                         mu_r * (CompXY[(#9)] * CompYZ[Transpose[(#9)]] + CompXY[(#9)] * CompYZ[Transpose[(#9)]] ) ) ) ) );
  //XY-YY
  L_er~{1}~{2}~{2}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompXY[(#9)] * CompYY[(#9)] +
                                                         mu_r * (CompXY[(#9)] * CompYY[Transpose[(#9)]] + CompXY[(#9)] * CompYY[Transpose[(#9)]] ) ) ) ) );  
  
  //Third column "L_er~{A}~{C}~{3}~{3}"
  //================================
  //XX-ZZ
  L_er~{1}~{1}~{3}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompXX[(#9)] * CompZZ[(#9)] +
                                                         mu_r * (CompXZ[(#9)] * CompZX[Transpose[(#9)]] + CompXZ[(#9)] * CompZX[Transpose[(#9)]] ) ) ) ) );
  //YY-ZZ
  L_er~{2}~{2}~{3}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompYY[(#9)] * CompZZ[(#9)] +
                                                         mu_r * (CompYZ[(#9)] * CompZY[Transpose[(#9)]] + CompYZ[(#9)] * CompZY[Transpose[(#9)]] ) ) ) ) );
  //ZZ-ZZ
  L_er~{3}~{3}~{3}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompZZ[(#9)] * CompZZ[(#9)] +
                                                         mu_r * (CompZZ[(#9)] * CompZZ[Transpose[(#9)]] + CompZZ[(#9)] * CompZZ[Transpose[(#9)]] ) ) ) ) );
  //YZ-ZZ
  L_er~{2}~{3}~{3}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompYZ[(#9)] * CompZZ[(#9)] +
                                                         mu_r * (CompYZ[(#9)] * CompZZ[Transpose[(#9)]] + CompYZ[(#9)] * CompZZ[Transpose[(#9)]] ) ) ) ) );
  //XZ-ZZ
  L_er~{1}~{3}~{3}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompXZ[(#9)] * CompZZ[(#9)] +
                                                         mu_r * (CompXZ[(#9)] * CompZZ[Transpose[(#9)]] + CompXZ[(#9)] * CompZZ[Transpose[(#9)]] ) ) ) ) );
  //XY-ZZ
  L_er~{1}~{2}~{3}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             ( ( (1.0 - z_g[]) * (#7) * (lambda_r * CompXY[(#9)] * CompZZ[(#9)] +
                                                         mu_r * (CompXZ[(#9)] * CompZY[Transpose[(#9)]] + CompXZ[(#9)] * CompZY[Transpose[(#9)]] ) ) ) ) );
  
  //Fourth column "L_er~{A}~{C}~{2}~{3}"
  //=================================
  //XX-YZ
  L_er~{1}~{1}~{2}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompXX[(#9)] * CompYZ[(#9)] + CompXX[(#9)] * CompZY[(#9)]) +
                                                           2 * mu_r * (CompXY[(#9)] * CompZX[Transpose[(#9)]] + CompXZ[(#9)] * CompYX[Transpose[(#9)]] ) ) ) ) );
  //YY-YZ
  L_er~{2}~{2}~{2}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompYY[(#9)] * CompYZ[(#9)] + CompYY[(#9)] * CompZY[(#9)]) +
                                                           2 * mu_r * (CompYY[(#9)] * CompZY[Transpose[(#9)]] + CompYZ[(#9)] * CompYY[Transpose[(#9)]] ) ) ) ) );
  //ZZ-YZ
  L_er~{3}~{3}~{2}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompZZ[(#9)] * CompYZ[(#9)] + CompZZ[(#9)] * CompZY[(#9)]) +
                                                           2 * mu_r * (CompZY[(#9)] * CompZZ[Transpose[(#9)]] + CompZZ[(#9)] * CompYZ[Transpose[(#9)]] ) ) ) ) );
  //YZ-YZ
  L_er~{2}~{3}~{2}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompYZ[(#9)] * CompYZ[(#9)] + CompYZ[(#9)] * CompZY[(#9)]) +
                                                           2 * mu_r * (CompYY[(#9)] * CompZZ[Transpose[(#9)]] + CompYZ[(#9)] * CompYZ[Transpose[(#9)]] ) ) ) ) );
  //XZ-YZ
  L_er~{1}~{3}~{2}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompXZ[(#9)] * CompYZ[(#9)] + CompXZ[(#9)] * CompZY[(#9)]) +
                                                           2 * mu_r * (CompXY[(#9)] * CompZZ[Transpose[(#9)]] + CompXZ[(#9)] * CompYZ[Transpose[(#9)]] ) ) ) ) );
  //XY-YZ
  L_er~{1}~{2}~{2}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompXY[(#9)] * CompYZ[(#9)] + CompXY[(#9)] * CompZY[(#9)]) +
                                                           2 * mu_r * (CompXY[(#9)] * CompZY[Transpose[(#9)]] + CompXZ[(#9)] * CompYY[Transpose[(#9)]] ) ) ) ) );
  
  //Fifth column "L_er~{A}~{C}~{1}~{3}"
  //================================
  //XX-XZ
  L_er~{1}~{1}~{1}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompXX[(#9)] * CompXZ[(#9)] + CompXX[(#9)] * CompZX[(#9)]) +
                                                           2 * mu_r * (CompXX[(#9)] * CompZX[Transpose[(#9)]] + CompXZ[(#9)] * CompXX[Transpose[(#9)]] ) ) ) ) );
  //YY-XZ
  L_er~{2}~{2}~{1}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompYY[(#9)] * CompXZ[(#9)] + CompYY[(#9)] * CompZX[(#9)]) +
                                                           2 * mu_r * (CompYX[(#9)] * CompZY[Transpose[(#9)]] + CompYZ[(#9)] * CompXY[Transpose[(#9)]] ) ) ) ) );
  //ZZ-XZ
  L_er~{3}~{3}~{1}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompZZ[(#9)] * CompXZ[(#9)] + CompZZ[(#9)] * CompZX[(#9)]) +
                                                           2 * mu_r * (CompZX[(#9)] * CompZZ[Transpose[(#9)]] + CompZX[(#9)] * CompXZ[Transpose[(#9)]] ) ) ) ) );
  //YZ-XZ
  L_er~{2}~{3}~{1}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompYZ[(#9)] * CompXZ[(#9)] + CompYZ[(#9)] * CompZX[(#9)]) +
                                                           2 * mu_r * (CompYX[(#9)] * CompZZ[Transpose[(#9)]] + CompYZ[(#9)] * CompXZ[Transpose[(#9)]] ) ) ) ) );
  //XZ-XZ
  L_er~{1}~{3}~{1}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompXZ[(#9)] * CompXZ[(#9)] + CompXZ[(#9)] * CompZX[(#9)]) +
                                                           2 * mu_r * (CompXX[(#9)] * CompZZ[Transpose[(#9)]] + CompXZ[(#9)] * CompXZ[Transpose[(#9)]] ) ) ) ) );
  //XY-XZ
  L_er~{1}~{2}~{1}~{3}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompXY[(#9)] * CompXZ[(#9)] + CompXY[(#9)] * CompZX[(#9)]) +
                                                           2 * mu_r * (CompXX[(#9)] * CompZY[Transpose[(#9)]] + CompXZ[(#9)] * CompXY[Transpose[(#9)]] ) ) ) ) );
  
  //Sixth column "L_er~{A}~{C}~{1}~{2}"
  //================================
  //XX-XY
  L_er~{1}~{1}~{1}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompXX[(#9)] * CompXY[(#9)] + CompXX[(#9)] * CompYX[(#9)]) +
                                                           2 * mu_r * (CompXX[(#9)] * CompYX[Transpose[(#9)]] + CompXY[(#9)] * CompXX[Transpose[(#9)]] ) ) ) ) );
  //YY-XY
  L_er~{2}~{2}~{1}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompYY[(#9)] * CompXY[(#9)] + CompYY[(#9)] * CompYX[(#9)]) +
                                                           2 * mu_r * (CompYX[(#9)] * CompYY[Transpose[(#9)]] + CompYY[(#9)] * CompXY[Transpose[(#9)]] ) ) ) ) );
  //ZZ-XY
  L_er~{3}~{3}~{1}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompZZ[(#9)] * CompXY[(#9)] + CompZZ[(#9)] * CompYX[(#9)]) +
                                                           2 * mu_r * (CompZX[(#9)] * CompYZ[Transpose[(#9)]] + CompZY[(#9)] * CompXZ[Transpose[(#9)]] ) ) ) ) );
  //YZ-XY
  L_er~{2}~{3}~{1}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompYZ[(#9)] * CompXY[(#9)] + CompYZ[(#9)] * CompYX[(#9)]) +
                                                           2 * mu_r * (CompYX[(#9)] * CompYZ[Transpose[(#9)]] + CompYY[(#9)] * CompXZ[Transpose[(#9)]] ) ) ) ) );
  //XZ-XY
  L_er~{1}~{3}~{1}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompXZ[(#9)] * CompXY[(#9)] + CompXZ[(#9)] * CompYX[(#9)]) +
                                                           2 * mu_r * (CompXX[(#9)] * CompYZ[Transpose[(#9)]] + CompXY[(#9)] * CompXZ[Transpose[(#9)]] ) ) ) ) );
  //XY-XY
  L_er~{1}~{2}~{1}~{2}[] = ( (z_g[] == 1.0) ? 0.0 :
                             0.5 * ( ( (1-z_g[]) * (#7) * (lambda_r * (CompXY[(#9)] * CompXY[(#9)] + CompXY[(#9)] * CompYX[(#9)]) +
                                                           2 * mu_r * (CompXX[(#9)] * CompYY[Transpose[(#9)]] + CompXY[(#9)] * CompXY[Transpose[(#9)]] ) ) ) ) );

  
  L~{1}~{1}~{1}~{1}[] =  L_eg~{1}~{1}~{1}~{1}[] + L_pg~{1}~{1}~{1}~{1}[] + L_er~{1}~{1}~{1}~{1}[];
  L~{2}~{2}~{1}~{1}[] =  L_eg~{2}~{2}~{1}~{1}[] + L_pg~{2}~{2}~{1}~{1}[] +  L_er~{2}~{2}~{1}~{1}[];
  L~{3}~{3}~{1}~{1}[] =  L_eg~{3}~{3}~{1}~{1}[] + L_pg~{3}~{3}~{1}~{1}[] + L_er~{3}~{3}~{1}~{1}[];
  L~{2}~{3}~{1}~{1}[] =  L_eg~{2}~{3}~{1}~{1}[] + L_pg~{2}~{3}~{1}~{1}[] +  L_er~{2}~{3}~{1}~{1}[];
  L~{1}~{3}~{1}~{1}[] =  L_eg~{1}~{3}~{1}~{1}[] + L_pg~{1}~{3}~{1}~{1}[] +  L_er~{1}~{3}~{1}~{1}[];
  L~{1}~{2}~{1}~{1}[] =  L_eg~{1}~{2}~{1}~{1}[] + L_pg~{1}~{2}~{1}~{1}[] +  L_er~{1}~{2}~{1}~{1}[];
  
  L~{1}~{1}~{2}~{2}[] =  L_eg~{1}~{1}~{2}~{2}[] + L_pg~{1}~{1}~{2}~{2}[] +  L_er~{1}~{1}~{2}~{2}[];
  L~{2}~{2}~{2}~{2}[] =  L_eg~{2}~{2}~{2}~{2}[] + L_pg~{2}~{2}~{2}~{2}[] +  L_er~{2}~{2}~{2}~{2}[];
  L~{3}~{3}~{2}~{2}[] =  L_eg~{3}~{3}~{2}~{2}[] + L_pg~{3}~{3}~{2}~{2}[] +  L_er~{3}~{3}~{2}~{2}[];
  L~{2}~{3}~{2}~{2}[] =  L_eg~{2}~{3}~{2}~{2}[] + L_pg~{2}~{3}~{2}~{2}[] +  L_er~{2}~{3}~{2}~{2}[];
  L~{1}~{3}~{2}~{2}[] =  L_eg~{1}~{3}~{2}~{2}[] + L_pg~{1}~{3}~{2}~{2}[] +  L_er~{1}~{3}~{2}~{2}[];
  L~{1}~{2}~{2}~{2}[] =  L_eg~{1}~{2}~{2}~{2}[] + L_pg~{1}~{2}~{2}~{2}[] +  L_er~{1}~{2}~{2}~{2}[];
  
  L~{1}~{1}~{3}~{3}[] =  L_eg~{1}~{1}~{3}~{3}[] + L_pg~{1}~{1}~{3}~{3}[] +  L_er~{1}~{1}~{3}~{3}[];
  L~{2}~{2}~{3}~{3}[] =  L_eg~{2}~{2}~{3}~{3}[] + L_pg~{2}~{2}~{3}~{3}[] +  L_er~{2}~{2}~{3}~{3}[];
  L~{3}~{3}~{3}~{3}[] =  L_eg~{3}~{3}~{3}~{3}[] + L_pg~{3}~{3}~{3}~{3}[] +  L_er~{3}~{3}~{3}~{3}[];
  L~{2}~{3}~{3}~{3}[] =  L_eg~{2}~{3}~{3}~{3}[] + L_pg~{2}~{3}~{3}~{3}[] +  L_er~{2}~{3}~{3}~{3}[];
  L~{1}~{3}~{3}~{3}[] =  L_eg~{1}~{3}~{3}~{3}[] + L_pg~{1}~{3}~{3}~{3}[] +  L_er~{1}~{3}~{3}~{3}[];
  L~{1}~{2}~{3}~{3}[] =  L_eg~{1}~{2}~{3}~{3}[] + L_pg~{1}~{2}~{3}~{3}[] +  L_er~{1}~{2}~{3}~{3}[];
  
  L~{1}~{1}~{2}~{3}[] =  L_eg~{1}~{1}~{2}~{3}[] + L_pg~{1}~{1}~{2}~{3}[] +  L_er~{1}~{1}~{2}~{3}[];
  L~{2}~{2}~{2}~{3}[] =  L_eg~{2}~{2}~{2}~{3}[] + L_pg~{2}~{2}~{2}~{3}[] +  L_er~{2}~{2}~{2}~{3}[];
  L~{3}~{3}~{2}~{3}[] =  L_eg~{3}~{3}~{2}~{3}[] + L_pg~{3}~{3}~{2}~{3}[] +  L_er~{3}~{3}~{2}~{3}[];
  L~{2}~{3}~{2}~{3}[] =  L_eg~{2}~{3}~{2}~{3}[] + L_pg~{2}~{3}~{2}~{3}[] +  L_er~{2}~{3}~{2}~{3}[];
  L~{1}~{3}~{2}~{3}[] =  L_eg~{1}~{3}~{2}~{3}[] + L_pg~{1}~{3}~{2}~{3}[] +  L_er~{1}~{3}~{2}~{3}[];
  L~{1}~{2}~{2}~{3}[] =  L_eg~{1}~{2}~{2}~{3}[] + L_pg~{1}~{2}~{2}~{3}[] +  L_er~{1}~{2}~{2}~{3}[];
  
  L~{1}~{1}~{1}~{3}[] =  L_eg~{1}~{1}~{1}~{3}[] + L_pg~{1}~{1}~{1}~{3}[] +  L_er~{1}~{1}~{1}~{3}[];
  L~{2}~{2}~{1}~{3}[] =  L_eg~{2}~{2}~{1}~{3}[] + L_pg~{2}~{2}~{1}~{3}[] +  L_er~{2}~{2}~{1}~{3}[];
  L~{3}~{3}~{1}~{3}[] =  L_eg~{3}~{3}~{1}~{3}[] + L_pg~{3}~{3}~{1}~{3}[] +  L_er~{3}~{3}~{1}~{3}[];
  L~{2}~{3}~{1}~{3}[] =  L_eg~{2}~{3}~{1}~{3}[] + L_pg~{2}~{3}~{1}~{3}[] +  L_er~{2}~{3}~{1}~{3}[];
  L~{1}~{3}~{1}~{3}[] =  L_eg~{1}~{3}~{1}~{3}[] + L_pg~{1}~{3}~{1}~{3}[] +  L_er~{1}~{3}~{1}~{3}[];
  L~{1}~{2}~{1}~{3}[] =  L_eg~{1}~{2}~{1}~{3}[] + L_pg~{1}~{2}~{1}~{3}[] +  L_er~{1}~{2}~{1}~{3}[];
  
  L~{1}~{1}~{1}~{2}[] =  L_eg~{1}~{1}~{1}~{2}[] + L_pg~{1}~{1}~{1}~{2}[] +  L_er~{1}~{1}~{1}~{2}[];
  L~{2}~{2}~{1}~{2}[] =  L_eg~{2}~{2}~{1}~{2}[] + L_pg~{2}~{2}~{1}~{2}[] +  L_er~{2}~{2}~{1}~{2}[];
  L~{3}~{3}~{1}~{2}[] =  L_eg~{3}~{3}~{1}~{2}[] + L_pg~{3}~{3}~{1}~{2}[] +  L_er~{3}~{3}~{1}~{2}[];
  L~{2}~{3}~{1}~{2}[] =  L_eg~{2}~{3}~{1}~{2}[] + L_pg~{2}~{3}~{1}~{2}[] +  L_er~{2}~{3}~{1}~{2}[];
  L~{1}~{3}~{1}~{2}[] =  L_eg~{1}~{3}~{1}~{2}[] + L_pg~{1}~{3}~{1}~{2}[] +  L_er~{1}~{3}~{1}~{2}[];
  L~{1}~{2}~{1}~{2}[] =  L_eg~{1}~{2}~{1}~{2}[] + L_pg~{1}~{2}~{1}~{2}[] +  L_er~{1}~{2}~{1}~{2}[];
  
  
  // The material stiffness
  // $1 = F_tot_Current[], $2 = F_f_Current[],
  // $3 = F_pg_Current[] and $4 = F_p_Current[] 
  //============================================================
  
  // XX
  C_Mat~{1}~{1}[] = Tensor[
    CompXX[$1#1] * L~{1}~{1}~{1}~{1}[] * CompXX[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{3}[] * CompXZ[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{2}[] * CompXY[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{1}[] * CompXX[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{2}[] * CompXY[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{1}[] * CompXX[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{3}[] * CompXZ[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{2}[] * CompXY[#1],
                            
    CompXX[#1] * L~{1}~{1}~{2}~{2}[] * CompXY[#1] +
    CompXX[#1] * L~{1}~{1}~{2}~{3}[] * CompXZ[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{2}[] * CompXX[#1] +
    CompXZ[#1] * L~{1}~{3}~{2}~{2}[] * CompXY[#1] +
    CompXZ[#1] * L~{1}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{2}[] * CompXX[#1] +
    CompXY[#1] * L~{1}~{2}~{2}~{2}[] * CompXY[#1] +
    CompXY[#1] * L~{1}~{2}~{2}~{3}[] * CompXZ[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{2}[] * CompXX[#1],
    
    CompXX[#1] * L~{1}~{1}~{3}~{3}[] * CompXZ[#1] +
    CompXX[#1] * L~{1}~{1}~{2}~{3}[] * CompXY[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{3}[] * CompXX[#1] +
    CompXZ[#1] * L~{1}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompXZ[#1] * L~{1}~{3}~{2}~{3}[] * CompXY[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{3}[] * CompXX[#1] +
    CompXY[#1] * L~{1}~{2}~{3}~{3}[] * CompXZ[#1] +
    CompXY[#1] * L~{1}~{2}~{2}~{3}[] * CompXY[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{3}[] * CompXX[#1], 

    //===============================================================
    
    CompXY[#1] * L~{2}~{2}~{1}~{1}[] * CompXX[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{3}[] * CompXZ[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{2}[] * CompXY[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{1}[] * CompXX[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{2}[] * CompXY[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{1}[] * CompXX[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{3}[] * CompXZ[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{2}[] * CompXY[#1],
                            
    CompXY[#1] * L~{2}~{2}~{2}~{2}[] * CompXY[#1] +
    CompXY[#1] * L~{2}~{2}~{2}~{3}[] * CompXZ[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{2}[] * CompXX[#1] +
    CompXZ[#1] * L~{2}~{3}~{2}~{2}[] * CompXY[#1] +
    CompXZ[#1] * L~{2}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{2}[] * CompXX[#1] +
    CompXX[#1] * L~{1}~{2}~{2}~{2}[] * CompXY[#1] +
    CompXX[#1] * L~{1}~{2}~{2}~{3}[] * CompXZ[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{2}[] * CompXX[#1],
    
    CompXY[#1] * L~{2}~{2}~{3}~{3}[] * CompXZ[#1] +
    CompXY[#1] * L~{2}~{2}~{2}~{3}[] * CompXY[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{3}[] * CompXX[#1] +
    CompXZ[#1] * L~{2}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompXZ[#1] * L~{2}~{3}~{2}~{3}[] * CompXY[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{3}[] * CompXX[#1] +
    CompXX[#1] * L~{1}~{2}~{3}~{3}[] * CompXZ[#1] +
    CompXX[#1] * L~{1}~{2}~{2}~{3}[] * CompXY[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{3}[] * CompXX[#1], 

    //===============================================================
    
    CompXZ[#1] * L~{3}~{3}~{1}~{1}[] * CompXX[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{2}[] * CompXY[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{1}[] * CompXX[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{2}[] * CompXY[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{1}[] * CompXX[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{2}[] * CompXY[#1],
                            
    CompXZ[#1] * L~{3}~{3}~{2}~{2}[] * CompXY[#1] +
    CompXZ[#1] * L~{3}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{2}[] * CompXX[#1] +
    CompXY[#1] * L~{2}~{3}~{2}~{2}[] * CompXY[#1] +
    CompXY[#1] * L~{2}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{2}[] * CompXX[#1] +
    CompXX[#1] * L~{1}~{3}~{2}~{2}[] * CompXY[#1] +
    CompXX[#1] * L~{1}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{2}[] * CompXX[#1],
    
    CompXZ[#1] * L~{3}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompXZ[#1] * L~{3}~{3}~{2}~{3}[] * CompXY[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{3}[] * CompXX[#1] +
    CompXY[#1] * L~{2}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompXY[#1] * L~{2}~{3}~{2}~{3}[] * CompXY[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{3}[] * CompXX[#1] +
    CompXX[#1] * L~{1}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompXX[#1] * L~{1}~{3}~{2}~{3}[] * CompXY[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{3}[] * CompXX[#1]
    ];


  // YX
  C_Mat~{2}~{1}[] = Tensor[
    CompYX[#1] * L~{1}~{1}~{1}~{1}[] * CompXX[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{3}[] * CompXZ[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{2}[] * CompXY[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{1}[] * CompXX[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{2}[] * CompXY[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{1}[] * CompXX[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{3}[] * CompXZ[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{2}[] * CompXY[#1],
                            
    CompYX[#1] * L~{1}~{1}~{2}~{2}[] * CompXY[#1] +
    CompYX[#1] * L~{1}~{1}~{2}~{3}[] * CompXZ[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{2}[] * CompXX[#1] +
    CompYZ[#1] * L~{1}~{3}~{2}~{2}[] * CompXY[#1] +
    CompYZ[#1] * L~{1}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{2}[] * CompXX[#1] +
    CompYY[#1] * L~{1}~{2}~{2}~{2}[] * CompXY[#1] +
    CompYY[#1] * L~{1}~{2}~{2}~{3}[] * CompXZ[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{2}[] * CompXX[#1],
    
    CompYX[#1] * L~{1}~{1}~{3}~{3}[] * CompXZ[#1] +
    CompYX[#1] * L~{1}~{1}~{2}~{3}[] * CompXY[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{3}[] * CompXX[#1] +
    CompYZ[#1] * L~{1}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompYZ[#1] * L~{1}~{3}~{2}~{3}[] * CompXY[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{3}[] * CompXX[#1] +
    CompYY[#1] * L~{1}~{2}~{3}~{3}[] * CompXZ[#1] +
    CompYY[#1] * L~{1}~{2}~{2}~{3}[] * CompXY[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{3}[] * CompXX[#1], 

    //===============================================================
    
    CompYY[#1] * L~{2}~{2}~{1}~{1}[] * CompXX[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{3}[] * CompXZ[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{2}[] * CompXY[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{1}[] * CompXX[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{2}[] * CompXY[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{1}[] * CompXX[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{3}[] * CompXZ[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{2}[] * CompXY[#1],
                           
    CompYY[#1] * L~{2}~{2}~{2}~{2}[] * CompXY[#1] +
    CompYY[#1] * L~{2}~{2}~{2}~{3}[] * CompXZ[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{2}[] * CompXX[#1] +
    CompYZ[#1] * L~{2}~{3}~{2}~{2}[] * CompXY[#1] +
    CompYZ[#1] * L~{2}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{2}[] * CompXX[#1] +
    CompYX[#1] * L~{1}~{2}~{2}~{2}[] * CompXY[#1] +
    CompYX[#1] * L~{1}~{2}~{2}~{3}[] * CompXZ[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{2}[] * CompXX[#1],
    
    CompYY[#1] * L~{2}~{2}~{3}~{3}[] * CompXZ[#1] +
    CompYY[#1] * L~{2}~{2}~{2}~{3}[] * CompXY[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{3}[] * CompXX[#1] +
    CompYZ[#1] * L~{2}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompYZ[#1] * L~{2}~{3}~{2}~{3}[] * CompXY[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{3}[] * CompXX[#1] +
    CompYX[#1] * L~{1}~{2}~{3}~{3}[] * CompXZ[#1] +
    CompYX[#1] * L~{1}~{2}~{2}~{3}[] * CompXY[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{3}[] * CompXX[#1], 

    //===============================================================
    
    CompYZ[#1] * L~{3}~{3}~{1}~{1}[] * CompXX[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{2}[] * CompXY[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{1}[] * CompXX[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{2}[] * CompXY[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{1}[] * CompXX[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{2}[] * CompXY[#1],
                            
    CompYZ[#1] * L~{3}~{3}~{2}~{2}[] * CompXY[#1] +
    CompYZ[#1] * L~{3}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{2}[] * CompXX[#1] +
    CompYY[#1] * L~{2}~{3}~{2}~{2}[] * CompXY[#1] +
    CompYY[#1] * L~{2}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{2}[] * CompXX[#1] +
    CompYX[#1] * L~{1}~{3}~{2}~{2}[] * CompXY[#1] +
    CompYX[#1] * L~{1}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{2}[] * CompXX[#1],
    
    CompYZ[#1] * L~{3}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompYZ[#1] * L~{3}~{3}~{2}~{3}[] * CompXY[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{3}[] * CompXX[#1] +
    CompYY[#1] * L~{2}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompYY[#1] * L~{2}~{3}~{2}~{3}[] * CompXY[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{3}[] * CompXX[#1] +
    CompYX[#1] * L~{1}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompYX[#1] * L~{1}~{3}~{2}~{3}[] * CompXY[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{3}[] * CompXX[#1]
    ];

  // ZX
  C_Mat~{3}~{1}[] = Tensor[
    CompZX[#1] * L~{1}~{1}~{1}~{1}[] * CompXX[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{3}[] * CompXZ[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{2}[] * CompXY[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{1}[] * CompXX[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{2}[] * CompXY[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{1}[] * CompXX[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{3}[] * CompXZ[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{2}[] * CompXY[#1],
                            
    CompZX[#1] * L~{1}~{1}~{2}~{2}[] * CompXY[#1] +
    CompZX[#1] * L~{1}~{1}~{2}~{3}[] * CompXZ[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{2}[] * CompXX[#1] +
    CompZZ[#1] * L~{1}~{3}~{2}~{2}[] * CompXY[#1] +
    CompZZ[#1] * L~{1}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{2}[] * CompXX[#1] +
    CompZY[#1] * L~{1}~{2}~{2}~{2}[] * CompXY[#1] +
    CompZY[#1] * L~{1}~{2}~{2}~{3}[] * CompXZ[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{2}[] * CompXX[#1],
    
    CompZX[#1] * L~{1}~{1}~{3}~{3}[] * CompXZ[#1] +
    CompZX[#1] * L~{1}~{1}~{2}~{3}[] * CompXY[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{3}[] * CompXX[#1] +
    CompZZ[#1] * L~{1}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompZZ[#1] * L~{1}~{3}~{2}~{3}[] * CompXY[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{3}[] * CompXX[#1] +
    CompZY[#1] * L~{1}~{2}~{3}~{3}[] * CompXZ[#1] +
    CompZY[#1] * L~{1}~{2}~{2}~{3}[] * CompXY[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{3}[] * CompXX[#1], 

    //===============================================================
    
    CompZY[#1] * L~{2}~{2}~{1}~{1}[] * CompXX[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{3}[] * CompXZ[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{2}[] * CompXY[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{1}[] * CompXX[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{2}[] * CompXY[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{1}[] * CompXX[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{3}[] * CompXZ[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{2}[] * CompXY[#1],
                           
    CompZY[#1] * L~{2}~{2}~{2}~{2}[] * CompXY[#1] +
    CompZY[#1] * L~{2}~{2}~{2}~{3}[] * CompXZ[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{2}[] * CompXX[#1] +
    CompZZ[#1] * L~{2}~{3}~{2}~{2}[] * CompXY[#1] +
    CompZZ[#1] * L~{2}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{2}[] * CompXX[#1] +
    CompZX[#1] * L~{1}~{2}~{2}~{2}[] * CompXY[#1] +
    CompZX[#1] * L~{1}~{2}~{2}~{3}[] * CompXZ[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{2}[] * CompXX[#1],
    
    CompZY[#1] * L~{2}~{2}~{3}~{3}[] * CompXZ[#1] +
    CompZY[#1] * L~{2}~{2}~{2}~{3}[] * CompXY[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{3}[] * CompXX[#1] +
    CompZZ[#1] * L~{2}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompZZ[#1] * L~{2}~{3}~{2}~{3}[] * CompXY[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{3}[] * CompXX[#1] +
    CompZX[#1] * L~{1}~{2}~{3}~{3}[] * CompXZ[#1] +
    CompZX[#1] * L~{1}~{2}~{2}~{3}[] * CompXY[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{3}[] * CompXX[#1], 

    //===============================================================
    
    CompZZ[#1] * L~{3}~{3}~{1}~{1}[] * CompXX[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{2}[] * CompXY[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{1}[] * CompXX[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{2}[] * CompXY[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{1}[] * CompXX[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{3}[] * CompXZ[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{2}[] * CompXY[#1],
                            
    CompZZ[#1] * L~{3}~{3}~{2}~{2}[] * CompXY[#1] +
    CompZZ[#1] * L~{3}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{2}[] * CompXX[#1] +
    CompZY[#1] * L~{2}~{3}~{2}~{2}[] * CompXY[#1] +
    CompZY[#1] * L~{2}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{2}[] * CompXX[#1] +
    CompZX[#1] * L~{1}~{3}~{2}~{2}[] * CompXY[#1] +
    CompZX[#1] * L~{1}~{3}~{2}~{3}[] * CompXZ[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{2}[] * CompXX[#1],
    
    CompZZ[#1] * L~{3}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompZZ[#1] * L~{3}~{3}~{2}~{3}[] * CompXY[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{3}[] * CompXX[#1] +
    CompZY[#1] * L~{2}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompZY[#1] * L~{2}~{3}~{2}~{3}[] * CompXY[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{3}[] * CompXX[#1] +
    CompZX[#1] * L~{1}~{3}~{3}~{3}[] * CompXZ[#1] +
    CompZX[#1] * L~{1}~{3}~{2}~{3}[] * CompXY[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{3}[] * CompXX[#1]
    ];

  //=================================================================
  //=================================================================
  //=================================================================

  // XY
  C_Mat~{1}~{2}[] = Tensor[
    CompXX[#1] * L~{1}~{1}~{1}~{1}[] * CompYX[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{3}[] * CompYZ[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{2}[] * CompYY[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{1}[] * CompYX[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{2}[] * CompYY[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{1}[] * CompYX[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{3}[] * CompYZ[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{2}[] * CompYY[#1],
                            
    CompXX[#1] * L~{1}~{1}~{2}~{2}[] * CompYY[#1] +
    CompXX[#1] * L~{1}~{1}~{2}~{3}[] * CompYZ[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{2}[] * CompYX[#1] +
    CompXZ[#1] * L~{1}~{3}~{2}~{2}[] * CompYY[#1] +
    CompXZ[#1] * L~{1}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{2}[] * CompYX[#1] +
    CompXY[#1] * L~{1}~{2}~{2}~{2}[] * CompYY[#1] +
    CompXY[#1] * L~{1}~{2}~{2}~{3}[] * CompYZ[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{2}[] * CompYX[#1],
    
    CompXX[#1] * L~{1}~{1}~{3}~{3}[] * CompYZ[#1] +
    CompXX[#1] * L~{1}~{1}~{2}~{3}[] * CompYY[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{3}[] * CompYX[#1] +
    CompXZ[#1] * L~{1}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompXZ[#1] * L~{1}~{3}~{2}~{3}[] * CompYY[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{3}[] * CompYX[#1] +
    CompXY[#1] * L~{1}~{2}~{3}~{3}[] * CompYZ[#1] +
    CompXY[#1] * L~{1}~{2}~{2}~{3}[] * CompYY[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{3}[] * CompYX[#1], 

    //===============================================================
    
    CompXY[#1] * L~{2}~{2}~{1}~{1}[] * CompYX[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{3}[] * CompYZ[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{2}[] * CompYY[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{1}[] * CompYX[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{2}[] * CompYY[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{1}[] * CompYX[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{3}[] * CompYZ[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{2}[] * CompYY[#1],
                            
    CompXY[#1] * L~{2}~{2}~{2}~{2}[] * CompYY[#1] +
    CompXY[#1] * L~{2}~{2}~{2}~{3}[] * CompYZ[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{2}[] * CompYX[#1] +
    CompXZ[#1] * L~{2}~{3}~{2}~{2}[] * CompYY[#1] +
    CompXZ[#1] * L~{2}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{2}[] * CompYX[#1] +
    CompXX[#1] * L~{1}~{2}~{2}~{2}[] * CompYY[#1] +
    CompXX[#1] * L~{1}~{2}~{2}~{3}[] * CompYZ[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{2}[] * CompYX[#1],
    
    CompXY[#1] * L~{2}~{2}~{3}~{3}[] * CompYZ[#1] +
    CompXY[#1] * L~{2}~{2}~{2}~{3}[] * CompYY[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{3}[] * CompYX[#1] +
    CompXZ[#1] * L~{2}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompXZ[#1] * L~{2}~{3}~{2}~{3}[] * CompYY[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{3}[] * CompYX[#1] +
    CompXX[#1] * L~{1}~{2}~{3}~{3}[] * CompYZ[#1] +
    CompXX[#1] * L~{1}~{2}~{2}~{3}[] * CompYY[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{3}[] * CompYX[#1], 

    //===============================================================
    
    CompXZ[#1] * L~{3}~{3}~{1}~{1}[] * CompYX[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{2}[] * CompYY[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{1}[] * CompYX[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{2}[] * CompYY[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{1}[] * CompYX[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{2}[] * CompYY[#1],
                            
    CompXZ[#1] * L~{3}~{3}~{2}~{2}[] * CompYY[#1] +
    CompXZ[#1] * L~{3}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{2}[] * CompYX[#1] +
    CompXY[#1] * L~{2}~{3}~{2}~{2}[] * CompYY[#1] +
    CompXY[#1] * L~{2}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{2}[] * CompYX[#1] +
    CompXX[#1] * L~{1}~{3}~{2}~{2}[] * CompYY[#1] +
    CompXX[#1] * L~{1}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{2}[] * CompYX[#1],
    
    CompXZ[#1] * L~{3}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompXZ[#1] * L~{3}~{3}~{2}~{3}[] * CompYY[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{3}[] * CompYX[#1] +
    CompXY[#1] * L~{2}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompXY[#1] * L~{2}~{3}~{2}~{3}[] * CompYY[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{3}[] * CompYX[#1] +
    CompXX[#1] * L~{1}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompXX[#1] * L~{1}~{3}~{2}~{3}[] * CompYY[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{3}[] * CompYX[#1]
    ];


  // YY
  C_Mat~{2}~{2}[] = Tensor[
    CompYX[#1] * L~{1}~{1}~{1}~{1}[] * CompYX[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{3}[] * CompYZ[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{2}[] * CompYY[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{1}[] * CompYX[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{2}[] * CompYY[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{1}[] * CompYX[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{3}[] * CompYZ[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{2}[] * CompYY[#1],
                            
    CompYX[#1] * L~{1}~{1}~{2}~{2}[] * CompYY[#1] +
    CompYX[#1] * L~{1}~{1}~{2}~{3}[] * CompYZ[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{2}[] * CompYX[#1] +
    CompYZ[#1] * L~{1}~{3}~{2}~{2}[] * CompYY[#1] +
    CompYZ[#1] * L~{1}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{2}[] * CompYX[#1] +
    CompYY[#1] * L~{1}~{2}~{2}~{2}[] * CompYY[#1] +
    CompYY[#1] * L~{1}~{2}~{2}~{3}[] * CompYZ[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{2}[] * CompYX[#1],
    
    CompYX[#1] * L~{1}~{1}~{3}~{3}[] * CompYZ[#1] +
    CompYX[#1] * L~{1}~{1}~{2}~{3}[] * CompYY[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{3}[] * CompYX[#1] +
    CompYZ[#1] * L~{1}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompYZ[#1] * L~{1}~{3}~{2}~{3}[] * CompYY[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{3}[] * CompYX[#1] +
    CompYY[#1] * L~{1}~{2}~{3}~{3}[] * CompYZ[#1] +
    CompYY[#1] * L~{1}~{2}~{2}~{3}[] * CompYY[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{3}[] * CompYX[#1], 

    //===============================================================
    
    CompYY[#1] * L~{2}~{2}~{1}~{1}[] * CompYX[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{3}[] * CompYZ[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{2}[] * CompYY[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{1}[] * CompYX[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{2}[] * CompYY[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{1}[] * CompYX[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{3}[] * CompYZ[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{2}[] * CompYY[#1],
                           
    CompYY[#1] * L~{2}~{2}~{2}~{2}[] * CompYY[#1] +
    CompYY[#1] * L~{2}~{2}~{2}~{3}[] * CompYZ[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{2}[] * CompYX[#1] +
    CompYZ[#1] * L~{2}~{3}~{2}~{2}[] * CompYY[#1] +
    CompYZ[#1] * L~{2}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{2}[] * CompYX[#1] +
    CompYX[#1] * L~{1}~{2}~{2}~{2}[] * CompYY[#1] +
    CompYX[#1] * L~{1}~{2}~{2}~{3}[] * CompYZ[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{2}[] * CompYX[#1],
    
    CompYY[#1] * L~{2}~{2}~{3}~{3}[] * CompYZ[#1] +
    CompYY[#1] * L~{2}~{2}~{2}~{3}[] * CompYY[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{3}[] * CompYX[#1] +
    CompYZ[#1] * L~{2}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompYZ[#1] * L~{2}~{3}~{2}~{3}[] * CompYY[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{3}[] * CompYX[#1] +
    CompYX[#1] * L~{1}~{2}~{3}~{3}[] * CompYZ[#1] +
    CompYX[#1] * L~{1}~{2}~{2}~{3}[] * CompYY[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{3}[] * CompYX[#1], 

    //===============================================================
    
    CompYZ[#1] * L~{3}~{3}~{1}~{1}[] * CompYX[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{2}[] * CompYY[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{1}[] * CompYX[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{2}[] * CompYY[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{1}[] * CompYX[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{2}[] * CompYY[#1],
                            
    CompYZ[#1] * L~{3}~{3}~{2}~{2}[] * CompYY[#1] +
    CompYZ[#1] * L~{3}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{2}[] * CompYX[#1] +
    CompYY[#1] * L~{2}~{3}~{2}~{2}[] * CompYY[#1] +
    CompYY[#1] * L~{2}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{2}[] * CompYX[#1] +
    CompYX[#1] * L~{1}~{3}~{2}~{2}[] * CompYY[#1] +
    CompYX[#1] * L~{1}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{2}[] * CompYX[#1],
    
    CompYZ[#1] * L~{3}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompYZ[#1] * L~{3}~{3}~{2}~{3}[] * CompYY[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{3}[] * CompYX[#1] +
    CompYY[#1] * L~{2}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompYY[#1] * L~{2}~{3}~{2}~{3}[] * CompYY[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{3}[] * CompYX[#1] +
    CompYX[#1] * L~{1}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompYX[#1] * L~{1}~{3}~{2}~{3}[] * CompYY[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{3}[] * CompYX[#1] 
    ];

  // ZY
  C_Mat~{3}~{2}[] = Tensor[
    CompZX[#1] * L~{1}~{1}~{1}~{1}[] * CompYX[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{3}[] * CompYZ[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{2}[] * CompYY[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{1}[] * CompYX[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{2}[] * CompYY[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{1}[] * CompYX[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{3}[] * CompYZ[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{2}[] * CompYY[#1],
                            
    CompZX[#1] * L~{1}~{1}~{2}~{2}[] * CompYY[#1] +
    CompZX[#1] * L~{1}~{1}~{2}~{3}[] * CompYZ[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{2}[] * CompYX[#1] +
    CompZZ[#1] * L~{1}~{3}~{2}~{2}[] * CompYY[#1] +
    CompZZ[#1] * L~{1}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{2}[] * CompYX[#1] +
    CompZY[#1] * L~{1}~{2}~{2}~{2}[] * CompYY[#1] +
    CompZY[#1] * L~{1}~{2}~{2}~{3}[] * CompYZ[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{2}[] * CompYX[#1],
    
    CompZX[#1] * L~{1}~{1}~{3}~{3}[] * CompYZ[#1] +
    CompZX[#1] * L~{1}~{1}~{2}~{3}[] * CompYY[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{3}[] * CompYX[#1] +
    CompZZ[#1] * L~{1}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompZZ[#1] * L~{1}~{3}~{2}~{3}[] * CompYY[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{3}[] * CompYX[#1] +
    CompZY[#1] * L~{1}~{2}~{3}~{3}[] * CompYZ[#1] +
    CompZY[#1] * L~{1}~{2}~{2}~{3}[] * CompYY[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{3}[] * CompYX[#1], 

    //===============================================================
    
    CompZY[#1] * L~{2}~{2}~{1}~{1}[] * CompYX[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{3}[] * CompYZ[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{2}[] * CompYY[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{1}[] * CompYX[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{2}[] * CompYY[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{1}[] * CompYX[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{3}[] * CompYZ[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{2}[] * CompYY[#1],
                           
    CompZY[#1] * L~{2}~{2}~{2}~{2}[] * CompYY[#1] +
    CompZY[#1] * L~{2}~{2}~{2}~{3}[] * CompYZ[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{2}[] * CompYX[#1] +
    CompZZ[#1] * L~{2}~{3}~{2}~{2}[] * CompYY[#1] +
    CompZZ[#1] * L~{2}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{2}[] * CompYX[#1] +
    CompZX[#1] * L~{1}~{2}~{2}~{2}[] * CompYY[#1] +
    CompZX[#1] * L~{1}~{2}~{2}~{3}[] * CompYZ[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{2}[] * CompYX[#1],
    
    CompZY[#1] * L~{2}~{2}~{3}~{3}[] * CompYZ[#1] +
    CompZY[#1] * L~{2}~{2}~{2}~{3}[] * CompYY[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{3}[] * CompYX[#1] +
    CompZZ[#1] * L~{2}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompZZ[#1] * L~{2}~{3}~{2}~{3}[] * CompYY[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{3}[] * CompYX[#1] +
    CompZX[#1] * L~{1}~{2}~{3}~{3}[] * CompYZ[#1] +
    CompZX[#1] * L~{1}~{2}~{2}~{3}[] * CompYY[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{3}[] * CompYX[#1], 

    //===============================================================
    
    CompZZ[#1] * L~{3}~{3}~{1}~{1}[] * CompYX[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{2}[] * CompYY[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{1}[] * CompYX[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{2}[] * CompYY[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{1}[] * CompYX[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{3}[] * CompYZ[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{2}[] * CompYY[#1],
                            
    CompZZ[#1] * L~{3}~{3}~{2}~{2}[] * CompYY[#1] +
    CompZZ[#1] * L~{3}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{2}[] * CompYX[#1] +
    CompZY[#1] * L~{2}~{3}~{2}~{2}[] * CompYY[#1] +
    CompZY[#1] * L~{2}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{2}[] * CompYX[#1] +
    CompZX[#1] * L~{1}~{3}~{2}~{2}[] * CompYY[#1] +
    CompZX[#1] * L~{1}~{3}~{2}~{3}[] * CompYZ[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{2}[] * CompYX[#1],
    
    CompZZ[#1] * L~{3}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompZZ[#1] * L~{3}~{3}~{2}~{3}[] * CompYY[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{3}[] * CompYX[#1] +
    CompZY[#1] * L~{2}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompZY[#1] * L~{2}~{3}~{2}~{3}[] * CompYY[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{3}[] * CompYX[#1] +
    CompZX[#1] * L~{1}~{3}~{3}~{3}[] * CompYZ[#1] +
    CompZX[#1] * L~{1}~{3}~{2}~{3}[] * CompYY[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{3}[] * CompYX[#1]
    ];

  //=================================================================
  //=================================================================
  //=================================================================

  // XZ
  C_Mat~{1}~{3}[] = Tensor[
    CompXX[#1] * L~{1}~{1}~{1}~{1}[] * CompZX[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{3}[] * CompZZ[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{2}[] * CompZY[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{1}[] * CompZX[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{2}[] * CompZY[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{1}[] * CompZX[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{3}[] * CompZZ[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{2}[] * CompZY[#1],
                            
    CompXX[#1] * L~{1}~{1}~{2}~{2}[] * CompZY[#1] +
    CompXX[#1] * L~{1}~{1}~{2}~{3}[] * CompZZ[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{2}[] * CompZX[#1] +
    CompXZ[#1] * L~{1}~{3}~{2}~{2}[] * CompZY[#1] +
    CompXZ[#1] * L~{1}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{2}[] * CompZX[#1] +
    CompXY[#1] * L~{1}~{2}~{2}~{2}[] * CompZY[#1] +
    CompXY[#1] * L~{1}~{2}~{2}~{3}[] * CompZZ[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{2}[] * CompZX[#1],
    
    CompXX[#1] * L~{1}~{1}~{3}~{3}[] * CompZZ[#1] +
    CompXX[#1] * L~{1}~{1}~{2}~{3}[] * CompZY[#1] +
    CompXX[#1] * L~{1}~{1}~{1}~{3}[] * CompZX[#1] +
    CompXZ[#1] * L~{1}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompXZ[#1] * L~{1}~{3}~{2}~{3}[] * CompZY[#1] +
    CompXZ[#1] * L~{1}~{3}~{1}~{3}[] * CompZX[#1] +
    CompXY[#1] * L~{1}~{2}~{3}~{3}[] * CompZZ[#1] +
    CompXY[#1] * L~{1}~{2}~{2}~{3}[] * CompZY[#1] +
    CompXY[#1] * L~{1}~{2}~{1}~{3}[] * CompZX[#1], 

    //===============================================================
    
    CompXY[#1] * L~{2}~{2}~{1}~{1}[] * CompZX[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{3}[] * CompZZ[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{2}[] * CompZY[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{1}[] * CompZX[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{2}[] * CompZY[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{1}[] * CompZX[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{3}[] * CompZZ[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{2}[] * CompZY[#1],
                            
    CompXY[#1] * L~{2}~{2}~{2}~{2}[] * CompZY[#1] +
    CompXY[#1] * L~{2}~{2}~{2}~{3}[] * CompZZ[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{2}[] * CompZX[#1] +
    CompXZ[#1] * L~{2}~{3}~{2}~{2}[] * CompZY[#1] +
    CompXZ[#1] * L~{2}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{2}[] * CompZX[#1] +
    CompXX[#1] * L~{1}~{2}~{2}~{2}[] * CompZY[#1] +
    CompXX[#1] * L~{1}~{2}~{2}~{3}[] * CompZZ[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{2}[] * CompZX[#1],
    
    CompXY[#1] * L~{2}~{2}~{3}~{3}[] * CompZZ[#1] +
    CompXY[#1] * L~{2}~{2}~{2}~{3}[] * CompZY[#1] +
    CompXY[#1] * L~{2}~{2}~{1}~{3}[] * CompZX[#1] +
    CompXZ[#1] * L~{2}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompXZ[#1] * L~{2}~{3}~{2}~{3}[] * CompZY[#1] +
    CompXZ[#1] * L~{2}~{3}~{1}~{3}[] * CompZX[#1] +
    CompXX[#1] * L~{1}~{2}~{3}~{3}[] * CompZZ[#1] +
    CompXX[#1] * L~{1}~{2}~{2}~{3}[] * CompZY[#1] +
    CompXX[#1] * L~{1}~{2}~{1}~{3}[] * CompZX[#1], 

    //===============================================================
    
    CompXZ[#1] * L~{3}~{3}~{1}~{1}[] * CompZX[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{2}[] * CompZY[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{1}[] * CompZX[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{2}[] * CompZY[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{1}[] * CompZX[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{2}[] * CompZY[#1],
                            
    CompXZ[#1] * L~{3}~{3}~{2}~{2}[] * CompZY[#1] +
    CompXZ[#1] * L~{3}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{2}[] * CompZX[#1] +
    CompXY[#1] * L~{2}~{3}~{2}~{2}[] * CompZY[#1] +
    CompXY[#1] * L~{2}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{2}[] * CompZX[#1] +
    CompXX[#1] * L~{1}~{3}~{2}~{2}[] * CompZY[#1] +
    CompXX[#1] * L~{1}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{2}[] * CompZX[#1],
    
    CompXZ[#1] * L~{3}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompXZ[#1] * L~{3}~{3}~{2}~{3}[] * CompZY[#1] +
    CompXZ[#1] * L~{3}~{3}~{1}~{3}[] * CompZX[#1] +
    CompXY[#1] * L~{2}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompXY[#1] * L~{2}~{3}~{2}~{3}[] * CompZY[#1] +
    CompXY[#1] * L~{2}~{3}~{1}~{3}[] * CompZX[#1] +
    CompXX[#1] * L~{1}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompXX[#1] * L~{1}~{3}~{2}~{3}[] * CompZY[#1] +
    CompXX[#1] * L~{1}~{3}~{1}~{3}[] * CompZX[#1] 

    ];


  // YZ
  C_Mat~{2}~{3}[] = Tensor[
    CompYX[#1] * L~{1}~{1}~{1}~{1}[] * CompZX[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{3}[] * CompZZ[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{2}[] * CompZY[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{1}[] * CompZX[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{2}[] * CompZY[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{1}[] * CompZX[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{3}[] * CompZZ[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{2}[] * CompZY[#1],
                            
    CompYX[#1] * L~{1}~{1}~{2}~{2}[] * CompZY[#1] +
    CompYX[#1] * L~{1}~{1}~{2}~{3}[] * CompZZ[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{2}[] * CompZX[#1] +
    CompYZ[#1] * L~{1}~{3}~{2}~{2}[] * CompZY[#1] +
    CompYZ[#1] * L~{1}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{2}[] * CompZX[#1] +
    CompYY[#1] * L~{1}~{2}~{2}~{2}[] * CompZY[#1] +
    CompYY[#1] * L~{1}~{2}~{2}~{3}[] * CompZZ[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{2}[] * CompZX[#1],
    
    CompYX[#1] * L~{1}~{1}~{3}~{3}[] * CompZZ[#1] +
    CompYX[#1] * L~{1}~{1}~{2}~{3}[] * CompZY[#1] +
    CompYX[#1] * L~{1}~{1}~{1}~{3}[] * CompZX[#1] +
    CompYZ[#1] * L~{1}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompYZ[#1] * L~{1}~{3}~{2}~{3}[] * CompZY[#1] +
    CompYZ[#1] * L~{1}~{3}~{1}~{3}[] * CompZX[#1] +
    CompYY[#1] * L~{1}~{2}~{3}~{3}[] * CompZZ[#1] +
    CompYY[#1] * L~{1}~{2}~{2}~{3}[] * CompZY[#1] +
    CompYY[#1] * L~{1}~{2}~{1}~{3}[] * CompZX[#1], 

    //===============================================================
    
    CompYY[#1] * L~{2}~{2}~{1}~{1}[] * CompZX[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{3}[] * CompZZ[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{2}[] * CompZY[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{1}[] * CompZX[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{2}[] * CompZY[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{1}[] * CompZX[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{3}[] * CompZZ[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{2}[] * CompZY[#1],
                           
    CompYY[#1] * L~{2}~{2}~{2}~{2}[] * CompZY[#1] +
    CompYY[#1] * L~{2}~{2}~{2}~{3}[] * CompZZ[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{2}[] * CompZX[#1] +
    CompYZ[#1] * L~{2}~{3}~{2}~{2}[] * CompZY[#1] +
    CompYZ[#1] * L~{2}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{2}[] * CompZX[#1] +
    CompYX[#1] * L~{1}~{2}~{2}~{2}[] * CompZY[#1] +
    CompYX[#1] * L~{1}~{2}~{2}~{3}[] * CompZZ[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{2}[] * CompZX[#1],
    
    CompYY[#1] * L~{2}~{2}~{3}~{3}[] * CompZZ[#1] +
    CompYY[#1] * L~{2}~{2}~{2}~{3}[] * CompZY[#1] +
    CompYY[#1] * L~{2}~{2}~{1}~{3}[] * CompZX[#1] +
    CompYZ[#1] * L~{2}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompYZ[#1] * L~{2}~{3}~{2}~{3}[] * CompZY[#1] +
    CompYZ[#1] * L~{2}~{3}~{1}~{3}[] * CompZX[#1] +
    CompYX[#1] * L~{1}~{2}~{3}~{3}[] * CompZZ[#1] +
    CompYX[#1] * L~{1}~{2}~{2}~{3}[] * CompZY[#1] +
    CompYX[#1] * L~{1}~{2}~{1}~{3}[] * CompZX[#1], 

    //===============================================================
    
    CompYZ[#1] * L~{3}~{3}~{1}~{1}[] * CompZX[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{2}[] * CompZY[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{1}[] * CompZX[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{2}[] * CompZY[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{1}[] * CompZX[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{2}[] * CompZY[#1],
                            
    CompYZ[#1] * L~{3}~{3}~{2}~{2}[] * CompZY[#1] +
    CompYZ[#1] * L~{3}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{2}[] * CompZX[#1] +
    CompYY[#1] * L~{2}~{3}~{2}~{2}[] * CompZY[#1] +
    CompYY[#1] * L~{2}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{2}[] * CompZX[#1] +
    CompYX[#1] * L~{1}~{3}~{2}~{2}[] * CompZY[#1] +
    CompYX[#1] * L~{1}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{2}[] * CompZX[#1],
    
    CompYZ[#1] * L~{3}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompYZ[#1] * L~{3}~{3}~{2}~{3}[] * CompZY[#1] +
    CompYZ[#1] * L~{3}~{3}~{1}~{3}[] * CompZX[#1] +
    CompYY[#1] * L~{2}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompYY[#1] * L~{2}~{3}~{2}~{3}[] * CompZY[#1] +
    CompYY[#1] * L~{2}~{3}~{1}~{3}[] * CompZX[#1] +
    CompYX[#1] * L~{1}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompYX[#1] * L~{1}~{3}~{2}~{3}[] * CompZY[#1] +
    CompYX[#1] * L~{1}~{3}~{1}~{3}[] * CompZX[#1]
    ];

  // ZZ
  C_Mat~{3}~{3}[] = Tensor[
    CompZX[#1] * L~{1}~{1}~{1}~{1}[] * CompZX[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{3}[] * CompZZ[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{2}[] * CompZY[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{1}[] * CompZX[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{2}[] * CompZY[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{1}[] * CompZX[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{3}[] * CompZZ[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{2}[] * CompZY[#1],
                            
    CompZX[#1] * L~{1}~{1}~{2}~{2}[] * CompZY[#1] +
    CompZX[#1] * L~{1}~{1}~{2}~{3}[] * CompZZ[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{2}[] * CompZX[#1] +
    CompZZ[#1] * L~{1}~{3}~{2}~{2}[] * CompZY[#1] +
    CompZZ[#1] * L~{1}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{2}[] * CompZX[#1] +
    CompZY[#1] * L~{1}~{2}~{2}~{2}[] * CompZY[#1] +
    CompZY[#1] * L~{1}~{2}~{2}~{3}[] * CompZZ[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{2}[] * CompZX[#1],
    
    CompZX[#1] * L~{1}~{1}~{3}~{3}[] * CompZZ[#1] +
    CompZX[#1] * L~{1}~{1}~{2}~{3}[] * CompZY[#1] +
    CompZX[#1] * L~{1}~{1}~{1}~{3}[] * CompZX[#1] +
    CompZZ[#1] * L~{1}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompZZ[#1] * L~{1}~{3}~{2}~{3}[] * CompZY[#1] +
    CompZZ[#1] * L~{1}~{3}~{1}~{3}[] * CompZX[#1] +
    CompZY[#1] * L~{1}~{2}~{3}~{3}[] * CompZZ[#1] +
    CompZY[#1] * L~{1}~{2}~{2}~{3}[] * CompZY[#1] +
    CompZY[#1] * L~{1}~{2}~{1}~{3}[] * CompZX[#1], 

    //===============================================================
    
    CompZY[#1] * L~{2}~{2}~{1}~{1}[] * CompZX[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{3}[] * CompZZ[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{2}[] * CompZY[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{1}[] * CompZX[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{2}[] * CompZY[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{1}[] * CompZX[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{3}[] * CompZZ[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{2}[] * CompZY[#1],
                           
    CompZY[#1] * L~{2}~{2}~{2}~{2}[] * CompZY[#1] +
    CompZY[#1] * L~{2}~{2}~{2}~{3}[] * CompZZ[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{2}[] * CompZX[#1] +
    CompZZ[#1] * L~{2}~{3}~{2}~{2}[] * CompZY[#1] +
    CompZZ[#1] * L~{2}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{2}[] * CompZX[#1] +
    CompZX[#1] * L~{1}~{2}~{2}~{2}[] * CompZY[#1] +
    CompZX[#1] * L~{1}~{2}~{2}~{3}[] * CompZZ[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{2}[] * CompZX[#1],
    
    CompZY[#1] * L~{2}~{2}~{3}~{3}[] * CompZZ[#1] +
    CompZY[#1] * L~{2}~{2}~{2}~{3}[] * CompZY[#1] +
    CompZY[#1] * L~{2}~{2}~{1}~{3}[] * CompZX[#1] +
    CompZZ[#1] * L~{2}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompZZ[#1] * L~{2}~{3}~{2}~{3}[] * CompZY[#1] +
    CompZZ[#1] * L~{2}~{3}~{1}~{3}[] * CompZX[#1] +
    CompZX[#1] * L~{1}~{2}~{3}~{3}[] * CompZZ[#1] +
    CompZX[#1] * L~{1}~{2}~{2}~{3}[] * CompZY[#1] +
    CompZX[#1] * L~{1}~{2}~{1}~{3}[] * CompZX[#1], 

    //===============================================================
    
    CompZZ[#1] * L~{3}~{3}~{1}~{1}[] * CompZX[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{2}[] * CompZY[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{1}[] * CompZX[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{2}[] * CompZY[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{1}[] * CompZX[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{3}[] * CompZZ[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{2}[] * CompZY[#1],
                            
    CompZZ[#1] * L~{3}~{3}~{2}~{2}[] * CompZY[#1] +
    CompZZ[#1] * L~{3}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{2}[] * CompZX[#1] +
    CompZY[#1] * L~{2}~{3}~{2}~{2}[] * CompZY[#1] +
    CompZY[#1] * L~{2}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{2}[] * CompZX[#1] +
    CompZX[#1] * L~{1}~{3}~{2}~{2}[] * CompZY[#1] +
    CompZX[#1] * L~{1}~{3}~{2}~{3}[] * CompZZ[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{2}[] * CompZX[#1],
    
    CompZZ[#1] * L~{3}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompZZ[#1] * L~{3}~{3}~{2}~{3}[] * CompZY[#1] +
    CompZZ[#1] * L~{3}~{3}~{1}~{3}[] * CompZX[#1] +
    CompZY[#1] * L~{2}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompZY[#1] * L~{2}~{3}~{2}~{3}[] * CompZY[#1] +
    CompZY[#1] * L~{2}~{3}~{1}~{3}[] * CompZX[#1] +
    CompZX[#1] * L~{1}~{3}~{3}~{3}[] * CompZZ[#1] +
    CompZX[#1] * L~{1}~{3}~{2}~{3}[] * CompZY[#1] +
    CompZX[#1] * L~{1}~{3}~{1}~{3}[] * CompZX[#1]
    ];

}
