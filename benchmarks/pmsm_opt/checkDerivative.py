""" 
    Author: Erin Kuci
    
    Check the computation of sensitivity 
    
"""

import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks/pmsm_opt/tool')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *

# ************************************************************************
# **** Define parameters                                             ****
# ************************************************************************
parameters = {
    'PrintOpt':99,
    'fileName': 'pmsm',
    'AnalysisModelType':'FEM',
    'OptType': 0, #0:'Shape', 1:'Topology'
    'analysisType': ['static'],
    'NLsys': 0,
    'NLcurve': 1,
    'performance':[Compliance],
    'allowCentralFD': 1,
    'rotorAngles': np.array([0.0]),#np.linspace(7.5,15.0,5)
    'defautValue': {'TorqueNominal':90.0}}
x = np.array([0.0028])
n = len(x)

# ************************************************************************
# **** Instantiate the sensitivity module                            *****
# ************************************************************************
op = Sensitivity(parameters)

# ************************************************************************
# **** Compute sensitivity analysis                                  *****
# ************************************************************************
# Initialization
execMode = 2 #0:debug, 1:sensitivity, 2:plot
pathMeshCharLen = 'Geo/Mesh Characteristic Length Factor'
lc = [0.65] #np.arange(0.15,1.0,(1.0-0.15)/30.0)
step = [1.0e-05]
#step = np.array([1.0e-016,1.0e-015,1.0e-014,1.0e-013,1.0e-012,1.0e-011,
#                 1.0e-010,1.0e-09,1.0e-08,1.0e-07,1.0e-06,1.0e-05,
#                 1.0e-04,1.0e-03])
sensMeth = np.array(['GlobalFiniteDifference','SemiAnalyticAvm',
                     'AnalyticAvmVarDomLie','AnalyticDirectVarDomLie'])
#sensMeth = np.array(['SemiAnalyticAvm','AnalyticAvmVarDomLie'])
Nlc = len(lc)
Nstep = len(step)
nbMeth = len(sensMeth)
pathSave = 'resSens'
if (os.path.exists(pathSave)==0):
    os.mkdir(pathSave, 0755)

if ( execMode == 1 ): # debug code

    # Compute f
    print('*'*80+'\n** Compute performance function **\n'+'*'*80)
    op.setScalarParameter(pathMeshCharLen,lc[0])
    op.MeshCao(x, op.parameters)
    resAnalysis = op.Analysis(x,parameters)
    print('*'*80+'\n** d[f1, ..., fk]/dx with method [M1,...Mk] **\n'+'*'*80)
    op.parameters['step'] = step[0]
    op.parameters['SensitivityMethod'] = np.copy(sensMeth)
    dfdx = op.Sensitivity(x,resAnalysis['fj'],resAnalysis['dataFEM'],op.parameters)
    dfdx = dfdx['dfjdx']
    print('[f1, ..., fk]:{}\n[M1,...Mk]:{}\nd[f1, ..., fk]/dx:{}'.\
          format(resAnalysis['fj'],op.parameters['SensitivityMethod'],dfdx))

elif( execMode == 2 ): # check sensitivity
    
    print('*'*80+'\n** df/dx with method [M1,...Mk] for (lc,step) **\n'+'*'*80)
    f = np.zeros(Nlc)
    dfdx = np.zeros([Nlc,Nstep,nbMeth,n])
    relErr = np.zeros([Nlc,Nstep,nbMeth,n])
    
    # Compute df/dx
    for j in range(Nlc): # loop over mesh quality (lc)
        op.setScalarParameter(pathMeshCharLen,lc[j])
        op.MeshCao(x, op.parameters)
        
        for k in range(Nstep): # loop over perturbation step (step)
            op.parameters['step'] = step[k]
            
            for l in range(nbMeth): # loop over sens. analysis methods
                # compute f(x)
                resAnalysis = op.Analysis(x,op.parameters)
                f[j] = np.copy(resAnalysis['fj'][0])
                
                # compute df/dx(x)
                op.parameters['SensitivityMethod'] = [sensMeth[l]]
                resSens = op.Sensitivity(x,resAnalysis['fj'],parameters=op.parameters)
                dfdx[j,k,l] = resSens['dfjdx']
                
                # compute relative error wrt FD
                relErr[j,k,l] = op.relError(dfdx[j,k,0],dfdx[j,k,l])
                
                # display result
                print('method:{},lc:{},step:{}'.format(sensMeth[l],lc[j],step[k]))
                print('f:{}\ndfdx:{}\nrelErr({},{}):{}'.\
                      format(f[j],dfdx[j,k,l],sensMeth[l],sensMeth[0],relErr[j,k,l]))
                print('-'*80)

    # Save result
    saveData(pathSave,f,dfdx,step,lc,relErr,sensMeth)

else: #load data and plot
    sensMeth,f,dfdx,step,lc,relErr = loadData(pathSave)
    plotMultiVec(lc,np.abs(dfdx[:,0,:,0][0]),pathSave+'/dfdx_lc.pdf',
                 labelx='element size',labely=sensMeth,
                 log=0,titleName='Derivative')
    plotMultiVec(lc,np.abs(relErr[0,:,1:,0][0]),pathSave+'/relErr_lc.pdf',
                 labelx='element size',labely=sensMeth[1:],
                 log=3,titleName='RelErr(.,FD)')
    plotMultiVec(step,np.abs(dfdx[0,:,:,0][0]),pathSave+'/dfdx_step.pdf',
                 labelx='perturbation step',labely=sensMeth)
    plotMultiVec(step,np.abs(relErr[:,0,1:,0][0]),pathSave+'/relErr_step.pdf',
                labelx='perturbation step', labely=sensMeth[1:])


