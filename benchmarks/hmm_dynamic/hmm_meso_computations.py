import os
import subprocess

# class used for mesoscale computations
#======================================

GETDP="../../build/getdp"
#GETDP="/Users/Inno/Desktop/src/getdp_inno/bin/getdp"
#GMSH="/Users/Inno/src/gmsh/build/gmsh"
GMSH="gmsh"

#GETDP="/Users/Inno/Desktop/src/getdp_inno/bin/getdp"

#GETDP="../../bin/getdp"
#GMSH="/Applications/Gmsh.app/Contents/MacOS/gmsh"

class hmm_mesoscale_computations:
    def __init__(self, cellSize = 0.0, mesoMeshFile = "", mesoProFile = "", isParallel = False, numOfProcesses = 1, Dir_Meso_Comp = ""):
        self.CellSize                                      = cellSize
        self.MesoMeshFile                                  = mesoMeshFile
        self.MesoProFile                                   = mesoProFile
        self.isParallel                                    = isParallel
        self.CurrentTime                                   = 0.0
        self.CurrentTimeStep                               = 1
        self.numOfProcesses                                = numOfProcesses
        self.Dir_Meso_Comp                                 = Dir_Meso_Comp
        
        self.NbOfPointsForLocalComputations                = 0
        self.DictOfPointsForLocalComputations              = {}
        self.DictOfDownScaledFieldsForLocalComputations    = {}
        self.DictOfDownScaledFieldsForMLComputations       = {}
        self.DictOfHomogenized_ML_GP_Field                 = {} 
        self.DictOfHomogenized_ML_GP_TgTMatrix             = {}
        self.DictOfHomogenized_GQ_GP_JouleLosses           = {}
        self.DictOfHomogenized_GQ_GP_MagneticLosses        = {}
        self.DictOfHomogenized_GQ_GP_MagneticEnergy        = {}
        self.DictOfHomogenized_GQ_GP_TotalEnergy           = {}
        self.DictOfHomogenized_GQ_GP_TotalEnergyDifference = {} 
        
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

    def getNbOfPointsForLocalComputations(self, nbOfPointsForLocalComputations):
        self.NbOfPointsForLocalComputations = nbOfPointsForLocalComputations
        
    def getNbOfPointsForLocalComputations(self):
        return self.NbOfPointsForLocalComputations
    
    def addLine2DictOfPointsForLocalComputations(self, pointNum, pointX, pointY, pointZ):
        key = (pointNum)
        self.DictOfPointsForLocalComputations[key] = [pointX, pointY, pointZ]

    def getPosition_X(self, pointNum):
        return self.DictOfPointsForLocalComputations[pointNum][0]

    def getPosition_Y(self, pointNum):
        return self.DictOfPointsForLocalComputations[pointNum][1]

    def getPosition_Z(self, pointNum):
        return self.DictOfPointsForLocalComputations[pointNum][2]

    def printDictOfPointsForLocalComputations(self):
        keys = self.DictOfPointsForLocalComputations.keys()
        keys.sort()
        for k in keys:
            print k, ":", self.DictOfPointsForLocalComputations[k]

    def printDictOfHomogenized_ML_GP_TgTMatrix(self):
        keys = self.DictOfHomogenized_ML_GP_TgTMatrix.keys()
        keys.sort()
        for k in keys:
            print k, ":", self.DictOfHomogenized_ML_GP_TgTMatrix[k]
            
    def printDictOfHomogenized_GQ_GP_JouleLosses(self):
        keys = self.DictOfHomogenized_GQ_GP_JouleLosses.keys()
        keys.sort()
        print "done printing the map of Joule losses..."
        for k in keys:
            print k, ":", self.DictOfHomogenized_GQ_GP_JouleLosses[k]
        print "finished printing the map of Joule losses."
    def printDictOfHomogenized_GQ_GP_MagneticEnergy(self):
        keys = self.DictOfHomogenized_GQ_GP_MagneticEnergy.keys()
        keys.sort()
        print "done printing the map of magnetic energy..."
        for k in keys:
            print k, ":", self.DictOfHomogenized_GQ_GP_MagneticEnergy[k]
        print "finished printing the map of Joule losses."
            
    def addLine2DictOfDownScaledFields_Dyn_av_ML_Computations(self, elenum, GaussPoint, ax, ay, az, bx, by, bz, ex = 0.0, ey = 0.0, ez = 0.0, dt_bx = 0.0, dt_by = 0.0, dt_bz = 0.0):
        key = (elenum, GaussPoint)
        self.DictOfDownScaledFieldsForMLComputations[key] = [ax, ay, az, bx, by, bz, ex, ey, ez, dt_bx, dt_by, dt_bz]

    def addLine2DictOfDownScaledFields_Dyn_av_LocalComputations(self, pointNum, ax, ay, az, bx, by, bz, ex = 0.0, ey = 0.0, ez = 0.0, dt_bx = 0.0, dt_by = 0.0, dt_bz = 0.0):
        key = (pointNum)
        self.DictOfDownScaledFieldsForLocalComputations[key] = [ax, ay, az, bx, by, bz, ex, ey, ez, dt_bx, dt_by, dt_bz]
        
    def addLine2DictOfHomogenized_ML_GP_Field_Dyn(self, elenum, GP, field_x, field_y, field_z):
        key = (elenum, GP)
        self.DictOfHomogenized_ML_GP_Field[key] = [field_x, field_y, field_z] 

    def addLine2DictOfHomogenized_ML_GP_TgTMatrix_Dyn(self, elenum, GP, Mat_xx, Mat_xy, Mat_xz, Mat_yx, Mat_yy, Mat_yz, Mat_zx, Mat_zy, Mat_zz):
        key = (elenum, GP)
        self.DictOfHomogenized_ML_GP_TgTMatrix[key] = [Mat_xx, Mat_xy, Mat_xz,
                                                       Mat_yx, Mat_yy, Mat_yz,
                                                       Mat_zx, Mat_zy, Mat_zz]

    def addLine2DictOfHomogenized_GQ_GP_JouleLosses_Dyn(self, elenum, GP, JL):
        key = (elenum, GP)
        self.DictOfHomogenized_GQ_GP_JouleLosses[key] = [JL , 0.0, 0.0,
                                                         0.0, 0.0, 0.0,
                                                         0.0, 0.0, 0.0]

    def addLine2DictOfHomogenized_GQ_GP_MagneticLosses_Dyn(self, elenum, GP, ML):
        key = (elenum, GP)
        self.DictOfHomogenized_GQ_GP_MagneticLosses[key] = [ML , 0.0, 0.0,
                                                            0.0, 0.0, 0.0,
                                                            0.0, 0.0, 0.0] 

    def addLine2DictOfHomogenized_GQ_GP_MagneticEnergy_Dyn(self, elenum, GP, ME):
        key = (elenum, GP)
        self.DictOfHomogenized_GQ_GP_MagneticEnergy[key] = [ME , 0.0, 0.0,
                                                            0.0, 0.0, 0.0,
                                                            0.0, 0.0, 0.0] 

    def addLine2DictOfHomogenized_GQ_GP_TotalEnergy_Dyn(self, elenum, GP, TE):
        key = (elenum, GP)
        self.DictOfHomogenized_GQ_GP_TotalEnergy[key] = [TE , 0.0, 0.0,
                                                         0.0, 0.0, 0.0,
                                                         0.0, 0.0, 0.0] 

    def addLine2DictOfHomogenized_GQ_GP_TotalEnergyDifference_Dyn(self, elenum, GP, TED):
        key = (elenum, GP)
        self.DictOfHomogenized_GQ_GP_TotalEnergyDifference[key] = [TED, 0.0, 0.0,
                                                                   0.0, 0.0, 0.0,
                                                                   0.0, 0.0, 0.0] 
        
    def upscale_h(self, elenum, GaussPoint):
        key = (elenum,GaussPoint)
        #print self.DictOfHomogenized_ML_GP_TgTMatrix[key]
        return self.DictOfHomogenized_ML_GP_Field[key]

    def upscale_dhdb(self, elenum, GaussPoint):
        key = (elenum,GaussPoint)
        #print 'done in upscale_dhdb for element ' 
        #print self.DictOfHomogenized_ML_GP_TgTMatrix[key]
        return self.DictOfHomogenized_ML_GP_TgTMatrix[key]

    def upscale_joulelosses(self, elenum, GaussPoint):
        key = (elenum,GaussPoint)
        #print self.DictOfHomogenized_GQ_GP_JouleLosses[key]
        return self.DictOfHomogenized_GQ_GP_JouleLosses[key] 

    def upscale_magneticlosses(self, elenum, GaussPoint):
        key = (elenum,GaussPoint)
        #print self.DictOfHomogenized_GQ_GP_MagneticLosses[key]
        return self.DictOfHomogenized_GQ_GP_MagneticLosses[key]  

    def upscale_magneticenergy(self, elenum, GaussPoint):
        key = (elenum,GaussPoint)
        #print self.DictOfHomogenized_GQ_GP_MagneticEnergy[key]
        return self.DictOfHomogenized_GQ_GP_MagneticEnergy[key]  

    def upscale_totalenergy(self, elenum, GaussPoint):
        key = (elenum,GaussPoint)
        #print self.DictOfHomogenized_GQ_GP_TotalEnergy[key]
        return self.DictOfHomogenized_GQ_GP_TotalEnergy[key]  

    def upscale_totalenergydifference(self, elenum, GaussPoint):
        key = (elenum,GaussPoint)
        #print self.DictOfHomogenized_GQ_GP_TotalEnergyDifference[key]
        return self.DictOfHomogenized_GQ_GP_TotalEnergyDifference[key]  
    
    def clearDictOfDownScaledFieldsForLocalComputations(self):
        self.DictOfDownScaledFieldsForLocalComputations.clear()

    def clearDictOfDownScaledFieldsForMLComputations(self):
        self.DictOfDownScaledFieldsForMLComputations.clear()

    def printDictOfDownScaledFieldsForLocalComputations(self):
        keys = self.DictOfDownScaledFieldsForLocalComputations.keys()
        keys.sort()
        for k in keys:
            print "The vector of downscaled fields for the key ", k, " is ", self.DictOfDownScaledFieldsForLocalComputations[k] 

    def setNumberOfGP(self, numberOfGP):
        self.NumberOfGP = numberOfGP

    def getNumberOfGP(self):
        return self.NumberOfGP


    def generateMeshForExactFields(self, verbosity, Flag_ExactMesoMeshes = False):
        if (Flag_ExactMesoMeshes):
            keys = self.DictOfPointsForLocalComputations.keys()
            keys.sort()
            print "Start meshing mesoscale domains used for local cuts..."
            for key in keys:
                Position_X = self.DictOfPointsForLocalComputations[key][0]
                Position_Y = self.DictOfPointsForLocalComputations[key][1]
                Position_Z = self.DictOfPointsForLocalComputations[key][2]
                s = ""
                fp = open("hmm_meso_geometry.dat", "w")
                s += "FlagComputeML = " + str(1) + "; \n" 
                s += "Elenum   = "  + str(key)             + "; \n" 
                s += "Position_X = "  + str(Position_X)      + "; \n"
                s += "Position_Y = "  + str(Position_Y)      + "; \n"
                s += "Position_Z = "  + str(Position_Z)      + ";"
                fp.write(s)
                fp.close()
                args = GMSH + " -v " + str(verbosity) + " meso.geo -3 -o hmm_meso_mesh/meso_" + str(key) + ".msh"
                os.system(args)
                
        fp = open("hmm_meso_geometry.dat", "w")
        s  = "FlagComputeML = "  + str(0) + "; \n" 
        fp.write(s)
        fp.close()
        args_ML = GMSH + " -v " + str(verbosity) + " meso.geo -3 -o meso.msh"
        os.system(args_ML) 
        print "End meshing mesoscale domains used for local cuts..." 

    def computeMesoFieldsForPointsOfDict_LocalComp_Sta(self):
        keys = self.DictOfDownScaledFields_LocalComp.keys()
        keys.sort()
        proc = {}
        parallel = True 
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
                args = [GETDP, "meso.pro", 
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
        #print "End doing exact mesoscale computations..." 

    def computeMesoscaleFields(self, FlagComputeML):
        print 'The argument of FlagComputeML in computeMesoscale Fields = ' + str(FlagComputeML) + ' ...'
        if (FlagComputeML == 0):
            keys = self.DictOfDownScaledFieldsForLocalComputations.keys()
        else:
            keys = self.DictOfDownScaledFieldsForMLComputations.keys()
        keys.sort()
        proc = {}
        parallel = True
        print "... Start doing exact mesoscale computations for the dynamic problem for timestep TS = " + str(self.CurrentTimeStep) + " ..."
        print '... Done solving for exact mesoscale problems. There are ' + str(self.getNumOfProcesses()) + ' threads running in parallel for mesoscale problems ...'
        integer   = (len(keys))//(self.numOfProcesses)
        remainder = (len(keys))%(self.numOfProcesses)        
        if (remainder == 0):
            iterations = integer
        else:
            iterations = integer + 1
        for iP in range(0,iterations):
            lower_bound = iP * self.numOfProcesses
            upper_bound = 0
            if (iP == (iterations-1)):
                upper_bound = len(keys)
            else:
                upper_bound = ( (iP+1) * self.numOfProcesses)
            for key in keys[lower_bound : upper_bound]:
                if (FlagComputeML == 0):
                    args = [GETDP, self.MesoProFile, "-v", "0",
                            "-msh", self.MesoMeshFile,
                            #"-msh", "meso.msh",
                            "-solve", "a_NR", 
                            "-pos", "map_field_1", "-v2",              
                            "-setnumber", "AX", str(self.DictOfDownScaledFieldsForLocalComputations[key][0]),
                            "-setnumber", "AY", str(self.DictOfDownScaledFieldsForLocalComputations[key][1]),
                            "-setnumber", "AZ", str(self.DictOfDownScaledFieldsForLocalComputations[key][2]),
                            "-setnumber", "BX", str(self.DictOfDownScaledFieldsForLocalComputations[key][3]),
                            "-setnumber", "BY", str(self.DictOfDownScaledFieldsForLocalComputations[key][4]),
                            "-setnumber", "BZ", str(self.DictOfDownScaledFieldsForLocalComputations[key][5]),
                            "-setnumber", "EX", str(self.DictOfDownScaledFieldsForLocalComputations[key][6]),
                            "-setnumber", "EY", str(self.DictOfDownScaledFieldsForLocalComputations[key][7]),
                            "-setnumber", "EZ", str(self.DictOfDownScaledFieldsForLocalComputations[key][8]),
                            "-setnumber", "dt_BX", str(self.DictOfDownScaledFieldsForLocalComputations[key][9]),
                            "-setnumber", "dt_BY", str(self.DictOfDownScaledFieldsForLocalComputations[key][10]),
                            "-setnumber", "dt_BZ", str(self.DictOfDownScaledFieldsForLocalComputations[key][11]),
                            "-setnumber", "currentTime", str(self.CurrentTime),
                            "-setnumber", "currentTimeStep", str(self.CurrentTimeStep),
                            "-setnumber", "ELENUM", str(key),
                            #"-setnumber", "X_Gauss", str(self.getPosition_X(key)),
                            #"-setnumber", "Y_Gauss", str(self.getPosition_Y(key)),
                            #"-setnumber", "Z_Gauss", str(self.getPosition_Z(key)),
                            "-setnumber", "CML", str(FlagComputeML)]
                            
                else:
                    args = [GETDP, self.MesoProFile, "-v", "0",
                            "-msh", self.MesoMeshFile,
                            "-msh", "meso.msh",
                            "-solve", "a_NR",
                            "-pos", "mean_1", "mean_2", "mean_3", "-v2",
                            "-setnumber", "AX", str(self.DictOfDownScaledFieldsForMLComputations[key][0]),
                            "-setnumber", "AY", str(self.DictOfDownScaledFieldsForMLComputations[key][1]),
                            "-setnumber", "AZ", str(self.DictOfDownScaledFieldsForMLComputations[key][2]),
                            "-setnumber", "BX", str(self.DictOfDownScaledFieldsForMLComputations[key][3]),
                            "-setnumber", "BY", str(self.DictOfDownScaledFieldsForMLComputations[key][4]),
                            "-setnumber", "BZ", str(self.DictOfDownScaledFieldsForMLComputations[key][5]),
                            "-setnumber", "EX", str(self.DictOfDownScaledFieldsForMLComputations[key][6]),
                            "-setnumber", "EY", str(self.DictOfDownScaledFieldsForMLComputations[key][7]),
                            "-setnumber", "EZ", str(self.DictOfDownScaledFieldsForMLComputations[key][8]),
                            "-setnumber", "dt_BX", str(self.DictOfDownScaledFieldsForMLComputations[key][9]),
                            "-setnumber", "dt_BY", str(self.DictOfDownScaledFieldsForMLComputations[key][10]),
                            "-setnumber", "dt_BZ", str(self.DictOfDownScaledFieldsForMLComputations[key][11]),
                            "-setnumber", "currentTime", str(self.CurrentTime),
                            "-setnumber", "currentTimeStep", str(self.CurrentTimeStep),
                            "-setnumber", "CML", str(FlagComputeML),
                            "-setnumber", "ELENUM", str(key[0]),
                            "-setnumber", "GAUSSPOINT", str(key[1])] 
                if parallel:
                    proc[key] = subprocess.Popen(args)
                else:
                    proc[key] = subprocess.call(args)
            if parallel:
                for key in keys[lower_bound : upper_bound]:
                    proc[key].wait()
        if (FlagComputeML != 0):
            Dir_Meso_Comp = self.Dir_Meso_Comp . "hmm_dyn_meso_comp/"
            for key in keys:
                f = open(Dir_Meso_Comp + "DualField1_" + str(key[0]) + ".txt", "r")
                h1 = map(float, f.readline().split())
                f.close()
                f = open(Dir_Meso_Comp + "DualField2_" + str(key[0]) + ".txt", "r")
                h2 = map(float, f.readline().split())
                f.close()
                f = open(Dir_Meso_Comp + "DualField3_" + str(key[0]) + ".txt", "r")
                h3 = map(float, f.readline().split())
                f.close()
                f = open(Dir_Meso_Comp + "PrimalField1_" + str(key[0]) + ".txt", "r")
                b1 = map(float, f.readline().split())
                f.close()
                f = open(Dir_Meso_Comp + "PrimalField2_" + str(key[0]) + ".txt", "r")
                b2 = map(float, f.readline().split())
                f.close()
                f = open(Dir_Meso_Comp + "PrimalField3_" + str(key[0]) + ".txt", "r")
                b3 = map(float, f.readline().split())
                f.close()
                
                f_JL = open(Dir_Meso_Comp + "JL1_" + str(key[0]) + ".txt", "r")
                joulelosses = map(float, f_JL.readline().split())
                f_JL.close()
                f_ME = open(Dir_Meso_Comp + "MagLosses1_" + str(key[0]) + ".txt", "r")
                magneticlosses= map(float, f_ME.readline().split())
                f_ME.close()
                f_ML = open(Dir_Meso_Comp + "MagEnergy1_" + str(key[0]) + ".txt", "r")
                magneticenergy = map(float, f_ML.readline().split())
                f_ML.close()
                f_TE = open(Dir_Meso_Comp + "TotalEnergy1_" + str(key[0]) + ".txt", "r")
                totalenergy = map(float, f_TE.readline().split())
                f_TE.close()
                f_TED = open(Dir_Meso_Comp + "TotalEnergyDifference1_" + str(key[0]) + ".txt", "r")
                totaldifference = map(float, f_TED.readline().split())
                f_TED.close()
                
                field_x = h1[1]
                field_y = h1[2]
                field_z = 0.0
                self.addLine2DictOfHomogenized_ML_GP_Field_Dyn(key[0], key[1], field_x, field_y, field_z)
                Mat_xx = (h2[1] - h1[1]) / (b2[1] - b1[1])
                Mat_xy = (h2[2] - h1[2]) / (b2[1] - b1[1])
                Mat_xz = 0.0
                Mat_yx = (h3[1] - h1[1]) / (b3[2] - b1[2])
                Mat_yy = (h3[2] - h1[2]) / (b3[2] - b1[2])
                Mat_yz = 0.0
                Mat_zx = 0.0
                Mat_zy = 0.0
                Mat_zz = 0.0
                self.addLine2DictOfHomogenized_ML_GP_TgTMatrix_Dyn(key[0], key[1], Mat_xx, Mat_xy, Mat_xz, Mat_yx, Mat_yy, Mat_yz, Mat_zx, Mat_zy, Mat_zz)
                JouleLosses           = joulelosses[1]
                MagneticLosses        = magneticlosses[1]
                MagneticEnergy        = magneticenergy[1]
                TotalEnergy           = totalenergy[1]
                TotalEnergyDifference = totaldifference[1]
                self.addLine2DictOfHomogenized_GQ_GP_JouleLosses_Dyn(key[0], key[1], JouleLosses)
                self.addLine2DictOfHomogenized_GQ_GP_MagneticLosses_Dyn(key[0], key[1], MagneticLosses)
                self.addLine2DictOfHomogenized_GQ_GP_MagneticEnergy_Dyn(key[0], key[1], MagneticEnergy)
                self.addLine2DictOfHomogenized_GQ_GP_TotalEnergy_Dyn(key[0], key[1], TotalEnergy)
                self.addLine2DictOfHomogenized_GQ_GP_TotalEnergyDifference_Dyn(key[0], key[1], TotalEnergyDifference)
        print "... End doing exact mesoscale computations for timestep = "+ str(self.CurrentTimeStep) +"..."                  
