#include <stdio.h>

#define ASCII_LENGTH 128

main()
{
    int c;
    int counts[ASCII_LENGTH];
    for (int i = 0; i < ASCII_LENGTH; ++i) {
        counts[i] = 0;
    }

    while ((c = getchar()) != '\n') {
        counts[c]++;
    }

    for (int i = 0; i < ASCII_LENGTH; ++i) {
        if (counts[i] > 0) {
            printf("%c ", i);
            for (int j = 0; j < counts[i]; ++j) {
                putchar('#');
            }
            putchar('\n');
        }
    }
}
