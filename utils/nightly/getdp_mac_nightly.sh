#!/bin/sh

# this is supposed to be called by launchd:
#  * copy org.geuz.getdp.nightly.plist to ~/Library/LauchAgents/
#  * launchctl load ~/Library/LaunchAgents/org.geuz.getdp.nightly.plist

cd ${HOME}/src/getdp/utils/nightly && /usr/local/bin/ctest -S getdp_mac_nightly.ctest -VV > ${HOME}/src/getdp/nightly.log 2>&1
