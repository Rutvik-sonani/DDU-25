#include<stdio.h>
#include<conio.h>

int main(){

    int a,b;

    printf("Enter a no : ");
    scanf("%d",&a);

    printf("Enter b no : ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("Swap value A : %d\n",a);
    printf("Swap value B : %d",b);

    return 0;
}