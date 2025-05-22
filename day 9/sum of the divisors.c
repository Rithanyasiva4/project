#include<stdio.h>
int values(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
   int num;
   printf("ENTER A NUMBER:");
   scanf("%d",&num);
   printf("THE SUM OF THE DEVICES IS %d",values(num));
   return 0;
}