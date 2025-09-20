// See LICENSE for license details.

#include "decode_macros.h"
#include "arith.h"
#include "mmu.h"
#include "utils.h"
#include "softfloat.h"
#include "internals.h"
#include "specialize.h"
#include "tracer.h"
#include "v_ext_macros.h"
#include "debug_defines.h"
#include <assert.h>
#include <bit>


template <typename To, typename From>
constexpr To bc(const From& from) {
    return std::bit_cast<To>(from);
}
