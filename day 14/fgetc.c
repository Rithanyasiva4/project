#include<stdio.h>
int main()
{
   char name[90];
   printf("ENTER A NAME:");
   fgets(name, 11, stdin);
   printf("%s",name);
   return 0;
}