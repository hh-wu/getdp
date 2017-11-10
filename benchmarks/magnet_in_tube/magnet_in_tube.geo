Include "magnet_in_tube_data.pro";

yy = 0;
// Magnet
pm[0] = newp; Point(pm[0]) = {0., yy-h/2, 0., lcm};
pm[1] = newp; Point(pm[1]) = {r , yy-h/2, 0., lcm};
pm[2] = newp; Point(pm[2]) = {r,  yy+h/2, 0., lcm};
pm[3] = newp; Point(pm[3]) = {0,  yy+h/2, 0., lcm};

For k In {0:3}
  lm[k] = newl; Line(lm[k]) = {pm[k],pm[((k<3)?k+1:0)]};
EndFor

llmagnet = newll; Line Loop (llmagnet) = lm[];
smagnet = news; Plane Surface(smagnet) = llmagnet;


// Tube
pt[0] = newp; Point(pt[0]) = {ri, -ht/2, 0., lct};
pt[1] = newp; Point(pt[1]) = {ro, -ht/2, 0., lct};
pt[2] = newp; Point(pt[2]) = {ro,  ht/2, 0., lct};
pt[3] = newp; Point(pt[3]) = {ri,  ht/2, 0., lct};


For k In {0:3}
  lt[k] = newl; Line(lt[k]) = {pt[k],pt[((k<3)?k+1:0)]};
EndFor

lltube = newll; Line Loop (lltube) = lt[];
stube = news; Plane Surface(stube) = lltube;

// Air in
pa[0] = newp; Point(pa[0]) = {0., -ht/2, 0., lca};
pa[1] = newp; Point(pa[1]) = {0.,  ht/2, 0., lca};

// axis
lax[0] = newl; Line(lax[0]) = {pm[0],pa[0]};
lax[1] = newl; Line(lax[1]) = {pa[1],pm[3]};

lac[0] = newl; Line(lac[0]) = {pa[0],pt[0]};
lac[1] = newl; Line(lac[1]) = {pt[3],pa[1]};

// Air out (shell)
pa_[0] = newp; Point(pa_[0]) = {rext0, -ht/2, 0., lca};
pa_[1] = newp; Point(pa_[1]) = {rext0,  ht/2, 0., lca};

la_[0] = newl; Line(la_[0]) = {pa_[0],pa_[1]};
lac_[0] = newl; Line(lac_[0]) = {pt[1],pa_[0]};
lac_[1] = newl; Line(lac_[1]) = {pa_[1],pt[2]};

Line Loop(newll) = {13, 15, -10, 16, 14, -3, -2, -1};
sair_in=news;Plane Surface(news) = {newll-1};

Line Loop(newll) = {lac_[0],la_[0],lac_[1], -lt[1]};
sair_out=news; Plane Surface(news) = {newll-1};


// Physical regions
Physical Surface(MAGNET) = smagnet;
Physical Surface(TUBE) = stube;
Physical Surface(AIR)  = {sair_in, sair_out};

Physical Line(SKINMAGNET) = pm[{0:2}];
Physical Line(AXIS)   ={lax[],lm[3]};
Physical Line(OUT_BND)={la_[0]};
