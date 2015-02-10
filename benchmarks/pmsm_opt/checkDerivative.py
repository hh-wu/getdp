""" 
    Author: Erin Kuci
    
    Check the computation of sensitivity 
    
"""

import sys
sys.path.insert(0,'/Users/erinkuci/Desktop/src/getdp/benchmarks_kst/tool')
from tool import *

# ------------------------------------------------------------------------------
# --- Set the parameters ---
# ------------------------------------------------------------------------------
parameters = Dictionnaire()
# Set useful path
parameters['pathGmsh'] = '/Applications/Gmsh.app/Contents/MacOS/gmsh '
parameters['pathGetdp'] = '/Applications/getdp '
parameters['modelName'] = 'pmsm'

#0(serial computation of objective and its derivative); 1 (otherwise)
parameters['AnalysisModelType']='FEM'
parameters['flagParallel'] = 0
parameters['flagOptType'] = 0 #0:'Shape', 1:'Topology'
parameters['modelType'] = 'machine'
parameters['analysisType'] = 0.0
parameters['NLferro'] = 0.0
parameters['NLferroLaw'] = 1.0

# Design variables
parameters['paramName'] = 'lm_em_vm_xm_rma'
paramNameDisp = 'lm em vm xm rma'
x = np.array([0.0])
parameters['nbDesignVar'] = len(x)
n = len(x)
parameters['n'] = n
xmax = np.array([0.05]*n)
xmin = np.array([0.02]*n)

# Performance function
parameters['performance'] =['TorqueVariance']
#['TorqueVariance'],['BradialErrorInt']
parameters['allowCentralFD'] = 1

# Physical quantities computation
parameters['rotorAngles'] = np.array([0.0])#np.linspace(7.5,15.0,5)
parameters['defautValue'] = {'TorqueNominal':90.0}
parameters['m'] = len(parameters['performance']) - 1 # number of constraints

# ------------------------------------------------------------------------------
# --- Create the model ---
# ------------------------------------------------------------------------------
op = Sensitivity(parameters)

# ------------------------------------------------------------------------------
# --- Compute sensitivity analysis ---
# ------------------------------------------------------------------------------
# Init
execMode = 2
pathMeshCharLen = 'Geo/Mesh Characteristic Length Factor'
lc = [0.7]#np.arange(0.15,1.0,(1.0-0.15)/30.0)
#print lc
step = [1.0e-10]
#step = np.array([1.0e-016,1.0e-015,1.0e-014,1.0e-013,1.0e-012,1.0e-011,
#                 1.0e-010,1.0e-09,1.0e-08,1.0e-07,1.0e-06,1.0e-05,
#                 1.0e-04,1.0e-03])
sensMeth = ['SemiAnalyticAvm','GlobalFiniteDifference','SemiAnalyticAvm']
Nlc = len(lc)
Nstep = len(step)
nbMeth = len(sensMeth)
pathSave = 'resSens'
if (os.path.exists(pathSave)==0):
    os.mkdir(pathSave, 0755)

if ( execMode == 1 ):
    # Compute f
    print('-------------------------------------------------------')
    print('-- Compute performance function                      --')
    print('-------------------------------------------------------')
    op.setScalarParameter(pathMeshCharLen,lc[0])
    resAnalysis = op.Analysis(x,parameters)
    print('-------------------------------------------------------')
    print('-- d[f1, ..., fk]/dx with method [M1,...Mk]          --')
    print('-------------------------------------------------------')
    op.parameters['step'] = step[0]
    op.parameters['SensitivityMethod'] = np.copy(sensMeth)
    dfdx = op.Sensitivity(x,resAnalysis,op.parameters)
    print('[f1, ..., fk]:{}'.format(resAnalysis))
    print('[M1,...Mk]:{}'.format(op.parameters['SensitivityMethod']))
    print('d[f1, ..., fk]/dx:{}'.format(dfdx))
elif( execMode == 2 ):
    print('-------------------------------------------------------')
    print('-- df/dx with method [M1,...Mk] for (lc,step)        --')
    print('-------------------------------------------------------')
    f = np.zeros(Nlc)
    dfdx = np.zeros([Nlc,Nstep,nbMeth,n])
    op.setScalarParameter(pathMeshCharLen,lc[0])
    resAnalysis = op.Analysis(x,parameters)
    print('obj:{}'.format(resAnalysis))

    # Compute df/dx
    for j in range(Nlc): # loop over mesh quality (lc)
        op.setScalarParameter(pathMeshCharLen,lc[j])
        for k in range(Nstep): # loop over perturbation step (step)
            op.parameters['step'] = step[k]
            for l in range(nbMeth): # loop over sens. analysis methods
                # compute f only if FD
                if(sensMeth[l]=='GlobalFiniteDifference'):
                    resAnalysis = op.Analysis(x,op.parameters)
                    f[j] = np.copy(resAnalysis[0])
                # compute df/dx
                op.parameters['SensitivityMethod'] = [sensMeth[l]]
                dfdx[j,k,l] = op.Sensitivity(x,resAnalysis,op.parameters)
                # compute relative error wrt FD
                if(sensMeth[l]=='GlobalFiniteDifference'):
                    valDfDx = np.copy(np.abs(dfdx[j,k,l]))
                    relError = 0.0
                else:
                    relError = (np.abs(dfdx[j,k,l])-valDfDx)/valDfDx
                # display
                print('-------------------------------------------------------')
                print('lc:{0},step:{1},meth:{2}'.format(lc[j],step[k],sensMeth[l]))
                print('   ==> f = {0}'.format(f[j]))
                print('   ==> dfdx = {0}'.format(dfdx[j,k,l]))
                print('   ==> relErr(FD) = {0}'.format(relError))
                print('-------------------------------------------------------')
    
    # Save result
    np.save(pathSave+'/f_lc.npy',f)
    np.save(pathSave+'/dfdx_lc_step_meth.npy',dfdx)
    np.save(pathSave+'/perturbStep.npy',step)
    np.save(pathSave+'/meshCharLen.npy',lc)
    scipy.io.savemat(pathSave+'/f_lc.mat',{'f':f})
    scipy.io.savemat(pathSave+'/dfdx_lc_step_meth.mat',{'dfdx':dfdx})
    scipy.io.savemat(pathSave+'/meshCharLen.mat',{'lc':lc})
    scipy.io.savemat(pathSave+'/perturbStep.mat',{'step':step})
else:
    pass

# TODO
# - Prise en compte des liaisons entre ddls au niveau de la bande de mouvement
