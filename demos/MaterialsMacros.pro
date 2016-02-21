Macro DefineMaterialFunctions

  n = Str[_MaterialName_];

  // --------------------------------------------------------------
  // Linear magnetic materials
  // --------------------------------------------------------------

  If(Exists[StringToName[StrCat[n, "_mur"]]])
    If(Exists[linearMagneticMaterials] && !StrFind[n, "UserMaterial"])
      linearMagneticMaterials() += Str[n];
    EndIf
  EndIf

  // --------------------------------------------------------------
  // Nonlinear magnetic materials
  // --------------------------------------------------------------

  // create intermediate lists and functions for interpolation of point data
  If(Exists[StringToName[StrCat[n, "_b_list"]]] &&
     Exists[StringToName[StrCat[n, "_h_list"]]])
    Parse[ StrCat[
      n, "_b2_list() = ", n, "_b_list()^2;",
      n, "_h2_list() = ", n, "_h_list()^2;",
      n, "_nu_list() = ", n, "_h_list() / ", n, "_b_list();",
      n, "_nu_list(0) = ", n, "_nu_list(1);",
      n, "_mu_list() = ", n, "_b_list() / ", n, "_h_list();",
      n, "_mu_list(0) = ", n, "_mu_list(1);",
      n, "_nu_b2_list() = ListAlt[", n, "_b2_list(),", n, "_nu_list()];",
      n, "_mu_h2_list() = ListAlt[", n, "_h2_list(),", n, "_mu_list()];"]
    ];
    // nu(\vec{b})
    Parse[ StrCat[n, "_nu[] = InterpolationLinear[SquNorm[$1]]{ ",
                  n, "_nu_b2_list() };"] ];
              // \frac{\partial nu}{\partial b^2}
    Parse[ StrCat[n, "_dnudb2[] = dInterpolationLinear[SquNorm[$1]]{ ",
                  n, "_nu_b2_list() };"] ];
    // mu(\vec{h})
    Parse[ StrCat[n, "_mu[] = InterpolationLinear[SquNorm[$1]]{ ",
                  n, "_mu_h2_list() };"] ];
    // \frac{\partial mu}{\partial h^2}
    Parse[ StrCat[n, "_dmudh2[] = dInterpolationLinear[SquNorm[$1]]{ ",
                  n, "_mu_h2_list() };"] ];
  EndIf

  // create h[], dhdb[], dhdb_NL[], b[], dbdh[] and dbdh_NL[] functions
  If(Exists[StringToName[StrCat[n, "_nu"]][]] &&
     Exists[StringToName[StrCat[n, "_dnudb2"]][]] &&
     Exists[StringToName[StrCat[n, "_mu"]][]] &&
     Exists[StringToName[StrCat[n, "_dmudh2"]][]])
    // \vec{h}(\vec{b})
    Parse[ StrCat[n, "_h[] = ", n, "_nu[$1] * $1;"] ];
    // \frac{\partial\vec{h}}{\partial\vec{b}}
    Parse[ StrCat[n, "_dhdb[] = TensorDiag[1,1,1] * ",
                  n, "_nu[$1#1] + 2 * ", n, "_dnudb2[#1] * SquDyadicProduct[#1];"] ];
    // \frac{\partial\vec{h}}{\partial\vec{b}}|_\text{NL}
    Parse[ StrCat[n, "_dhdb_NL[] = 2 * ", n, "_dnudb2[$1#1] * SquDyadicProduct[#1];"] ];
    // \vec{b}(\vec{h})
    Parse[ StrCat[n, "_b[] = ", n, "_mu[$1] * $1;"] ];
    // \frac{\partial\vec{b}}{\partial\vec{h}}
    Parse[ StrCat[n, "_dbdh[] = TensorDiag[1,1,1] * ",
                  n, "_mu[$1#1] + 2 * ", n, "_dmudh2[#1] * SquDyadicProduct[#1];"] ];
    // \frac{\partial\vec{b}}{\partial\vec{h}}|_\text{NL}
    Parse[ StrCat[n, "_dbdh_NL[] = 2 * ", n, "_dmudh2[$1#1] * SquDyadicProduct[#1];"] ];

    If(Exists[nonlinearMagneticMaterials] && !StrFind[n, "UserMaterial"])
      nonlinearMagneticMaterials() += Str[n];
    EndIf
  EndIf

Return
