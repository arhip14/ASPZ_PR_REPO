#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr = NULL;

    // 1) realloc з NULL 
    ptr = realloc(NULL, 16);
    if (ptr) {
        printf("realloc(NULL, 16) succeeded: %p\n", ptr);
    } else {
        printf("realloc(NULL, 16) failed\n");
    }

    // 2) realloc з size = 0
    char *tmp = realloc(ptr, 0);
    if (tmp == NULL) {
        printf("realloc(ptr, 0) returned NULL (memory freed)\n");
    } else {
        printf("realloc(ptr, 0) returned non-NULL pointer: %p\n", tmp);
        free(tmp);
    }

    return 0;
}

