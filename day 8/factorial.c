#include<stdio.h>
int fact(int i)
{
    int a=1;
    for(int j=1;j<=i;j++)
    {
    a*=j;
    }
    return a;
}
int main()
{
    printf("\n FACTORIAL OF THE RESULT 1 IS:%d",fact(5));
    printf("\n FACTORIAL OF THE RESULT 2 IS:%d",fact(12));
    return 0;
}