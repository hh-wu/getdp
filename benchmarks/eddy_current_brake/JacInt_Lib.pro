/*
  Jacobian methods

  GlobalGroup :
  -----------
    DomainInf                Regions with Spherical Shell Transformation

  Parameters :
  ----------
    Val_Rint, Val_Rext       Inner and outer radius of the Spherical Shell
*/

// --------------------------------------------------------------------------

Group {
  DefineGroup[ DomainInf ];
  DefineVariable[ Val_Rint, Val_Rext ];
}

// --------------------------------------------------------------------------

Jacobian {
  { Name Vol ;
    Case { { Region DomainInf ; Jacobian VolSphShell {Val_Rint, Val_Rext} ; }
           { Region All ;       Jacobian Vol ; }
    }
  }
  { Name Sur ;
    Case { { Region All ; Jacobian Sur ; }
    }
  }
}

// --------------------------------------------------------------------------
// Number of integration points
// --------------------------------------------------------------------------

Integration {

  { Name II ;
    Case {
      {
	Type Gauss ;
	Case {
	  { GeoElement Triangle    ; NumberOfPoints  4 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
	  { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
	  { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
	  { GeoElement Prism       ; NumberOfPoints  21 ; }
	  { GeoElement Line        ; NumberOfPoints  4 ; }
	}
      }
    }
  }
}
