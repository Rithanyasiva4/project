#include<stdio.h>
int prime(int x) 
{
    int isPrime = 1;
    if (x <= 1) 
    {
        isPrime = 0;
    } 
    else 
    {
        for (int i = 2; i * i <= x; i++) 
        {
            if (x % i == 0) 
            {
                isPrime=0;
                break;
            }
        }
        if (isPrime) 
        {
            printf("\n%d IS A PRIME NUMBER", x);
        } else 
        {
            printf("\n%d IS NOT A PRIME NUMBER", x);
        }
    }
    return x;
}
int main()
{
    printf("\n THE GIVEN NUMBERS ARE");
    prime(90);
    prime(7);
    return 0;
}