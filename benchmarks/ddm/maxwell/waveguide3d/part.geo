Merge "waveguide3d_simple.msh";
Include "params.geo";

Plugin(SimplePartition).NumSlices = N_DOM;
// Plugin(SimplePartition).Mapping = "1.5*(t-1/2)^3 + 5/8*(t-1/2) +1/2";
Plugin(SimplePartition).Mapping = "t-1e-6";
Plugin(SimplePartition).Run;

Mesh.MshFilePartitioned = 2; // hack to save a physical for each partition

Save "waveguide3d_mshcut.msh";
