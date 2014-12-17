from hmm_initialize import thisMesoComp

# Clearing the dictionary of downscaled quantities for each timestep
#===================================================================
thisMesoComp.clearDictOfDownScaledFieldsForLocalComputations()

# Updating the time and timestep
#===============================
currentTime     = input[0]
currentTimeStep = input[1]
thisMesoComp.setCurrentTime(currentTime)
thisMesoComp.setCurrentTimeStep(currentTimeStep)
