#include<stdio.h>

void main(){
    int a,b;

    printf("Enter a no : ");
    scanf("%d",&a);

    printf("Enter b no : ");
    scanf("%d",&b);

    int divide = a / b;
    int rem = a % b;

    printf("Divide is : %d",divide);
    printf("Reminder is : %d",rem);
}