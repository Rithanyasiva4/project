#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER THE VALUE OF A:");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B:");
    scanf("%d",&b);
    printf("ENTER THE VALUE OF C:");
    scanf("%d",&c);
    if(a>b)
    {
        printf("A IS GREATER THAN B");
    }
    else if(b>c)
    {
        printf("B IS GREATER THAN C");
    }
    else
    {
        printf("C IS GREATER THAN A");
    }
    return 0;
}