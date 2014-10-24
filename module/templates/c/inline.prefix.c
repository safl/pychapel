#include <stdio.h>

#include <pych.h>

void pych_pprint_array(pych_array* array) {
    printf("pych_array {\n");
    printf("  two: %d,\n", array->two);
    printf("  nd: %d,\n", array->nd);
    printf("  typekind: %c,\n", array->typekind);
    printf("  itemsize: %d,\n", array->itemsize);
    printf("  shape: {");
    for(int i=0; i<(ND_MAX-1); i++) {
        printf("%d", array->shape[i]);
        if (i<(ND_MAX-2)) {
            printf(", ");
        }
    }
    printf("},\n");
    printf("  strides: {");
    for(int i=0; i<(ND_MAX-1); i++) {
        printf("%d", array->strides[i]);
        if (i<(ND_MAX-2)) {
            printf(", ");
        };
    }
    printf("},\n");
    printf("  ptr_d: %p,\n", array->ptr_d);
    printf("  ident: %d\n", array->ident);
    printf("}\n");
}

