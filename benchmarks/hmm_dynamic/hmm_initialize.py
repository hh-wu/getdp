print("Initializing HMM python");

from hmm_meso_computations import hmm_mesoscale_computations

mesoMeshFile   = "meso.geo"
mesoProFile    = "meso_dyn.pro"
parallel       = True
cellSize       = 50e-6
numPoints      = 16
numOfProcesses = 12

# Create the object of type 'hmm_mesoscale_computations' 
thisMesoComp = hmm_mesoscale_computations(cellSize, mesoMeshFile, mesoProFile, parallel, numOfProcesses)
thisMesoComp.setNumberOfGP(numPoints)
