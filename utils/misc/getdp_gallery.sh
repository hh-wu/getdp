#!/bin/sh

# This creates all the gallery images for the getdp website, from the images in
# the benchmark directory

for i in `find ../../benchmarks -name "screenshot?.png"`; do
    d=`dirname $i`;
    p=`basename $d`;
    f=`basename $i`;
    echo creating ${p}_${f};
    convert -resize 256 $i ${p}_${f};
done
