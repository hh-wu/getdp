
For k In {0:3}
 pntRotor1[]+=newp;
 Point(newp) = { r1*Cos(k*Pi/2),  r1*Sin(k*Pi/2), 0.,lr1};
 pntRotor2[]+=newp;
 Point(newp) = { r2*Cos(k*Pi/2),  r2*Sin(k*Pi/2), 0.,lr2};
 pntmb0[]+=newp;
 Point(newp) = { rmb0*Cos(k*Pi/2),  rmb0*Sin(k*Pi/2), 0.,lr2};
EndFor

For k In {0:3}
  crotor1[] += newl;
  Circle(newl) = {pntRotor1[k], cen, pntRotor1[(k==3) ? 0 : k+1]};
  crotor2[] += newl ;
  Circle(newl) = {pntRotor2[k], cen, pntRotor2[(k==3) ? 0 : k+1]};
  cmb0[] += newl;
  Circle(newl) = {pntmb0[k], cen, pntmb0[(k==3) ? 0 : k+1]};
EndFor

llrotor1   = newll ; Line Loop (newll) = crotor1[];
llrotor2   = newll ; Line Loop (newll) = crotor2[];
llrotorAir = newll ; Line Loop (newll) = cmb0[];

srotorFe  = news ; Plane Surface(srotorFe) = llrotor1;
srotorAl  = news ; Plane Surface(srotorAl) = {llrotor2,llrotor1};
srotorAir = news ; Plane Surface(srotorAir) = {llrotorAir,llrotor2};

// ---------------------------------------------------
// Physical Regions
// ---------------------------------------------------

Physical Surface(ROTOR_FE)  = srotorFe;
Physical Surface(ROTOR_AL)  = srotorAl;
Physical Surface(ROTOR_AIRGAP) = srotorAir;
Physical Line(ROTOR_BND_MOVING_BAND) = cmb0[];


Color Cyan { Surface{srotorAir}; }
Color NavyBlue { Surface{srotorFe}; }
Color Orchid { Surface{srotorAl}; }

linRotor[]  = Boundary{Surface{srotorFe,srotorAl};};
nicepos_rotor[] += { linRotor[] };
