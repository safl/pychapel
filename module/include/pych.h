#include <stdint.h>

#ifndef __PYCH_H
#define __PYCH_H

#define ND_MAX 16

typedef struct {
    int32_t two;        // contains the integer 2 as a sanity check
    int32_t nd;         // Number of dimensions
    char typekind;      // kind in array --- character code of typestr
    int32_t itemsize;   // size of each element in bytes?
    int32_t flags;      //
                        // How should be data interpreted. Valid
                        // flags are CONTIGUOUS (1), F_CONTIGUOUS (2),
                        // ALIGNED (0x100), NOTSWAPPED (0x200), and
                        // WRITEABLE (0x400).  ARR_HAS_DESCR (0x800)
                        // states that arrdescr field is present in
                        // structure
                        //

    int32_t shape[ND_MAX];  // Shape information

    int32_t strides[ND_MAX];// Stride information

    void* ptr_d;        // A pointer to the first element of the array
    int32_t ident;      // Numpy array identifier

} pych_array;

#endif
