#include<stdio.h>
int main() {
    int a,b,temp;
    
    printf("Enter A number value : ");
    scanf("%d",&a);

    printf("Enter B number value : ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("Value of A is %d\n",a);
    printf("Value of B is %d",b);

    return 0;
}