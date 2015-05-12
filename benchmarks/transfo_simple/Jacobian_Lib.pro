/*
  Jacobian methods
    Vol
*/

/* I N P U T
   ---------

  GlobalGroup :
  -----------
    DomainInf                Regions with Spherical Shell Transformation

  Parameters :
  ----------
    Val_Rint, Val_Rext       Inner and outer radius of the Spherical Shell
                             of DomainInf

*/

// --------------------------------------------------------------------------

Group {
  DefineGroup[ DomainInf ];
  DefineVariable[ Val_Rint, Val_Rext ];
  DefineVariable[ Flag_Axisymmetry = 0 ];
}

// --------------------------------------------------------------------------

If (!Flag_Axisymmetry)  // 2D plane or 3D
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
EndIf

If (Flag_Axisymmetry == 1)  // Axisymmetry
Jacobian {
  { Name Vol ;
    Case { { Region DomainInf ;
             Jacobian VolAxiSphShell {Val_Rint, Val_Rext} ; }
           { Region All ; Jacobian VolAxi ; }
    }
  }
  { Name Sur ;
    Case { { Region All ; Jacobian SurAxi ; }
    }
  }
}
EndIf


If (Flag_Axisymmetry == 2)  // Axisymmetry, square
Jacobian {
  { Name Vol ;
    Case { { Region DomainInf ;
             Jacobian VolAxiSquSphShell {Val_Rint, Val_Rext} ; }
           { Region All ; Jacobian VolAxiSqu ; }
    }
  }
  { Name Sur ;
    Case { { Region All ; Jacobian SurAxi ; }
    }
  }
}
EndIf


// --------------------------------------------------------------------------
