#include<stdio.h>
int main()
{
    int num,i=1;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    printf("MULTIPILCATION TABLE REQUIRED %d:",num);
    while(i<=10)
    {    
         printf("\n %d*%d=%d",num,i,num*i);
         i++;
    }
    return 0;
}