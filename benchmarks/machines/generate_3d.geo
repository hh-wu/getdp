DefineConstant[
  Model3D = {0, Choices{0="2D model", 1="Multi-slice", 2="3D model"},
    Name "Input/Geometry/Model dimension"},
  NumSlices = {1,
    Name "Input/Geometry/Number of slices", Visible Model3D},
  SlicePhysOffset = 1000000,
  SliceZOffset = 0.01 // FIXME
];

If(Model3D == 1)
  If(NumSlices > 1)
    ps[] = Physical Surface "*";
    For s In {0:#ps[]-1}
      For slice In {1:NumSlices-1}
        Physical Surface(ps[s] + SlicePhysOffset * slice) = {
          Translate {0, 0, SliceZOffset * slice} {
            Duplicata { Surface{ Physical Surface{ps[s]} }; }
          }
        };
      EndFor
    EndFor
    pl[] = Physical Line "*";
    For l In {0:#pl[]-1}
      For slice In {1:NumSlices-1}
        Physical Line(pl[l] + SlicePhysOffset * slice) = {
          Translate {0, 0, SliceZOffset * slice} {
            Duplicata { Line{ Physical Line{pl[l]} }; }
          }
        };
      EndFor
    EndFor
  EndIf
ElseIf(Model3D == 2)
  Geometry.AutoCoherence = 0;
  ps~{0}[] = Physical Surface "*";
  pl~{0}[] = Physical Line "*";
  For slice In{1:NumSlices}
    For s In {0:#ps~{0}[]-1}
      pv~{slice}[] += ps~{slice-1}[s] + SlicePhysOffset * slice;
      ps~{slice}[] += ps~{slice-1}[s] + 2*SlicePhysOffset * slice;
      ele[] = Physical Surface{ps~{slice-1}[s]};
      Physical Volume(pv~{slice}[s]) = {};
      Physical Surface(ps~{slice}[s]) = {};
      For e In {0:#ele[]-1}
        p[] = Extrude{0,0,SliceZOffset}{
          Surface{ ele[e] }; Recombine; Layers{3};
        };
        Physical Volume(pv~{slice}[s]) += p[1];
        Physical Surface(ps~{slice}[s]) += p[0];
      EndFor
    EndFor
    For l In {0:#pl~{0}[]-1}
      psl~{slice}[] += pl~{slice-1}[l] + SlicePhysOffset * slice;
      pl~{slice}[] += pl~{slice-1}[l] + 2*SlicePhysOffset * slice;
      ele[] = Physical Line{pl~{slice-1}[l]};
      Physical Surface(psl~{slice}[l]) = {};
      Physical Line(pl~{slice}[l]) = {};
      For e In {0:#ele[]-1}
        p[] = Extrude{0,0,SliceZOffset}{
          Line{ ele[e] }; Recombine; Layers{3};
        };
        Physical Surface(psl~{slice}[l]) += p[1];
        Physical Line(pl~{slice}[l]) += p[0];
      EndFor
    EndFor
  EndFor
  Geometry.AutoCoherence = 1;
  Coherence;
EndIf
