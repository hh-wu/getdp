#!/bin/bash -

for A in $*
do
echo modifying $A
mv $A $A.old
awk -f unix2dos.awk $A.old > $A
/bin/rm -f $A.old
done
