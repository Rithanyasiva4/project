#include <stdio.h>

int main() {
    int arr[] = {9, 20, 45, 60, 70, 54},size;
    int num = 54;
    int pos;
    printf("Enter a position: ");
    scanf("%d", &pos);
    if (pos >= 0 && pos < size) 
    {
        if (arr[pos] == num) 
        {
            printf("It is true\n");
        } else 
        {
            printf("It is not true\n");
        }
    } 
    else 
    {
        printf("Invalid position\n");
    }

    return 0;
}
