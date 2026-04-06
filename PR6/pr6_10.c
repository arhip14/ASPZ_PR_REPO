#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>

#define MAX_CMD 1024
#define MAX_ARGS 128

void handle_sigint(int sig) {
    write(1, "\nCaught SIGINT\n$ ", 17);
}

int main() {
    char line[MAX_CMD];
    char *args[MAX_ARGS];
    signal(SIGINT, handle_sigint);

    while (1) {
        printf("$ ");
        fflush(stdout);

        if (!fgets(line, MAX_CMD, stdin))
            break;  

        line[strcspn(line, "\n")] = 0;

        int i = 0;
        char *token = strtok(line, " ");
        while (token != NULL) {
            args[i++] = token;
            token = strtok(NULL, " ");
        }
        args[i] = NULL;
        if (i == 0) continue;

        int pipe_pos = -1;
        for (int j = 0; j < i; j++) {
            if (strcmp(args[j], "|") == 0) {
                pipe_pos = j;
                break;
            }
        }

        if (pipe_pos != -1) {
            int fd[2];
            pipe(fd);

            if (fork() == 0) { 
                dup2(fd[1], STDOUT_FILENO);
                close(fd[0]); close(fd[1]);
                args[pipe_pos] = NULL;
                execvp(args[0], args);
                perror("exec");
                exit(1);
            }

            if (fork() == 0) {
                dup2(fd[0], STDIN_FILENO);
                close(fd[0]); close(fd[1]);
                execvp(args[pipe_pos + 1], &args[pipe_pos + 1]);
                perror("exec");
                exit(1);
            }

            close(fd[0]); close(fd[1]);
            wait(NULL);
            wait(NULL);
        } else {
            pid_t pid = fork();
            if (pid == 0) {
                for (int j = 0; j < i; j++) {
                    if (strcmp(args[j], ">") == 0) {
                        int fd_out = open(args[j+1], O_CREAT | O_WRONLY | O_TRUNC, 0644);
                        dup2(fd_out, STDOUT_FILENO);
                        close(fd_out);
                        args[j] = NULL;
                        break;
                    }
                    if (strcmp(args[j], "<") == 0) {
                        int fd_in = open(args[j+1], O_RDONLY);
                        dup2(fd_in, STDIN_FILENO);
                        close(fd_in);
                        args[j] = NULL;
                        break;
                    }
                }

                execvp(args[0], args);
                perror("exec");
                exit(1);
            } else {
                wait(NULL);
            }
        }
    }

    printf("\nExit shell\n");
    return 0;
}