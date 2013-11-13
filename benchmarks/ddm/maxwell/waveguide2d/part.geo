Merge "waveguide2d.msh";
Include "params.geo";

Plugin(SimplePartition).NumSlices = N_DOM;
Plugin(SimplePartition).Mapping = "t-1e-6";
Plugin(SimplePartition).Run;

Mesh.MshFilePartitioned = 2; // hack to save a physical for each partition

Save "waveguide2d_mshcut.msh";
