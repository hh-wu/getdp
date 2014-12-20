""" 
    Author: Erin Kuci
    
    Check the computation of sensitivity 
    
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
parameters['flagOptType'] = 'Topology'
parameters['modelType'] = 'machine'
parameters['analysisType'] = 0.0
parameters['NLferro'] = 1.0
parameters['NLferroLaw'] = 1.0
parameters['TorqueNominal'] = 60.0

# Design variables
parameters['paramNameDisp']  = 'nu'
parameters['VolFrac'] = 0.7 #0.7-->ok
parameters['elementTAG'] = 1000

# Performance function
parameters['performance'] = ['BradialErrorInt']
parameters['rotorAngles'] = np.array([30.0]) #np.linspace(7.5,15.0,5)
parameters['m'] = len(parameters['performance']) - 1 # number of constraint
parameters['sign'] = [1.0]
parameters['fiMax'] = np.array([0.0])

parameters['plot'] = 0
parameters['optimizer']='gcmma'

# ************************************************************************
# ***** Instantiate the Model and the Optimizer                      *****
# ************************************************************************
op = OPTIMIZATION(parameters)

# ************************************************************************
# ***** Impact of finite difference discretization step              *****
# ************************************************************************

# Compute performance function
f = op.caoAnalysis(op.x0,op.parameters)
print('obj:'+str(f[0]))

# Compute df/dx
step = [1.0e-06]
N = len(step)
pathMesh = op.parameters['analysisMeshName']
viewName = 'sensitivity'
#sensMeth = ['SemiAnalyticAvmFixedDom','AnalyticAvmFixedDom']
sensMeth = ['AnalyticAvmFixedDom','FiniteDifference']
parameters['allowCentralFD'] = 0
nbMeth = len(sensMeth)
dfdx = np.zeros([N,nbMeth,parameters['n']])

for k in range(N): # loop over step
    print('*** step:{} ***'.format(step[k]))
    for l in range(nbMeth): # loop over step
        print('    ***>>> meth:{}'.format(sensMeth[l]))
        # save path
        pathData = 'res/sensMeth'+str(l)+'.pos'
        
        # perturbation step if FD
        op.parameters['step'] = step[k]

        # sensitivity filtering
        op.parameters['FilterSensitivity'] = [0]
        parameters['rmin'] = 0.001

        # sensitivity method
        op.parameters['SensitivityMethod'] = [sensMeth[l]]
        
        # sensitivity computation
        dfdx[k,l] = op.Sensitivity(op.x0,f,op.parameters)
        
        # write the result as a post-pro
        op.writePostPro(pathMesh,pathData,dfdx[k,l],op.elemName,viewName)
        np.save('checkDeriv_dfdx.npy',dfdx)

dfdx = np.load('checkDeriv_dfdx.npy')
print dfdx[0,0]
print dfdx[0,1]

