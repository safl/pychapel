#ifndef __PYCH_H
#define __PYCH_H
#include "Python.h"

#define ND_MAX 16

typedef struct {
    int two;            // contains the integer 2 as a sanity check
    int nd;             // Number of dimensions
    char typekind;      // kind in array --- character code of typestr
    int itemsize;       // size of each element in bytes?
    int flags;          //
                        // How should be data interpreted. Valid
                        // flags are CONTIGUOUS (1), F_CONTIGUOUS (2),
                        // ALIGNED (0x100), NOTSWAPPED (0x200), and
                        // WRITEABLE (0x400).  ARR_HAS_DESCR (0x800)
                        // states that arrdescr field is present in
                        // structure
                        //

    int shape[ND_MAX];  // Shape information

    int strides[ND_MAX];// Stride information

    void *data;         // A pointer to the first element of the array

} py_ndarray;

#endif
