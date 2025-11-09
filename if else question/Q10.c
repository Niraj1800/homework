//Write a C program to check whether a character is uppercase or lowercase alphabet.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("It is an uppercase alphabet");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("It is a lowercase alphabet");
    } 
    

    return 0;
}

//output
//Enter any character: A
//It is an uppercase alphabet

//Enter any character: a
//It is a lowercase alphabet