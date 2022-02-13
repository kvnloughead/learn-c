#include <ctype.h>
#include <stdio.h>

// Counts words in file, where words are any
// contiguous sequence of alphanumeric characters
// Prints results as a histogram

const int in = 1;
const int out = 0;
const int max_chars = 15;

int get_min(int x, int y) {
  return (x <= y) ? x : y;
}

int main() {
  int c, i, j, num_chars, num_words, state;
  int buckets[max_chars];

  num_chars = num_words = 0;
  state = out;
  for (i = 0; i <= max_chars; i++) {
    buckets[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (!isalnum(c)) {
      if (state == in) {
        ++buckets[get_min(num_chars, max_chars)];
        num_chars = 0;
      }
      state = out;
    } else {
      num_chars++;
      state = in;
    }
  }

  printf("word counts = \n");
  for (i = 0; i <= max_chars; i++) {
    if (i == max_chars)
      printf("%4d+ |", i);
    else
      printf("%4d  |", i);
    for (j = 1; j <= buckets[i]; j++) {
      printf("%c", '=');
    }
    printf("\n");
  }
}
