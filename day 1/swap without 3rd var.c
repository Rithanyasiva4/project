#include<stdio.h>
int main()
{
    int a,b;
    printf("\n BEFORE SWAPPING THE TWO VALUES");
    printf("\n ENTER THE VALUE A:");
    scanf("%d",&a);
    printf("\n ENTER THE VALUE B:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n AFTER SWAPPING THE TWO VALUES");
    printf("\n VALUE OF A:%d",a);
    printf("\n VALUE OF B:%d",b);
    return 0;

}