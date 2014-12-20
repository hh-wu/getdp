"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method and MMA algorithm (matlab)
    
"""

import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool4 import *

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = Dictionnaire()

# Model
parameters['modelName'] = 'pmsm'
parameters['AnalysisModelType']='FEM'
parameters['flagParallel'] = 0
parameters['flagOptType'] = 'Topology' #'Shape', 'Topology'
parameters['simpPenal'] = 1.0
parameters['modelType'] = 'machine'
parameters['analysisType'] = 0.0
parameters['NLferro'] = 0.0
parameters['NLferroLaw'] = 1.0
parameters['TorqueNominal'] = 2.3

# Design variables
parameters['paramNameDisp']  = ['nu']
parameters['VolFrac'] = 0.65
parameters['elementOfDomainTopOptTAG'] = 1000

# Performance function
#parameters['performance'] = ['Compliance', 'Volume', 'MeanTorqueConstr']
#parameters['performance'] = ['Compliance', 'MeanTorque']
#parameters['performance'] = ['Compliance', 'Volume']
parameters['performance'] = ['TorqueVariance', 'Volume']
#parameters['performance'] = ['TorqueVariance']
#parameters['performance'] = ['BradialErrorInt', 'Volume']
#parameters['performance'] = ['BradialErrorInt', 'Volume','MeanTorque']
parameters['rotorAngles'] = np.linspace(7.5,22.5,5)
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['sign'] = [1.0,1.0]
parameters['fiMax'] = np.array([0.0,0.0])

# Sensitivity analysis
parameters['flag_computeGrad']  = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = [1,0]
parameters['rmin'] = 0.007*2

# Optimizer set-up
parameters['optimizer']='conlinFile'
parameters['solverName'] = 'CONLIN'
parameters['xtol'] = 1.0e-02
parameters['plot'] = 1

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = OPTIMIZATION(parameters)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

# Create optimizer
op.create(op.parameters)

# Call optimizer
dc = np.zeros(op.parameters['m']+1)
#jt = np.array([1,2]) # reciproc/linear
jt = np.array([0,2]) # convex/linear
#jt = np.array([2,2]) # linear/linear
d2 = []
name='input'
op.conlinForFile(name,op.x0,op.xmax,op.xmin,op.parameters['fiMax'],
                 dc,jt,op.parameters,d2)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x,f = op.postprocessing(parameters)

#os.system('cp '+'res/designVar' + str(iterMax)+'.pos '
#               +'res/designVarFilt.pos')
#
#x = op.readPostOpFile(n=op.n, path='res/designVarFilt.pos')
#xf = x[:]
#for k in range(op.n):
#    if(x[k] <= 0.8):
#        xf[k] = 0.0
#    else:
#        xf[k] = 1.0
#op.refreshPostOpFile(x=xf, path='res/designVarFilt.pos',
#                     indexStart=op.parameters['indexStart'])
#



