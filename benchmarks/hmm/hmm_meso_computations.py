import os
import subprocess

# class used for mesoscale computations
#======================================

class hmm_mesoscale_computations:
    def __init__(self, cellSize = 0.0, mesoMeshFile = "", mesoProFile = "", parallel = False, flag_Exact = 1):
        self.CellSize               = cellSize
        self.DictOfPoints           = {}
        self.DictOfDownScaledFields = {}
        self.NumberOfGP             = 0
        self.MesoMeshFile           = mesoMeshFile
        self.MesoProFile            = mesoProFile
        self.Parallel               = parallel
        self.Flag_Exact             = flag_Exact

    def setCellSize(self, cellSize):
        self.CellSize = cellSize

    def getCellSize(self):
        return self.CellSize

    def addPoint2Dict(self, elenum, pointX, pointY, pointZ):
        key = elenum
        self.DictOfPoints[key] = [pointX, pointY, pointZ]

    def printDictOfPoints(self):
        keys = self.DictOfPoints.keys()
        keys.sort()
        for k in keys:
            print k, ":", self.DictOfPoints[k] 

    def addPoint2DictOfDownScaledFields(self, elenum, time, az_exact, bx_exact, by_exact):
        key = (elenum, time)
        self.DictOfDownScaledFields[key] = [az_exact, bx_exact, by_exact]

    def printDictOfDownScaledFields(self):
        keys = self.DictOfDownScaledFields.keys()
        keys.sort()
        for k in keys:
            print k, ":", self.DictOfDownScaledFields[k] 

    def setNumberOfGP(self, numberOfGP):
        self.NumberOfGP = numberOfGP

    def getNumberOfGP(self):
        return self.NumberOfGP

    def setMesoMeshFile(self, mesoMeshFile):
        self.MesoMeshFile = mesoMeshFile

    def setMesoProFile(self, mesoProFile):
        self.MesoProFile = mesoProFile

    def setParallel(self, parallel):
        self.Parallel = parallel

    def getParallel(self):
        return self.Parallel

    def generateMeshForExactFields(self):
        keys = self.DictOfPoints.keys()
        keys.sort()
        print "Start meshing mesoscale domains used for local cuts..."
        for key in keys:
            Position_X = self.DictOfPoints[key][0]
            Position_Y = self.DictOfPoints[key][1]
            Position_Z = self.DictOfPoints[key][2]
            fp = open("hmm_meso_geometry_exact.dat", "w")
            s  = "Flag_Exact = "  + str(self.Flag_Exact) + "; \n" 
            s += "Elenum     = "  + str(key)             + "; \n" 
            s += "Position_X = "  + str(Position_X)      + "; \n"
            s += "Position_Y = "  + str(Position_Y)      + "; \n"
            s += "Position_Z = "  + str(Position_Z)      + ";"
            fp.write(s)
            fp.close()
            args = "../../../gmsh/build/gmsh -v 0 meso.geo -3 -o hmm_meso_mesh/meso_" + str(key) + ".msh"
            os.system(args)
        #fp = open("hmm_meso_geometry_exact.dat", "w")
        #s  = "Flag_Exact = "  + str(0) + "; \n" 
        #fp.write(s)
        #fp.close()
        print "End meshing mesoscale domains used for local cuts..." 

    def computeMesoFieldsForPointsOfDict(self):
        keys = self.DictOfDownScaledFields.keys()
        keys.sort()
        proc = {}
        parallel = True 
        localCuts = ""
        for i in range(1, self.NumberOfGP):
            localCuts = localCuts + " local_cuts_" + str(i) + " "
        print "Start doing exact mesoscale computations..."
        for key in keys:
            args = ["../../bin/getdp", "meso.pro", "-v", "0", 
                    "-msh", "hmm_meso_mesh/meso_" + str(key[0]) + ".msh",
                    "-solve", "a_NR", 
                    "-pos", "map_field_1", 
                    "local_cuts_1", "local_cuts_2", "local_cuts_3", "local_cuts_4",               
#                    "local_cuts_5", "local_cuts_6", "local_cuts_7", "local_cuts_8", 
#                    "local_cuts_9", "local_cuts_10", "local_cuts_11", "local_cuts_12", 
                    "local_cuts_13", "local_cuts_14", "local_cuts_15", "local_cuts_16",               
                    "-setnumber", "AZ", str(self.DictOfDownScaledFields[key][0]),
                    "-setnumber", "BX", str(self.DictOfDownScaledFields[key][1]),
                    "-setnumber", "BY", str(self.DictOfDownScaledFields[key][2]),
                    "-setnumber", "ELENUM", str(key[0])]

            if parallel:
                proc[key] = subprocess.Popen(args)
            else:
                proc[key] = subprocess.call(args)
                
        if parallel:
            for key in keys:
                proc[key].wait()
        print "End doing exact mesoscale computations..." 
