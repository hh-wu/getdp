// Creating the view
attr     = TextAttributes("Font", "Helvetica", "FontSize", "18", "Align", "CenterCenter");
attr_abc = TextAttributes("Font", "Helvetica", "FontSize", "18", "Align", "Left");
attr_dq  = TextAttributes("Font", "Helvetica", "FontSize", "18", "Align", "Right");

If(NbrPolesInModel==1)
  View "Info 1 pole" {
    T3(xa[0], ya[0], 0, attr){"A-"};
    T3(xb[0], yb[0], 0, attr){"C+"};
    T3(xc[0], yc[0], 0, attr){"B-"};

    SL(xd[0],yd[0],0,xd[1],yd[1],0){0,0};     T3(xd[1], yd[1], 0, attr_dq){ "d axis" };
    SL(xq[0],yq[0],0,xq[1],yq[1],0){0,0};     T3(xq[1], yq[1], 0, attr_dq){ "q axis" };
    SL(xaa[0],yaa[0],0,xaa[1],yaa[1],0){1,1}; T3(xaa[1], yaa[1], 0, attr_abc){ "a axis" };
    SL(xbb[0],ybb[0],0,xbb[1],ybb[1],0){1,1}; T3(xbb[1], ybb[1], 0, attr_abc){ "b axis" };
    SL(xcc[0],ycc[0],0,xcc[1],ycc[1],0){1,1}; T3(xcc[1], ycc[1], 0, attr_abc){ "c axis" };
  };
EndIf

If(NbrPolesInModel==2)
  View "Info 2 poles" {
    T3(xa[0], ya[0], 0, attr){ "A-" }; T3(xb[0], yb[0], 0, attr){ "C+" }; T3(xc[0], yc[0], 0, attr){ "B-" };
    T3(xa[1], ya[1], 0, attr){ "A+" }; T3(xb[1], yb[1], 0, attr){ "C-" }; T3(xc[1], yc[1], 0, attr){ "B+" };

    SL(xd[0],yd[0],0,xd[1],yd[1],0){0,0};     T3(xd[1], yd[1], 0, attr_dq){ "d axis" };
    SL(xq[0],yq[0],0,xq[1],yq[1],0){0,0};     T3(xq[1], yq[1], 0, attr_dq){ "q axis" };
    SL(xaa[0],yaa[0],0,xaa[1],yaa[1],0){1,1}; T3(xaa[1], yaa[1], 0, attr_abc){ "a axis" };
    SL(xbb[0],ybb[0],0,xbb[1],ybb[1],0){1,1}; T3(xbb[1], ybb[1], 0, attr_abc){ "b axis" };
    SL(xcc[0],ycc[0],0,xcc[1],ycc[1],0){1,1}; T3(xcc[1], ycc[1], 0, attr_abc){ "c axis" };
  };
EndIf

If(NbrPolesInModel==4)
  View "Info 4 poles" {
    T3(xa[0], ya[0], 0, attr){ "A-" }; T3(xb[0], yb[0], 0, attr){ "C+" }; T3(xc[0], yc[0], 0, attr){ "B-" };
    T3(xa[1], ya[1], 0, attr){ "A+" }; T3(xb[1], yb[1], 0, attr){ "C-" }; T3(xc[1], yc[1], 0, attr){ "B+" };
    T3(xa[2], ya[2], 0, attr){ "A-" }; T3(xb[2], yb[2], 0, attr){ "C+" }; T3(xc[2], yc[2], 0, attr){ "B-" };
    T3(xa[3], ya[3], 0, attr){ "A+" }; T3(xb[3], yb[3], 0, attr){ "C-" }; T3(xc[3], yc[3], 0, attr){ "B+" };

    SL(xd[0],yd[0],0,xd[1],yd[1],0){0,0};     T3(xd[1], yd[1], 0, attr_dq){ "d axis" };
    SL(xq[0],yq[0],0,xq[1],yq[1],0){0,0};     T3(xq[1], yq[1], 0, attr_dq){ "q axis" };
    SL(xaa[0],yaa[0],0,xaa[1],yaa[1],0){1,1}; T3(xaa[1], yaa[1], 0, attr_abc){ "a axis" };
    SL(xbb[0],ybb[0],0,xbb[1],ybb[1],0){1,1}; T3(xbb[1], ybb[1], 0, attr_abc){ "b axis" };
    SL(xcc[0],ycc[0],0,xcc[1],ycc[1],0){1,1}; T3(xcc[1], ycc[1], 0, attr_abc){ "c axis" };
  };
EndIf

If(NbrPolesInModel==8)
  View "Info 8 poles" {
    T3(xa[0], ya[0], 0, attr){ "A-" }; T3(xb[0], yb[0], 0, attr){ "C+" }; T3(xc[0], yc[0], 0, attr){ "B-" };
    T3(xa[1], ya[1], 0, attr){ "A+" }; T3(xb[1], yb[1], 0, attr){ "C-" }; T3(xc[1], yc[1], 0, attr){ "B+" };
    T3(xa[2], ya[2], 0, attr){ "A-" }; T3(xb[2], yb[2], 0, attr){ "C+" }; T3(xc[2], yc[2], 0, attr){ "B-" };
    T3(xa[3], ya[3], 0, attr){ "A+" }; T3(xb[3], yb[3], 0, attr){ "C-" }; T3(xc[3], yc[3], 0, attr){ "B+" };
    T3(xa[4], ya[4], 0, attr){ "A-" }; T3(xb[4], yb[4], 0, attr){ "C+" }; T3(xc[4], yc[4], 0, attr){ "B-" };
    T3(xa[5], ya[5], 0, attr){ "A+" }; T3(xb[5], yb[5], 0, attr){ "C-" }; T3(xc[5], yc[5], 0, attr){ "B+" };
    T3(xa[6], ya[6], 0, attr){ "A-" }; T3(xb[6], yb[6], 0, attr){ "C+" }; T3(xc[6], yc[6], 0, attr){ "B-" };
    T3(xa[7], ya[7], 0, attr){ "A+" }; T3(xb[7], yb[7], 0, attr){ "C-" }; T3(xc[7], yc[7], 0, attr){ "B+" };

    SL(xd[0],yd[0],0,xd[1],yd[1],0){0,0};     T3(xd[1], yd[1], 0, attr_dq){ "d axis" };
    SL(xq[0],yq[0],0,xq[1],yq[1],0){0,0};     T3(xq[1], yq[1], 0, attr_dq){ "q axis" };
    SL(xaa[0],yaa[0],0,xaa[1],yaa[1],0){1,1}; T3(xaa[1], yaa[1], 0, attr_abc){ "a axis" };
    SL(xbb[0],ybb[0],0,xbb[1],ybb[1],0){1,1}; T3(xbb[1], ybb[1], 0, attr_abc){ "b axis" };
    SL(xcc[0],ycc[0],0,xcc[1],ycc[1],0){1,1}; T3(xcc[1], ycc[1], 0, attr_abc){ "c axis" };
  };
EndIf

View[PostProcessing.NbViews-1].Attributes = "tmp" ;
View[PostProcessing.NbViews-1].ShowScale = 0 ;
View[PostProcessing.NbViews-1].IntervalsType = 2 ;
View[PostProcessing.NbViews-1].ColorTable = {Red,Yellow} ;
View[PostProcessing.NbViews-1].LineWidth = 2 ;
