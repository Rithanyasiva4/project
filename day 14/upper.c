#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for(int i = 0;str[i] != '\0';i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 'a'+'A';
        }
    }
    printf("Uppercase string: %s", str);
    return 0;
}

