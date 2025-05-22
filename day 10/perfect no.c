#include<stdio.h>
int divisors(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("%d IS PERFECT",n);
    }
    else
    {
        printf("%d  IS NOT PERFECT",n);
    }
  return sum;
}
int main()
{
    int  num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    divisors(num);
    return 0;
}