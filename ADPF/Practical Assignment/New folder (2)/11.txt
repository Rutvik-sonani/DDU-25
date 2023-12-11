#include <stdio.h>

int sumDigits(int num) {
    return (num == 0) ? 0 : (num % 10) + sumDigits(num / 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Sum of digits: %d\n", sumDigits(number));

    return 0;
}
