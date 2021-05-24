#include <stdio.h>

char lower(char c);

char lower(char c) {
    return ((c >= 65) && (c <= 90)) ? (c + 32) : c;
}

int main() {
    char a = 'A';
    char h = 'h';
    char z = 'Z';

    printf(
        "%c -> %c\n%c -> %c\n%c -> %c\n",
        a,
        lower(a),
        h,
        lower(h),
        z,
        lower(z)
    );
}
