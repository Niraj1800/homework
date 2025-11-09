//shape area converter



#include <stdio.h>

int main() {
    int choice;
    float area, radius, length, breadth, base, height;

    printf("Shape Area Calculator\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = 3.1416 * radius * radius;  
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;    
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;         
            printf("Area of Triangle = %.2f\n", area);
            break;

        default:
            printf("please choose between 1 to 3\n");
    }

    return 0;
}

//Shape Area Calculator
//1. Circle
//2. Rectangle
//3. Triangle
//Enter your choice (1-3): 1
//Enter radius of the circle: 2
//Area of Circle = 12.57