#pragma once

#include "caffe2/utils/IdWrapper.h"

namespace c10 {

class LayoutId final : public c10::guts::IdWrapper<LayoutId, uint8_t> {
public:
    constexpr explicit LayoutId(underlying_type id): IdWrapper(id) {}

    // Don't use this default constructor!
    // Unfortunately, a default constructor needs to be defined because of https://reviews.llvm.org/D41223
    constexpr LayoutId(): IdWrapper(0) {}
};

}

C10_DEFINE_HASH_FOR_IDWRAPPER(c10::LayoutId)
