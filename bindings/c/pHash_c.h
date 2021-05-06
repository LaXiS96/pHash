#ifndef _PHASH_C_H
#define _PHASH_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
// TODO documentation, watch out for mallocs

bool ph_c_dct_imagehash(const char* file, uint64_t* hash);
bool ph_c_mh_imagehash(const char* file, float alpha, float lvl, uint8_t** hash);

#ifdef __cplusplus
}
#endif

#endif /* _PHASH_C_H */