#include <stdio.h>
int main() 
{
    int a = 12, b = 2,*x,*y;
    printf("Before swap: a = %d, b = %d\n", a, b);
    x=&a;
    y=&b;
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After swap:  a = %d, b = %d\n", a, b);
    return 0;
}  