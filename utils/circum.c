
/* CircumCircles */

int Solve_Sys3x3 (double mat[3][3], double b[3], double res[3], double *det){
  double ud;
  int i;
  
  *det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
    mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
      mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
  
  if(*det == 0.0)return(0);
  
  ud = 1./(*det);
	   
  res[0] = b[0] * (mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1]) -
    mat[0][1] * (b[1]*mat[2][2] - mat[1][2]*b[2]) +
    mat[0][2] * (b[1]*mat[2][1] - mat[1][1]*b[2]);
  
  res[1] = mat[0][0] * (b[1]*mat[2][2] - mat[1][2]*b[2]) -
    b[0] * (mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0]) +
    mat[0][2] * (mat[1][0]*b[2] - b[1]*mat[2][0]);
  
  res[2] = mat[0][0] * (mat[1][1]*b[2] - b[1]*mat[2][1]) -
    mat[0][1] * (mat[1][0]*b[2] - b[1]*mat[2][0]) +
    b[0] * (mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);
  
  for(i=0;i<3;i++)res[i] *= ud ;
  return(1);
  
}

void Get_CenterCircumSphere(double *X, double *Y, double *Z, double res[3]){
  double mat[3][3],b[3],dum;
  int i;

  b[0] = X[1]*X[1] - X[0]*X[0] + Y[1]*Y[1] - Y[0]*Y[0] + Z[1]*Z[1] - Z[0]*Z[0];
  b[1] = X[2]*X[2] - X[1]*X[1] + Y[2]*Y[2] - Y[1]*Y[1] + Z[2]*Z[2] - Z[1]*Z[1];
  b[2] = X[3]*X[3] - X[2]*X[2] + Y[3]*Y[3] - Y[2]*Y[2] + Z[3]*Z[3] - Z[2]*Z[2];

  for(i=0;i<3;i++) b[i] *= 0.5;

  mat[0][0] = X[1]-X[0]; mat[0][1] = Y[1]-Y[0]; mat[0][2] = Z[1]-Z[0];
  mat[1][0] = X[2]-X[1]; mat[1][1] = Y[2]-Y[1]; mat[1][2] = Z[2]-Z[1];
  mat[2][0] = X[3]-X[2]; mat[2][1] = Y[3]-Y[2]; mat[2][2] = Z[3]-Z[2];

  if(!Solve_Sys3x3(mat, b, res, &dum)){
    Msg(WARNING, "Get_CenterCircumSphere: Flat Tetrahedron"); 
    res[0] = res[1] = res[2] = 10.e10;
  }
}

void Get_CenterCircumCircle(double *X, double *Y, double *Z, double res[3]){
  double d, a1, a2, a3;
  
  d = 2. * ( Y[0]*(X[1]-X[2]) + Y[1]*(X[2]-X[0]) + Y[2]*(X[0]-X[1]));

  if (d == 0.0){
    Msg(WARNING, "Get_CenterCircumCircle: Points Colinear"); 
    res[0] = res[1] = res[2] = 10.e10;
  }
    
  a1 = X[0]*X[0] + Y[0]*Y[0];
  a2 = X[1]*X[1] + Y[1]*Y[1];
  a3 = X[2]*X[2] + Y[2]*Y[2];
  res[0] = (a1*(Y[2]-Y[1]) + a2*(Y[0]-Y[2]) + a3*(Y[1]-Y[0])) / d ;
  res[1] = (a1*(X[1]-X[2]) + a2*(X[2]-X[0]) + a3*(X[0]-X[1])) / d ;
  res[2] = 0. ;
}

double Get_RadiusCircumCircle(struct Element * Element){
  double center[3] ;

  switch(Element->Type){
  case LINE : 
    return 0.5 * sqrt( DSQR(Element->x[1]-Element->x[0]) +
		       DSQR(Element->y[1]-Element->y[0]) +
		       DSQR(Element->z[1]-Element->z[0]) ) ;

  case TRIANGLE :
    Get_CenterCircumCircle(Element->x, Element->y, Element->z, center);
    return sqrt( DSQU(center[0] - Element->x[0]) +
		 DSQU(center[1] - Element->y[0]) ) ;

  case TETRAHEDRON :
    Get_CenterCircumSphere(Element->x, Element->y, Element->z, center);
    return sqrt( DSQU(center[0] - Element->x[0]) +
		 DSQU(center[1] - Element->y[0]) +
		 DSQU(center[2] - Element->z[0]) ) ;

  default :
    Msg(ERROR, "Get_ElementSize not done for Element Type = %d", Element->Type);
    return 0 ;
  }

}

