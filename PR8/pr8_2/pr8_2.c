#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd = open("test.bin", O_CREAT | O_RDWR, 0644);

    unsigned char data[] = {4, 5, 2, 2, 3, 3, 7, 9, 1, 5};
    write(fd, data, sizeof(data));
    lseek(fd, 3, SEEK_SET);
    unsigned char buffer[4];
    read(fd, buffer, 4);

    printf("Buffer: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    close(fd);
    return 0;
}

// Файл індексується з 0, тому lseek(fd, 3, SEEK_SET) встановлює позицію на 4-й байт (значення 2). Далі read(fd, ..., 4) зчитує 4 послідовні байти з цієї позиції → 2, 3, 3, 7.