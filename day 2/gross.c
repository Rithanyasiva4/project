#include<stdio.h>
int main()
{   char name[50],emp_id[90];
    int bp,hra,da,gross_salary;
    printf("\n ENTER THE EMPLOYEE NAME:");
    scanf("%s",&name);
    printf("\n ENTER THE EMPLOYEE ID NUMBER:");
    scanf("%s",&emp_id);
    printf("\n ENTER THE BASIC PAY:");
    scanf("%d",&bp);
    printf("\n ENTER THE DEARNESS ALLOWANCE:");
    scanf("%d",&da);
    printf("\n ENTER THE HOUSE RENT ALLOWANCE:");
    scanf("%d",&hra);
    printf("\n NAME:%s",name);
    printf("\n EMPLOYEE ID:%s",emp_id);
    printf("\n BASIC SALARY:%d",bp);
    printf("\n DEARNESS ALLOWANCE:%d",da);
    printf("\n HOUSE RENT ALLOWANCE:%d",hra);
    gross_salary=bp+hra+da;
    printf("\n GROSS SALARY OF THE EMPLOYEE:%d",gross_salary);
    return 0;
}