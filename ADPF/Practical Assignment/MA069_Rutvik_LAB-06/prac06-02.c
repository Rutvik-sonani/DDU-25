#include <stdio.h>

int main() {
    double n1, n2, add, sub, div, mul;

    l1:
        printf("Enter no1: ");
        scanf("%lf", &n1);

        printf("\nEnter no2: ");
        scanf("%lf", &n2);

        add = n1 + n2;
        sub = n1 - n2;
        mul = n1 * n2;
        div = n1 / n2;

        printf("\n\nAddition is : %lf",add);
        printf("\nSubtraction is : %lf",sub);
        printf("\nMultiplication is : %lf",mul);
        printf("\nDivision is : %lf\n",div);

        int op;

        printf("You want to re-run this operation then enter 1 otherwise 0 for exit : ");
        scanf("%d",&op);

        if (op == 1) {
            goto l1;
        } else {
            return 0;
        }
    return 0;
}
