DefineConstant[
  Model3D = {0, Choices{0="2D model", 1="Multi-slice", 2="3D model"},
    Name "Input/Geometry/Model dimension"},
  NumSlices = {1,
    Name "Input/Geometry/Number of slices", Visible Model3D}
  NumLayers = {5,
    Name "Input/Geometry/Number of layers along Z", Visible Model3D}

  SlicePhysOffset = 1000000,
  SliceZOffset = 0.01 // FIXME
];

If(Model3D == 1)
  If(NumSlices > 1)
    ps[] = Physical Surface "*";
    For s In {0:#ps[]-1}
      For slice In {1:NumSlices-1}
        Physical Surface(ps[s] + SlicePhysOffset * slice) = {
          Translate {0, 0, SliceZOffset * slice} {
            Duplicata { Surface{ Physical Surface{ps[s]} }; }
          }
        };
      EndFor
    EndFor
    pl[] = Physical Line "*";
    For l In {0:#pl[]-1}
      For slice In {1:NumSlices-1}
        Physical Line(pl[l] + SlicePhysOffset * slice) = {
          Translate {0, 0, SliceZOffset * slice} {
            Duplicata { Line{ Physical Line{pl[l]} }; }
          }
        };
      EndFor
    EndFor
  EndIf
ElseIf(Model3D == 2)

  // TO DO: Coloring... inheriting?
  // Top and bottom surfaces, boundary/skin of conductor volumes (problem dependent)

  // Rotor
  ROTOR_FE_VOL  = ROTOR_FE + SlicePhysOffset ;
  ROTOR_AIR_VOL = ROTOR_AIR + SlicePhysOffset ;
  ROTOR_AIRGAP_VOL = ROTOR_AIRGAP + SlicePhysOffset ;
  ROTOR_MAGNET_VOL = ROTOR_MAGNET + SlicePhysOffset ; // Index for first Magnet (1/8 model->1; full model->8)

  ROTOR_BND_MOVING_BAND_SURF = ROTOR_BND_MOVING_BAND + SlicePhysOffset ; // Index for first line (1/8 model->1; full model->8)
  ROTOR_BND_A0_SURF =  ROTOR_BND_A0 + SlicePhysOffset ;
  ROTOR_BND_A1_SURF =  ROTOR_BND_A1 + SlicePhysOffset ;
  SURF_INT_SURF     =  SURF_INT + SlicePhysOffset;

  // Stator
  STATOR_FE_VOL  = STATOR_FE + SlicePhysOffset ;
  STATOR_AIR_VOL = STATOR_AIR + SlicePhysOffset ;
  STATOR_AIRGAP_VOL = STATOR_AIRGAP + SlicePhysOffset ;

  STATOR_BND_MOVING_BAND_SURF = STATOR_BND_MOVING_BAND + SlicePhysOffset ;// Index for first line (1/8 model->1; full model->8)
  STATOR_BND_A0_SURF          = STATOR_BND_A0 + SlicePhysOffset ;
  STATOR_BND_A1_SURF          = STATOR_BND_A1 + SlicePhysOffset ;


  STATOR_IND_VOL = STATOR_IND + SlicePhysOffset ; //Index for first Ind (1/8 model->3; full model->24)
  STATOR_IND_AP_VOL = STATOR_IND + SlicePhysOffset + 1 ;
  STATOR_IND_BM_VOL = STATOR_IND + SlicePhysOffset + 2 ;
  STATOR_IND_CP_VOL = STATOR_IND + SlicePhysOffset + 3 ;

  STATOR_IND_AM_VOL = STATOR_IND + SlicePhysOffset + 4 ;
  STATOR_IND_BP_VOL = STATOR_IND + SlicePhysOffset + 5 ;
  STATOR_IND_CM_VOL = STATOR_IND + SlicePhysOffset + 6 ;

  SURF_EXT_SURF = SURF_EXT + SlicePhysOffset ; // outer boundary

  NICEPOS_SURF = NICEPOS + SlicePhysOffset;

  AxialLength~{1} = AxialLength;
  one~{1}[] = 1;
  layer~{1}[]= NumLayers; // in view of a geometrical progression, e.g.

  Geometry.AutoCoherence = 0;
  ps~{0}[] = Physical Surface "*";
  pl~{0}[] = Physical Line "*";
  For slice In{1:NumSlices}
    For s In {0:#ps~{0}[]-1}
      pv~{slice}[] += ps~{slice-1}[s] + SlicePhysOffset * slice;
      ps~{slice}[] += ps~{slice-1}[s] + 2*SlicePhysOffset * slice;
      ele[] = Physical Surface{ps~{slice-1}[s]};
      Physical Volume(pv~{slice}[s]) = {};
      Physical Surface(ps~{slice}[s]) = {};
      For e In {0:#ele[]-1}
        p[] = Extrude{0,0,AxialLength~{slice}}{
          Surface{ ele[e] }; Recombine; Layers{one~{slice}[],layer~{slice}[]};
        };
        Physical Volume(pv~{slice}[s]) += p[1];
        Physical Surface(ps~{slice}[s]) += p[0];
      EndFor
    EndFor
    For l In {0:#pl~{0}[]-1}
      psl~{slice}[] += pl~{slice-1}[l] + SlicePhysOffset * slice;
      pl~{slice}[] += pl~{slice-1}[l] + 2*SlicePhysOffset * slice;
      ele[] = Physical Line{pl~{slice-1}[l]};
      Physical Surface(psl~{slice}[l]) = {};
      Physical Line(pl~{slice}[l]) = {};
      For e In {0:#ele[]-1}
        p[] = Extrude{0,0,AxialLength~{slice}}{
          Line{ ele[e] }; Recombine; Layers{one~{slice}[],layer~{slice}[]};
        };
        Physical Surface(psl~{slice}[l]) += p[1];
        Physical Line(pl~{slice}[l]) += p[0];
      EndFor
    EndFor
  EndFor
  Geometry.AutoCoherence = 1;
  Coherence;

  // Some stuff for recovering the physicals, something should be automatic...
  Physical Volume("stator iron",STATOR_FE_VOL) +={};
  Physical Volume("stator slots", STATOR_AIR_VOL)     += {};
  Physical Volume("stator airgap", STATOR_AIRGAP_VOL) += {};

  Physical Volume("stator phase A (-)", STATOR_IND_AM_VOL) += {};
  Physical Volume("stator phase C (+)", STATOR_IND_CP_VOL) += {};
  Physical Volume("stator phase B (-)", STATOR_IND_BM_VOL) += {};
  If(NbrSectStator>2)
    Physical Volume("stator phase A (+)", STATOR_IND_AP_VOL) += {};
    Physical Volume("stator phase C (-)", STATOR_IND_CM_VOL) += {};
    Physical Volume("stator phase B (+)", STATOR_IND_BP_VOL) += {};
  EndIf

  Physical Surface("outer boundary", SURF_EXT_SURF) += {}; // SurfExt

  If(Flag_Symmetry) //Lines for symmetry link
    Physical Surface("stator radial bnd (master)",STATOR_BND_A0_SURF) += {};
    Physical Surface("stator radial bnd (slave)",STATOR_BND_A1_SURF) += {} ;
  EndIf

  If(!Flag_Symmetry)
    Physical Surface(Sprintf("stator bnd moving band %g",1),STATOR_BND_MOVING_BAND_SURF) += {};
  EndIf
  If(Flag_Symmetry)
    ns = #lineMBstator[];
    nns = ns/SymmetryFactor ;
    For k In {1:SymmetryFactor}
      kk= ((k*nns-1) > ns) ? ns-1 : k*nns-1 ;
      Physical Surface(Sprintf("stator bnd moving band %g",k),STATOR_BND_MOVING_BAND_SURF+k-1) += {};
    EndFor
    k1 = Floor[NbrPolesTot/NbrSect];
    k2 = Ceil[NbrPolesTot/NbrSect];
    If (k2 > k1)
      Physical Surface(Sprintf("stator bnd moving band %g",k2),STATOR_BND_MOVING_BAND_SURF+k2-1) = {};
    EndIf
  EndIf

  Physical Volume("rotor iron",ROTOR_FE_VOL)     += {};     // Rotor

  Physical Volume("rotor air", ROTOR_AIR_VOL)    += {};  // AirRotor
  Physical Volume("rotor airgap",ROTOR_AIRGAP_VOL) += {};// AirRotor for possible torque computation with Maxwell stress tensor

  NN = (Flag_Symmetry)?NbrPolesInModel:NbrPolesTot;
  For k In {0:NN-1}
    Physical Volume (Sprintf("rotor magnet %g",k+1),ROTOR_MAGNET_VOL+k) += {}; // Magnets
  EndFor

  If(Flag_Symmetry)  //Lines for symmetry link
    Physical Surface("rotor radial bnd (master)",ROTOR_BND_A0_SURF) += {};
    Physical Surface("rotor radial bnd (slave)",ROTOR_BND_A1_SURF)  += {};
  EndIf

  If(!Flag_Symmetry)
    Physical Surface("rotor bnd moving band 1", ROTOR_BND_MOVING_BAND_SURF)  += {};
  EndIf
  If(Flag_Symmetry)
    nr = #lineMBrotor[];
    nnp = nr/(NbrPolesTot/NbrSect) ;
    For k In {1:Floor[NbrPolesTot/NbrSect]}
      kk= ((k*nnp-1) > nr) ? nr-1 : k*nnp-1 ;
      Physical Surface(Sprintf("rotor bnd moving band %g",k),
        ROTOR_BND_MOVING_BAND_SURF+k-1) += {} ;
    EndFor
    k1 = Floor[NbrPolesTot/NbrSect];
    k2 = Ceil[NbrPolesTot/NbrSect];
    If (k2 > k1)
      Physical Surface(Sprintf("rotor bnd moving band %g",k2),
        ROTOR_BND_MOVING_BAND_SURF+k2-1) += {} ;
    EndIf
  EndIf

  Physical Surface("Nice view for post-processing", NICEPOS_SURF) += {};



  // removing some auxiliary physicals
  // =================================
  For s In {1:NumSlices}
    // LOOP is necessary for deleting these auxiliary physicals...
    // Syntax problem in:
    // Physical Line (pl~{s}[]) -= Physical Line {pl~{s}[]};

    For k In {0:#pl~{s}[]-1}
      Physical Line (pl~{s}[k]) -= Physical Line {pl~{s}[k]};
    EndFor
  EndFor
EndIf
