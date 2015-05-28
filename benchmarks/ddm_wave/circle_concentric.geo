// Circle decomposition in N_DOM (> 1) different parts
// Decomposition in concentric circles
// Normals are all pointing outside subdomains and full domain (normal vector is
// pointing inside the obstacle)

Include "circle_concentric_data.geo";

//Compute average area for every subdomain
area = Pi/N_DOM*(R_EXT^2-R_INT^2);
//vector of radius
R[0] = R_INT;

Point(1) = {0,0,0,LC};
For i In {0:N_DOM}
  //  r = R_INT + i * (R_EXT - R_INT) / N_DOM;
  If(i == N_DOM)
    R[i] = R_EXT; //avoir numerical errors
  EndIf
  If(i > 0 && i < N_DOM)
    R[i] = Sqrt[area/Pi +R[i-1]^2];
  EndIf
  r = R[i];
  p2 = newp; Point(p2) = {r,0,0,LC};
  p3 = newp; Point(p3) = {0,r,0,LC};
  p4 = newp; Point(p4) = {-r,0,0,LC};
  p5 = newp; Point(p5) = {0,-r,0,LC};
  l1[i] = newl; Circle(l1[i]) = {p2, 1, p3};
  l2[i] = newl; Circle(l2[i]) = {p3, 1, p4};
  l3[i] = newl; Circle(l3[i]) = {p4, 1, p5};
  l4[i] = newl; Circle(l4[i]) = {p5, 1, p2};

  ll[i] = newll; Line Loop(ll[i]) = {l1[i], l2[i], l3[i], l4[i]};

  If(i > 0)
    s = news; Plane Surface(s) = {ll[i], ll[i-1]};
    idom = i-1;
    ss[idom] = s;
  EndIf
EndFor

If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
  Mesh 2;
  CreateDir Str(DIR);
  For idom In {0:N_DOM-1}
    Delete Physicals;
    Physical Surface(100 + idom) = ss[idom];
    If(idom == 0)
      Physical Line(1000) = -{l1[0], l2[0], l3[0], l4[0]}; // GammaScat (interior)
    EndIf
    If(idom == N_DOM-1)
      Physical Line(2000 + N_DOM-1) = {l1[N_DOM], l2[N_DOM],
                                       l3[N_DOM], l4[N_DOM]}; // GammaInf (exterior)
    EndIf

    If(idom > 0)
      //Sigma_ij on left (iside == 0)
      // "left" = "interior" boundary (toward the center)
      Physical Line(3000 + idom) = {-l1[idom], -l2[idom], -l3[idom], -l4[idom]};
    EndIf
    If(idom < N_DOM-1)
      //Sigma_ij on right (iside == 1)
      // "left" = "exterior" boundary (toward infinity)
      Physical Line(4000 + idom) = {l1[idom+1], l2[idom+1], l3[idom+1], l4[idom+1]};
    EndIf
    Printf("Meshing circle_concentric subdomain %g...", idom);
    Save StrCat(MSH_NAME, Sprintf("%g.msh", idom));
  EndFor
EndIf

BoundingBox {-R_EXT, R_EXT, -R_EXT, R_EXT, 0, 0};
