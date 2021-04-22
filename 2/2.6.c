#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main() {
    int a = 0x11111111;
    int b = 0xffffffff;
    printf("original: %x, transformed: %x\n", a, setbits(a, 0, 12, b));
}

/* returns x with the n bits that begin at position p set to the rightmost n bits of y */
unsigned setbits(unsigned x, int p, int n, unsigned y) {
    int size = 8 * sizeof(unsigned);
    unsigned mask = (~0U << (size - n)) >> p;
    return (x & ~mask) | (y & mask);
}
