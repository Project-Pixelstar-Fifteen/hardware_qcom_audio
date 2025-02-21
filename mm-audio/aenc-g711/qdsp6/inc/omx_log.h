/*--------------------------------------------------------------------------
Copyright (c) 2016, 2018 The Linux Foundation. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------*/

#ifndef OMX_LOGS_H
#define OMX_LOGS_H

#include <inttypes.h>


/*
 * Change logging-level at runtime with "persist.vendor.audio.debug.omx.logs.level"
 *
 * level     OMX_LOGV        OMX_LOGD
 * ----------------------------------
 * 0         silent          silent
 * 1         silent          printed
 * 2         printed         printed
 *
 * AVLOGI/W/E are printed always
 */

extern uint32_t gOmxLogLevel;

#define OMX_LOGV(format, args...) ALOGD_IF((gOmxLogLevel > 1), format, ##args)
#define OMX_LOGD(format, args...) ALOGD_IF((gOmxLogLevel > 0), format, ##args)
#define OMX_LOGI(format, args...) ALOGI(format, ##args)
#define OMX_LOGW(format, args...) ALOGW(format, ##args)
#define OMX_LOGE(format, args...) ALOGE(format, ##args)

void updateLogLevel();


#endif // OMX_LOGS_H

