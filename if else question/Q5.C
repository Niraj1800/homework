//Write a C program to check whether a number is even or odd

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num%2==0) {
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }
    return 0;
}

//output
//Enter a number: 20
//The number is even

//Enter a number: 33
//The number is odd