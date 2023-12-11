#include <stdio.h>
#include <ctype.h>

int main() {
    int num1,num2,gcd;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if(isalpha(num1)){
        printf("Input is not valid.");
        return 0;
    }

    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    printf("GCD is : %d",gcd);

    return 0;
}
