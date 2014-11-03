print("Done meshing geometries for mesoscale problems");

from hmm_initialize_exact_dyn import thisMesoComp

#thisMesoComp.printDictOfPoints()
thisMesoComp.generateMeshForExactFields()

