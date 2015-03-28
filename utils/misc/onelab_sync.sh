#!/bin/sh

SRC=${HOME}/src/getdp/benchmarks
DST=/tmp/onelab_files
MODELS='machines relay inductor indheat magnetometer antennas acoustic_scattering time_reversal shielding waveguides transfo_simple ddm_wave_simple bloch_periodic_waveguides magnets thermal_conduction'

# sync files from local svn checkout
for m in ${MODELS}; do
  sudo rsync -avz ${SRC}/${m} ${DST} --delete --exclude .svn --exclude *.png
done

# create zip file
for m in ${MODELS}; do
  sudo rm -f ${DST}/${m}.zip
  cd ${DST} && sudo zip -r ${DST}/${m}.zip ${m} -x \*.svn\*
done

# fix permissions
sudo chown -R onelab:onelab ${DST}/
