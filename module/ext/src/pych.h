#ifndef __PYCH_H
#define __PYCH_H
#include "Python.h"

#define ND_MAX 16

typedef struct {
  int two;              /* contains the integer 2 -- simple sanity check */
  int nd;               /* number of dimensions */
  char typekind;        /* kind in array --- character code of typestr */
  int itemsize;         /* size of each element */
  int flags;            /* flags indicating how the data should be interpreted */
                        /*   must set ARR_HAS_DESCR bit to validate descr */
  Py_intptr_t *shape;   /* A length-nd array of shape information */
  Py_intptr_t *strides; /* A length-nd array of stride information */
  void *data;           /* A pointer to the first element of the array */
  PyObject *descr;      /* NULL or data-description (same as descr key
                                of __array_interface__) -- must set ARR_HAS_DESCR
                                flag or this will be ignored. */
} PyArrayInterface;

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
