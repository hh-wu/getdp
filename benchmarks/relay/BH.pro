Function{

  // nu = aa + bb * exp ( cc * b * b )
  // analytical
  aa = 153; bb = .55;  cc = 5.02;
  nu_26a[] = aa + bb * Exp[cc*SquNorm[$1]] ;
  dnudb2_26a[] = bb * cc* Exp[cc*SquNorm[$1]] ;
  h_26a[] = nu_26a[$1]*$1 ;
  dhdb_26a[] = TensorDiag[1,1,1] * nu_26a[$1#1] + 2*dnudb2_26a[#1] * SquDyadicProduct[#1]  ;
  dhdb_26a_NL[] = 2*dnudb2_26a[$1#1] * SquDyadicProduct[#1]  ;

  Mat26_b = {
    0.0000e+00, 5.0000e-01, 6.0000e-01, 7.0000e-01, 8.0000e-01, 9.0000e-01, 1.0000e+00,
    1.1000e+00, 1.2000e+00, 1.3000e+00, 1.4000e+00, 1.5000e+00, 1.6000e+00, 1.7000e+00,
    1.8000e+00, 1.9000e+00, 2.0000e+00, 2.1000e+00, 2.2000e+00, 2.3000e+00
  };

  Mat26_h = {
    0.0000e+00, 1.3300e+02, 1.4400e+02, 1.5500e+02, 1.6600e+02, 1.7900e+02, 1.9400e+02,
    2.1000e+02, 2.3800e+02, 2.9200e+02, 4.0700e+02, 7.3600e+02, 1.7690e+03, 4.2190e+03,
    8.2180e+03, 1.3936e+04, 2.4000e+04, 4.0000e+04, 8.0000e+04, 1.6000e+05
  };

  Mat26_b2 = Mat26_b()^2;
  Mat26_h2 = Mat26_h()^2;

  Mat26_nu = Mat26_h() / Mat26_b();
  Mat26_nu(0) = Mat26_nu(1);

  Mat26_nu_b2  = ListAlt[Mat26_b2(), Mat26_nu()] ;
  nu_26[] = InterpolationLinear[ SquNorm[$1] ]{ Mat26_nu_b2() } ;
  dnudb2_26[] = dInterpolationLinear[SquNorm[$1]]{ Mat26_nu_b2() } ;
  h_26[] = nu_26[$1] * $1 ;
  dhdb_26[] = TensorDiag[1,1,1] * nu_26[$1#1] + 2*dnudb2_26[#1] * SquDyadicProduct[#1]  ;
  dhdb_26_NL[] = 2*dnudb2_26[$1#1] * SquDyadicProduct[#1] ;
}
