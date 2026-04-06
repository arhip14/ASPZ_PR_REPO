#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;

    fp = popen("ls -l | more", "r");

    if (fp == NULL) {
        perror("popen failed");
        return 1;
    }

    char buffer[256];

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    pclose(fp);

    return 0;
}
