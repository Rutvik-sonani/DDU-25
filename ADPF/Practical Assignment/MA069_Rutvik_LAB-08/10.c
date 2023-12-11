#include <stdio.h>

int countDigits(int num) {
    return (num == 0) ? 0 : 1 + countDigits(num / 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Number of digits: %d\n", countDigits(number));

    return 0;
}
