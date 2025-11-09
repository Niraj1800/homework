//Write a C program to count total number of notes in given amount

#include <stdio.h>

int main() {
    int amount;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 500) {
        printf("500 notes = %d\n", amount / 500);
        amount = amount % 500;
    }
    if (amount >= 200) {
        printf("200 notes = %d\n", amount / 200);
        amount = amount % 200;
    }
    if (amount >= 100) {
        printf("100 notes = %d\n", amount / 100);
        amount = amount % 100;
    }
    if (amount >= 50) {
        printf("50 notes = %d\n", amount / 50);
        amount = amount % 50;
    }
    if (amount >= 20) {
        printf("20 notes = %d\n", amount / 20);
        amount = amount % 20;
    }
    if (amount >= 10) {
        printf("10 notes = %d\n", amount / 10);
        amount = amount % 10;
    }
    if (amount >= 5) {
        printf("5 notes = %d\n", amount / 5);
        amount = amount % 5;
    }
    if (amount >= 2) {
        printf("2 notes = %d\n", amount / 2);
        amount = amount % 2;
    }
    if (amount >= 1) {
        printf("1 notes = %d\n", amount / 1);
    }

    return 0;
}

// output
//Enter the amount: 5062
//500 notes = 10
//50 notes = 1
//10 notes = 1
//2 notes = 1
