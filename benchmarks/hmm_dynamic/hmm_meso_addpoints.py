#print("Adding points for local computations");

from hmm_initialize import thisMesoComp

proNum = input[0]
pointX = input[1]
pointY = input[2]
pointZ = input[3]

thisMesoComp.addLine2DictOfPointsForLocalComputations(proNum, pointX, pointY, pointZ)
#thisMesoComp.printDictOfPointsForLocalComputations()
