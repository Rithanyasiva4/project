#include<stdio.h>
int main()
{
    int num,square,cube;
    printf("\n ENTER A NUMBER:");
    scanf("%d",&num);
    square=pow(num,2.0);
    printf("\n SQUARE VALUE OF THE GIVEN NUMBER:%d",square);
    cube=pow(num,3.0);
    printf("\n CUBE VALUE OF THE GIVEN NUMBER:%d",cube);
    return 0;
}