DefineConstant[
  Model3D = {0, Choices{0="2D model", 1="Multi-slice", 2="3D model"},
    Name "Input/Geometry/Model dimension"},
  NumSlices = {1,
    Name "Input/Geometry/Number of slices", Visible Model3D},
  NumLayers = {3,
    Name "Input/Geometry/Number of elements in a slice", Visible Model3D}
  SlicePhysOffset = 1000000,
  SliceZOffset = 0.01 // FIXME
];

If(Model3D == 1)
  If(NumSlices > 1)
    ps[] = Physical Surface "*";
    For s In {0:#ps[]-1}
      For slice In {1:NumSlices-1}
        name = StrCat( Physical Surface{ps[s]} , Sprintf(" (slice %g)", slice) );
        Physical Surface(Str(name), ps[s] + SlicePhysOffset * slice) = {
          Translate {0, 0, SliceZOffset * slice} {
            Duplicata { Surface{ Physical Surface{ps[s]} }; }
          }
        };
      EndFor
    EndFor
    pl[] = Physical Line "*";
    For l In {0:#pl[]-1}
      For slice In {1:NumSlices-1}
        name = StrCat( Physical Line{pl[l]} , Sprintf(" (slice %g)", slice) );
        Physical Line(Str(name), pl[l] + SlicePhysOffset * slice) = {
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
      name = StrCat( Physical Surface{ps~{0}[s]}, Sprintf(" (slice %g)", slice) );
      Physical Volume(pv~{slice}[s]) = {};
      Physical Surface(ps~{slice}[s]) = {};
      For e In {0:#ele[]-1}
        p[] = Extrude{0,0,SliceZOffset}{
          Surface{ ele[e] }; Recombine; Layers{NumLayers};
        };
        Physical Volume(Str(name), pv~{slice}[s]) += p[1];
        Physical Surface(Str(name), ps~{slice}[s]) += p[0];
      EndFor
    EndFor
    For l In {0:#pl~{0}[]-1}
      psl~{slice}[] += pl~{slice-1}[l] + SlicePhysOffset * slice;
      pl~{slice}[] += pl~{slice-1}[l] + 2*SlicePhysOffset * slice;
      ele[] = Physical Line{pl~{slice-1}[l]};
      name = StrCat( Physical Line{pl~{0}[l]}, Sprintf(" (slice %g)", slice) );
      Physical Surface(psl~{slice}[l]) = {};
      Physical Line(pl~{slice}[l]) = {};
      For e In {0:#ele[]-1}
        p[] = Extrude{0,0,SliceZOffset}{
          Line{ ele[e] }; Recombine; Layers{NumLayers};
        };
        Physical Surface(Str(name), psl~{slice}[l]) += p[1];
        Physical Line(Str(name), pl~{slice}[l]) += p[0];
      EndFor
    EndFor
  EndFor
  Geometry.AutoCoherence = 1;
  Coherence;
EndIf
