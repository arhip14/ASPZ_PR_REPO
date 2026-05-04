#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    printf("========================================\n");
    printf("    Open Files Table (using lsof)       \n");
    printf("========================================\n\n");

    pid_t pid = fork();

    if (pid < 0) {
        perror("fork error");
        return EXIT_FAILURE;
    }

    if (pid == 0) {
        execlp("lsof", "lsof", "-nP", NULL);
        perror("exec error");
        exit(EXIT_FAILURE);
    } else {
        int status;
        waitpid(pid, &status, 0);

        if (WIFEXITED(status) && WEXITSTATUS(status) != 0) {
            printf("\nlsof завершився з помилкою. Можливо, потрібні права sudo.\n");
        }
    }

    return EXIT_SUCCESS;
}