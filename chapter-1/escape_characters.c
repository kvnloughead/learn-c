#include <stdio.h>

// Copies input to output, replacing tabs with `\t`,
// backspaces with `\b` and backslashes with `\\`

int main()
{
  int c;
  while ((c = getchar()) != EOF)
  {
    switch (c)
    {
    case '\t':
      fputs("\\t", stdout);
      break;
    case '\b':
      fputs("\\b", stdout);
      break;
    case '\\':
      fputs("\\\\", stdout);
      break;
    default:
      putchar(c);
      break;
    }
  }
}