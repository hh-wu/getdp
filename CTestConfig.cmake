# GetDP - Copyright (C) 1997-2014 P. Dular, C. Geuzaine
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to the public mailing list <getdp@geuz.org>.

set(CTEST_PROJECT_NAME "GetDP")
set(CTEST_DROP_METHOD "http")
set(CTEST_DROP_SITE_CDASH TRUE)
set(CTEST_DROP_SITE "onelab.info")
set(CTEST_DROP_LOCATION "/CDash/submit.php?project=GetDP")
set(CTEST_TRIGGER_SITE "")
set(SITE ${GETDP_HOST})
set(BUILDNAME "${GETDP_OS}-${GETDP_PACKAGER}")
