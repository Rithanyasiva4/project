#include<stdio.h>
int main()
{
    int rows,col;
    printf("ENTER THE ROWS: ");
    scanf("%d",&rows);
    printf("ENTER THE COLUMNS: ");
    scanf("%d",&col);
    int a[rows][col];
    printf("ENTER A NUMBER OF 2*3 MATRIX IS ");
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("THE VALUE OF %d * %d MATRIX IS",rows,col);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("\n %d",a[i][j]);
        }

    }
    return 0;
}