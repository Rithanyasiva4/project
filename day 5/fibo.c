#include <stdio.h>
int main() 
{
    int n,a=0,b=1,c;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    printf("Fibonacci Series:");
    printf("%d %d",a,b);
    for(int i=2;i<n;i++)
    {
        c= a + b;
        printf("%d, ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}