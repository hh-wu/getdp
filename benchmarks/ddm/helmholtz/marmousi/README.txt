* unpack the archive: tar -xzf marmousi.tar.gz
* select the decomposition axis (SPLIT_V or SPLIT_H) in params.geo
* generate the partitioned meshes: gmsh marmousi_split.geo -bin -
* compute full or DDM solutions: getdp marmousi.pro -sol Full -v 3 -bin or mpirun -np {N_DOM} getdp marmousi.pro -sol DDM -v 3 -bin
