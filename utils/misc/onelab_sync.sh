#!/bin/sh

SRC=../../benchmarks
DST=/onelab_files
MODELS='machines relay inductor indheat magnetometer antennas acoustic_scattering time_reversal'

# sync files from local svn checkout
for m in ${MODELS}; do
  sudo rsync -avz ${SRC}/${m} ${DST} --delete --exclude .svn
done

# create zip file
for m in ${MODELS}; do
  cd ${DST} && sudo zip -r ${DST}/${m}.zip ${m} -x \*.svn\*
done

# fix permissions
sudo chown -R onelab:onelab ${DST}/
