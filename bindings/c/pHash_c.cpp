#include "pHash_c.h"

#include <pHash.h>
#include <stdio.h>

extern "C" {

bool ph_c_dct_imagehash(const char* file, uint64_t* hash) {
    cimg::exception_mode(0);
    try {
        if (ph_dct_imagehash(file, *hash) == 0) return true;
    } catch (const std::exception& e) {
        printf("%s\n", e.what());
    }
    return false;
}

bool ph_c_mh_imagehash(const char* file, float alpha, float lvl,
                       uint8_t** hash) {
    cimg::exception_mode(0);
    try {
        int n = 0;
        *hash = ph_mh_imagehash(file, n, alpha, lvl);
        if (*hash != NULL) return true;
    } catch (const std::exception& e) {
        printf("%s\n", e.what());
    }
    return false;
}
}
