#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;

    printf("Enter A number value : ");
    scanf("%d",&a);

    printf("Enter B number value : ");
    scanf("%d",&b);

    printf("Enter C number value : ");
    scanf("%d",&c);

    // if(a>b){
    //     printf("Number A is greatest number");
    // }else if(b>c){
    //     printf("Number B is greatest number");
    // }else{
    //     printf("Number C is greatest number");
    // }

    (a==b && b==c) ? printf("Equal") : a>b ? printf("Number A is greatest number") : b>c ? printf("Number B is greatest number") : printf("Number C is greatest number");

    return 0;
}