#include<stdio.h>
int reverse(int num)
{
    int rev_num=0,original_num=num;
    while(num!=0)
    {
    rev_num=rev_num*10+num%10;
    num/=10;
    }
    if(original_num==rev_num)
    {
        printf("\n %d IS A PALINDROME",original_num);
    }
    else
    {
        printf("\n %d IS NOT A PALINDROME",original_num);
    }
    return rev_num;
}
int main()
{
    printf("\n %d",reverse(1221));
    printf("\n %d",reverse(1233));
    return 0;
}