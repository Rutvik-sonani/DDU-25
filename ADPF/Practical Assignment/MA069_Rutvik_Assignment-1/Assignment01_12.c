#include <stdio.h>

int main() {
    int result = 0, factor, accumulator = 0;

    printf("Enter two integers to multiply: ");
    scanf("%d %d", &result, &factor);

    if (factor < 0) {
        factor = -factor;
        result = -result;
    }

    while (factor != 0) {
        if (factor % 2 == 1) {
            accumulator += result;
        }
        result *= 2;
        factor /= 2;
    }

    // Display the result
    printf("Product: %d\n", accumulator);

    return 0;
}
