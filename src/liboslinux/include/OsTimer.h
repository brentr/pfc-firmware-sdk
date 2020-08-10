//------------------------------------------------------------------------------
/// Copyright (c) WAGO Kontakttechnik GmbH & Co. KG
/// SPDX-License-Identifier: MPL-2.0
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
/// \author WAGO Kontakttechnik GmbH & Co. KG
//------------------------------------------------------------------------------

#ifndef D_OsTimer_H
#define D_OsTimer_H

//------------------------------------------------------------------------------
// Include files
//------------------------------------------------------------------------------

#include <inttypes.h>
#include <stdbool.h>
#include <sys/cdefs.h>

#include "OsTime.h"
#include "OsTypedefs.h"
#include "OsCommon.h"



//------------------------------------------------------------------------------
// Defines
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Macros
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Typedefs
//------------------------------------------------------------------------------

typedef struct stOsTimer tOsTimer;
typedef void (*fnTimerCallback)(tOsTimer* timer, void *user);

//------------------------------------------------------------------------------
// Global variables
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Local variables
//------------------------------------------------------------------------------


tOsTimer* OsTimer_Create(fnTimerCallback callback, void const *userData);

void OsTimer_Destroy(tOsTimer* self);


i32 OsTimer_StartInterval(tOsTimer * self, tOsTime *first, tOsTime* interval);

i32 OsTimer_Start(tOsTimer *self, tOsTime *value);


#endif  // D_OsTime_H