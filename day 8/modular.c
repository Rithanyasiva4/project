#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    if(y==0)
    {
        printf("\n ERROR IN THE DIVISION");
    }
    return x/y;
}
int main()
{
    printf("\n ADDITION OF THE NUMBERS:%d",add(9,10));
    printf("\n SUBTRACTION  OF THE NUMBERS:%d",sub(35,20));
    printf("\n MULTIPLICATION OF THE NUMBERS:%d",mul(4,6));
    printf("\n DIVISION OF THE NUMBERS:%d",div(35,0));
    return 0;
}
