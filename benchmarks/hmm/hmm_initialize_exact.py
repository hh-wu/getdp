print("Initializing HMM python exact");

from hmm_meso_computations import hmm_mesoscale_computations

#cellSize     = input[0]
#numPoints    = input[1]
mesoMeshFile = "meso.geo"
mesoProFile  = "meso.pro"
parallel     = False
flag_exact   = 1
cellSize     = 50e-6
numPoints    = 16

thisMesoComp = hmm_mesoscale_computations(cellSize, mesoMeshFile, mesoProFile, parallel, flag_exact)
thisMesoComp.setNumberOfGP(numPoints)
