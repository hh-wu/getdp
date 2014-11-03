#print("Adding points for  HMM python exact");

from hmm_initialize_exact_dyn import thisMesoComp

proNum = input[0]
pointX = input[1]
pointY = input[2]
pointZ = input[3]
thisMesoComp.addPoint2DictOfPoints_LocalComp(proNum, pointX, pointY, pointZ)
print '........... done in hmm_meso_addpoints.py. There are ' + str(thisMesoComp.getNumOfProcesses()) + " threads."
#thisMesoComp.printDictOfPoints()

