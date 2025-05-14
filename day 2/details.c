#include <stdio.h>
int main()
{
    char name[50];
    char reg_no[20]; 
    int m1, m2, m3, m4, m5, tot;
    float avg;
    printf("ENTER A NAME:");
    scanf("%s", name);
    printf("ENTER A REGISTER NO:");
    scanf("%s", reg_no);
    printf("ENTER A MARK1:");
    scanf("%d",&m1);
    printf("ENTER A MARK2:");
    scanf("%d",&m2);
    printf("ENTER A MARK3:");
    scanf("%d",&m3);
    printf("ENTER A MARK4:");
    scanf("%d",&m4);
    printf("ENTER A MARK5:");
    scanf("%d", &m5);
    printf("NAME:%s\n", name);
    printf("REGISTER NUMBER:%s\n", reg_no);
    printf("MARK1:%d\n", m1);
    printf("MARK2:%d\n", m2);
    printf("MARK3:%d\n", m3);
    printf("MARK4:%d\n", m4);
    printf("MARK5:%d\n", m5);
    tot = m1 + m2 + m3 + m4 + m5;
    printf("TOTAL:%d\n", tot);
    avg = (float)tot / 5; 
    printf("Average:%f\n", avg);
        if(avg>=90 && avg<=100)
        {
         printf("\n GRADE A");
        }
        else if(avg>=80 && avg<90)
        {
         printf("\n GRADE B");
        }      
        else if(avg>=70 && avg<80)
        {
         printf("\n GRADE C");
        }
        else if(avg>=60 && avg<70)
        {
         printf("\n GRADE D");
        }
        else
        {
         printf("\n FAIL");      
        } 
   if(tot>=35)
     {
        printf("\n PASS");
     }
   else
     {
        printf("\n FAIL");
     }      
  return 0;
}