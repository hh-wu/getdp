/*
  Integration  method
    GradGrad
    CurlCurl
*/


Integration {
  { Name GradGrad ;
    Case { {Type Gauss ;
        Case {
          { GeoElement Point       ; NumberOfPoints  1 ; }
          { GeoElement Line        ; NumberOfPoints  4 ; }
          { GeoElement Triangle    ; NumberOfPoints  4 ; }
          { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
          { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
          { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
          { GeoElement Prism       ; NumberOfPoints  9 ; } }
      }
    }
  }
  { Name CurlCurl ;
    Case { {Type Gauss ;
        Case {
          { GeoElement Point       ; NumberOfPoints  1 ; }
          { GeoElement Line        ; NumberOfPoints  4 ; }
          { GeoElement Triangle    ; NumberOfPoints  4 ; }
          { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
          { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
          { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
          { GeoElement Prism       ; NumberOfPoints  9 ; } }
      }
    }
  }
}

/* --------------------------------------------------------------------------*/
