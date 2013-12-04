/* 
Resolution of the Helmholtz scalar equation for the (multiple) scattering by impenetrable obstacles, 
using a Perfectly Matched Layer (PML). 
This code can solve either a Dirichlet boundary coundition or a Neumann boundary condition.

Groups needed :
----------------
 . Omega : propagation domain
 . PML : (truncated) Perflectly Matched Layer

 . Gama : boundary of the scatterers (note that the term Gamma is already used by GetDP)
 . Sigma : truncation of the PML
 
 (no need of the boundary separating "Omega" and "PML")

Functions needed
----------------
For the weak formulation :
 . uinc[] : used for a Dirichlet  boundary condition
 . uinc_S[] : same function as uinc[] but instead of X[], this function should call XS[] (same for Y[], Z[] and XYZ[]). This function is needed in the integral that gives the far field of u.
 . dn_uinc[] : used for a Neumann boundary condition
 . dn_uinc_S[] : same function as dn_uinc[] but instead of X[], this function should call XS[] (see uinc_S[] for more explanations).

Example for a plane wave of direction Vect_inc[] (which is unit vector)
uinc_S[] = Complex[ Cos[k*Vect_inc[]*XYZS[]], Sin[k*Vect_inc[]*XYZS[]] ];
dn_uinc_S[] = NormalSource[] * I[] * k * Vect_inc[] * uinc_S[];

 . SigmaX[] and SigmaY[] : damping functions of the PML
*/

// ======
// GROUPS
// ======
Group{
  //propagation domain
  Omega = Region[{Ind_Propagation_Domain}];
  //PML
  PML = Region[{Ind_PML}];
  // boundary of the scatterers
  Gama = Region[{Ind_Scat_Bound}];
  // fictitious boundary
  Sigma = Region[{Ind_PML_Bound}];
  //To compute the normal derivative trace of the field
  // for a Dirichlet boundary condition (sound-soft)
  // (this is usefull to compute, for instance, the far field)
  TrGr = ElementsOf[ Omega, ConnectedTo Gama ];
  OmegaTotal = Region[{Omega, PML}]; // total domain of computation
}

// =========
// FUNCTIONS
// =========
Function {
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
    cosT[] = X[]/R[] ;
    sinT[] = Y[]/R[] ;
    WPml = SizePMLX;
    //internal radius:
    R0 = Xmax;

    If(PML_TYPE == PML_LINEAR)
      DampingProfileR[] = (R[]-R0)/WPml*SigmaMax ;
      DampingProfileInt[] = SigmaMax/WPml*((R[]-R0)^2/2) ;
    EndIf
    If(PML_TYPE == PML_BERMUDEZ)
      DampingProfileR[] = 1/(WPml-(R[]-R0)) ;
      DampingProfileInt[] = -Log[(WPml-(R[]-R0))/WPml] ;
    EndIf
    cR[] = Complex[1,DampingProfileR[]/k] ;
    cStretch[] = Complex[1,(1/R[])*DampingProfileInt[]/k] ;
      
    S_PML[] = cR[]*cStretch[];
    t11[] = cStretch[]/cR[] * cosT[]*cosT[] + cR[]/cStretch[] * sinT[]*sinT[] ;
    t12[] = cStretch[]/cR[] * cosT[]*sinT[] - cR[]/cStretch[] * cosT[]*sinT[] ;
    t22[] = cStretch[]/cR[] * sinT[]*sinT[] + cR[]/cStretch[] * cosT[]*cosT[] ;
    D[] = TensorSym[ t11[], t12[], 0., t22[], 0., 0. ] ;
  EndIf
}

// ===========
// CONSTRAINTS
// ===========
Constraint{
  //Dirichlet boundary condition on the ficticious boundary (which truncate the PML)
  {Name PMLCondition; Type Assign; Case{ {Region Sigma;  Value 0.; } } }  
  //Dirichlet boundary condition on Gama, boundary of the scatterers.
  // function f[] should be defined in the main .pro file
  {Name SoundSoftCondition; Type Assign; Case{ {Region Gama;   Value -uinc[]; } } }
}// End Constraint


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
  // Dirichlet boundary condition
  {Name H_grad_0; Type Form0;
    BasisFunction{
      {Name u; NameOfCoef ui; Function BF_Node;
	Support Region[{OmegaTotal, Gama, Sigma}]; Entity NodesOf[All];}
    }
    Constraint{
      //Dirichlet boundary condition (sound-soft)
      {NameOfCoef ui; EntityType NodesOf;
	NameOfConstraint SoundSoftCondition;}
      //PML Constraint
      {NameOfCoef ui; EntityType NodesOf;
	NameOfConstraint PMLCondition;}
    }
  }
  
  // Neumann boundary condition
  {Name H_grad; Type Form0;
    BasisFunction{
      {Name u; NameOfCoef ui; Function BF_Node;
	Support Region[{Omega, Gama, Sigma}]; Entity NodesOf[All];}
    }
    Constraint{
      //PML Constraint
      {NameOfCoef ui; EntityType NodesOf;
	NameOfConstraint PMLCondition;}
    }
  }
  
}//End FunctionSpace

// ============
// FORMULATIONS
// ============
Formulation {
  // Formulation for a Dirichlet boundary condition
  { Name Dirichlet; Type FemEquation;
    Quantity{
      {Name u ; Type Local; NameOfSpace H_grad_0;}
      // let us define also the normal derivative trace of u ("dn_u") and the far field ("u_inf").
      { Name dn_u; Type Local ; NameOfSpace H_grad; }
      { Name u_inf; Type Integral ; 
	[ Coef_u_inf[] * ({dn_u} + I[] * k * (-uinc_S[]) * Unit[XYZ[]] * NormalSource[]) * EikXinfDotS[] ] ; 
	In Gama; Integration I1; Jacobian JSur; }
    }
    Equation{
      //Helmholt equation
      Galerkin{[Dof{Grad u}, {Grad u}];
	In Omega; Jacobian JVol; Integration I1;}
      Galerkin{[-k^2*Dof{u}, {u}];
	In Omega; Jacobian JVol; Integration I1;}
      //Modified Helmholtz ins the PML
      Galerkin{[D[]* Dof{Grad u}, {Grad u}];
	In PML; Jacobian JVol; Integration I1;}
      Galerkin{[-k^2*S_PML[]*Dof{u}, {u}];
	In PML; Jacobian JVol; Integration I1;}

      // Compute the normal derivative trace of u on Gamma.
      // Used to build the far field, for instance.
      Galerkin { [ Dof{dn_u} , {dn_u} ] ;  
	In Gama; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ - Normal[] * Trace[ Dof{d u} , TrGr ] , {dn_u} ] ;  
	In Gama; Jacobian JSur ; Integration I1 ; }
    }
  }
  
  // Formulation for a Neumann boundary condition
  { Name Neumann; Type FemEquation;
    Quantity{
      {Name u ; Type Local; NameOfSpace H_grad;}
      // far field u_inf
      { Name u_inf; Type Integral ; 
	[ Coef_u_inf[] *  ((-dn_uinc_S[]) + I[] * k * {u} * Unit[XYZ[]] * NormalSource[]) *
	  EikXinfDotS[] ] ; 
	In Gama; Integration I1; Jacobian JSur; }
    }
    Equation{
      //Helmholt equation
      Galerkin{[Dof{Grad u}, {Grad u}];
	In Omega; Jacobian JVol; Integration I1;}
      Galerkin{[-k^2*Dof{u}, {u}];
	In Omega; Jacobian JVol; Integration I1;}
      //Modified Helmholtz ins the PML
      Galerkin{[D[]* Dof{Grad u}, {Grad u}];
	In PML; Jacobian JVol; Integration I1;}
      Galerkin{[-k^2*S_PML[]*Dof{u}, {u}];
	In PML; Jacobian JVol; Integration I1;}
      //Neumann boundary condition
      Galerkin{[-dn_uinc[], {u}];
	In Gama; Jacobian JSur; Integration I1;}
    }
  }
  
}//End Formulation


// ===========
// RESOLUTIONS
// ===========
Resolution{
  
  {Name Dirichlet;
    System{
      {Name A; NameOfFormulation Dirichlet; Type Complex; }
    }
    Operation{
      Generate[A]; Solve[A]; SaveSolution[A];
    }
  }
  
  {Name Neumann;
    System{
      {Name A; NameOfFormulation Neumann; Type Complex; }
    }
    Operation{
      Generate[A]; Solve[A]; SaveSolution[A];
    }
  }
  
} // End Resolution


// ================
// POST-PROCESSINGS
// ================
PostProcessing{
  // Dirichlet
  {Name Dirichlet; NameOfFormulation Dirichlet;
    Quantity {
      {Name u; Value {Local { [{u}] ; In OmegaTotal; Jacobian JVol; }}}
      {Name uNorm; Value {Local { [Norm[{u}]] ; In OmegaTotal; Jacobian JVol; }}}
      {Name uinc; Value {Local { [uinc[]] ; In OmegaTotal; Jacobian JVol; }}}
      //total field
      {Name ut; Value {Local { [{u} + uinc[]] ; In OmegaTotal; Jacobian JVol; }}}
      {Name utNorm; Value {Local { [Norm[{u} + uinc[]]] ; In OmegaTotal; Jacobian JVol; }}}
      //first and second trace on gamma
      { Name ugama ; Value { Local { [ {u} ] ; In Gama; Jacobian JSur ; } } }
      {Name dn_u ; Value { Local { [ {dn_u} ] ; In Gama; Jacobian JSur ; } } }
      {Name dn_uAbs ; Value { Local { [ Norm[{dn_u}] ] ; In Gama; Jacobian JSur ; } } }
      //far field and rcs
      { Name far_field; Value { Local { [ {u_inf} ] ; In Gama; Jacobian JSur ; } } }
      { Name far_field_abs; Value { Local { [ Norm[{u_inf}] ] ; In Gama; Jacobian JSur ; } } }
      { Name rcs ; Value { Local { [ 10 * Log10[Coef_RCS[]*SquNorm[{u_inf}]] ] ; In Gama; Jacobian JSur ; } } }
    }
  }
  
  {Name Neumann; NameOfFormulation Neumann;
    Quantity {
      {Name u; Value {Local { [{u}] ; In OmegaTotal; Jacobian JVol; }}}
      {Name uNorm; Value {Local { [Norm[{u}]] ; In OmegaTotal; Jacobian JVol; }}}
      {Name uinc; Value {Local { [uinc[]] ; In OmegaTotal; Jacobian JVol; }}}
      //total field
      {Name ut; Value {Local { [{u} + uinc[]] ; In OmegaTotal; Jacobian JVol; }}}
      {Name utNorm; Value {Local { [Norm[{u} + uinc[]]] ; In OmegaTotal; Jacobian JVol; }}}
      //first and second trace on gamma
      { Name ugama ; Value { Local { [ {u} ] ; In Gama; Jacobian JSur ; } } }
      { Name ugamaAbs ; Value { Local { [ Norm[{u}] ] ; In Gama; Jacobian JSur ; } } }
      {Name dn_u ; Value { Local { [ -dn_uinc[] ] ; In Gama; Jacobian JSur ; } } }
      //far field and rcs
      { Name far_field; Value { Local { [ {u_inf} ] ; In Gama; Jacobian JSur ; } } }
      { Name far_field_abs; Value { Local { [ Norm[{u_inf}] ] ; In Gama; Jacobian JSur ; } } }
      { Name rcs ; Value { Local { [ 10 * Log10[Coef_RCS[]*SquNorm[{u_inf}]] ] ; In Gama; Jacobian JSur ; } } }
    }
  }
} // End Postprocessing.

// ===============
// POST-OPERATIONS
// ===============

PostOperation{
  //Dirichlet
  {Name ud; NameOfPostProcessing Dirichlet ;
    Operation {
      Print [u, OnElementsOf Omega, File "ud.pos"];
      Print [uNorm, OnElementsOf Omega, File "ud_Abs.pos"];
      Print [ut, OnElementsOf Omega, File "ud_Total.pos"];
      Print [utNorm, OnElementsOf Omega, File "ud_TotalAbs.pos"];
    }
  }
  
  {Name ud_farfield; NameOfPostProcessing Dirichlet ;
    Operation {
      Print[ rcs, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "ud_rcs.pos"];
      Print[ far_field, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "ud_far_field.pos"];
      Print[ far_field_abs, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "ud_FarFieldAbs.pos"];
    }
  }
  
  {Name ud_traces; NameOfPostProcessing Dirichlet ;
    Operation {
      Print [ugama, OnElementsOf Gama, File "ud_gamma_u.pos"];
      Print [dn_u, OnElementsOf Gama, File "ud_gamma_dnu.pos"];
      Print [dn_uAbs, OnElementsOf Gama, File "ud_gamma_dnuAbs.pos"];	
    }
  }
  
  {Name ud_PML; NameOfPostProcessing Dirichlet ;
    Operation {
      Print [u, OnElementsOf PML, File "ud_PML.pos"];
      Print [uNorm, OnElementsOf PML, File "ud_PMLAbs.pos"];	
    }
  }
  
  // Neumann	
  {Name un; NameOfPostProcessing Neumann ;
    Operation {
      Print [u, OnElementsOf Omega, File "un.pos"];
      Print [uNorm, OnElementsOf Omega, File "un_Abs.pos"];
      Print [ut, OnElementsOf Omega, File "un_Total.pos"];
      Print [utNorm, OnElementsOf Omega, File "un_TotalAbs.pos"];
    }
  }
  
  {Name un_farfield; NameOfPostProcessing Neumann ;
    Operation {
      Print[ rcs, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "un_rcs.pos"];
      Print[ far_field, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "un_far_field.pos"];
      Print[ far_field_abs, OnGrid {R_inf * Cos[$A],  R_inf * Sin[$A], 0} {0:2*Pi:2*Pi/360, 0, 0},File "un_FarFieldAbs.pos"];
    }
  }
  
  {Name un_traces; NameOfPostProcessing Neumann ;
    Operation {
      Print [ugama, OnElementsOf Gama, File "un_gamma_u.pos"];
      Print [ugamaAbs, OnElementsOf Gama, File "un_gamma_uAbs.pos"];
      Print [dn_u, OnElementsOf Gama, File "un_gamma_dnu.pos"];	
    }
  }
  
  {Name un_PML; NameOfPostProcessing Neumann ;
    Operation {
      Print [u, OnElementsOf PML, File "un_PML.pos"];
      Print [uNorm, OnElementsOf PML, File "un_PMLAbs.pos"];	
    }
  }
  
  {Name uinc; NameOfPostProcessing Dirichlet ;
    Operation {
      Print [uinc, OnElementsOf Omega, File "uinc.pos"];
    }
  }
} // End PostOperation
