#include <stdio.h>

int main() {
    int number, i, j;

    printf("Enter the number for the multiplication table: ");
    scanf("%d", &number);

    if (number < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Multiplication Table for %d:\n", number);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
