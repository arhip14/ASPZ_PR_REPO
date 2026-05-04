#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double random_0_1() {
    return (double)rand() / (double)RAND_MAX;
}

double random_0_n(double n) {
    return random_0_1() * n;
}

int main() {
    double n;
    srand(time(NULL));

    printf("Enter n: ");
    scanf("%lf", &n);

    printf("\nRandom numbers in [0.0, 1.0]:\n");
    for (int i = 0; i < 5; i++) {
        printf("%f\n", random_0_1());
    }

    printf("\nRandom numbers in [0.0, %.2f]:\n", n);
    for (int i = 0; i < 5; i++) {
        printf("%f\n", random_0_n(n));
    }

    return 0;
}