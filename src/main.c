#include <stdio.h>
#include "readline.c"
#include "fold.c"
#define MAXLINE 1000

int main(void) {
    char line[MAXLINE];
    int length = readline(line, MAXLINE);
    length = fold(line, length);
    printf("length: %d\n%s", length, line);
    return 0;
}