#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && b > c) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
