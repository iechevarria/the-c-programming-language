#include <stdio.h>

#define TAB 9

main()
{
    int c, count;
    count = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n' || c == ' ' || c == TAB)
            ++count;
    printf("%d\n", count);
}
