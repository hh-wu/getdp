Include "dipole_data.geo";

DefineConstant[
  Flag_AnalysisType = { 0,  Choices{0="e-formulation",  1="av-formulation"},
    Name "Input/21Type of analysis", Highlight "Blue",
    Help Str["- Use 'electric field formulation' to compute the EM fields created by the dipole",
      "- Use 'av-potential formulation' to compute the EM fields created by the dipole"]}
];

Flag_SilverMuller = (Flag_BC_Type==0) ; // 0 if PML
Flag_Axisymmetry  = (Flag_3Dmodel==0) ;

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

  Printf("===> Flag_PML_Cyl %g Flag_3Dmodel %g Flag_InfShape %g", Flag_PML_Cyl, Flag_3Dmodel, Flag_InfShape);

  If(Flag_PML_Cyl==0 && (!(Flag_3Dmodel==0 && Flag_InfShape==1)))
    // Rectangular transformation (default)
    xLoc[] = Fabs[X[]]-xb;
    yLoc[] = Fabs[Y[]]-yb;
    zLoc[] = Fabs[Z[]]-zb;
    DampingProfileX[] = (xLoc[]>=0) ? 1 / (PmlDelta-xLoc[]) : 0 ;
    DampingProfileY[] = (yLoc[]>=0) ? 1 / (PmlDelta-yLoc[]) : 0 ;
    DampingProfileZ[] = (zLoc[]>=0) ? 1 / (PmlDelta-zLoc[]) : 0 ;

    cX[] = Complex[1,-DampingProfileX[]/k0] ;
    cY[] = Complex[1,-DampingProfileY[]/k0] ;
    cZ[] = (Flag_3Dmodel==1) ? Complex[1,-DampingProfileZ[]/k0] : 1. ;

    t11[] = cY[]*cZ[]/cX[];
    t22[] = cX[]*cZ[]/cY[];
    t33[] = cX[]*cY[]/cZ[] ;
    t12[] = 0 ; t13[] = 0 ;t23[] = 0 ;
  EndIf

  If(Flag_3Dmodel==1 && Flag_PML_Cyl==1)
    // Y is the rotation axis
    yLoc[] = Fabs[Y[]]-yb;
    DampingProfileY[] = (yLoc[]>=0) ? 1 / (PmlDelta-yLoc[]) : 0 ;
    cY[] = Complex[1,-DampingProfileY[]/k0] ;

    //Cylindrical transformation
    R[] = Sqrt[X[]*X[]+Z[]*Z[]];
    cosT[] = X[]/R[];
    sinT[] = Z[]/R[];

    DampingProfileR[]   = (R[]>xb) ? 1/(PmlDelta-(R[]-xb)) : 0.;
    DampingProfileInt[] = (R[]>xb) ? -Log[(PmlDelta-(R[]-xb))/PmlDelta]: 0.;

    cR[] = Complex[1,-DampingProfileR[]/k0] ;
    cStretch[] = Complex[1,-1/R[]*DampingProfileInt[]/k0] ;

    t11[] = cY[]*(cStretch[]/cR[] * cosT[]*cosT[] + cR[]/cStretch[] * sinT[]*sinT[]) ;
    t12[] = 0 ;
    t13[] = cY[]*(cStretch[]/cR[] * cosT[]*sinT[] - cR[]/cStretch[] * cosT[]*sinT[]) ;
    t22[] = 1/(R[]*cY[]) ;
    t23[] = 0 ;
    t33[] = cY[]*(cStretch[]/cR[] * sinT[]*sinT[] + cR[]/cStretch[] * cosT[]*cosT[]) ;
  EndIf

  If(Flag_3Dmodel==0 && Flag_InfShape==1) // Capsular domain
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
    t13[] = 0 ;
    t22[] = (Fabs[Y[]]>=Ldipole/2) ? (cStretch[]/cR[] * sinT[]*sinT[] + cR[]/cStretch[] * cosT[]*cosT[]) : cX[] ;
    t23[] = 0 ;
    t33[] = 1 ;
  EndIf

  tens[] = (Flag_PML_Cyl==0) ? TensorDiag[ t11[], t22[], t33[] ] :
                               TensorSym[ t11[], t12[], t13[], t22[], t23[], t33[] ] ;

  epsilon[ Pml ] = ep0 * tens[] ;
  nu[ Pml ] = nu0 / tens[] ;

  eta0 = 120*Pi ; // eta0 = Sqrt(mu0/eps0)

  dR[] = (Flag_3Dmodel) ? Unit[ Vector[Sin[Atan2[Z[],X[]]#1], Y[], -Cos[#1]] ] : Vector[0,0,-1] ;


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
