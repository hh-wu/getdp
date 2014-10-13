#print("Adding points for  HMM python exact");

from hmm_initialize_exact import thisMesoComp

proNum = input[0]
pointX = input[1]
pointY = input[2]
pointZ = input[3]
thisMesoComp.addPoint2Dict(proNum, pointX, pointY, pointZ)
#thisMesoComp.printDictOfPoints()

