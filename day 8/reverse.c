#include<stdio.h>
int reverse(int num)
{
    int rev_num=0;
    while(num!=0)
    {
    rev_num=rev_num*10+num%10;
    num/=10;
    }
    return rev_num;
}
int main()
{
    printf("%d \n",reverse(1221));
    printf("%d \n",reverse(1233));
    return 0;
}