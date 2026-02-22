#include <stdio.h>

int array[1000] = {1}; 

void fun() {
    int array[1000] = {1};   
}

int main() {
    fun();
    printf("Hello World!\n");
    return 0;
}
