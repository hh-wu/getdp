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
parameters = Dictionnaire()
parameters['warmStart'] = 0
parameters['hole'] = 0
parameters['transfinite'] = 0
parameters['holeWidth'] = 0.15
parameters['holeLength']= 0.36

# Model
parameters['modelName'] = 'def'
parameters['AnalysisModelType']='FEM'
parameters['flagParallel'] = 0
parameters['flagOptType'] = 'Topology' #'Shape', 'Topology'
parameters['defautValue']={'SimpPenal':3.0} #2.0->5.0 (3.0 ok)

# Design variables
parameters['paramNameDisp'] = 'E'
parameters['VolFrac'] = 0.4
parameters['elementOfDomainTopOptTAG'] = 1000
x0 = np.array([0.4])
xmax = np.array([1.0])
xmin = np.array([0.001])

# Performance function
parameters['performance'] = ['Compliance', 'Volume']
parameters['unitElemVol'] = 0
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['fjMax'] = []
parameters['sign'] = [1.0,1.0]

# Sensitivity analysis
parameters['flag_computeGrad'] = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = [1,0]#[0,0]
parameters['rmin'] = 0.007*1.5

# Optimizer set-up
parameters['optimizer']='gcmma'
parameters['solverName'] = 'GCMMA-SVANBERG'
parameters['xtol'] = 1.0e-02
parameters['plot'] = 1

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = Optimization(parameters,xmin,xmax,x0)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

# Create optimizer
op.create(op.parameters)

# Call optimizer
op.mmaSvanFor(op.x0,op.xmax,op.xmin,op.parameters['fjMax'][1:],op.parameters,2)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x,f = op.postprocessing(op.parameters)




