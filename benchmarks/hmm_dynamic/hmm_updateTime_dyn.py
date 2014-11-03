from hmm_initialize_exact_dyn import thisMesoComp

# Clearing the dictionary of downscaled quantities for each timestep
#===================================================================
thisMesoComp.clearDictOfDownScaledFields_LocalComp_Dyn()

# Updating the time and timestep
#===============================
currentTime     = input[0]
currentTimeStep = input[1]
thisMesoComp.setCurrentTime(currentTime)
thisMesoComp.setCurrentTimeStep(currentTimeStep)
#thisMesoComp.printDictOfPoints()
