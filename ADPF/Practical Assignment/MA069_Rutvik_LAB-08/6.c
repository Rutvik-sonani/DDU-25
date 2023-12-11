#include <stdio.h>

int powr(int b, int e) {
    return (e == 0) ? 1 : b * powr(b, e - 1);
}

int main() {
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%d^%d = %d\n", base, exponent, powr(base, exponent));

    return 0;
}
