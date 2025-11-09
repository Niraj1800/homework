// character identifier



#include <stdio.h>

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);
    
    switch (ch) {
        case 'A' ... 'Z':
            printf("'%c' is an Uppercase Letter.\n", ch);
            break;

        case 'a' ... 'z':
            printf("'%c' is a Lowercase Letter.\n", ch);
            break;

        case '0' ... '9':
            printf("'%c' is a number.\n", ch);
            break;

        default:
            printf("'%c' is a Special Character.\n", ch);
    }

    return 0;
    }

//Enter any character: 5
//'5' is a number.