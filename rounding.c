#include <stdio.h>

void doubleFunc(double dbl);
void longintFunc(long int li);

int main(void)
{
  int num = 33;
  int den = 5;
  double res = 0.0;

  res = num / den;
  printf("Truncation: %d / %d = %.2f\n", num, den, res);

  res = ((double)num / den);
  printf("Truncation: %f / %d = %.2f\n", (double)num, den, res);

  res = (num / (double)den);
  printf("Truncation: %d / %f = %.2f\n", num, (double)den, res);
}