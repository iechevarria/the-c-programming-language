#include <stdio.h>

int htoi(char s[]);

main() {
    printf("%d\n", htoi("10"));
    printf("%d\n", htoi("1"));
    printf("%d\n", htoi("100"));
    printf("%d\n", htoi("101"));
    printf("%d\n", htoi("0x1f"));
}


int htoi(char s[]) {
    int len = strlen(s);

    int i = 0;
    int prefix = 0;
    int sum = 0;

    // handle 0x prefix
    if (len >= 2 && s[0] == '0' && (s[1] == 'X' || s[1] == 'x')) {
        i = 2;
        prefix = 2;
    }

    // for a given position, get value to multiply digit by
    int multiple = 1 << 4 * (len - prefix - 1);

    while (i < len) {
        char c = s[i];

        if (c >= 'a' && c <= 'f') {
            sum += (10 + (c - 'a')) * multiple;
        } else if (c >= 'A' && c <= 'F') {
            sum += (10 + (c - 'A')) * multiple;
        } else if (c >= '0' && c <= '9') {
            sum += (c - '0') * multiple;
        }

        multiple = multiple >> 4;
        i++;
    }

    return sum;
}
