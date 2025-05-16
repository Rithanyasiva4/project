#include <stdio.h>
int main() 
{
  int num, i;
  int is_prime = 1; 
  printf("Enter a number: ");
  scanf("%d", &num);
  {
  for(int i=2; i<=num/2; i++)
  {
    if(num % i == 0) 
      {
        is_prime = 0; 
        break;
      }
      i++;
  }
  }
  if (is_prime == 1) 
  {
    printf("%d is a prime number.\n", num);
  }
  else 
  {
    printf("%d is not a prime number.\n", num);
  }

  return 0;
}