#include <stdio.h>

// Copy input to output
int main()
{
  int c;
  c = getchar();
  while (c != EOF)
  {
    putchar(c);
    c = getchar();
  }
}