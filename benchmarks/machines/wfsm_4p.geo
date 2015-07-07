Include "wfsm_4p_data.geo";

Solver.AutoShowLastStep = 1;
Mesh.Algorithm = 1;
Geometry.CopyMeshingMethod = 1;

// characteristic lengths
uc = u*6/10;
If(TotalMemory <= 100024)
  uc *= 2;
EndIf

p = uc* 6;
pa = uc* 0.4;
pc = 10/6*uc* 4;
ucs = 10/6*uc * 3;
pslo = ucs*0.2; // slot opening
psl  = ucs*1; // upper part slot
pout = ucs*4.9; // outer radius
pMB  = ucs*0.2; // MB

cen = newp; Point(cen)  = {0.,0.,0.,p*2};

//Include "wfsm_4p_rotor.geo" ; // rotor divided for a nice mesh at surface
Include "wfsm_4p_rotor2.geo" ; // no special treatment of rotor surface
Include "wfsm_4p_stator.geo" ;


//----------------------------------------
//For nice visualisation
//----------------------------------------

Physical Line(NICEPOS) = { nicepos_rotor[], nicepos_stator[] };

Hide {
  Point{ Point '*' };
  Line{ Line '*' };
}
Show { Line{ nicepos_rotor[], nicepos_stator[] }; }


//For post-processing...
//View[0].Light = 0;
View[0].NbIso = 25; // Number of intervals
View[0].IntervalsType = 1;

DefineConstant[ Flag_AddInfo = {0, Choices{0,1}, Name "Input/02Add info about phases & axis"} ] ;

For i In {PostProcessing.NbViews-1 : 0 : -1}
  If(StrFind(View[i].Attributes, "tmp"))
    Delete View[i];
  EndIf
EndFor


If(Flag_AddInfo)
  rr = .88*Rext ;
  For k In {0:NbrPolesInModel-1}
    xa[] += rr*Cos(1*Pi/12+k*Pi/2) ; ya[] += rr*Sin(1*Pi/12+k*Pi/2) ;
    xb[] += rr*Cos(3*Pi/12+k*Pi/2) ; yb[] += rr*Sin(3*Pi/12+k*Pi/2) ;
    xc[] += rr*Cos(5*Pi/12+k*Pi/2) ; yc[] += rr*Sin(5*Pi/12+k*Pi/2) ;
  EndFor

  // Adding some axes
  rr0 = 0.5 * R1 ;
  rr1 = 2.0 * R1 ;
  th_d = InitialRotorAngle + 45 * deg2rad ;
  th_q = th_d + 45 * deg2rad ;

  th_a = -15 * deg2rad ;
  th_b = th_a + 120/2 * deg2rad ;
  th_c = th_a + 240/2 * deg2rad ;

  ff = 0.92 ;
  xd[0] = rr0*Cos(th_d) ; yd[0] = rr0*Sin(th_d) ;
  xd[1] = ff*rr1*Cos(th_d) ; yd[1] = ff*rr1*Sin(th_d) ;
  xq[0] = rr0*Cos(th_q) ; yq[0] = rr0*Sin(th_q) ;
  xq[1] = ff*rr1*Cos(th_q) ; yq[1] = ff*rr1*Sin(th_q) ;

  xaa[0] = rr0*Cos(th_a) ; yaa[0] = rr0*Sin(th_a) ;
  xaa[1] = rr1*Cos(th_a) ; yaa[1] = rr1*Sin(th_a) ;
  xbb[0] = rr0*Cos(th_b) ; ybb[0] = rr0*Sin(th_b) ;
  xbb[1] = rr1*Cos(th_b) ; ybb[1] = rr1*Sin(th_b) ;
  xcc[0] = rr0*Cos(th_c) ; ycc[0] = rr0*Sin(th_c) ;
  xcc[1] = rr1*Cos(th_c) ; ycc[1] = rr1*Sin(th_c) ;

  // Creating the view

  attr = TextAttributes("Font", "Helvetica", "FontSize", "18", "Align", "CenterCenter");
  attr_abc = TextAttributes("Font", "Helvetica", "FontSize", "18", "Align", "Left");
  attr_dq  = TextAttributes("Font", "Helvetica", "FontSize", "18", "Align", "Right");

  If(NbrPolesInModel==1)
    View "Info 1 pole" {
      T3(xa[0], ya[0], 0, attr){"B-, A+"};
      T3(xb[0], yb[0], 0, attr){"A+, C-"};
      T3(xc[0], yc[0], 0, attr){"C-, B+"};

      SL(xd[0],yd[0],0,xd[1],yd[1],0){0,0};
      SL(xq[0],yq[0],0,xq[1],yq[1],0){0,0};
      SL(xaa[0],yaa[0],0,xaa[1],yaa[1],0){1,1};
      SL(xbb[0],ybb[0],0,xbb[1],ybb[1],0){1,1};
      SL(xcc[0],ycc[0],0,xcc[1],ycc[1],0){1,1};
      T3(xd[1], yd[1], 0, attr_dq){ "d axis" };
      T3(xq[1], yq[1], 0, attr_dq){ "q axis" };
      T3(xaa[1], yaa[1], 0, attr_abc){ "a axis" };
      T3(xbb[1], ybb[1], 0, attr_abc){ "b axis" };
      T3(xcc[1], ycc[1], 0, attr_abc){ "c axis" };
    };
  EndIf
  If(NbrPolesInModel==2)
    View "Info 2 pole" {
      T3(xa[0], ya[0], 0, attr){"B-, A+"};
      T3(xb[0], yb[0], 0, attr){"A+, C-"};
      T3(xc[0], yc[0], 0, attr){"C-, B+"};
      T3(xa[1], ya[1], 0, attr){"B+, A-"};
      T3(xb[1], yb[1], 0, attr){"A-, C+"};
      T3(xc[1], yc[1], 0, attr){"C+, B-"};

      SL(xd[0],yd[0],0,xd[1],yd[1],0){0,0};
      SL(xq[0],yq[0],0,xq[1],yq[1],0){0,0};
      SL(xaa[0],yaa[0],0,xaa[1],yaa[1],0){1,1};
      SL(xbb[0],ybb[0],0,xbb[1],ybb[1],0){1,1};
      SL(xcc[0],ycc[0],0,xcc[1],ycc[1],0){1,1};
      T3(xd[1], yd[1], 0, attr_dq){ "d axis" };
      T3(xq[1], yq[1], 0, attr_dq){ "q axis" };
      T3(xaa[1], yaa[1], 0, attr_abc){ "a axis" };
      T3(xbb[1], ybb[1], 0, attr_abc){ "b axis" };
      T3(xcc[1], ycc[1], 0, attr_abc){ "c axis" };
    };
  EndIf
  If(NbrPolesInModel==4)
    View "Info 4 pole" {
      T3(xa[0], ya[0], 0, attr){"B-, A+"};
      T3(xb[0], yb[0], 0, attr){"A+, C-"};
      T3(xc[0], yc[0], 0, attr){"C-, B+"};
      T3(xa[1], ya[1], 0, attr){"B+, A-"};
      T3(xb[1], yb[1], 0, attr){"A-, C+"};
      T3(xc[1], yc[1], 0, attr){"C+, B-"};

      T3(xa[2], ya[2], 0, attr){"B-, A+"};
      T3(xb[2], yb[2], 0, attr){"A+, C-"};
      T3(xc[2], yc[2], 0, attr){"C-, B+"};
      T3(xa[3], ya[3], 0, attr){"B+, A-"};
      T3(xb[3], yb[3], 0, attr){"A-, C+"};
      T3(xc[3], yc[3], 0, attr){"C+, B-"};

      SL(xd[0],yd[0],0,xd[1],yd[1],0){0,0};
      SL(xq[0],yq[0],0,xq[1],yq[1],0){0,0};
      SL(xaa[0],yaa[0],0,xaa[1],yaa[1],0){1,1};
      SL(xbb[0],ybb[0],0,xbb[1],ybb[1],0){1,1};
      SL(xcc[0],ycc[0],0,xcc[1],ycc[1],0){1,1};
      T3(xd[1], yd[1], 0, attr_dq){ "d axis" };
      T3(xq[1], yq[1], 0, attr_dq){ "q axis" };
      T3(xaa[1], yaa[1], 0, attr_abc){ "a axis" };
      T3(xbb[1], ybb[1], 0, attr_abc){ "b axis" };
      T3(xcc[1], ycc[1], 0, attr_abc){ "c axis" };
    };
  EndIf

  View[PostProcessing.NbViews-1].Attributes = "tmp" ;
  View[PostProcessing.NbViews-1].ShowScale = 0 ;
  View[PostProcessing.NbViews-1].IntervalsType = 2 ;
  View[PostProcessing.NbViews-1].ColorTable = {Red,Yellow} ;
  View[PostProcessing.NbViews-1].LineWidth = 3 ;
EndIf
