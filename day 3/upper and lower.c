#include<stdio.h>
int main()
{
    char letter;
    printf("ENTER A LETTER:");
    scanf("%s",&letter);
    if(letter >='A' && letter <= 'Z')
    {
        printf("THIS LETTER IS UPPERCASE");
    }
    else if(letter >= 'a' && letter <='z')
    {
        printf("THIS LETTER IS LOWERCASE");
    }
    else
    {
        printf("THIS IS NOT VALID A LETTER");
    }
    return 0;
    
}