#include <stdio.h>

int main() {
    float a1, a2, a3;

    printf("Enter the 1st angle: ");
    scanf("%f", &a1);
    printf("Enter the 2nd angle: ");
    scanf("%f", &a2);
    printf("Enter the third angle: ");
    scanf("%f", &a3);

    if (a1 > 0 && a2 > 0 && a3 > 0 && a1 + a2 + a3 == 180) {
        printf("A triangle is formed.\n");
    } else {
        printf("A triangle is not formed.\n");
    }

    return 0;
}
