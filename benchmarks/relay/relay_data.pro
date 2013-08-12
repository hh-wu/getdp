// p_init = 7.7e-3 ; // initial position (this is our limit with airlayer)

p_init = 7.5e-3 ; // initial position
p_mid  = 3e-3 ;

d = 0.2e-3 ; // Width of air layer around plungerForce calculation

e1 = 3.5e-2; // Half width  of plunger (Moving part)
h1 = 8e-2 ;  // Half height of plunger (Moving part)


dmin = 0;
dmax = 2*p_init ; //15.4e-3;

displacementX = 0;
displacementZ = 0;


AxialLength = 0.09 ;// 90 mm
cw = 19.5e-3 ;
cl = 38e-3 ;
nwires = 30 ; //300 Number of turns in the coil
Scoil = cw*cl ;


DefineConstant[
  Flag_AnalysisType = {1,  Choices{0="Static",  1="Time domain"},
    Label "Type of analysis",  Path "Input/00", Highlight "Blue", Visible 1,
    Help Str["- Use 'Static' to compute static fields created by the magnets in the relay",
      "- Use 'Time domain' to compute the dynamic response of the relay"]}
];

Flag_Cir = 1;

time_min = 0. ;
time_max = 500e-3 ;
delta_time = .5e-3 ;
NbSteps = (time_max - time_min)/delta_time;

DefineConstant[
  step = {0, Min 0, Max NbSteps, Step 1, Loop  (Flag_AnalysisType == 1),
    Path "Input/1", Visible (Flag_AnalysisType == 1)}
];

If(Flag_AnalysisType==0)
  DefineConstant[
    displacementY = { 0., Min -15e-3, Max 0, Path "Input/2"}
  ];
  UndefineConstant[ "Input/1step" ];
  UndefineConstant[ "Output/2displacementY" ];
EndIf
If(Flag_AnalysisType==1)
  DefineConstant[
    displacementY = { 0., Min -15e-3, Max 0, Path "Output/2"}
  ];
  UndefineConstant[ "Input/2displacementY" ];
EndIf
