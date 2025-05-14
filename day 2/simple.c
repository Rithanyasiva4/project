#include<stdio.h>
int main()
{
    float p,r,t,simple_interest;
    printf("ENTER THE PRINCIPAL:");
    scanf("%f",&p);
    printf("ENTER THE NUMBER OF YEARS:");
    scanf("%f",&t);
    printf("ENTER THE RATE OF INTEREST :");
    scanf("%f",&r);
    simple_interest= p*r*t;
    printf("ENTER THE SIMPLE INTEREST:%f",simple_interest);
    return 0;
}