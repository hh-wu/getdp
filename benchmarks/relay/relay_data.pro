// p_init = 7.7e-3 ; // initial position (this is our limit with airlayer)


DefineConstant[ p_init = { 7.5e-3, Min -7.5e-3, Max 7.5e-3, Step 1e-4,
    Name "Input/00Initial position"} ];

p_mid = 3e-3;
dmax  = 2*p_init;

// Dimensions of the plunger
d = 0.2e-3 ; // Width of air layer around plungerForce calculation

e1 = 3.5e-2; // Half width  of plunger (Moving part)
h1 = 8e-2 ;  // Half height of plunger (Moving part)

e2 = 3.55e-2;
h2 = 8.8e-2 ;

e3 = 4.5e-2 ;
h3 = 5e-2 ;

e4 = 5.5e-2  ;
h4 = 12.2e-2 ;

e5 = 9e-2 ;

cw = e4-e2; //19.5e-3 ;
cl = h2-h3; //38e-3 ;
Scoil = cw*cl ;

nwires = 30 ; //300 Number of turns in the coil

AxialLength = 0.09 ;// 90 mm
displacementX = 0;
displacementZ = 0;

DefineConstant[
  Flag_AnalysisType = {1,  Choices{0="Static",  1="Time domain"},
    Name "Input/00Type of analysis", Highlight "Blue",
    Help Str["- Use 'Static' to compute static fields created by the magnets in the relay",
      "- Use 'Time domain' to compute the dynamic response of the relay"]}
];

If(Flag_AnalysisType==0)
  DefineConstant[ displacementY = { 0., Min -15e-3, Max 0,
      Name "Input/2Vertical displacement", Visible 0} ];
  UndefineConstant[ "Input/1Step" ];
  UndefineConstant[ "Output/2Vertical displacement" ];
EndIf
If(Flag_AnalysisType==1)
  DefineConstant[ displacementY = { 0., Min -15e-3, Max 0,
      Name "Output/2Vertical displacement", ReadOnlyRange 1} ];
  UndefineConstant[ "Input/2Vertical displacement" ];
EndIf

// checking the geometrical limits for displacementY \in [-15e-3, 0.]
// for avoiding crashes...
displacementY =
(displacementY >=-15e-3 && displacementY <= 0) ? displacementY :
((displacementY < -15e-3) ? -15e-3: 0.) ;

//----------------------------------------------------------------------------
// Physical regions
//----------------------------------------------------------------------------
MOVINGIRON = 1000 ;
SKINMOVINGIRON = 1100 ;

YOKE = 2000 ;
SKINYOKEOUT = 2200 ;
SKINYOKEIN =  2300 ;

MAGNETRIGHT = 3000 ;
MAGNETLEFT  = 3001 ;

COILR_UP   = 4000 ;
COILR_DOWN = 4001 ;
COILL_UP   = 4002 ;
COILL_DOWN = 4003 ;

AIRGAPOUT = 5000 ;

AIRLAYER = 10000;

DUMMY = 111111;
