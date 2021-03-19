#include <stdio.h>
#define MAXLINE 1000

int getline(char line[]);
void copy(char to[], char from[]);

/* print longest input line */
main() {
    int len;                /* current line len */
    int max = 0;            /* max len see so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line seen */

    while ((len = getline(line)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("longest line (%d characters): %s", max, longest);
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

/* copy 'from' into 'to'; assumed it's big enough */
void copy(char to[], char from[]) {
    int i = 0;
    while (from[i] != '\0') {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
}
