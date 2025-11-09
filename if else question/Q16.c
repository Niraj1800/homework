//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter first side: ");
    scanf("%d", &side1);

    printf("Enter second side: ");
    scanf("%d", &side2);

    printf("Enter third side: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral");
    }
    else if (side1 == side2 && side2 == side3 && side1 == side3) {
        printf("The triangle is Isosceles");
    }
    else {
        printf("The triangle is Scalene");
    }

    return 0;
}

//output
//Enter first side: 25
//Enter second side: 25
//Enter third side: 25
//The triangle is Equilateral

//Enter first side: 5
//Enter second side: 8
//Enter third side: 5
//The triangle is Isosceles