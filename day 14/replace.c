#include<stdio.h>
#include<ctype.h>
int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100 , stdin); 
    int consonants = 0,i=0;
    while(str[i] != '\0') 
    {
        char ch = tolower(str[i]);
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                printf("*");
            }
            else 
            {
                consonants++;
            }
        }
        i++;
}
printf("\n CONSONANTS:%d",consonants);
return 0;
}