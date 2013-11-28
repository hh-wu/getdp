Include "params.pro" ;


r = 7E-3;
valz = 10*r;

View[0].Visible = 0 ;
Plugin(CutPlane).View = 0 ;
Plugin(CutPlane).A = 0 ;
Plugin(CutPlane).B = 0 ;
Plugin(CutPlane).C = 1 ;
Plugin(CutPlane).D = -valz ;
Plugin(CutPlane).Run  ;

View[1].Name = "u_cut_xy";

View[0].Visible = 1 ;
Plugin(CutPlane).View = 0 ;
Plugin(CutPlane).A = 0 ;
Plugin(CutPlane).B = 1 ;
Plugin(CutPlane).C = 0 ;
Plugin(CutPlane).D = 0 ;
Plugin(CutPlane).Run  ;

View[2].Name = "u_cut_xz";

// fix the output format to binary
PostProcessing.Format=1;

Save View[1] Sprintf("u_cut_xy.pos");
Save View[2] Sprintf("u_cut_xz.pos");
