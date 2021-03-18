#include <stdio.h>

main()
{
    int c;
    int last_char_space = 0;

    while ((c = getchar()) != EOF) {
        if ((c == ' ') && (last_char_space != 1)) {
            putchar(c);
            last_char_space = 1;
        }
        if (c != ' ') {
            putchar(c);
            last_char_space = 0;
        }
    }
}