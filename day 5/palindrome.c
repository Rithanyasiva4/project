#include <stdio.h>
int main() 
{
    int reversed_num=0,original,num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original=num;
    while (num!= 0) 
    {
        reversed_num = reversed_num*10+num% 10;
        num/= 10;
    }
    if(original==reversed_num)
    {
        printf("%d is a palindrme",original);
    }
    else
    {
        printf("%d is not a palindrome",original);
    }
    return 0;
}