""" 
    Author: Erin Kuci
    
"""

#import nlopt
import numpy as np
from numpy import *
import pylab as pl
from mpl_toolkits.mplot3d import Axes3D
from matplotlib import cm
from matplotlib.ticker import LinearLocator, FormatStrFormatter
import onelab
import os
import fileinput #!!!!
from scipy.sparse import coo_matrix
import scipy.io

import matplotlib
import matplotlib.pyplot as plt
import matplotlib.cm as cm
import matplotlib.mlab as mlab


class Machine():
    """ 
        Python < -- > ONELAB
        Interface between Python and Onelab for surface mounted permanent 
        magnet machine. The model is found in GETDP benchmarks/machines folder. 
    """
    def __init__(self, parameters):
        """
        Build Model
        """

        # Create ONELAB Client
        self.OL = onelab.client()    
        if self.OL.action == 'check':
            exit(0)
        
        self.parameters = parameters

        self.pathOptInput = 'Input/OptParam/'
        self.pathOptOutput = 'Output - Optimization/'

        if (self.parameters['flagOptType']=='serialShape'):
            flag_optType = 0.0
        else:
            flag_optType = 1.0
        self.OL.setNumber('Input/OptParam/optType', value=flag_optType)
        self.pathDesignVar = 'res/designVar.pos'

        if (self.parameters['modelType']=='machine'):
            self.OL.setNumber('Geo/Design Variables Set', value=1.0)
            #self.OL.setNumber(self.pathOptInput+'Flag_nbPM', value=2.0)
            #Analysis Type ??
            self.OL.setNumber("Input/02Type of analysis",
                              value=self.parameters['analysisType'])
            # Non-linear ferromagnetic material ?? not for all models
            self.OL.setNumber('Input/Nonlinear BH-curve', value=self.parameters['NLferro'])
            self.OL.setNumber('Input/BH-curve', value=self.parameters['NLferroLaw'])
            self.TorqueMin = self.parameters['TorqueNominal']
            #self.nbAngularPositions = self.parameters['nbAngularPositions']
            
            # set desired nominal torque
            self.OL.setNumber("Input/OptParam/TorqueNominal",
                              value=self.parameters['TorqueNominal'])

            self.initializeMeshName()
            if(self.parameters['flagParallel']):
                self.createDirectories(self.parameters['nbDesignvar'],
                                       self.parameters['nbAngularPositions'])

    def allowFilterSens(self,flag):
        self.OL.setNumber("Input/OptParam/filterSens", value=flag)
        return self
    
    def setElectricalAngle(self, theta):
        self.OL.setNumber('Input/51Stator current phase [elec. deg]', value=theta)
        return self
    
    def setFilterSensitivity(self,rmin):
        self.OL.setNumber("Input/OptParam/rmin", value=rmin)
        return self
    
    def setSolveA(self,flag):
        self.OL.setNumber("Input/OptParam/SolveA", value=flag)
        return self
    
    def setSemiAnalyticSens(self,flag=0):
        self.OL.setNumber("Input/OptParam/SemiAnalyticSens", value=flag)
        return self
    
    def setDirectMethodSens(self,flag=0):
        self.OL.setNumber("Input/OptParam/DirectMethodSens", value=flag)
        return self
    
    def setAdjointVariable(self,flag=0):
        self.OL.setNumber("Input/OptParam/AdjointVariable", value=flag)
        return self

    def setPerformanceFunction(self,flag=0):
        self.OL.setNumber("Input/OptParam/PerfType", value=flag)
        return self
    
    def setAngularNumber(self,ind):
        #self.OL.setNumber("Input/OptParam/angularPositionNumber", value=ind)
        self.OL.setString("Input/OptParam/angularPositionNumber", value=ind)
        return self

    def setAdjointMethodSens(self,flag=0):
        self.OL.setNumber("Input/OptParam/AdjointMethodSens", value=flag)
        return self
    
    def setInputId(self,InputId = ""):
        self.OL.setString("Geo/Input Id", value=InputId)
        return self
    
    def setOutputId(self,OutputId = ""):
        self.OL.setString("Geo/Res Id", value=OutputId)
        return self
    
    def setVolFrac(self,VolFrac):
        self.OL.setNumber("OptParam/volfrac", value=VolFrac)
        return self

    def setOptimizationParameters(self, x, InputId = ""):
        """ 
        setOptimizationParameters(x) sends the optimization parameters 
        to ONELAb client 
            
        Parameters
        ----------
        x: array-like of shape = [nbParameters], where nbParameters is 
           the number of optimization parameters
        flag_optType: scalar-like -> 0: Shape Opt, 1:Topology Opt
    
        Returns
        -------
        self : object
        Returns self.
        """
        
        if(self.parameters['flagOptType']=='serialShape'
           or self.parameters['flagOptType']=='parallelShape'):
            # shape optimization
            for k in range(0,len(x)):
                self.OL.setNumber(InputId+self.pathOptInput+'x_'+str(k), value=x[k])
        if(self.parameters['flagOptType']=='serialTopology'
           or self.parameters['flagOptType']=='parallelTopology'):
            print('writeParameters')
            # topology optimization --> modify .pos with current iterate           
            self.refreshPostOpFile(x, path=self.pathDesignVar,
                                      indexStart=self.parameters['indexStart'])
        return self
        
    def nbElemMesh(self, path):
        file=open(path,'r')
        data = file.readlines()
        file.close()
        n = 0
        while (data[n].split()[0] != '$ElementNodeData'):
            n = n + 1
        index = n + 10
        return int(index), map(int, data[n + 8].split())[0]
        
    def refreshPostOpFile(self, x, path, indexStart):
        """
        Refresh the post operation file with the curent design variables
        """
        n = len(x)
        lines = open(path, 'r').readlines()
        for k in range(0,n):
            text = str(x[k])
            splitLine = lines[indexStart+k].split()
            for i in range(2,len(splitLine)):
                splitLine[i] = text
            splitLine[len(splitLine)-1] += '\n'
            lines[indexStart+k] = ' '.join(splitLine)
            out = open(path, 'w')
            out.writelines(lines)
        out.close()
        
        return self
            
    def readPostOpFile(self, n, path):
        """
            Read the post operation file with the curent design variables
        """
        x = [0.0]*n
        
        file = open(path,'r')
        data = file.readlines()
        file.close()
        
        N = 0
        while (data[N].split()[0] != '$ElementNodeData'):
            N = N + 1
        lines = open(path, 'r').readlines()
        print N
        print n
        for k in range(0,n):
            splitLine = lines[N+10+k].split()
            x[k] = float(splitLine[2])
        return x

    def meshRefine(self, length=1.0):
        self.OL.setNumber('Geo/Mesh Characteristic Length Factor', value=length) 
        return self
        
    def initDesignVariables(self, state=0.0):
        self.OL.setNumber('Input/OptParam/optInit', value=state) 
        return self
        
    def setOptimizationType(self, state=0.0):
        """
         if state = 0 --> shape optimization
         else         --> topology optimization
        """
        self.OL.setNumber('Input/OptParam/optType', value=state) 
        return self
    
    def allowPostOptim(self, state=0.0):
        """ 
        allowPostOptim(state) allows the postprocess that computes some useful
        maps (Br,...)    
        
        Parameters
        ----------  
        usePerturbedMesh: scalar-like
        
        Returns
        -------
        self : object
        Returns self.
        """        
        self.OL.setNumber('Input/07Flag Plot Graph', value=state) 
        return self
        
    def setSaveParametric(self, state):
        """ 
        Save the parametric mesh if state is 0.

        Parameters
        ----------
        state: scalar-like     
        
        Returns
        -------
        self : object
        Returns self.

        """
        self.OL.setNumber("Geo/SaveParametric", value=state) 
        
        return self
        
    def setRotorPosition(self, theta, ResId=""):
        """ 
        Set the angular rotor position from ONELAB client

        Parameters
        ----------
        theta: scalar -> angular position of the rotor (degres)   
        
        Returns
        -------
        self : object
        Returns self.

        """
        self.OL.setNumber("Input/"+ResId+"Shift rotor position (no remesh) [mech. deg]", value=theta)
        return self

    def getComplianceBeam(self, ResId=""):
        return self.OL.getNumber(self.pathOptOutput+ResId+"Compliance")

    def getVolumeBeam(self, ResId=""):
        return self.OL.getNumber(self.pathOptOutput+ResId+"Volume")


    def getTorque(self, ResId=""):
        """ 
        Get the rotor torque from ONELAB client
        
        Returns
        -------
        scalar-like (torque)
        
        """
        return self.OL.getNumber("Output/"+ResId+"Torque [Nm]")
    
    def getDiscreteSystem(self):
        # call a matlab scipt to extract K
        matlab = '/Applications/MATLAB_R2013a.app/bin/matlab -nojvm -nodisplay '
        command ='-r "structural2mat; exit;">"matlabCall.out"'
        os.system(matlab + command)
        
        # read the generated .mat wich contains K
        K = scipy.io.loadmat('stiffMat.mat')
        g = scipy.io.loadmat('loadVec.mat')
        
        return K['K'],g['g']
    
    def getDiscreteSystem1(self, sysName):
        # call a matlab scipt to extract K
        matlab = '/Applications/MATLAB_R2013a.app/bin/matlab -nojvm -nodisplay '
        command ='-r "m2mat2('+ str(sysName) + '); exit;">"matlabCall.out"'
        os.system(matlab + command)
        
        # read the generated .mat wich contains K
        K = scipy.io.loadmat('stiffMat.mat')
        g = scipy.io.loadmat('loadVec.mat')
    
        return K['K'],g['g']
    
    def getDiscreteAdjVecPotVec(self):
        # call a matlab scipt to extract K
        matlab = '/Applications/MATLAB_R2013a.app/bin/matlab -nojvm -nodisplay '
        command ='-r "lambda2mat; exit;">"matlabCall.out"'
        os.system(matlab + command)
        
        # read the generated .mat wich contains K
        a = scipy.io.loadmat('adjointVec.mat')
        b = scipy.io.loadmat('potVec.mat')
    
        return a['lambda'],b['potVec']
    
    def getDiscretePotVec(self):
        # call a matlab scipt to extract K
        matlab = '/Applications/MATLAB_R2013a.app/bin/matlab -nojvm -nodisplay '
        command ='-r "lambda2mat2; exit;">"matlabCall.out"'
        os.system(matlab + command)
        
        # read the generated .mat wich contains K
        a = scipy.io.loadmat('potVec.mat')
        
        return a['potVec']
    
    def getDiscreteSystem2(self, sysName):
        # call a matlab scipt to extract K
        matlab = '/Applications/MATLAB_R2013a.app/bin/matlab -nojvm -nodisplay '
        command ='-r "m2mat2('+ str(sysName) + '); exit;">"matlabCall.out"'
        os.system(matlab + command)
        
        # read the generated .mat wich contains K
        K = scipy.io.loadmat('stiffMat.mat')
        g = scipy.io.loadmat('loadVec.mat')
        s = scipy.io.loadmat('solVec.mat')
        
        return K['K'],g['g'],s['s']


    def getFemSolution(self, sysName=10):
        matlab = '/Applications/MATLAB_R2013a.app/bin/matlab -nojvm -nodisplay '
        command ='-r "m2mat2('+ str(sysName) + '); exit;"'
        os.system(matlab + command)
        A = scipy.io.loadmat('stiffMat.mat')
        return A['A']
        
    def readFemSolution(self, path, N):
        file = open(path,'r')
        data = file.readlines()
        file.close()
        x = np.zeros(N)
        N = N - 2
        for k in range(5,N):
            splitLine = data[k].split()
            x[k] = float(splitLine[0])
        return x

    def getIronLoss(self, ResId=""):
        """
        Get the rotor torque from ONELAB client
        
        Returns
        -------
        scalar-like (torque)
        
        """
        return self.OL.getNumber("Output/"+ResId+"Iron losses [W]")
    
    def getEnergy(self, ResId=""):
        """
        Get the rotor torque from ONELAB client
        
        Returns
        -------
        scalar-like (torque)
        
        """
        return self.OL.getNumber("Output/"+ResId+"Energy [J]")
    
    def getBrmsAirGap(self):
        """ 
        Get the rms value of B in the air-gap from ONELAB client
        
        Returns
        -------
        scalar-like (Brms)
        
        """    
        return self.OL.getNumber(self.pathOptOutput+'1b_radial_rms')
        
    def getPmVolume(self):    
        """ 
        Get the permanent magnet volume from ONELAB client 
        
        Returns
        -------
        scalar-like (volume)
        """
        return self.OL.getNumber(self.pathOptOutput+"3surf_PM")
    
    def getBradialFixedPosition(self, ResId=""):
        """ 
        Get Integral over the airgap surface of (Brad - Btarget)^2 
        
        Returns
        -------
        scalar-like (volume)
        """
        return self.OL.getNumber("Output - Optimization/"+ResId+"2f_obj")
    
    def getPseudoLoad(self, ResId=""):
        return self.OL.getNumber("Output - Optimization/"+ResId+"3dfdb")
    
    def delta(self,val,k,N):
        """ 
        d = delta(val,k,N) is a vector of N elements such that 
        d[i] = val if i = k; 0 otherwise 
           
        Parameters
        ----------
        - val: scalar-like
        - k: scalar-like
        - N: scalar-like
        
        Returns
        ---------
        array-like ->  [N] 
        """
        d = np.zeros(N)
        d[k] = val
        
        return d
    
    def getTorqueProfile(self, x, theta, path="",ResId=""):
        """ 
        Compute Torque(theta) profile
        
        Parameters
        ----------
        - x: array-like of shape = [nbParameters], where nbParameters is 
             the number of optimization parameters
        - theta: array-like of shape = [N], where N is the number of rotor 
                 angular positions
        - path: string containing the path of he file in which torque values 
                are saved
        
        Returns
        ---------
        - torque:array-like of shape = [N], where N is the number of rotor 
                 angular positions 
        """
        torque = np.zeros(len(theta))

        # set the cao        
        self.setOptimizationParameters(x,ResId)

        # set the mesh characteristic length
        self.meshRefine(length=1.2)

        # mesh the cao
        self.mesh(relocate=0.0)

        for l in range(0,len(theta)):
            # set rotor position            
            self.setRotorPosition(theta[l],ResId)

            # run fem analysis
            self.femAnalysis(usePerturbedMesh=0.0)            

            # extract torque
            torque[l] = self.getTorque(ResId) 
            print torque[l]

        # save data
        if (path != ''):
            np.save(path,torque)
            
        return torque
        
    def getTorqueProfileParallel(self, x, theta, path=""):

        print('  Set the CAO and run meshing in //')
        # -- CAO --
        self.setOptimizationParameters(x)
            
        # -- mesh name --
        name = 'angle'
        nbAngleTorque = len(theta)
        self.meshRefine(1.0)
        msh = ['']*nbAngleTorque
        genericName = ['']*nbAngleTorque
        for k in range(0,nbAngleTorque):
            # tag for each process
            genericName[k] = name + str(k)
            tag = self.parameters['modelName'] + genericName[k]
            msh[k] = tag + '.msh'

        # -- Mesh for torque computation for each position // --
        self.parallelMeshFixedCao(angles=theta,mshName=msh,
                                  tag=genericName,allowParamMesh=0)

        # -- use the generated meshes to perform a fem analysis in // --
        print('  Run fem analysis in //')
        self.parallelFemFixedCao(mshName=msh,tag=genericName)
        
        # -- retrieve the torque --
        Torque = np.zeros(nbAngleTorque)
        for k in range(0,nbAngleTorque):
            Torque[k] = self.getTorque(ResId=genericName[k]+'/')
        
        return Torque
        
        
    def getTorqueProfileElec(self, x, theta, path=''):
        """ 
        Compute Torque(theta) profile
        
        Parameters
        ----------
        - x: array-like of shape = [nbParameters], where nbParameters is 
             the number of optimization parameters
        - theta: array-like of shape = [N], where N is the number of rotor 
                 angular positions
        - path: string containing the path of he file in which torque values 
                are saved
        
        Returns
        ---------
        - torque:array-like of shape = [N], where N is the number of rotor 
                 angular positions 
        """
        torque = np.zeros(len(theta))

        # set the cao        
        self.setOptimizationParameters(x)

        # set the mesh characteristic length
        self.meshRefine(length=1.2)

        # mesh the cao
        self.mesh(relocate=0.0)

        for l in range(0,len(theta)):
            # set rotor position            
#            self.setRotorPosition(theta[l])
            self.setElectricalAngle(theta=theta[l])

            # run fem analysis
            self.femAnalysis(usePerturbedMesh=0.0)            

            # extract torque
            torque[l] = self.getTorque() 

        # save data
        if (path != ''):
            np.save(path,torque)
            
        return torque
    
    def mesh(self, relocate=0.0, caoName="", mshName="", parametric=0):
        """
            - if relocate = 0, mesh() meshes the CAO
            - if relocate = 1, mesh() relocates the nodes of the current mesh on
            the perturbed CAO
            
            Parameters
            ----------
            relocate: scalar-like (1: alloaw mesh relocation, 0: otherwise)
            
            Returns
            -------
            self : object
            Returns self.
        """
        if(parametric==1):
            #print('param mesh')
            self.OL.run('Mon Gmsh', self.parameters['pathGmsh']+' '+ caoName+' - -v 0')
                
        if (relocate == 0.0):
            #print('no reloc mesh')
            # Mesh (-2) the CAO
            self.OL.run('Mon Gmsh', self.parameters['pathGmsh'] +'-setstring ResId "" '
                        + caoName +' -2 -o ' + mshName)
        if (relocate == 1.0):
            #print('reloc mesh')
            # Relocate the current mesh ("-" --> no new mesh)
            self.OL.run('Mon Gmsh', self.parameters['pathGmsh'] +'-setstring ResId "" '
                        + '-setstring MeshPerturbId "" ' + 'relocate.geo -')
        
        return self
    
    def femAnalysis(self, usePerturbedMesh=0.0, modelName="", mshName=""):
        """
            - if usePerturbedMesh = 0,
            femAnalysis() runs the FEM analysis on the mesh of the non perturbed
            CAO
            
            - if usePerturbedMesh = 1,
            femAnalysis() runs the FEM analysis on the perturbed mesh
            
            Parameters
            ----------
            usePerturbedMesh: scalar-like (1: use the relocated mesh, 0: otherwise)
            
            Returns
            -------
            self : object
            Returns self.
        """
        # FEM analysis
        self.OL.run('Mon GetDP', self.parameters['pathGetdp']
                    + modelName + ' -v2 -solve OptimStep -msh '+ mshName)
        return self
    
    def caoAnalysis2(self,x,parameters):
        result = dict([])
        
        # set the cao
        self.setOptimizationParameters(x)
            
        # mesh the CAO only if shape optimization is performed
        # !!!! change this !!!!!
        if (parameters['flagOptType']=='serialShape'):
            self.mesh(relocate=-1.0,caoName=parameters['modelName']+'1.geo',parametric=1)

        # compute physical data
        physData = self.computePhysicalQuantitySerial(parameters=parameters,
                                    mshName=parameters['analysisMeshName'])
            
        # compute objective function and constraints
        result['f'] = self.computeObjectiveFunc(x,data=physData,parameters=parameters)
        result['iec'] = self.computeConstraint(x,data=physData,parameters=parameters)
        return result
    
    def caoAnalysisParallel2(self,x,parameters):
        result = dict([])
        # set the cao
        self.setOptimizationParameters(x)
        
        # mesh the cao for each angular position in //
        #self.meshRefine(1.0)
        self.parallelMeshFixedCao(angles=parameters['rotorAngles'],
                                  mshName=parameters['analysisMeshName'],
                                  tag=parameters['genericName'],
                                  allowParamMesh=0)
                  
        # compute physical data
        physData = self.computePhysicalQuantityParallel(parameters=parameters,
                        genericName=parameters['genericName'],
                        mshName=parameters['analysisMeshName'])
            
        # compute objective function and constraints
        result['f'] = self.computeObjectiveFunc(x,data=physData,parameters=parameters)
        result['iec'] = self.computeConstraint(x,data=physData,parameters=parameters)
        return result

    def caoAnalysis(self,x,parameters):
        """
        --- Serial version ---
        1. x --> Set the CAO
        2. Mesh the current CAO and save parametric mesh if flagPerturbCao equals 0
           Otherwise, relocate the saved parametric mesh into the new (perturbed) CAO
        3. Run FEM Analysis based on the generated mesh, for each angular position and
           extract data (torque, Bradial, ...)
        4. Compute the objective function and the constraint value
        
        Parameters
        ----------
        - x: array-like of shape = [nbParameters], where nbParameters is 
          the number of optimization parameters
        - theta: array-like of shape = [N], where N is the number of rotor 
          angular positions
        - flagPerturbCao: scalar-like value indicating if mesh relocation should
          be used
        - m: scalar-like value indicating the number of constraints
        - flag_constrType: array-like of shape = [m], containing the type of 
          each inequality constraint (0: mean torque, 1:torque ripple)
        - flag_objFuncType: scalar like (0: Bradial,1:Torque ripple)
        
        Returns
        ---------
        - f : objective function value
        - iec : array-like of shape = [m], inequality constraint vector
        """
        n = len(x)
        flag_constrType = parameters['flag_constrType']
        m = len(flag_constrType)
        flag_objFuncType = parameters['flag_objType']
        flag_PhysicalQuantityCompute = parameters['PhysicalQuantity']
        
        # 1. Set the CAO (shape Opt) or structural properties (Top Opt)
        print( 'Send optimization parameters')
        self.setOptimizationParameters(x)
        flagPerturbCao = parameters['PerturbMesh']
        
        if(flagPerturbCao):
            #save the perturbed cao
            os.system('cp '+ self.parameters['modelName'] + '.geo ' + self.parameters['modelName'] + 'Perturb.geo')
        
        # 2. MESH --> only if we perform a shape optimization
        if (self.parameters['flagOptType']=='shape'): # Shape Optimization
            flagPerturbCao = parameters['PerturbMesh']
            self.meshRefine(1.0)
            if (flagPerturbCao == 0.0):
                print('mesh')                        
                # parametric mesh for relocation purpose -> vParams.msh
                self.setSaveParametric(1.0)
                self.mesh(relocate=0.0,caoName=self.parameters['modelName']+'.geo',
                           mshName=self.parameters['modelName']+'.msh')
                os.system('mv '+self.parameters['modelName']+'.msh '+ self.parameters['modelName'] + 'Params.msh')
                
                # no parametric mesh for fem analysis -> cao.msh         
                self.setSaveParametric(0.0)
                self.mesh(relocate=0.0, caoName=self.parameters['modelName']+'.geo',
                          mshName=self.parameters['modelName']+'.msh')
            
            if (flagPerturbCao == 1.0):
                print('mesh relocation')            
                # relocation of parametric mesh into the perturbed CAO
                self.mesh(relocate=1.0,caoName=self.parameters['modelName']+'.geo',
                          mshName=self.parameters['mshName']+'.msh')

        #3. FEM analysis
        if(parameters['modelType']=='machine'):
           thetaB = parameters['rotorAngles']
           thetaT = parameters['rotorAngles']
           NT = len(thetaT)
           NB = len(thetaB)
           Torque = np.zeros(NT)
           #AccBrad = 0.0
           # Solve for A
           self.setSolveA(flag=1)
           if(parameters['SensitivityMethod']=='AdjointMethod'):
               print('allow lambda computation')
               # Solve for adjoint variable
               self.setAdjointVariable(flag=1)
               self.setAdjointMethodSens(flag=1)
           if(parameters['SensitivityMethod']=='SemiAnalytic'):
                # Solve for adjoint variable
                self.setAdjointVariable(flag=1)
           
        for j in range(0,len(flag_PhysicalQuantityCompute)):
            if(flag_PhysicalQuantityCompute[j]=='Torque'):
                print(' Compute Torque')
                # Loop over mechanical angle (compute torque):
                for k in range(0,NT):
                    # imposed mechanical angle
                    self.setRotorPosition(thetaT[k])
                    # FEM analysis with cao mesh
                    if(flagPerturbCao):
                        self.femAnalysis(usePerturbedMesh=flagPerturbCao,
                            modelName=parameters['modelName']+'.pro',
                            mshName=parameters['mshAnalysis']+'Perturb.msh')
                    else:
                        self.femAnalysis(usePerturbedMesh=flagPerturbCao,
                            modelName=parameters['modelName']+'.pro',
                            mshName=parameters['mshAnalysis'])
                    # extract useful data from analyzer
                    Torque[k] = self.getTorque()
                    #print('Torque Ser ={0}'.format(Torque[k]))
            if(flag_PhysicalQuantityCompute[j]=='Bradial'):
                print(' Compute Brad')
                self.femAnalysis(usePerturbedMesh=flagPerturbCao,
                                 modelName=parameters['modelName']+'.pro',
                                 mshName=parameters['mshAnalysis'])
                AccBrad = self.getBradialFixedPosition()
                # Loop over mechanical angle (Compute Brad):
#                for k in range(0,NB):
#                    # imposed mechanical angle
#                    self.setRotorPosition(thetaB[k])
#                    # FEM analysis with cao mesh
#                    self.femAnalysis(usePerturbedMesh=flagPerturbCao,
#                         modelName=parameters['modelName']+'.pro',
#                         mshName=parameters['mshAnalysis'])
#                    # extract useful data from analyzer
#                    AccBrad += self.getObjectiveFunctionFixedPosition()
            if(flag_PhysicalQuantityCompute[j]=='Displacement'):
                print(' Compute Displacement')
                # FEM analysis with cao mesh
                self.femAnalysis(usePerturbedMesh=flagPerturbCao,
                     modelName=parameters['modelName']+'.pro',
                     mshName=parameters['mshAnalysis'])
    
        # 4. Compute objective function    
        if (flag_objFuncType == 'Bradial'):
            print('f: B-radial shape')
            # Sum_theta( Integral(B-radial-air-gap - B-target)^2 )          
            f = AccBrad
        if (flag_objFuncType == 'TorqueRipple'):
            print('f: torque ripple')
            # Torque ripple = Max(Torque) - Min(Torque)         
            f = np.max(Torque) - np.min(Torque)
        if (flag_objFuncType == 'T/TNom'):
            print('f: T/Tnom')
            f = np.sum((Torque/self.TorqueMin - 1.0)**2.0)
        if (flag_objFuncType == 'Compliance'):
            f = self.getComplianceBeam()
            print f
            
        # 5. Compute constraints value (m)
        iec = np.zeros(m)
        for k in range(0,m):
            if (flag_constrType[k] == 'MeanTorque'):
                print('iec: mean torque compute')
                iec[k] = np.mean(Torque) - self.TorqueMin
            if (flag_constrType[k] == 'TorqueRipple'):
                print('iec: torque ripple compute')
                # Torque ripple = Max(Torque) - Min(Torque) <= Ripple_Max         
                iec[k] = np.max(Torque) - np.min(Torque) - self.TorqueRippleMax
            if (flag_constrType[k] == 'Unconstrained'):
                print('iec: unconstrained')
                iec[k] = 0.0
            if (flag_constrType[k] == 'Volume'):
                print('iec: Volume')
                #iec[k] = self.getVolumeBeam() - 0.9*V0
                #suppose that one element has a unit volume
                #iec[k] = np.sum(x) - parameters['VolMax']*parameters['VolFrac']
                iec[k] = np.sum(x)/(parameters['VolFrac']*parameters['VolMax']) - 1.0
                #iec[k] = np.sum(x) - parameters['VolFrac']*parameters['VolMax']
        
#        if(parameters['modelType']=='machine'):
#            # Solve for A
#            self.setSolveA(flag=0)
#            if(parameters['SensitivityMethod']=='AdjointMethod'):
#                # Solve for adjoint variable
#                self.setAdjointVariable(flag=0)
#                self.setAdjointMethodSens(flag=0)
#            if(parameters['SensitivityMethod']=='SemiAnalytic'):
#                # Solve for adjoint variable
#                self.setAdjointVariable(flag=0)

        result = dict([])
        result['f'] = f
        result['iec'] = iec

        return result

    def caoAnalysisParallel(self, x, parameters):
        """
        --- Parallel version ---
        !!! do -check when database is changed
        1. x --> Set the CAO
        2. Mesh the current CAO and save parametric mesh if flagPerturbCao equals 0
           Otherwise, relocate the saved parametric mesh into the new (perturbed) CAO
        3. Run FEM Analysis based on the generated mesh, for each angular position and
           extract data (torque, Bradial, ...)
        4. Compute the objective function and the constraint value
        
        Parameters
        ----------
        - x: array-like of shape = [nbParameters], where nbParameters is 
          the number of optimization parameters
        - theta: array-like of shape = [N], where N is the number of rotor 
          angular positions
        - flagPerturbCao: scalar-like value indicating if mesh relocation should
          be used
        - m: scalar-like value indicating the number of constraints
        - flag_constrType: array-like of shape = [m], containing the type of 
          each inequality constraint (0: mean torque, 1:torque ripple)
        - flag_objFuncType: scalar like (0: Bradial,1:Torque ripple)
        
        Returns
        ---------
        - f : objective function value
        - iec : array-like of shape = [m], inequality constraint vector
        """
        # -- extract data --
        flagPerturbCao = parameters['PerturbMesh']
        flag_constrType = parameters['flag_constrType']
        flag_objFuncType = parameters['flag_objType']
        flag_PhysicalQuantityCompute = parameters['PhysicalQuantity']
        m = len(flag_constrType)
        thetaB = parameters['rotorAngles']
        thetaT = parameters['rotorAngles']
        nbAngleTorque = len(thetaT)
        nbAngleBrad = len(thetaB)
        msh = parameters['analysisMeshName']
        mshParam = parameters['meshParamName']
        genericName = parameters['genericMeshName']
        # ---------------------------------------------------------------            
        # CAO + MESH --> only if we perform a shape optimization
        # --------------------------------------------------------------- 
        self.setOptimizationParameters(x)
        
        if (self.parameters['flagOptType']=='shape'):
            print('  Set the CAO and run meshing in //')
            self.meshRefine(1.0)
            
            # ---- Mesh for torque computation for each position // ----
            self.parallelMeshFixedCao(angles=thetaT,mshName=msh,
                                      tag=genericName,allowParamMesh=0)
    
            # ---- Parametric mesh generation (for relocation purpose) ----
            self.parallelMeshFixedCao(angles=thetaT,mshName=mshParam,
                                      tag=genericName,allowParamMesh=1)
                
        # ---------------------------------------------------------------            
        # FEM Analysis 
        # --------------------------------------------------------------- 
        #  --- use the generated meshes to perform a fem analysis in // ---        
        print('  Run fem analysis in //') 
        self.parallelFemFixedCao(mshName=msh,tag=genericName)
        
        if(parameters['modelType']=='machine'):
            thetaB = parameters['rotorAngles']
            thetaT = parameters['rotorAngles']
            Torque = np.zeros(nbAngleTorque)
            IronLoss = np.zeros(nbAngleTorque)
            AccBrad = 0.0
        
        
        print(' Compute Physical quantity')
        for k in range(0,nbAngleTorque):
            Torque[k] = self.getTorque(ResId=genericName[k]+'/')
            IronLoss[k] = self.getIronLoss(ResId=genericName[k]+'/')
            AccBrad += self.getBradialFixedPosition(ResId=genericName[k]+'/')
        print Torque
        print IronLoss
        # ---------------------------------------------------------------
        # Compute Objective function 
        # ---------------------------------------------------------------
        if (flag_objFuncType == 'Bradial'):
#            print('  f: B-radial shape')
            # Sum_theta( Integral(B-radial-air-gap - B-target)^2 )          
            f = AccBrad
        if (flag_objFuncType == 'TorqueRipple'):
#            print('  f: torque ripple')
            # Torque ripple = Max(Torque) - Min(Torque)         
            f = np.max(Torque) - np.min(Torque)
        if (flag_objFuncType == 'T/Tnom'):
            f = np.sum((Torque/self.TorqueMin - 1.0)**2.0)
        if (flag_objFuncType == 'IronLosses'):
            f = np.sum(IronLoss)
        # ---------------------------------------------------------------            
        # 5. Compute constraints 
        # ---------------------------------------------------------------
        iec = np.zeros(m)
        for k in range(0,m):
            if (flag_constrType[k] == 'MeanTorque'):
#                 print('  iec: mean torque compute')
                iec[k] = np.mean(Torque) - self.TorqueMin
            if (flag_constrType[k] == 'TorqueRipple'):
#                   print('  iec: torque ripple compute')
                    # Torque ripple = Max(Torque) - Min(Torque) <= Ripple_Max
                iec[k] = np.max(Torque) - np.min(Torque) - self.TorqueRippleMax
            if (flag_constrType[k] == 'Unconstrained'):
                iec[k] = 0.0
            if (flag_constrType[k] == 'Volume'):
                iec[k] = np.sum((Torque/self.TorqueMin - 1.0)**2.0) - 0.1

        result = dict([])
        result['f'] = f
        result['iec'] = iec

        return result

    def computePhysicalQuantitySerial(self,parameters,mshName,torque=0):
        result = dict([])
        
        if(parameters['modelType']=='machine'): # -- machine --
            result['Torque'] = [0.0]*parameters['rotorAngles']
            result['BradialErrorInt'] = [0.0]*parameters['rotorAngles']
            result['IronLoss'] = [0.0]*parameters['rotorAngles']
            result['Energy'] = [0.0]*parameters['rotorAngles']
            
            # allow computation of A: potential vector
            self.setSolveA(flag=1)
            # allow computation of adjoint variable (lambda)
            # --> normally computed for a given A!!! We can do this in another function!
            #self.setAdjointVariable(flag=parameters['AdjointFlag'])
            
            # allow the computation of sensitivity ?
            if (parameters['flagOptType']=='serialTopology'):
                self.setAdjointMethodSens(flag=1)
        
            for k in range(0,len(parameters['rotorAngles'])):
                if(torque==1):
                    self.setRotorPosition(theta=parameters['rotorAngles'][k]+parameters['step'])
                elif(torque==2):
                    self.setRotorPosition(theta=parameters['rotorAngles'][k]-parameters['step'])
                else:
                    # imposed mechanical angle
                    self.setRotorPosition(theta=parameters['rotorAngles'][k])

                # run fem analysis
                self.femAnalysis(modelName=parameters['proName'],mshName=mshName)
                os.system('cp res/SensitivityObj_AdjointMethod.pos '
                            +'res/SensitivityObj_AdjointMethod'+str(k)+'.pos')
            
                # extract computed data
                result['Torque'][k] = self.getTorque()
                result['BradialErrorInt'][k] = self.getBradialFixedPosition()
                result['IronLoss'][k] = self.getIronLoss()
                result['Energy'][k] = self.getEnergy()
                    
            self.setRotorPosition(theta=parameters['rotorAngles'][0])
    
        #if(parameters['modelType']=='Displacement'):
        return result

    def computePhysicalQuantityParallel(self,parameters,genericName,mshName,
                                        flagPerturb=0,n=1):
        result = dict([])

        if(parameters['modelType']=='machine'): # machine
            # initialize dictionnary
            nbAngles = len(parameters['rotorAngles'])
            if(flagPerturb):
                result['Torque'] = np.zeros([n,nbAngles])
                result['BradialErrorInt'] = np.zeros([n,nbAngles])
                result['IronLoss'] = np.zeros([n,nbAngles])
            else:
                result['Torque'] = np.zeros(nbAngles)
                result['BradialErrorInt'] = np.zeros(nbAngles)
                result['IronLoss'] = np.zeros(nbAngles)

            # allow computation of A and Lambda
            self.setSolveA(flag=1)
            self.setAdjointVariable(flag=1)
            #self.setAdjointMethodSens(flag=1)
            
            # use the generated meshes to perform a fem analysis in //
            print('     Run fem analysis in //')
            self.parallelFemFixedCao(mshName=mshName,tag=genericName)
    
            # extract computed data
            print('     Extract computed data')
            if(flagPerturb):
                ind = 0
                for j in range(0,n):
                    for k in range(0,len(parameters['rotorAngles'])):
                        result['Torque'][j,k] = self.getTorque(ResId=genericName[ind]+'/')
                        result['BradialErrorInt'][j,k] = self.getBradialFixedPosition(ResId=genericName[ind]+'/')
                        result['IronLoss'][j,k] = self.getIronLoss(ResId=genericName[ind]+'/')
                        ind = ind + 1
            else:
                for k in range(0,len(parameters['rotorAngles'])):
                    result['Torque'][k] = self.getTorque(ResId=genericName[k]+'/')
                    result['BradialErrorInt'][k] = self.getBradialFixedPosition(ResId=genericName[k]+'/')
                    result['IronLoss'][k] = self.getIronLoss(ResId=genericName[k]+'/')

            return result

    def computeObjectiveFunc(self,x,data,parameters):
        # Compute objective function from physical quantity 'data'
        if (parameters['flag_objType'] == 'BradialErrorInt'):
            print('f: error B-radial shape')
            # Sum_theta( Integral(B-radial-air-gap - B-target)^2 )
            f = np.sum(data['BradialErrorInt'])
        elif (parameters['flag_objType'] == 'IronLosses'):
            print('f: cumulated iron losses')
            # Sum_theta( Integral(B-radial-air-gap - B-target)^2 )
            f = np.sum(data['IronLoss'])
        elif (parameters['flag_objType'] == 'TorqueRipple'):
            print('f: torque ripple')
            # Torque ripple = Max(Torque) - Min(Torque)
            f = np.max(data['Torque']) - np.min(data['Torque'])
        elif (parameters['flag_objType'] == 'TorqueVariance'):
            print('f: sum(T/Tnom-1)^2')
            f = np.sum((data['Torque']/parameters['TorqueNominal'] - 1.0)**2.0)
        elif (parameters['flag_objType'] == 'Energy'):
            f = np.sum(data['Energy'])
        elif (parameters['flag_objType'] == 'Compliance'):
            print('f:Int(force*displacement)')
            f = data['Compliance']
        else:
            print('try a correct objective function')

        return f

    def computeConstraint(self,x,data,parameters):
        # Compute constraints from physical quantity 'data'
        m = len(parameters['flag_constrType'])
        iec = np.zeros(m)
        for k in range(0,m):
            if (parameters['flag_constrType'][k] == 'MeanTorque'):
                print('iec: mean torque compute')
                iec[k] = np.mean(data['Torque']) - self.TorqueMin
            elif (parameters['flag_constrType'][k] == 'TorqueRipple'):
                print('iec: torque ripple compute')
                # Torque ripple = Max(Torque) - Min(Torque) <= Ripple_Max
                iec[k] = np.max(data['Torque']) - np.min(data['Torque']) - self.TorqueRippleMax
            elif (parameters['flag_constrType'][k] == 'Unconstrained'):
                print('iec: unconstrained')
                iec[k] = 0.0
            elif (parameters['flag_constrType'][k] == 'Volume'):
                print('iec: Volume')
                #suppose that one element has a unit volume
                iec[k] = np.sum(x)/(parameters['VolFrac']*parameters['VolMax']) - 1.0
                #iec[k] = np.sum(x) - parameters['VolFrac']*parameters['VolMax']
            else:
                print('try a correct objective function')
        return iec

    def FiniteDifParallel2(self, x, f, iec, parameters, central=0):
        n = len(x)
        m = len(iec)
        nbAngle = len(parameters['rotorAngles'])
        
        result = dict([])
        result['dfdx'] = np.zeros([n])
        result['diecdx'] = np.zeros([m,n])
        
        # --- Name of meshes and geo ---> put in initialization
        tagGeo = ['']*n
        tagMsh = ['']*nbAngle
        tagGeoMsh = ['']*n*nbAngle
        GeoMsh = ['']*n*nbAngle
        
        for k in range(0,n):
            tagGeo[k] = 'geo' + str(k)
        for k in range(0,nbAngle):
            tagMsh[k] = 'angle' + str(k)
        ind = 0
        for k in range(0,n):
            for l in range(0,nbAngle):
                tagGeoMsh[ind] = tagGeo[k] + tagMsh[l]
                GeoMsh[ind] = self.parameters['modelName'] + tagGeoMsh[ind] + 'Perturb.msh'
                ind = ind + 1
    
        # --- Parametric mesh generation (the mesh already exist) ---
        self.setOptimizationParameters(x)
#        self.parallelMeshFixedCao(angles=parameters['rotorAngles'],
#                                  mshName=parameters['meshParamName'],
#                                  tag=parameters['genericName'],
#                                  allowParamMesh=1)

        # --- Set the CAO and run meshing in // ---
        print('  Set the CAO and run meshing in //')
        xp = np.zeros([n,n])
        for k in range(0,n):
            perturb = self.delta(parameters['step'], k, n)
            xp[k,:] = x + perturb
            self.setOptimizationParameters(x + perturb)
            #save the perturbed cao
            os.system('cp '+ self.parameters['modelName'] + '.geo '
                      + self.parameters['modelName'] + tagGeo[k] + 'Perturb.geo')
        
        # create the perturbed meshes in // (nbX * nbAngle)---
        self.parallelMeshReloc(x=xp,angle=parameters['rotorAngles'],
                               tagGeo=tagGeo,tagMsh=tagMsh)

        # --- Compute physical quantity in // ---
        print('  Compute perturbed physical quantities in //')
        dPhysQuant = self.computePhysicalQuantityParallel(parameters=parameters,
                          genericName=tagGeoMsh,mshName=GeoMsh,flagPerturb=1,n=n)
                          
        if(central==1):
            # --- Set the CAO and run meshing in // ---
            print('  Set the CAO and run meshing in //')
            for k in range(0,n):
                perturb = self.delta(parameters['step'], k, n)
                xp[k,:] = x - perturb
                self.setOptimizationParameters(x - perturb)
                #save the perturbed cao
                os.system('cp '+ self.parameters['modelName'] + '.geo '
                               + self.parameters['modelName'] + tagGeo[k] + 'Perturb.geo')
        
            # create the perturbed meshes in // (nbX * nbAngle)---
            self.parallelMeshReloc(x=xp,angle=parameters['rotorAngles'],
                                   tagGeo=tagGeo,tagMsh=tagMsh)
                               
            # --- Compute physical quantity in // ---
            print('  Compute perturbed physical quantities in //')
            dPhysQuant1bis = self.computePhysicalQuantityParallel(parameters=parameters,
                                genericName=tagGeoMsh,mshName=GeoMsh,flagPerturb=1,n=n)

        # ---- Compute perturbed Objective function and constraints ----
        print('  Compute perturbed Objective function and constraints')
        if(central==0):
            dPhysQuant2 = dict([])
            key = dPhysQuant.keys()
            for k in range(0,n):
                for p in key: #keep only the k-th row for each dict key
                    dPhysQuant2[p] = dPhysQuant[p][k]
                result['dfdx'][k] = (self.computeObjectiveFunc(x,data=dPhysQuant2,
                                                          parameters=parameters)
                                      - f)/parameters['step']
                for l in range(0,m):
                    result['diecdx'][l,k] = (self.computeConstraint(x,data=dPhysQuant2,
                                                             parameters=parameters)
                                         - iec)/parameters['step']
        if(central==1):
            dPhysQuant3 = dict([]) # perturb -
            dPhysQuant4 = dict([]) # perturb +
            key3 = dPhysQuant1bis.keys()
            key4 = dPhysQuant.keys()
            for k in range(0,n):
                for p3 in key3: #keep only the k-th row for each dict key
                    dPhysQuant3[p3] = dPhysQuant1bis[p3][k]
                for p4 in key4: #keep only the k-th row for each dict key
                    dPhysQuant4[p4] = dPhysQuant[p4][k]
                
                result['dfdx'][k] = (self.computeObjectiveFunc(x,data=dPhysQuant4,
                                                       parameters=parameters)
                                     - self.computeObjectiveFunc(x,data=dPhysQuant3,
                                                                 parameters=parameters))/(2.0*parameters['step'])
                for l in range(0,m):
                    result['diecdx'][l,k] = (self.computeConstraint(x,data=dPhysQuant4,
                                                                                 parameters=parameters)
                                             - self.computeConstraint(x,data=dPhysQuant3,
                                                                      parameters=parameters))/(2.0*parameters['step'])


        return result
                                         
    def SemiAnalytic(self, x, parameters, central=0, selfAdjoint=0,torque=0):
        # suppose that analysisMesh and and parametric mesh already exist !!!
        
        n = len(x)
        m = parameters['m']
        result = dict([])
        result['dfdx'] = np.zeros([n])
        result['diecdx'] = np.zeros([m,n])
        
        # Set the CAO(x)
        self.setOptimizationParameters(x=x)
        self.setPerformanceFunction(flag=parameters['PerformanceType'])

        # Compute the primal system --> get A
        print(' Compute the primal system: get A*')
        if(selfAdjoint):
            self.setAdjointVariable(flag=0)
        else:
            self.setAdjointVariable(flag=1)
        
        self.setSemiAnalyticSens(flag=0)
        self.setSolveA(flag=1)
        
        self.femAnalysis(modelName=parameters['proName'],
                         mshName=parameters['analysisMeshName'])

        self.setSolveA(flag=0)
        self.setAdjointVariable(flag=0)

#        print(' Compute the dual system for A*')
#        self.setSolveA(flag=0)
#        self.setAdjointVariable(flag=1)
#        self.femAnalysis(modelName=parameters['proName'],
#                         mshName=parameters['analysisMeshName'])

        # Extract the adjoint vector and the potential vector
        print(' Extract A* and adjoint vector')
        if(selfAdjoint):
            potVec = self.getDiscretePotVec()
            adjVec = np.copy(potVec)
        else:
            adjVec,potVec = self.getDiscreteAdjVecPotVec()
        #scipy.io.savemat('res/adjoint.mat',{'adj':adjVec})
        #scipy.io.savemat('res/primal.mat',{'prim':potVec})
        #print adjVec.shape
        #print potVec.shape
        #print potVec
        #print adjVec

        N = adjVec.size
        
        # Extract K and g for A* at x*
        self.setSemiAnalyticSens(flag=1)
        if(central==0):
            self.femAnalysis(modelName=parameters['proName'],
                             mshName=parameters['analysisMeshName'])
            print(' Extract K and g for A*')
            K,g = self.getDiscreteSystem()
            #print K.shape
            #print g.shape

        term1 = 0.0
        term2 = np.zeros(N)
        term3 = 0.0
        dKdx = np.zeros([N,N])
        dgdx = np.zeros([1,N])

        for k in range(0,n):
            if(torque):
                self.setRotorPosition(theta=parameters['rotorAngles']+parameters['step'])
                self.femAnalysis(modelName=parameters['proName'],
                                 mshName=parameters['modelName']+'.msh')
            else:
                print(' Perturb cao iter. '+str(k))
                # Perturb k-th optimization parameter
                perturb = self.delta(parameters['step'],k,n)
                self.setOptimizationParameters(x=x+perturb)
                os.system('cp '+self.parameters['geoName'] + ' '
                           +self.parameters['modelName']+'Perturb.geo ')
                      
                # Relocate the non perturbed mesh on the perturbed cao
                print('     Relocate mesh')
                self.mesh(relocate=1.0)
                os.system('cp '+self.parameters['modelName']+'Perturb.msh '
                               +self.parameters['modelName']+'Perturb'+str(k)+'.msh ')#debug
              
                # Perturbed physical quantitys--> get only the perturbed version of K and g!!!!
                print('     Get perturbed K and g')
                self.femAnalysis(modelName=parameters['proName'],
                                 mshName=parameters['modelName']+'Perturb.msh')

            dK,dg = self.getDiscreteSystem()
            #print dK.shape
            #print dg.shape
            
            if (central==1):
                if(torque):
                    self.setRotorPosition(theta=parameters['rotorAngles']-parameters['step'])
                    self.femAnalysis(modelName=parameters['proName'],
                                     mshName=parameters['modelName']+'.msh')
                else:
                    self.setOptimizationParameters(x=x-perturb)
                    os.system('cp '+self.parameters['geoName'] + ' '
                              +self.parameters['modelName']+'Perturb.geo ')
                    self.mesh(relocate=1.0)
                    self.femAnalysis(modelName=parameters['proName'],
                                     mshName=parameters['modelName']+'Perturb.msh')
                dK2,dg2 = self.getDiscreteSystem()
        
            if(central):
                dKdx = (dK - dK2)/(2.0*parameters['step'])
                dgdx = (dg - dg2)/(2.0*parameters['step'])
            else:
                dKdx = (dK - K)/parameters['step']
                dgdx = (dg - g)/parameters['step']
            
            print('     Compute the derivative of performance function')
            term1 = np.inner(adjVec,dgdx)
            term2 = np.dot(dKdx,potVec.transpose())
            term3 = np.inner(adjVec,term2.transpose())
            result['dfdx'][k] = term1 - term3

            for l in range(0,m):
                result['diecdx'][l,k] = 0.0#(diec[l] - iec[l])/parameters['step']
            
            # reset the CAO to the unperturbed state
            print('     Reset the cao')
            self.setOptimizationParameters(x)
                #self.setRotorPosition(theta=parameters['rotorAngles'])
    
        # Set the system as initially
        self.setSemiAnalyticSens(flag=0) #only generate K and g
        
        return result
    
    def AdjointMethod(self,x,parameters):
        result = dict([])
        nbAngles = len(parameters['rotorAngles'])
        n = len(x)
        dfdxAngle = np.zeros([nbAngles,n])
        diecdxAngle = np.zeros([nbAngles,n])
        result['dfdx'] = np.zeros(n)
        result['diecdx'] = np.zeros([1,n])
        
        for k in range(0,nbAngles):
            # Read .pos file generated with getdp in caoAnalysis
            dfdxAngle[k,:] = self.readPostOpFile(n, path='res/SensitivityObj_AdjointMethod'+str(k)+'.pos')
            # do the same for the constraints
        
        for k in range(0,n):
            result['dfdx'][k] = np.sum(dfdxAngle[:,k])
        
        # read .pos file for constraints derivative --> modify
        result['diecdx'][0,:] = [1.0/(parameters['VolFrac']*parameters['VolMax'])]*n
        #result['diecdx'][0,:] = [1.0]*n
        
        # Filter?
        if(parameters['FilterSensitivity']):
            print('filter sensitivity')
            self.allowFilterSens(flag=1)
            self.setFilterSensitivity(rmin=parameters['rmin'])
            self.femAnalysis(usePerturbedMesh=parameters['PerturbMesh'],
                             modelName=parameters['modelName']+'.pro',
                             mshName=parameters['analysisMeshName'])
            result['dfdx'] = self.readPostOpFile(n, path='res/SensitivityObjFiltered.pos')
            self.allowFilterSens(flag=0)
        
        return result
    
    def FiniteDiffSerial(self, x, f, iec, parameters, central=0,torque=0):
        n = len(x)
        m = len(iec)
        result = dict([])
        result['diecdx'] = np.zeros([m,n])
        result['dfdx'] = np.zeros([n])

        for k in range(0,n):
            # Perturb k-th optimization parameter
            perturb = self.delta(parameters['step'],k,n)
            if (torque):
                dPhysQuant = self.computePhysicalQuantitySerial(parameters=parameters,
                                        mshName=parameters['modelName']+'.msh',torque=1)
            #print dPhysQuant
            else:
                self.setOptimizationParameters(x=x+perturb)
                os.system('cp '+self.parameters['geoName'] + ' '
                           +self.parameters['modelName']+'Perturb.geo ')
            
                # Relocate the non perturbed mesh on the perturbed cao
                self.mesh(relocate=1.0)
                os.system('cp '+self.parameters['modelName']+'Perturb.msh '
                           +self.parameters['modelName']+str(k)+'Perturb.msh ')#debug
            
                # Perturbed physical quantitys
                dPhysQuant = self.computePhysicalQuantitySerial(parameters=parameters,
                              mshName=parameters['modelName']+'Perturb.msh')
            
            # Compute the perturbed version of performance functions
            df = self.computeObjectiveFunc(x=x+perturb,data=dPhysQuant,
                                           parameters=parameters)
            diec = self.computeConstraint(x=x+perturb,data=dPhysQuant,
                                          parameters=parameters)
            if(central == 1):
                if (torque):
                    dPhysQuant2 = self.computePhysicalQuantitySerial(parameters=parameters,
                                                mshName=parameters['modelName']+'.msh',torque=2)
                #print dPhysQuant2
                else:
                    self.setOptimizationParameters(x=x-perturb)
                    os.system('cp '+self.parameters['geoName'] + ' '
                              +self.parameters['modelName']+'Perturb.geo ')
                    self.mesh(relocate=1.0)
                    dPhysQuant2 = self.computePhysicalQuantitySerial(parameters=parameters,
                                        mshName=parameters['modelName']+'Perturb.msh')
                df2 = self.computeObjectiveFunc(x=x-perturb,data=dPhysQuant2,
                                                parameters=parameters)
                diec2 = self.computeConstraint(x=x-perturb,data=dPhysQuant2,
                                               parameters=parameters)
                                          
            # Compute derivative
            if (central==0):
                result['dfdx'][k] = (df - f)/parameters['step']
                for l in range(0,m):
                    result['diecdx'][l,k] = (diec[l] - iec[l])/parameters['step']
            else:
                result['dfdx'][k] = (df - df2)/(2.0*parameters['step'])
                for l in range(0,m):
                    result['diecdx'][l,k] = (diec[l] - diec2[l])/(2.0*parameters['step'])

            # reset the CAO to the unperturbed state
            self.setOptimizationParameters(x)

        return result

    def Analysis(self,x,parameters):
        result=dict([])
        
        if (self.parameters['flagParallel']):
            print('analysis: // computations')
            result = self.caoAnalysisParallel2(x=x,parameters=self.parameters)
        else:
            print('analysis: serial computations')
            result = self.caoAnalysis2(x=x,parameters=self.parameters)
    
        return result
    
    def Sensitivity(self,x,f,iec, parameters):

        if(parameters['SensitivityMethod']=='FiniteDifferenceSerial'):
            result = self.FiniteDiffSerial(x, f, iec, parameters)
        
        elif(parameters['SensitivityMethod']=='FiniteDifferenceParallel'):
            result = self.FiniteDifParallel2(x, f, iec, parameters)

        elif(parameters['SensitivityMethod']=='AdjointMethod'):
            result = self.AdjointMethod(x,parameters)

        elif(parameters['SensitivityMethod']=='SemiAnalytic'):
            result = self.SemiAnalytic(x,parameters)
        
        else:
            print('Error Sensitivity: choose the right method!')
            return

        return result

    def FiniteDifParallel(self, x, f, iec, parameters):
        
        thetaB = parameters['rotorAngles']
        thetaT = parameters['rotorAngles']
        nbAngle = len(thetaT)
        flag_constrType = parameters['flag_constrType']
        m = len(flag_constrType)
        flag_objFuncType = parameters['flag_objType']
        flag_PhysicalQuantityCompute = parameters['PhysicalQuantity']
        step = parameters['step']

        nbX = len(x)
        tagGeo = ['']*nbX
        tagMsh = ['']*nbAngle
        tagGeoMsh = ['']*nbX*nbAngle
        GeoMsh = ['']*nbX*nbAngle
    
        # --- Name of meshes and geo ---
        for k in range(0,nbX):
            tagGeo[k] = 'geo' + str(k)
        for k in range(0,nbAngle):
            tagMsh[k] = 'angle' + str(k)
            ind = 0
        for k in range(0,nbX):
            for l in range(0,nbAngle):
                tagGeoMsh[ind] = tagGeo[k] + tagMsh[l]
                GeoMsh[ind] = self.parameters['modelName'] + tagGeoMsh[ind] + 'Perturb.msh'
                ind = ind + 1

        # --- Create nbX perturbed CAO // ---
        print('  Set the CAO and run meshing in //')
        xp = np.zeros([nbX,nbX])
        for k in range(0,nbX):
            # perturb k-th design variable
            perturb = self.delta(parameters['step'], k, nbX)
            xp[k,:] = x + perturb
            self.setOptimizationParameters(x + perturb)
            #save the perturbed cao
            os.system('cp '+ self.parameters['modelName'] + '.geo '
                           + self.parameters['modelName'] + tagGeo[k] + 'Perturb.geo')
    
        # --- Create the perturbed meshes in // (nbX * nbAngle)---
        self.parallelMeshReloc(x=xp,angle=thetaT,tagGeo=tagGeo,tagMsh=tagMsh)
    
        # --- Run fem analysis in // (nbX * nbAngle)  ---
        print('  Run fem analysis in //')
        self.parallelFemFixedCao(mshName=GeoMsh,tag=tagGeoMsh)
    
        # --- retrieve the torque ---
        Torque = np.zeros([nbX, nbAngle])
        IronLoss = np.zeros([nbX, nbAngle])
        ind = 0
        for k in range(0,nbX):
            for l in range(0,nbAngle):
                Torque[k,l] = self.getTorque(ResId=tagGeoMsh[ind]+'/')
                IronLoss[k,l] = self.getIronLoss(ResId=tagGeoMsh[ind]+'/')
                ind = ind + 1

        # ---- Compute perturbed Objective function ----
        df = np.zeros(nbX)
        if (flag_objFuncType == 'TorqueRipple'):
            #        print('df: torque ripple')
            # Torque ripple = Max(Torque) - Min(Torque)
            for k in range(0, nbX):
                df[k] = np.max(Torque[k,:]) - np.min(Torque[k,:])
        if (flag_objFuncType == 'T/Tnom'):
            obj = np.zeros(len(Torque))
            for k in range(0, nbX):
                df[k] = np.sum((Torque[k,:]/self.TorqueMin - 1.0)**2.0)
        if (flag_objFuncType == 'IronLosses'):
            for k in range(0, nbX):
                df[k] = np.sum(IronLoss[k,:])

        # ----- Compute perturbed constraints -----
            #        print('diec: mean torque compute')
        diec = np.zeros([m,nbX])
        for k in range(0,m): #check m-th constraint
            if (flag_constrType[k] == 'MeanTorque'):
                for l in range(0,nbX):
                    diec[k,l] = np.mean(Torque[l,:]) - self.TorqueMin
            if (flag_constrType[k] == 'Unconstrained'):
                for l in range(0,nbX):
                    diec[k,l] = 0.0
            if (flag_constrType[k] == 'TorqueRipple'):
                for l in range(0,nbX):
                    diec[k,l] = np.sum((Torque[l,:]/self.TorqueMin - 1.0)**2.0) - 0.1

        # ----- Compute derivative ------
        dfdx = np.zeros(nbX)
        diecdx = np.zeros([m,nbX])
        for k in range(0,nbX):
            dfdx[k] = (df[k] - f)/step
            for l in range(0,m):
                diecdx[l,k] = (diec[l,k] - iec[l])/step
        
        result = dict([])
        result['dfdx'] = dfdx
        result['diecdx'] = diecdx
        
        return result
    
    def parallelMeshFixedCao(self,angles,mshName=[''],tag=[''],allowParamMesh=0):
        # CAO is fixed --> generate a mesh for each angular position in angles         
#        if(allowParamMesh==1):
#            self.setSaveParametric(1.0)

        k = 0
        for angle in angles:
            # set the angle of the rotor                   
            self.setRotorPosition(theta=angle,ResId=tag[k]+'/')
                   
            # run gmsh as a non-blocking subclient in //
#            self.OL.runNonBlockingSubClient('Gmsh', self.parameters['pathGmsh']
#                +'-setstring ResId ' + tag[k] + '/ ' 
#                + self.parameters['modelName'] + '.geo -2 -v 2 -o ' + mshName[k])
            # !!!! change this when getdp is able to read param mesh

            # create simultanously normal and parametric mesh
            self.OL.runNonBlockingSubClient('Gmsh', self.parameters['pathGmsh']
                    +' -setstring ResId ' + tag[k] + '/ '
                    +' -setstring mshName '+ self.parameters['analysisMeshName'][k] + ' '
                    +' -setstring mshParamName '+ self.parameters['meshParamName'][k]+' '
                    + self.parameters['modelName']+'1.geo - -v 0')
            k = k + 1
        self.OL.waitOnSubClients() 
        
        if(allowParamMesh==1):
            # Forbid parametric mesh for fem analysis -> cao.msh         
            self.setSaveParametric(0.0)
                 
        return self
                
    def parallelMeshReloc(self,x,angle,tagGeo,tagMsh):
        # n perturbed CAO + N parametric meshes       
        # --> relocate the parametric meshes into the perturbed cao 
        nbX = len(x)
#        print nbX
        nbAngle = len(angle)          
        for k in range(0, nbX):
            for l in range(0, nbAngle):
                # tag for each process
                tag = tagGeo[k] + tagMsh[l]
                
                # set the database                
                self.setOptimizationParameters(x=x[k,:],InputId=tag+'/')  
                
                # set the angle of the rotor                   
                self.setRotorPosition(theta=angle[l],ResId=tag+'/')

                # run mesh perturbation in //            
                self.OL.runNonBlockingSubClient('Gmsh', self.parameters['pathGmsh']
                +' -setstring MeshPerturbId '+ tagMsh[l]
                +' -setstring GeoPerturbedId '  + tagGeo[k]
                +' -setstring InputId '+ tag + '/' 
                +' relocate.geo -')
                
        self.OL.waitOnSubClients()
                         
        return self
    
    def parallelFemFixedCao(self,mshName,tag):        
        # run fem analysis for nbMesh meshes in //
        nbMesh = len(mshName)
        for k in range(0,nbMesh):
            # run getdp as a non-blocking subclient
            self.OL.runNonBlockingSubClient('GetDP',self.parameters['pathGetdp']
               + ' -setstring ResId ' + tag[k] + '/ '
               + self.parameters['modelName']+'.pro -msh ' + mshName[k]
               + ' -solve OptimStep -v 2')
        self.OL.waitOnSubClients()

    def caoSensitivity(self,x,parameters,f,iec):
        """
        Computation of the sensitivity of objective function and constraints with 
        respect to design variables at the design point x.

        Parameters
        ----------
        - x: array-like of shape = [nbParameters], where nbParameters is 
          the number of optimization parameters
        - f : scalar-like = objective function value evaluated at x
        - iec : scalar-like = inequality constraint value
        - theta: array-like of shape = [N], where N is the number of rotor 
          angular positions
        - step: scalar-like value corresponding to the discretization step of 
          finite difference
        
        Returns
        ---------
        - dfdx : array-like of shape = [nbParameters], where nbParameters is 
          the number of optimization parameters. It contains the derivative of 
          the objective function wrt design variables
        - iec : array-like of shape = [nbParameters], where nbParameters is 
          the number of optimization parameters. It contains the derivative of 
          the constraint value wrt design variables
        """
        sensType = parameters['SensitivityMethod']
        m = len(parameters['flag_constrType'])
        n = len(x)
        dfdx = np.zeros(n)
        diecdx = np.zeros([m,n])
        
        if(sensType=='FiniteDifference'):
            step = parameters['step']
            parameters['PerturbMesh'] = 1.0
            # Loop over design variables
            for k in range(0,n):
                print('iter deriv: '+str(k))
                # Perturb k-th optimization parameter
                perturb = self.delta(step,k,n)
            
                # Perturbed IEC and F
                dRes = self.caoAnalysis(x=x+perturb,parameters=parameters)

                # Compute derivative
                dfdx[k] = (dRes['f'] - f)/step
                print dfdx[k]
                for l in range(0,m):
                    diecdx[l,k] = (dRes['iec'][l] - iec[l])/step
                
                # reset the CAO to the unperturbed state
                self.setOptimizationParameters(x)
    
        if(sensType=='AdjointMethod'):#Adapt to electric machine
            # Read .pos file generated with getdp in caoAnalysis
            dfdx = self.readPostOpFile(n, path='res/SensitivityObj_AdjointMethod.pos')
            #diecdx[0,:] = [1.0]*n
            diecdx[0,:] = [1.0/(parameters['VolFrac']*parameters['VolMax'])]*n
            if(self.parameters['flagOptType']=='topology' and self.parameters['FilterSensitivity']):
                print('filter sensitivity')
                self.allowFilterSens(flag=1)
                self.setFilterSensitivity(rmin=self.parameters['rmin'])
                self.femAnalysis(usePerturbedMesh=parameters['PerturbMesh'],
                      modelName=parameters['modelName']+'.pro',
                       mshName=parameters['mshAnalysis'])
                dfdx = self.readPostOpFile(n, path='res/SensitivityObjFiltered.pos')
                self.allowFilterSens(flag=0)


        if(sensType=='SemiAnalytic'):#Adapt to electric machine
            self.setSemiAnalyticSens(flag=1)
            #extract K
            K = getStiffMatrix()
           
            N = len(K) #size of K
            dKdx = np.zeros([n,N,N])
            dgdx = np.zeros([n,N,1])
           
            for k in range(0,n):
                print('iter deriv: '+str(k))
                print( 'Send optimization parameters')
                perturb = self.delta(step,k,n)
                self.setOptimizationParameters(x+perturb)
                #save the perturbed cao
                os.system('cp '+ self.parameters['modelName'] + '.geo ' + self.parameters['modelName'] + 'Perturb.geo')
                print('mesh relocation')
                # relocation of parametric mesh into the perturbed CAO
                self.mesh(relocate=1.0,caoName=self.parameters['modelName']+'.geo',
                          mshName=self.parameters['mshName']+'Perturb.msh')
           
           
                # Perturbed K and g
                self.femAnalysis(usePerturbedMesh=1,
                            modelName=parameters['modelName']+'.pro',
                            mshName=self.parameters['mshName']+'Perturb.msh')
                dK = getStiffMatrix()
                dg = getLoadvector()
           
                # Compute derivative
                dKdx[k] = (dRes['K'] - K[k,:,:])/step
                dgdx[k] = (dRes['g'] - g[:])/step
    
                # reset the CAO to the unperturbed state
                self.setOptimizationParameters(x)


        result = dict([])
        result['dfdx'] = dfdx
        result['diecdx'] = diecdx

        return result

    def caoSensitivityParallel(self,x,parameters,f,iec):
    
        result = dict([])
        if(parameters['SensitivityMethod']=='FiniteDifference'):
            result['dfdx'],result['diecdx']= self.FiniteDifParallel(x, f, iec, parameters)
        #if(parameters['SensitivityMethod']=='AdjointMethod'):
        
        return result
    

    def initializeMeshName(self):
        """
            - if serial or // computations are used
            - modify parameters
        """
        
        if(self.parameters['flagOptType']=='serialShape'): # case of serial computations
            print('initialize mesh name')
            self.parameters['geoName'] = self.parameters['modelName']+'.geo'
            self.parameters['analysisMeshName'] = self.parameters['modelName']+'.msh'
            self.parameters['proName'] = self.parameters['modelName']+'.pro'
        if(self.parameters['flagOptType']=='parallelShape'): # case of // computations
            name = 'angle'
            nbAngles = len(self.parameters['rotorAngles'])
            self.parameters['genericName'] = ['']*nbAngles
            self.parameters['analysisMeshName'] = ['']*nbAngles
            self.parameters['meshParamName'] = ['']*nbAngles
            for k in range(0,nbAngles):
                self.parameters['genericName'][k] = name + str(k)
                tag = self.parameters['modelName'] + self.parameters['genericName'][k]
                self.parameters['analysisMeshName'][k] = tag +'.msh'
                self.parameters['meshParamName'][k] = tag + 'Params.msh'
        if(self.parameters['flagOptType']=='serialTopology'):
            self.parameters['geoName'] = self.parameters['modelName']+'.geo'
            self.parameters['analysisMeshName'] = self.parameters['modelName']+'Analysis.msh'
            self.parameters['designMeshName'] = self.parameters['modelName']+'Design.msh'
            self.parameters['proName'] = self.parameters['modelName']+'.pro'


    def createDirectories(self,nbDesignvar,nbAngularPositions):
        for k in range(0,nbDesignvar):
            for l in range(0,nbAngularPositions):
                path = "res/geo"+str(k)+"angle"+str(l)
                if (os.path.exists(path) == 0 ):
                    os.mkdir(path, 0755)
        for l in range(0,nbAngularPositions):
            path = "res/"+"angle"+str(l)
            if (os.path.exists(path) == 0 ):
                os.mkdir(path, 0755)

class OPTIMIZATION(Machine):
    """
        Optimization class
    """
    def __init__(self,parameters):
        Machine.__init__(self, parameters)
        self.parameters = parameters
        
        # optimization loop iteration
        self.iter = 0
        # objective function value at current iteration
        self.f = 0
        # value of f in last iteration
        self.lastF = np.zeros(self.parameters['iterMax'])
        # value of constraint in last iteration
        self.lastConstr = np.zeros([self.parameters['m'],self.parameters['iterMax']])
        
        #self.parameters['mshAnalysis'] = self.parameters['modelName']+'Analysis.msh'
        #self.parameters['mshDesign'] = self.parameters['modelName']+'Design.msh'
        
        if (parameters['flagOptType']=='serialShape' or parameters['flagOptType']=='parallelShape'):
            self.setOptimizationType(state=0.0) # Shape optimization
            self.n = parameters['nbDesignvar'] # number of optimization parameters
        else:
            # Topology optimization
            self.setOptimizationType(state=1.0)
            self.setVolFrac(self.parameters['VolFrac'])
            self.n = 1
            if(self.parameters['modelType']=='machine'):
                self.initializeMeshNameTopOpt(parameters=self.parameters)
            else:
                self.initializeMeshNameTopOpt(parameters=self.parameters)
        
            self.parameters['nbDesignVar'] = self.n
            parameters['indexStart'] = self.indexStart
            
        if(self.parameters['flagParallel']):
            self.createDirectories(self.n,len(self.parameters['rotorAngles']))
        
        # value of X in last iteration
        self.lastx = np.zeros(self.n)
        # inequality constraint value at current iteration
        self.iec = [0.]*self.parameters['m']
        # sensibility of f at current iteration
        self.dfdx = np.zeros(self.n)
        # sensibility of iec at current iteration
        self.diecdx = np.zeros([self.parameters['m'],self.n])
        self.pathSaveData = parameters['pathSaveData']
        self.solverName = parameters['solverName']
        self.paramName = parameters['paramName']
           
    def initializeMeshNameTopOpt(self,parameters):
    
        if (parameters['flagParallel']):
            # --- Parallel computation of f, dfdx ---
            
            # Create and save the design mesh in // (1 mesh / rotor position)
            self.meshRefine(length=1.4)
            self.initializeMeshName()

            for l in range(0,len(parameters['rotorAngles'])):
                path = "res/"+parameters['genericName'][l]
                if (os.path.exists(path) == 0 ):
                    os.mkdir(path, 0755)

            self.parallelMeshFixedCao(angles=self.parameters['rotorAngles'],
                                      mshName=self.parameters['analysisMeshName'],
                                      tag=self.parameters['genericName'],allowParamMesh=0)

            # Initialize the design variables (based on the design mesh)
            # generate the initial map (len(angles) map generated --> all the same)
            self.initDesignVariables(state=1.0)
            self.parallelFemFixedCao(mshName=self.parameters['analysisMeshName'],
                                     tag=self.parameters['genericName'])
            self.initDesignVariables(state=0.0)
            self.indexStart,self.n = self.nbElemMesh('res/designVar.pos')

            # Create the analysis mesh (refined version of the mesh used for the design)
            self.meshRefine(length=1.1)
            # refined version of the design mesh
            self.parallelMeshFixedCao(angles=self.parameters['rotorAngles'],
                                      mshName=self.parameters['analysisMeshName'],
                                      tag=self.parameters['genericName'],allowParamMesh=0)
        else:
            # --- serial computation of f, dfdx ---
            # Create and save the design mesh (coarsed --> reduce cpu time)
            print('create the design mesh')
            self.meshRefine(length=0.8)
            self.mesh(caoName=parameters['geoName'],mshName=parameters['designMeshName'])
                      
            # Initialize the design variables (based on the design mesh)
            print('generate initial design variables map')
            self.initDesignVariables(state=1.0)
            self.femAnalysis(modelName=parameters['proName'],mshName=parameters['designMeshName'])
            self.initDesignVariables(state=0.0)
            self.indexStart,self.n = self.nbElemMesh('res/designVar.pos')
            print self.n
            print self.indexStart
                
            # Create the analysis mesh (refined version of the mesh used for the design)
            print('create the analysis mesh')
            os.system('cp '+parameters['designMeshName']+' '+parameters['analysisMeshName'])
#            self.meshRefine(length=1.0)
#            self.mesh(caoName=parameters['geoName'],mshName=parameters['analysisMeshName'])

        return self
    
    def filterSensitivity(self, rmin, nelx, nely):
    	# Filter: Build (and assemble) the index+data vectors for the coo matrix format
        nfilter=nelx*nely*((2*(np.ceil(rmin)-1)+1)**2)
        iH = np.zeros(nfilter)
        jH = np.zeros(nfilter)
        sH = np.zeros(nfilter)
        cc=0
        H=np.zeros([nelx*nely,nelx*nely])
        for i in range(nelx):
            for j in range(nely):
                row=i*nely+j
                kk1=int(np.maximum(i-(np.ceil(rmin)-1),0))
                kk2=int(np.minimum(i+np.ceil(rmin),nelx))
                ll1=int(np.maximum(j-(np.ceil(rmin)-1),0))
                ll2=int(np.minimum(j+np.ceil(rmin),nely))
                for k in range(kk1,kk2):
                    for l in range(ll1,ll2):
                        col=k*nely+l
                        fac=rmin-np.sqrt(((i-k)*(i-k)+(j-l)*(j-l)))
                        iH[cc]=row
                        jH[cc]=col
                        sH[cc]=np.maximum(0.0,fac)
                        cc=cc+1
        
        
        # Finalize assembly and convert to csc format
        H=coo_matrix((sH,(iH,jH)),shape=(nelx*nely,nelx*nely)).tocsc()
        Hs=H.sum(1)
        return H,Hs

    def recompute(self, x):
        """
        recompute(x) performs the FEM analysis in order to get
        f(x), ec(x), ic(x), dfdx(x), decdx(x), dicdx(x), where x is the
        current solution
        """
        n = len(x)
        norm = 663986.0

        print('------------------------')
        print('Optimization iteration '+str(self.iter))
        print('------------------------')


        # 1. Compute f and iec
        # - create the mesh and analysis of the unperturbed cao
        # - compute the objective function and constraint value
        print(' -- Compute f, iec --')
        resAnalysis = self.Analysis(x=x,parameters=self.parameters)
        
#        # call self.Analysis(x,parameters) instead of
#        if (self.parameters['flagParallel']):
# #            resAnalysis = self.caoAnalysisParallel(x, parameters=self.parameters)
#            resAnalysis = self.caoAnalysisParallel2(x,parameters=self.parameters)
#        else:
#            #resAnalysis = self.caoAnalysis(x,parameters=self.parameters)
#            resAnalysis = self.caoAnalysis2(x,parameters=self.parameters)

        self.f = resAnalysis['f']
        self.iec = resAnalysis['iec']
        
        # normalize data
        if(self.iter==0):
            normF = self.f
        
        # 2. Compute sensitiviy (dfdx, diecdx) if sensitivity based algo
        if (self.parameters['flag_computeGrad']):
            # compute self.Sensitivity instead of ...
            print(' -- Compute Sensitivity --')
            resSens = self.Sensitivity(x=x,f=self.f,iec=self.iec,
                                       parameters=self.parameters)
        
#            if (self.parameters['flagParallel']):
#                self.parameters['step'] = 1e-04
##                resSens = self.FiniteDifParallel(x, f=self.f, iec=self.iec,
##                                                 parameters=self.parameters)
#                resSens = self.FiniteDifParallel2(x, f=self.f, iec=self.iec,
#                                                   parameters=self.parameters)
#            else:
#                self.parameters['step'] = 1e-04
##                resSens = self.caoSensitivity(x,f=self.f,iec=self.iec,
##                                              parameters=self.parameters)
#                resSens = self.FiniteDiffSerial(x, f=self.f, iec=self.iec,
#                                                parameters=self.parameters)

        self.dfdx = resSens['dfdx']
        self.diecdx = resSens['diecdx']
        
#        print normF
#        print self.dfdx
#        self.f = self.f/normF
#        self.dfdx = self.dfdx/normF
#        print self.dfdx

        # Update current solution
        for i in range(0,len(x)):
            self.lastx[i] = x[i]
        self.iter = self.iter + 1

        # Save data
        if (self.parameters['flagOptType']=='serialTopology'):
            # save x for debug
            os.system('cp '+self.pathDesignVar
                          +' res/designVar'+str(self.iter)+'.pos')
        np.save(self.pathSaveData+'objectiveFunction/'+'gradBrad_'+str(self.iter)+'.npy', self.dfdx)
        np.save(self.pathSaveData+'objectiveFunction/'+'gradConstr_'+str(self.iter)+'.npy', self.diecdx)
        np.save(self.pathSaveData+'designVar/x_'+str(self.iter)+'_'+self.solverName+'_'+self.paramName+'.npy', x)
        self.lastF[self.iter] = self.f
        for k in range(0,self.parameters['m']):
            self.lastConstr[k,self.iter] = self.iec[k]
        
        # Display
        if (self.parameters['flagOptType']=='serialShape'
            or self.parameters['flagOptType']=='parallelShape'):
            print(' -- Result --')
            print('  x = {0} \n  f = {1}\n  dfdx = {2}\n  iec = {3}\n  diecdx = {4}'
            .format(x,self.f,self.dfdx,self.iec,self.diecdx)) 
        else:
            print('f = '+ str(self.f)
            +';iec = '+ str(self.iec))
                        
        return self
    			
    def needrecompute(self,x):
        
        """
        needrecompute(x) returns 
            - true if x is different from previous iteration 
            - false otherwise 
        """
        n = len(x)

        for i in range(0,n):
            if (x[i] != self.lastx[i]):
                return True   
        return False

    def ObjFunc(self, x):
        """
            func(x) computes the non linear objective function (openOpt)
        """
    
        if self.needrecompute(x)==1:
            self.recompute(x)
                   
        return self.f
        
    def ineqConstr(self, x):    
        """
            ineqConstr(x) computes the constraints of type "<= 0" (openOpt)
        """
    
        if self.needrecompute(x)==1:
            self.recompute(x)
            
        # constraints values        
        g = np.zeros(self.parameters['m'])
        for k in range(0,self.parameters['m']):
            g[k] = self.parameters['sign'][k]*self.iec[k]
            
        return g

    def ObjFuncDeriv(self, x):    
        """
            ObjFuncDeriv(x) computes sensitivity of objective function (openOpt) 
        """
    
        if self.needrecompute(x)==1:
            self.recompute(x)
                
        df = np.zeros([1,self.n])
        for i in range(0,self.n):
            df[0,i] = self.dfdx[i]
       
        return df
        
    def ineqConstrDeriv(self, x):    
        """
            ineqConstrDeriv(x) computes the derivative of constraints wrt 
            design variables x (openOpt)
        """
    
        if self.needrecompute(x)==1:
            self.recompute(x)
            
        diec = np.zeros([self.parameters['m'],self.n]) 
        
        for i in range(0,self.n):
            for k in range(0,self.parameters['m']):
                diec[k,i] = self.parameters['sign'][k]*self.diecdx[k,i]
            
        return diec
    
    def funcAndDeriv(self, x, grad):
        """
            myfunc(x, grad) computes the objective function and its sensitivity
            (NLOPT)
        """
    
        if self.needrecompute(x)==1:
            self.recompute(x)
                
        if grad.size > 0:
            for i in range(0,len(self.dfdx)):
                grad[i] = self.dfdx[i]
       
        return self.f

    def ieconstrAndDeriv(self,x, grad):
        """
        ieconstrAndDeriv(x, grad) computes the inequality constraints and their 
        sensitivity (NLOPT) 
        """
   
        if self.needrecompute(x)==1:
            self.recompute(x)
                        
        if grad.size > 0:
            for k in range(0,self.parameters['m']):
                for i in range(0,self.n):              
                    grad[i] = self.parameters['sign'][k]*self.diecdx[k,i]
    
        return self.parameters['sign'][0]*self.iec[0]

    def funcAndConstr_pyopt(self, x):
        """
            myfunc(x) computes the objective function and its sensitivity 
        """
    
        if self.needrecompute(x)==1:
            self.recompute(x)
                
        fail = 0
        
        # objective function value              
        f = self.f

        # constraints values        
        g = np.zeros(self.parameters['m'])
        for k in range(0,self.parameters['m']):
            g[k] = self.parameters['sign'][k]*self.iec[k]
    
        return f,g,fail

    def funcAndConstrDeriv_pyopt(self,x,f,g):

        if self.needrecompute(x)==1:
            self.recompute(x)

        g_obj = np.zeros([1,self.n])
        g_con = np.zeros([self.parameters['m'],self.n]) 
        fail = 0
        
        for i in range(0,self.n):
            g_obj[0,i] = self.dfdx[i]
            for k in range(0,self.parameters['m']):
                g_con[k,i] = self.parameters['sign'][k]*self.diecdx[k,i]
        print g_obj
        print g_con
        return g_obj,g_con,fail

def plotBradial(p):
#    print('b_rms = '+str(OL.getNumber("Output - Mechanics/1Autres/1b_radial_rms")))
#    theta,br = extractBr(p+'res/b_radial_airgap.dat',2,101)
#    theta,bf = extractBr(p+'res/b_radialFund_airgap.dat',2,101)
    br = readPosFile(p+'res/b_radial_airgap.dat',8,N=101)
    bf = readPosFile(p+'res/b_radialFund_airgap.dat',8,N=101)
    theta = readPosFile(p+'res/b_radial_airgap.dat',6,N=101)
    theta = np.rad2deg(theta)
    plt.figure
    plt.plot(theta, br,label='Br')
    plt.plot(theta, bf,label='Bf')
    plt.xlabel('Rotor position [deg]')
    plt.legend(loc="upper right")
    plt.grid(True)
    plt.show()
    
def readPosFile(path,col,N=101):
    file=open(path,'r')
    data = file.readlines()
    file.close()
    fileLines = data[3:len(data)]
    extrectedData = np.zeros(N)
    for n in range(0,N):
        if (len(fileLines[n]) != 1):
            ligne = map(float, fileLines[n].split())
            extrectedData[n] = ligne[col]
    return extrectedData
    
def plotTorque(torque_basic,torque_opt,theta,path):
    torque_mean_basic = np.mean(torque_basic)
    torque_mean_opt = np.mean(torque_opt)
    torque_ripple_basic = np.max(torque_basic)-np.min(torque_basic)
    torque_ripple_opt = np.max(torque_opt)-np.min(torque_opt)
    
    print('basic model[Nm] (Mean,Ripple) = ' + str(torque_mean_basic) + ';' + str(torque_ripple_basic))    
    print('optimized model [Nm] (Mean,Ripple) = ' + str(torque_mean_opt)+ ';' + str(torque_ripple_opt))
    print('Relative variation of Mean Torque  = ' + str((torque_mean_opt -torque_mean_basic)/torque_mean_basic))
    print('Relative variation of Torque Ripple = ' + str((torque_ripple_opt - torque_ripple_basic)/torque_ripple_basic))
    
    plt.figure

    plt.axhline(y=torque_mean_opt,color='g',ls='-',linewidth=4,label='Mean Torque (opt)')
    plt.axhline(y=torque_mean_basic,color='g',ls='--',linewidth=1,label='Mean Torque (init)')
    
    plt.axvline(x=7.5,color='r',ls='dashed',linewidth=1)
    plt.axvline(x=15,color='r',ls='dashed',linewidth=1)
    
    plt.plot(theta,torque_basic,'--',label='Torque(Nm)-init')
    plt.plot(theta,torque_opt,label='Torque(Nm)-opt')
    plt.xlabel('Rotor angular position [deg]')
    plt.legend(loc="upper left")
    plt.grid(True) 
    if (path != ''):
        plt.savefig(path)
    plt.show() 
    
def plotTorqueBis(torque_basic,torque_opt,torque_opt1,theta,path):
    torque_mean_basic = np.mean(torque_basic)
    torque_mean_opt = np.mean(torque_opt)
    torque_mean_opt1 = np.mean(torque_opt1)
    
    torque_ripple_basic = np.max(torque_basic)-np.min(torque_basic)
    torque_ripple_opt = np.max(torque_opt)-np.min(torque_opt)
    
    print('basic model[Nm] (Mean,Ripple) = ' + str(torque_mean_basic) + ';' + str(torque_ripple_basic))    
    print('optimized model [Nm] (Mean,Ripple) = ' + str(torque_mean_opt)+ ';' + str(torque_ripple_opt))
    print('Mean Torque Optimized / Mean Torque basic = ' + str(torque_mean_opt /torque_mean_basic))
    print('Torque Ripple Optimized / Torque Ripple basic = ' + str(torque_ripple_opt/torque_ripple_basic))
    
    plt.figure

    plt.axhline(y=torque_mean_opt,color='g',ls='-',linewidth=4,label='Mean Torque (opt 1)')
    plt.axhline(y=torque_mean_opt1,color='g',ls='*-',linewidth=4,label='Mean Torque (opt 2)')
    plt.axhline(y=torque_mean_basic,color='g',ls='--',linewidth=1,label='Mean Torque (init)')
    
    plt.axvline(x=7.5,color='r',ls='dashed',linewidth=1)
    plt.axvline(x=15,color='r',ls='dashed',linewidth=1)
    
    plt.plot(theta,torque_basic,'--',label='Torque(Nm)-init')
    plt.plot(theta,torque_opt,label='Torque(Nm)-opt (Tmean >= 2.5 Nm)')
    plt.plot(theta,torque_opt1,label='Torque(Nm)-opt (Tmean >= 4.5 Nm)')
    plt.xlabel('Rotor angular position [deg]')
    plt.legend(loc="upper right")    
    plt.grid(True) 
    if (path != ''):
        plt.savefig(path)
    plt.show() 

def plotTorque2(torque,theta,path):
    torque_mean = np.mean(torque)
    torque_max = np.max(torque)
    torque_min = np.min(torque)
#    torque_ripple = torque_max-torque_min
    thetaMin = np.where(torque==torque_min)
    thetaMax = np.where(torque==torque_max)
#    print thetaMin
#    print thetaMax
    
    plt.figure
    plt.axhline(y=torque_mean,color='g',ls='dashed',linewidth=4,label='Mean Torque')
    plt.axvline(x=7.5,color='r',ls='dashed',linewidth=1)
    plt.axvline(x=15,color='r',ls='dashed',linewidth=1)
#    plt.text(theta[thetaMin[0]],1,'Tmin',fontsize=14)
#    plt.text(theta[thetaMax[0]],torque_max,'Tmax',fontsize=14)

#    plt.axhline(y=torque_max,color='k',ls='dashed',linewidth=4,label='Tmax')
#    plt.axhline(y=torque_min,color='k',ls='dashed',linewidth=4,label='Tmin')
    plt.plot(theta,torque,'-*',label='Torque(Nm)')
#    plt.annotate('Tmin', xy=(theta[thetaMin[0]], torque_min), xytext=(thetaMin, torque_min),
#            arrowprops=dict(arrowstyle="->"))
#    plt.annotate('Tmax', xy=(theta[thetaMax[0]], torque_max), xytext=(thetaMax, torque_max),
#            arrowprops=dict(arrowstyle="->"))
    plt.xlabel('Rotor angular position [deg]')
    plt.legend(loc="upper left")
#    plt.axis([thetaMin-2.0, thetaMax+2.0, torque_min-1.0, torque_max+1.0])
    plt.grid(True) 
    if (path != ''):
        plt.savefig(path)
    plt.show() 
    
def plotTorque3(torque,theta,path):
    plt.figure
    plt.axhline(y=np.mean(torque),color='g',ls='dashed',linewidth=4)
    plt.plot(theta,torque,'-*')
    plt.xlabel('Electrical angle [deg]')
    plt.ylabel('Mean Torque (Nm)')   
    plt.grid(True) 
    if (path != ''):
        plt.savefig(path)
    plt.show() 
        
def plotVector(x,y,flagSave,pathSave,label):
    plt.figure
    if (len(x)==0): 
        plt.plot(y,'-*')
    else:    
        plt.plot(x,y,'-*')
    plt.xlabel(label[0])
    plt.ylabel(label[1])
    plt.grid(True)
    if (flagSave==1):
        plt.savefig(pathSave)
    plt.show() 
    

def plotCoggingTorque(torque_basic,torque_opt,theta):
    print('basic model[Nm] (Mean,Ripple) = ' + str(np.mean(torque_basic)) + ';' + str(np.max(torque_basic)-np.min(torque_basic)))    
    print('optimized model [Nm] (Mean,Ripple) = ' + str(np.mean(torque_opt))+ ';' + str(np.max(torque_opt)-np.min(torque_opt)))

    plt.figure
    plt.plot(theta,torque_basic,label='Cogging Torque(Nm)-basic geometry')
    plt.plot(theta,torque_opt,label='Cogging Torque(Nm)-optimal geometry')
    plt.xlabel('Rotor angular position')
    plt.legend(loc="upper right")    
    plt.grid(True) 
    plt.savefig('CoggingTorqueCompare.pdf')
    plt.show()    
    
def plotObjFuncIter(savedF,iter):     
    plt.figure
    plt.plot(savedF[0:iter])
    plt.xlabel('nombre iterations')
    plt.ylabel('Objective function')
    plt.grid(True)
    plt.show()

def extractBr(path,M,N):
#==============================================================================
# - Inputs
#   -> path is a string containing the location of the file which contains 
#     Br (radial componnent of B field in the air gap)  
#   -> M is the number of circles of different radius r at which Br is computed 
#   -> N is the total number of angular positions at which Br is computed
# - Outputs
#   extractBr(path,M=3,N=101) returns:
#       - Br, a vector of N elements, s.t Br[k] = sum_i=0^M {Br[k,i]}
#       - theta, the angular position at which is calculated Br[k]
#==============================================================================
    file=open(path,'r')
    data = file.readlines()
    file.close()
    fileLines = data[(3+N+1):len(data)]
    Br_brut = np.zeros((M,N))
    theta = np.zeros(N)
    Br = np.zeros(N)
    for m in range(0,M):
        for n in range(0,N):
            if (len(fileLines[n]) != 1):
                ligne = map(float, fileLines[n].split())
                Br_brut[m,n] = ligne[8]
                if m == 0:
                    theta[n] = np.rad2deg(ligne[6])
                if n == 36:
                    fileLines = fileLines[N+2:len(data)] 
    for n in range(0,N):
        Br[n] = np.mean(Br_brut[:,n])
    return theta,Br
    
def readDataFile(path,N):
    file=open(path,'r')
    data = file.readlines()
    file.close()
    fileLines = data[3:len(data)]
    theta = np.zeros(N)
    Br = np.zeros(N)
    for n in range(0,N):
        if (len(fileLines[n]) != 1):
            ligne = map(float, fileLines[n].split())
            Br[n] = ligne[8]
            theta[n] = np.rad2deg(ligne[6])
    return theta,Br
    
def extractOptSaves(path):
    file=open(path,'r')
    data = file.readlines()
    file.close()
    N = len(data)
    result = np.zeros(N)
    for k in range(0,N):
        line = map(float, data[k].split())
        result[k] = line[0]
    return result
    
def saveData(path,data):
    file = open(path,'w')
    for k in range(0,len(data)):
        file.write(str(data[k])+'\n')
    file.close()
    
def plotOptimPath(f_param,x_param,x_opt,dim=0,axisLabel='',path=''):
    xlabel = axisLabel[0]
    ylabel = axisLabel[1]
    if (dim == 1):
        X,Y = np.meshgrid([x_param[0,:]],[x_param[1,:]])
        matplotlib.rcParams['xtick.direction'] = 'out'
        matplotlib.rcParams['ytick.direction'] = 'out'
        plt.figure()
        CS = plt.contour(X, Y, f_param, 10)
        plt.clabel(CS, inline=1, fontsize=10)        
    if (dim == 0):
        plt.figure()
        plt.plot(x_param,f_param)
    plt.xlabel(xlabel)
    plt.ylabel(ylabel)
    plt.title('Objective function')
    plt.hold(True)
    # Add the optimization path:
    N = len(x_opt)
    for k in range(0,N-1):
        plt.text(x_opt[k,0],x_opt[k,1],str(k),fontsize=12)
        plt.plot([x_opt[k,0],x_opt[k+1,0]],[x_opt[k,1],x_opt[k+1,1]],'c',linewidth=2)
    plt.plot(x_opt[N-1,0],x_opt[N-1,1],'.c',label=str(k+1),markersize=30)
    plt.savefig(path)
    plt.show()

def plot2Param(f_param,x_param,dim=0,axisLabel='',path='',title=''):
    xlabel = axisLabel[0]
    ylabel = axisLabel[1]
    if ( dim == 1 ):
        X,Y = np.meshgrid([x_param[0,:]],[x_param[1,:]])
        matplotlib.rcParams['xtick.direction'] = 'out'
        matplotlib.rcParams['ytick.direction'] = 'out'
        plt.figure()
        CS = plt.contour(X, Y, f_param, 10)
        plt.clabel(CS, inline=1, fontsize=10)        
    if ( dim == 0 ):
        plt.figure()
        plt.plot(x_param,f_param)
        plt.grid(True)
    plt.xlabel(xlabel)
    plt.ylabel(ylabel)
    plt.title(title)
    plt.savefig(path)
    plt.show()

def writeVectorMatlab(fileName,dataName,data):
    n = len(data)
    file=open(fileName,'w')
    for i in range(1,n+1):
        file.write(dataName+'('+str(i)+')= '+str(data[i-1])+';\n')
    file.close()

def writeScalarMatlab(fileName,dataName,data):
    file=open(fileName,'w')
    file.write(dataName+' = '+str(data)+';\n')
    file.close()
