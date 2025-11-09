//Write a C program to input any character and check whether it is alphabet, digit or special character

#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
 if ((ch >= 'a' && ch <= 'z') && (ch >= 'A' && ch <= 'Z')) {
        printf("It is an alphabet.");
    } 
 else if (ch >= '0' && ch <= '9') {
        printf("It is a number");
    } 
 else {
        printf("It is a special character");
    }

    return 0;
}

// output
//Enter any character: n
//It is a special character

//Enter any character: 10
//It is a number

//Enter any character: %
//It is a special character