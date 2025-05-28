#include <stdio.h>
int main() 
{
    int arr[] = {12, 24, 36, 48, 55, 0};
    int *ptr = arr;
    printf("Array elements are:\n");
    while(*ptr !=0)
    {
        printf("%d ", *(ptr+1));
        ptr++;
    }
    printf("\n");
    return 0;
}