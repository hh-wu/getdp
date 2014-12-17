print("Done meshing geometries for mesoscale problems");

from hmm_initialize import thisMesoComp
verbosity = input[0]
thisMesoComp.generateMeshForExactFields(verbosity)
