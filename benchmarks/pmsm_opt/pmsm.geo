Include "pmsm_data.geo";

s = lc;
pR1 = (rR2-rR1)/10*s;
pR2 = 0.5*Gap*s;
pS1 = 0.5*Gap*s;
pS2 = (rS7-rS1)/12.*s;
pS3 = (rS6-rS3)/10.*s;

cen = newp ; Point(cen) = { 0, 0, 0, pR1 };
nicepos_rotor[] = {};
nicepos_stator[] = {};

Include "pmsm_rotor.geo";
Include "pmsm_stator.geo";

Geometry.AutoCoherence = 1;

Geometry.OldNewReg = 1; 

Hide { Point{ Point '*' }; }
Hide { Line{ Line '*' }; }
Show { Line{ nicepos_rotor[], nicepos_stator[] }; }

Physical Line(NICEPOS) = { nicepos_rotor[], nicepos_stator[] };


