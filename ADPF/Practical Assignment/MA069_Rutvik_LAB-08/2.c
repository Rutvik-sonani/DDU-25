#include <stdio.h>

void conv(int dec) {
    printf("Decimal: %d\n", dec);
    printf("Hex: %X\n", dec);
    printf("Oct: %o\n", dec);

    printf("Binary: ");
    for (int i = 31; i >= 0; --i) {
        printf("%d", (dec >> i) & 1);
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
}

int main() {
    int d;
    printf("Enter an integer: ");
    scanf("%d", &d);
    conv(d);
    return 0;
}
