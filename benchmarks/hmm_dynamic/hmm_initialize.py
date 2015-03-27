print("Initializing HMM python");

from hmm_meso_computations import hmm_mesoscale_computations

mesoMeshFile   = "meso.msh"
mesoProFile    = "meso_nlin"
#mesoProFile    = "meso_hyst"
parallel       = True
cellSize       = 50e-6
numPoints      = 16
numOfProcesses = 12
Dir_Meso_Mesh  = "hmm_output/"

# Create the object of type 'hmm_mesoscale_computations' 
thisMesoComp = hmm_mesoscale_computations(cellSize, mesoMeshFile, mesoProFile, parallel, numOfProcesses, Dir_Meso_Mesh)
thisMesoComp.setNumberOfGP(numPoints)
