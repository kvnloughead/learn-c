#include <stdio.h>

// print Celsius to Fahrenheit conversion table
float fahr_to_celsius(float fahr) {
  return (5.0 / 9.0) * (fahr - 32.0);
}

void print_hrule(int length, char c) {
  // prints horizontal rule of given length and character
  for (int i = 0; i <= length; i++)
    printf("%c", c);
}

const int lower = 0, higher = 100, step = 20;

int main() {
  float celsius, fahr;
  int i;

  printf("%4c \t %4c\n", 'F', 'C');
  print_hrule(16, '-');
  printf("\n");
  for (i = lower; i <= higher; i += step) {
    printf("%4d \t %4.1f\n", i, fahr_to_celsius(i));
  }
}
