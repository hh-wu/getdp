#======================================
from hmm_initialize import thisMesoComp
#======================================
if (input[1] >= 0):
    elenum = input[0]
    GP     = input[1]
    
    ax     = input[2]
    ay     = input[3]
    az     = input[4]
    
    bx     = input[5]
    by     = input[6]
    bz     = input[7]
    
    ex     = input[8]
    ey     = input[9]
    ez     = input[10]

    dt_bx  = input[11]
    dt_by  = input[12]    
    dt_bz  = input[13]
    thisMesoComp.addLine2DictOfDownScaledFields_Dyn_av_ML_Computations(elenum, GP, ax, ay, az, bx, by, bz, ex, ey, ez, dt_bx, dt_by, dt_bz)
else:
    elenum          = input[0]
    MagPotential    = []
    MagInduction    = []
    ElecField       = []
    dt_MagInduction = []
    Dir_Meso_Comp   = "hmm_dyn_meso_comp/"
    a_File          = Dir_Meso_Comp + "a_hmm_macro_cut"    + str(elenum) + ".txt"
    b_File          = Dir_Meso_Comp + "b_hmm_macro_cut"     + str(elenum) + ".txt"
    e_File          = Dir_Meso_Comp + "e_hmm_macro_cut"     + str(elenum) + ".txt"
    dt_b_File       = Dir_Meso_Comp + "dt_b_hmm_macro_cut"  + str(elenum) + ".txt"
    
    fp_MagPot = open(a_File, "r")
    for li in fp_MagPot:
        s = li.strip("\n\r")
        l = s.split(" ")
        MagPotential.append(l)
    fp_MagPot.close()
        
    fp_MagIndu = open(b_File, "r")
    for li in fp_MagIndu:
        s = li.strip("\n\r")
        l = s.split(" ")
        MagInduction.append(l)
    fp_MagIndu.close()

    fp_ElecField = open(e_File, "r")
    for li in fp_ElecField:
        s = li.strip("\n\r")
        l = s.split(" ")
        ElecField.append(l)
    fp_ElecField.close()
    
    fp_dt_MagIndu = open(dt_b_File, "r")
    for li in fp_dt_MagIndu:
        s = li.strip("\n\r")
        l = s.split(" ")
        dt_MagInduction.append(l)
    fp_dt_MagIndu.close()
        
    pointX = MagPotential[0][3]
    pointY = MagPotential[0][4]

    ax     = MagPotential[0][12]
    ay     = MagPotential[0][13]
    az     = MagPotential[0][14]
    bx     = MagInduction[0][12]
    by     = MagInduction[0][13]
    bz     = MagInduction[0][14]
    ex     = ElecField[0][12]
    ey     = ElecField[0][13]
    ez     = ElecField[0][14]
    dt_bx  = dt_MagInduction[0][12]
    dt_by  = dt_MagInduction[0][13]
    dt_bz  = dt_MagInduction[0][14]
    currentTime = thisMesoComp.getCurrentTime()
    currentTimeStep = thisMesoComp.getCurrentTimeStep()
    #thisMesoComp.addLine2DictOfDownScaledFields_Dyn_LocalComp_av_formulation(elenum, ax, ay, az, bx, by, bz, ex, ey, ez, dt_bx, dt_by, dt_bz)
    thisMesoComp.addLine2DictOfDownScaledFields_Dyn_av_LocalComputations(elenum, ax, ay, az, bx, by, bz, ex, ey, ez, dt_bx, dt_by, dt_bz)
    thisMesoComp.printDictOfDownScaledFieldsForLocalComputations()
