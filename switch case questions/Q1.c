// currency converter





#include <stdio.h>

int main() {
    int choice;
    float amount, converted;

    printf("covert your currency from inr\n");
    printf("1. Convert to us dollars\n");
    printf("2. Convert to japanese yen\n");
    printf("3. Convert to euro\n");
    printf("4. Convert to dinnar\n");
    printf("5. Convert to chinese yuan\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter amount in inr: ");
    scanf("%f", &amount);

    switch (choice) {
        case 1:
            converted = amount * 0.011;
            printf("%.2f inr = %.2f us dollars\n", amount, converted);
            break;
        case 2:
            converted = amount * 2; 
            printf("%.2f inr = %.2f japanese yen\n", amount, converted);
            break;
        case 3:
            converted = amount * 0.0097;
            printf("%.2f inr = %.2f euro\n", amount, converted);
            break;
        case 4:
            converted = amount *0.58; 
            printf("%.2f inr = %.2f dinnar\n", amount, converted);
            break;
        case 5:
            converted = amount * 0.08;  
            printf("%.2f inr = %.2f chinese yuan\n", amount, converted);
            break;
        default:
            printf("please choose beetween 1 to 5\n");
    }

    return 0;
}

//covert your currency from inr
//1. Convert to us dollars
//2. Convert to japanese yen
//3. Convert to euro
//4. Convert to dinnar
//5. Convert to chinese yuan
//Enter your choice (1-5): 1
//Enter amount in inr: 200
//200.00 inr = 2.20 us dollars