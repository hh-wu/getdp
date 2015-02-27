
Include "lomonova_data.geo";

Solver.AutoShowLastStep = 1;
Mesh.Algorithm = 1;
Geometry.CopyMeshingMethod = 1;

// Mesh characteristic lengths
s = 1 ;
pR1=(rR2-rR1)/6.*s;
pR2=(rR3-rR2)/2*s;
pB1 = pR2/1.5;

pS1=(rS2-rS1)/2*s;
pS2=(rS2-rS1)/2*s;
pS3=(rS3-rS2)/4*s;
pS4=(rS4-rS3)/4*s;

pS5=(rS5-rS4)/4*s;

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

cen = newp ; Point(cen) = {0.,0.,0.,pR1};
nicepos_rotor[] = {};
nicepos_stator[] = {};

Include "lomonova_rotor.geo";
Include "lomonova_stator.geo";


// For nice visualisation...
Hide {
  Point{ Point '*' };
  Line{ Line '*' };
}
Show { Line{ nicepos_rotor[], nicepos_stator[] }; }

Physical Line(NICEPOS) = { nicepos_rotor[], nicepos_stator[] };

