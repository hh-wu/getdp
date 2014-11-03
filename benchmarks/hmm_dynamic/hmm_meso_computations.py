import os
import subprocess

# class used for mesoscale computations
#======================================

class hmm_mesoscale_computations:
    def __init__(self, cellSize = 0.0, mesoMeshFile = "", mesoProFile = "", isParallel = False, numOfProcesses = 1):
        self.CellSize                         = cellSize
        self.MesoMeshFile                     = mesoMeshFile
        self.MesoProFile                      = mesoProFile
        self.isParallel                       = isParallel
        self.CurrentTime                      = 0.0
        self.CurrentTimeStep                  = 1
        self.numOfProcesses                   = numOfProcesses

        self.NbOfPoints_LocalComp             = 0
        self.DictOfPoints_LocalComp           = {}
        self.DictOfDownScaledFields_LocalComp = {}
        self.DictOfDownScaledFields_MacroComp = {} 

    def setCellSize(self, cellSize):
        self.CellSize = cellSize

    def getCellSize(self):
        return self.CellSize

    def setMesoMeshFile(self, mesoMeshFile):
        self.MesoMeshFile = mesoMeshFile

    def getMesoMeshFile(self):
        return self.MesoMeshFile

    def setMesoProFile(self, mesoProFile):
        self.MesoProFile = mesoProFile

    def setMesoProFile(self):
        return self.MesoProFile

    def setParallel(self, isParallel):
        self.isParallel = isParallel

    def getParallel(self):
        return self.isParallel

    def setCurrentTime(self, currentTime):
        self.CurrentTime = currentTime

    def getCurrentTime(self):
        return self.CurrentTime

    def setCurrentTimeStep(self, currentTimeStep):
        self.CurrentTimeStep = currentTimeStep

    def getCurrentTimeStep(self):
        return self.CurrentTimeStep

    def setNumOfProcesses(self, numOfProcesses):
        self.numOfProcesses = numOfProcesses

    def getNumOfProcesses(self,):
        return self.numOfProcesses
       
    def addPoint2DictOfPoints_LocalComp(self, elenum, pointX, pointY, pointZ):
        key = elenum
        self.DictOfPoints_LocalComp[key] = [pointX, pointY, pointZ]

    def getPosition_X(self, elenum):
        return self.DictOfPoints_LocalComp[elenum][0]

    def getPosition_Y(self, elenum):
        return self.DictOfPoints_LocalComp[elenum][1]

    def getPosition_Z(self, elenum):
        return self.DictOfPoints_LocalComp[elenum][2]

    def printDictOfPoints_LocalComp(self):
        keys = self.DictOfPoints_LocalComp.keys()
        keys.sort()
        for k in keys:
            print k, ":", self.DictOfPoints_LocalComp[k] 

    def addPoint2DictOfDownScaledFields_LocalComp_Sta(self, elenum, az_exact, bx_exact, by_exact):
        key = (elenum)
        self.DictOfDownScaledFields_LocalComp[key] = [az_exact, bx_exact, by_exact]

    def addPoint2DictOfDownScaledFields_MacroComp_Sta(self, elenum, GaussPoint, az_exact, bx_exact, by_exact):
        key = (elenum, GaussPoint)
        self.DictOfDownScaledFields_LocalComp[key] = [az_exact, bx_exact, by_exact]

    def addPoint2DictOfDownScaledFields_LocalComp_Dyn(self, elenum, az_exact, bx_exact, by_exact, dt_bx_exact, dt_by_exact, ex_exact = 0.0, ey_exact = 0.0):
        key = (elenum)
        self.DictOfDownScaledFields_LocalComp[key] = [az_exact, bx_exact, by_exact, dt_bx_exact, dt_by_exact, ex_exact, ey_exact]

    def addPoint2DictOfDownScaledFields_MacroComp_Dyn(self, elenum, GaussPoint, az_exact, bx_exact, by_exact, dt_bx_exact, dt_by_exact, ex_exact = 0.0, ey_exact = 0.0):
        key = (elenum, GaussPoint)
        self.DictOfDownScaledFields_LocalComp[key] = [az_exact, bx_exact, by_exact, dt_bx_exact, dt_by_exact, ex_exact, ey_exact]

    def clearDictOfDownScaledFields_LocalComp_Dyn(self):
        self.DictOfDownScaledFields_LocalComp.clear()

    def clearDictOfDownScaledFields_MacroComp_Dyn(self):
        self.DictOfDownScaledFields_MacroComp.clear()

    def printDictOfDownScaledFields_LocalComp(self):
        keys = self.DictOfDownScaledFields_LocalComp.keys()
        keys.sort()
        for k in keys:
            print k, ":", self.DictOfDownScaledFields_LocalComp[k] 

    def setNumberOfGP(self, numberOfGP):
        self.NumberOfGP = numberOfGP

    def getNumberOfGP(self):
        return self.NumberOfGP


    def generateMeshForExactFields(self):
        keys = self.DictOfPoints_LocalComp.keys()
        keys.sort()
        print "Start meshing mesoscale domains used for local cuts..."
        for key in keys:
            Position_X = self.DictOfPoints_LocalComp[key][0]
            Position_Y = self.DictOfPoints_LocalComp[key][1]
            Position_Z = self.DictOfPoints_LocalComp[key][2]
            fp = open("hmm_meso_geometry_exact.dat", "w")
            s += "Elenum     = "  + str(key)             + "; \n" 
            s += "Position_X = "  + str(Position_X)      + "; \n"
            s += "Position_Y = "  + str(Position_Y)      + "; \n"
            s += "Position_Z = "  + str(Position_Z)      + ";"
            fp.write(s)
            fp.close()
            args = "../../../gmsh/bin/gmsh -v 0 meso.geo -3 -o hmm_meso_mesh/meso_" + str(key) + ".msh"
            os.system(args)
        #fp = open("hmm_meso_geometry_exact.dat", "w")
        #s  = "Flag_Exact = "  + str(0) + "; \n" 
        #fp.write(s)
        #fp.close()
        print "End meshing mesoscale domains used for local cuts..." 

    def computeMesoFieldsForPointsOfDict_LocalComp_Sta(self):
        keys = self.DictOfDownScaledFields_LocalComp.keys()
        keys.sort()
        proc = {}
        parallel = False 
        #localCuts = ""
        #for i in range(1, self.NumberOfGP):
        #    localCuts = localCuts + " local_cuts_" + str(i) + " "
        #print "Start doing exact mesoscale computations..."

        integer   = (len(keys))//(self.numOfProcesses)
        remainder = (len(keys))%(self.numOfProcesses)
        
        if (remainder == 0):
            iterations = integer
        else:
            iterations = integer

        for iP in range(0,iterations):
            lower_bound = iP*self.numOfProcesses
            upper_bound = 0
            if (iP == (iterations-1)):
                upper_bound = len(keys)-1
            else:
                upper_bound = (iP+1)*self.numOfProcesses
            for key in keys[lower_bound : upper_bound]:
                args = ["../../bin/getdp", "meso.pro", "-v", "0", 
                        "-msh", "hmm_meso_mesh/meso_" + str(key[0]) + ".msh",
                        "-solve", "a_NR", 
                        "-pos", "map_field_1", 
                        "local_cuts_13", "local_cuts_14", "local_cuts_15", "local_cuts_16",               
                        "-setnumber", "AZ", str(self.DictOfDownScaledFields_LocalComp[key][0]),
                        "-setnumber", "BX", str(self.DictOfDownScaledFields_LocalComp[key][1]),
                        "-setnumber", "BY", str(self.DictOfDownScaledFields_LocalComp[key][2]),
                        "-setnumber", "ELENUM", str(key[0]),
                        "-setnumber", "QPINDEX", str(key[1])]
                
                if parallel:
                    proc[key] = subprocess.Popen(args)
                else:
                    proc[key] = subprocess.call(args)
                    
            if parallel:
                for key in keys[lower_bound : upper_bound]:
                    proc[key].wait()
        print "End doing exact mesoscale computations..." 

    def computeMesoFieldsForPointsOfDict_LocalComp_Dyn(self):
        keys = self.DictOfDownScaledFields_LocalComp.keys()
        keys.sort()
        proc = {}
        parallel = False

        print "... Start doing exact mesoscale computations for the dynamic problem ..."

        print '... Done solving for exact mesoscale problems. There are ' + str(self.getNumOfProcesses()) + ' threads running in parallel for mesoscale problems ...'

        integer   = (len(keys))//(self.numOfProcesses)
        remainder = (len(keys))%(self.numOfProcesses)        

        if (remainder == 0):
            iterations = integer
        else:
            iterations = integer + 1

        for iP in range(0,iterations):
            lower_bound = iP*self.numOfProcesses
            upper_bound = 0
            if (iP == (iterations-1)):
                upper_bound = len(keys)
            else:
                upper_bound = ((iP+1)*self.numOfProcesses)

            for key in keys[lower_bound : upper_bound]:

                print '... Start solving for the mesoscale problems numbered ' + str(key)                
                print '... Lower bound is ' + str(lower_bound) + ' and upper bound is ' + str(upper_bound)                 

                args = ["../../bin/getdp", "meso_dyn", "-v", "2", 
                        "-msh", "hmm_meso_mesh/meso_" + str(key) + ".msh",
                        "-solve", "a_NR", 
                        "-pos", "map_field_1", "-v2",              
                        "-setnumber", "AZ", str(self.DictOfDownScaledFields_LocalComp[key][0]),
                        "-setnumber", "BX", str(self.DictOfDownScaledFields_LocalComp[key][1]),
                        "-setnumber", "BY", str(self.DictOfDownScaledFields_LocalComp[key][2]),
                        "-setnumber", "dt_BX", str(self.DictOfDownScaledFields_LocalComp[key][3]),
                        "-setnumber", "dt_BY", str(self.DictOfDownScaledFields_LocalComp[key][4]),
                        "-setnumber", "currentTime", str(self.CurrentTime),
                        "-setnumber", "currentTimeStep", str(self.CurrentTimeStep),
                        "-setnumber", "ELENUM", str(key),
                        "-setnumber", "Position_X", str(self.getPosition_X(key)),
                        "-setnumber", "Position_Y", str(self.getPosition_Y(key)),
                        "-setnumber", "Position_Z", str(self.getPosition_Z(key))]

                if parallel:
                    proc[key] = subprocess.Popen(args)
                else:
                    proc[key] = subprocess.call(args)
                print '... End solving for the mesoscale problems numbered ' + str(key)                

                
            if parallel:
                for key in keys[lower_bound : upper_bound]:
                    proc[key].wait()
        print "... End doing exact mesoscale computations..." 


