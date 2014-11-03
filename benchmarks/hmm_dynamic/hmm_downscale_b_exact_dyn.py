#===========================================================
from hmm_initialize_exact_dyn import thisMesoComp
#===========================================================

key = input[0]

MagPotential    = []
MagInduction    = []
dt_MagInduction = []

Dir_Meso_Comp = "hmm_dyn_meso_comp/"

az_File      = Dir_Meso_Comp + "az_hmm_macro_cut"    + str(key) + ".txt"
b_File       = Dir_Meso_Comp + "b_hmm_macro_cut"     + str(key) + ".txt"
dt_b_File    = Dir_Meso_Comp + "dt_b_hmm_macro_cut"  + str(key) + ".txt"

fp_MagPot = open(az_File, "r")
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

fp_dt_MagIndu = open(dt_b_File, "r")
for li in fp_dt_MagIndu:
    s = li.strip("\n\r")
    l = s.split(" ")
    dt_MagInduction.append(l)
fp_dt_MagIndu.close()

pointX      = MagPotential[0][3]
pointY      = MagPotential[0][4]

az_exact    = MagPotential[0][12]
bx_exact    = MagInduction[0][12]
by_exact    = MagInduction[0][13]
dt_bx_exact = dt_MagInduction[0][12]
dt_by_exact = dt_MagInduction[0][13]

currentTime = thisMesoComp.getCurrentTime()
currentTimeStep = thisMesoComp.getCurrentTimeStep()

#print 'Komeraaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa'
#print 'az = ' + str(az_exact) + ', bx = ' + str(bx_exact) +', by = ' + str(by_exact) +', dt_bx = ' + str(dt_bx_exact) +', dt_by = ' + str(dt_by_exact) + '.'
#print 'Komeraaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa'

thisMesoComp.addPoint2DictOfDownScaledFields_LocalComp_Dyn(input[0], az_exact, bx_exact, by_exact, dt_bx_exact, dt_by_exact)
#thisMesoComp.printDictOfDownScaledFields()
