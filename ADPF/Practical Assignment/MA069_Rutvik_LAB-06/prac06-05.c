#include <stdio.h>

int main() {
    int no1, no2, add = 0, d1, d2;

    printf("Enter 4 digit 1st no: ");
    scanf("%d", &no1);

    printf("Enter 4 digit 2nd no: ");
    scanf("%d", &no2);

    if (no1 < 1000 || no1 > 9999 || no2 < 1000 || no2 > 9999) {
        printf("Enter only 4 digit value.\n");
    } else {
        while (no1 > 0 && no2 > 0) {
            d1 = no1 % 10;
            d2 = no2 % 10;
            add = add + d1 * d2;
            no1 = no1/10;
            no2 = no2/10;
        }

        printf("Addition of this no is : %d\n", add);
    }

    return 0;
}
