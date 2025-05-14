#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER THE VALUE OF A:");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("A IS GREATER THAN B");
    }
    else
    {
        printf("B IS GREATER THAN A");
    }
    return 0;
}