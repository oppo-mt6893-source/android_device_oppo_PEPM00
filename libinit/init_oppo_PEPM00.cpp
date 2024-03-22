#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t PEPM00_CN_info = {

    .device = "PEPM00",
    .model = "PEPM00",
    .name = "PEPM00",
};

static const std::vector<variant_info_t> variants = {
    PEPM00_CN_info,
};
