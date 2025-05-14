#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main() {
    int choice;
    float side, length, width, radius, area;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Calculate area of a square\n");
        printf("2. Calculate area of a rectangle\n");
        printf("3. Calculate area of a circle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the side of the square: ");
                scanf("%f", &side);
                area = side * side;
                printf("Area of the square: %.2f\n", area);
                break;
            case 2:
                printf("Enter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%f", &width);
                area = length * width;
                printf("Area of the rectangle: %.2f\n", area);
                break;
            case 3:
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                area = PI * radius * radius;
                printf("Area of the circle: %.2f\n", area);
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}