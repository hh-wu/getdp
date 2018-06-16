// Cylinder decomposition in N_DOM (> 1) different parts
// Decomposition in concentric cylinders
// Normals are all pointing outside subdomains and full domain (normal vector is
// pointing inside the obstacle)

Include "cylinder_concentric_data.geo";

Solver.AutoMesh = -1; // the geometry script generates the mesh
Mesh.Algorithm=6;

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
    ii = i-1;
    ss[ii] = s;
  EndIf
EndFor

ret[] = Extrude{0,0,1}{
  Surface{ss[]}; Layers{2}; Recombine;
};

ii = 1;
Printf("bot %g top %g vol %g   lat REXT %g %g %g %g  lat RINT  %g %g %g %g ",
       -ss[ii],
       ret[10*ii+0],
       ret[10*ii+1],
       ret[10*ii+2], ret[10*ii+3], ret[10*ii+4], ret[10*ii+5],
       ret[10*ii+6], ret[10*ii+7], ret[10*ii+8], ret[10*ii+9]
     );

If(StrCmp(OnelabAction, "check")) // only mesh if not in onelab check mode
  Mesh 3;
  //Coherence Mesh; // circumvent duplicate geometrical entities
  CreateDir Str(DIR);
  For ii In {0:N_DOM-1}
    i = ii+1;
    Delete Physicals;

    Physical Volume(100 + i) = ret[10*ii + 1];

    Physical Surface(200 + i) = {-ss[ii], ret[10*ii + 0]};

    If(ii == 0)
      Physical Surface(1000 + i) = {
        ret[10*ii+6], ret[10*ii+7], ret[10*ii+8], ret[10*ii+9]
      }; // GammaScat (interior)
    EndIf
    If(ii == N_DOM-1)
      Physical Surface(2000 + N_DOM) = {
        ret[10*ii+2], ret[10*ii+3], ret[10*ii+4], ret[10*ii+5]
      }; // GammaInf (exterior)
    EndIf

    If(ii > 0)
      //Sigma_ij on left (iside == 0)
      // "left" = "interior" boundary (toward the center)
      Physical Surface(3000 + i) = {
        ret[10*ii+6], ret[10*ii+7], ret[10*ii+8], ret[10*ii+9]
      };
    EndIf
    If(ii < N_DOM-1)
      //Sigma_ij on right (iside == 1)
      // "left" = "exterior" boundary (toward infinity)
      Physical Surface(4000 + i) = {
        ret[10*ii+2], ret[10*ii+3], ret[10*ii+4], ret[10*ii+5]
      };
    EndIf
    Printf("Meshing cylinder_concentric subdomain %g...", i);
    Save StrCat(MSH_NAME, Sprintf("%g.msh", i));
  EndFor
EndIf

BoundingBox {-R_EXT, R_EXT, -R_EXT, R_EXT, 0, 0};
