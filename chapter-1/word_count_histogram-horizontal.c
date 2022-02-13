#include <ctype.h>
#include <stdio.h>

// Counts words in file, where words are any
// contiguous sequence of alphanumeric characters
// Prints results as a histogram

const int in = 1;
const int out = 0;
const int max_chars = 15;
const int h_length = 10 + 4 * max_chars;

int get_min(int x, int y) {
  return (x <= y) ? x : y;
}

int get_max(int arr[], int length) {
  // returns maximal value in array of given length
  int current_max = arr[0];
  for (int i = 1; i <= length; i++) {
    // printf("arr[i] = %d, curmax = %d\n", arr[i], current_max);
    // printf("ternary %d\n", arr[i] > current_max ? arr[i] : current_max);
    current_max = arr[i] > current_max ? arr[i] : current_max;
  }
  return current_max;
}

void print_hrule(int length, char c) {
  // prints horizontal rule of given length and character
  for (int i = 0; i <= length; i++)
    printf("%c", c);
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

  int largest_count = get_max(buckets, max_chars);

  printf("\n");
  for (i = largest_count; i > 0; i--) {
    for (j = 0; j <= max_chars; j++) {
      printf("%4c", buckets[j] >= i ? 'X' : ' ');
    }
    printf("\n");
  }
  print_hrule(h_length, '-');
  printf("\n");
  for (i = 0; i <= max_chars; i++) {
    printf("%4d", buckets[i]);
  }
  printf("\n");
}
