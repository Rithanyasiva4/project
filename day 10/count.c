#include<stdio.h>
int count_digits(int num)
{
    int a=1;
    if(num==0)
    {
        return 0;
    }
    else
    {
        return a+count_digits(num/10);
    }
}
int main()
{
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    printf("The count of the given number is %d",count_digits(n));
    return 0;
}