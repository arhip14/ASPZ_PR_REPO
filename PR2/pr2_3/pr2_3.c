#include <stdio.h>
#include <stdlib.h>

void f() {
    int big[10000];   
    printf("Stack inside f: %p\n", &big);
}

int array[100] = {1, 2, 3};  
int bss;                     

int main() {
    int i;                   
    int *heap = malloc(1);  
    printf("Stack top: %p\n", &i);
    printf("Text (f): %p\n", (void*)f);
    printf("Data: %p\n", array);
    printf("BSS: %p\n", &bss);
    printf("Heap: %p\n", heap);
    f();
    return 0;
}
