Function {

  // 3. Kinetic information : second Piola Kirchhoff [PK2] stresses
  //===============================================================
  // Green Lagrange strain measure GL = E = 0.5 * (C - I) and the 2nd Piola-Kirchoff stress 
  //=======================================================================================
  FT_F[] = Transpose[$1] * $1; // C = (F^T * F)
  GL[] = 0.5 * (FT_F[$1] - TensorDiag[1.0, 1.0, 1.0]);
  GL_Trace[] = (CompXX[GL[$1]] + CompYY[GL[#1]] + CompZZ[GL[#1]]) ;
  PK2_r[] = (lambda_r * GL_Trace[$1] * TensorDiag[1.0, 1.0, 1.0] + 2 * mu_r * GL[$1]); 
  PK2_g[] = (lambda_g * GL_Trace[$1] * TensorDiag[1.0, 1.0, 1.0] + 2 * mu_g * GL[$1]); 
  PK2[] = z_g[] * PK2_g[$1] + (1.0 - z_g[]) * PK2_r[$1];

  // 4. The nonlinear right hand side
  //=================================
  //RHS[] = PK2[$1] * Transpose[$1]; // The first Piola Kirchhoff : P = S * F^T
  RHS[] = $1 * PK2[$1]; // The first Piola Kirchhoff : P = F S
  
  // x
  P~{1}[] = Vector[CompXX[RHS[$1#1]], CompXY[RHS[#1]], CompXZ[RHS[#1]] ];
  // y
  P~{2}[] = Vector[CompYX[RHS[$1#1]], CompYY[RHS[#1]], CompYZ[RHS[#1]] ];
  // z
  P~{3}[] = Vector[CompZX[RHS[$1#1]], CompZY[RHS[#1]], CompZZ[RHS[#1]] ];

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



    
  // The material stiffness
  //========================
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
    C_Mat~{i}~{j}[] =  C_Mat_lambda~{i}~{j}[$1#1]  + Transpose[C_Mat_mu~{i}~{j}[#1]] ;
    EndFor
  EndFor

}
