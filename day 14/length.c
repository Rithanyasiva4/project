#include <stdio.h>
int main() 
{
    char str[50];
    printf("ENTER A STRING:");
    fgets(str, 50 ,stdin);
    char *ptr = str;
    int length = 0;
    while (*ptr != '\0' && *ptr != '\n') 
    {
        length++;
        ptr++;
    }
    printf("Length of the string: %d", length);
    return 0;
}
