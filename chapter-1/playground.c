#include <stdio.h>

int power(int base, int n) {
  // returns base**n
  int p = 1;
  for (; n > 0; n--)
    p = p * base;
}

int main() {
  int i;
  for (i = 0; i <= 10; i++)
    printf("%d\n", power(2, i));
}
