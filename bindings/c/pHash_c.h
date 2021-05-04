#ifndef _PHASH_C_H
#define _PHASH_C_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

int ph_dct_imagehash(const char* file, uint64_t* hash);
uint8_t* ph_mh_imagehash(const char* filename, int* N, float alpha, float lvl);

#ifdef __cplusplus
}
#endif

#endif /* _PHASH_C_H */