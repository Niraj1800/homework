//Write a C program to check whether a character is alphabet or not.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') && (ch >= 'A' && ch <= 'Z')) {
        printf("It is an alphabet");
    } else {
        printf("It is not an alphabet");
    }

    return 0;
}

//output
//Enter a character: n
//It is an alphabet.

//Enter a character: 0
//It is not an alphabet.