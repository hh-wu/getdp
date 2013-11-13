NP_OSRC = 2;
THETA_BRANCH_OSRC = 0.785398;
theta_branch = THETA_BRANCH_OSRC;

Function{
  // Parameters for OSRC
  // kappa[] =  Norm[XYZ[]];// 1/R_INT; // curvature
  // keps[] = Complex[ k, 0.4 * k^(1/3) * kappa[]^(-2/3) ];
  kappa[] =  1;//Norm[XYZ[]];// 1/R_INT; // curvature
  kepsI = 0.;//Complex[ k, 0.4 * k^(1/3) * kappa[]^(-2/3) ];
  keps[] = k*(1+kepsI*I[]);
  keps2[] =  keps[]^2;

  //Parameters for JFLee
  kmax[] = Pi/LC ;//Norm[XYZ[]]*Pi/LC ;
  // kmax[] = Norm[XYZ[]]*Pi/LC ;
  delt[] = Sqrt[kmax[]^2-k^2]/Sqrt[k^2];
  Coef_Lee1[] = 1/(1 + I[]*delt[]);
  Coef_Lee2[] = -Coef_Lee1[];
}
