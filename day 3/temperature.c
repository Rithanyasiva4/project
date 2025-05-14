#include<stdio.h>
int main()
{
    int temperature;
    printf("ENTER A TEMPERATURE:");
    scanf("%d",&temperature);
    if(temperature<10)
    {
        printf("USING A JACKET");
    }
    else if(temperature >= 10 && temperature < 20)
    {
        printf("USING A SWEATER");
    }
    else if(temperature >= 20)
    {
        printf("USING A T-SHIRT");
    }
    else
    {
        printf("THE OPTION IS NOT USED");
    }
    return 0;
}