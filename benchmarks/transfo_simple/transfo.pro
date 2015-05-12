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

