Function {
  // OO2
  //TAKEN FROM CIRCLE_PIE !!
  xsimin = 0;
  xsimax = Pi / LC;
  // deltak[] = Pi / Norm[XYZ[]];
  deltak[] = Pi / .06;
  alphastar[] = I[] * ((k[]^2 - xsimin^2) * (k[]^2 - (k[]-deltak[])^2))^(1/4);
  betastar[] = ((xsimax^2 - k[]^2) * ((k[]+deltak[])^2 - k[]^2))^(1/4);
  a[] = - (alphastar[] * betastar[] - k[]^2) / (alphastar[] + betastar[]);
  b[] = - 1 / (alphastar[] + betastar[]);

  // OSRC
  N = NP_OSRC;
  keps[] = Complex[ kDtn[], kDtn[]/4. ];
  theta_branch = THETA_BRANCH_OSRC;
}
