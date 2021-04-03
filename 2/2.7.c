#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main() {
  int t = 0xf0f0f0f0;
  printf("original: %x, transformed: %x\n", t, invert(t, 0, 32));
}

/* returns x with n bits beginning at position p inverted */
unsigned invert(unsigned x, int p, int n) {
  int size = 8 * sizeof(unsigned);
  unsigned mask = (~0U << (size - n)) >> p;
  return (x & ~mask) | (~x & mask);
}
