// $Id: config-macosx-iphone-hardware.h 93833 2011-04-09 17:53:42Z mcorino $
#ifndef ACE_CONFIG_MACOSX_IPHONE_HARDWARE_H
#define ACE_CONFIG_MACOSX_IPHONE_HARDWARE_H

#define ACE_HAS_IPHONE
#define ACE_SIZEOF_LONG_DOUBLE 8

#include "ace/config-macosx-snowleopard.h"

#ifdef ACE_HAS_SYSV_IPC
#undef ACE_HAS_SYSV_IPC
#endif

#endif ACE_CONFIG_MACOSX_IPHONE_HARDWARE_H

