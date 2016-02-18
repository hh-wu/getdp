Function{
  materials() = Str[];

  // Interpolated curve for inductor example
  SteelInd_h_list = {
    0.0000e+00, 5.5023e+00, 1.1018e+01, 1.6562e+01, 2.2149e+01, 2.7798e+01, 3.3528e+01,
    3.9363e+01, 4.5335e+01, 5.1479e+01, 5.7842e+01, 6.4481e+01, 7.1470e+01, 7.8906e+01,
    8.6910e+01, 9.5644e+01, 1.0532e+02, 1.1620e+02, 1.2868e+02, 1.4322e+02, 1.6050e+02,
    1.8139e+02, 2.0711e+02, 2.3932e+02, 2.8028e+02, 3.3314e+02, 4.0231e+02, 4.9395e+02,
    6.1678e+02, 7.8320e+02, 1.0110e+03, 1.3257e+03, 1.7645e+03, 2.3819e+03, 3.2578e+03,
    4.5110e+03, 6.3187e+03, 8.9478e+03, 1.2802e+04, 1.8500e+04, 2.6989e+04, 3.9739e+04,
    5.9047e+04, 8.8520e+04, 1.3388e+05, 2.0425e+05, 3.1434e+05, 4.8796e+05, 7.6403e+05
  } ;
  SteelInd_b_list = {
    0.0000e+00, 5.0000e-02, 1.0000e-01, 1.5000e-01, 2.0000e-01, 2.5000e-01, 3.0000e-01,
    3.5000e-01, 4.0000e-01, 4.5000e-01, 5.0000e-01, 5.5000e-01, 6.0000e-01, 6.5000e-01,
    7.0000e-01, 7.5000e-01, 8.0000e-01, 8.5000e-01, 9.0000e-01, 9.5000e-01, 1.0000e+00,
    1.0500e+00, 1.1000e+00, 1.1500e+00, 1.2000e+00, 1.2500e+00, 1.3000e+00, 1.3500e+00,
    1.4000e+00, 1.4500e+00, 1.5000e+00, 1.5500e+00, 1.6000e+00, 1.6500e+00, 1.7000e+00,
    1.7500e+00, 1.8000e+00, 1.8500e+00, 1.9000e+00, 1.9500e+00, 2.0000e+00, 2.0500e+00,
    2.1000e+00, 2.1500e+00, 2.2000e+00, 2.2500e+00, 2.3000e+00, 2.3500e+00, 2.4000e+00
  } ;
  materials() += Str[ "SteelInd" ];

  // Interpolated curve for 3kW induction machine
  Steel3kW_h_list = {
    0.0000e+00, 6.1465e+00, 1.2293e+01, 1.8440e+01, 2.4588e+01, 3.0736e+01, 3.6886e+01,
    4.3037e+01, 4.9190e+01, 5.5346e+01, 6.1507e+01, 6.7673e+01, 7.3848e+01, 8.0036e+01,
    8.6241e+01, 9.2473e+01, 9.8745e+01, 1.0508e+02, 1.1150e+02, 1.1806e+02, 1.2485e+02,
    1.3199e+02, 1.3971e+02, 1.4836e+02, 1.5856e+02, 1.7137e+02, 1.8864e+02, 2.1363e+02,
    2.5219e+02, 3.1498e+02, 4.2161e+02, 6.0888e+02, 9.4665e+02, 1.5697e+03, 2.7417e+03,
    4.9870e+03, 9.3633e+03, 1.8037e+04, 3.5518e+04, 7.1329e+04, 1.4591e+05, 3.0380e+05,
    6.4363e+05, 1.3872e+06, 3.0413e+06, 6.7826e+06, 1.5386e+07, 3.5504e+07, 8.3338e+07
  } ;
  Steel3kW_b_list = {
    0.0000e+00, 5.0000e-02, 1.0000e-01, 1.5000e-01, 2.0000e-01, 2.5000e-01, 3.0000e-01,
    3.5000e-01, 4.0000e-01, 4.5000e-01, 5.0000e-01, 5.5000e-01, 6.0000e-01, 6.5000e-01,
    7.0000e-01, 7.5000e-01, 8.0000e-01, 8.5000e-01, 9.0000e-01, 9.5000e-01, 1.0000e+00,
    1.0500e+00, 1.1000e+00, 1.1500e+00, 1.2000e+00, 1.2500e+00, 1.3000e+00, 1.3500e+00,
    1.4000e+00, 1.4500e+00, 1.5000e+00, 1.5500e+00, 1.6000e+00, 1.6500e+00, 1.7000e+00,
    1.7500e+00, 1.8000e+00, 1.8500e+00, 1.9000e+00, 1.9500e+00, 2.0000e+00, 2.0500e+00,
    2.1000e+00, 2.1500e+00, 2.2000e+00, 2.2500e+00, 2.3000e+00, 2.3500e+00, 2.4000e+00
  } ;
  materials() += Str[ "Steel3kW" ];

  // Analytic b-h curve: nu(b) = 100. + 10. * exp (1.8 * b * b)
  SteelAnalytic_nu[] = 100. + 10. * Exp[1.8*SquNorm[$1]];
  SteelAnalytic_dnudb2[] = 18. * Exp[1.8*SquNorm[$1]] ;
  SteelAnalytic_mu[] = ***;
  SteelAnalytic_dmudh2[] = ***;
  materials() += Str[ "SteelAnalytic" ];

  // Automatically create all the missing functions
  For i In {1 : #materials()}
    n = Str[ materials(i - 1) ];
    Printf(StrCat["Adding B-H curve for material: ", n]);

    // intermediate lists used for interpolation of point data
    If(Exists[ S2N[StrCat[n, "_b_list"]] ] && Exists[ S2N[StrCat[n, "_h_list"]] ])
      S2N[StrCat[n, "_b2_list"]]() = S2N[StrCat[n, "_b_list"]]()^2;
      S2N[StrCat[n, "_h2_list"]]() = S2N[StrCat[n, "_h_list"]]()^2;
      S2N[StrCat[n, "_nu_list"]]() =
        S2N[ StrCat[n, "_h_list"]]() / S2N[StrCat[n, "_b_list"]]();
      S2N[StrCat[n, "_nu_list"]](0) = S2N[StrCat[n, "_nu_list"]](1);
      S2N[StrCat[n, "_mu_list"]]() =
        S2N[ StrCat[n, "_b_list"]]() / S2N[StrCat[n, "_h_list"]]();
      S2N[StrCat[n, "_mu_list"]](0) = S2N[StrCat[n, "_mu_list"]](1);
      S2N[StrCat[n, "_nu_b2_list"]]() = ListAlt[S2N[StrCat[n, "_b2_list"]](),
                                                S2N[StrCat[n, "_nu_list"]]()];
      S2N[StrCat[n, "_mu_h2_list"]]() = ListAlt[S2N[StrCat[n, "_h2_list"]](),
                                                S2N[StrCat[n, "_mu_list"]]()];
    EndIf

    // for a-formulation ($1 argument is supposed to be \vec{b}, i.e. {d a}):
    If(!Exists[ S2N[StrCat[n, "_nu"]][] ])
      // nu(\vec{b})
      S2N[StrCat[n, "_nu"]][] =
        InterpolationLinear[SquNorm[$1]]{ S2N[StrCat[n, "_nu_b2_list"]]() };
    EndIf
    If(!Exists[ S2N[StrCat[n, "_dnudb2"]][] ])
      // \frac{\partial nu}{\partial b^2}
      S2N[StrCat[n, "_dnudb2"]][] =
        dInterpolationLinear[SquNorm[$1]]{ S2N[StrCat[n, "_nu_b2_list"]]() };
    EndIf
    // \vec{h}(\vec{b})
    S2N[StrCat[n, "_h"]][] = S2N[StrCat[n, "_nu"]][$1] * $1;
    // \frac{\partial\vec{h}}{\partial\vec{b}}
    S2N[StrCat[n, "_dhdb"]][] = TensorDiag[1,1,1] * S2N[StrCat[n, "_nu"]][$1#1] +
      2 * S2N[StrCat[n, "_dnudb2"]][#1] * SquDyadicProduct[#1];
    // \frac{\partial\vec{h}}{\partial\vec{b}}|_\text{NL}
    S2N[StrCat[n, "_dhdb_NL"]][] =
      2 * S2N[StrCat[n, "_dnudb2"]][$1#1] * SquDyadicProduct[#1];

    // for phi-formulation ($1 argument is supposed to be \vec{h}, i.e. -{d phi}):
    If(!Exists[ S2N[StrCat[n, "_mu"]][] ])
      // mu(\vec{h})
      S2N[StrCat[n, "_mu"]][] =
        InterpolationLinear[SquNorm[$1]]{ S2N[StrCat[n, "_mu_h2_list"]]() };
    EndIf
    If(!Exists[ S2N[StrCat[n, "_dmudh2"]][] ])
        // \frac{\partial mu}{\partial h^2}
      S2N[StrCat[n, "_dmudh2"]][] =
        dInterpolationLinear[SquNorm[$1]]{ S2N[StrCat[n, "_mu_h2_list"]]() };
    EndIf
    // \vec{b}(\vec{h})
    S2N[StrCat[n, "_b"]][] = S2N[StrCat[n, "_mu"]][$1] * $1;
    // \frac{\partial\vec{b}}{\partial\vec{h}}
    S2N[StrCat[n, "_dbdh"]][] = TensorDiag[1,1,1] * S2N[StrCat[n, "_mu"]][$1#1] +
      2 * S2N[StrCat[n, "_dmudh2"]][#1] * SquDyadicProduct[#1];
    // \frac{\partial\vec{b}}{\partial\vec{h}}|_\text{NL}
    S2N[StrCat[n, "_dbdh_NL"]][] =
      2 * S2N[StrCat[n, "_dmudh2"]][$1#1] * SquDyadicProduct[#1];

  EndFor
}
