#include<stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    if((num/5==0) && (num/11==0))
    {
        printf("IT IS TRUE");
    }
    else
    {
        printf("IT IS NOT TRUE");
    }
    return 0;
}