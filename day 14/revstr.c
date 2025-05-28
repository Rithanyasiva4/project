#include<stdio.h>
#include<ctype.h>
int main() 
{
    char str[100];
    int len = 0;
    printf("Enter a string: ");
    fgets(str, 100 , stdin); 
    int vowels=0,consonants = 0,i=0;
    while(str[i] != '\0') 
    {
        char ch = tolower(str[i]);
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowels++;
            }
            else 
            {
                consonants++;
            }
        }
        i++;
}
printf("\n VOWELS:%d",vowels);
printf("\n CONSONANTS:%d",consonants);
while (str[len] != '\0') 
    {
        len++;
    }
    len--; 
    printf("\nReversed string: ");
    for (int j = len; j >= 0; j--)
    {
        printf("%c", str[j]);
    }
return 0;
}