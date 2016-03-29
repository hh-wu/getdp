// Some useful shared parameters are first read
Include "transfo.dat";

Group {
Flag_Inductors_Massive = 0;
DefineConstant
[
 Flag_Core_Conducting = {0, Choices{0,1}, Name "Input/Conducting core"}
 ];

Flag_VoltageTransformer = 1; // 0: current fixed in each inductor;
 	           	     // 1: voltage fixed in Ind1, zero current in Ind2

Flag_CircuitCoupling = 1; // Circuit coupling (1) or not (0)

  // Elementary groups

  Core   = # CORE;
  Air    = # AIR;  AirTot = Region[{Air}];

  IndB~{1} = # IND1L; IndA~{1} = # IND1R;  Ind~{1} = Region[{IndB~{1}, IndA~{1}}];
  IndB~{2} = # IND2L; IndA~{2} = # IND2R;  Ind~{2} = Region[{IndB~{2}, IndA~{2}}];
  Inds = Region[ {Ind~{1}, Ind~{2}} ];

  SkinIndB~{1} = # SKININD1L; SkinIndA~{1} = # SKININD1R;  SkinInd~{1} = Region[{SkinIndB~{1}, SkinIndA~{1}}];
  SkinIndB~{2} = # SKININD2L; SkinIndA~{2} = # SKININD2R;  SkinInd~{2} = Region[{SkinIndB~{2}, SkinIndA~{2}}];
  SkinInds = Region[ {SkinInd~{1}, SkinInd~{2}} ];

  If (Flag_Symmetry_Y)  Axis_Y = # AXIS_Y;  EndIf

  SkinCore = # SKINCORE;

  SurfaceGh0 = #{}; // Portion of boundary with zero tangential magnetic field...
  SurfaceGe0 = #{}; // Portion of boundary with zero tangential electric field

  // Global groups (inputs for the libraries of formulations included later):
  //   DomainCC_Mag : Non-conducting regions
  //   DomainC_Mag  : Conducting regions with eddy currents
  //   DomainS_Mag  : Stranded conductors (inductors) (Sources)
  //
  //   SkinDomainC_Mag : Boundary of conducting regions (without symmetry planes)
  //     (For h-phi formulation (for interface condition between h and phi))

  // The global regions are surely these; others will be added afterward
  DomainCC_Mag = Region[ {Air} ];

  DomainC_Mag  = Region[ {} ];
  SkinDomainC_Mag = Region[ {} ];

  DomainS_Mag = Region[ {} ];


  If (!Flag_Core_Conducting) // The Core is either not subject...
    DomainCC_Mag += Region[ {Core} ];
  EndIf
  If (Flag_Core_Conducting) // ... or subject to eddy currents
    DomainC_Mag += Region[ {Core} ];
    SkinDomainC_Mag = Region[ {SkinCore} ];
  EndIf

  If (!Flag_Inductors_Massive) // The inductors are either stranded...
    // (i.e., we do not want skin effect in them)
    DomainCC_Mag += Region[ {Inds} ];
    DomainS_Mag += Region[ {Inds} ];
  EndIf
  If (Flag_Inductors_Massive) // ... or massive
    DomainC_Mag += Region[ {Inds} ];
    SkinDomainC_Mag += Region[ {SkinInds} ];
  EndIf


  If (!Flag_InfiniteDomain)
    //    SurfaceGh0 += #{SURAIREXT};  // nxh=0 on this boundary
    SurfaceGe0 += #{SURAIREXT};  // n.b=0 on this boundary
  EndIf
  If (Flag_InfiniteDomain)
    // Infinite region (Cylindrical shell) to be used for geometrical Jacobian
    AirInf = # AIRINF;  AirTot += Region[{AirInf}];
    DomainInf = Region[ {AirInf} ];
    Val_Rint = rShellInt; Val_Rext = rShellExt;
    DomainCC_Mag += Region[ {DomainInf} ];
    SurfaceGInf = # SURINF; // Will support a homogeneous boundary condition
  EndIf


  // Whole studied domain
  Domain_Mag = Region[ {DomainCC_Mag, DomainC_Mag} ];

  nbInductors = 2;
}

// --------------------------------------------------------------------------

Function {
  // demo

  mu0 = 4.e-7 * Pi;

  DefineConstant[ murCore = {1000., Name "Input/mur"} ];

  // sans couplage circuit (courant imposé au primaire et au
  // secondaire):
  val_Current~{1} = 1. ;
  val_Current~{2} = -1. ;
  // avec couplage circuit:
  DefineConstant[ Val_Ein = {100., Name "Input/V1 (V)"}] ;
  DefineConstant[ R_charge = {1000, Name "Input/R2 (Ohms)"}];

  // Will be used only if Core in DomainC_Mag
  DefineConstant[ sigmaCore = {2.5e7/1000, Name "Input/sigma", Label "sigma (S/m)"} ] ;
  sigmaInds = 5.9e7;

  DefineConstant[ Ns~{1} = {100, Name "Input/N1", Visible 0} ] ;
  DefineConstant[ Ns~{2} = {100, Name "Input/N2", Visible 0} ] ;

  // For a-v formulation

  nu [ #{AirTot, Inds} ]  = 1. / mu0 ;
  nu [ Core ]  = 1. / (murCore * mu0) ;
  sigma [ Inds ] = sigmaInds;
  sigma [ Core ] = sigmaCore;

  // For h-phi formulation

  mu [ #{AirTot, Inds} ]  = mu0 ;
  mu [ Core ]  = murCore * mu0 ;
  ro [ Inds ] = 1./sigmaInds;
  ro [ Core ] = 1./sigmaCore;


  If ( Flag_Axisymmetry)  CoefGeo = 2.*Pi;  EndIf
  If (!Flag_Axisymmetry)  CoefGeo = 1.;  EndIf


  Flag_CoefGeos = 1;

  For iInd In {1:nbInductors}
    // Number of wires of each inductor portion
    If (!Flag_Inductors_Massive)
      Ns[Ind~{iInd}] = Ns~{iInd} ;
    EndIf
    If (Flag_Inductors_Massive)
      Ns[Ind~{iInd}] = 1 ;
    EndIf
    // Section of each inductor portion (must be separated)
    // and direction (given to positive current and voltage; reference: z-axis)
    Sc[IndA~{iInd}] = SurfaceArea[];
    SignBranch[IndA~{iInd}] = -1;

    Sc[IndB~{iInd}] = SurfaceArea[];
    SignBranch[IndB~{iInd}] = 1;

    // Current density definition in each inductor portion
    // and associated CoefGeos[.] for direction convention
    js0[Ind~{iInd}] = Ns[]/Sc[] * Vector[0,0,SignBranch[]];
    CoefGeos[Ind~{iInd}] = SignBranch[] * CoefGeo;
  EndFor
  CoefGeos[Core] = 1;

  val_Voltage~{1} = 100. ;
  val_Voltage~{2} = 0. ;

  // Frequency for frequency domain analysis (Hz)
  DefineConstant[ Freq = {50., Name "Input/f (Hz)"} ];

}

// --------------------------------------------------------------------------

Constraint {

  // For a-v formulation

  { Name MagneticVectorPotential_2D ;
    Case {
      { Region SurfaceGe0  ; Value 0. ; }
      If (Flag_InfiniteDomain)  { Region SurfaceGInf ; Value 0. ; }  EndIf
      If (Flag_Symmetry_Y)      { Region Axis_Y ; Value 0. ; }       EndIf
    }
  }


  // For each conductor, either the voltage or the current must be fixed.
  // If both are left unknown, a circuit coupling equation is needed
  // (to be described soon).
  { Name Current_2D ;
    Case {
      If (!Flag_CircuitCoupling)
        For iInd In {1:nbInductors}
          { Region Region[Ind~{iInd}] ; Value val_Current~{iInd} ; }
        EndFor
      EndIf
      If (Flag_CircuitCoupling)
        // none
      EndIf
    }
  }

  { Name Voltage_2D ;
    Case {
      // Because the 'Core' is a passive conductor (no external source applied);
      // not needed if Core is not in DomainCWithI_Mag
      If (Flag_Core_Conducting)  { Region Core ; Value 0. ; }  EndIf
    }
  }

}


If (Flag_CircuitCoupling)
// ---------
//  Circuit
// ---------

Group {
  Ein = # 10000 ;
  Rc  = # 10001 ;
  Iout= # 10002 ;

  Resistance_Cir  = Region[ {Rc} ] ;
  Inductance_Cir  = Region[ {} ] ;

  Capacitance1_Cir = Region[ {} ] ;
  Capacitance2_Cir = Region[ {} ] ;
  Capacitance_Cir = Region[ {Capacitance1_Cir, Capacitance2_Cir} ] ;

  Diode_Cir  = Region[ {} ] ;

  SourceV_Cir = Region[ {Ein/*, Iout*/} ] ;
  SourceI_Cir = Region[ {/*Iout*/} ] ;


  DomainZ_Cir = Region[ {Resistance_Cir, Inductance_Cir, Capacitance_Cir,
                         Diode_Cir} ] ;
  DomainSource_Cir = Region[ {SourceV_Cir, SourceI_Cir} ] ;

  DomainZt_Cir = Region[ {DomainZ_Cir, DomainSource_Cir} ] ;
}

Function {
  Resistance[Rc] = R_charge ;


}


Constraint {

  { Name Current_Cir ;
    Case {
      { Region Iout ; Value 0. ; }
    }
  }

  { Name Voltage_Cir ;
    Case {
      { Region Ein ; Value Val_Ein ; }
    }
  }

  { Name ElectricalCircuit ; Type Network ;
    Case Circuit1 {
      { Region Ein ; Branch {1,2} ; }

      { Region IndB~{1} ; Branch {2,3} ; }
      { Region IndA~{1} ; Branch {3,1} ; }
    }
    Case Circuit2 {
      { Region Rc ; Branch {1,2} ; }
      //{ Region Iout ; Branch {1,2} ; }

      { Region IndB~{2} ; Branch {2,3} ; }
      { Region IndA~{2} ; Branch {3,1} ; }
    }
  }

}

EndIf


// Libraries with formulations are included

Include "Jacobian_Lib.pro"
Include "Integration_Lib.pro"
Include "Mag_Sta_Dyn_a_2D.pro"

// Post-operations

// For a-v formulation
//   Names of PostOperations:
//    Map_a_x for distributions of x, where x is
//     a (magnetic vector potential giving field lines)
//     b (magnetic flux density of magnetic induction)
//     j (electric current density)
//     jxb (force density in a non-magnetic conductor; Laplace force density)
//    Val_jxb_total (total Laplace force on region)
//    U_av (voltages and currents in inductors)
//    Line_a_b, Line_a_j: variations of b and j along a line (horizontal)

PostOperation Map_a_a UsingPost MagDyn_av_2D {
  If (!Flag_Axisymmetry)
    Print[ az, OnElementsOf Domain_Mag, File "Transfo_a_a.pos"] ;
  EndIf
  If (Flag_Axisymmetry)
    Print[ raz, OnElementsOf Domain_Mag, File "Transfo_a_a.pos"] ;
  EndIf
}

PostOperation Map_a_b UsingPost MagDyn_av_2D {
  Print[ b, OnElementsOf Domain_Mag, File "Transfo_a_b.pos"] ;
}

PostOperation Map_a_j UsingPost MagDyn_av_2D {
  Print[ j , OnElementsOf #{DomainC_Mag, DomainS_Mag}, File "Transfo_a_j.pos"] ;
  //  Print[ jz, OnElementsOf #{DomainC_Mag, DomainS_Mag}, File "Transfo_a_jz.pos"] ;
}

PostOperation Map_a_jxb UsingPost MagDyn_av_2D {
  Print[ jxb, OnElementsOf #{DomainC_Mag, DomainS_Mag},
	 File "Transfo_a_jxb.pos"] ;
}
PostOperation Val_jxb_total UsingPost MagDyn_av_2D {
  Print[ jxb_total[Inds], OnGlobal, Format Table] ;
  Print[ jxb_total[Inds], OnGlobal, Format Table] ;
}

PostOperation U_av UsingPost MagDyn_av_2D {
  Print[ U, OnRegion #{Inds}, Format Table ] ;
  Print[ I, OnRegion #{Inds}, Format Table ] ;
  If (Flag_Core_Conducting)
    Print[ I, OnRegion #{Core}, Format Table ] ;
  EndIf
}
PostOperation U_av_pos UsingPost MagDyn_av_2D_pos {
  Print[ U, OnRegion #{Inds}, Format Table ] ;
  Print[ Upos, OnRegion #{Inds}, Format Table ] ;
  Print[ Ipos, OnRegion #{Inds}, Format Table ] ;
  If (Flag_Core_Conducting)
    Print[ Ipos[Core], OnRegion #{Core}, Format Table ] ;
  EndIf
}

If (Flag_CircuitCoupling)
  PostOperation U_av_circuit UsingPost MagDyn_av_2D {
    Print[ U, OnRegion #{Ein, Rc, Iout}, Format RegionTable ] ;
    Print[ I, OnRegion #{Ein, Rc, Iout}, Format RegionTable ] ;
    Print[ AbsU, OnRegion #{Rc}, Format RegionTable, SendToServerRealPart "Output/|U| sec" ] ;
    Print[ AbsI, OnRegion #{Rc}, Format RegionTable, SendToServerRealPart "Output/|I| sec" ] ;
  }
EndIf

DefineConstant[
  R_ = {"MagDyn_av_2D", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"U_av_circuit, Map_a_j, Map_a_b, Map_a_a", Name "GetDP/2PostOperationChoices", Visible 0}
];

PostOperation Flux_av_pos UsingPost MagDyn_av_2D_pos {
  Print[ Upos, OnRegion #{Inds}, Format Table ] ;
  Print[ Flux, OnRegion #{Inds}, Format Table ] ;
  Print[ RI  , OnRegion #{Inds}, Format Table ] ;
}
PostOperation Flux_av_pos_file UsingPost MagDyn_av_2D_pos {
  Print[ Upos, OnRegion #{Inds}, Format Table, File "Ua.lin", HarmonicToTime 24 ] ;
  Print[ Flux, OnRegion #{Inds}, Format Table, File "Fa.lin", HarmonicToTime 24 ] ;
  Print[ RI  , OnRegion #{Inds}, Format Table, File "RIa.lin", HarmonicToTime 24 ] ;
}

/*

// For phi formulation (MagSta)
// Distinct PostProcessing ('MagSta_phi').
// To use PostProcessing 'MagDyn_hphi', use rather Resolution 'MagSta_hphi'

PostOperation Map_phi_phi UsingPost MagSta_phi {
  Print[ phi, OnElementsOf Domain_Mag, File "Transfo_phi_phi.pos"] ;
  // The magnetic scalar potential phi undergoes rapid variations where the
  // source field is non-zero.
}

PostOperation Map_phi_h UsingPost MagSta_phi {
  Print[ h, OnElementsOf Domain_Mag, File "Transfo_phi_h.pos"] ;
  // h = hs + grad phi has the correct physical distribution
}
PostOperation Map_phi_b UsingPost MagSta_phi {
  Print[ b, OnElementsOf Domain_Mag, File "Transfo_phi_b.pos"] ;
}
PostOperation Map_phi_j UsingPost MagSta_phi {
  Print[ j , OnElementsOf #{DomainC_Mag, DomainS_Mag}, File "Transfo_phi_j.pos"] ;
  Print[ jz, OnElementsOf #{DomainC_Mag, DomainS_Mag}, File "Transfo_phi_jz.pos"] ;
}


// For h-phi formulation
//   Names of PostOperations:
//    Map_h_x for distributions of x, where x is
//     phi (magnetic scalar potential giving lines perpendicular to field lines)
//     h (magnetic field)
//     b (magnetic flux density of magnetic induction)
//     j (electric current density)
//    Val_jxb_total (total Laplace force on region)
//    U_hphi (voltages and currents in inductors)
//
//    Map_hs_1, Map_hs_2, ...: Source magnetic field (hs) and current density (js)
//                             computed from js0[] for inductor 1, 2, ...
//
//    Tree_1, Tree_2, ...: Tree of edges for gauge condition on hs_1, hs_2, ...
//
//    Line_h_b, Line_h_j: variations of b and j along a line (horizontal)


PostOperation Map_h_phi UsingPost MagDyn_hphi {
  Print[ phi, OnElementsOf Domain_Mag, File "Transfo_h_phi.pos"] ;
  // The magnetic scalar potential phi undergoes rapid variations where the
  // source field is non-zero.
}

PostOperation Map_h_h UsingPost MagDyn_hphi {
  Print[ h, OnElementsOf Domain_Mag, File "Transfo_h_h.pos"] ;
  // h = hs + grad phi has the correct physical distribution
}
PostOperation Map_h_b UsingPost MagDyn_hphi {
  Print[ b, OnElementsOf Domain_Mag, File "Transfo_h_b.pos"] ;
}
PostOperation Map_h_j UsingPost MagDyn_hphi {
  Print[ j , OnElementsOf #{DomainC_Mag, DomainS_Mag}, File "Transfo_h_j.pos"] ;
  Print[ jz, OnElementsOf #{DomainC_Mag, DomainS_Mag}, File "Transfo_h_jz.pos"] ;
}

PostOperation U_hphi UsingPost MagDyn_hphi {
  Print[ U, OnRegion #{DomainSref_SourceField_Mag}, Format Table] ;
  Print[ I, OnRegion #{DomainSref_SourceField_Mag}, Format Table] ;
}

PostOperation U_hphi_pos UsingPost MagDyn_hphi_pos {
  Print[ Upos, OnRegion #{DomainSref_SourceField_Mag}, Format Table] ;
  Print[ I, OnRegion #{DomainSref_SourceField_Mag}, Format Table] ;
}


PostOperation Flux_hphi_pos UsingPost MagDyn_hphi_pos {
  Print[ Upos, OnRegion #{DomainSref_SourceField_Mag}, Format Table ] ;
  Print[ Flux, OnRegion #{DomainSref_SourceField_Mag}, Format Table ] ;
  Print[ RI  , OnRegion #{DomainSref_SourceField_Mag}, Format Table ] ;
}
PostOperation Flux_hphi_pos_file UsingPost MagDyn_hphi_pos {
  Print[ Upos, OnRegion #{DomainSref_SourceField_Mag}, Format Table, File "Uh.lin", HarmonicToTime 24 ] ;
  Print[ Flux, OnRegion #{DomainSref_SourceField_Mag}, Format Table, File "Fh.lin", HarmonicToTime 24 ] ;
  Print[ RI  , OnRegion #{DomainSref_SourceField_Mag}, Format Table, File "RIh.lin", HarmonicToTime 24 ] ;
}


// Source fields hs
For iInd In {1:Nbr_DomainS_SourceField}

  fileExt_ = Str[ Sprintf("_%g.pos", iInd) ];

  PostOperation Map_hs~{iInd} UsingPost MagSta_hs~{iInd} {
    Print[ hs , OnElementsOf Domain_Mag, File StrCat["Transfo_hs", fileExt_] ];
    Print[ js0, OnElementsOf Domain_Mag, File StrCat["Transfo_js0", fileExt_] ];
    Print[ js , OnElementsOf Domain_Mag, File StrCat["Transfo_js", fileExt_] ];
    // Check the non-physical nature of hs. Its curl, i.e. js, is however
    // the physical current density. The source was js0.
    // (It is usually good to check that the curl of the primary field solution hs
    // give back the source js0.)
  }

  PostOperation Tree~{iInd} UsingPost MagSta_hs~{iInd} {
    PrintGroup[
      EdgesOfTreeIn[{Domain_SourceField_Mag~{iInd}},
		    StartingOn {SkinDomain_SourceField_Gauge_Mag~{iInd}} ],
      In Domain_SourceField_Mag~{iInd}, File StrCat["Tree", fileExt_]
    ];
  // In Gmsh, change 'Intervals type' to 'Filled iso-values' to see the tree
}
EndFor

*/


/*
nbDivs = 200;
x0=-(dxCore/2.+gapxInd+dxInd+2*dxInd); x1=-x0; y0=0.; z0=0.;

PostOperation Line_a_b UsingPost MagDyn_av_2D {
  Print[ b, OnLine{{x0,y0,z0}{x1,y0,z0}}{nbDivs}, File "Line_a_b", Format Gnuplot] ;
}
PostOperation Line_h_b UsingPost MagDyn_hphi {
  Print[ b, OnLine{{x0,y0,z0}{x1,y0,z0}}{nbDivs}, File "Line_h_b", Format Gnuplot] ;
}

nbDivs = 200;
hInds = nInds*dyInd + (nInds-1)*gapyInd; y0Inds = -hInds/2. + dyInd/2.;
x0=-(dxCore/2.+gapxInd+dxInd+2*dxInd); x1=-x0; y0=y0Inds; z0=0.;

PostOperation Line_a_j UsingPost MagDyn_av_2D {
  Print[ jz, OnLine{{x0,y0,z0}{x1,y0,z0}}{nbDivs}, File "Line_a_j", Format Gnuplot] ;
}
PostOperation Line_h_j UsingPost MagDyn_hphi {
  Print[ jz, OnLine{{x0,y0,z0}{x1,y0,z0}}{nbDivs}, File "Line_h_j", Format Gnuplot] ;
}
*/
