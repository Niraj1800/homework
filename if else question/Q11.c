//Write a C program to input week number and print week day.

#include <stdio.h>

int main() {
    int week;

    printf("Enter week number (1-7): ");
    scanf("%d", &week);

    switch (week) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid week number! Please enter a number between 1 and 7.");
    }

    return 0;
}

// output
//Enter week number (1-7): 2
//Tuesday
