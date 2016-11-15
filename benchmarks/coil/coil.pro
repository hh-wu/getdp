Include "coil.dat";

Group {
  // physical groups in the mesh
  Air = Region[ AIR ];
  Coil = Region[ COIL ];
  FeedPlus = Region[ FEED_PLUS ];
  FeedMinus = Region[ FEED_MINUS ];
  SkinCoil = Region[ SKIN_COIL ];
  SkinFeed = Region[ SKIN_FEED ];
  Inf = Region[ INF ];

  // generic groups for the formulations
  SurfaceElec = Region[ FeedPlus ];
  SurfaceElecWithI = Region[ FeedPlus ];
  SurfaceInf = Region[ Inf ];
  SkinDomainC = Region[ SkinCoil ];
  DomainDummy = Region[ 12345 ];
  DomainCC = Region[ Air ];
  DomainC  = Region[ Coil ];
  Domain = Region[ {DomainCC, DomainC} ];
}

Function{
  mu0  = 4.e-7 * Pi;
  nu0  = 1/mu0;
  eps0 = 8.854187818e-12;

  nu[] = nu0;
  sigma[] = sigma_Cu;
  epsilon[] = eps0;
  c[] = Sqrt[nu[]/epsilon[]];

  Printf("=====> Working frequency %g (skin depth %g)", Freq, Delta);

  I[] = Complex[0.,1.];
  Omega = 2*Pi*Freq;

  voltageCoil = 10;
}

Constraint {
  { Name MagneticVectorPotential_3D; Type Assign;
    Case {
      { Region Region[{SurfaceInf, SkinFeed}]; Value 0.; }
    }
  }

  { Name GaugeCondition_a_3D_MagSta; Type Assign;
    Case {
      { Region Domain; SubRegion Region[{SurfaceInf, SkinFeed}]; Value 0.; }
    }
  }
  { Name GaugeCondition_a_3D_MagDyn; Type Assign;
    Case {
      { Region DomainCC; SubRegion Region[{SurfaceInf, SkinFeed, SkinDomainC}]; Value 0.; }
    }
  }

  { Name Current_3D; Type Assign;
    Case {
    }
  }

  { Name Voltage_3D; Type Assign;
    Case {
      { Region FeedPlus; Value voltageCoil; }
    }
  }

  { Name ElectricScalarPotential;
    Case {
      { Region FeedMinus; Value 0.; }
    }
  }
}

Include "JacInt_Lib.pro"
Include "Formulations.pro"

PostOperation EleKin UsingPost EleKin {
  Print[ e, OnElementsOf DomainC, File "e.pos"];
  Print[ v0, OnElementsOf DomainC, File "v0.pos"];
  Print[ R, OnRegion #{SurfaceElec}, Format RegionTable ];
}

PostOperation EleKin_EleSta UsingPost EleKin_EleSta {
  Print[ v0, OnElementsOf DomainC, File "v0.pos"];
  Print[ v, OnElementsOf DomainCC, File "v.pos"];
}

PostOperation EleKin_MagSta UsingPost EleKin_MagSta {
  Print[ v0, OnElementsOf DomainC, File "v0.pos"];
  Print[ b, OnElementsOf Domain, File "b.pos"];
  Print[ e, OnElementsOf DomainC, File "e.pos"];
  Print[ h, OnElementsOf Domain, File "h.pos"];
  Print[ I, OnRegion #{SurfaceElec}, StoreInVariable $CurrentOfCoil ];
  Print[ Flux[DomainC], OnGlobal, Format RegionTable, StoreInVariable $FluxOfCoil, File "Flux.txt" ];
  Print[ L_from_Flux, OnRegion DomainDummy, Format RegionTable ];
}

PostOperation MagDyn UsingPost MagDyn {
  Print[ b, OnElementsOf Domain, File "b.pos"];
  Print[ j, OnElementsOf DomainC, File "j.pos"];
  Print[ v, OnElementsOf DomainC, File "vs.pos"];
  //Print[ U, OnRegion #{SurfaceElec}, Format FrequencyTable];
  //Print[ I, OnRegion #{SurfaceElec}, Format FrequencyTable];
  //Print[ Ipos, OnRegion #{SurfaceElec}, Format FrequencyTable];
  //Print[ Z, OnRegion #{SurfaceElec}, Format RegionTable ];
  Print[ a, OnElementsOf Domain, File "a.pos"];
  Print[ U, OnRegion #{SurfaceElec}, Format FrequencyTable];
  Print[ I, OnRegion #{SurfaceElec}, Format FrequencyTable];
  Print[ Z, OnRegion #{SurfaceElec}, Format RegionTable ];
}

PostOperation MagDyn_EleSta UsingPost MagDyn_EleSta {
  Print[ e, OnElementsOf Domain, File "e.pos"];
  Print[ v, OnElementsOf DomainCC, File "v.pos"];
  Print[ Ipos_RLC, OnRegion #{SurfaceElec}, StoreInVariable $CurrentOfCoil ];
  Print[ Z, OnRegion #{SurfaceElec}, Format RegionTable ];
}

PostOperation FullWave UsingPost FullWave {
  Print[ b, OnElementsOf Domain, File "b.pos"];
  Print[ j, OnElementsOf DomainC, File "j.pos"];
  Print[ s, OnElementsOf Domain, File "s.pos"];
  Print[ Z, OnRegion #{SurfaceElec}, Format RegionTable ];
}
