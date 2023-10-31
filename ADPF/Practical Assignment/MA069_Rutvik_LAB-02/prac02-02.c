#include<stdio.h>
#include<conio.h>

int main(){
    int a;

    printf("Enter any number value : ");
    scanf("%d",&a);

    // if(a>0){
    //     printf("Number is positive.");
    // }else if(a<0){
    //     printf("Number is negative.");
    // }else{
    //     printf("Number is zero.");
    // }

    a>0 ? printf("Number is positive.") : printf("Number is negative.");

    return 0;
}