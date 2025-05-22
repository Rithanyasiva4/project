#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    printf("THE FACTORIAL VALUE IS %d",factorial(num));
    return 0;
}