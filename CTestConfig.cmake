# GetDP - Copyright (C) 1997-2018 P. Dular and C. Geuzaine, University of Liege
#
# See the LICENSE.txt file for license information. Please report all
# bugs and problems to the public mailing list <getdp@onelab.info>.

set(CTEST_PROJECT_NAME "GetDP")
set(CTEST_DROP_METHOD "http")
set(CTEST_DROP_SITE_CDASH TRUE)
set(CTEST_DROP_SITE "onelab.info")
set(CTEST_DROP_LOCATION "/CDash/submit.php?project=GetDP")
set(CTEST_TRIGGER_SITE "")
set(BUILDNAME "${GETDP_OS}${GETDP_EXTRA_BUILD_NAME}")
set(SITE "${GETDP_HOST}")
set(CTEST_CUSTOM_MAXIMUM_NUMBER_OF_WARNINGS "1000")
set(CTEST_CUSTOM_MAXIMUM_NUMBER_OF_ERRORS "1000")
