#include<stdio.h>
int count_digit(int num)
{
    int count=0;
    if(num==0)
    {
        return 0;
    }
    while(num!=0)
    {
       num /= 10;
       count++;
    }
    return count;
}
int main()
{
    int a;
    printf("ENTER A VALUE OF A:");
    scanf("%d", &a);
    printf("\n COUNT OF THE DIGITS OF THE VALUE IS %d",count_digit(a));
    return 0;
}