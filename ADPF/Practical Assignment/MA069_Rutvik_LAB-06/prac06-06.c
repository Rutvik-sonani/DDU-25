#include <stdio.h>
#include <math.h>

int main() {
    double M, S, F;

    printf("Enter the no : ");
    scanf("%lf", &M);

    if (M < 0) {
        printf("Negative value is not valid input\n");
    } else {
        S = M / 2;
        F = S;

        do {
            S = (F + M / F) / 2;
        } while (fabs(F - S) >= 0.000001);

        printf("%.6lf\n", S);
    }

    return 0;
}
