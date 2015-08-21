""" 
    Author: Erin Kuci
    
    Check the computation of sensitivity 
"""

import sys
sys.path.append('../../benchmarks_kst/tool/')
from tool import *
from defPerfFunc import *
from defPerfFuncSens import *

# ************************************************************************
# **** Input                                                         *****
# ************************************************************************
x = np.array([50e-03,50e-03]) #np.array([op.getScalarParamVal('Input/OptParam/x_0')])
varName = ['Parameters/Magnet 1/1Length [m]',
           'Parameters/Magnet 2/1Length [m]']
execMode = 1 #1:sensitivity, 2:plot
lc = [1.0] #np.logspace(0.0, -0.4, num=10)
step = [1.0e-06] #np.logspace(-16, -3, num=14)
#sensMeth = ['FiniteDifference','AdjointSemi','AdjointLie','DirectLie']
sensMeth = ['FiniteDifference']*2
pathSave = 'resSens'

# ************************************************************************
# **** Define parameters                                              ****
# ************************************************************************
parameters = {
    'Print':4,
    'file': 'magnets',
    'analysis': ['MagSta_a'],
    'analysisPost':['MagSta_a'],#not necessary since corresp. to 'analysis'
    'semiPost':['SemiAdjoint_MagSta_a'],
    'adjoint':['Adjoint_MagSta_a'],
    'direct':['Direct_MagSta_a'],
    'variables':varName,
    'performance':[Compliance]*2,
    'allowCentralFD': 0,
    'defaultValue':{'OptType':['Input/Optimization Type','shape']}
}

# ************************************************************************
# **** Instantiate the sensitivity module                            *****
# ************************************************************************
op = Sensitivity(parameters)

# ************************************************************************
# **** Compute sensitivity analysis                                  *****
# ************************************************************************
# Initialization
if (not(os.path.exists(pathSave))):os.mkdir(pathSave, 0755)

if( execMode ): # check sensitivity

    print('*'*80+'\n** df/dx with method [M1,...Mk] for (lc,step) **\n'+'*'*80)
    sensMeth = np.array(sensMeth)
    Nlc = len(lc);Nstep = len(step);nbMeth = len(sensMeth);n = len(x)
    f = np.zeros(Nlc);dfdx = np.zeros([Nlc,Nstep,nbMeth,n]);relErr = np.copy(dfdx)
    
    # Compute df/dx
    for j in range(Nlc): # loop over mesh quality (lc)
        op.setScalarParameter('Geo/Mesh Characteristic Length Factor',lc[j])
        op.setDesignVariables(x)
        op.MeshCao(op.parameters)
        mm = parameters['file']+'.msh'
        os.system('cp ' + mm + ' ' + pathSave + '/'+ mm + str(j))

#        op.computeVelocityField(op.parameters['variables'][0],
#                        -op.parameters['step'])
#        os.system('cp res/velocity.pos res/velocity_1.pos')

        for k in range(Nstep): # loop over perturbation step (step)
            op.parameters['step'] = step[k]
 
#            # compute f(x)
#            resAnalysis = op.Analysis(x,op.parameters)
#            print resAnalysis
#            # compute df/dx(x)
#            op.parameters['Sensitivity'] = sensMeth
#            resSens = op.Sensitivity(x,resAnalysis['fj'],op.parameters)
#            print resSens
            for l in range(nbMeth): # loop over sens. analysis methods
                # compute f(x)
                resAnalysis = op.Analysis(x,op.parameters)
                f[j] = np.copy(resAnalysis['fj'][0])

                # compute df/dx(x)
                op.parameters['Sensitivity'] = [sensMeth[l]]
                resSens = op.Sensitivity(x,resAnalysis['fj'],op.parameters)
                dfdx[j,k,l] = resSens['dfjdx']
                
                # compute relative error wrt FD
                relErr[j,k,l] = op.relError(dfdx[j,k,0],dfdx[j,k,l])
                
                # display result
                print('-'*80)
                print('method:{},lc:{},step:{}'.format(sensMeth[l],lc[j],step[k]))
                print('f:{}\ndfdx:{}\nrelErr({},{}):{:.4E}'.\
                      format(f[j],dfdx[j,k,l],sensMeth[l],sensMeth[0],
                             float(relErr[j,k,l])))
                print('-'*80)

    # Save result
    saveData(pathSave,f,dfdx,step,lc,relErr,sensMeth)

else: #load data and plot
    sensMeth,f,dfdx,step,lc,relErr = loadData(pathSave)
#    plotMultiVec(np.arange(len(lc)),np.abs(dfdx[:,0,:,0]),pathSave+'/dfdx_lc.pdf',
#        labelx='Mesh Density',labely=sensMeth,log=0,titleName='Derivative')
#    plotMultiVec(1/lc,np.abs(relErr[:,0,1:,0]), pathSave+'/relErr_lc.pdf',
#                 labelx='element size', labely=sensMeth[1:],
#                 log=3,titleName='RelErr(.,FD)')
    plotMultiVec(step,np.abs(dfdx[0,:,:,0]),pathSave+'/dfdx_step.pdf',
        labelx='perturbation step',labely=sensMeth,log=1,titleName='Derivative')
#    plotMultiVec(step,np.abs(relErr[:,0,1:,0]),pathSave+'/relErr_step.pdf',
#                labelx='perturbation step', labely=sensMeth[1:])

