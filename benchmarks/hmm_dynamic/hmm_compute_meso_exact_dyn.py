import subprocess
from hmm_initialize_exact_dyn import thisMesoComp

print 'Start computing exact solutions for timestep ' + str(thisMesoComp.getCurrentTimeStep() )
print 'There are ' + str(thisMesoComp.getNumOfProcesses() ) + ' processes running for mesoscale problems'
thisMesoComp.computeMesoFieldsForPointsOfDict_LocalComp_Dyn()
print 'End computing exact solutions for timestep ' + str(thisMesoComp.getCurrentTimeStep() ) 
