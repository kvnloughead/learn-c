#include <stdio.h>

// Count characters in standard input

int main()
{
  double num_chars;
  int c;
  c = getchar();
  for (num_chars = 0; c != EOF; ++num_chars)
  {
    c = getchar();
  }

  ;
  printf("%.0f\n", num_chars);
}