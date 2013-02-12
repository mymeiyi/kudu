// Copyright (c) 2013, Cloudera, inc.
// All rights reserved.
#ifndef KUDU_TABLET_TABLET_UTIL_H
#define KUDU_TABLET_TABLET_UTIL_H

#include "tablet/layer.h"
#include "tablet/layer-interfaces.h"

namespace kudu {
namespace tablet {
namespace tablet_util {

// Set *present to indicate whether the given key is present in any of the
// layers in 'layers'.
Status CheckRowPresentInAnyLayer(const LayerVector &layers,
                                 const LayerKeyProbe &probe,
                                 bool *present);



} // namespace tablet_util
} // namespace tablet
} // namespace kudu

#endif
