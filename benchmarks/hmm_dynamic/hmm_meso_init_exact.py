#
from hmm_meso_computations import hmm_mesoscale_computations

thisMesoComp = hmm_mesoscale_computations()
thisMesoComp.setCellSize(50e-6)

#pointNum = input[0]
#pointX   = input[1]
#pointY   = input[2]

thisMesoComp.addPointToDict(11, 0.5 * 50e-6, 0.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(12, 0.5 * 50e-6, 3.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(13, 0.5 * 50e-6, 6.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(14, 0.5 * 50e-6, 9.5 * 50e-6, 0.0)

thisMesoComp.addPointToDict(21, 3.5 * 50e-6, 0.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(22, 3.5 * 50e-6, 3.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(23, 3.5 * 50e-6, 6.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(24, 3.5 * 50e-6, 9.5 * 50e-6, 0.0)

thisMesoComp.addPointToDict(31, 6.5 * 50e-6, 0.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(32, 6.5 * 50e-6, 3.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(33, 6.5 * 50e-6, 6.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(34, 6.5 * 50e-6, 9.5 * 50e-6, 0.0)

thisMesoComp.addPointToDict(41, 9.5 * 50e-6, 0.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(42, 9.5 * 50e-6, 3.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(43, 9.5 * 50e-6, 6.5 * 50e-6, 0.0)
thisMesoComp.addPointToDict(44, 9.5 * 50e-6, 9.5 * 50e-6, 0.0)

#thisMesoComp.printDictOfPoints()

thisMesoComp.mesoForDictOfPoints()
