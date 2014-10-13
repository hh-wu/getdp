#===========================================================
from hmm_initialize_exact import thisMesoComp
#===========================================================

key = input[0]

MagPotential = []
MagInduction = []

az_File      = "hmm_meso_res/az_hmm_exact_cut_" + str(key) + ".txt"
b_File       = "hmm_meso_res/b_hmm_exact_cut_"  + str(key) + ".txt"

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

pointX   = MagPotential[0][3]
pointY   = MagPotential[0][4]

az_exact = MagPotential[0][12]
bx_exact = MagInduction[0][12]
by_exact = MagInduction[0][13]

thisMesoComp.addPoint2DictOfDownScaledFields(input[0], 0.0, az_exact, bx_exact, by_exact)
#thisMesoComp.printDictOfDownScaledFields()
