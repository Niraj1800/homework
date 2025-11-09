//Write a C program to check whether a year is leap year or not.

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if (year % 400 == 0) {
        printf("%d is a Leap Year");
    }
    else if (year % 100 = 0) {
        printf("%d is Not a Leap Year");
    }
    else if (year % 4 == 0) {
        printf("%d is a Leap Year");
    }
    else {
        printf("%d is Not a Leap Year");
    }
    return 0;
}

//output
//Enter a year: 2024
//2024 is a Leap Year

//Enter a year: 2026
//2026 is Not a Leap Year