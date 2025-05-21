#include<stdio.h>
int digits_sum(int num)
{
    int rem,sum=0;
    while(num!=0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    return sum;
}
int main()
{
    int a;
    printf("ENTER A VALUE OF A:");
    scanf("%d", &a);
    printf("\n SUM OF THE DIGITS OF THE VALUE IS %d",digits_sum(a));
    return 0;
}