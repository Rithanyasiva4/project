#include<stdio.h>
int main()
{
    int a=10,b=20,temp;
    printf("\n BEFORE SWAPPING OF A AND B");
    printf("\n THE VALUE OF A:%d",a);
    printf("\n THE VALUE OF B:%d",b);
    temp=a;
    a=b;
    b=temp;
    printf("\n AFTER SWAPPING OF A AND B");
    printf("\n THE VALUE OF A:%d",a);
    printf("\n THE VALUE OF B:%d",b);
    return 0;
}