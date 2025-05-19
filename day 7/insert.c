#include<stdio.h>
int main()
{
    int arr[5];
    printf("ENTER A NUMBER:");
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[3]=90;
    printf("THE BUBBLE SORT VALUES ARE:");
    for(int i=0;i<=5;i++)
    {
        printf("\n %d",arr[i]);   
    }
   printf("\n");
 return 0;
}