// Copyright (C) 2013 - J. Gyselinck, R.V. Sabariego

// ------------------------------------------

Include "im_data.geo";

Geometry.AutoCoherence = 0 ;
Mesh.Algorithm = 1 ;

// characteristic lengths
uc = u*1.3;

pslo = uc*0.3; // slot opening
psl  = uc*0.6; // upper part slot
pslu = uc*1;   // lower part slot
psha = uc*2;   // shaft radius

pMB  = 5e-4;   // MB
p    = uc*2;

cen = newp; Point(cen)  = {0.,0.,0.,p};

Include "im_rotor.geo" ;
Include "im_stator.geo" ;

Coherence;

// For nice visualisation...
Mesh.Light = 0 ;
//Mesh.SurfaceFaces = 1; Mesh.SurfaceEdges=0;

Hide { Point{ Point '*' }; }
Hide { Line{ Line '*' }; }
Show { Line{ nicepos_rotor[], nicepos_stator[] }; }

Physical Line(NICEPOS) = { nicepos_rotor[], nicepos_stator[] };

//For post-processing...
View[0].Light = 0;
View[0].NbIso = 25; // Number of intervals
View[0].IntervalsType = 1;


DefineConstant[ Flag_AddInfo = {0, Choices{0,1},
                               Label "Add info about phases",
                                Path "Input/1", Visible 0} ] ;

If(Flag_AddInfo)
rr = 1.42 * R3s ;
For k In {0:NbrPoles-1}
  xa[] += rr*Cos(1*Pi/12+k*Pi/2) ; ya[] += rr*Sin(1*Pi/12+k*Pi/2) ;
  xb[] += rr*Cos(3*Pi/12+k*Pi/2) ; yb[] += rr*Sin(3*Pi/12+k*Pi/2) ;
  xc[] += rr*Cos(5*Pi/12+k*Pi/2) ; yc[] += rr*Sin(5*Pi/12+k*Pi/2) ;
EndFor

// Creating the view
attr = TextAttributes("Font", "Helvetica",
                      "FontSize", "18",
                      "Align", "CenterCenter");

exists = {0,0,0};
For k In {0:2}
  np = 2^k ; //Possible number of poles
  For i In {0:PostProcessing.NbViews-1}
    If( StrFind(View[i].Attributes, Sprintf("NbrPoles=%g", np)))
      View[i].Visible = (NbrPoles==np);
      exists[k] = 1;
    EndIf
  EndFor
EndFor

If(NbrPoles==1 && !exists[0])
  View "Info 1 pole" {
      T3(xa[0], ya[0], 0, attr){"A+"}; T3(xb[0], yb[0], 0, attr){"C-"}; T3(xc[0], yc[0], 0, attr){"B+"};
    };
EndIf
If(NbrPoles==2 && !exists[1])
  View "Info 2 pole" {
      T3(xa[0], ya[0], 0, attr){"A+"}; T3(xb[0], yb[0], 0, attr){"C-"}; T3(xc[0], yc[0], 0, attr){"B+"};
      T3(xa[1], ya[1], 0, attr){"A-"}; T3(xb[1], yb[1], 0, attr){"C+"}; T3(xc[1], yc[1], 0, attr){"B-"};
    };
EndIf
If(NbrPoles==4 && !exists[2])
  View "Info 4 pole" {
      T3(xa[0], ya[0], 0, attr){"A+"}; T3(xb[0], yb[0], 0, attr){"C-"}; T3(xc[0], yc[0], 0, attr){"B+"};
      T3(xa[1], ya[1], 0, attr){"A-"}; T3(xb[1], yb[1], 0, attr){"C+"}; T3(xc[1], yc[1], 0, attr){"B-"};
      T3(xa[2], ya[2], 0, attr){"A+"}; T3(xb[2], yb[2], 0, attr){"C-"}; T3(xc[2], yc[2], 0, attr){"B+"};
      T3(xa[3], ya[3], 0, attr){"A-"}; T3(xb[3], yb[3], 0, attr){"C+"}; T3(xc[3], yc[3], 0, attr){"B-"};
    };
EndIf

If((NbrPoles==1 && !exists[0]) ||
   (NbrPoles==2 && !exists[1]) ||
   (NbrPoles==4 && !exists[2]) )
View[PostProcessing.NbViews-1].Attributes = Sprintf("NbrPoles=%g",NbrPoles);
View[PostProcessing.NbViews-1].Name = Sprintf("Info %g poles", NbrPoles);
EndIf



EndIf