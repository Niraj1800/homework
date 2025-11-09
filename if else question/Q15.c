//Write a C program to input all sides of a triangle and check whether triangle is valid or not

#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter a side of triangle :");
    scanf("%d",&side1);
    printf("Enter a side of triangle :");
    scanf("%d",&side2);
    printf("Enter a side of triangle :");
    scanf("%d",&side3);
    if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2){
        printf("triangle is valid");
    }
    else{
        printf("triangle is invalid");
    }
 return 0;   
}

//output
//Enter a side of triangle :20
//Enter a side of triangle :30
//Enter a side of triangle :40
//triangle is valid
