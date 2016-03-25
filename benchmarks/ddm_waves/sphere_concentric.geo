// Sphere decomposed in concentric spheres
// For subdomain Omega_i, Every normal vector is outwardly directed EXCEPT
// for the normal on the scatterer which is inwardly directed
// Each layer has the same volume ; charachteristic length (lc) grows linearly
// from one interface to the other

Include "sphere_concentric_data.geo";

Solver.AutoMesh = -1; // the geometry script generates the mesh
Mesh.Optimize = 1;

If(N_DOM < 1)
  Printf("Hey Dude, stop kidding me :-)");
  Exit;
EndIf

Point(1) = {0,0,0,LC}; // center of the spheres

myLc = LC;

//average volume
vol_tot = 4/3*Pi*(R_EXT^3 - R_INT^3);
vol = vol_tot/N_DOM;

//Radius of sphere
R[0] = R_INT;

For cpt In {0:N_DOM}
  // r = (cpt+1)*R_INT; // constant subdomain radius -- problem size will depend on N_DOM

  r = R[cpt]; // constant subdomain volume

  R += (3./4./Pi*vol+R[cpt]^3.)^(1./3.); // compute next radius -- will be used at next step

  //scatterer (intern sphere)
  p_down = newp; 	Point(p_down) = {0, -r, 0, myLc};
  p_right = newp; Point(p_right) = {r, 0, 0, myLc};
  p_up = newp; 	Point(p_up) = {0, r, 0, myLc};
  p_left = newp; 	Point(p_left) = {-r, 0, 0, myLc};
  p_front = newp; Point(p_front) = {0, 0, r, myLc};
  p_back = newp; 	Point(p_back) = {0, 0, -r, myLc};

  l_dr = newl; Circle(l_dr) = {p_down, 1, p_right};
  l_ru = newl; Circle(l_ru) = {p_right, 1, p_up};
  l_ul = newl; Circle(l_ul) = {p_up, 1, p_left};
  l_ld = newl; Circle(l_ld) = {p_left, 1, p_down};

  l_uf = newl; Circle(l_uf) = {p_up, 1, p_front};
  l_fd = newl; Circle(l_fd) = {p_front, 1, p_down};
  l_db = newl; Circle(l_db) = {p_down, 1, p_back};
  l_bu = newl; Circle(l_bu) = {p_back, 1, p_up};

  l_lf = newl; Circle(l_lf) = {p_left, 1, p_front};
  l_fr = newl; Circle(l_fr) = {p_front, 1, p_right};
  l_rb = newl; Circle(l_rb) = {p_right, 1, p_back};
  l_bl = newl; Circle(l_bl) = {p_back, 1, p_left};

  ll_drf = newll; Line Loop(ll_drf) = {l_dr, -l_fr, l_fd};
  ll_urf = newll; Line Loop(ll_urf) = {l_ru, l_uf, l_fr};
  ll_ulf = newll; Line Loop(ll_ulf) = {l_ul, l_lf, -l_uf};
  ll_dlf = newll; Line Loop(ll_dlf) = {l_ld, -l_fd, -l_lf};

  ll_drb = newll; Line Loop(ll_drb) = {l_db, -l_rb, -l_dr};
  ll_urb = newll; Line Loop(ll_urb) = {l_bu, -l_ru, l_rb};
  ll_ulb = newll; Line Loop(ll_ulb) = {-l_bu, l_bl, -l_ul};
  ll_dlb = newll; Line Loop(ll_dlb) = {-l_db, -l_ld, -l_bl};

  surf_drf[cpt] = news; Ruled Surface(surf_drf[cpt]) = {ll_drf};
  surf_urf[cpt] = news; Ruled Surface(surf_urf[cpt]) = {ll_urf};
  surf_ulf[cpt] = news; Ruled Surface(surf_ulf[cpt]) = {ll_ulf};
  surf_dlf[cpt] = news; Ruled Surface(surf_dlf[cpt]) = {ll_dlf};

  surf_drb[cpt] = news; Ruled Surface(surf_drb[cpt]) = {ll_drb};
  surf_urb[cpt] = news; Ruled Surface(surf_urb[cpt]) = {ll_urb};
  surf_ulb[cpt] = news; Ruled Surface(surf_ulb[cpt]) = {ll_ulb};
  surf_dlb[cpt] = news; Ruled Surface(surf_dlb[cpt]) = {ll_dlb};

  surf_loop[cpt] = newsl; Surface Loop(surf_loop[cpt]) =
       {surf_drf[cpt], surf_urf[cpt], surf_ulf[cpt],
        surf_dlf[cpt], surf_drb[cpt], surf_urb[cpt],
        surf_ulb[cpt], surf_dlb[cpt]};

  If (cpt > 0)
    v = newv; vl[] += v; Volume(v) = {surf_loop[cpt-1], surf_loop[cpt]};
  EndIf
EndFor

If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
  Mesh 3;
  CreateDir Str(DIR);

  For cpt In {1:N_DOM}
    Delete Physicals;

    If (cpt == 1)
      Physical Surface(-1001) = {surf_drf[cpt-1], surf_urf[cpt-1],
        surf_ulf[cpt-1], surf_dlf[cpt-1], surf_drb[cpt-1], surf_urb[cpt-1],
        surf_ulb[cpt-1], surf_dlb[cpt-1]};
      Physical Surface((4+cpt)*1000) = {surf_drf[cpt], surf_urf[cpt],
        surf_ulf[cpt], surf_dlf[cpt], surf_drb[cpt], surf_urb[cpt],
        surf_ulb[cpt], surf_dlb[cpt]};
      Physical Volume(6000+cpt) = {vl[cpt-1]};
    EndIf

    If (cpt == N_DOM)
      Physical Surface(-(3+cpt)*1000) = {surf_drf[cpt-1], surf_urf[cpt-1],
        surf_ulf[cpt-1], surf_dlf[cpt-1], surf_drb[cpt-1], surf_urb[cpt-1],
        surf_ulb[cpt-1], surf_dlb[cpt-1]};
      Physical Surface(2000+N_DOM) = {surf_drf[cpt], surf_urf[cpt], surf_ulf[cpt],
        surf_dlf[cpt], surf_drb[cpt], surf_urb[cpt], surf_ulb[cpt], surf_dlb[cpt]};
      Physical Volume(6000+cpt) = {vl[cpt-1]};
    EndIf

    If (cpt > 1 && cpt < N_DOM)
      Physical Surface(-(3+cpt)*1000) = {surf_drf[cpt-1], surf_urf[cpt-1],
        surf_ulf[cpt-1], surf_dlf[cpt-1], surf_drb[cpt-1], surf_urb[cpt-1],
        surf_ulb[cpt-1], surf_dlb[cpt-1]};
      Physical Surface((4+cpt)*1000) = {surf_drf[cpt], surf_urf[cpt], surf_ulf[cpt],
        surf_dlf[cpt], surf_drb[cpt], surf_urb[cpt], surf_ulb[cpt], surf_dlb[cpt]};
      Physical Volume(6000+cpt) = {vl[cpt-1]};
    EndIf

    Printf("Meshing sphere subdomain %g...", cpt-1);
    Save StrCat(MSH_NAME, Sprintf("%g.msh", cpt-1));

  EndFor
EndIf

// Physicals for the full domain
/*
Delete Physicals;
Physical Surface(-1) = {surf_drf[0], surf_urf[0], surf_ulf[0], surf_dlf[0],
                        surf_drb[0], surf_urb[0], surf_ulb[0], surf_dlb[0]};
Physical Surface(2) = {surf_drf[N_DOM], surf_urf[N_DOM], surf_ulf[N_DOM],
                       surf_dlf[N_DOM], surf_drb[N_DOM], surf_urb[N_DOM],
                       surf_ulb[N_DOM], surf_dlb[N_DOM]};
Physical Volume(6) = {vl[]};
Save "sphere_concentric.msh";
*/

BoundingBox {-R_EXT, R_EXT, -R_EXT, R_EXT, 0, 0};
