#include<stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("\n THE NUMBER IS EVEN");
    }
    else
    {
        printf("\n THE NUMBER IS ODD");
    }
    return 0;
}