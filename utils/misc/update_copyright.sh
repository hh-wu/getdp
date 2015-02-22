#!/bin/sh -

files=`find ../.. -not -path "*.svn*" -and -not -path "*lib*" -and -not -path "*bin*" -and -not -path "*build_*" -and -not -name "update_copyright.sh" | xargs grep 'Copyright (C) 1997-2014 P. Dular and C. Geuzaine' -sl`

echo $files

for file in $files 
do
sed "s|(C) 1997-2014 P\. Dular and C\. Geuzaine|(C) 1997-2015 P\. Dular and C\. Geuzaine|g" $file > $file.tmp
echo modified $file
rm -f $file
mv $file.tmp $file
done
