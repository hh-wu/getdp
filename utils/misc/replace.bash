#!/bin/bash -

for A in  $*
do
sed "s|(C) 1997-2008 P|(C) 1997-2009 P|g" $A > $A.XXX
echo modif $A
rm -f $A
mv -f $A.XXX $A
done
