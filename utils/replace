#!/bin/bash -

for A in $*
do
echo modifying $A
mv $A $A.old
sed "s/problems to \"getdp@geuz.org\"/problems to \<getdp@geuz.org\>/g" $A.old  > $A
done
