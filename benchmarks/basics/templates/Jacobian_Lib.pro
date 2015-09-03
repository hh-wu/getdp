/*
  Jacobian methods
    Vol
*/

/* I N P U T
   ---------

  GlobalGroup :
  -----------
    DomainInf                Regions with Spherical Shell Transformation
    DomainInfRectX           Regions with Rectangular Transformation in X direction
    DomainInfRectY           Regions with Rectangular Transformation in Y direction
    DomainInfRectZ           Regions with Rectangular Transformation in Z direction

  Parameters :
  ----------
    Val_Rint, Val_Rext       Inner and outer radius of the Spherical Shell
                             of DomainInf
    Val_Xint, Val_Xext       Inner and outer coordinates for 
                             rectangular transformation with axis X
    Val_Yint, Val_Yext       idem axis Y
    Val_Zint, Val_Zext       idem axis Z

*/

/* --------------------------------------------------------------------------*/

Group {
  DefineGroup[ DomainInf ] ;
  DefineVariable[ Val_Rint, Val_Rext ] ;
  DefineGroup[ DomainInfRectX, DomainInfRectY, DomainInfRectZ ] ;
  DefineVariable[ Val_Xint, Val_Xext, Val_Yint, Val_Yext, Val_Zint, Val_Zext ] ;
}

/* --------------------------------------------------------------------------*/

Jacobian {
  {
    Name Vol ;
    Case {
      { Region DomainInf ;
        Jacobian VolSphShell {Val_Rint, Val_Rext} ; }
      { Region DomainInfRectX ;
        Jacobian VolRectShell {Val_Xint, Val_Xext, 1} ; }
      { Region DomainInfRectY ;
        Jacobian VolRectShell {Val_Yint, Val_Yext, 2} ; }
      { Region DomainInfRectZ ;
        Jacobian VolRectShell {Val_Zint, Val_Zext, 3} ; }
      { Region All ; Jacobian Vol ; }
    }
  }
  {
    Name Sur ;
    Case {
      { Region All ; Jacobian Sur ; }
    }
  }
}

/* --------------------------------------------------------------------------*/
