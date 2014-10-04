#include "Python.h"

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

void call_this(PyArrayInterface* array) {
    printf("two=%d\n", array->two);
    printf("ndim = %d\n",  array->nd);
    printf("typekind = %c\n",  array->typekind);
    printf("itemsize = %d\n",  array->itemsize);
    printf("shape_ptr = %p\n",  array->shape);
    printf("shape: ");

    int nd = 2;
    //int nd = array->nd;

    for(int i=0; i<nd; i++) {
        printf("%d, ", (int)(array->shape[i]));
    }
    printf("\n");
    printf("strides_ptr = %p\n",  array->strides);
    printf("strides: ");
    for(int i=0; i<nd; i++) {
        printf("%d, ", (int)(array->strides[i]));
    }
    printf("\n");
    printf("d_ptr = %p\n",  array->data);


}
