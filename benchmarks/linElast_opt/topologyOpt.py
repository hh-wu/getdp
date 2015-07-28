"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method and MMA algorithm (matlab)
    
"""
import sys
sys.path.append('../../benchmarks_kst/tool/')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *
import defPerfFunc

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
nbEig = 3
aa = [getattr(defPerfFunc,'EigFreqSquare_'+str(k)) for k in range (1,nbEig+1)]

parameters = {
    'plot':1,
    'PrintOpt':99,
    'analysisType':['static','eig'],
    'nbEig':4,
   
    # Model
    'fileName':'beam',
    'AnalysisModelType':'FEM',
    'nbEigRigid':0,
    'OptType':1, #0:'Shape',1:'Topology'
    'defautValue':{'MaterialInterpLaw':3,'SimpDegree':3.0,
                   'RecombineSurf':1,'lc':3.0},
    # Design variables
    'VolFrac':0.5,
    'elementOfDomainTopOptTAG':[1000],

    # Performance function
    'performance':[Compliance, Volume],
    'fjMax': [0.0,Volume],
    'sign':np.array([1.0,1.0]),

#    'performance':[MinEigFreqSquare, Volume],
#    'fjMax':[0.0, Volume],
#    'sign':np.array([-1.0, 1.0]),

#    'performance':aa +[Volume],
#    'fjMax':aa+[Volume],
#    'sign':np.array([-1]*nbEig+[1]),

    # Sensitivity analysis
    'flag_computeGrad':1,
    'SensitivityMethod':['AnalyticAvmFixedDom','Analytic'],
    #'SensitivityMethod':['AnalyticEig','Analytic'],
    #'SensitivityMethod':['AnalyticEig']*nbEig+['Analytic'],

    'perfSensHandle':[volumeSens], #for 'analytic' methods
    'FilterSensitivity':[1,0],
    'rmin':0.005,
    
    # Optimizer set-up
    'optimizer':'conlinFile',#'mma2007','conlinFile','gcmma','openopt'
    'solverName':'CONLIN',
    'xtol':1.0e-02,
    'iterMax':1000}

x = np.array([parameters['VolFrac']])
xmax = np.array([1.0])
xmin = np.array([0.001])

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = Optimization(parameters,xmin,xmax,x)

# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

# Call optimizer
op.solveOpt(op.x,op.xmax,op.xmin,op.fjMax,1,op.parameters)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
#op.postprocessing('resOpt/histOptClassAttr.txt',85)





