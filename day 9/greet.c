#include<stdio.h>
void greet (char name[50],char roll[100])
{
    printf("\n HELLO %s",name);
    printf("\n WELCOME TO TCS AS A %s",roll);
}
int main()
{
    char a[50],b[100];
    printf("ENTER A THE STRING OF A:");
    scanf("%s", a);
    printf("ENTER A THE STRING OF B:");
    scanf("%s", b);
    greet(a,b);
    return 0;
}