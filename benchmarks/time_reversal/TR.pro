/*
  Time reversal experiment, 2D, rectangular volume mirror (thickness > 0).
  Helmholtz equation.
  Perfectly Matched Layer.
*/
Include "TR_data.pro";
Include "TR_getdp_data.pro";

Function{
  DefineConstant[ N_scat = {0,
      Name StrCat[MENU_GEO, StrCat[MENU_OBSTACLES, "/01Nb. of placed obstacles"]]}];
}

Group{
  // Time Reversal Mirror (TRM)
  TRM = Region[{1}];
  TRM_Bnd = Region[{11}];
  //Exterior domain (Propagation without TRM, without source)
  Exterior_Domain = Region[{2}];
  //Inter interne au domaine (troncature domaine de propagation)
  Exterior_Bnd = Region[{12}];
  // PML
  PML = Region[{3}];
  PML_Bnd = Region[{13}];

  //in case of obstacles
  SourceInt = Region[{5}];
  SourceExt = Region[{6}];
  For ii In {0:N_scat-1}
    Scat~{ii} = Region[(100+ii)];
  EndFor
  Scatterers = Region[(100:100+N_scat-1)];
  Outsite_Scatterers= Region[{Exterior_Domain, TRM, SourceInt, SourceExt, PML}];

  //Propagation domain (all without PML)
  Propagation_Domain = Region[{Exterior_Domain, TRM, Scatterers, SourceInt, SourceExt}];
  Propagation_Bnd = Region[{Exterior_Bnd, TRM_Bnd}];

  //Full domain
  AllDomains = Region[{Propagation_Domain, PML}];
  AllDomains_Bnd = Region[{Propagation_Bnd, PML_Bnd}];
}

//When there are scatterers...
Function{
  //contrast
  n[Outsite_Scatterers] = 1;
  For ii In {0:N_scat-1}
    n~{ii} = n_min + Rand[n_max - n_min];
    n[Scat~{ii}] = n~{ii};
  EndFor
  Dirac[SourceInt] = 3/Pi/epsilon/epsilon*
    (1-Fabs[Sqrt[(X[]-XS)*(X[]-XS) + (Y[]-YS)*(Y[]-YS)]]/epsilon);
}

Jacobian {
  { Name JVol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name JSur ; Case { { Region All ; Jacobian Sur ; } } }
}

Integration {
  { Name I1 ;
    Case {
      { Type Gauss ;
        Case {
          { GeoElement Point ; NumberOfPoints  1 ; }
          { GeoElement Line ; NumberOfPoints  4 ; }
          { GeoElement Triangle ; NumberOfPoints  6 ; }
          { GeoElement Quadrangle ; NumberOfPoints 7 ; }
          { GeoElement Tetrahedron ; NumberOfPoints 15 ; }
          { GeoElement Hexahedron ; NumberOfPoints 34 ; }
        }
      }
    }
  }
}

Constraint{
  { Name BoundExt; Type Assign;
    Case{
      { Region PML_Bnd;  Value 0.; }
    }
  }
}

FunctionSpace{
  // One space for backpropagation
  {Name EspUback; Type Form0;
    BasisFunction{
      { Name Ure; NameOfCoef Uren; Function BF_Node;
	Support Region[{AllDomains, AllDomains_Bnd}]; Entity NodesOf[All];}
    }
    //PML constraint
    Constraint{ {NameOfCoef  Uren; EntityType NodesOf; NameOfConstraint BoundExt;} }
  }

  If(CLUTTER)
    // One space for emission (approx. Green function)
    {Name EspUforw; Type Form0;
      BasisFunction{
	{ Name Ue; NameOfCoef Uen; Function BF_Node;
	  Support Region[{AllDomains, AllDomains_Bnd}]; Entity NodesOf[All];}
      }
      //PML constraint
      Constraint{ {NameOfCoef Uen; EntityType NodesOf; NameOfConstraint BoundExt;} }
    }
  EndIf

}

If(!MultiFreq)
  Include "TimeReversal.pro";
EndIf
If(MultiFreq)
  Include "TimeReversal_Broadband.pro";
EndIf

DefineConstant[
  C_ = {"-solve -pos -bin", Name "GetDP/9ComputeCommand", Visible 0}
];
