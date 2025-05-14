#include<stdio.h>
int main()
{   
    int a,b,c;
    printf("\n ENTER THE VALUE A:");
    scanf("%d",&a);
    printf("\n ENTER THE VALUE B:");
    scanf("%d",&b);
    c=a+b;
    printf("\n SUM OF THE TWO VALUES:%d", c);
    c=a-b;
    printf("\n DIFFERENCE BETWEEN THE TWO VALUES:%d", c);
    c=a*b;
    printf("\n MULTIPLICATION OF THE TWO VALUES:%d", c);
    c=a/b;
    printf("\n DIVISION OF THE TWO VALUES:%d", c);
    return 0;
}