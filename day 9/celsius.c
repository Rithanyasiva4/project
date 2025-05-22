#include<stdio.h>
double temperature(double f)
{
     double c = ((f- 32.0) * 5.0/9.0);
     return c;
}
int main()
{
    printf("\n THE CELSIUS OF %f FAHERNHEIT IS:%2f",90.0,temperature(90.0));
    printf("\n THE CELSIUS OF %f FAHERNHEIT IS:%2f",100.0,temperature(100.0));
    return 0;
}