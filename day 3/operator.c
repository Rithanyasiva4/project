#include<stdio.h>
int main()
{
  char op;
  int a,b;
  printf("ENTER THE VALUE OF A:");
  scanf("%d",&a);
  printf("ENTER THE VALUE OF B:");
  scanf("%d",&b);
  printf("ENTER THE OPERATOR:");
  scanf("%s",&op);
  switch(op)
  {
    case '+':
    {
    printf("ADDITION OF A AND B IS:%d",a+b);
    break;
    }
    case '-':
    {
    printf("SUBTRACTION  OF A AND B IS:%d",a-b);
    break;
    }
    case '*':
    {
    printf("MULTIPLICATION  OF A AND B IS:%d",a*b);
    break;
    }
    case '/':
    {
    if(b!=0)
    {
    printf("DIVISION OF A AND B IS:%d",a/b);
    }
    else
    {
     printf("IT CANNOT BE DIVISBLE");
    break;
    }
    }
  }
    return 0;
}