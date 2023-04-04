#include <apue.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    int fd = dup(STDIN_FILENO);

    if(-1 == fd)
        err_sys("dup stdin failed!");
    printf("fd:%d\n",fd);
    
    int result = dup2(STDERR_FILENO, fd);

    if (-1 == result) {
        err_sys("dup2 100 failed!");
    }
    printf("fd:%d\n", fd);
}