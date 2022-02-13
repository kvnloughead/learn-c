#include <stdio.h>
#include <stdbool.h>

// Copies input file to output, replacing all strings of
// more than one space with a single space

int main()
{
  int c;
  bool prev_space = false;

  while ((c = getchar()) != EOF)
  {
    if (c != ' ' || prev_space == false)
      putchar(c);
    prev_space = (c == ' ');
  }
}