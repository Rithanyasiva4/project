#include<stdio.h>
int main()
{
    int *p,a=90;
    p=&a;
    printf("\n %p",&a);
    printf("\n %d",*p);
    printf("\n %p",(p+1));
    printf("\n %p",&p);
    return 0;
}