#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main() {
  int t = 0x12345678;
  printf("original: %x, transformed: %x\n", t, rightrot(t, 12));
}

/* gets x with in bits beginning at p set to rightmost n bits of y */
unsigned rightrot(unsigned x, int n) {
  int size = 8 * sizeof(unsigned);
  return (x << n) | (x >> (size - n));
}
