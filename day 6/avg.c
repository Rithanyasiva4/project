#include<stdio.h>
int main()
{
    int arr[5],sum=0,avg=0;
    printf("\n ENTER A NUMBER:");
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("\n SUM OF THE ARRAY:%d",sum);
    avg=sum/5;
    printf("\n AVERAGE OF THE ARRAY:%d",avg);
    return 0;
}