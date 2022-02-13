#include <ctype.h>
#include <stdio.h>

// Counts words in file, where words are any
// contiguous sequence of alphanumeric characters
// Prints results as a histogram

const int in = 1;
const int out = 0;
const int max_chars = 15;
const int h_length = 10 + 4 * max_chars;

int print_hr(int length, char c) {
  // prints horizontal rule of the given character and length
  for (int i = 0; i <= length; i++) putchar(c ? '-' : c);
}

int get_min(int x, int y) {
  return (x <= y) ? x : y;
}

int get_arr_max(int arr[], int arr_size) {
  int i;
  int max = arr[0];
  for (i = 1; i <= arr_size; i++) {
    if (arr[i] >= max)
      max = arr[i];
  }
  return max;
}

int main() {
  int c, i, j, num_chars, largest_count, num_words, state;
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

  largest_count = get_arr_max(buckets, max_chars);

  printf("\n");
  for (i = largest_count; i > 0; i--) {
    for (j = 0; j <= max_chars; j++) {
      if (buckets[j] >= i) {
        printf("%4c", 'X');
      } else {
        printf("    ");
      }
    }
    printf("\n");
  }
  print_hr(h_length, '-');
  printf("\n");
  for (i = 0; i < max_chars; i++) {
    printf("%4d", i);
  }
  printf("%4d+\n", max_chars);
}
