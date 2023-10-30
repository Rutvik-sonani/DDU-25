#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;

    printf("Enter an integer: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

    sum = firstDigit + lastDigit;

    printf("Sum of first and last digits: %d\n", sum);

    return 0;
}
