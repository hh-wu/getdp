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

#aa = ''
#bb = np.linspace(0,255,100)
#for k in bb:
#    aa += '{125,0,0,'+str(int(k))+'},'
#print aa
# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
nbEig = 3
aa = [getattr(defPerfFunc,'EigFreqSquare_'+str(k)) for k in range (1,nbEig+1)]

parameters = {
    'plot':1,
    'Print':99,
    'analysisType':['u_Mec'],#['static','eig'],
    'nbEig':4,
   
    # Model
    'file':'beam',
    'AnalysisModelType':'FEM',
    'adjoint':['Adjoint_u_Mec'],
    'direct':['Direct_u_Mec'],
    'nbEigRigid':0,
    'defautValue':{
        'OptType':'topology',
        'MaterialInterpLaw':'simp','SimpDegree':3.0,
        'RecombineSurf':1,'lc':1.0},

    # Design variables
    'elementOfDomainTopOptTAG':[1000],

    # Performance function
    'performance':[Compliance, Volume],
    'fjMax': [0.0,Volume],
    'sign':np.array([1.0,1.0]),

#    'performance':[MassTO, vonMises],
#    'fjMax': [0.0,2.0e09],
#    'sign':np.array([1.0,1.0]),

#    'performance':[MinEigFreqSquare, Volume],
#    'fjMax':[0.0, Volume],
#    'sign':np.array([-1.0, 1.0]),

#    'performance':aa +[Volume],
#    'fjMax':aa+[Volume],
#    'sign':np.array([-1]*nbEig+[1]),

    # Sensitivity analysis
    'Sensitivity':['AdjointFixedDom','Analytic'],
#    'SensitivityMethod':['Analytic','AnalyticAvmFixedDom'],
    #'SensitivityMethod':['AnalyticEig','Analytic'],
    #'SensitivityMethod':['AnalyticEig']*nbEig+['Analytic'],

    'perfSensHandle':[volumeSens],#[massSens], #for 'analytic' methods
    'Filter':[1,-1],#[0]
    'rmin':0.025,#0.00041667*1.5/(2.0*np.sqrt(3.0)),#0.00041667*1.5,
    'nelx':300,
    'nely':100,
    # Optimizer set-up
    'optimizer':'mma2007',#'mma2007','conlinFile','gcmma','openopt'
    #'solverName':'MMA-SVANBERG07',
    'xtol':1.0e-02,
    'iterMax':1000}

x = np.array([0.5])
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
#op.solveOpt(op.x,op.xmax,op.xmin,op.fjMax,1,op.parameters)
op.OC(op.x,op.fjMax,op.parameters)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
op.postprocessing('resOpt/histOptClassAttr.txt',75)





