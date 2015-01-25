"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method and MMA algorithm (matlab)
    
"""
import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool import *

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = Dictionnary()

parameters['plot'] = 1
parameters['warmStart'] = 0

# Model
parameters['fileName'] = 'inductor'
parameters['AnalysisModelType'] = 'FEM'
parameters['flagOptType'] = 1 #0:'Shape',1:'Topology'
parameters['analysisType'] = 0
parameters['NLsys'] = 0
parameters['NLcurve'] = 1
parameters['defautValue'] = {'MaterialInterpLaw':0,'SimpDegree':3.0}

# Design variables
parameters['lc'] = 3.0
parameters['paramNameDisp']  = ['nu']
parameters['VolFrac'] = 0.75
parameters['elementOfDomainTopOptTAG'] = 1000
x0 = np.array([parameters['VolFrac']])
xmin = np.array([0.001])
xmax = np.array([1.0])

# Performance function
parameters['performance'] = ['Compliance', 'Volume']#'TorqueVariance'
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['sign'] = [-1.0,1.0]

# Sensitivity analysis
parameters['flag_computeGrad']  = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = [1,0]
parameters['rmin'] = 0.001

# Optimizer set-up
parameters['optimizer']='gcmma'
parameters['solverName'] = 'GCMMA-SVANBERG'
parameters['xtol'] = 1.0e-02

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = Optimization(parameters,xmin,xmax,x0)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
#op.parameters['rotorAngles']=np.linspace(7.5,15.0,5)
#torqueBasic = op.getTorqueProfile(op.x0, op.parameters,'resOpt/torqueBasic.npy')
#plotTorque2(torqueBasic,parameters['rotorAngles'],'resOpt/torqueBasic.eps')

# Preprocess
op.preprocessing(op.parameters)

# Call optimizer
op.mmaSvanFor(op.x0,op.xmax,op.xmin,op.parameters['fjMax'][1:],op.parameters,2)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x,f = op.postprocessing(parameters)

# Compute torque
pathSave = ['resOpt/torqueBasic.npy','resOpt/torqueBasic.eps',
            'resOpt/torqueOpt.npy','resOpt/torqueOpt.eps',
            'resOpt/torqueCompare.eps']
#pathLoad = ['resOpt/torqueBasic.npy','resOpt/torqueOpt.npy']
pathLoad = ['','']
#angles=np.linspace(7.5,15.0+7.5,15*3)
angles = np.linspace(7.5,15.0,10)
iter = len(x[:,0])
#print iter
xf = x[iter-1]
#xf = op.readPostOpFile(op.n, 'res/designVarFinal1PosOk.pos')
op.compareTorque(op.x0,xf,angles,op.parameters,pathSave,pathLoad)

