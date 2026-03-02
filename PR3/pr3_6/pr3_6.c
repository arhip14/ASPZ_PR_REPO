#include <stdio.h>

void recursive_function(int n) {
    char buffer[1024];  
    printf("Рекурсія: %d\n", n);
    recursive_function(n + 1); 
}

int main() {
    recursive_function(1);
    return 0;
}
