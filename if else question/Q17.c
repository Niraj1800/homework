//Write a C program to find all roots of a quadratic equation.


//Write a C program to calculate profit or loss.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("Profit = %.2f", profit);
    }
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        printf("Loss = %.2f", loss);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}

//output
//Enter cost price: 1500
//Enter selling price: 1800
//Profit = 300
