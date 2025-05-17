#include<stdio.h>
int main()
{
    int i,j,num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf("%d %d",i,j);
        }
        printf("\n");
    }
    return 0;
}