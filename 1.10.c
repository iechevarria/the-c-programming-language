#include <stdio.h>

#define TAB 9
#define BACKSPACE 8

main()
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == TAB) {
            putchar('\\');
            putchar('t');
        }
        else if (c == BACKSPACE) {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else {
            putchar(c);
        }
    }
}