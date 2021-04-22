#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main() {
  int t = 0x12345678;
  printf("original: %x, transformed: %x\n", t, rightrot(t, 12));
}

/* return value of integer x rotated to the right by n bit positions */
unsigned rightrot(unsigned x, int n) {
  int size = 8 * sizeof(unsigned);
  return (x >> n) | (x << (size - n));
}
