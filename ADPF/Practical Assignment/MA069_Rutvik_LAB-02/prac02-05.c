#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c,avg;

    printf("Enter A number value : ");
    scanf("%d",&a);

    printf("Enter B number value : ");
    scanf("%d",&b);

    printf("Enter C number value : ");
    scanf("%d",&c);

    avg = (a+b+c)/3;

    printf("Average of 3 number is %d",avg);

    return 0;
}