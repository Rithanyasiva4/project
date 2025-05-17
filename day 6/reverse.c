#include<stdio.h>
int main()
{
    int arr[5];
    printf("ENTER A NUMBER:");
    for(int i=0;i<5;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(int j=5;j>=0;j--)
    {
       printf("\n REVERSED NUMBER IS:%d",arr[j]);  
    }  
   return 0;
}