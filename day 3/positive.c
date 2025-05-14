#include<stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("THE NUMBER IS POSITIVE");
    }
    else if(num<0)
    {
        printf("THE NUMBER IS NEGATIVE");
    }
    else if(num==0)
    {
        printf("THE NUMBER IS ZERO");
    }
    else
    {
        printf("IT IS NOT A NUMBER");
    }
    return 0;
}