// Time harmonic acoustic scattering problem

// data contains some usefull values (e.g. the wavenumber)
Include "scattering_data.pro";
Include "scattering_data_opt.pro";

// ========
// Functions
Function {
  I[] = Complex[0., 1.] ; // sqrt(-1)
  //chose whether the incident wave is plane of emitted by a point source (green function)
  DefineConstant[
    //Type of Problem
    Type_PROBLEM = {DIRICHLET, Choices{DIRICHLET = "Dirichlet", NEUMANN = "Neumann"}, Name Str[MENU_INPUT, "/00"], Label "Type of problem"}
    //angle of incident plane wave
    beta_inc_aux = {1., Min -1., Max 1., Step 0.01 , Label "Angle (in Pi)", Name Str[MENU_INPUT, Str[MENU_UINC,"/Plane wave/0"]], Visible (INCIDENT_WAVE == PLANEWAVE)}
  ];
  MENU_UINC = "Incident wave";
  PLANEWAVE = 0;
  POINTSOURCE = 1;

  // Selecting the incident wave :	
  If(INCIDENT_WAVE == PLANEWAVE)
    beta_inc = beta_inc_aux*Pi;
    beta_vect[] = Vector[Cos[beta_inc], Sin[beta_inc],0];
    uinc[] = Complex[Cos[k*(XYZ[]*beta_vect[])], Sin[k*(XYZ[]*beta_vect[])]];
    grad_uinc[] = I[] * k * beta_vect[] * uinc[];
    dn_uinc[] = Normal[] * grad_uinc[];
    //"source" version (integrable, used to compute the RCS, far field, ...)
    uinc_S[] = Complex[Cos[k*(XYZS[]*beta_vect[])], Sin[k*(XYZS[]*beta_vect[])]];
    dn_uinc_S[] = NormalSource[] * I[] * k * beta_vect[] * uinc_S[];
  EndIf
  
  If(INCIDENT_WAVE == POINTSOURCE)
    //point source case (modify the position of the source if desired). To avoid any singularity
    // put the source out of the computation domain.
    X_source = r_source*Cos[theta_source];
    Y_source = r_source*Sin[theta_source];
    
    XYZ_source[] = Vector[X_source, Y_source, 0];
    KR_source[] = k*Sqrt[(X[] - X_source)^2 + (Y[] - Y_source)^2 + Z[]^2];
    Green2D[] = 0.25*I[]*Complex[Jn[0,KR_source[]],Yn[0,KR_source[]]]; //= i/4*Hankel_0^{(1)}(k*R[])
    //"source" version (integrable, used to compute the RCS, far field, ...)
    KRS_source[] = k*Sqrt[(XS[] - X_source)^2 + (YS[] - Y_source)^2];
    Green2D_S[] = 0.25*I[]*Complex[Jn[0,KRS_source[]],Yn[0,KRS_source[]]];
    //u_inc
    uinc[] = Green2D[];
    grad_uinc[] = -I[]/4 * k * Complex[Jn[1,KR_source[]], Yn[1,KR_source[]]] * (XYZ[] - XYZ_source[])/Norm[XYZ[] - XYZ_source[]]; //-ik/2*H_1^{(1)}(k|x-y|)*(x-y)
    dn_uinc[] = Normal[] * grad_uinc[];
    //"source version" (for far field/rcs)
    uinc_S[] = Green2D_S[];
    grad_uinc_S[] = -I[]/4 * k * Complex[Jn[1,KRS_source[]],Yn[1,KRS_source[]]] * (XYZS[] - XYZ_source[])/Norm[XYZS[] - XYZ_source[]]; //-ik/2*H_1^{(1)}(k|x-y|)*(x-y)
    dn_uinc_S[] = NormalSource[] *  grad_uinc_S[];
  EndIf
}

// functions used to compute the far field and the RCS
Function{
  R_inf = 1000;
  // can use this to compute approx. RCS at finite (but large) distance
  Coef_u_inf[] = -I[]*Complex[ Cos[-Pi/4] , Sin[-Pi/4] ] / Sqrt[8*Pi*k] ;
  Coef_RCS[] = 2*Pi;
  Coef_RCS_finite[] = 2*Pi*R_inf; 
  EikXinfDotS[] = Complex[ Cos[-k * Unit[XYZ[]] * XYZS[]] , Sin[-k * Unit[XYZ[]] * XYZS[]] ] ;
}
/*
If(Type_Truncation == ABC)
  Include "Acoustic2D_impenetrableABC.pro";
EndIf
If(Type_Truncation == PML)
  Include "Acoustic2D_impenetrablePML.pro";
EndIf
*/
Include "Acoustic2D.pro";
