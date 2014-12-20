"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method and MMA algorithm (matlab)
    
"""
import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool4 import *

#TODO: check the derivative wrt the design parameters
#in multiple rotor angles case

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = Dictionnaire()

parameters['plot'] = 1

# Model
parameters['modelName'] = 'pmsm'
parameters['AnalysisModelType']='FEM'
parameters['flagParallel'] = 0
parameters['flagOptType'] = 'Topology' #'Shape', 'Topology'
parameters['simpPenal'] = 2.0
parameters['modelType'] = 'machine'
parameters['analysisType'] = 0.0
parameters['NLferro'] = 0.0
parameters['NLferroLaw'] = 1.0
parameters['TorqueNominal'] = 2.0

# Design variables
parameters['paramNameDisp']  = ['nu']
parameters['VolFrac'] = 0.5
parameters['elementOfDomainTopOptTAG'] = 1000 #1000:rotor_fe, 2000:stator_fe

# Performance function
#parameters['performance'] = ['Compliance', 'Volume', 'MeanTorqueConstr']
#parameters['performance'] = ['Compliance', 'MeanTorque']
#parameters['performance'] = ['Compliance', 'Volume']
#parameters['performance'] = ['Volume','MeanTorque']
parameters['performance'] = ['TorqueVariance', 'Volume']
#parameters['performance'] = ['BradialErrorInt', 'Volume']
#parameters['performance'] = ['BradialErrorInt', 'Volume','MeanTorque']
parameters['rotorAngles'] = np.array([0.0])
#np.linspace(7.5,22.5,5)
#np.array([7.5, 15.0, 15.0+7.5])
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['sign'] = [1.0, 1.0]
parameters['fiMax'] = np.array([0.0, 0.0])
parameters['normalizeObj'] = 1

# Sensitivity analysis
parameters['flag_computeGrad']  = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
#parameters['SensitivityMethod'] = ['Analytic','AnalyticAvmFixedDom']
parameters['FilterSensitivity'] = [1,0]
parameters['rmin'] = 0.0001

# Optimizer set-up
parameters['optimizer']='gcmma'
parameters['solverName'] = 'GCMMA-SVANBERG'
parameters['xtol'] = 1.0e-02

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = OPTIMIZATION(parameters)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
#op.parameters['rotorAngles'] = np.linspace(7.5,22.5,5)
#x = op.x0 #np.ones(op.n)
#torqueBasic = op.getTorqueProfile(x, op.parameters,'resOpt/torqueBasic.npy')
#plotTorque2(torqueBasic,parameters['rotorAngles'],'resOpt/torqueBasic.eps')

# Preprocess
op.preprocessing(op.parameters)

# Create optimizer
op.create(op.parameters)
#
## Call optimizer
op.mmaSvanFor(op.x0,op.xmax,op.xmin,op.parameters['fiMax'][1:],op.parameters,2)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x,f = op.postprocessing(op.parameters)

# Compute torque
iter = len(x[:,0])
print iter
pathSave = ['resOpt/torqueBasic.npy','resOpt/torqueBasic.eps',
            'resOpt/torqueOpt.npy','resOpt/torqueOpt.eps',
            'resOpt/torqueCompare.eps']
#pathLoad = ['resOpt/torqueBasic.npy','resOpt/torqueOpt.npy']
#pathLoad = ['resOpt/torqueBasic.npy','']
pathLoad = ['','']
angles=np.linspace(7.5,22.5,30)
xf = x[iter-1]
op.compareTorque(op.x0,xf,angles,op.parameters,pathSave,pathLoad)

