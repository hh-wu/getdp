print("Done meshing geometries for mesoscale problems");

from hmm_initialize_exact import thisMesoComp

#thisMesoComp.printDictOfPoints()
thisMesoComp.generateMeshForExactFields()

