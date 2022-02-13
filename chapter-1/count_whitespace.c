#include <stdio.h>

// Counts whitespace characters (spaces, tabs and newlines)
// Output: `num_spaces num_tabs num_newlines`

int main()
{
  int num_spaces = 0, num_tabs = 0, num_newlines = 0;
  int c;

  while ((c = getchar()) != EOF)
  {
    switch (c)
    {
    case ' ':
      num_spaces++;
      break;
    case '\t':
      num_tabs++;
      break;
    case '\n':
      num_newlines++;
      break;
    default:
      break;
    }
  }

  printf("spaces\t\t %d\n", num_spaces);
  printf("tabs\t\t %d\n", num_tabs);
  printf("newlines\t %d\n", num_newlines);
}