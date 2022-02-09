#include <stdio.h>

// Prints each word on a separate line

const int in = 1;
const int out = 0;

int main()
{
  int c, state;
  state = out;
  while ((c = getchar()) != EOF)
  {
    if (c != '\n' && c != '\t' && c != ' ')
    {
      state = in;
      putchar(c);
    }
    else if (state == in)
    {
      state = out;
      putchar('\n');
    }
  }
}