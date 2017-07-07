////////////////////////////////
// Author : Guillaume Demesy  //
////////////////////////////////

Include "grating2D_data.geo";

paramaille_rods = lambda_min*nm/(paramaille*paramaille_scale_rods);
lc_rod_out      = lambda_min*nm/(paramaille*paramaille_scale_rod_out);
lc_layer_dep    = lambda_min*nm/(paramaille*paramaille_scale_layer_dep);
lc_layer_cov    = lambda_min*nm/(paramaille*paramaille_scale_layer_cov);
lc_sub          = lambda_min*nm/(paramaille*paramaille_scale_sub);
lc_sup	        = lambda_min*nm/(paramaille*paramaille_scale_sup);
lc_pmlbot       = lambda_min*nm/(paramaille_pml*1.5);
lc_pmltop       = lambda_min*nm/(paramaille_pml*1.);

h_pc      = dy * N_rods;

Point(1)  = {-d/2., -h_sub-h_pmlbot                                , 0. , lc_pmlbot};
Point(2)  = {-d/2., -h_sub                                         , 0. , lc_sub};
Point(3)  = {-d/2., 0.                                             , 0. , lc_sub};
Point(4)  = {-d/2., h_layer_dep                                    , 0. , lc_layer_dep};
Point(5)  = {-d/2., h_layer_dep+h_pc                               , 0. , lc_rod_out};
Point(6)  = {-d/2., h_layer_dep+h_pc+h_layer_cov                   , 0. , lc_layer_cov};
Point(7)  = {-d/2., h_layer_dep+h_pc+h_layer_cov+h_sup             , 0. , lc_sup};
Point(8)  = {-d/2., h_layer_dep+h_pc+h_layer_cov+h_sup+h_pmltop    , 0. , lc_pmltop};

Line(1) = {1, 2};
Line(2) = {2, 3};
Line(3) = {3, 4};
Line(4) = {4, 5};
Line(5) = {5, 6};
Line(6) = {6, 7};
Line(7) = {7, 8};

out[]= Extrude{d,0,0}{Line{1};Line{2};Line{3};Line{4};Line{5};Line{6};Line{7};};//Layers{d/lc_sup};
Delete{Surface{11,15,19,23,27,31,35} ;}
Line Loop(35) = {1, 10, -8, -9}  ;Plane Surface(36) = {-35};
Line Loop(37) = {2, 14, -12, -10};Plane Surface(38) = {-37};
Line Loop(39) = {3, 18, -16, -14};Plane Surface(40) = {-39};
Line Loop(43) = {5, 26, -24, -22};Plane Surface(44) = {-43};
Line Loop(45) = {6, 30, -28, -26};Plane Surface(46) = {-45};
Line Loop(47) = {7, 34, -32, -30};Plane Surface(48) = {-47};

istart = 101;
If(Flag_glue_rod_subs==0)
  angle_rot_rod = Rot_rod*deg2rad;
  If(Shape_rod==0)
    Chirp_factor = 1;
    For k1 In {0:N_rods-1:1}
      If(Flag_chirp_rod_angle==1)
        angle_rot_rod=(k1+1)*(Rot_rod*deg2rad);
      EndIf
      xbl = -w_rod_bot/2;
      ybl = h_layer_dep + dy/2 + k1*dy - h_rod/2;
      xc  = 0;
      yc  = h_layer_dep + dy/2 + k1*dy;
      If(Flag_chirp_rod_size==1)
        If(k1>0)
          Chirp_factor = Chirp_factor*Chirp_rod/100;
        EndIf
      EndIf
      Point(istart +0+5*k1)  = {xbl           , ybl        , 0, paramaille_rods};
      Point(istart +1+5*k1)  = {xbl+w_rod_bot , ybl        , 0, paramaille_rods};
      Point(istart +2+5*k1)  = {xbl+(w_rod_bot+w_rod_top)/2, ybl+h_rod, 0, paramaille_rods};
      Point(istart +3+5*k1)  = {xbl+(w_rod_bot-w_rod_top)/2, ybl+h_rod, 0, paramaille_rods};
      Line(istart+0+4*k1) = {istart +0+5*k1,istart +1+5*k1};
      Line(istart+1+4*k1) = {istart +1+5*k1,istart +2+5*k1};
      Line(istart+2+4*k1) = {istart +2+5*k1,istart +3+5*k1};
      Line(istart+3+4*k1) = {istart +3+5*k1,istart +0+5*k1};
      Line Loop(istart +k1)  = {istart+0+4*k1,istart+1+4*k1,istart+2+4*k1, istart+3+4*k1};
      Plane Surface(istart+k1) = {istart+k1};
      Dilate {{xc, yc, 0}, Chirp_factor} {Surface{istart+k1};}
      Rotate {{0, 0, 1}, {xc, yc, 0}, angle_rot_rod} {Surface{istart+k1};}
    EndFor
  EndIf

  If(Shape_rod==1)
    Chirp_factor = 1;
    For k1 In {0:N_rods-1:1}
      If(Flag_chirp_rod_angle==1)
        angle_rot_rod=(k1+1)*(Rot_rod*deg2rad);
      EndIf
      xc = 0;
      yc = h_layer_dep + dy/2. + k1*dy;
      If(Flag_chirp_rod_size==1)
        If(k1>0)
          Chirp_factor = Chirp_factor*Chirp_rod/100;
        EndIf
      EndIf
      Point(istart +0+5*k1)  = {xc             , yc         , 0, paramaille_rods};
      Point(istart +1+5*k1)  = {xc-w_rod_bot/2 , yc         , 0, paramaille_rods};
      Point(istart +2+5*k1)  = {xc             , yc-h_rod/2 , 0, paramaille_rods};
      Point(istart +3+5*k1)  = {xc+w_rod_bot/2 , yc         , 0, paramaille_rods};
      Point(istart +4+5*k1)  = {xc             , yc+h_rod/2 , 0, paramaille_rods};
      Ellipse(istart+0+4*k1) = {istart+1+5*k1,istart+0+5*k1,istart+2+5*k1,istart+2+5*k1};
      Ellipse(istart+1+4*k1) = {istart+2+5*k1,istart+0+5*k1,istart+3+5*k1,istart+3+5*k1};
      Ellipse(istart+2+4*k1) = {istart+3+5*k1,istart+0+5*k1,istart+4+5*k1,istart+4+5*k1};
      Ellipse(istart+3+4*k1) = {istart+4+5*k1,istart+0+5*k1,istart+1+5*k1,istart+1+5*k1};
      Line Loop(istart +k1)  = {istart+0+4*k1,istart+1+4*k1,istart+2+4*k1, istart+3+4*k1};
      Plane Surface(istart+k1) = {istart+k1};
      Dilate {{xc, yc, 0}, Chirp_factor} {Surface{istart+k1};}
      Rotate {{0, 0, 1}, {xc, yc, 0}, angle_rot_rod} {Surface{istart+k1};}
    EndFor
  EndIf
  Line Loop(70) = {4, 22, -20, -18};
EndIf

If(Flag_glue_rod_subs==1)
  Delete{Surface{40} ;}
  Delete{Line{18};}
  angle_rot_rod = Rot_rod*deg2rad;
  If(Shape_rod==0)
    Chirp_factor = 1;
    For k1 In {0:N_rods-1:1}
      If(Flag_chirp_rod_angle==1)
        angle_rot_rod=(k1+1)*(Rot_rod*deg2rad);
      EndIf
      xbl = -w_rod_bot/2;
      ybl = h_layer_dep +  k1*dy;
      xc  = 0;
      yc  = h_layer_dep + dy/2 + k1*dy;
      If(Flag_chirp_rod_size==1)
        If(k1>0)
          Chirp_factor = Chirp_factor*Chirp_rod/100;
        EndIf
      EndIf
      Point(istart +0+5*k1)  = {xbl                        , ybl      , 0, paramaille_rods};
      Point(istart +1+5*k1)  = {xbl+w_rod_bot              , ybl      , 0, paramaille_rods};
      Point(istart +2+5*k1)  = {xbl+(w_rod_bot+w_rod_top)/2, ybl+h_rod, 0, paramaille_rods};
      Point(istart +3+5*k1)  = {xbl+(w_rod_bot-w_rod_top)/2, ybl+h_rod, 0, paramaille_rods};
      Line(istart+0+4*k1) = {istart +0+5*k1,istart +1+5*k1};
      Line(istart+1+4*k1) = {istart +1+5*k1,istart +2+5*k1};
      Line(istart+2+4*k1) = {istart +2+5*k1,istart +3+5*k1};
      Line(istart+3+4*k1) = {istart +3+5*k1,istart +0+5*k1};
      Line Loop(istart +k1)  = {istart+0+4*k1,istart+1+4*k1,istart+2+4*k1, istart+3+4*k1};
      Plane Surface(istart+k1) = {istart+k1};
      Dilate {{xc, yc, 0}, Chirp_factor} {Surface{istart+k1};}
      Rotate {{0, 0, 1}, {xc, yc, 0}, angle_rot_rod} {Surface{istart+k1};}
    EndFor
    Line(90) = {4, 101};
    Line(91) = {102, 14};
    Line Loop(92) = {14, 16, -91, -101, -90, -3};
    Plane Surface(40) = {92};
    Line Loop(70) = {4, 22, -20, -91, 102, 103, 104, -90};
  EndIf
  If(Shape_rod==1)
    Chirp_factor = 1;
    For k1 In {0:N_rods-1:1}
      If(Flag_chirp_rod_angle==1)
        angle_rot_rod=(k1+1)*(Rot_rod*deg2rad);
      EndIf
      xc = 0;
      yc = h_layer_dep + k1*dy + h_rod/2;
      If(Flag_chirp_rod_size==1)
      If(k1>0)
      Chirp_factor = Chirp_factor*Chirp_rod/100;
    EndIf
  EndIf
  Point(istart +0+5*k1)  = {xc             , yc         , 0, paramaille_rods};
  Point(istart +1+5*k1)  = {xc-w_rod_bot/2 , yc         , 0, paramaille_rods};
  Point(istart +2+5*k1)  = {xc             , yc-h_rod/2 , 0, paramaille_rods};
  Point(istart +3+5*k1)  = {xc+w_rod_bot/2 , yc         , 0, paramaille_rods};
  Point(istart +4+5*k1)  = {xc             , yc+h_rod/2 , 0, paramaille_rods};
  Ellipse(istart+0+4*k1) = {istart+1+5*k1,istart+0+5*k1,istart+2+5*k1,istart+2+5*k1};
  Ellipse(istart+1+4*k1) = {istart+2+5*k1,istart+0+5*k1,istart+3+5*k1,istart+3+5*k1};
  Ellipse(istart+2+4*k1) = {istart+3+5*k1,istart+0+5*k1,istart+4+5*k1,istart+4+5*k1};
  Ellipse(istart+3+4*k1) = {istart+4+5*k1,istart+0+5*k1,istart+1+5*k1,istart+1+5*k1};
  Line Loop(istart +k1)  = {istart+0+4*k1,istart+1+4*k1,istart+2+4*k1, istart+3+4*k1};
  Plane Surface(istart+k1) = {istart+k1};
  Dilate {{xc, yc, 0}, Chirp_factor} {Surface{istart+k1};}
  Rotate {{0, 0, 1}, {xc, yc, 0}, angle_rot_rod} {Surface{istart+k1};}
EndFor
Line(90) = {4, 103};
Line(91) = {103, 14};
Line Loop(92) = {14, 16, -91, -90, -3};
Plane Surface(40) = {92};		
Line Loop(70) = {4, 22, -20, -91, -90};
EndIf
EndIf


last_surf_list={};
phys_rod_list={};

If(Flag_glue_rod_subs==0)
  phys_plot_bnd={14,18,22,26};
  For k1 In {0:N_rods-1:1}
    last_surf_list[k1]  = istart+k1;
    phys_rod_list[k1] = istart+k1;
    phys_plot_bnd[5+4*k1+0]=istart+4*k1+0;
    phys_plot_bnd[5+4*k1+1]=istart+4*k1+1;
    phys_plot_bnd[5+4*k1+2]=istart+4*k1+2;
    phys_plot_bnd[5+4*k1+3]=istart+4*k1+3;
  EndFor
  last_surf_list[N_rods] = 70;
  Plane Surface(72) = last_surf_list[];
EndIf

If(Flag_glue_rod_subs==1)
  If(Shape_rod==0)
    phys_plot_bnd={14,90,101,91,22,26};
    For k1 In {1:N_rods-1:1}
      last_surf_list[k1-1]  = istart+k1;
    EndFor
    For k1 In {0:N_rods-1:1}
      phys_rod_list[k1] = istart+k1;
      phys_plot_bnd[7+4*k1+0]=istart+4*k1+0;
      phys_plot_bnd[7+4*k1+1]=istart+4*k1+1;
      phys_plot_bnd[7+4*k1+2]=istart+4*k1+2;
      phys_plot_bnd[7+4*k1+3]=istart+4*k1+3;
    EndFor
    last_surf_list[N_rods-1] = 70;
    Plane Surface(72) =-last_surf_list[];	
  EndIf
  If(Shape_rod==1)
    phys_plot_bnd={14,90,91,22,26};
    For k1 In {0:N_rods-1:1}
    last_surf_list[k1]  = istart+k1;
    phys_rod_list[k1] = istart+k1;
    phys_plot_bnd[6+4*k1+0]=istart+4*k1+0;
    phys_plot_bnd[6+4*k1+1]=istart+4*k1+1;
    phys_plot_bnd[6+4*k1+2]=istart+4*k1+2;
    phys_plot_bnd[6+4*k1+3]=istart+4*k1+3;
    EndFor
    last_surf_list[N_rods] = 70;
    Plane Surface(72) = last_surf_list[];
  EndIf
EndIf

Periodic Line {8,1,16,20,24,28,32} = {1,2,3,4,5,6,7} Translate {d,0,0} ;

Physical Line(SURF_BLOCH_X_LEFT)  = {1, 2, 3, 4, 5, 6, 7}; // Bloch_LeftX-
Physical Line(SURF_BLOCH_X_RIGHT) = {8,12,16,20,24,28,32}; // Bloch_RightX+
Physical Line(SURF_INTEG_SUP1) = {30};                     // super/pml cut
Physical Line(SURF_INTEG_SUP2) = {26};                     // super/grooves cut
Physical Line(SURF_INTEG_SUB1) = {10};                     // subs/pml cut
Physical Line(SURF_INTEG_SUB2) = {14};                     // cov/subs cut
Physical Line(SURF_PLOT) = phys_plot_bnd[];                // final plot

Physical Surface(PMLBOT)   = {36}; // pmlbot
Physical Surface(SUB)      = {38}; // sub
Physical Surface(LAYERDEP) = {40}; // layer_dep
Physical Surface(RODOUT)   = {72}; // rod_out
For k2 In {0:N_rods-1:1}
Physical Surface(ROD~{k2})={istart+k2}; //rod i
EndFor
Physical Surface(LAYERCOV) = {44}; // layer_cov
Physical Surface(SUP)      = {46}; // sup
Physical Surface(PMLTOP)   = {48}; // pmltop

Physical Point(PRINT_POINT) = {1};

Solver.AutoMesh=1;
Geometry.Points = 0;
Mesh.SurfaceEdges = 0;
// Hide "*";
