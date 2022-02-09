#include <stdio.h>
#include <stdbool.h>

// An approximate clone of wc. Counts lines, words and characters.
// Output: num_lines num_words num_chars

const int in = 1; // in or out of a word
const int out = 0;

int main()
{
  int c, num_lines, num_words, num_chars, state;
  num_lines = num_words = num_chars = 0;
  state = out;

  while ((c = getchar()) != EOF)
  {
    num_chars++;
    if (c == '\n')
      num_lines++;
    if (c == '\n' || c == '\t' || c == ' ')
      state = out;
    else if (state == out)
    {
      state = in;
      num_words++; // count the word when you enter it
    }
  }

  printf("%d %d %d\n", num_lines, num_words, num_chars);
}