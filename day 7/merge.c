#include <stdio.h>
int main() 
{
    int arr1[] = {24, 33, 57, 89, 100, 65};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {66, 77, 22, 18};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[size1 + size2];
    int j = 0;
    for (int i = 0; i < size1; i++) 
    {
        arr3[j++] = arr1[i];
    }
    for (int i = 0; i < size2; i++) 
    {
        arr3[j++] = arr2[i];
    }
    for (int i = 0; i < size1 + size2; i++) 
    {
        printf("%d \n", arr3[i]);
    }
}
   