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
parameters['NLcurve'] = 0 #0:EI-core,1:Park
parameters['defautValue'] = {'MaterialInterpLaw':0,'SimpDegree':3.0,
                             'InputCurrent':3.0,'RecombineSurf':0,
                             'lc':2,'DomOpt':0}
# Design variables
parameters['paramNameDisp']  = ['nu']
parameters['VolFrac'] = 0.75
parameters['elementOfDomainTopOptTAG'] = [1000]#[1000,1100]
x0 = np.array([parameters['VolFrac']])
xmin = np.array([0.001])
xmax = np.array([1.0])

# Performance function
parameters['performance'] = ['Compliance', 'Volume']
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['sign'] = [-1.0,1.0]

# Sensitivity analysis
parameters['flag_computeGrad']  = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = []#[1,0]
parameters['rmin'] = 0.005

# Optimizer set-up
#parameters['optimizer']= 'gcmma' #'gcmma','openopt','conlinFile'
#parameters['solverName'] = 'GCMMA-SVANBERG' #'GCMMA-SVANBERG','mma','CONLIN'
parameters['optimizer']= 'conlinFile'
parameters['solverName'] = 'mmaMatlab'#'CONLIN'
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
op.solveOpt(op.x0,op.xmax,op.xmin,op.fjMax,0,op.parameters)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x,f = op.postprocessing(parameters)
