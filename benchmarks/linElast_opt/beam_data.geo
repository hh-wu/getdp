mm = 1e-3;
deg = Pi / 180. ;  // deg -> rad
rad = 180. / Pi;   // rad -> deg

//filePrefix = StrPrefix(StrRelative(General.FileName));

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
  po_min  = "Output/",

  //Flag_2D = {1, Choices {0,1}, Name "Input/1 2D?"},
  ResId = {"",Name StrCat("Input/Cpu")},
  ResDir0 = StrCat[ modelpath, "res/"],
  ResDir = StrCat[ modelpath, "res", ResId, "/"],
  Flag_cao = {"square", Choices {"square","rotor"}, Name StrCat(ppC,"0 Cao?")},
  md = { 2., Name StrCat(ppC,"Mesh density")},

  // FIXME: order 2 -> problem in TO !!!
  Flag_degree2 = { 0, Choices {0,1}, Name "Input/degree 2?",Visible 1},
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

