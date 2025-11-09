//Write a C program to find maximum between two numbers 


#include <stdio.h> 
int main(){ 
int num1, num2; 
printf("Enter tne first number :"); 
scanf("%d",&num1); 
printf("Enter the second number :"); 
scanf("%d",&num2); 
if (num1>num2){ 
printf("\nfirst number is greater :%d"); 
} 
else{ 
printf("\nsecond number is greater:%d"); 
} 
return 0; 
} 


//output 
//Enter tne first number :1 
//Enter the second number :2 
//second number is greater:2