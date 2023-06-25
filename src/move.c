int move(char s[], int position, int length) {
    int b = 0;
    if (s[position] == ' ') {
        for (int j = position; j <= length; ++j) {
            s[j] = s[j+1];
        }
        length -= 1;
        b = 1;
    }
    if (b == 0) {
        for (int i = length; i >= position; --i) {
            s[i+2] = s[i];
        }
        s[position] = '-';
        s[position+1] = '\n';
        return length+2;
    } else {
        for (int i = length; i >= position; --i) {
            s[i+1] = s[i];
        }
        s[position] = '\n';
        return length+1;
    }
}