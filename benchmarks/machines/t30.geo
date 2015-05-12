Include "t30_data.geo" ;

Solver.AutoShowLastStep = 1;
Mesh.Algorithm = 1 ;

// -------------------------------------------------------
// Some characteristic lengths
//--------------------------------------------------------

lr1 = r1/15 ;
lr2 = r1/45 ;
lr3 = lr2 ;
lr4 = r4/10 ;
lr5 = lr4 ;

lc = lr1 ;

//--------------------------------------------------------

cen = 1;
Point(cen) = {0,0,0,lc};

Include "t30_rotor.geo";
Include "t30_stator.geo";


Hide { Point{ Point '*' }; }
Hide { Line{ Line '*' }; }
Show { Line{ nicepos_rotor[], nicepos_stator[] }; }

//For post-processing...
//View[0].Light = 0;
View[0].NbIso = 25; // Number of intervals
View[0].IntervalsType = 1;
