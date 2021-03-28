// Copyright (c) 2018 Microsoft Corporation
// Licensed under the MIT license.
// Author: Paul Koch <code@koch.ninja>

#include "PrecompiledHeader.h"

#include "ebm_native.h"
#include "logging.h"
#include "common_c.h"
#include "bridge_c.h"
#include "zones.h"

INTERNAL_IMPORT_EXPORT_BODY ErrorEbmType CreateLoss_Cuda_32(
   const size_t cOutputs,
   const char * const sLoss,
   const char * const sLossEnd,
   const void ** const ppLossOut
) {
   UNUSED(cOutputs);
   UNUSED(sLoss);
   UNUSED(sLossEnd);
   UNUSED(ppLossOut);

   return Error_UnknownInternalError;
}