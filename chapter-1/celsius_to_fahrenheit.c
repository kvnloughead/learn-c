#include <stdio.h>

// print Celsius to Fahrenheit conversion table
float fahr_to_celsius(float fahr) {
  return (5.0 / 9.0) * (fahr - 32.0);
}

const int lower = 0, higher = 300, step = 20;

int main() {
  float celsius, fahr;
  int i;

  for (i = lower; i <= higher; i += step) {
    printf("%4d \t %4.1f\n", i, fahr_to_celsius(i));
  }
}
