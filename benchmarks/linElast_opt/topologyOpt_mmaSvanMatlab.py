"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method on fixed mesh
    Algo: OC(matlab), MMA(matlab), MMA(OpenOpt)
    
"""
import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool import *

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = Dictionnary()

parameters['warmStart'] = 0
parameters['plot'] = 1

# Model
parameters['fileName'] = 'beam'
parameters['AnalysisModelType']='FEM'
parameters['flagOptType'] = 1 #0:'Shape',1:'Topology'
parameters['defautValue']={'MaterialInterpLaw':0,'SimpDegree':3.0,
    'RecombineSurf':1,'lc':2.0}

# Design variables
parameters['paramNameDisp'] = 'E'
parameters['VolFrac'] = 0.4
parameters['elementOfDomainTopOptTAG'] = [1000]
x0 = np.array([parameters['VolFrac']])
xmax = np.array([1.0])
xmin = np.array([0.001])

# Performance function
parameters['performance'] = ['Compliance', 'Volume']
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['sign'] = [1.0,1.0]

# Sensitivity analysis
parameters['flag_computeGrad'] = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
parameters['FilterSensitivity'] = [1,0]
parameters['rmin'] = 0.009

# Optimizer set-up
#'conlinFile','gcmma'
parameters['optimizer']= 'gcmma'
#'mmaMatlab','OC','CONLIN','GCMMA-SVANBERG'
parameters['solverName'] = 'GCMMA-SVANBERG'
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
op.mmaSvanMatlab(op.x0,op.xmax,op.xmin,op.parameters['fjMax'][1:],op.parameters)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
x0,xf,obj,constr = op.postprocessing(x0,parameters)



