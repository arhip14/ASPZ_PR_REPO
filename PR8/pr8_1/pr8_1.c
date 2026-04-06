#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int main() {
    int pipefd[2];
    pipe(pipefd);

    int flags = fcntl(pipefd[1], F_GETFL, 0);
    fcntl(pipefd[1], F_SETFL, flags | O_NONBLOCK);

    char buffer[100000];
    memset(buffer, 'A', sizeof(buffer));

    ssize_t count = write(pipefd[1], buffer, sizeof(buffer));

    printf("Requested: %ld bytes\n", sizeof(buffer));
    printf("Written:   %ld bytes\n", count);

    return 0;
}


// write() може записати менше ніж nbytes (наприклад, через обмеження буфера або неблокуючий режим) і повертає фактичну кількість записаних байтів.
