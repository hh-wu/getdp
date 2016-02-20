// This macro defines the necessary functions for a nonlinear magnetic material,
// based either on point data or on analytic functions
//
// Input:
//   * "_MaterialName_": name of the material
//   * either "_MaterialName_"_b_list() and "_MaterialName_"_h_list(): point data
//   * or "_MaterialName_"_nu[], "_MaterialName_"_dnudb2[], "_MaterialName_"_mu[]
//     and "_MaterialName_"_dmudh2[]: analytic functions
// Output:
//   * "_MaterialName_"_nu[]
//   * "_MaterialName_"_dnudb2[]
//   * "_MaterialName_"_h[]
//   * "_MaterialName_"_dhdb[]
//   * "_MaterialName_"_dhdb_NL[]
//   * "_MaterialName_"_mu[]
//   * "_MaterialName_"_dmudh2[]
//   * "_MaterialName_"_b[]
//   * "_MaterialName_"_dbdh[]
//   * "_MaterialName_"_dbdh_NL[]

Macro DefineBHFunctions

  n = Str[_MaterialName_];

  // create intermediate lists used for interpolation of point data
  If(Exists[ StringToName[StrCat[n, "_b_list"]] ] &&
     Exists[ StringToName[StrCat[n, "_h_list"]] ])
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
  EndIf

  // create functions for a-formulation ($1 argument is supposed to be \vec{b},
  // i.e. {d a}):
  If(!Exists[ StringToName[StrCat[n, "_nu"]][] ])
    // nu(\vec{b})
    Parse[ StrCat[n, "_nu[] = InterpolationLinear[SquNorm[$1]]{ ",
                  n, "_nu_b2_list() };"] ];
  EndIf
  If(!Exists[ StringToName[StrCat[n, "_dnudb2"]][] ])
    // \frac{\partial nu}{\partial b^2}
    Parse[ StrCat[n, "_dnudb2[] = dInterpolationLinear[SquNorm[$1]]{ ",
                  n, "_nu_b2_list() };"] ];
  EndIf
  // \vec{h}(\vec{b})
  Parse[ StrCat[n, "_h[] = ", n, "_nu[$1] * $1;"] ];
  // \frac{\partial\vec{h}}{\partial\vec{b}}
  Parse[ StrCat[n, "_dhdb[] = TensorDiag[1,1,1] * ",
                n, "_nu[$1#1] + 2 * ", n, "_dnudb2[#1] * SquDyadicProduct[#1];"] ];
  // \frac{\partial\vec{h}}{\partial\vec{b}}|_\text{NL}
  Parse[ StrCat[n, "_dhdb_NL[] = 2 * ", n, "_dnudb2[$1#1] * SquDyadicProduct[#1];"] ];

  // create functions for phi-formulation ($1 argument is supposed to be
  // \vec{h}, i.e. -{d phi}):
  If(!Exists[ StringToName[StrCat[n, "_mu"]][] ])
    // mu(\vec{h})
    Parse[ StrCat[n, "_mu[] = InterpolationLinear[SquNorm[$1]]{ ",
                  n, "_mu_h2_list() };"] ];
  EndIf
  If(!Exists[ StringToName[StrCat[n, "_dmudh2"]][] ])
      // \frac{\partial mu}{\partial h^2}
    Parse[ StrCat[n, "_dmudh2[] = dInterpolationLinear[SquNorm[$1]]{ ",
                  n, "_mu_h2_list() };"] ];
  EndIf
  // \vec{b}(\vec{h})
  Parse[ StrCat[n, "_b[] = ", n, "_mu[$1] * $1;"] ];
  // \frac{\partial\vec{b}}{\partial\vec{h}}
  Parse[ StrCat[n, "_dbdh[] = TensorDiag[1,1,1] * ",
                n, "_mu[$1#1] + 2 * ", n, "_dmudh2[#1] * SquDyadicProduct[#1];"] ];
  // \frac{\partial\vec{b}}{\partial\vec{h}}|_\text{NL}
  Parse[ StrCat[n, "_dbdh_NL[] = 2 * ", n, "_dmudh2[$1#1] * SquDyadicProduct[#1];"] ];

Return
