#include<stdio.h>
int main()
{
int fact=1,num;
{
printf("ENTER A NUMBER:");
scanf("%d",&num);
{
for(int i=1;i<=num;i++)
{
    fact*=i;
}
printf("FACTORIAL OF THE NUMBER IS:%d",fact);
}
return 0;
}
}
