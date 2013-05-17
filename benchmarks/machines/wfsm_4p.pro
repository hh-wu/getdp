// Synchronous machine from Electrimacs'2002 paper:
// Steady-State Finite Element Analysis of a Salient-Pole Synchronous Machine
// in the Frequency Domain
// J. Gyselinck, L. Vandevelde, J. Melkebeek and W. Legros

Include "wfsm_4p_data.geo";

DefineConstant[ Clean_Results = { 1, Choices {0,1},
    Label "Remove previous result files",
    Path "Input/1", Visible 1 } ] ;

DefineConstant[ Flag_NL = {0, Choices{ 0="Linear",
                                       1="Nonlinear BH curve"},
                                     Label "Fe magnetic law",
                                     Path "Input/3",
                                     Highlight "Blue"} ] ;

DefineConstant[ Flag_SrcType_Stator = { 1, Choices{ 0="None",
                                                    1="Current"},
                                                  Label "Source Type in stator",
                                                  Path "Input/4",
                                                  Highlight "Blue", Visible 1} ] ;

DefineConstant[ Flag_SrcType_Rotor = {1, Visible 0} ] ;



DefineConstant[ Flag_Cir = {!Flag_SrcType_Stator, Choices{0,1},
                            Label "Use circuit in Stator",
                            ReadOnly 1, Visible 0} ] ;

my_output = "No";

Group {
  Stator_Fe     = #STATOR_FE ;
  Stator_Al     = #{};
  Stator_Cu     = #{};
  Stator_Air    = #STATOR_SLOT_OPENING ;
  Stator_Airgap = #STATOR_AIRGAP ;
  Stator_Bnd_MB = #STATOR_BND_MOVING_BAND  ;
  Stator_Bnd_A0 = #STATOR_PERIOD_REFERENCE ;
  Stator_Bnd_A1 = #STATOR_PERIOD_DEPENDENT ;

  Rotor_Fe     = #{ROTOR_FE, ROTOR_SHAFT};
  Rotor_Al     = #{};
  Rotor_Cu     = #{};
  Rotor_Air    = #ROTOR_AIR ;
  Rotor_Airgap = #ROTOR_AIRGAP ;
  Rotor_Bnd_MB = #ROTOR_BND_MOVING_BAND ;
  Rotor_Bnd_A0 = #ROTOR_PERIOD_REFERENCE ;
  Rotor_Bnd_A1 = #ROTOR_PERIOD_DEPENDENT ;

  MovingBand_PhysicalNb = #MOVING_BAND ; // Fictitious number for moving band, not in the geo file

  Surf_Inf = #SURF_EXT ;
  Surf_bn0 = #{}; // #SURF_INT ;
  Surf_cutA0 = Region[{Stator_Bnd_A0, Rotor_Bnd_A0}];
  Surf_cutA1 = Region[{Stator_Bnd_A1, Rotor_Bnd_A1}];

  Rotor_Magnets = Region[ {} ];

  nbInds = NbrPoles*NbrSectStatorTot/NbrPolesTot ;

  Stator_Ind_Ap = #STATOR_UP; Stator_Ind_Am = #{};
  Stator_Ind_Bp = #STATOR_VP; Stator_Ind_Bm = #STATOR_VM;
  Stator_Ind_Cp = #{};        Stator_Ind_Cm = #STATOR_WM;

  If(NbrPoles>1)
    Stator_Ind_Am = #{STATOR_UM};
    Stator_Ind_Cp = #{STATOR_WP};
  EndIf

  PhaseA = Region[{ Stator_Ind_Ap, Stator_Ind_Am }];
  PhaseB = Region[{ Stator_Ind_Bp, Stator_Ind_Bm }];
  PhaseC = Region[{ Stator_Ind_Cp, Stator_Ind_Cm }];

  PhaseA_pos = Region[{ STATOR_UP }];
  PhaseB_pos = Region[{ STATOR_VP }];
  PhaseC_pos = Region[{ STATOR_WM }];

  Stator_IndsP = Region[{ Stator_Ind_Ap, Stator_Ind_Bp, Stator_Ind_Cp }];
  Stator_IndsN = Region[{ Stator_Ind_Am, Stator_Ind_Bm, Stator_Ind_Cm }];
  Stator_Inds = Region[ {PhaseA, PhaseB, PhaseC} ] ;

  // Rotor conductors
  Rotor_IndsP = #ROTOR_COND1 ;
  Rotor_IndsN = #ROTOR_COND2 ;
  Rotor_Inds = Region[ {Rotor_IndsP, Rotor_IndsN} ];

  StatorC  = Region[{ }] ;
  StatorCC = Region[{ Stator_Fe }] ;
  RotorC   = Region[{ }] ;
  RotorCC  = Region[{ Rotor_Fe }] ;

  // Moving band:  with or without symmetry, these BND lines must be complete
  For k In {1:NbrPoles}
    Stator_Bnd_MB~{k} = Region[ (STATOR_BND_MOVING_BAND+k-1) ];
    Stator_Bnd_MB    += Region[ Stator_Bnd_MB~{k} ];
  EndFor

  If(NbrPoles!=2)
    For k In {1:NbrPoles}
      Rotor_Bnd_MB~{k}  = Region[ (ROTOR_BND_MOVING_BAND+k-1) ] ;
      Rotor_Bnd_MB     += Region[ Rotor_Bnd_MB~{k} ];
    EndFor
    For k In {NbrPoles+1:NbrPolesTot}
      Rotor_Bnd_MB~{k}  = Region[ (ROTOR_BND_MOVING_BAND+k-1) ] ;
      Rotor_Bnd_MB     += Region[ Rotor_Bnd_MB~{k} ];
      Rotor_Bnd_MBaux  += Region[ Rotor_Bnd_MB~{k} ];
    EndFor
  EndIf

  If(NbrPoles==2)
    For k In {0:NbrPoles-1}
      Rotor_Bnd_MB~{k+1}  = Region[ {(ROTOR_BND_MOVING_BAND+2*k:ROTOR_BND_MOVING_BAND+2*k+1)} ] ;
      Rotor_Bnd_MB   += Region[ { Rotor_Bnd_MB~{k+1}} ];
    EndFor
    Rotor_Bnd_MBaux = Region[ { Rotor_Bnd_MB~{2}} ];
  EndIf

  Dummy = #NICEPOS;
}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Function {

  // Data for modeling a stranded inductor
  Stator_PhaseArea[]    = SurfaceArea[]{STATOR_UP} + SurfaceArea[]{STATOR_UM};
  Rotor_ConductorArea[] = SurfaceArea[]{ROTOR_COND1} + SurfaceArea[]{ROTOR_COND2};



  NbWires[#{Stator_Inds}]  = 160  * NbrPoles/NbrPolesTot; // Number of wires in series per phase
  NbWires[#{Rotor_Inds}]   = 1050 * NbrPoles/NbrPolesTot; // Number of wires in series per phase
  SurfCoil[#{Stator_Inds}] = Stator_PhaseArea[];
  SurfCoil[#{Rotor_Inds}]  = Rotor_ConductorArea[];

  FillFactor_Winding = 0.5 ; // percentage of Cu in the surface coil side, smaller than 1
  Factor_R_3DEffects = 1.5 ; // bigger than Adding 50% of resistance

  DefineConstant[ rpm = {1500, Label "speed in rpm", Path "Input/8", Highlight "AliceBlue"}];
  wr = rpm/60*2*Pi ; // speed in rad_mec/s

  NbrPolePairs = NbrPolesTot/2 ;

  DefineConstant[ Freq = { wr*NbrPolePairs/(2*Pi),  ReadOnly 1, Path "Output/1", Highlight "LightYellow" } ];

  Omega = 2*Pi*Freq ;
  T = 1/Freq ;

  DefineConstant[ thetaMax_deg = { 180, Label "End rotor angle (loop)", Path "Input/21", Highlight "AliceBlue" } ];
  theta0   = InitialRotorAngle + 0. ;
  thetaMax = thetaMax_deg * deg2rad ; // end rotor angle (used in doing a loop)

  DefineConstant[ NbTurns  = { (thetaMax-theta0)/(2*Pi), Label "Number of revolutions", Path "Input/22", Highlight "LightGrey", ReadOnly 1 } ];

  NbSteps  = NbrPolesTot*90 ; // 1 degree per step
  delta_theta[] = 2*Pi/NbSteps ;

  DefineConstant[ delta_theta_deg = { 2*Pi/NbSteps/deg2rad, Label "step in degrees", Path "Input/23", Highlight "LightGrey", ReadOnly 1 } ];

  time0 = 0. ; // at initial rotor position
  delta_time = 2*Pi/NbSteps/wr;
  timemax = thetaMax/wr;

  RotorPosition[]     = theta0 + $Time * wr ;
  RotorPosition_deg[] = RotorPosition[]*180/Pi;

  Flag_ParkTransformation = 1 ;
  Theta_Park[] = ( (RotorPosition[] + Pi/NbrPolesTot) + Pi/3) * NbrPolePairs; // electrical degrees
  Theta_Park_deg[] = Theta_Park[]*180/Pi;

  DefineConstant[
    ID = { 0, Path "Input/60", Label "Id stator current", Highlight "AliceBlue"},
    IQ = { 75, Path "Input/61", Label "Iq stator current", Highlight "AliceBlue"},
    I0 = { 0., Visible 0},
    Ie = { 13.1, Path "Input/7", Label "Ie rotor excitation current", Highlight "AliceBlue" } ] ;

  If(Flag_SrcType_Stator==0)
    UndefineConstant["Input/60ID"];
    UndefineConstant["Input/61IQ"];
  EndIf

}

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

Dir="res/";
ExtGmsh     = ".pos";
ExtGnuplot  = ".dat";

// --------------------------------------------------------------------------
// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

If(Flag_SrcType_Stator==1)
    UndefineConstant["Input/ZR"];
EndIf

If(Flag_Cir)
  Include "wfsm_4p_circuit.pro" ;
EndIf
Include "machine_magstadyn_a.pro" ;

DefineConstant[ ResolutionChoices    = {"TimeDomain", Path "GetDP/1"} ];
DefineConstant[ ComputeCommand       = {"-solve -v 1 -v2", Path "GetDP/9"} ];


