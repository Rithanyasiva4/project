#include<stdio.h>
#include<math.h>
void power (int a, int b)
{
  double c= pow(a,b);
  printf("\n THE RESULT OF THE VALUES ARE:%2f",c);
}
int main()
{
    power(2,3);
    power(3,5);
    return 0;
}