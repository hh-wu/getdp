Include "mstrip_param.pro";

DefineConstant[
  Flag_AnalysisType = { 0,  Choices{0="e-formulation",  1="av-formulation"},
    Name "Input/20Type of analysis",  Highlight "Blue",
    Help Str["- Use 'electric field formulation' to compute the EM fields created by the microstrip antenna",
      "- Use 'av-potential formulation' to compute the EM fields created by the microstrip antenna"]},
  Flag_BC_Type = { 1, Choices{0="Silver Muller",1="PML"},
    Name "Input/20BC at infinity", Highlight "Blue"}
];

Flag_SilverMuller = (Flag_BC_Type==0) ; // 0 if PML
Flag_3Dmodel = 1 ;

Group {
  SkinAntennaL = Region[{ SKINMICROSTRIP1 }] ;
  SkinAntennaR = Region[{ SKINMICROSTRIP2 }] ;
  SkinAntenna = Region[{ SkinAntennaL, SkinAntennaR }] ;
  SkinGroundL  = Region[{ SKINGROUND1 }] ;
  SkinGroundR  = Region[{ SKINGROUND2 }] ;
  SkinGroundM  = Region[{ SKINGROUND3 }] ;
  SkinGround  = Region[{ SkinGroundL, SkinGroundR, SkinGroundM }] ;
  SkinFeed    = Region[{ SKINF_TOP, SKINF_BOT, SKINF_BACK, SKINF_FRONT }];

  Air         = Region[{ AIR }] ;
  Substrate   = Region[{ SUBSTRATE }] ;

  If(!Flag_SilverMuller)
    Pml  = Region[{ PMLX, PMLY, PMLZ }];
  EndIf
  If(Flag_SilverMuller)
    Pml  = Region[{}];
    Air += Region[{ PMLX, PMLY, PMLZ }];
  EndIf

  SkinDomainC  = Region[{ SkinAntenna, SkinGround }];
  SurBC    = Region[{ SkinFeed }] ;
  SigmaInf = Region[{ SURFAIR }] ;

  DomainCC = Region[{ Substrate, Air, Pml }] ;
  DomainC  = Region[{ }] ;
  Domain    = Region[{ DomainC, DomainCC }] ;
  DomainTot = Region[{ Domain, SkinFeed, SigmaInf }] ;
}

Function {
  mu0 = 4.e-7 * Pi ;
  nu0 = 1/mu0 ;
  ep0 = 8.854187817e-12 ;
  epr  = EPSILONR ;//Dielectric constant for FR4 is 4.5

  epsilon [ #{Air,SkinFeed, SigmaInf} ] = ep0 ;
  epsilon [ Substrate ]    = epr*ep0 ;

  nu      [ #{Air,Substrate,SkinFeed, SigmaInf} ]   = nu0 ;
  mu      [ #{Air,Substrate,SkinFeed, SigmaInf} ]   = mu0 ;

  sigma[] = 6e7 ; // Cu
  I[] = Complex[0,1] ; // imaginary number

  ZL = 50 ; // Ohms load resistance

  PmlXmax = wT + dwT ;      PmlXmin = -dwT ;
  PmlYmax = hT + D2 + dhT ; PmlYmin = -D4 - hT/2 -dhT ;
  PmlZmax = zb2 ;           PmlZmin =  zb2-5*zb2_ ;

  //=========================================================================

  DampingProfileX[] =
  ( (X[]>=PmlXmax) || (X[]<=PmlXmin) ) ?
  ( (X[]>=PmlXmax) ? 1 / (PmlDelta-(X[]-PmlXmax)) : 1 / (PmlDelta-(PmlXmin-X[])) ) : 0;
  DampingProfileY[] =
  ( (Y[]>=PmlYmax) || (Y[]<=PmlYmin) ) ?
  ( (Y[]>=PmlYmax) ? 1 / (PmlDelta-(Y[]-PmlYmax)) : 1 / (PmlDelta-(PmlYmin-Y[])) ) : 0;
  DampingProfileZ[] =
  ( (Z[]>=PmlZmax) || (Z[]<=PmlZmin) ) ?
  ( (Z[]>=PmlZmax) ? 1 / (PmlDelta-(Z[]-PmlZmax)) : 1 / (PmlDelta-(PmlZmin-Z[])) ) : 0;

  cX[] = Complex[1,-DampingProfileX[]/k0] ;
  cY[] = Complex[1,-DampingProfileY[]/k0] ;
  cZ[] = Complex[1,-DampingProfileZ[]/k0] ;

  tens[] = TensorDiag[cY[]*cZ[]/cX[],cX[]*cZ[]/cY[],cX[]*cY[]/cZ[]];

  epsilon [ Pml ]   = ep0 * tens[] ;
  nu      [ Pml ]   = nu0 / tens[] ;

  eta0 = 120*Pi ; // eta0 = Sqrt(mu0/eps0)

  //=========================================================================

  V0 = 1 ; delta_gap = D5 ;
  BC_Fct_e[] =  V0/delta_gap * Vector[1, 0, 0] ;

  Freq = FREQ ;

  dR[#{SKINF_TOP}]   = Vector[0,  1,  0] ;
  dR[#{SKINF_BOT}]   = Vector[0, -1,  0] ;
  dR[#{SKINF_BACK}]  = Vector[0,  0, -1] ;
  dR[#{SKINF_FRONT}] = Vector[0,  0,  1] ;

  CoefGeo = 1 ;
}

Constraint {
  // For e formulation
  { Name ElectricField ;
    Case {
      { Region SkinFeed ; Type AssignFromResolution ; NameOfResolution Microwave_e_BC ; }
      { Region SkinDomainC ; Type Assign ; Value 0. ; }
      If(!Flag_SilverMuller)
        { Region SigmaInf ; Type Assign ; Value 0. ; }
      EndIf
    }
  }

  // For av formulation
  { Name MagneticVectorPotential ;
    Case {
      { Region SkinFeed    ; Type Assign ; Value 0. ; }
      { Region SkinDomainC ; Type Assign ; Value 0. ; }
      If(!Flag_SilverMuller)
        { Region SigmaInf  ; Type Assign ; Value 0. ; }
      EndIf
    }
  }


  { Name ElectricScalarPotential ;
    Case {
      { Region SkinFeed     ; Value 1-((X[]-W1)/delta_gap) ; }//FIX ME!!!
      { Region SkinAntennaL ; Value 0. ; }
      { Region SkinAntennaR ; Value 0. ; }
      { Region SkinGroundL  ; Value 1. ; }
      { Region SkinGroundR  ; Value 0. ; }
      { Region SkinGroundM  ; Value 0. ; }
    }
  }


}

Include "Microwave.pro";
