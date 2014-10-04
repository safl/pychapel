#include <stdio.h>

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

void py_pprint_ndarray(py_ndarray* array) {
    printf("py_ndarray {\n");
    printf("  two: %d\n", array->two);
    printf("  nd: %d\n", array->nd);
    printf("  typekind: %c\n", array->typekind);
    printf("  itemsize: %d\n", array->itemsize);
    printf("  shape: ");
    for(int i=0; i<array->nd; i++) {
        printf("%d", array->shape[i]);
        if (i<(array->nd-1)) {
            printf(", ");
        };
    }
    printf("\n");
    printf("  strides: ");
    for(int i=0; i<array->nd; i++) {
        printf("%d", array->strides[i]);
        if (i<(array->nd-1)) {
            printf(", ");
        };
    }
    printf("\n}\n");
}

