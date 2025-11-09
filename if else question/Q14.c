//Write a C program to input angles of a triangle and check whether triangle is valid or not

#include<stdio.h>
void main(){
    int angle1,angle2,angle3;
    printf("Enter a 1st angle of triangle :");
    scanf("%d",&angle1);
    printf("Enter a 2nd angle of triangle :");
    scanf("%d",&angle2);
    printf("Enter a 3rd angle of triangle :");
    scanf("%d",&angle3);
   
    int s=angle1+angle2+angle3;
    
    if(s==180){
        printf("triangle is valid");
    }
    else{
        printf("triangle is invalid");
    }
}

//output
//Enter a 1st angle of triangle :30
//Enter a 2nd angle of triangle :60
//Enter a 3rd angle of triangle :90
//triangle is valid
