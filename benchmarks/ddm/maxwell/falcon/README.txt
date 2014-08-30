// for the full falcon(s)

gmsh fullfalcon_surface.script -   // generates remeshed falcon boundary mesh(es)
gmsh fullfalcon_reorient.script - // fixes orientation of normals
gmsh fullfalcon_volume.script -    // generates volume mesh in box around falcon(s)
gmsh partition.script -  // partitions the mesh and saves using new physicals
gmsh fullfalcon_split.script - // splits the partitionned mesh into separate files

getdp falcon -v 3 -bin -v2 -solve DDM

// for the symmetric falcon: THIS HAS NOT BEEN TESTED YET!

gmsh falcon_surface.script -   // generates remeshed falcon boundary mesh(es)
gmsh falcon_volume.script -    // generates volume mesh in box around falcon(s)
gmsh partition.script -  // partitions the mesh and saves using new physicals
gmsh falcon_split.script - // splits the partitionned mesh into separate files

