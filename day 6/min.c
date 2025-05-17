#include<stdio.h>
int main()
{
    int arr[5],min;
    printf("ENTER A NUMBER:");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    {
        if(arr[i] < min)
        {
            min=arr[i];
        }
    }
    }
    printf("THE ARRAY OF MINIMUM VALUE IS:%d",min);
    return 0;
}