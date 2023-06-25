#include "move.c"
#define LENGTHLIMIT 20
int fold(char s[], int length) {
    int c = 0;
    for (int i = LENGTHLIMIT; i < length;) {
        if (s[i] == ' ') {
            s[i] = '\n';
            i += LENGTHLIMIT;
            ++length;
        } else {
            for (int k = i; k < k+LENGTHLIMIT; ++k) {
                if (s[k] == 'a' || s[k] == 'e' || s[k] == 'i' || s[k] == 'o' || s[k] == 'u') {
                    length = move(s, k+1, length);
                    c = 1;
                    i = k+LENGTHLIMIT;
                    break;
                }
                if (s[k] == ' ') {
                    s[k] = '\n';
                    i += LENGTHLIMIT;
                    c = 1;
                    ++length;
                    break;
                }
            }
            if (c != 1) {
                length = move(s, i+LENGTHLIMIT-1, length);
                c = 0;
                i = i+LENGTHLIMIT+1;
            }
        }
    }
    return length;
}