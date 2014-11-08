#include "dlfcn.h"
#include "unistd.h"
#include "errno.h"
#include "stdio.h"
#include "stdlib.h"

typedef int  (*chpl_library_init_fp)(int argc, char* argv[]);
typedef void (*chpl_library_finalize_fp)(void);
typedef int (*simpleInts_fp)(int x, int y);
typedef double (*nicestuff_fp)(int w, int h, int i);

int main(int argc, char* argv[]) {
    
    void* chapel    = dlopen("/home/safl/pychapel/chapel/chapel.so", RTLD_NOW);

    void* woahhh    = dlopen("/home/safl/pychapel/chapel/woahhh.so", RTLD_NOW);

    char* error_msg = dlerror();
    if (chapel == NULL) {
        printf("Error calling dlopen(): [%d, %s]\n", errno, error_msg);
        exit(0);
    }

    chpl_library_init_fp chpl_library_init = dlsym(chapel, "chpl_library_init");
    error_msg = dlerror();
    if (error_msg) {
        printf("Bahh1: %s\n", error_msg);
    }

    chpl_library_finalize_fp chpl_library_finalize = dlsym(chapel, "chpl_library_finalize");
    error_msg = dlerror();
    if (error_msg) {
        printf("Bahh2: %s\n", error_msg);
    }

    simpleInts_fp simpleInts = dlsym(chapel, "simpleInts");
    error_msg = dlerror();
    if (error_msg) {
        printf("Bahh3: %s\n", error_msg);
    }

    nicestuff_fp nicestuff = dlsym(woahhh, "nicestuff");
    error_msg = dlerror();
    if (error_msg) {
        printf("Bahh4: %s\n", error_msg);
    }

    chpl_library_init(argc, argv);
    printf("STuff: %d\n", simpleInts(2,3));
    printf("STuff: %f\n", nicestuff(5000, 5000, 100));
    chpl_library_finalize();

}
