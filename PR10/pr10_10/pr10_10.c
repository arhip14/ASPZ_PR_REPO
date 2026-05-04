#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        pid_t pid = fork();

        if (pid < 0) {
            perror("fork failed");
            exit(EXIT_FAILURE);
        }

        if (pid == 0) {
            printf("Child %d started (PID=%d)\n", i, getpid());
            sleep(1); // імітація роботи
            printf("Child %d finished (PID=%d)\n", i, getpid());
            exit(0);
        } else {
            wait(NULL); // чекає завершення
            printf("Parent: child %d завершився\n", i);
        }
    }

    printf("Всі дочірні процеси завершені\n");
    return 0;
}
