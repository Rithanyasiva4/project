#include<stdio.h>
int greatest(int a,int b,int c)
{
    if(a>=b && a>=c)
    {
        printf("\n %d is greatest",a);
        return a;
    }
    else if(b>=a && b>=c)
    {
        printf("\n %d is greatest",b);
        return b;
    }
    else
    {
        printf("\n %d is greatest",c);
        return c;
    }

}
int main()
{
    printf("\n GREATEST OF THE FOLLOWING NUMBERS:%d",greatest(3,10,20));
    printf("\n GREATEST OF THE FOLLOWING NUMBERS:%d",greatest(30,40,30));
    printf("\n GREATEST OF THE FOLLOWING NUMBERS:%d",greatest(90,90,90));
    return 0;
}