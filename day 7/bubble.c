#include<stdio.h>
int main()
{
    int arr[5];
    printf("ENTER A NUMBER:");
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
             int temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
            }
        }
        printf("THE BUBBLE SORT VALUES ARE:");
        for(int i=0;i<=5;i++)
        {
        printf("\n %d",arr[i]);
        }
        printf("\n");
    }
    return 0;
}