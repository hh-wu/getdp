Include "dipole_data.geo";

DefineConstant[
  Flag_AnalysisType = { 0,  Choices{0="e-formulation",  1="av-formulation"},
    Label "Type of analysis",  Path "Input/20", Highlight "Blue", Visible 1,
    Help Str["- Use 'electric field formulation' to compute the EM fields created by the dipole",
      "- Use 'av-potential formulation' to compute the EM fields created by the dipole"]},
  Flag_BC_Type = {1, Choices{0="Silver Muller",1="PML"},
    Label "Boundary condition at infinity",
    Path "Input/20", Highlight "Blue", Visible 1}
];

Flag_SilverMuller = (Flag_BC_Type==0) ; // 0 if PML
Flag_Axisymmetry  = (Flag_model==0) ;

Freq = FREQ ;

Group {
  Feed   = Region[{}] ;
  Dipole = Region[{}] ;

  SkinFeed = Region[{ SKINFEED }] ;

  SkinDipoleDwn = Region[{ SKINDIPOLEDWN }];
  SkinDipoleUp  = Region[{ SKINDIPOLEUP }];
  SkinDipole    = Region[{ SkinDipoleUp, SkinDipoleDwn }];

  If(!Flag_SilverMuller)
    Air  = Region[{ AIR }] ;
    Pml  = Region[{ PML }];
  EndIf
  If(Flag_SilverMuller)
    Air  = Region[{ AIR, PML }];
    Pml  = Region[{ }];
  EndIf

  SkinDomainC = Region[{ SkinDipole, SkinFeed }];
  SurBC       = Region[{ SkinFeed }] ; // Source in e formulation
  SigmaInf    = Region[{ SURFAIRINF }] ;

  DomainCC  = Region[{ Air, Pml }] ;
  DomainC   = Region[{ }] ;
  Domain    = Region[{ DomainC, DomainCC }] ;
  DomainTot = Region[{ Domain, SkinFeed, SigmaInf }] ;
}

Function {
  mu0 = 4.e-7 * Pi ;
  nu0 = 1/mu0 ;
  ep0 = 8.854187817e-12 ;
  sigmaCu = 5.9e7 ;

  epsilon [ #{Air, Dipole, Feed, SkinFeed, SigmaInf} ] = ep0 ;
  nu [ #{Air, Dipole, Feed, SkinFeed, SigmaInf} ] = nu0 ;
  sigma[] = sigmaCu ;

  I[] = Complex[0,1] ; // imaginary number

  If(!(Flag_model==0 && Flag_2Ddomain==1))

    xLoc[] = Fabs[X[]]-xb;
    yLoc[] = Fabs[Y[]]-yb;
    zLoc[] = Fabs[Z[]]-zb;

    DampingProfileX[] = (xLoc[]>=0) ? 1 / (PmlDelta-xLoc[]) : 0 ;
    DampingProfileY[] = (yLoc[]>=0) ? 1 / (PmlDelta-yLoc[]) : 0 ;
    DampingProfileZ[] = (zLoc[]>=0) ? 1 / (PmlDelta-zLoc[]) : 0 ;

    cX[] = Complex[1,-DampingProfileX[]/k0] ;
    cY[] = Complex[1,-DampingProfileY[]/k0] ;
    cZ[] = ((Flag_model==1 && Flag_3Ddomain==2) ? Complex[1,-DampingProfileZ[]/k0] : 1.) ;

    tens[] = TensorDiag[cY[]*cZ[]/cX[],cX[]*cZ[]/cY[],cX[]*cY[]/cZ[]] ;

  EndIf
  
  If(Flag_model==0 && Flag_2Ddomain==1)

    Ysph[] = (Y[]>0) ? Y[]-Ldipole/2 : Y[]+Ldipole/2;
    R[] = Sqrt[X[]*X[] + Ysph[]*Ysph[]];
    cosT[] = X[]/R[];
    sinT[] = Ysph[]/R[];

    DampingProfileR[] = 1/(PmlDelta-(R[]-rb)) ;
    DampingProfileInt[] = -Log[(PmlDelta-(R[]-rb))/PmlDelta] ;
    cR[] = Complex[1,-DampingProfileR[]/k0] ;
    cStretch[] = Complex[1,-(1/R[])*DampingProfileInt[]/k0] ;

    xLoc[] = X[]-rb;
    DampingProfileX[] = (xLoc[]>=0) ? 1 / (PmlDelta-xLoc[]) : 0 ;
    cX[] = Complex[1,-DampingProfileX[]/k0] ;

    t11[] = (Fabs[Y[]]>=Ldipole/2) ? (cStretch[]/cR[] * cosT[]*cosT[] + cR[]/cStretch[] * sinT[]*sinT[]) : 1/cX[] ;
    t12[] = (Fabs[Y[]]>=Ldipole/2) ? (cStretch[]/cR[] * cosT[]*sinT[] - cR[]/cStretch[] * cosT[]*sinT[]) : 0 ;
    t22[] = (Fabs[Y[]]>=Ldipole/2) ? (cStretch[]/cR[] * sinT[]*sinT[] + cR[]/cStretch[] * cosT[]*cosT[]) : cX[] ;

    tens[] = TensorSym[ t11[], t12[], 0., t22[], 0., 1. ] ;

  EndIf

  epsilon[ Pml ] = ep0 * tens[] ;
  nu[ Pml ] = nu0 / tens[] ;

  eta0 = 120*Pi ; // eta0 = Sqrt(mu0/eps0)

  dR[] = (Flag_model) ? Unit[ Vector[Sin[Atan2[Z[],X[]]#1], Y[], -Cos[#1]] ] : Vector[0,0,-1] ;

  CoefGeo = (Flag_Axisymmetry) ? 2*Pi :
            ((Flag_3Ddomain==0) ? 8 :
             ((Flag_3Ddomain==1) ? 4 : 1.)) ; // axisymmetry in 2D, 1/8 or 1/4 of the 3D model

  Printf("Flag_model %g Flag_2Ddomain %g Flag_3Ddomain %g Flag_Axisymmetry %g CoefGeo %g", Flag_model, Flag_2Ddomain, Flag_3Ddomain, Flag_Axisymmetry, CoefGeo);

  V0 = 1. ;
  BC_Fct_e[] = V0/delta_gap * Vector[0, 1, 0] ;
  ZL = 50 ;
}

Constraint {
  // For e formulation
  { Name ElectricField ;
    Case {
      { Region SkinFeed ; Type AssignFromResolution ; NameOfResolution Microwave_e_BC ; }
      { Region SkinDipole ; Value 0. ; }
      If(!Flag_SilverMuller)
        { Region SigmaInf ; Value 0. ; }
      EndIf
    }
  }

  // For av formulation
  { Name MagneticVectorPotential ;
    Case {
      { Region SkinDomainC ; Value 0. ; }
      { Region SkinFeed    ; Value 0. ; }
      If(!Flag_SilverMuller)
        { Region SigmaInf   ; Value 0. ; }
      EndIf
    }
  }

  { Name ElectricScalarPotential ;
    Case {
      { Region SkinFeed     ; Value 1-((Y[]+delta_gap/2)/delta_gap) ; }
      { Region SkinDipoleDwn; Value 1. ; }
      { Region SkinDipoleUp ; Value 0. ; }
    }
  }

}


Include "Microwave.pro"


