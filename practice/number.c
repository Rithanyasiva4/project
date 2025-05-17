#include<stdio.h>
int main()
{
    int num,i,j;
    printf("\n ENTER A NUMBER:");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            printf("%d %d",i,j);
        }
        printf("\n");
    }
    return 0;
}
