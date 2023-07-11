#include <stdio.h>
int readline(char s[], int length) {
    int i, c;
    for (i = 0; i < length-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}