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
        'f':[w2[1]],
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

def opt_vmpNorm_massHole(x,data,parameters):
    mass = data['Mass'][0]; vm = data['VM'][0];massHole=16000. - mass;
    degVM = float(parameters['defaultValue']['degVM'][1]);pNorm = np.sum(vm**degVM)**(1.0/degVM)
    print('mass:{} | max(VM):{} | degVM:{} | pNorm:{}'.format(mass,np.max(vm),degVM,pNorm))
    input = {
        'f':[pNorm,massHole],
        'df':['FiniteDifference']*2,
        'fmax':[0.0,7.80361289999928],
        'f_name':['pnorm-vonMises','MassHole'],
        'sign':[1.0,-1.0]
    }
    return input

def opt_hole_compl(x,data,parameters):
    input = {
        'f':[data['Mass'][0],data['ComplianceElm'][0]],
        'df':['FiniteDifference']*2,
        'fmax':[0,592315.1051841*1.05],
        'f_name':['Mass2','Compliance'],
        'sign':[1.0,1.0]
    }
    return input

def opt_pnormVM(x,data,parameters):
    mass = data['Mass'][0]; vm = data['VM'][0];
    degVM = parameters['defaultValue']['degVM'][1];pNorm = np.sum(vm**degVM)**(1.0/degVM)
    print('mass:{} | max(VM):{} | degVM:{} | pNorm:{}'.format(mass,np.max(vm),degVM,pNorm))
    input = {
        'f':[mass,pNorm],
        'df':['FiniteDifference']*2,#['AnalyticNotEplicit','AdjointLie']
        'fmax':[0, 951947354.181*1.25],#874868049.876*1.05
        'f_name':['Mass2','vonMises_Pnorm'],
        'sign':[1.0,1.0]
    }
    return input

def opt_pnormVM_mass(x,data,parameters):
    input = {
        'f':[data['StressVM_pNorm'][0],data['Mass'][0]],
        'df':['FiniteDifference']*2,#['AnalyticNotEplicit','AdjointLie']
        'fmax':[0,20737857.2366],#data['StressVM_pNorm'][0]*1.05],
        'f_name':['vonMises_Pnorm','Mass2'],
        'sign':[1.0,1.0]
    }
    return input

def opt_vonMises_elem(x,data,parameters):
    mass = data['Mass'][0]; vm = data['VM'][0]
    print('mass:{} | max(VM):{} | #VM:{}'.format(mass,np.max(vm),len(vm)))
    ff = [mass];ff.extend(vm);m=len(ff)
    df = ['FiniteDifference']*m
    ffmax = [0.];ffmax.extend([70.0e06]*(m-1))
    ffname = ['Mass'];ffname.extend(['VM'+str(k) for k in range(m-1)])
    sign = [1.0]*m
    input = {'f':ff,'df':df,'fmax':ffmax,'sign':sign,'f_name':ffname}
    return input

def opt_vonMises_elemGreatLim(x,data,parameters,elem=[0]):
    mass = data['Mass'][0]
    max = 70.0e06
    vm = np.array(data['VM'][0])
    #elem = np.where(vm >= 0.8*max)[0]
    vmGreat = vm[elem]
    print('mass:{} | max(VM):{} | #VM:{} | #VM>0.8*M:{}'.\
          format(mass,np.max(vm),len(vm),len(vmGreat)))
    ff = [mass];ff.extend(vmGreat);m=len(ff)
    df = ['FiniteDifference']*m
    ffmax = [0.];ffmax.extend([max]*(m-1))
    ffname = ['Mass'];ffname.extend(['VM'+str(k) for k in elem])
    sign = [1.0]*m
    input = {'f':ff,'df':df,'fmax':ffmax,'sign':sign,'f_name':ffname}
    return input

def opt_maxvonMises(x,data,parameters):
    mass = data['Mass'][0]; vm = data['VM'][0]
    print('mass:{} | max(VM):{} | #VM:{}'.format(mass,np.max(vm),len(vm)))
    #print('r:{}'.format(x[0]/x[1]))
    ff = [mass];ff.append(np.max(vm));m=len(ff)
    df = ['FiniteDifference']*m
    #107961906.774
    #92591376.0595
    #94861084.1837
    ffmax = [0.];ffmax.extend([70.0e06]*(m-1))
    ffname = ['Mass'];ffname.extend(['VM'+str(k) for k in range(m-1)])
    sign = [1.0]*m
    input = {'f':ff,'df':df,'fmax':ffmax,'sign':sign,'f_name':ffname}
    return input

def shape_complianceVolume(x,data,parameters):
    """
        min (x) compl(x)
        s.t.    vol(x) <= volM
    """
    compl = data['ComplianceElm'][0]
    vol = data['Volume'][0]
    print('compl:{}; vol:{}'.format(compl,vol))
    input = {
        'f':[compl,vol],
        'df':['AdjointLie','AnalyticNotEplicit'],#['FiniteDifference']*2,
        'fmax':[0, 5.27934539997*0.8],
        'f_name':['Compliance','Volume'],
        'sign':[1.0,1.0]
    }
    return input

def topopt_complianceVolume(x,data,parameters):
    """
        min (x) compl(x)
        s.t.    vol(x) <= volM
    """
    compl = data['ComplianceElm'][0]
    elemVol = data['ElementVolume'][0][:,1];vol = np.dot(x,elemVol)
    print('compl:{}; vol:{}'.format(compl,vol))
    input = {
        'f':[compl,vol],
        'df':['SelfFixedDom',volumeSens],
        'fmax':[0, 3.0],
        'f_name':['Compliance','Volume'],
        'sign':[1.0,1.0],
        'filter':[2,0]
    }
    return input

def opt_VolumeVMelem(x,data,parameters):
    """
        min  vol
         x
        s.t. VM,e <= M, e = 1,...,Ne
    """
    # get data
    elemVol = data['ElementVolume'][0][:,1];vol = np.dot(x,elemVol)
    elem = data['VM'][0][:,0];vm = data['VM'][0][:,1];nbVM = len(vm)
    print('vol:{} | maxVM:{} | #VM:{}'.format(vol,np.max(vm),nbVM))
    
    # build optimization structure
    ff = [vol];ff.extend(vm)
    ffMax = [0.];ffMax.extend([75.0]*nbVM)
    dff = [volumeSens];dff.extend(['AdjointFixedDom']*nbVM)
    f_name = ['Volume'];f_name.extend(['vonMisesElem']*nbVM)
    sign = [1.0]*(nbVM+1)
    f_elemNum = [0]; f_elemNum.extend(elem)
    input = {
        'f':ff,
        'df':dff,
        'fmax':ffMax,
        'f_name':f_name,
        'f_elemNum':f_elemNum,
        'sign':sign,
        'filter':[]
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

def VMelem(x,data,parameters):
    vm = data['VM'][0]
    print vm
    input = {
        'f':[vm[10][1]],
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



