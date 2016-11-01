#!/bin/sh

SRC=${HOME}/src/getdp/benchmarks
DST=/onelab_files
MODELS='machines relay inductor indheat magnetometer antennas acoustic_scattering time_reversal shielding waveguides transfo_simple ddm_waves bloch_periodic_waveguides magnets thermal_conduction magnetostriction superconductors'

# sync files from local svn checkout
for m in ${MODELS}; do
  sudo rsync -avz ${SRC}/${m} ${DST} --delete --exclude .svn
  sudo find ${DST}/${m} \( -name "*.geo" -o -name "*.pro" -o -name "*.txt" \) -exec unix2dos {} \;
done
sudo rsync -avz ${HOME}/src/getdp/templates ${DST} --delete --exclude .svn
sudo find ${DST}/templates \( -name "*.geo" -o -name "*.pro" -o -name "*.txt" \) -exec unix2dos {} \;

# create zip file
for m in ${MODELS}; do
  sudo rm -f ${DST}/${m}.zip
  cd ${DST} && sudo zip -r ${DST}/${m}.zip ${m} -x \*.svn\* -x \*.png
done
sudo rm -f ${DST}/templates.zip
cd ${DST} && sudo zip -r ${DST}/templates.zip templates -x \*.svn\* -x \*.png

# fix permissions
#sudo chown -R onelab:onelab ${DST}/
sudo chown -R geuzaine:geuzaine ${DST}/
