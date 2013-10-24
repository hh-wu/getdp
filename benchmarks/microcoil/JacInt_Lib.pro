// Jacobian methods
//--------------------------------------------------------------------------

Group {

  DefineGroup   [ DomainInf ] ;             // Region with Spherical Shell Transformation
  DefineVariable[ Val_Rint, Val_Rext ] ; // Inner and outer radius of the Spherical Shell, i.e. DomainInf

}
// --------------------------------------------------------------------------

Jacobian {

  { Name Vol ;
    Case { { Region DomainInf ;
             Jacobian VolSphShell {Val_Rint, Val_Rext} ; }
           { Region All ; Jacobian Vol ; }
    }
  }

  { Name Sur ;
    Case { { Region All ; Jacobian Sur ; }
    }
  }

}

// Integration method
//--------------------------------------------------------------------------

Integration {
  { Name I1 ;
    Case { {Type Gauss ;
        Case {
          { GeoElement Line  ;       NumberOfPoints  4 ; }//7
          { GeoElement Triangle    ; NumberOfPoints  4 ; }
          { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
          { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
          { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
          { GeoElement Prism       ; NumberOfPoints  21 ; } }//9
      }
    }
  }

}
