#include<stdio.h>
int main()
{
    int area,perimeter,l,b;
    printf("\n ENTER THE LENGTH:");
    scanf("%d",&l);
    printf("\n ENTER THE BREADTH:");
    scanf("%d",&b);
    area = l*b;
    printf("\n AREA OF THE RECTANGLE:%d",area);
    perimeter = 2*(l+b);
    printf("\n PERIMETER OF THE RECTANGLE:%d",perimeter);
    return 0;
    
}