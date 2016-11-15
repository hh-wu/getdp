Include "coil.dat";

Mesh.Optimize = 1;
General.ExpertMode = 1;

LhCoil = 3*mm ; RCoil = 3.82*mm; RhCoil = RvCoil;
Ht = FeedGap + 2*(LvCoil + RvCoil);
MinHExtr =  2*(r+Yoffset); HExtrude = Ht/Turns;
/*
If (HExtrude >= MinHExtr)
  HTurnExtrude = HExtrude;
Else
  HTurnExtrude = MinHExtr;
  Ht = (Turns-1)*MinHExtr;
EndIf
*/

Phi = Asin(RhCoil/(RCoil+RhCoil));
RhCoil2 = (RCoil+RhCoil)*Cos(Phi);
Zshift = (RvCoil+LhCoil+RhCoil2);
ZExtrudeaxis = (LhCoil+RhCoil2);

RecoMesh = 0; // todo

p = newp;
Point(p)={0, -FeedGap/2, Zshift, lc};
Point(p+1)={0-r, -FeedGap/2, Zshift, lc};
l = newl;
Line(l) = {p, p+1};
Transfinite Line{l} = 4 Using Power 0.3;
tmp0[] = Extrude {{0, 1, 0}, {0, 0, Zshift}, 2*Pi/4} {
  Line{l}; Layers{3}; Recombine RecoMesh;
};
tmp1[] = Extrude {{0, 1, 0}, {0, 0, Zshift}, 2*Pi/4} {
  Line{tmp0[0]}; Layers{3}; Recombine RecoMesh;
};
tmp2[] = Extrude {{0, 1, 0}, {0, 0, Zshift}, 2*Pi/4} {
  Line{tmp1[0]}; Layers{3}; Recombine RecoMesh;
};
tmp3[] = Extrude {{0, 1, 0}, {0, 0, Zshift}, 2*Pi/4} {
  Line{tmp2[0]}; Layers{3}; Recombine RecoMesh;
};

feed_minus[] = {tmp0[1], tmp1[1], tmp2[1], tmp3[1]};
vol_coil[] = {};
tmp[] = Extrude {0, FeedGap, 0}{
  Surface{feed_minus[]}; Layers{StructuredMesh ? 2 : 0}; Recombine RecoMesh;
};
feed_plus[] = tmp[{0,5,10,15}]; cutSkinFeed[] += {tmp[3],tmp[8],tmp[13],tmp[18]};

Geometry.AutoCoherence = 0;

tmp[] = Extrude {0,LvCoil,0}{
  Surface{feed_plus[]}; Layers{StructuredMesh ? 2 : 0}; Recombine RecoMesh;
};
vol_coil[] += tmp[{1,6,11,16}];
tmp[] = Extrude { {1,0,0} , {0,FeedGap/2+LvCoil,ZExtrudeaxis} , -Pi/2}{
  Surface {tmp[{0,5,10,15}]}; Layers{StructuredMesh ? 6 : 0}; Recombine RecoMesh;
};
vol_coil[] += tmp[{1,6,11,16}];
tmp[] = Extrude {0,0,-LhCoil}{
  Surface {tmp[{0,5,10,15}]};
  Layers{StructuredMesh ? 6 : 0};
};
vol_coil[] += tmp[{1,6,11,16}];
tmp[] = Extrude { {0,1,0} , {RhCoil,FeedGap/2+LvCoil+RvCoil,RhCoil2} , -(Pi/2-Phi)}{
  Surface {tmp[{0,5,10,15}]}; Layers{StructuredMesh ? 6 : 0}; Recombine RecoMesh;
};
vol_coil[] += tmp[{1,6,11,16}];
For j In {1:4*Turns}
  Angle = (j==1 || j==4*Turns)? Phi:0;
  tmp[] = Extrude { {0,-Ht/Turns/4,0}, {0,1,0} , {0,0,0} , (Pi/2-Angle)}{
    Surface {tmp[{0,5,10,15}]}; Layers{StructuredMesh ? 6 : 0}; Recombine RecoMesh;
  };
  vol_coil[] += tmp[{1,6,11,16}];
EndFor
tmp[] = Extrude { {0,1,0} , {-RhCoil,-(FeedGap/2+LvCoil+RvCoil),RhCoil2} , -(Pi/2-Phi)}{
  Surface {tmp[{0,5,10,15}]}; Layers{StructuredMesh ? 6 : 0}; Recombine RecoMesh;
};
vol_coil[] += tmp[{1,6,11,16}];
tmp[] = Extrude {0,0,LhCoil}{
  Surface {tmp[{0,5,10,15}]}; Layers{StructuredMesh ? 6 : 0}; Recombine RecoMesh;
};
vol_coil[] += tmp[{1,6,11,16}];
tmp[] = Extrude { {1,0,0} , {0,-(FeedGap/2+LvCoil),ZExtrudeaxis} , -Pi/2}{
  Surface {tmp[{0,5,10,15}]}; Layers{StructuredMesh ? 6 : 0}; Recombine RecoMesh;
};
vol_coil[] += tmp[{1,6,11,16}];
tmp[] = Extrude {0,LvCoil,0}{
  Surface {tmp[{0,5,10,15}]}; Layers{StructuredMesh ? 2 : 0}; Recombine RecoMesh;
};
vol_coil[] += tmp[{1,6,11,16}];

Geometry.AutoCoherence = 1;
Coherence;

skin_coil[] = CombinedBoundary{ Volume{vol_coil[]}; };
skin_coil[] -= {feed_minus[], feed_plus[]};

// Cylindric AirBox
pAir[]+= newp ; Point(newp) = {0, HInf/2, 0, lc2};
pAir[]+= newp ; Point(newp) = {0, HInf/2, RInf, lc2};
pAir[]+= newp ; Point(newp) = {RInf, HInf/2, 0, lc2};
pAir[]+= newp ; Point(newp) = {0, HInf/2, -RInf, lc2};
pAir[]+= newp ; Point(newp) = {-RInf, HInf/2, 0, lc2};
c = newc;
Circle(c) = {pAir[1], pAir[0], pAir[2]};
Circle(c+1) = {pAir[2], pAir[0], pAir[3]};
Circle(c+2) = {pAir[3], pAir[0], pAir[4]};
Circle(c+3) = {pAir[4], pAir[0], pAir[1]};
ll = newll; Line Loop(ll) = {c, (c+1), (c+2), (c+3)};
s = news; Plane Surface(s) = {ll};
tmp[] = Extrude {0,-HInf,0}{ Surface{s}; };
SurfAirInf[] = Boundary{ Volume{tmp[1]}; };
airExtSurfLoop = newsl; Surface Loop(airExtSurfLoop) = SurfAirInf[];
Delete { Volume{tmp[1]}; }

airHoleSurfLoop = newsl; Surface Loop(airHoleSurfLoop) = {skin_coil[],cutSkinFeed[]};
airVolume = newv; Volume(airVolume) = {airExtSurfLoop,airHoleSurfLoop};

Physical Volume("Coil", COIL) = vol_coil[];
Physical Volume("Air", AIR) = airVolume;
Physical Surface("SkinCoil", SKIN_COIL) = skin_coil[];
Physical Surface("SkinFeed", SKIN_FEED) = cutSkinFeed[];
Physical Surface("FeedMinus", FEED_MINUS) = feed_minus[];
Physical Surface("FeedPlus", FEED_PLUS) = feed_plus[];
Physical Surface("AirInf", INF) = SurfAirInf[];
