import sys, os, time
from ast import literal_eval as literal_eval
from numpy import trace, exp, absolute, matrix, asmatrix
from numpy.linalg import norm, det
from scipy.linalg import expm
from math import isnan, isinf
from multiprocessing import Pool, Process

print("Python: done in the function ""smp_updateInternalVariables.py"". \
Start updating the internal variables in the Python function !!!")

keys = Theta_Current.keys()
nkeys = len(keys)
file_dir = os.path.abspath(os.path.dirname(__file__)) + "/"

filename = None
ssh = None
ncpus = 1
nodes = ["localhost" for x in range(ncpus)]
queue = sorted(keys)

print("Python: done in the function ""smp_updateInternalVariables.py"". \
Updating internal variables for {0} Gauss points on {1} CPUs".format(nkeys, ncpus))

print("Python: done in the function ""smp_updateInternalVariables.py"". \
Each Process is solving {0} problems".format(len(queue)/ncpus) )

cpus = ['' for cpu in range(ncpus)]
Flag_SubProcess_Module = 0
Flag_PassAllKeysPerCPUOnceForAll = 1

# Parameters
#===========

Theta_t = 300
Delta_Theta = 25
E_g = 771.0e6
nu_g = 0.29
lambda_g = E_g/(2.0 * (1.0 + nu_g))
mu_g = (nu_g * E_g)/((1.0 + nu_g) * (1.0 - 2 * nu_g))
c_f = 1.0
c_p = 0.0
R_pg = 10.0e6
tol_pg = 0.0
tol_NR = 1.0e-6
h = 0.0
Flag_NR = 1
matID = matrix([[1.0, 0.0, 0.0], [0.0, 1.0, 0.0], [0.0, 0.0, 1.0]])
delta = 1e-5   

def smp_updateInternalVariablesPerCPU(keys):
    queue = sorted(keys)
    #print('The length "len" of queue for PID %r is len = %r' %(os.getpid(), len(queue) ) )

    while(len(queue)):
        key = queue.pop()
        args = [];
        args.extend([key, Theta_Previous[key], F_f_Previous[key], F_p_Previous[key],
                     F_pg_Previous[key], F_tot_Current[key], Theta_Current[key] ] )


        """ begining of the function 'smp_updateInternalVariablesPerCPU_OneKey' """ 
        def smp_updateInternalVariablesPerCPU_OneKey(arguments):
            len_arg = len(arguments)
            key = arguments[0]
            Theta_Previous_Temp = arguments[1]
            F_f_Previous_Temp = matrix(arguments[2])
            F_p_Previous_Temp = matrix(arguments[3])
            F_pg_Previous_Temp = matrix(arguments[4])
            F_tot_Current_Temp = matrix(arguments[5])
            Theta_Current_Temp = arguments[6]
            Error_NR_List_Temp = []

            """ Beginning of the function 'FixedPointIteration_ExponentialReturnMapping' """
            def FixedPointIteration_ExponentialReturnMapping(inputExpRetMap):
                key = inputExpRetMap[0]
                F_pg_Previous = inputExpRetMap[1]
                F_f_Current = inputExpRetMap[2]
                F_tot_Current = inputExpRetMap[3]
                c_f = inputExpRetMap[4]
                c_p = inputExpRetMap[5]
                R_pg = inputExpRetMap[6]
                tol_pg = inputExpRetMap[7]
                tol_NR = inputExpRetMap[8]
                Flag_NewtonRaphson = inputExpRetMap[9]
                
                F_pg_trial = F_pg_Previous
                F_eg_trial = F_tot_Current * F_f_Current.getI() * F_pg_trial.getI()
                C_eg_trial = F_eg_trial.getT() * F_eg_trial
                E_eg_trial = 0.5 * (C_eg_trial - matID)
                E_pg_trial = 0.5 * (matrix.getT(F_pg_trial) * F_pg_trial - matID)
                
                Chi_g_trial = C_eg_trial * (lambda_g * trace(E_eg_trial) * matID + 2 * mu_g * E_eg_trial) - h * F_pg_trial * E_pg_trial * F_pg_trial.getT()
                F_pg_Current_Temp_New = F_pg_Previous
                Flag_PlasticStep_Current_Temp = 0
                
                Fro_Norm = norm(Chi_g_trial, 'fro')
                Error_NR_Rel_List_Temp = []
                Error_NR_List_Temp = []
                """ Elastic step if the yield function is negative - Plastic step if the yield function is zero"""
                if ( (Fro_Norm - R_pg) < tol_pg):
                    F_pg_Current_Temp_New = F_pg_trial
                    Flag_PlasticStep_Current_Temp = 0
                    Error_NR_Rel_List_Temp.append(0)
                    Error_NR_List_Temp.append(0)
                else:
                    Flag_PlasticStep_Current_Temp = 1
                    if(1):
                        print('Plastic step for the Gauss point ', key)
                        #print('Fro_Norm - R_pg =', (Fro_Norm - R_pg))
                    
                    F_pg_Current_Old = F_pg_trial
                    Delta_Gamma_Old = 0.0
                    Error_NR = 1.0
                    Error_NR_Rel = 1.0
                    Delta_Gamma_New_List = []
                    k = 0
                    # Resolution of the nonlinear incremental equation governing the plastic deformation gradient
                    #============================================================================================    
                    while ( (Error_NR_Rel > tol_NR) and (Error_NR > 1e-12) and (k < 50) ):                        
                        F_eg_Current_Old = F_tot_Current * F_f_Current.getI() * F_pg_Current_Old.getI()
                        C_eg_Current_Old = F_eg_Current_Old.getT() * F_eg_Current_Old
                        E_eg_Current_Old = 0.5 * (C_eg_Current_Old - matID)
                        E_pg_Current_Old = 0.5 * (matrix.getT(F_pg_Current_Old) * F_pg_Current_Old - matID)
                        Chi_g_Current_Old =  (C_eg_Current_Old * (lambda_g * trace(E_eg_Current_Old) * matID +  2 * mu_g * E_eg_Current_Old) -
                                              h * F_pg_Current_Old * E_pg_Current_Old * F_pg_Current_Old.getT() )
                        dev_Chi_g_Current_Old = Chi_g_Current_Old - (1.0 / 3.0) * trace(Chi_g_Current_Old) * matID
            
                        # 1. Fixed point iteration
                        #=========================    
                        if(not(Flag_NewtonRaphson)):
                            F_pg_Current_Temp_New = expm(Delta_Gamma_Old*((dev_Chi_g_Current_Old)/norm(dev_Chi_g_Current_Old,'fro')))*F_pg_Previous
                            Delta_Gamma_New = Delta_Gamma_Old + (norm(dev_Chi_g_Current_Old, 'fro') - R_pg)
                        # 2. Newton Raphson method
                        #=========================        
                        else:
                            
                            """ Begining of the function 'NumericalTangentModulus' """
                            def NumericalTangentModulus(inputTanMod):
                                key = inputTanMod[0]
                                F_pg = inputTanMod[1]
                                Delta_Gamma = inputTanMod[2]
                                F_pg_Previous = inputTanMod[3]
                                F_f_Current = inputTanMod[4]
                                F_tot_Current = inputTanMod[5]
                                h = inputTanMod[6]
                                R_pg = inputTanMod[7]

                                F_eg = F_tot_Current * F_f_Current.getI() * F_pg.getI()
                                C_eg = F_eg.getT() * F_eg
                                E_eg = 0.5 * (C_eg - matID)
                                E_pg = 0.5 * (matrix.getT(F_pg) * F_pg - matID)
                                Chi_g = (C_eg * (lambda_g * trace(E_eg) * matID + 2 * mu_g * E_eg) -
                                         h * F_pg * E_pg * F_pg.getT() )
                                dev_Chi_g = Chi_g - (1.0 / 3.0) * trace(Chi_g) * matID
                                norm_dev = norm(dev_Chi_g,'fro')
                                if (norm_dev == 0):
                                    func_1 = F_pg - expm(Delta_Gamma * (dev_Chi_g) ) * F_pg_Previous
                                else:
                                    func_1 = F_pg - asmatrix(expm((Delta_Gamma/norm_dev) * dev_Chi_g) ) * F_pg_Previous
                                    
                                func_2 = norm(dev_Chi_g, 'fro') - R_pg   

                                tangent_list_F = []
                                matPert = {}
                                matPert[0] = matrix([[1.0, 0.0, 0.0], [0.0, 0.0, 0.0], [0.0, 0.0, 0.0]])
                                matPert[1] = matrix([[0.0, 1.0, 0.0], [0.0, 0.0, 0.0], [0.0, 0.0, 0.0]])
                                matPert[2] = matrix([[0.0, 0.0, 1.0], [0.0, 0.0, 0.0], [0.0, 0.0, 0.0]])
                                matPert[3] = matrix([[0.0, 0.0, 0.0], [1.0, 0.0, 0.0], [0.0, 0.0, 0.0]])
                                matPert[4] = matrix([[0.0, 0.0, 0.0], [0.0, 1.0, 0.0], [0.0, 0.0, 0.0]])
                                matPert[5] = matrix([[0.0, 0.0, 0.0], [0.0, 0.0, 1.0], [0.0, 0.0, 0.0]])
                                matPert[6] = matrix([[0.0, 0.0, 0.0], [0.0, 0.0, 0.0], [1.0, 0.0, 0.0]])
                                matPert[7] = matrix([[0.0, 0.0, 0.0], [0.0, 0.0, 0.0], [0.0, 1.0, 0.0]])
                                matPert[8] = matrix([[0.0, 0.0, 0.0], [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]])

                                # Use of finite differences to evaluate the Jacobian 
                                #===================================================
                                for i in range(0, 10):
                                    # Pertubation of the evolution equation wrt the 9 components of F_i^pg
                                    #=====================================================================
                                    if (i <= 8):
                                        F_pg_Delta = F_pg + delta * matPert[i]            
                                        F_eg_Delta = F_tot_Current * F_f_Current.getI() * F_pg_Delta.getI()
                                        C_eg_Delta = F_eg_Delta.getT() * F_eg_Delta
                                        E_eg_Delta = 0.5 * (C_eg_Delta - matID)
                                        E_pg_Delta = 0.5 * (matrix.getT(F_pg_Delta) * F_pg_Delta - matID)
                                        Chi_g_Delta = (C_eg_Delta * (lambda_g * trace(E_eg_Delta) * matID + 2 * mu_g * E_eg_Delta) -
                                                       h * F_pg_Delta * E_pg_Delta * F_pg_Delta.getT() )
                                        dev_Chi_g_Delta = Chi_g_Delta - (1.0 / 3.0) * trace(Chi_g_Delta) * matID
                                        
                                        # tan_F_Fpg is a matrix obtained by pertubing the i^th component of the matrix
                                        #=============================================================================
                                        func_1_Delta = F_pg_Delta - expm(Delta_Gamma * ( (dev_Chi_g_Delta)/norm(dev_Chi_g_Delta,'fro') ) ) * F_pg_Previous
                                        func_2_Delta = norm(dev_Chi_g_Delta, 'fro') - R_pg
                                                                                
                                        tan_F_Fpg = (func_1_Delta - func_1)/delta
                                        tan_F_DGamma = (func_2_Delta - func_2)/delta
                                        
                                        tangent_list_FF = [item for sublist in ((tan_F_Fpg.flatten()).tolist()) for item in sublist]
                                        tangent_list_FF.append(tan_F_DGamma)
                                        tangent_list_F.append(tangent_list_FF)
                                    # Finite differences for the evolution equation with pertubations of "Delta Gamma"
                                    #=================================================================================
                                    else:
                                        Flag_Analytical_DeltaGamma = 1
                                        if(Flag_Analytical_DeltaGamma):
                                            N_g = ( (dev_Chi_g)/norm(dev_Chi_g,'fro') )
                                            tan_F_Fpg = -N_g * expm(Delta_Gamma * N_g ) * F_pg_Previous
                                            tan_F_DGamma = 0

                                            tangent_list_FF = [item for sublist in ((tan_F_Fpg.flatten()).tolist()) for item in sublist]
                                            tangent_list_FF.append(tan_F_DGamma)
                                            tangent_list_F.append(tangent_list_FF)
                                        else:
                                            if (Delta_Gamma > 0):
                                                Delta_Gamma_Delta = Delta_Gamma * 1.00000001
                                                func_1_Delta = F_pg - expm(Delta_Gamma_Delta *( (dev_Chi_g)/norm(dev_Chi_g,'fro') ) ) * F_pg_Previous
                                                tan_F_Fpg = ((func_1_Delta - func_1)/(0.00000001 * Delta_Gamma))
                                            else:
                                                Delta_Gamma_Delta = Delta_Gamma + delta
                                                func_1_Delta = F_pg - expm(Delta_Gamma_Delta *( (dev_Chi_g)/norm(dev_Chi_g,'fro') ) ) * F_pg_Previous
                                                tan_F_Fpg = ((func_1_Delta - func_1)/delta)
                                            tan_F_DGamma = 0

                                            tangent_list_FF = [item for sublist in ((tan_F_Fpg.flatten()).tolist()) for item in sublist]
                                            tangent_list_FF.append(tan_F_DGamma)
                                            tangent_list_F.append(tangent_list_FF)

                                return [(matrix(tangent_list_F)).getT()]
                            """ End of the function 'NumericalTangentModulus' """
                            
                            inputTanMod = [key, F_pg_Current_Old, Delta_Gamma_Old, F_pg_Previous,
                                           F_f_Current, F_tot_Current, h, R_pg]
                            get_TanMod = NumericalTangentModulus(inputTanMod)
                            tangentModulus = get_TanMod[0]
                            if (norm(dev_Chi_g_Current_Old,'fro') == 0):
                                func_k_1 = F_pg_Current_Temp_New - expm(Delta_Gamma_Old*((dev_Chi_g_Current_Old)))*F_pg_Previous
                            else:
                                func_k_1 = F_pg_Current_Temp_New - expm(Delta_Gamma_Old*((dev_Chi_g_Current_Old)/norm(dev_Chi_g_Current_Old,'fro')))*F_pg_Previous
                            func_k_1_Matrix = func_k_1.flatten()
                            func_k_2 = norm(dev_Chi_g_Current_Old, 'fro') - R_pg
                            func_k_intermediate = [item for sublist in (func_k_1_Matrix.tolist()) for item in sublist]                
                            func_k_intermediate.append(func_k_2)
                            func_k = func_k_intermediate
                            rhs_mat = matrix(func_k)
                            
                            Delta_h = - tangentModulus.getI() * (rhs_mat.getT())
                            Delta_F_pg_Current_List = [[float(Delta_h[0]), float(Delta_h[1]), float(Delta_h[2])],
                                                       [float(Delta_h[3]), float(Delta_h[4]), float(Delta_h[5])],
                                                       [float(Delta_h[6]), float(Delta_h[7]), float(Delta_h[8])]]
                            Delta_F_pg_Current_Matrix = matrix(Delta_F_pg_Current_List)
                            F_pg_Current_Temp_New = F_pg_Current_Old + Delta_F_pg_Current_Matrix
                            Delta_Gamma_New = Delta_Gamma_Old + float(Delta_h[9])
                            if ((key == (99, 4)) or (key == (152, 2))):
                                print('Begin printing infos for the key ', key)
                                print('Iteration number', k)
                                print('Delta_h_Gamma = ', float(Delta_h[9]))
                                print('End printing infos for the key ', key)
                            
                        # Evaluation of the residual and checking if the residual is infinite or nan 
                        #===========================================================================
                        """ Begin : Fix Me !!!"""
                        Error_NR = norm((F_pg_Current_Temp_New - F_pg_Current_Old), 'fro') + absolute(Delta_Gamma_New - Delta_Gamma_Old)
                        if (k == 0):
                            Error_NR_Init = Error_NR
                        if(isnan(float(Error_NR/Error_NR_Init))):
                            if (Error_NR_Init == 0.0):
                                Error_NR_Rel = 0.0
                                """
                                print('Begin!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!!')
                                print('Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!!')
                                print('Error_NR_Init = 0.0 is leading to Error_NR_Rel = nan for element', key)
                                print('Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!!')
                                print('Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Enddd!!!')
                                """
                            else:
                                print('Dealing with a nan but the denominator is different from zero !!!')
                        elif(isinf(float(Error_NR/Error_NR_Init))):
                            if (Error_NR_Init == 0.0):
                                Error_NR_Rel = 0.0
                                print('Error_NR_Init = 0.0 is leading to Error_NR_Rel = inf for element', key)
                            else:
                                print('Dealing with a nan but the denominator is different from zero !!!')
                        else:
                            Error_NR_Rel = Error_NR/Error_NR_Init
                        """ End : Fix Me !!!"""

                        Error_NR_List_Temp.append(Error_NR)
                        Error_NR_Rel_List_Temp.append(Error_NR_Rel)
                        Delta_Gamma_New_List.append(Delta_Gamma_New)
                        
                        # Update variables for the next nonlinear iteration
                        #==================================================
                        F_pg_Current_Old = F_pg_Current_Temp_New 
                        Delta_Gamma_Old = Delta_Gamma_New
                        k = k+1
                    """ Check if the solution of the evolution equation has converged !"""
                    if ( (Error_NR_Rel > tol_NR) and (Error_NR > 1e-12) ):
                        
                        """ Begin: Fix Me !!!"""
                        
                        Error_NR = norm((F_pg_Current_Temp_New - F_pg_Current_Old), 'fro') + absolute(Delta_Gamma_New - Delta_Gamma_Old)
                        """
                        print('Begin!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!!')
                        print('Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!!')
                        print('')
                        print('The computation of the tangent modulus didn''t converge for element ', key)
                        print('')
                        print('Printing Delta_Gamma_New_List', Delta_Gamma_New_List)
                        print('')
                        print('Printing Error_NR_List', Error_NR_List_Temp)
                        print('')
                        print('Printing Error_NR_Rel_List', Error_NR_Rel_List_Temp)
                        print('')
                        print('Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!!')
                        print('Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Alert!!! Enddd!!!')
                        """

                        """ Begin: Fix Me !!!"""

                return [F_pg_Current_Temp_New, Flag_PlasticStep_Current_Temp, Error_NR_Rel_List_Temp]
            """ End of the function 'FixedPointIteration_ExponentialReturnMapping' """
            
            """ Beginning: update of internal variables as a function of temperature at Gauss point """
            if (Theta_Current_Temp > (Theta_t + Delta_Theta) ):
                F_f_Current_Temp = c_f * (F_tot_Current_Temp - matID) + matID
                F_p_Current_Temp = F_p_Previous_Temp 
                F_pg_Current_Temp = matID
                Error_NR_List_Temp.append(0)
                Flag_PlasticStep_Temp = 0                    
            elif( (Theta_Current_Temp >= (Theta_t - Delta_Theta) ) and (Theta_Current_Temp <= (Theta_t + Delta_Theta) ) ):
                F_f_Current_Temp = F_f_Previous_Temp
                F_p_Current_Temp = F_p_Previous_Temp
                if ( Theta_Current_Temp >=  Theta_Previous_Temp):
                    F_pg_Current_Temp = F_pg_Previous_Temp
                    Error_NR_List_Temp.append(0)
                    Flag_PlasticStep_Temp = 0
                else:
                    input_expRetMap = [key, F_pg_Previous_Temp, F_f_Current_Temp, F_tot_Current_Temp,
                                       c_f, c_p, R_pg, tol_pg, tol_NR, Flag_NR]
                    updated_IV = FixedPointIteration_ExponentialReturnMapping(input_expRetMap)
                    F_pg_Current_Temp = updated_IV[0]    
                    Flag_PlasticStep_Temp = updated_IV[1]    
                    Error_NR_List_Temp = updated_IV[2]
            else:
                F_f_Current_Temp = F_f_Previous_Temp
                F_p_Current_Temp = F_p_Previous_Temp
                input_expRetMap = [key, F_pg_Previous_Temp, F_f_Current_Temp, F_tot_Current_Temp,
                                   c_f, c_p, R_pg, tol_pg, tol_NR, Flag_NR]
                updated_IV = FixedPointIteration_ExponentialReturnMapping(input_expRetMap)
                F_pg_Current_Temp = updated_IV[0]    
                Flag_PlasticStep_Temp = updated_IV[1]    
                Error_NR_List_Temp = updated_IV[2]
            """ Beginning: update of internal variables as a function of temperature at Gauss point """
            
            F_f_Current_PerGP = F_f_Current_Temp.tolist()
            F_p_Current_PerGP = F_p_Current_Temp.tolist()
            F_pg_Current_PerGP = F_pg_Current_Temp.tolist()
            Flag_PlasticStep_Current_PerGP = Flag_PlasticStep_Temp
            Error_NR_List_PerGP = Error_NR_List_Temp
            return [F_f_Current_PerGP, F_p_Current_PerGP, F_pg_Current_PerGP, Flag_PlasticStep_Current_PerGP, Error_NR_List_PerGP]
        """ beginning of the function 'smp_updateInternalVariablesPerCPU_OneKey' """ 

        output_perCPU = smp_updateInternalVariablesPerCPU_OneKey(args)
        
        F_f_Current[key] = output_perCPU[0]
        F_p_Current[key] = output_perCPU[1]
        F_pg_Current[key] = output_perCPU[2]
        Flag_PlasticStep_Current[key] = output_perCPU[3]
        Error_NR_List[key] = output_perCPU[4]
        
        """ Fix Me !!!"""
        if ( (key == (17, 2) ) and (1) ): 
            print('Printing Theta_Previous_Temp', Theta_Previous[key])
            print('Printing Theta_Current_Temp', Theta_Current[key])
    return[F_f_Current, F_p_Current, F_pg_Current, Flag_PlasticStep_Current, Error_NR_List]

# Actual calculations
#====================
if (__name__ == '__main__'):
    num_sub = len(queue)/ncpus
    pool = Pool(processes=ncpus)
    chunks = [queue[ (i*num_sub) : ((i+1)*num_sub) ] for i in range(ncpus) ]
    tic = time.time()
    result = pool.map(smp_updateInternalVariablesPerCPU, chunks)
    toc = time.time()
    pool.close()
    print('The time for updating internal variables is %r seconds ' % (toc - tic))
    for i in range(ncpus):
        output_List = result[i]
        F_f_Current.update(output_List[0])
        F_p_Current.update(output_List[1])
        F_pg_Current.update(output_List[2])
        Flag_PlasticStep_Current.update(output_List[3])
        Error_NR_List.update(output_List[4])
    #print('The length of the dicts is ', len(F_f_Current))
