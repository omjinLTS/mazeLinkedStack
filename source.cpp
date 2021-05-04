#include <stdio.h>

#define MALLOC(p, s) \
    if (!((p) = malloc(s))) {\
        fprintf(stderr, "Insufficent memory");\
        exit(EXIT_FAILURE);\
    }



int main() {

    return 0;
}