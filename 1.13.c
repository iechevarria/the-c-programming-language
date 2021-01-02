#include <stdio.h>

#define IN  1
#define OUT 0

main()
{
    int c, state;
    state = OUT;

    int cur_length = 0;
    int lengths[10];
    for (int i = 0; i < 10; ++i) {
        lengths[i] = 0;
    }

    while ((c = getchar()) != '\n') {
        if (c == ' ' || c == '\t') {
            if (state == IN) {
                lengths[cur_length - 1]++; 
            }
            cur_length = 0;
            state = OUT;
        }
        else {
            state = IN;
            if (cur_length < 10) {
                cur_length++;
            }
        }
    }

    for (int i = 0; i < 10; ++i) {
        printf("%2.d ", i + 1);
        for (int j = 0; j < lengths[i]; ++j) {
            putchar('#');
        }
        putchar('\n');
    }
}
