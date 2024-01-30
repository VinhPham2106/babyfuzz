#include <stdint.h>
#include <stddef.h>
#include "baby.h"

// Fuzz target function
int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    // Call the target function with the fuzzed input
    badFunction((char*)data);
    return 0;
}

