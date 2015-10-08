mm = 1e-3;
deg = Pi / 180. ;  // deg -> rad
rad = 180. / Pi;   // rad -> deg

DefineConstant[
  pp = "Input/Constructive Parameters/"
  ppC = "Input/0Cao/"
  ExtGmsh = ".pos",
  ExtGnuplot = ".dat",
  ExtAnalyticSens = ".analyticSens",
  ExtOnelabScal = ".onelabScal",
  ExtOnelabVec = ".onelabVec",
  ExtOnelabVec2 = ".onelabNbChoice",
  ExtOnelabSens = ".toSens",
  modelpath = CurrentDir, 
  ResDir = StrCat[ modelpath, "res/" ],

  //Flag_2D = {1, Choices {0,1}, Name "Input/1 2D?"},
  Flag_cao = {"square", Choices {"square","rotor"}, Name StrCat(ppC,"0 Cao?")},
  md = { 1., Name StrCat(ppC,"Mesh density")},

  Flag_degree2 = { 0., Name "Input/degree?",Visible 0},
  nbEig = {3, Name "Input/nb Eig",Visible 1}
];

// parametres of each geometry
If(!StrCmp(Flag_cao,"square"))
  Include "square_data.geo";
  Flag_2D = 1 - Flag_extrude;
EndIf
If(!StrCmp(Flag_cao,"rotor"))
  Include "v_data.geo";
  Flag_2D = 1;
EndIf

// Optimization problem specification
Include "opt_data.geo";

