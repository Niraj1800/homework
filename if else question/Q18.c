//Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage < 40% : Grade F

#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float total, percentage;

    printf("Enter marks of Physics: ");
    scanf("%f", &physics);

    printf("Enter marks of Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks of Biology: ");
    scanf("%f", &biology);

    printf("Enter marks of Mathematics: ");
    scanf("%f", &mathematics);

    printf("Enter marks of Computer: ");
    scanf("%f", &computer);

    total = physics + chemistry + biology + mathematics + computer;
    percentage = (total / 500) * 100; 

    printf("\nTotal Marks = %.f", total);
    printf("\nPercentage = %.2f%%", percentage);

    if (percentage >= 90)
        printf("\nGrade: A");
    else if (percentage >= 80)
        printf("\nGrade: B");
    else if (percentage >= 70)
        printf("\nGrade: C");
    else if (percentage >= 60)
        printf("\nGrade: D");
    else if (percentage >= 40)
        printf("\nGrade: E");
    else
        printf("\nGrade: F");

    return 0;
}

//output
//Enter marks of Physics: 20
//Enter marks of Chemistry: 30
//Enter marks of Biology: 40
//Enter marks of Mathematics: 50
//Enter marks of Computer: 30

//Total Marks = 170
//Percentage = 34.00%
//Grade: F
