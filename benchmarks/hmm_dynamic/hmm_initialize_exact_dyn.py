print("Initializing HMM python exact");

from hmm_meso_computations import hmm_mesoscale_computations

#cellSize     = input[0]
#numPoints    = input[1]
mesoMeshFile  = "meso.geo"
mesoProFile   = "meso_dyn.pro"
parallel      = True
flag_exact    = 1
cellSize      = 50e-6
numPoints     = 16
numOfProcesses = 3

thisMesoComp = hmm_mesoscale_computations(cellSize, mesoMeshFile, mesoProFile, parallel, numOfProcesses)
print 'there are ' + str(thisMesoComp.getNumOfProcesses()) + ' threads for the exact mesoscale problems.'
thisMesoComp.setNumberOfGP(numPoints)
