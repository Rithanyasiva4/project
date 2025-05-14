#include<stdio.h>
int main()
{
    int n;
    printf("\n ENTER A NUMBER:");
    scanf("%d",&n);
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
    {
        printf("\n leap year");
    }
    else
    {
        printf("\n not a leap year");
    }
    return 0;
}



