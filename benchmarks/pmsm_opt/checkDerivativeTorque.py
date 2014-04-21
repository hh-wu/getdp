""" 
    Author: Erin Kuci
    
    Check the computation of sensitivity 
    
"""

import numpy as np
import pylab as pl
import matplotlib.pyplot as plt

from tool import *
    
# *****************************************************************************
#                               MAIN PROGRAM 
# *****************************************************************************
if __name__ == "__main__":

    # --- create the parameters ---
    parameters = {}
    # Set useful path
    parameters['pathGmsh'] = '/Applications/Gmsh.app/Contents/MacOS/gmsh '
    parameters['pathGetdp'] = '/Applications/getdp '
    parameters['modelName'] = 'v'
    
    #0(serial computation of objective and its derivative); 1 (otherwise)
    parameters['flagParallel'] = 0
    #'serialShape', 'serialTopology', 'parallelShape', 'parallelTopology'
    parameters['flagOptType'] = 'serialShape'
    parameters['modelType'] = 'machine'
    parameters['analysisType'] = 0.0 #if machine
    parameters['NLferro'] = 1.0      #if machine
    parameters['NLferroLaw'] = 1.0   #if machine

    # Design variables
    parameters['paramName'] = 'lm_em_vm_xm_rma'
    paramNameDisp = 'lm em vm xm rma'
    x0 = np.array([0.04])
    parameters['nbDesignvar'] = len(x0)
    n = len(x0)
    
    # Objective function
    # 1:'BradialErrorInt',2:'TorqueRipple',
    # 3:'TorqueVariance',4:'IronLosses',5:'Compliance'
    parameters['flag_objType'] = 'Energy'
    parameters['PerformanceType'] = 1
    parameters['nbAngularPositions'] = 1
    parameters['rotorAngles'] = np.array([3.5])

    # Constraints
    constrName = '-'            #'TorqueMean'
    parameters['TorqueNominal'] = 30.0
    parameters['m'] = 1                       # number of constraints
    # 'MeanTorque', 'TorqueRipple','Unconstrained','Volume'
    parameters['flag_constrType'] = ['Unconstrained']*parameters['m']
    # -1:>=, 1:<=
    parameters['sign'] = [-1.0]*parameters['m']

    # --- Set Machine Model and Optimizer ---
    op = Machine(parameters)

# ----------------------------------------------------------------------------- 
# --- Impact of finite difference discretization step ---
# -----------------------------------------------------------------------------
# --> Find the best finite difference step
    # linear system: step=1e-03
    #     FD:       6.48734270e-05
    #     FDC:      4.47844122e-05 !!
    #     SA-AVM:   9.23546472e-05
    #     SA-C-AVM: 4.59533237e-05 !!
    # non-linear system: step=1e-04
    #     FD:       0.00101887
    #     FDC:      0.00094977 !!
    #     SA-AVM:   0.0016681
    #     SA-C-AVM: 0.00103995 !!
    #     (SA-C-AVM - FDC)/FDC = 0.09
    
  
    # Parameter
    #step = np.linspace(1.0e-16, 2.5e-03, 20)
    #step = np.linspace(1.0e-03, 1.0, 10)
    step = [0.001, 0.01]
    print step
    
    # Init
    N = len(step)
    dfdx_fd = np.zeros(N)
    dfdx_fdc = np.zeros(N)
    dfdx_saavm = np.zeros(N)
    dfdx_saavmc = np.zeros(N)
    dKdx0 = np.zeros(N)
    dKdx0c = np.zeros(N)
    relErr1 = np.zeros(N)
    relErr2 = np.zeros(N)
    relErr3 = np.zeros(N)
    relErr4 = np.zeros(N)
    
    
    # 1. Compute f and iec                
    resAnalysis = op.Analysis(x=x0,parameters=op.parameters)
    print('obj:'+str(resAnalysis['f']))
    
    # 2. Compute the derivative: Loop over Parameter value:
    for k in range(0,N):
        print('iter '+str(k))
        op.parameters['step'] = step[k]
        print('step = '+str(step[k]))

#        # finite difference
#        print('-- finite Dif. --')
#        resSens1 = op.FiniteDiffSerial(x=x0, f=resAnalysis['f'],
#                                       iec=resAnalysis['iec'],
#                                       parameters=op.parameters,torque=1)
#        print resSens1
#        
#        print('-- finite Dif. Central --')
#        resSens1c = op.FiniteDiffSerial(x=x0, f=resAnalysis['f'],
#                                       iec=resAnalysis['iec'],torque=1,
#                                       parameters=op.parameters,central=1)
#        print resSens1c
#
#        # semi-analytic adjoint variable method
#        print('-- Semi-analytic AVM --')
#        resSens2 = op.SemiAnalytic(x=x0,parameters=op.parameters,
#                                   torque=1)
#        print resSens2

        # semi-analytic (central fd) adjoint variable method
        print('-- Semi-analytic (central FD) AVM --')
        resSens2c = op.SemiAnalytic(x=x0,parameters=op.parameters,
                                    torque=1,central=1)
        print resSens2c

#        # save data
#        #dKdx0[k] = resSens2['dKdx']
#        #dKdx0c[k] = resSens2c['dKdx']
#        dfdx_fd[k] = resSens1['dfdx']
#        dfdx_fdc[k] = resSens1c['dfdx']
#        dfdx_saavm[k] = resSens2['dfdx']
#        dfdx_saavmc[k] = resSens2c['dfdx']
#
###        relErr1[k] = (dfdx_saavm[k] - dfdx_fd[k])/dfdx_fd[k]
###        relErr2[k] = (dfdx_saavm[k] - dfdx_fdc[k])/dfdx_fdc[k]
###        relErr3[k] = (dfdx_fd[k] - dfdx_fdc[k])/dfdx_fd[k]
###        print relErr1[k]
###        print relErr2[k]
###        print relErr3[k]
##
#
#    np.save('PerturbStep.npy',step)
#    np.save('dfdx_fd.npy',dfdx_fd)
#    np.save('dfdx_fdc.npy',dfdx_fdc)
#    np.save('dfdx_saavm.npy',dfdx_saavm)
#    np.save('dfdx_saavmc.npy',dfdx_saavmc)
##np.save('dKdx0_saavmc.npy',dKdx0c)
##np.save('dKdx0_saavm.npy',dKdx0)
#
#    step = np.load('PerturbStep.npy')
#    dfdx_fd = np.load('dfdx_fd.npy')
#    dfdx_fdc = np.load('dfdx_fdc.npy')
#    dfdx_saavm = np.load('dfdx_saavm.npy')
#    dfdx_saavmc = np.load('dfdx_saavmc.npy')
#    step = step/x0[0]
#
#    print step
#    print dfdx_saavm
#    print dfdx_saavmc
#    print dfdx_fd
#    print dfdx_fdc
#
#    # Plot the results
#    xlabel = 'discretization step [m]'
#    plt.figure
#    plt.semilogx(step,dfdx_fd,'*-',label='FD')
#    plt.semilogx(step,dfdx_fdc,'o-',label='FD-C')
#    plt.semilogx(step,dfdx_saavm,'-',label='SA-AVM')
#    plt.semilogx(step,dfdx_saavmc,'--',label='SA-C-AVM')
##    plt.plot(step,dKdx0,'--',label='dK/dx(0,0) FD')
##    plt.plot(step,dKdx0c,'*-',label='dK/dx(0,0) FD-C')
#    plt.xlabel(xlabel)
#    plt.ylabel("df/dx")
#    plt.legend(loc="upper right")
#    plt.grid(True)
#    plt.savefig('compare_FD_SAAVM_FDC_Torque.pdf')
#    plt.show()

#    for k in range(0,N):
#        relErr1[k] = (dfdx_saavm[k] - dfdx_fd[k])/dfdx_fd[k]
#        relErr2[k] = (dfdx_saavm[k] - dfdx_fdc[k])/dfdx_fdc[k]
#        relErr3[k] = (dfdx_fd[k] - dfdx_fdc[k])/dfdx_fdc[k]
#        relErr4[k] = (dfdx_saavmc[k] - dfdx_fdc[k])/dfdx_fdc[k]
#
#    plt.figure
#    plt.semilogx(step,relErr1,label='relErr(SAAVM-FD)')
#    #plt.plot(step,relErr2,'*-',label='relErr(SAAVM-FDC)')
#    plt.semilogx(step,relErr3,'o-',label='relErr(FD-FDC)')
#    plt.semilogx(step,relErr4,'-',label='relErr(SAAVMC-FDC)')
#    plt.xlabel(xlabel)
#    plt.ylabel("relative error [-]")
#    plt.legend(loc="upper right")
#    plt.grid(True)
#    plt.savefig('relError_FD_SAAVM_FDC.pdf')
#    plt.show()
