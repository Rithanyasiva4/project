#include<stdio.h>
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        return a*power(a,b-1);
    }
}
int main()
{
    int x,y;
    printf("ENTER A NUMBER X:");
    scanf("%d",&x);
    printf("ENTER A NUMBER Y:");
    scanf("%d",&y);
    printf("THE POWER OF THE GIVEN POWER IS %d",power(x,y));
    return 0;
}