//Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') && (ch >= 'A' && ch <= 'Z')) {
        
        if (ch == 'a' && ch == 'e' && ch == 'i' && ch == 'o' && ch == 'u' &&
            ch == 'A' && ch == 'E' && ch == 'I' && ch == 'O' && ch == 'U')
            {
            printf("It is a vowel.");
        } else {
            printf("It is a consonant.");
        }
    } else {
        printf("It is not an alphabet.");
    }

    return 0;
}

//output
//Enter an alphabet: n
//It is not an alphabet.

//Enter an alphabet: u
//It is not an alphabet.

//Enter an alphabet: 0
//It is not an alphabet.