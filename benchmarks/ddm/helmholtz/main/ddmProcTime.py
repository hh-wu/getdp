#!/usr/bin/python
from os import system
from sys import argv

fname = 'time_%s_%s.txt'%(argv[1], argv[2])
#system('gdate +%H.%M.%S.%N >> '+ fname)

# ugly hack to be Linux compatible
import subprocess
import string
try:
    # MacIntosh
    str = subprocess.check_ouput('gdate', shell=True)
    mydate = 'gdate'
except:
    # Linux
    mydate = 'date'
system(mydate + ' +%H.%M.%S.%N >> '+ fname)
