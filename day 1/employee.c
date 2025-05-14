#include<stdio.h>
int main()
{
    int age,salary;
    char name[60];
    printf("\n ENTER THE NAME:");
    scanf("%s",&name);
    printf("\n ENTER THE AGE:");
    scanf("%d",&age);
    printf("\n ENTER THE SALARY:");
    scanf("%d",&salary);
    printf("\n NAME:%s",name);
    printf("\n AGE:%d",age);
    printf("\n SALARY:%d",salary);
    return 0;
}