//Write a C program to check whether a number is divisible by 5 and 11 or not

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num%5==0) {
        printf("%d is divisible by 5");
    }
    else if (num%11==0) {
        printf("%d is divisible by 11");
    }
    else {
        printf("The number is not divisible by 5 and 11");
    }
    
    return 0;
}

//output
//Enter a number: 23
//The number is not divisible by 5 and 11

//Enter a number: 25
//25 is divisible by 5

//Enter a number: 33
//33 is divisible by 11