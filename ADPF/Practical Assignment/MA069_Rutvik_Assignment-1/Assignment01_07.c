#include <stdio.h>

int main() {
    int number;
    long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (number > 1) {
            factorial *= number;
            number--;
        }

        printf("Factorial is: %lld\n", factorial);
    }

    return 0;
}
