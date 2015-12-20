""" 
    Author: Erin Kuci
    Performance functions of the optimization problem.

"""
from tool import *
from defPerfFuncSens import *

def opt_sens(x,data,parameters):
    vm = data['ComplianceElm'][0]
    input = {
        'f':[vm],
        'f_name':['Compliance'],
        'df':['FiniteDifference'],
        'fmax':[1.0],
        'sign':[-1.0],
    }
    return input

def opt_eig_sens(x,data,parameters):
    #nbEig = 1
    w2 = data['eig2'][0]
    #print('eig2-before:{}'.format(w2)) #fixme
    #nn = len(w2)
    #w2 = w2[nn-nbEig:nn]
    print('eig2:{}'.format(w2))
    input = {
        'f':[w2[0]],
        'df':['FiniteDifference'],
        'fmax':[0],
        'f_name':['eig_noNorm'],
        'sign':[1.0]
    }
    return input

def opt_eig0(x,data,parameters):
    w2 = data['eig2'][0]
    print('w2:{}'.format(w2))
    input = {
        'f':[w2[0], np.sum(x)],
        'df':[minEig0Sens,volumeSens],
        'fmax':[0,np.sum(x)],
        'f_name':['Eig','Volume'],
        'sign':[-1.0,1.0]
    }
    return input

def opt_min_eig(x,data,parameters):
    vol = np.sum(x)
    w2 = data['eig2'][0]
    w2_min_ind = np.argmin(w2)
    w2_min = w2[w2_min_ind]
    print('w2:{} - index min(w2):{} - min(w2):{}'.format(w2,w2_min_ind,w2_min))
    input = {
        'f':[w2_min, vol],
        'df':[minEigSens,volumeSens],
        'fmax':[0,vol],
        'f_name':['Eig','Volume'],
        'sign':[-1.0,1.0]
    }
    return input

def opt_min_InvEig(x,data,parameters):
    vol = np.sum(x)
    w2 = np.copy(data['eig2'][0]);l_w2 = len(w2)
    for k in range(l_w2): w2[k] = 1/w2[k]
    w2_min_ind = np.argmax(w2)
    w2_min = w2[w2_min_ind]
    print('w2:{} - index min(w2):{} - min(w2):{}'.format(w2,w2_min_ind,w2_min))
    input = {
        'f':[w2_min, vol],
        'df':[sensInvEig,volumeSens],
        'fmax':[0,vol],
        'f_name':['Eig','Volume'],
        'sign':[1.0,1.0]
    }
    return input

def opt_maxBeta_eig(x,data,parameters):
    """
        Optimization problem:
          min z
          st 1/w2_{j} <= z, j = 1, 2, ..., JJ
             V(x) <= Vmax
             V(x) >= Vmin
    """
    # get data
    w2 = np.copy(data['eig2'][0]);l_w2 = len(w2)
    vol = np.sum(x)
    print('w2:{} | vol:{}'.format(w2,vol))
    for k in range(l_w2): w2[k] = 1/w2[k]

    input = {}
    # functions
    input['f'] = [];input['f'].append(0.0);
    input['f'].extend(w2);input['f'].append(vol);#input['f'].append(vol)
    
    # functions derivative method
    input['df'] = [];input['df'].append(sensBeta)
    input['df'].extend([sensEigBeta]*l_w2)
    input['df'].append(volumeSens)
    
    # bound of functions
    input['fmax'] = [];input['fmax'].append(0.0)
    input['fmax'].extend([0.0]*l_w2);input['fmax'].append(vol)
    
    # functions name
    input['f_name'] = [];input['f_name'].append('f0')
    input['f_name'].extend(['Eig']*l_w2)
    input['f_name'].append('Volume')
    
    # min/max
    l_f = len(input['f'])
    input['sign'] = [1.0]*l_f
    
    # filter
    input['filter'] = [1.0]#;input['filter'].append(0)
#    input['filter'].extend([2.0]*l_w2);input['filter'].append(0)

    return input

def opt_eig(x,data,parameters):
    w2 = data['eig2'][0]; nbEig = len(w2)
    input = {
        'f':w2,
        'df':['AnalyticNotEplicit']*nbEig,#'AnalyticNotEplicit','FiniteDifference'
        'fmax':[0]*nbEig,
        'f_name':['eig_noNorm']*nbEig,
        'sign':[1.0]*nbEig
    }
    return input

def opt_vm2(x,data,parameters):
    input = {
        'f':[16.0-data['Mass'][0],data['StressVM'][0]],
        'df':['AnalyticNotEplicit','AdjointLie'],
        'fmax':[16.0,data['StressVM'][0]*1.1],
        'f_name':['Mass2','vonMises'],
        'sign':[-1.0,1.0]
    }
    return input

def opt_pnormVM(x,data,parameters):
    input = {
        'f':[data['Mass'][0],data['StressVM_pNorm'][0]],
        'df':['FiniteDifference']*2,#['AnalyticNotEplicit','AdjointLie']
        'fmax':[data['Mass'][0],data['StressVM_pNorm'][0]*1.05],
        'f_name':['Mass2','vonMises_Pnorm'],
        'sign':[1.0,1.0]
    }
    return input

def opt_vonMises_elem(x,data,parameters):
    vm = data['VM'][0]
    input = {
        'f':[data['Mass'][0]]+vm,
        'df':['FiniteDifference']*(len(vm)+1),
        'fmax':[16.0]+[2.8e8]*len(vm),
        'sign':[1.0]+[1.0]*len(vm)
    }
    return input

def opt_complianceVolume(x,data,parameters):
    """
        min compl
         x
        s.t. vol <= volM
    """
    compl = data['ComplianceElm'][0];vol = np.sum(x)
    input = {
        'f':[compl,vol],
        'df':['SelfFixedDom',volumeSens],
        'fmax':[0, vol],
        'f_name':['Compliance','Volume'],
        'sign':[1.0,1.0],
        'filter':[0]
    }
    return input

def compliance(x,data,parameters):
    compl = data['ComplianceElm'][0]
    input = {
        'f':[compl],
        'df':['AdjointFixedDom'],
        'fmax':[0],
        'f_name':['Compliance'],
        'sign':[1.0]
    }
    return input

def vm_pnorm(x,data,parameters):
    input = {
        'f':data['StressVM_pNorm'],
        'df':['AdjointFixedDom'],
        'fmax':[0],
        'f_name':['vonMises_Pnorm'],
        'sign':[1.0]
    }
    return input

def eig0(x,data,parameters):
    w2 = data['eig2'][0]
    print('w2:{}'.format(w2))
    input = {
        'f':[w2[2]],
        'df':[minEig0Sens],
        'fmax':[0],
        'f_name':['Eig'],
        'sign':[-1.0]
    }
    return input

def vonMises(x,data,parameters):
    r = {'f':[np.sum(np.array(data['StressVM']).flatten())],
         'df':['FiniteDifference'],'fmax':[2.5e16]}
    return r

def vonMises_Pnorm(x,data,parameters):
    r = {   'f':[np.sum(np.array(data['StressVM_pNorm']).flatten())],
            'df':['FiniteDifference'],'fmax':[2.8e9]}
    return r

def vonMises_elem(x,data,parameters):
    vm = data['VM'][0]
    r = {'f':vm,'df':['FiniteDifference']*len(vm),'fmax':[2.8e8]*len(vm)}
    return r

def EigFreqSquare_1(x,data,parameters):
    print('data[EigOmega_re]:{}'.format(data['EigOmega_re']))
    #print('data[EigOmega_im]:{}'.format(data['EigOmega_im']))
    aa = data['EigOmega_re'][3]**2.0 + data['EigOmega_im'][3]**2.0
    #aa = data['EigOmega_re'][3]**2.0
    return aa

def EigFreqSquare_2(x,data,parameters):
    aa = data['EigOmega_re'][4]**2.0 + data['EigOmega_im'][4]**2.0
    return aa

def EigFreqSquare_3(x,data,parameters):
    aa = data['EigOmega_re'][5]**2.0 + data['EigOmega_im'][5]**2.0
    return aa

def EigFreqSquare_4(x,data,parameters):
    aa = data['EigOmega_re'][6]**2.0 + data['EigOmega_im'][6]**2.0
    return aa

def EigFreqSquare_5(x,data,parameters):
    aa = data['EigOmega_re'][7]**2.0 + data['EigOmega_im'][7]**2.0
    return aa

def EigFreqSquare_6(x,data,parameters):
    aa = data['EigOmega_re'][8]**2.0 + data['EigOmega_im'][8]**2.0
    return aa

def Volume(x,data,parameters):
    # TODO: add vector values in data too in computePhysicalQuantitySerial !!!!
    #ve = data['ElementVolume'][0]
    #return np.sum(ve*x)
#    print x
#    print len(x)
#    print("volume:{}".format(np.sum(x)))
    return [np.sum(x)]

def MassTO(x,data,parameters):
    me = data['ElementMass'][0]
    return [np.sum(me*x)]

def Mass(x,data,parameters):
    r = {'f':[np.sum(np.array(data['Mass']).flatten())],
         'df':['FiniteDifference'],'fmax':[16.0]}
    return r

def Mass2(x,data,parameters):
    # mass of the hole !!!
    r = {'f':[16.0-np.sum(np.array(data['Mass']).flatten())],
         'df':['FiniteDifference'],'fmax':[16.0]}
    return  r



