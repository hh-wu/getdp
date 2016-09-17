// getdp microcoil.pro -msh microcoil.msh -solve MagDyn_a_3D_capa

Include "microcoil_data.pro";

DefineConstant[
  Flag_AnalysisType = { 0,
    Choices{
      0="electrokinetics + electrostatics",
      1="magnetodynamics",
      2="magnetodynamics + electrostatics",
      3="full wave"
    },
    Name "Input/00Type of analysis", Highlight "Blue",
    Help Str["- Use 'electrikinetics + electrostatics' to compute C",
      "- Use 'magnetodynamics' to compute R \& L",
      "- Use 'magnetodynamics + electrostatics' to compute R, L \& C",
      "- Use 'full wave' to compute R, L \& C"]}
];


Group {
  Air    = # {AIR, AIRCUT} ;

  Coil   = # COIL ;
  ElecCoil  = # ELECIN ;
  ElecCoilOut = # ELECOUT ;

  DomainCC = Region[ {Air} ] ;
  DomainC  = Region[ {Coil} ] ;
  DomainCWithI  = Region[ {} ] ;

  DomainS  = Region[ {} ] ;

  SkinDomainC = Region[ {SKINCOIL} ] ;

  If(Flag_AnalysisType==3)
    SurfaceGe0  = Region[ {} ] ;
    SilverMullerBoundary = Region[ {SURFBOX} ] ;
    DomainU = Region[ {DomainC} ]; // support Domain for the potential
  EndIf
  If(Flag_AnalysisType!=3)
    SurfaceGe0  = Region[ {SURFBOX} ] ;
    SilverMullerBoundary = Region[ {SURFBOX} ] ;
    DomainU = Region[ {DomainC, DomainCC} ]; // support Domain for the potential
  EndIf

  SurfaceElec = Region[{ElecCoil, ElecCoilOut}];
  SurfaceElecWithI = Region[{SurfaceElec}];

  Surface_FixedMagneticVectorPotential3D = Region[{SurfaceGe0}];

  DomainInf = Region[ {} ] ;
  Domain = Region[ {DomainCC, DomainC} ] ;

  DomainTot = Region[ {DomainCC, DomainC, SilverMullerBoundary} ] ;
}


/* --------------------------------------------------------------------------*/

Function {

  mu0  = 4.e-7 * Pi ;
  nu0  = 1/mu0 ;
  eps0 = 8.854187818e-12 ;
  c0   = Sqrt[nu0/eps0];

  sigmaCoil = 5.9e7 ;

  // reluctivity
  nu [ #{Air, Coil, SilverMullerBoundary} ]  = 1. / mu0 ;
  // conductivity
  sigma [ Coil ] = sigmaCoil ;

  // permittivity
  epsr[ Region[{Air, SilverMullerBoundary}]  ]  = epsilon_r;
  epsr[ Coil ] = 1.;
  epsilon[] = eps0 * epsr[] ;
  c[] = Sqrt[nu[]/epsilon[]];
  K[] = 2*Pi*Freq/c[] ;

  I[] = Complex[0.,1.];

  voltageCoil = 1.;
}


/* --------------------------------------------------------------------------*/

Constraint {

  { Name MagneticVectorPotential_3D ;
    Case {
      { Region SurfaceGe0  ; Value 0. ; }
    }
  }

  { Name Current_3D ;
    Case {
    }
  }

  { Name Voltage_3D ;
    Case {
      { Region ElecCoil    ; Value voltageCoil ; }
      { Region ElecCoilOut ; Value 0.          ; }
    }
  }

  // Ele v
  { Name ElectricScalarPotential ;
    Case {
      //{ Region SkinDomainC ; Value 0. ; }
    }
  }

}

Dir = "res/";
ppo = "Output/";

Include "JacInt_Lib.pro"
Include "Formulations.pro"

// For electrokinetic formulation
PostOperation Post_EleKin UsingPost EleKin {
  Print[ v, OnElementsOf DomainC, File StrCat[Dir,"v_elekin.pos"] ] ;
  Print[ e, OnElementsOf DomainC, File StrCat[Dir,"e_elekin.pos"] ] ;
}

PostOperation PostOp~{0} UsingPost EleKinSta {
  Print[ v,  OnElementsOf DomainCC, File StrCat[Dir,"v_elekinsta.pos"] ] ;
  Print[ e,  OnElementsOf DomainCC,  File StrCat[Dir,"e_elekinsta.pos"] ] ;

  Print[ v0, OnElementsOf DomainCC, File StrCat[Dir,"v0_elekinsta.pos"] ] ;
  Print[ e0, OnElementsOf DomainCC, File StrCat[Dir,"e0_elekinsta.pos"] ] ;

  Print[ v1, OnElementsOf DomainCC, File StrCat[Dir,"v1_elekinsta.pos"] ] ;
  Print[ e1, OnElementsOf DomainCC, File StrCat[Dir,"e1_elekinsta.pos"] ] ;

  Print[ Ipos, OnRegion ElecCoil, Format Table, Color "Ivory",
    SendToServer StrCat[ppo,"I_C"], File > StrCat[Dir,"Ipos_C.dat"]] ;
}

PostOperation PostOp~{1} UsingPost MagDyn_av_3D {
  Print[ b, OnElementsOf Domain, File StrCat[Dir,"b.pos"] ] ;
  Print[ j, OnElementsOf DomainC, File StrCat[Dir,"j.pos"] ] ;
  Print[ v, OnElementsOf DomainC, File StrCat[Dir,"vs.pos"] ] ;

  Print[ U, OnRegion ElecCoil, Format Table, SendToServer StrCat[ppo,"U_RL"], Color "Ivory", File > StrCat[Dir, "U_RL.dat"] ] ;
  Print[ I, OnRegion ElecCoil, Format Table, SendToServer StrCat[ppo,"I_RL"], Color "Ivory", File > StrCat[Dir, "I_RL.dat"] ] ;
  Print[ Z, OnRegion ElecCoil, Format Table, SendToServer StrCat[ppo,"Z_RL"], Color "Ivory", File > StrCat[Dir, "Z_RL.dat"] ] ;
  Print[ L, OnRegion ElecCoil, Format Table, SendToServer StrCat[ppo,"L_RL"], Color "Ivory", File > StrCat[Dir, "L_RL.dat"] ] ;
}

PostOperation PostOp~{2} UsingPost Electrostatics_a0v0_v {
  Print[ v,  OnElementsOf DomainCC, File StrCat[Dir, Sprintf("v_flag%g.pos", Flag_AnalysisType)] ] ;
  Print[ v0, OnElementsOf DomainCC, File StrCat[Dir, Sprintf("v0_flag%g.pos", Flag_AnalysisType)] ] ;
  Print[ v1, OnElementsOf DomainCC, File StrCat[Dir, Sprintf("v1_flag%g.pos", Flag_AnalysisType)] ] ;
  Print[ e,  OnElementsOf DomainCC, File StrCat[Dir, Sprintf("e_flag%g.pos", Flag_AnalysisType)] ] ;

  Print[ Ipos_RL,   OnRegion ElecCoil, Format FrequencyTable ] ;
  Print[ Ipos_RLC,  OnRegion ElecCoil, Format FrequencyTable ] ; // all Ipos_wcapa
  //Print[ Ipos_incapa, OnRegion ElecCoil, Format FrequencyTable ] ;
  //Print[ Cpos_incapa, OnRegion ElecCoil, Format FrequencyTable ] ; // == Cpos_fromEnergy
  Print[ Cpos_fromEnergy, OnRegion ElecCoil, Format FrequencyTable ] ;
  // Print[ Cpos_fromEnergy[Domain], OnRegion ElecCoil, Format FrequencyTable ] ; //== idem previous line
  // Print[ Cpos_fromEnergy[Domain], OnGlobal, Format Table ] ; //== idem previous line

  Print[ Ipos_RL,  OnRegion #{ElecCoil}, Format FrequencyTable, File > StrCat[Dir, Sprintf("IRL_flag%g.dat", Flag_AnalysisType)] ];
  Print[ Ipos_RLC,  OnRegion #{ElecCoil}, Format FrequencyTable, File > StrCat[Dir, Sprintf("IRLC_flag%g.dat", Flag_AnalysisType)] ];
  Print[ Ipos_incapa, OnRegion #{ElecCoil}, Format FrequencyTable, File > StrCat[Dir, Sprintf("Iin_flag%g.dat", Flag_AnalysisType)] ];
  Print[ Cpos_incapa, OnRegion #{ElecCoil}, Format FrequencyTable, File > StrCat[Dir, Sprintf("Cin_flag%g.dat", Flag_AnalysisType)] ];
  Print[ Cpos_fromEnergy, OnRegion #{ElecCoil}, Format FrequencyTable, File > StrCat[Dir, Sprintf("Ce_flag%g.dat", Flag_AnalysisType)] ];
}

PostOperation PostOp~{3} UsingPost FullWave_av_3D {
  Print[ b, OnElementsOf Domain,  File StrCat[Dir, "b_fw.pos"]] ;
  Print[ j, OnElementsOf DomainC, File StrCat[Dir, "j_fw.pos"]] ;
  Print[ v, OnElementsOf DomainC, File StrCat[Dir, "v_fw.pos"]] ;
  Print[ e, OnElementsOf Domain,  File StrCat[Dir, "e_fw.pos"]] ;
  //Print[ d, OnElementsOf Domain, File "d_fw.pos"] ;

  Print[ U, OnRegion #{ElecCoil}, Format Table] ;
  Print[ I, OnRegion #{ElecCoil}, Format Table] ;
  Print[ Ipos, OnRegion #{ElecCoil}, Format Table] ;
  Print[ Ipos, OnRegion #{ElecCoil}, Format Table, File > StrCat[Dir, Sprintf("I_flag%g.dat", Flag_AnalysisType)] ];

  //Print[ Ipos[Domain], OnGlobal, Format FrequencyTable, File > Sprintf("I_flag%g.dat", Flag_FullWave)] ;
}
