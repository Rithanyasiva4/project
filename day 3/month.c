#include <stdio.h>
int main() 
{
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    switch (month) 
    {
        case 1: 
        {
            printf("31 days\n");
            printf("JANUARY");
            break;
        }
        case 2:
        {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                printf("29 days (leap year)\n");
            }
            else 
            {
                printf("28 days\n");
            }
            printf("FEBRUARY");
            break;
        }
        case 3: 
        {
            printf("31 days\n");
            printf("MARCH");
            break;
        }
        case 4:
        { 
            printf("30 days\n");
            printf("APRIL");
            break;
        }
        case 5: 
        {
            printf("31 days\n");
            printf("MAY");
            break;
        }
        case 6:
        { 
            printf("30 days\n");
            printf("JUNE");
            break;
        }
        case 7: 
        {
            printf("31 days\n");
            printf("JULY");
            break;
        }
        case 8: 
        {
            printf("31 days\n");
            printf("AUGUST");
            break;
        }
        case 9:
        { 
            printf("30 days\n");
            printf("SEPTEMBER");
            break;
        }
        case 10: 
        {
            printf("31 days\n");
            printf("OCTOBER");
            break;
        }
        case 11:
        { 
            printf("30 days\n");
            printf("NOVEMBER");
            break;
        }
        case 12: 
        {
            printf("31 days\n");
            printf("DECEMBER");
            break;
        }
        default:
        {
            printf("Invalid month\n");
        }
    }

    return 0;
}