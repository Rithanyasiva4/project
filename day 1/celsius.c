#include <stdio.h>
int main() {
  float celsius, fahrenheit;
  printf("Enter temperature in Celsius: ");
  scanf("%f", &celsius);
  fahrenheit = ((celsius * 9.0/5.0) + 32.0);
  printf("%.f degrees Celsius is equal to %.f degrees Fahrenheit\n", celsius, fahrenheit);
  return 0;
}