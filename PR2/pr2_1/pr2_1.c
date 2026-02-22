#include <stdio.h>
#include <time.h>

int main() {
    printf("sizeof(time_t) = %zu bytes\n\n", sizeof(time_t));
    time_t max_time = (time_t)0x7FFFFFFF;
    printf("Before overflow: %s", ctime(&max_time));
    max_time++;
    printf("After +1 second: %s", ctime(&max_time));
    return 0;
}