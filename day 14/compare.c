#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    printf("ENTER THE STRING 1:");
    fgets(str1, 50,stdin);
    printf("ENTER THE STRING 2:");
    fgets(str2, 50,stdin);
    int i=0;
    while(str1 [i] == str2 [i] && str1 [i] !='\0')
    {
        i++;
    }
    if(str1[i] == str2[i])
    {
        printf("THE STRING IS EQUAL");
    }
    else
    {
        printf("THE STRING IS NOT EQUAL");
    }
    return 0;
}