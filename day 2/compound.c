#include <stdio.h>

int main()
 {
    int a = 10, b = 5, c = 2;
    
    if (a > b && c < b || a == 10) 
    {
        printf("Condition is true\n");
    } 
    else 
    {
        printf("Condition is false\n");
    }

    if (!(a < b) && c * 2 == 4) 
    {
        printf("Second condition is true\n");
    }
    else 
    {
      printf("Second condition is false\n");
    }
    return 0;
}
