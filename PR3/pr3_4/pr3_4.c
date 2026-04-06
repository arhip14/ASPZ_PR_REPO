#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/resource.h>
#include <signal.h>

void limit_handler(int sig) {
    printf("\nЛіміт CPU часу вичерпано!\n");
    exit(1);
}

int main() {
    int a[7];
    int b[6];
    int i, j, num, repeat;

    struct rlimit limit;
    limit.rlim_cur = 1; 
    limit.rlim_max = 2; 
    setrlimit(RLIMIT_CPU, &limit);

    signal(SIGXCPU, limit_handler);

    srand(time(NULL));

    for (i = 0; i < 7; ) {
        num = rand() % 49 + 1;
        repeat = 0;

        for (j = 0; j < i; j++) {
            if (a[j] == num)
                repeat = 1;
        }

        if (repeat == 0) {
            a[i] = num;
            i++;
        }
    }

    for (i = 0; i < 6; ) {
        num = rand() % 36 + 1;
        repeat = 0;

        for (j = 0; j < i; j++) {
            if (b[j] == num)
                repeat = 1;
        }

        if (repeat == 0) {
            b[i] = num;
            i++;
        }
    }

    printf("7 з 49: ");
    for (i = 0; i < 7; i++)
        printf("%d ", a[i]);

    printf("\n6 з 36: ");
    for (i = 0; i < 6; i++)
        printf("%d ", b[i]);

    printf("\n");

    return 0;
}