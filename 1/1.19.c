#include <stdio.h>
#define MAXLINE 1000

int getline(char line[]);
void copy(char to[], char from[]);
void reverse(char line[]);

/* print longest input line */
main() {
    char line[MAXLINE];     /* current input line */

    while (getline(line) > 0) {
        reverse(line);
    }

    return 0;
}

/* read line into s, return length */
int getline(char s[]) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        // only store chars until max line length reached
        if (i < MAXLINE - 1) {
            s[i] = c;
        }
    }

    // break into new line, include newline in char count
    if (c == '\n' && i < MAXLINE - 1) {
        s[i] = c;
        ++i;
    }

    // 'i' may be larger than MAXLINE
    int end = (i < MAXLINE) ? i : MAXLINE - 1;
    s[end] = '\0';

    return i;
}

void reverse(char s[]) {
    // want to leave newline at the back of the string
    int end = strlen(s) - 2;
    int mid = end / 2;

    for (int i = 0; i <= mid; i++) {
        char tmp = s[end - i];
        s[end - i] = s[i];
        s[i] = tmp;
    }

    printf("%s", s);
}
