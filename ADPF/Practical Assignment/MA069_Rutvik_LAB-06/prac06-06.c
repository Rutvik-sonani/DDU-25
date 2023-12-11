#include <stdio.h>
#include <math.h>

int main() {
    // double n, S, F;
    double n;
    float y = 1;
    float e = 0.000001;

    printf("Enter the no : ");
    scanf("%lf", &n);

    float x = n;

    if (n < 0) {
        printf("Negative value is not valid input\n");
    } else {
        // S = n / 2;
        // F = S;

        // do {
        //     S = (F + n / F) / 2;
        // } while (fabs(F - x) >= 0.000001);

        while (x - y > e) {
            x = (x + y) / 2;
            y = n / x;
        }
    // return x;

        printf("%f\n", x);
    }

    return 0;
}
