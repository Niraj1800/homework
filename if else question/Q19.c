//Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include <stdio.h>

int main() {
    float units, amount, totalAmount, surcharge;

    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        amount = units * 0.50;
    }
    else if (units <= 150) {
        amount = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250) {
        amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else {
        amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    surcharge = amount * 0.20;
    totalAmount = amount + surcharge;

    printf("\nElectricity Bill Details:");
    printf("\n--------------------------");
    printf("\nElectricity Charges = Rs. %.2f", amount);
    printf("\nSurcharge (20%%)     = Rs. %.2f", surcharge);
    printf("\nTotal Bill Amount   = Rs. %.2f", totalAmount);

    return 0;
}

//output
//Enter total electricity units consumed: 700

//Electricity Bill Details:
//--------------------------
//Electricity Charges = Rs. 895.00
//Surcharge (20%)     = Rs. 179.00
//Total Bill Amount   = Rs. 1074.00