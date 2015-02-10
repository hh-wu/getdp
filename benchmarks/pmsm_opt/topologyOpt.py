"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method and MMA algorithm (matlab)
    
"""
import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool import *

#TODO: check the derivative wrt the design parameters
#in multiple rotor angles case

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = Dictionnary()

parameters['warmStart'] = 0
parameters['plot'] = 1

# Model
parameters['fileName'] = 'pmsm'
parameters['AnalysisModelType']='FEM'
parameters['flagOptType'] = 1
parameters['analysisType'] = 0
parameters['NLsys'] = 0
parameters['defautValue']={'MaterialInterpLaw':0,'SimpDegree':3.0,
                           'RecombineSurf':1,'lc':0.2,'TorqueNominal':2.0}

# Design variables
parameters['paramNameDisp']  = ['nu']
parameters['VolFrac'] = 0.75
parameters['elementOfDomainTopOptTAG'] = [1000] #1000:rotor_fe, 2000:stator_fe
x0 = np.array([parameters['VolFrac']])
xmax = np.array([1.0])
xmin = np.array([0.001])

# Performance function
parameters['performance'] = ['Compliance', 'Volume']
parameters['rotorAngles'] = np.array([0.0])
#np.linspace(7.5,22.5,5)
#np.array([7.5, 15.0, 15.0+7.5])
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['sign'] = [-1.0, 1.0]

# Sensitivity analysis
parameters['flag_computeGrad']  = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = []#[1,0]
parameters['rmin'] = 0.0001

# Optimizer set-up
parameters['optimizer']= 'conlinFile'#'gcmma'
parameters['solverName'] = 'CONLIN'#'MMA-SVANBERG'
parameters['xtol'] = 1.0e-02

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = Optimization(parameters,xmin,xmax,x0)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

# Call optimizer
op.solveOpt(op.x0,op.xmax,op.xmin,op.fjMax,2,op.parameters)

# Close optimizer
op.close()

## ************************************************************************
## ***** Optimization Post-Process                                    *****
## ************************************************************************
## Optimization history
#x,f = op.postprocessing(op.parameters)
#
## Compute torque
#iter = len(x[:,0])
#print iter
#pathSave = ['resOpt/torqueBasic.npy','resOpt/torqueBasic.eps',
#            'resOpt/torqueOpt.npy','resOpt/torqueOpt.eps',
#            'resOpt/torqueCompare.eps']
##pathLoad = ['resOpt/torqueBasic.npy','resOpt/torqueOpt.npy']
##pathLoad = ['resOpt/torqueBasic.npy','']
#pathLoad = ['','']
#angles=np.linspace(7.5,22.5,30)
#xf = x[iter-1]
#op.compareTorque(op.x0,xf,angles,op.parameters,pathSave,pathLoad)

