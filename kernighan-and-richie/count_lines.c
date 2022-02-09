#include <stdio.h>

// Counts newlines in the input file

int main()
{
  int num_lines = 0;
  int c = getchar();

  while (c != EOF)
  {
    if (c == '\n')
      ++num_lines;
    c = getchar();
  }

  printf("%d\n", num_lines);
}