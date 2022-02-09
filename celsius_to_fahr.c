#include <stdio.h>

double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);

int main(void)
{
  int c = 0.0, f = 32.0;
  printf("Celsius \t\t Fahrenheit\n");
  for (c = 0; c <= 150; c += 5)
  {
    printf("%4d \t\t        %11.0lf\n", c, celsiusToFahrenheit(c));
  }
}

// Convert degrees Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius)
{
  double fahr = (celsius * 9.0 / 5.0) + 32.0;
  return fahr;
}

// Convert degrees Fahrenheit to Celsius
double fahrenheitToCelsius(double fahr)
{
  double celsius = (fahr - 32.0) * 5.0 / 9.0;
  return celsius;
}