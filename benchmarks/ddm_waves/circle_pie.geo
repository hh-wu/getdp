// Circle decomposition in N_DOM (> 1) different parts
// Decomposition as a pie (from the center to the border)

// Normals are all pointing outside subdomains and full domain (normal vector is
// pointing inside the obstacle)

Include "circle_pie_data.geo";

Solver.AutoMesh = -1; // the geometry script generates the mesh

dLC = LC/10;
angleRotate = 0;
Point(1) = {0,0,0,LC};
l_AllGammaScat[] = {}; idx_AllGammaScat[] = {0};
l_AllGammaInf[] = {}; idx_AllGammaInf[] = {0};
For i In {0:N_DOM}
  idom = i-1; // number of the subdomain
  t_dn = i * 2 * Pi / N_DOM;
  l_GammaScat[] = {};
  l_GammaInf[] = {};
  If(i != N_DOM)
    p_scat[i] = newp; Point(p_scat[i]) = {R_INT * Cos(t_dn+angleRotate),
                                          R_INT * Sin(t_dn+angleRotate),0,LC};
    p_inf[i] = newp; Point(p_inf[i]) = {R_EXT * Cos(t_dn+angleRotate),
                                        R_EXT * Sin(t_dn+angleRotate),0,LC};
    //from infinity to the scatterer
    l_sigma[i] = newl; Line(l_sigma[i]) = {p_inf[i], p_scat[i]};
    If(N_DOM == 2)
      t_up = (i+1) * 2 * Pi / N_DOM;
      t_half = 0.5*(t_up + t_dn);
      p_scatbis[i] = newp; Point(p_scatbis[i]) = {R_INT * Cos(t_half+angleRotate),
                                                  R_INT * Sin(t_half+angleRotate),0,LC};
      p_infbis[i] = newp; Point(p_infbis[i]) = {R_EXT * Cos(t_half+angleRotate),
                                                R_EXT * Sin(t_half+angleRotate),0,LC};
    EndIf
  EndIf
  If(idom >= 0)
    If(N_DOM == 2)
      l_GammaScat[0] = newl; Circle(l_GammaScat[0]) = {p_scat[i%N_DOM], 1, p_scatbis[i-1]};
      l_GammaScat[1] = newl; Circle(l_GammaScat[1]) = {p_scatbis[i-1], 1, p_scat[i-1]};
      l_GammaInf[0] = newl; Circle(l_GammaInf[0]) = {p_inf[i-1], 1, p_infbis[i-1]};
      l_GammaInf[1] = newl; Circle(l_GammaInf[1]) = {p_infbis[i-1], 1, p_inf[i%N_DOM]};
    EndIf
    If(N_DOM > 2)
      l_GammaScat[0] = newl; Circle(l_GammaScat[0]) = {p_scat[i%N_DOM], 1, p_scat[i-1]};
      l_GammaInf[0] = newl; Circle(l_GammaInf[0]) = {p_inf[i-1], 1, p_inf[i%N_DOM]};
    EndIf

    GammaScat[] += l_GammaScat[];
    GammaInf[] += l_GammaInf[];

    ll = newll; Line Loop(ll) = {l_sigma[i%N_DOM], l_GammaScat[], -l_sigma[i-1], l_GammaInf[]};
    s = news; Plane Surface(s) = {ll};
    ss[idom] = s;
    Physical Surface(idom) = s;

    // Gamma Scatterer
    Physical Line(1000 + idom) = {l_GammaScat[]};
    // Gamma Infiny
    Physical Line(2000 + idom) = {l_GammaInf[]};
    // Sigma (both side)
    // Physical Line(200 + idom) = {l_sigma[i%N_DOM], -l_sigma[i-1]};
    Physical Line(3000 + idom) = {-l_sigma[i-1]}; // "Left" transm. boundary
                                                  // (if looking to the center from infinity)
    Physical Line(4000 + idom) = {l_sigma[i%N_DOM]}; // "right" transm. boundary

    //Boundary (=points) of GammaScat
    Physical Point(5000 + idom) = {p_scat[i-1], p_scat[i%N_DOM]};
    //Boundary (=points) of GammaInf
    Physical Point(6000 + idom) = {p_inf[i-1], p_inf[i%N_DOM]};
    // Boundary (=points) of Sigma
    //"left"
    Physical Point(7000 + idom) = {p_scat[i-1], p_inf[i-1], p_scat[i%N_DOM], p_inf[i%N_DOM]};
    //"right"
    Physical Point(8000 + idom) = {p_scat[i%N_DOM], p_inf[i%N_DOM]};
    //list of lines
    l_AllGammaScat[] += l_GammaScat[]; idx_AllGammaScat[] += #l_AllGammaScat[];
    l_AllGammaInf[] += l_GammaInf[];   idx_AllGammaInf[] += #l_AllGammaInf[];
  EndIf

EndFor

// for the full version
Physical Line(1) = GammaScat[];
Physical Line(2) = GammaInf[];
Physical Point(99) = p_inf[];

If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
  Mesh 2;
  CreateDir Str(DIR);
  For idom In {0:N_DOM-1}
    Delete Physicals;
    Physical Surface(idom) = ss[idom];
    // Gamma Scatterer
    Physical Line(1000 + idom) = GammaScat[{idx_AllGammaScat[idom]:idx_AllGammaScat[idom+1]-1:1}];
    // Gamma Infiny
    Physical Line(2000 + idom) = GammaInf[{idx_AllGammaInf[idom]:idx_AllGammaInf[idom+1]-1:1}];
    Physical Line(3000 + idom) = {-l_sigma[idom]}; //left boundary
    Physical Line(4000 + idom) = {l_sigma[(idom+1)%N_DOM]}; // right boundary
    Printf("Meshing circle_pie subdomain %g...", idom);
    Save StrCat(MSH_NAME, Sprintf("%g.msh", idom));
  EndFor
EndIf

BoundingBox {-R_EXT, R_EXT, -R_EXT, R_EXT, 0, 0};
