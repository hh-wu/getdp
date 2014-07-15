Include "freinjs-dat.pro" ;

Flag_CircuitCoupling = 0 ;

Group {
  Air  = #{AIR, AIRGAP} ;

  Core = #CORE ;
  SkinCore = #SKIN_CORE ;

  Plate= #PLATE ;
  SkinPlate = #SKIN_PLATE ;

  Coil = #{COIL} ;
  SkinCoil = #SKIN_COIL ;
  CutCoil  = #CUT_COIL_BOT ;

  SurfaceGe0 = #CUT_SYMMETRY ;
  SurfaceGInf = #AIR_INF ;
  Surface_FixedMVP3D = Region[{ SurfaceGe0, SurfaceGInf } ];

  DomainCC_Mag = Region[{ Air, Core }] ; // Non-Conducting domain

 //--------------------------------------------------------------
  DomainS0_Mag =  Region[{ }]  ; // if directly imposed js0[]

  // When computing hs:
  Nbr_DomainS = 1 ; // Number of stranded inductors
  For k In {1:Nbr_DomainS}   // Domains for source field computation
    DomainS_Mag~{k}     = Region[ {Coil} ];
    SurfaceCutS_Mag~{k} = Region[ {CutCoil} ] ;
    SkinDomainS_Mag~{k} = Region[ {SkinCoil} ] ;
    SkinDomainS2_Mag~{k}= Region[ {SKIN_CORE_COIL} ] ;
    DomainCC2_Mag~{k}   = Region[ {CORE_COIL} ] ; // Min=transition layer for cut
    DomainS_Mag  += Region[ {Coil} ];
    DomainSref_Mag  += Region[ {k} ];
    DomainCC_Mag += Region[ {Coil} ];
  EndFor

  DomainC_Moving    = Region[{Plate}] ;
  DomainC_NonMoving = Region[{Core}] ;
  Domain_Moving  = Region[{DomainC_Moving}] ;

  DomainC_Mag  = Region[{ Plate }] ; // Conducting domain
  SkinDomainC_Mag = Region[{ SkinPlate } ]; //Skin of Conductors

  Domain_Mag   = Region[{ DomainC_Mag, DomainCC_Mag }];
  Domain_Force = ElementsOf[ Air, OnOneSideOf SkinPlate ];
}


Function {

  mu0 = 4.e-7 * Pi ;
  eps0= 8.854187818e-12 ;

  murSteel = 1000 ;

  sigmaCu = 5.9e7 ;
  sigmaAl = 3.7e7 ;
  sigmaSteel = 5.9e6 ;

  nu [ #{Air, Coil, Plate} ]  = 1. / mu0 ;
  nu [ Core ]  = 1. / (murSteel * mu0) ;

  sigma[ Core ] = sigmaSteel ;
  sigma[ Coil ] = sigmaCu ;
  sigma[ Plate ] = sigmaAl ;

  rho[] = 1/sigma[] ;


  //step = 0 ;
  //timei = time0 + step*dtime ;

 // For moving
  displacement[#{DomainC_NonMoving, DomainS_Mag}] = Vector[0., 0., 0.];
  displacement[DomainC_Moving ]    = Vector[displacementX,  displacementY,  displacementZ] ;
  a_previousstep[] = (timei==0) ? Vector[0,0,0] : VectorField[ XYZ[]-displacement[] ] ;

  Fct_Time[] =  F_Cos_wt_p[]{2*Pi*Freq, 0.} ;

  // Imposed current in stranded inductors
  nturns = 1 ;
  Ns[] = nturns ; // Number of turns
  Sc[] = lz_coil * ly_coil ;

  x0_coil = -0.11 ;
  y0_coil =  0.072 + 0.015 ;
  z0_coil =  0. ;

  js0[#{COIL}] = Ns[]/Sc[] *
    ( (Fabs[X[]-x0_coil]<0.03 && Z[]<=-0.015) ? Vector[-1, 0, 0 ] :
    ( (Fabs[X[]-x0_coil]<0.03 && Z[]>= 0.015) ? Vector[ 1, 0, 0 ] :
      ((Fabs[Z[]] < 0.015 && (X[]-x0_coil)<0.) ? Vector[ 0, 0, 1 ] :
       ((Fabs[Z[]]< 0.015 && (X[]-x0_coil)>0.) ? Vector[ 0, 0,-1 ] :
         Vector[ Sin[Atan2[Z[], X[]-x0_coil]], 0., -Cos[Atan2[Z[],X[]-x0_coil]] ] * Fct_Time[] ))));

}

Constraint {

 { Name I_Unit ; // Source field - Unit current - normalizing by the number of turns
    Case {
      { Region CutCoil ; Value -nturns ; }
    }
  }

 { Name I_3D ;
   Case {
     { Region Coil ; Value 1 ; }
     //{ Region Core ; Value 0. ; }
   }
 }
 { Name V_3D ;
   Case {
     // Because the 'Core' is a passive conductor (no external source applied);
     // not needed if Core is not in DomainCWithI_Mag
   }
 }

 { Name MVP_3D ;
    Case {
      { Region SurfaceGe0  ; Value 0. ; }
      { Region SurfaceGInf ; Value 0. ; }

      If(Flag_StepByStep)
        { Region Domain_Mag ; Type InitFromResolution ; NameOfResolution ProjectionInit ; }
      EndIf
    }
  }

}

Include "JacInt_Lib.pro" ;
Include "Mag_Dyn_avs_3D.pro" ;


PostOperation Map_local UsingPost MagDyn_a_3D {
  //Print[ a, OnElementsOf Domain_Mag, File "a.pos" ] ;
  Print[ b, OnElementsOf Domain_Mag, File "b.pos" ] ;
  Print[ j, OnElementsOf DomainC_Mag, File "j.pos" ] ;
  //Print[ ForceX_VirtualWork, OnRegion NodesOf[SkinPlate], Format RegionValue/*, File "Fvw.dat"*/ ] ;
}


PostOperation Map_local_StepByStep UsingPost MagDyn_a_3D {
  Print[ a, OnElementsOf DomainC_Mag,  File "a_restart.pos", OverrideTimeStepValue step, LastTimeStepOnly ] ;
  Print[ b, OnElementsOf Domain_Mag,  File "b.pos", OverrideTimeStepValue step, LastTimeStepOnly ] ;
  Print[ j, OnElementsOf DomainC_Mag, File "j.pos", OverrideTimeStepValue step, LastTimeStepOnly ] ;
}

PostOperation Force UsingPost MagDyn_a_3D {
  Print[ ForceX_VirtualWork, OnRegion NodesOf[SkinPlate], Format RegionValue, File "Fvw.dat",
         Store 55, LastTimeStepOnly ] ;
}

DefineConstant[
  R_ = {"MagDyn_a_3D_t_stepbystep", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -v 3 -bin -v2", Name "GetDP/9ComputeCommand", Visible 0},
  //C_ = {"-solve -v 3 -bin", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];

