/* 
Resolution of the Helmholtz scalar equation for the (multiple) scattering by PENETRABLE obstacles, 
using a Perfectly Matched Layer (PML). 
This code can solve either a Dirichlet boundary coundition or a Neumann boundary condition.

Groups needed :
----------------
 . Omega : propagation domain
 . PML : (truncated) Perflectly Matched Layer

 . GammaScat : boundary of the scatterers (note that the term Gamma is already used by GetDP)
 . Sigma : truncation of the PML
 
 (no need of the boundary separating "Omega" and "PML")

 ONLY FOR POINT SOURCE INCIDENT WAVE (NO PLANE WAVE)
*/

// =======
// GROUPS
// =======
Group{
  SourceInt = Region[{Ind_SourceInt}];
  SourceExt = Region[{Ind_SourceExt}];
  For j In {0:NMAX-1}
    PenetrableScat~{j} = Region[(10000 + j)];
  EndFor
  PenetrableScat = Region[(10000:10000+NMAX-1)]; // ALL the obstacle
  GammaD = Region[Scat_Dirichlet]; //useless but maybe for later ?
  GammaN = Region[Scat_Neumann]; //useless but maybe for later ?
  GammaScat = Region[{GammaD, GammaN}]; //useless but maybe for later ?
  //propagation domain
  OmegaNotObstacle = Region[{Ind_Propagation_Domain, SourceExt, SourceInt}];
  Omega = Region[{OmegaNotObstacle, PenetrableScat}];
  //PML (if ABC, otherwise empty)
  PML = Region[{Ind_PML}];
  // fictitious boundary (truncation of PML)
  SigmaPML = Region[{Ind_PML_Bound}];
  //Gamma Inf (if ABC, otherwise empty)
  GammaInf = Region[{Ind_GammaInf}];
  OmegaTotal = Region[{Omega, PML}]; // total domain of computation
  //TrGr (Trace Group) is used to compute the normal derivative trace of the field
  // for a Dirichlet boundary condition (sound-soft)
  // (this is usefull to compute, for instance, the far field)
  TrGr = ElementsOf[Omega, ConnectedTo GammaScat ];
}

//ABC functions
Function{
   //Curvature of ellipse
  cost[] = X[]/Xmax;
  sint[] = Y[]/Ymax;
  curvature[] = (Xmax*Xmax*sint[]*sint[] + Ymax*Ymax*cost[]*cost[])^(3/2)/(Xmax*Ymax);
  
  // Coefs for Bayliss-Turkel ABC (as a correction to the Sommerfeld ABC)
  alphaBT[] = 1/(2*curvature[]) - I[]/(8*k*curvature[]^2*(1+I[]/(k*curvature[])));
  betaBT[] = - 1/(2*I[]*k*(1+I[]/(k*curvature[]))); 
  
  //Contrast inside the obstacles
  n[OmegaNotObstacle] = 1.;
  n[PML] = 1.;
  For j In {0:NMAX-1}
    n[PenetrableScat~{j}] = Contrast~{j};
  EndFor
}

//PML function
Function{
  If(Type_SHAPE == DOM_SQUARE)
    // Distance between a point (X,Y,Z) and the center of the numerical domain (XF,YF,ZF)
    RF_X[] = Sqrt[X[]*X[]];
    RF_Y[] = Sqrt[Y[]*Y[]];
    // Damping functions of the PML: equal to 0 inside the propagation domain
    // and on the intern boundary of the PML (Boundary in common with the Propagation domain).
    If(PML_TYPE == PML_LINEAR)
      DampingProfileX[] = SigmaXmax/SizePMLX*(RF_X[] - Xmax);
      DampingProfileY[] = SigmaYmax/SizePMLY*(RF_Y[] - Ymax);
    EndIf
    If(PML_TYPE == PML_BERMUDEZ)
      DampingProfileX[] = 1/(Xmax + SizePMLX - Fabs[X[]]) - 1/(SizePMLX);
      DampingProfileY[] = 1/(Ymax + SizePMLY - Fabs[Y[]]) - 1/(SizePMLY);
    EndIf
    If(PML_TYPE == PML_BERMUDEZ_QUAD)
      DampingProfileX[] = 1/(Xmax + SizePMLX - Fabs[X[]])^2 - 1/(SizePMLX)^2;
      DampingProfileY[] = 1/(Ymax + SizePMLY - Fabs[Y[]])^2 - 1/(SizePMLY)^2;
    EndIf
    //Take Max(0, DampingProfile)
    SigmaX[] = 0.5*(DampingProfileX[] + Fabs[DampingProfileX[]]);
    SigmaY[] = 0.5*(DampingProfileY[] + Fabs[DampingProfileY[]]);
    
    Kx[] = Complex[1, SigmaX[]/k];
    Ky[] = Complex[1, SigmaY[]/k];
    D[] = TensorDiag[Ky[]/Kx[], Kx[]/Ky[], 0.];
    S_PML[] = Kx[]*Ky[];
  EndIf
  
  If(Type_SHAPE == DOM_CIRCULAR)
    R[] = Sqrt[X[]*X[] + Y[]*Y[]];
    //internal radius:
    If(Xmax == Ymax)
      WPml[] = SizePMLX;
      R0[] = Xmax;
      cosT[] = X[]/R[] ;
      sinT[] = Y[]/R[] ;
    EndIf
    If(Xmax != Ymax)
      //compute internal radius by hand...
      R_internal[] = Xmax*Ymax*R[]/(Sqrt[X[]^2*Xmax^2 + Y[]^2*Ymax^2]);
      R_external[] = (Xmax+SizePMLX)*(Ymax+SizePMLY)*R[]/(Sqrt[X[]^2*(Xmax+SizePMLX)^2 + Y[]^2*(Ymax+SizePMLY)^2]);
      R0[] = R_internal[];
      WPml[] = R_external[] - R_internal[];
      cosT[] = R_internal[]/Xmax;
      sinT[] = R_internal[]/Ymax;
    EndIf
    If(PML_TYPE == PML_LINEAR)
      DampingProfileR[] = (R[]-R0[])/WPml[]*SigmaMax ;
      DampingProfileInt[] = SigmaMax/WPml[]*((R[]-R0[])^2/2) ;
    EndIf
    If(PML_TYPE == PML_BERMUDEZ)
      DampingProfileR[] = 1/(WPml[]-(R[]-R0[])) ;
      DampingProfileInt[] = -Log[(WPml[]-(R[]-R0[]))/WPml[]] ;
    EndIf
    cR[] = Complex[1,DampingProfileR[]/k] ;
    cStretch[] = Complex[1,(1/R[])*DampingProfileInt[]/k] ;
      
    S_PML[] = cR[]*cStretch[];
    t11[] = cStretch[]/cR[] * cosT[]*cosT[] + cR[]/cStretch[] * sinT[]*sinT[] ;
    t12[] = cStretch[]/cR[] * cosT[]*sinT[] - cR[]/cStretch[] * cosT[]*sinT[] ;
    t22[] = cStretch[]/cR[] * sinT[]*sinT[] + cR[]/cStretch[] * cosT[]*cosT[] ;
    D[] = TensorSym[ t11[], t12[], 0., t22[], 0., 0. ] ;
  EndIf
  
  //Approximation of the Dirac function
  Dirac[SourceInt] = 3/Pi/rad_int_s/rad_int_s*(1-Fabs[Sqrt[(X[]-X_source)*(X[]-X_source) + (Y[]-Y_source)*(Y[]-Y_source)]]/rad_int_s);
}

// ===========
// CONSTRAINTS
// ===========
Constraint{
  //Dirichlet boundary condition on the ficticious boundary (which truncate the PML)
  {Name PMLCondition; Type Assign; Case{ {Region SigmaPML;  Value 0.; } } }
  //Dirichlet boundary condition on Gama, boundary of the scatterers.
  // function f[] should be defined in the main .pro file
  {Name SoundSoftCondition; Type Assign; Case{ {Region GammaD;   Value -uinc[]; } } }
}


// =========
// JACOBIAN
// =========
Jacobian {
  { Name JVol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name JSur ; Case { { Region All ; Jacobian Sur ; } } }
}

// ======================
// INTEGRATION PARAMETERS
// ======================
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

// ==============
// FUNCTION SPACE
// ==============

FunctionSpace{
  {Name H_grad; Type Form0;
    BasisFunction{
      {Name u; NameOfCoef ui; Function BF_Node;
	Support Region[{OmegaTotal, GammaScat, SigmaPML, GammaInf}]; Entity NodesOf[All];}
    }
    Constraint{
      //Dirichlet boundary condition (sound-soft)
      //      {NameOfCoef ui; EntityType NodesOf;
      //NameOfConstraint SoundSoftCondition;}
      If(Type_Truncation == PML)
	//PML Constraint
	{NameOfCoef ui; EntityType NodesOf;
	  NameOfConstraint PMLCondition;}
      EndIf
      }
  }  
  //For the normal derivative
  {Name L2_Gamma; Type Form0;
    BasisFunction{
      {Name dn_u; NameOfCoef ui; Function BF_Node;
	Support Region[{GammaScat}]; Entity NodesOf[All];}
    }
  }
}//End FunctionSpace

// ============
// FORMULATIONS
// ============
Formulation {
  // Formulation for a Dirichlet boundary condition
  { Name Helmholtz; Type FemEquation;
    Quantity{
      {Name u ; Type Local; NameOfSpace H_grad;}
      // let us define also the normal derivative trace of u ("dn_u") and the far field ("u_inf").
      { Name dn_u; Type Local ; NameOfSpace L2_Gamma; }
      //      If(Type_PROBLEM == DIRICHLET)
	{ Name u_inf; Type Integral ;
	  [ Coef_u_inf[] * ({dn_u} + I[] * k * (-uinc_S[]) * Unit[XYZ[]] * NormalSource[]) * EikXinfDotS[] ] ; 
	  In GammaD; Integration I1; Jacobian JSur; }
	//EndIf
	//If(Type_PROBLEM == NEUMANN)
	{ Name u_inf; Type Integral ;
	  [ Coef_u_inf[] *  ((-dn_uinc_S[]) + I[] * k * {u} * Unit[XYZ[]] * NormalSource[]) *EikXinfDotS[] ] ; 
	  In GammaN; Integration I1; Jacobian JSur; }
	//EndIf
    }
    Equation{
      //Helmholtz equation
      Galerkin{[Dof{Grad u}, {Grad u}];
	In Omega; Jacobian JVol; Integration I1;}
      Galerkin{[-k^2*n[]^2*Dof{u}, {u}];
	In Omega; Jacobian JVol; Integration I1;}

      // Approx. Dirac
	Galerkin{[-Dirac[], {u}];
	  In SourceInt; Jacobian JVol; Integration I1;}
      
      If(Type_Truncation == PML)
	//Modified Helmholtz ins the PML
	Galerkin{[D[]* Dof{Grad u}, {Grad u}];
	  In PML; Jacobian JVol; Integration I1;}
	Galerkin{[-k^2*S_PML[]*Dof{u}, {u}];
	  In PML; Jacobian JVol; Integration I1;}
      EndIf

      If(Type_Truncation == ABC)
	//Sommerfeld radiation condition (approx.)
	Galerkin{[-I[]*k*Dof{u}, {u}];
	  In GammaInf; Jacobian JSur; Integration I1;}
	If(Type_ABC == ABC_BAYLISS)
	  //Bayliss Türkel Gunzburger radiation condition (order 2)
	  Galerkin { [ alphaBT[] * Dof{u} , {u} ] ;
	    In GammaInf; Jacobian JSur ; Integration I1 ; }
	  // FIXME: this assumes that GammaInf is closed; we need to add the
	  // boundary terms if it is open!
	  Galerkin { [ betaBT[] * Dof{d u} , {d u} ] ;  
	    In GammaInf; Jacobian JSur ; Integration I1 ; }
	EndIf
      EndIf

      // Compute the normal derivative trace of u on Gamma.
      // Used to build the far field, for instance.
      Galerkin { [ Dof{dn_u} , {dn_u} ] ;  
	In GammaD; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ - Normal[] * Trace[ Dof{d u} , TrGr ] , {dn_u} ] ;  
	In GammaD; Jacobian JSur ; Integration I1 ; }
    }
  }  
}//End Formulation

// ===========
// RESOLUTIONS
// ===========
Resolution{  
  {Name Scattering;
    System{ {Name A; NameOfFormulation Helmholtz; Type Complex; } }
    Operation{
      Generate[A]; Solve[A];
    }
  }
} // End Resolution


// ================
// POST-PROCESSINGS
// ================
PostProcessing{
  {Name Wave; NameOfFormulation Helmholtz;
    Quantity {
      //total field
      {Name ut; Value {Local { [{u}] ; In OmegaTotal; Jacobian JVol; }}}
      {Name utNorm; Value {Local { [Norm[{u}]] ; In OmegaTotal; Jacobian JVol; }}}
      //far field and rcs
      { Name far_field; Value { Local { [ {u_inf} ] ; In GammaScat; Jacobian JSur ; } } }
      { Name far_field_abs; Value { Local { [ Norm[{u_inf}] ] ; In GammaScat; Jacobian JSur ; } } }
      { Name rcs ; Value { Local { [ 10 * Log10[Coef_RCS[]*SquNorm[{u_inf}]] ] ; In GammaScat; Jacobian JSur ; } } }
    }
  }
} // End Postprocessing.

// ===============
// POST-OPERATIONS
// ===============

PostOperation{
  {Name Wave; NameOfPostProcessing Wave ;
    Operation {
      Print [ut, OnElementsOf Omega, File "u_Total.pos"];
      Print [utNorm, OnElementsOf Omega, File "u_TotalAbs.pos"];
    }
  }
  
  {Name Farfield; NameOfPostProcessing Wave ;
    Operation {
      Print[ rcs, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "u_rcs.pos"];
      Print[ far_field, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "u_far_field.pos"];
      Print[ far_field_abs, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "u_FarFieldAbs.pos"];
    }
  }

  {Name PML; NameOfPostProcessing Wave ;
    Operation {
      Print [ut, OnElementsOf PML, File "u_PML.pos"];
      Print [utNorm, OnElementsOf PML, File "u_PMLAbs.pos"];	
    }
  }
  
} // End PostOperation
