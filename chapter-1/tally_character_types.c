#include <stdio.h>

// Count occurrences of each digit, whitespace and all other characters.

int main() {
  int c, i, num_whitespace, num_other_chars;
  int num_digits[10];  // counter array

  num_whitespace = num_other_chars = 0;
  for (i = 0; i < 10; i++) {
    num_digits[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++num_digits[c - '0'];
    } else if (c == '\n' || c == '\t' || c == ' ') {
      ++num_whitespace;
    } else {
      ++num_other_chars;
    }
  }

  printf("digits = ");
  for (i = 0; i < 10; i++) {
    printf("%d ", num_digits[i]);
  }
  printf("\nwhitespace = %d", num_whitespace);
  printf("\nother characters = %d\n", num_other_chars);
}
