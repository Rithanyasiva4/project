#include<stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 4, 5},n = 5;
    int *p = arr + n - 1;
    printf("Reversed array: ");
    while (p >= arr) 
    {
        printf("%d ", *p);
        p--;
    }
    printf("\n");
    return 0;
}