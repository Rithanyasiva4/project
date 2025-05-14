#include <stdio.h>
int main()
 {
    char value[50];
    printf("ENTER A VALUE: ");
    scanf("%s", value);
    if (strlen(value) > 0) 
    {
        char firstChar = tolower(value[0]); 
        if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u') 
        {
            printf("THE VALUE IS A VOWEL\n");
        } 
        else 
        {
            printf("THE VALUE IS A CONSTANT\n");
        }
    } 
    else 
    {
        printf("No input provided.\n");
    }

    return 0;
}