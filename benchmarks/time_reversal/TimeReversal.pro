
Function {
  k = k0;
  I[] = Complex[0., 1.] ;

  // Distance between a point (X,Y,Z) and the source (XS,YS,ZS):
  R[]= Sqrt[(X[] - XS)^2 + (Y[] - YS)^2 + (Z[] - ZS)^2];
  KR[] = k*R[];

  // Green2D[] = i/4*Hankel_0^{(1)}(kR[])
  Green2D[] = 0.25*Complex[-Yn[0,KR[]],Jn[0,KR[]]];

  // Green2D[] conjugated:
  GreenConjug[] = -0.25*Complex[Yn[0,KR[]],Jn[0,KR[]]];
}

Function{
  Dist_XF_Boundary = Sqrt[(XF - Xmax)^2];
  Dist_YF_Boundary = Sqrt[(YF - Ymax)^2];
  // Distance between a point (X,Y,Z) and the centre of the domain (XF,YF,ZF)
  RF_X[] = Sqrt[(X[] - XF)^2];
  RF_Y[] = Sqrt[(Y[] - YF)^2];

  DampingProfileX[] = 1/(Dist_XF_Boundary + SizePMLX - Fabs[RF_X[]]) - 1/(SizePMLX);
  DampingProfileY[] = 1/(Dist_YF_Boundary + SizePMLY - Fabs[RF_Y[]]) - 1/(SizePMLY);
  //Take Max(0, DampingProfile)
  SigmaX[] = 0.5*(DampingProfileX[] + Fabs[DampingProfileX[]]);
  SigmaY[] = 0.5*(DampingProfileY[] + Fabs[DampingProfileY[]]);

  Kx[] = Complex[1, SigmaX[]/k];
  Ky[] = Complex[1, SigmaY[]/k];
  D[] = TensorDiag[Ky[]/Kx[], Kx[]/Ky[], 0.];
  S_PML[] = Kx[]*Ky[];
}

Formulation {
  //Emission (if approx. Green)
  If(CLUTTER)
    { Name Emission; Type FemEquation;
      Quantity{
        { Name Ue ; Type Local; NameOfSpace EspUforw;}
      }
      Equation{
        Galerkin{ [D[]*Dof{Grad Ue}, {Grad Ue}];
          In AllDomains; Jacobian JVol; Integration I1;}
        Galerkin{ [-k^2*n[]^2*Kx[]*Ky[]*Dof{Ue}, {Ue}];
          In AllDomains; Jacobian JVol; Integration I1;}
        // Approx. Dirac
        Galerkin{ [-Dirac[], {Ue}];
          In SourceInt; Jacobian JVol; Integration I1;}
      }
    }
  EndIf

  //Back propagation
  { Name BackProp; Type FemEquation;
    Quantity{
      If(CLUTTER)
        { Name Ue ; Type Local; NameOfSpace EspUforw;}
      EndIf
      { Name Uback ; Type Local; NameOfSpace EspUback;}
    }
    Equation{
      Galerkin{ [D[]*Dof{Grad Uback}, {Grad Uback}];
        In AllDomains; Jacobian JVol; Integration I1;}
      Galerkin{ [-k^2*n[]^2*Kx[]*Ky[]*Dof{Uback}, {Uback}];
        In AllDomains; Jacobian JVol; Integration I1;}
      // Source (conjugated)
      If(!CLUTTER)
        Galerkin{ [-GreenConjug[], {Uback}];
          In TRM; Jacobian JVol; Integration I1;}
      EndIf
      If(CLUTTER)
        Galerkin{ [-Conj[{Ue}], {Uback}];
          In TRM; Jacobian JVol; Integration I1;}
      EndIf
    }
  }
}

Resolution{
  { Name TR;
    System{
      If(CLUTTER)
        { Name Emission; NameOfFormulation Emission; Type Complex; }
      EndIf
      { Name BackProp; NameOfFormulation BackProp; Type Complex; }
    }
    Operation{
      If(CLUTTER)
        Generate[Emission]; Solve[Emission];
      EndIf
      Generate[BackProp]; Solve[BackProp];
    }
  }
  // Empty resolution (to display functions for example).
  // ============================================
  { Name Empty;
    System{
      { Name Direct; NameOfFormulation BackProp; Type Complex; }
    }
    Operation{
    }
  }
}

PostProcessing{
  // Scatterers : only URE
  { Name Uback; NameOfFormulation BackProp;
    Quantity {
      { Name Uback; Value { Local { [{Uback}] ; In AllDomains; Jacobian JVol; }}}
      { Name Uback_abs; Value { Local { [Norm[{Uback}]] ; In AllDomains; Jacobian JVol; }}}
    }
  }
  // Functions (associated with Empty resolution)
  { Name Functions; NameOfFormulation BackProp;
    Quantity {
      { Name Green2D; Value { Local { [Green2D[]] ; In AllDomains; Jacobian JVol; }}}
      { Name Green2DNorm; Value { Local { [Norm[Green2D[]]] ; In AllDomains; Jacobian JVol; }}}
      { Name SigmaX; Value { Local { [Norm[SigmaX[]]] ; In AllDomains; Jacobian JVol; }}}
      { Name SigmaY; Value { Local { [Norm[SigmaY[]]] ; In AllDomains; Jacobian JVol; }}}
    }
  }
}

PostOperation{
  { Name Uback; NameOfPostProcessing Uback ;
    Operation {
      Print [Uback, OnElementsOf Propagation_Domain, File "Uback.pos"];
      Print [Uback_abs, OnElementsOf Propagation_Domain, File "Uback_abs.pos"];
    }
  }

  { Name Functions; NameOfPostProcessing Functions ;
    Operation {
      Print [Green2D, OnElementsOf Propagation_Domain, File "fun_Green2D.pos"];
      Print [Green2DNorm, OnElementsOf Propagation_Domain, File "fun_Green2DNorm.pos"];
      Print [SigmaX, OnElementsOf AllDomains, File "fun_SigmaX.pos"];
      Print [SigmaY, OnElementsOf AllDomains, File "fun_SigmaY.pos"];
    }
  }

  { Name PML; NameOfPostProcessing Uback ;
    Operation {
      Print [Uback, OnElementsOf PML, File "PML_Uback.pos"];
      Print [Uback_abs, OnElementsOf PML, File "PML_Uback_abs.pos"];
    }
  }

}
