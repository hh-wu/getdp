#!/bin/bash -

for A in $*
do
echo modifying $A
mv $A $A.old
sed "s/Copyright (C) 1997-2004/Copyright (C) 1997-2005/g" $A.old  > $A
done
