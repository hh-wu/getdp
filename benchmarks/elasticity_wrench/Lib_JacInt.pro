
//+++
DefineConstant[ iP = 1 ];

DefineConstant[ DEF_JACINT~{iP} = 0 ]; // 0 at 1st include, then fixed to 1...

////////////////////
// DEF_JACINT~{iP}
If (DEF_JACINT~{iP} == 0)

DEF_JACINT~{iP} = 1; // ... 1: for not being included anymore

DefineConstant[ type_Dimension~{iP} = 2, flag_Symmetry_Axi~{iP} = 0 ];

DefineConstant[ CoefGeo~{iP} = (flag_Symmetry_Axi~{iP})? 2.*Pi : 1 ];

Function{ DefineFunction[ CoefJac~{iP} ]; }

Group {
  DefineGroup[ DomainInf~{iP} ];
  DefineGroup[ Domain_Dim_2~{iP} ];
  DefineConstant[
    SphShell_Rint~{iP}, SphShell_Rext~{iP}, // inner and outer radius of SphShell
    SphShell_Xc~{iP} = 0., SphShell_Yc~{iP} = 0., SphShell_Zc~{iP} = 0. // Center coord. of SphShell
  ];
}

If (!(flag_Symmetry_Axi~{iP} && type_Dimension~{iP}<=2))
Jacobian {
  {
    Name Vol~{iP};
    Case {
      { Region DomainInf~{iP};
        Jacobian VolSphShell {
          SphShell_Rint~{iP}, SphShell_Rext~{iP},
          SphShell_Xc~{iP}, SphShell_Yc~{iP}, SphShell_Zc~{iP}
        };
      }
      { Region Domain_Dim_2~{iP}; Jacobian Sur; Coefficient CoefJac~{iP}[]; }
      { Region All; Jacobian Vol; }
    }
  }
  {
    Name Sur~{iP};
    Case {
      { Region Domain_Dim_2~{iP}; Jacobian Lin; }
      { Region All; Jacobian Sur; }
    }
  }
}

Else
Jacobian {
  {
    Name Vol~{iP};
    Case {
      { Region DomainInf~{iP};
        Jacobian VolAxiSquSphShell {
          SphShell_Rint~{iP}, SphShell_Rext~{iP},
          SphShell_Xc~{iP}, SphShell_Yc~{iP}, SphShell_Zc~{iP}
        };
      }
      { Region All; Jacobian VolAxiSqu; }
    }
  } 
  {
    Name Sur~{iP};
    Case {
      { Region All; Jacobian SurAxi; }
    }
  }
}
EndIf



DefineConstant[
  FE_Degree~{iP} = 1 // 1: if not yet defined
];

If (FE_Degree~{iP} == 1)
Integration {
  { Name Gauss_v~{iP};
    Case {
      {Type Gauss;
        Case {
          { GeoElement Point      ; NumberOfPoints  1; }
          { GeoElement Line       ; NumberOfPoints  3; }
          { GeoElement Triangle   ; NumberOfPoints  3; }
          { GeoElement Quadrangle ; NumberOfPoints  4; }
          { GeoElement Tetrahedron; NumberOfPoints  4; }
          { GeoElement Hexahedron ; NumberOfPoints  6; }
          { GeoElement Prism      ; NumberOfPoints  9; }
          { GeoElement Pyramid    ; NumberOfPoints  8; }
        }
      }
    }
  }
}


ElseIf (FE_Degree~{iP} == 2)
Integration {
  { Name Gauss_v~{iP};
    Case {
      {Type Gauss;
        Case {
          { GeoElement Point      ; NumberOfPoints  1; }
          { GeoElement Line       ; NumberOfPoints  5; }
          { GeoElement Triangle   ; NumberOfPoints  7; }
          { GeoElement Quadrangle ; NumberOfPoints  7; }
          { GeoElement Tetrahedron; NumberOfPoints 15; }
          { GeoElement Hexahedron ; NumberOfPoints 14; }
          { GeoElement Prism      ; NumberOfPoints 21; }
          { GeoElement Pyramid    ; NumberOfPoints  8; }
        }
      }
    }
  }
}
EndIf

EndIf
// DEF_JACINT~{iP}
////////////////////
