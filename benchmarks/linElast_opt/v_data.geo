// All input 
// Useful conversion factors
mm = 1e-3 ;       // mm -> m
deg = Pi / 180. ;  // deg -> rad
rad = 180. / Pi;   // rad -> deg

DefineConstant[
  // Paramètres généraux
  Flag_stator = {0, Name StrCat(ppC,"stator?"), Choices{0,1}, Visible 1},
  Flag_hole_r =  {1, Name StrCat(ppC,"hole?"), Choices{0,1}, Visible 1},
  hole_length_r = {.04/*LL/2*/, 
    Name StrCat(pp,"Hole Length rotor"), Visible (Flag_hole_r==1), Closed 1},
  hole_width_r =  {.02/*LL/2*/, 
    Name StrCat(pp,"Hole Width rotor"), Visible (Flag_hole_r==1), Closed 1},
  nbFEpoles = {8, Name StrCat(ppC,"nb Poles"),Choices {1="1", 2="2", 4="4", 8="8"}},
  InitialRotorAngle_deg = {0.0, Name StrCat(ppC,"Initial rotor pos. [deg]")},
  
  // Paramètres géométriques
  Dr = 356 * mm ,   // diamètre alésage, mm
  De = 513 * mm ,   // diamètre extérieur, mm
  Ef = 1.5 * mm ,   // largeur de l'entrefer, mm

  Ec = 30 * mm ,    // épaisseur de la culasse, mm
  Ht = 43 * mm ,    // hauteur du tronc de la dent, mm
  Lc = 16 * mm ,    // largeur dent côté culasse, mm
  //Le = 14 * mm ,    // largeur dent côté épanouissement, mm
  Ne = 48 ,         // nombre d'encoches stator (= nombre de dents)
  Z = 8 * mm ,      // largeur des fentes du stator, mm
  Hz = 1 * mm ,     // hauteur du nez des encoches du stator, mm

  //Lm = 59 * mm ,    // largeur d'un aimants, mm
  //Em = 11 * mm ,    // épaisseur d'un aimant, mm
  //Vm = 104 * deg ,  // angle aigu du 'V', degrés
  Rm = 144.3 * mm , // rayon au centre des aimants, mm
  Om = 25.5 * deg , // angle d'ouverture d'une paire d'aimants, degrés
  Rcm = 3 * mm ,    // rayon des congés de raccordement des trous pour les aimants, mm
  //Xm = 4 * mm ,     // matière minimum entre les aimants et l'entrefer, mm
  Ym = 4 * mm ,     // matière minimum entre 2 aimants d'une paire, mm

  Da = 200 * mm ,   // diamètre de l'arbre, mm
  Ept = 250 * mm ,  // épaisseur du paquet de tôles, mm

  Epa_int = 20 * mm , // épaisseur de l'air intérieur
  Epa_ext = 15 * mm , // épaisseur de l'air extérieur
  Epa_inf = 50 * mm , // épaisseur de l'air à l'infini

  Rint = De/2+Epa_ext, // rayon intérieur de l'infini
  Rext = De/2+Epa_inf, // rayon extérieur de l'infini (= le bout du bout)
  InitialRotorAngle_deg = 0,  //
  Flag_ParameterSet = 1,  

  Lm = {40*mm/*59*mm*/,Name StrCat(pp,"Magnet length"), Closed 1}
  Em = {10*mm, Name StrCat(pp, "Magnet thickness"),Closed 1},
  Vm = {/*1.82*/104*deg, Name StrCat(pp, "V angle"),Closed 1},
  Xm = {4*mm, Name StrCat(pp,"tang. dist."), Closed 1},
  Rma = {4*mm/*10*mm*/,Name StrCat(pp,"rad. dist."),Closed 1},
  Le = {14*mm, Name StrCat(pp, "largeur dent"),Closed 1},
  LT = {0.04, Name StrCat(pp, "hauteur encoche"),Closed 1},

  // Paramètres électriques
  Nph = 3,        // nombre de phases
  Npo = 8,         // nombre de pôles (= nombre de paires d'aimants)
  NSbob = 20,      // nombre de spires par bobine au stator
  Brm = 1.05,       // rémanent des aimants permanents à 20 °C, T
  sigma_cu = 5.77e7, // conductivity of copper [S/m]
  Rload = 0.595,   // résistance de charge par ligne, ohm
  Tp = 20,         // température de la machine, °C

  // Paramètres mécaniques
  Vrot = 6000     // vitesse de rotation, rpm
] ;

//les paramètres calculés
Dc = De - 2 * Ec; // diamètre de la culasse, mm
Db = Dc - 2 * Ht; // diamètre à la base de l'épanouissement des dents, mm
Dz = Dr + 2 * Hz; // diamètre à la base du nez des dents, mm
Printf("----- Dc %g",Dc);
Drotor = Dr - 2 * Ef; //diamètre du rotor, mm
Fz = 2 * Asin[Z / Dr]; // angle au centre d'une fente stator, radian
Tr = 2 * Pi / Npo; // angle entre 2 paires d'aimants successives
                    // (= angle couvert par un pôle), radian
T = 2 * Pi / Ne; // angle entre 2 encoches successives, radian
Tc = 2 * Atan[Lc / ((Dc ^ 2 - Lc ^ 2) ^ 0.5)];
Oc = T - Tc;
Te = 2 * Atan[Le / ((Db ^ 2 - Le ^ 2) ^ 0.5)];
Oe = T - Te;
OD = Drotor / 2 - Ym;
alpha = Vm / 2;
If(Flag_ParameterSet==1)
  NXm = Xm + 4.4e-05;
EndIf

If(Flag_ParameterSet==0)
  NXm = Xm + 2 * Rcm * (1 - Cos[alpha]); // distance minimum entre 2 aimants,dans le creux du V.
EndIf

DF = Lm * Sin[alpha] + NXm / 2;
OF = OD * Sqrt[1 - (DF / OD) ^ 2];
EJ = Lm / 2 * Cos[alpha] + Em / 2 * Sin[alpha] ;
OI = OF - EJ ;
AI = Lm / 2 * Sin[alpha] + Em / 2 * Cos[alpha] + NXm / 2 ;
Om = 2 * Atan[AI / OI] ; // angle entre les rayons passant par les centres
                         // des aimants d'une paire, radian

//Rm = AI / Sin[Om / 2] ; // rayon au centre des aimants, mm

Am = Om / 2 + Pi / 2 - alpha ; // angle de l'aimant par rapport au rayon
                               // passant au centre, radian

NbrPoles = 1;
NbrPolesInModel = 1;
NbrSlotInModel = 6;

NbrPolesTot = Npo ; // number of poles in complete cross-section
NbrPolePairs = NbrPolesTot/2 ;

SymmetryFactor = NbrPolesTot/NbrPolesInModel ;
NbrSlotTot = SymmetryFactor*NbrSlotInModel ;

NbrSectTot = NbrPolesTot ; // number of "rotor teeth"
NbrSect = NbrSectTot*NbrPolesInModel/NbrPolesTot ; // number of "rotor teeth" in FE model

// number of stator teeth
NbrSectTotStator  = Ne;
// number of stator teeth in FE model
NbrSectStator   = NbrSectTotStator*NbrPolesInModel/NbrPolesTot; 

sigma_fe = 0. ; // laminated steel
//mur_fe = 1000;
b_remanent = 1.33; //1.33;

rpm_nominal = 500 ;
Inominal = 3.9 ; // Nominal current
Tnominal = 2.5 ; // Nominal torque

NbrMagnets = 2*NbrPolesTot/SymmetryFactor;

// Optimization problem specification
//Include "opt_data.geo";


// les numéros pour les identités physiques
ROTOR_HOLE = 1000;
//ROTOR_TOLES     = 1001;
ROTOR_FE        = 1001;
ROTOR_AIR       = 1002;
ROTOR_ENTREFER  = 1003;
ROTOR_BND_A0    = 1004;
ROTOR_BND_A1    = 1005;
MB  = 9003;

ROTOR_AIMANT1   = 1011;
ROTOR_AIMANT2   = 1012;
BORD_ROTOR_AIMANT = 1013;

ROTOR_BND_MOVING_BAND  = 1021;
ROTOR_BND_MOVING_BAND1 = 1022;
ROTOR_BND_MOVING_BAND2 = 1023;
ROTOR_BND_MOVING_BAND3 = 1024;
ROTOR_BND_MOVING_BAND4 = 1025;
ROTOR_BND_MOVING_BAND5 = 1026;
ROTOR_BND_MOVING_BAND6 = 1027;
ROTOR_BND_MOVING_BAND7 = 1028;

//STATOR_TOLES    = 1101;
STATOR_FE       = 1101;
STATOR_AIR      = 1102;
//STATOR_AIR_1    = 991102;
//STATOR_AIR_2    = 991103;
//STATOR_AIR_3    = 991104;
//STATOR_AIR_4    = 991105;
//STATOR_AIR_5    = 991106;
//STATOR_AIR_6    = 991107;
STATOR_ENTREFER = 1103;
STATOR_BND_A0   = 1104;
STATOR_BND_A1   = 1105;

STATOR_BOBINE1  = 1111;
STATOR_BOBINE2  = 1112;
STATOR_BOBINE3  = 1113;
STATOR_BOBINE4  = 1114;
STATOR_BOBINE5  = 1115;
STATOR_BOBINE6  = 1116;

STATOR_IND_AP = 1121;
STATOR_IND_AM = 1122;
STATOR_IND_BP = 1123;
STATOR_IND_BM = 1124;
STATOR_IND_CP = 1125;
STATOR_IND_CM = 1126;

STATOR_BND_MOVING_BAND  = 1131;
STATOR_BND_MOVING_BAND1 = 1132;
STATOR_BND_MOVING_BAND2 = 1133;
STATOR_BND_MOVING_BAND3 = 1134;
STATOR_BND_MOVING_BAND4 = 1135;
STATOR_BND_MOVING_BAND5 = 1136;
STATOR_BND_MOVING_BAND6 = 1137;
STATOR_BND_MOVING_BAND7 = 1138;

LINTERIEUR = 1201;
LEXTERIEUR = 1202;
LEXTERIEUR_ROTOR = 1203; 

MOVING_BAND = 9999 ;

NICEPOS = 111111 ;

POINT_REF = 1444;











