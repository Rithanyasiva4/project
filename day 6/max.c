#include<stdio.h>
int main()
{
    int arr[5],max=0;
    printf("ENTER A NUMBER:");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }
    }
    printf("THE ARRAY OF MAXIMUM VALUE IS:%d",max);
    return 0;
}