#include <stdio.h>

int bitcount1(unsigned x);
int bitcount2(unsigned x);


int bitcount1(unsigned x) {
    int b;

    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;


    return b;
}


/*
    bitcount2 is faster than bitcount1 because it is guaranteed to remove one 1 bit at
    a time. Instead of iterating through every bit, this solutions iterates through
    only the one bits.

    x &= (x - 1) works because (x - 1) flips the rightmost 1 bit to 0 and all bits that
    follow to 1. When AND'd with x, this removes the rightmost 1 bit:

    x     = 1011000
    x - 1 = 1010111
    &     = 1010000 

     When you run this repeatedly, one bit is removed at a time.
*/
int bitcount2(unsigned x) {
    int b;

    for (b = 0; x != 0; x &= (x - 1))
        b++;

    return b;
}


int main() {
    unsigned x = 0b10001101;
    int a = bitcount1(x);
    int b = bitcount2(x);
    printf("bitcount1: %d\nbitcount2: %d\n", a, b);
}
