int move(char s[], int position, int length) {
    if (s[position] != ' ') {
        for (int i = length; i >= position; --i) {
            s[i+2] = s[i];
        }
        s[position] = '-';
        s[position+1] = '\n';
        length += 2;
    } else {
        s[position] = '\n';
    }
    return length;
}