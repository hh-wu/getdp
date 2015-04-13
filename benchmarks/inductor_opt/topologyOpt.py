"""
    Author: Erin Kuci
    
    Topology optimization using SIMP method and MMA algorithm (matlab)
    
"""
import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *
import defPerfFunc

# ************************************************************************
# ***** Create the parameters                                        *****
# ************************************************************************
parameters = {}

parameters['plot'] = 1
parameters['PrintOpt'] = 99

# Model
parameters['fileName'] = 'inductor'
parameters['AnalysisModelType'] = 'FEM'
parameters['OptType'] = 1 #0:'Shape',1:'Topology'
parameters['analysisType'] = ['static']#['static','eig']
parameters['NLsys'] = 1
parameters['NLcurve'] = 0 #0:EI-core,1:Park
parameters['defautValue'] = {'MaterialInterpLaw':0,'SimpDegree':3.0,
                             'InputCurrent':3.0,'RecombineSurf':0,
                             'lc':2.5,'DomOpt':0}
# Design variables
parameters['paramNameDisp']  = ['x']
parameters['VolFrac'] = 0.75
parameters['elementOfDomainTopOptTAG'] = [1000]#[1000,1100]
x = np.array([parameters['VolFrac']])
xmin = np.array([0.001])
xmax = np.array([1.0])

# Performance function
parameters['performance'] = [Compliance,Volume]
parameters['fjMax'] = [0.0,Volume]
parameters['sign'] = np.array([-1.0,-1.0])

#nbEig = 1
#aa = [getattr(defPerfFunc,'EigFreqSquare_'+str(k)) for k in range (1,nbEig+1)]
#parameters['performance']=[Compliance,Volume]+aa
#parameters['fjMax'] = [0.0,Volume]+[aa[0]]
#parameters['sign'] = np.array([-1.0,1.0]+[1.0])

#nbEig = 1
#aa = [getattr(defPerfFunc,'EigFreqSquare_'+str(k)) for k in range (1,nbEig+1)]
#parameters['performance']=[Compliance]+aa
#parameters['fjMax'] = [0.0]+[1.0]#[aa[0]]
#parameters['sign'] = np.array([-1.0]+[1.0])


# Sensitivity analysis
parameters['flag_computeGrad']  = 1
parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']
#parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom','Analytic']+\
#                                  ['AnalyticEig']
parameters['perfSensHandle'] = [volumeSens] #for 'analytic' method
#parameters['SensitivityMethod'] = ['AnalyticAvmFixedDom']+['AnalyticEig']
#parameters['perfSensHandle'] = [] #for 'analytic' method
parameters['FilterSensitivity'] = []#[1,0]
parameters['rmin'] = 0.005

# Optimizer set-up
parameters['optimizer'] = 'conlinFile' #'mma2007','gcmma','openopt','conlinFile'
parameters['solverName'] = 'CONLIN'
#'MMA-SVANBERG','mma','CONLIN',PURE-PRIMAL,MMA-SVANBERG07
parameters['xtol'] = 1.0e-02

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = Optimization(parameters,xmin,xmax,x)
#res = op.generateFuncDerivFunc(op.x)
#print res
#res=op.readPostOpFileMultiStep(op.n,10,'"d_eig"',op.PostProMap['SensEig'])
#print res
# ************************************************************************
# ***** Optimization routine                                         *****
# ************************************************************************
# Preprocess
op.preprocessing(op.parameters)

# Call optimizer
op.solveOpt(op.x,op.xmax,op.xmin,op.fjMax,2,op.parameters)

# Close optimizer
op.close()

# ************************************************************************
# ***** Optimization Post-Process                                    *****
# ************************************************************************
# Optimization history
#op.postprocessing('resOpt/histOptClassAttr.txt',72)

#path = ['resOpt/optHist_3A_vfrac0.4_nl_EI_conlinNorm/histOptClassAttr.txt',
#        'resOpt/optHist_3A_vfrac0.4_nl_EI_openoptNorm/histOptClassAttr.txt']
#tag = [25,50]

# compare optimization
#path = ['resOpt/optHist_3A_vfrac0.75_nl_EI_conlinNorm/histOptClassAttr.txt',
#        'resOpt/optHist_3A_vfrac0.75_nl_EI_openoptNorm/histOptClassAttr.txt']
#tag = [27,47]
#label = ['CONLIN','OpenOpt']
#op.multiPlotOpt(path,tag,label)






