import re
from os.path import getmtime
from numpy import log10, array, float

if getmtime('params.geo') > getmtime('getdp.out'):
    print ' *** WARNING: params modified after last run'
    raw_input()

fname = 'params.geo'
myInputFile = open(fname, 'r')

kwds = ['N_DOM', 'WAVENUMBER', 'LC', 'PRECOND_SWEEP']
kList = list()
i = 0
nd = len(kwds)
while i < nd:
    kwd = kwds[i]
    line = myInputFile.readline()
    if kwd in line:
        if i == 1 and 'Pi' in line:
            kList.append((re.findall('\d\.?\d?\d?', line)[0]+'pi'))
        else:
            kList.append((re.findall('\d\.?\d?\d?\d?', line)[0]))
        i+=1
myInputFile.close()

print 'N: %s\nk:%s\nlc:%s\nprecond:%s\n'%(kList[0], kList[1], kList[2], kList[3])


fname = 'getdp.out'
myInputFile = open(fname, 'r')
lines = myInputFile.readlines()

r = list()
n = list()
for l in lines:
    if 'Residual' in l:
        r.append(float(re.findall('\d.\d+e[+-]?\d+', l)[0]))
        n.append(int(re.findall('\d ', l)[0]))
myInputFile.close()

if len(r) != len(n):
    print ' *** ERROR in data extraction'

fname = 'waveguideHomog_Maxwell_getdp_N%s_k%s_lc%.3f_DtnOSRC8_precond%s.txt'%(kList[0], kList[1], float(kList[2]), 'DoubleSweep' if int(kList[3]) else 'None')
myOutputFile = open(fname, 'w')

for i,rr in enumerate(r):
    print i, rr/r[0]
    myOutputFile.write('%.7f\n'%(log10(rr/r[0])))
myOutputFile.close()

print ' ** Data written to %s\n'%fname

from pylab import ion, plot
ion()
plot(log10(array(r)/r[0]))
raw_input()
